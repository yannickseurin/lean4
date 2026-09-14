// Lean compiler output
// Module: Lake.Util.Binder
// Imports: public import Lean.Parser.Term meta import Lean.Parser.Term
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
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_instRepr_repr(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg(lean_object*);
lean_object* l_Lean_instReprBinderInfo_repr(uint8_t, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_Parser_Term_binderIdent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_bracketedBinder_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_bracketedBinder_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_binderIdent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_bracketedBinder(uint8_t);
extern lean_object* l_Lean_Parser_Term_binderIdent;
lean_object* l_Lean_Parser_orelse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeTermArgument___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeTermArgument___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_instCoeTermArgument___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instCoeTermArgument___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instCoeTermArgument___closed__0 = (const lean_object*)&l_Lake_instCoeTermArgument___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeTermArgument = (const lean_object*)&l_Lake_instCoeTermArgument___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeEllipsisArgument = (const lean_object*)&l_Lake_instCoeTermArgument___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeNamedArgumentArgument = (const lean_object*)&l_Lake_instCoeTermArgument___closed__0_value;
static const lean_string_object l_Lake_mkHoleFrom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lake_mkHoleFrom___closed__0 = (const lean_object*)&l_Lake_mkHoleFrom___closed__0_value;
static const lean_string_object l_Lake_mkHoleFrom___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lake_mkHoleFrom___closed__1 = (const lean_object*)&l_Lake_mkHoleFrom___closed__1_value;
static const lean_string_object l_Lake_mkHoleFrom___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lake_mkHoleFrom___closed__2 = (const lean_object*)&l_Lake_mkHoleFrom___closed__2_value;
static const lean_string_object l_Lake_mkHoleFrom___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lake_mkHoleFrom___closed__3 = (const lean_object*)&l_Lake_mkHoleFrom___closed__3_value;
static const lean_ctor_object l_Lake_mkHoleFrom___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_mkHoleFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_mkHoleFrom___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_mkHoleFrom___closed__4_value_aux_0),((lean_object*)&l_Lake_mkHoleFrom___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_mkHoleFrom___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_mkHoleFrom___closed__4_value_aux_1),((lean_object*)&l_Lake_mkHoleFrom___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake_mkHoleFrom___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_mkHoleFrom___closed__4_value_aux_2),((lean_object*)&l_Lake_mkHoleFrom___closed__3_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lake_mkHoleFrom___closed__4 = (const lean_object*)&l_Lake_mkHoleFrom___closed__4_value;
static const lean_string_object l_Lake_mkHoleFrom___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lake_mkHoleFrom___closed__5 = (const lean_object*)&l_Lake_mkHoleFrom___closed__5_value;
LEAN_EXPORT lean_object* l_Lake_mkHoleFrom(lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkHoleFrom___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Lake_instCoeHoleTerm = (const lean_object*)&l_Lake_instCoeTermArgument___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeHoleBinderIdent = (const lean_object*)&l_Lake_instCoeTermArgument___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeIdentBinderIdent = (const lean_object*)&l_Lake_instCoeTermArgument___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeBinderIdentFunBinder = (const lean_object*)&l_Lake_instCoeTermArgument___closed__0_value;
static const lean_closure_object l_Lake_binder_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_binderIdent_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_binder_formatter___closed__0 = (const lean_object*)&l_Lake_binder_formatter___closed__0_value;
static const lean_closure_object l_Lake_binder_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_bracketedBinder_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_binder_formatter___closed__1 = (const lean_object*)&l_Lake_binder_formatter___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_binder_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_binder_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_binder_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_binderIdent_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_binder_parenthesizer___closed__0 = (const lean_object*)&l_Lake_binder_parenthesizer___closed__0_value;
static const lean_closure_object l_Lake_binder_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_bracketedBinder_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_binder_parenthesizer___closed__1 = (const lean_object*)&l_Lake_binder_parenthesizer___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_binder_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_binder_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_binder___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_binder___closed__0;
static lean_once_cell_t l_Lake_binder___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_binder___closed__1;
LEAN_EXPORT lean_object* l_Lake_binder;
LEAN_EXPORT lean_object* l_Lake_instCoeBinderIdentBinder___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeBinderIdentBinder___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_instCoeBinderIdentBinder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instCoeBinderIdentBinder___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instCoeBinderIdentBinder___closed__0 = (const lean_object*)&l_Lake_instCoeBinderIdentBinder___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeBinderIdentBinder = (const lean_object*)&l_Lake_instCoeBinderIdentBinder___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeBracketedBinderBinder = (const lean_object*)&l_Lake_instCoeBinderIdentBinder___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeBinderDeclBinder = (const lean_object*)&l_Lake_instCoeBinderIdentBinder___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeDepArrowTerm = (const lean_object*)&l_Lake_instCoeBinderIdentBinder___closed__0_value;
static const lean_ctor_object l_Lake_instInhabitedBinderSyntaxView_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_instInhabitedBinderSyntaxView_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedBinderSyntaxView_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedBinderSyntaxView_default = (const lean_object*)&l_Lake_instInhabitedBinderSyntaxView_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedBinderSyntaxView = (const lean_object*)&l_Lake_instInhabitedBinderSyntaxView_default___closed__0_value;
static const lean_string_object l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lake_instReprBinderSyntaxView_repr_spec__1(lean_object*);
static const lean_string_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__0 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__0_value;
static const lean_string_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ref"};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__1 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__1_value)}};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__2 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__2_value)}};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__3 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__3_value;
static const lean_string_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__4 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__4_value)}};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__5 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__3_value),((lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__6 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lake_instReprBinderSyntaxView_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__7;
static const lean_string_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__8 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__8_value)}};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__9 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__9_value;
static const lean_string_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__10 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__10_value)}};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__11 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lake_instReprBinderSyntaxView_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__12;
static const lean_string_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__13 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__13_value;
static const lean_ctor_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__13_value)}};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__14 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lake_instReprBinderSyntaxView_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__15;
static const lean_string_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "info"};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__16 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__16_value)}};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__17 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__17_value;
static const lean_string_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "modifier\?"};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__18 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__18_value;
static const lean_ctor_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__18_value)}};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__19 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__19_value;
static lean_once_cell_t l_Lake_instReprBinderSyntaxView_repr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__20;
static const lean_string_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__21 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__21_value;
static lean_once_cell_t l_Lake_instReprBinderSyntaxView_repr___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__22;
static lean_once_cell_t l_Lake_instReprBinderSyntaxView_repr___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__23;
static const lean_ctor_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__0_value)}};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__24 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__24_value;
static const lean_ctor_object l_Lake_instReprBinderSyntaxView_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__21_value)}};
static const lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg___closed__25 = (const lean_object*)&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__25_value;
LEAN_EXPORT lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprBinderSyntaxView_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprBinderSyntaxView_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprBinderSyntaxView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprBinderSyntaxView_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprBinderSyntaxView___closed__0 = (const lean_object*)&l_Lake_instReprBinderSyntaxView___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprBinderSyntaxView = (const lean_object*)&l_Lake_instReprBinderSyntaxView___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_expandOptType(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_expandOptType___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "identifier or `_` expected"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lake_getBinderIds___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lake_getBinderIds___boxed__const__1 = (const lean_object*)&l_Lake_getBinderIds___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lake_getBinderIds(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getBinderIds___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_expandBinderIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lake_expandBinderIdent___closed__0 = (const lean_object*)&l_Lake_expandBinderIdent___closed__0_value;
static lean_once_cell_t l_Lake_expandBinderIdent___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_expandBinderIdent___closed__1;
static const lean_ctor_object l_Lake_expandBinderIdent___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_expandBinderIdent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lake_expandBinderIdent___closed__2 = (const lean_object*)&l_Lake_expandBinderIdent___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_expandBinderIdent(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_expandBinderIdent___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_expandOptIdent(lean_object*);
LEAN_EXPORT lean_object* l_Lake_expandOptIdent___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_expandBinderType(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_expandBinderType___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_expandBinderModifier(lean_object*);
LEAN_EXPORT lean_object* l_Lake_expandBinderModifier___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_expandBinderCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicitBinder"};
static const lean_object* l_Lake_expandBinderCore___closed__0 = (const lean_object*)&l_Lake_expandBinderCore___closed__0_value;
static const lean_ctor_object l_Lake_expandBinderCore___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_mkHoleFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_expandBinderCore___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandBinderCore___closed__1_value_aux_0),((lean_object*)&l_Lake_mkHoleFrom___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_expandBinderCore___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandBinderCore___closed__1_value_aux_1),((lean_object*)&l_Lake_mkHoleFrom___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake_expandBinderCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandBinderCore___closed__1_value_aux_2),((lean_object*)&l_Lake_expandBinderCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 119, 193, 23, 170, 93, 183, 238)}};
static const lean_object* l_Lake_expandBinderCore___closed__1 = (const lean_object*)&l_Lake_expandBinderCore___closed__1_value;
static const lean_string_object l_Lake_expandBinderCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "implicitBinder"};
static const lean_object* l_Lake_expandBinderCore___closed__2 = (const lean_object*)&l_Lake_expandBinderCore___closed__2_value;
static const lean_ctor_object l_Lake_expandBinderCore___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_mkHoleFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_expandBinderCore___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandBinderCore___closed__3_value_aux_0),((lean_object*)&l_Lake_mkHoleFrom___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_expandBinderCore___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandBinderCore___closed__3_value_aux_1),((lean_object*)&l_Lake_mkHoleFrom___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake_expandBinderCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandBinderCore___closed__3_value_aux_2),((lean_object*)&l_Lake_expandBinderCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(39, 181, 62, 102, 86, 14, 161, 96)}};
static const lean_object* l_Lake_expandBinderCore___closed__3 = (const lean_object*)&l_Lake_expandBinderCore___closed__3_value;
static const lean_string_object l_Lake_expandBinderCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "strictImplicitBinder"};
static const lean_object* l_Lake_expandBinderCore___closed__4 = (const lean_object*)&l_Lake_expandBinderCore___closed__4_value;
static const lean_ctor_object l_Lake_expandBinderCore___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_mkHoleFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_expandBinderCore___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandBinderCore___closed__5_value_aux_0),((lean_object*)&l_Lake_mkHoleFrom___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_expandBinderCore___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandBinderCore___closed__5_value_aux_1),((lean_object*)&l_Lake_mkHoleFrom___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake_expandBinderCore___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandBinderCore___closed__5_value_aux_2),((lean_object*)&l_Lake_expandBinderCore___closed__4_value),LEAN_SCALAR_PTR_LITERAL(125, 223, 215, 186, 222, 17, 242, 189)}};
static const lean_object* l_Lake_expandBinderCore___closed__5 = (const lean_object*)&l_Lake_expandBinderCore___closed__5_value;
static const lean_string_object l_Lake_expandBinderCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instBinder"};
static const lean_object* l_Lake_expandBinderCore___closed__6 = (const lean_object*)&l_Lake_expandBinderCore___closed__6_value;
static const lean_ctor_object l_Lake_expandBinderCore___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_mkHoleFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_expandBinderCore___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandBinderCore___closed__7_value_aux_0),((lean_object*)&l_Lake_mkHoleFrom___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_expandBinderCore___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandBinderCore___closed__7_value_aux_1),((lean_object*)&l_Lake_mkHoleFrom___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake_expandBinderCore___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandBinderCore___closed__7_value_aux_2),((lean_object*)&l_Lake_expandBinderCore___closed__6_value),LEAN_SCALAR_PTR_LITERAL(198, 219, 89, 171, 221, 95, 22, 227)}};
static const lean_object* l_Lake_expandBinderCore___closed__7 = (const lean_object*)&l_Lake_expandBinderCore___closed__7_value;
LEAN_EXPORT lean_object* l_Lake_expandBinderCore(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_expandBinderCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_expandBinder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_expandBinder___closed__0 = (const lean_object*)&l_Lake_expandBinder___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_expandBinder(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_expandBinder___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinders_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinders_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_expandBinders(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_expandBinders___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_BinderSyntaxView_mkBinder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lake_BinderSyntaxView_mkBinder___closed__0 = (const lean_object*)&l_Lake_BinderSyntaxView_mkBinder___closed__0_value;
static const lean_string_object l_Lake_BinderSyntaxView_mkBinder___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lake_BinderSyntaxView_mkBinder___closed__1 = (const lean_object*)&l_Lake_BinderSyntaxView_mkBinder___closed__1_value;
static const lean_ctor_object l_Lake_BinderSyntaxView_mkBinder___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_BinderSyntaxView_mkBinder___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lake_BinderSyntaxView_mkBinder___closed__2 = (const lean_object*)&l_Lake_BinderSyntaxView_mkBinder___closed__2_value;
static const lean_string_object l_Lake_BinderSyntaxView_mkBinder___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lake_BinderSyntaxView_mkBinder___closed__3 = (const lean_object*)&l_Lake_BinderSyntaxView_mkBinder___closed__3_value;
static lean_once_cell_t l_Lake_BinderSyntaxView_mkBinder___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BinderSyntaxView_mkBinder___closed__4;
static const lean_string_object l_Lake_BinderSyntaxView_mkBinder___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lake_BinderSyntaxView_mkBinder___closed__5 = (const lean_object*)&l_Lake_BinderSyntaxView_mkBinder___closed__5_value;
static const lean_array_object l_Lake_BinderSyntaxView_mkBinder___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_BinderSyntaxView_mkBinder___closed__6 = (const lean_object*)&l_Lake_BinderSyntaxView_mkBinder___closed__6_value;
static const lean_string_object l_Lake_BinderSyntaxView_mkBinder___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lake_BinderSyntaxView_mkBinder___closed__7 = (const lean_object*)&l_Lake_BinderSyntaxView_mkBinder___closed__7_value;
static const lean_string_object l_Lake_BinderSyntaxView_mkBinder___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lake_BinderSyntaxView_mkBinder___closed__8 = (const lean_object*)&l_Lake_BinderSyntaxView_mkBinder___closed__8_value;
static const lean_string_object l_Lake_BinderSyntaxView_mkBinder___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⦃"};
static const lean_object* l_Lake_BinderSyntaxView_mkBinder___closed__9 = (const lean_object*)&l_Lake_BinderSyntaxView_mkBinder___closed__9_value;
static const lean_string_object l_Lake_BinderSyntaxView_mkBinder___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⦄"};
static const lean_object* l_Lake_BinderSyntaxView_mkBinder___closed__10 = (const lean_object*)&l_Lake_BinderSyntaxView_mkBinder___closed__10_value;
static const lean_string_object l_Lake_BinderSyntaxView_mkBinder___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lake_BinderSyntaxView_mkBinder___closed__11 = (const lean_object*)&l_Lake_BinderSyntaxView_mkBinder___closed__11_value;
static const lean_string_object l_Lake_BinderSyntaxView_mkBinder___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lake_BinderSyntaxView_mkBinder___closed__12 = (const lean_object*)&l_Lake_BinderSyntaxView_mkBinder___closed__12_value;
LEAN_EXPORT lean_object* l_Lake_BinderSyntaxView_mkBinder(lean_object*);
static const lean_string_object l_Lake_BinderSyntaxView_mkDepArrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "depArrow"};
static const lean_object* l_Lake_BinderSyntaxView_mkDepArrow___closed__0 = (const lean_object*)&l_Lake_BinderSyntaxView_mkDepArrow___closed__0_value;
static const lean_ctor_object l_Lake_BinderSyntaxView_mkDepArrow___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_mkHoleFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_BinderSyntaxView_mkDepArrow___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkDepArrow___closed__1_value_aux_0),((lean_object*)&l_Lake_mkHoleFrom___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_BinderSyntaxView_mkDepArrow___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkDepArrow___closed__1_value_aux_1),((lean_object*)&l_Lake_mkHoleFrom___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake_BinderSyntaxView_mkDepArrow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkDepArrow___closed__1_value_aux_2),((lean_object*)&l_Lake_BinderSyntaxView_mkDepArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 137, 180, 163, 158, 211, 191, 168)}};
static const lean_object* l_Lake_BinderSyntaxView_mkDepArrow___closed__1 = (const lean_object*)&l_Lake_BinderSyntaxView_mkDepArrow___closed__1_value;
static const lean_string_object l_Lake_BinderSyntaxView_mkDepArrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "→"};
static const lean_object* l_Lake_BinderSyntaxView_mkDepArrow___closed__2 = (const lean_object*)&l_Lake_BinderSyntaxView_mkDepArrow___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_BinderSyntaxView_mkDepArrow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkDepArrow_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkDepArrow_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkDepArrow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkDepArrow___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_BinderSyntaxView_mkFunBinder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "UnhygienicMain"};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__0 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__0_value;
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 169, 242, 144, 140, 56, 85, 78)}};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__1 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__1_value;
static const lean_string_object l_Lake_BinderSyntaxView_mkFunBinder___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__2 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__2_value;
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_mkHoleFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__3_value_aux_0),((lean_object*)&l_Lake_mkHoleFrom___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__3_value_aux_1),((lean_object*)&l_Lake_mkHoleFrom___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__3_value_aux_2),((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__2_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__3 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__3_value;
static const lean_string_object l_Lake_BinderSyntaxView_mkFunBinder___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__4 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__4_value;
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_mkHoleFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__5_value_aux_0),((lean_object*)&l_Lake_mkHoleFrom___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__5_value_aux_1),((lean_object*)&l_Lake_mkHoleFrom___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__5_value_aux_2),((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__4_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__5 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__5_value;
static const lean_string_object l_Lake_BinderSyntaxView_mkFunBinder___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__6 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__6_value;
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__6_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__7 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__7_value;
static const lean_string_object l_Lake_BinderSyntaxView_mkFunBinder___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__8 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__8_value;
static lean_once_cell_t l_Lake_BinderSyntaxView_mkFunBinder___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__9;
static lean_once_cell_t l_Lake_BinderSyntaxView_mkFunBinder___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__10;
static lean_once_cell_t l_Lake_BinderSyntaxView_mkFunBinder___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__11;
static const lean_string_object l_Lake_BinderSyntaxView_mkFunBinder___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__12 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__12_value;
static const lean_string_object l_Lake_BinderSyntaxView_mkFunBinder___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "BinderSyntaxView"};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__13 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__13_value;
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__12_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__14_value_aux_0),((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__13_value),LEAN_SCALAR_PTR_LITERAL(179, 223, 200, 222, 123, 238, 152, 251)}};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__14 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__14_value;
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__14_value)}};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__15 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__15_value;
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_mkHoleFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__16_value_aux_0),((lean_object*)&l_Lake_mkHoleFrom___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__16 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__16_value;
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__16_value)}};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__17 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__17_value;
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_mkHoleFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__18 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__18_value;
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__18_value)}};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__19 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__19_value;
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__19_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__20 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__20_value;
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__17_value),((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__20_value)}};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__21 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__21_value;
static const lean_ctor_object l_Lake_BinderSyntaxView_mkFunBinder___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__15_value),((lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__21_value)}};
static const lean_object* l_Lake_BinderSyntaxView_mkFunBinder___closed__22 = (const lean_object*)&l_Lake_BinderSyntaxView_mkFunBinder___closed__22_value;
LEAN_EXPORT lean_object* l_Lake_BinderSyntaxView_mkFunBinder(lean_object*);
static const lean_string_object l_Lake_BinderSyntaxView_mkArgument___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "namedArgument"};
static const lean_object* l_Lake_BinderSyntaxView_mkArgument___closed__0 = (const lean_object*)&l_Lake_BinderSyntaxView_mkArgument___closed__0_value;
static const lean_ctor_object l_Lake_BinderSyntaxView_mkArgument___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_mkHoleFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_BinderSyntaxView_mkArgument___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkArgument___closed__1_value_aux_0),((lean_object*)&l_Lake_mkHoleFrom___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_BinderSyntaxView_mkArgument___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkArgument___closed__1_value_aux_1),((lean_object*)&l_Lake_mkHoleFrom___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake_BinderSyntaxView_mkArgument___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BinderSyntaxView_mkArgument___closed__1_value_aux_2),((lean_object*)&l_Lake_BinderSyntaxView_mkArgument___closed__0_value),LEAN_SCALAR_PTR_LITERAL(226, 89, 129, 113, 173, 121, 169, 188)}};
static const lean_object* l_Lake_BinderSyntaxView_mkArgument___closed__1 = (const lean_object*)&l_Lake_BinderSyntaxView_mkArgument___closed__1_value;
static const lean_string_object l_Lake_BinderSyntaxView_mkArgument___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lake_BinderSyntaxView_mkArgument___closed__2 = (const lean_object*)&l_Lake_BinderSyntaxView_mkArgument___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_BinderSyntaxView_mkArgument(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeTermArgument___lam__0(lean_object* v_s_1_){
_start:
{
lean_inc(v_s_1_);
return v_s_1_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeTermArgument___lam__0___boxed(lean_object* v_s_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = l_Lake_instCoeTermArgument___lam__0(v_s_2_);
lean_dec(v_s_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkHoleFrom(lean_object* v_ref_18_){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; uint8_t v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_19_ = ((lean_object*)(l_Lake_mkHoleFrom___closed__4));
v___x_20_ = ((lean_object*)(l_Lake_mkHoleFrom___closed__5));
v___x_21_ = 0;
v___x_22_ = l_Lean_mkAtomFrom(v_ref_18_, v___x_20_, v___x_21_);
v___x_23_ = lean_unsigned_to_nat(1u);
v___x_24_ = lean_mk_empty_array_with_capacity(v___x_23_);
v___x_25_ = lean_array_push(v___x_24_, v___x_22_);
v___x_26_ = lean_box(2);
v___x_27_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
lean_ctor_set(v___x_27_, 1, v___x_19_);
lean_ctor_set(v___x_27_, 2, v___x_25_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkHoleFrom___boxed(lean_object* v_ref_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lake_mkHoleFrom(v_ref_28_);
lean_dec(v_ref_28_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lake_binder_formatter(lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_43_ = ((lean_object*)(l_Lake_binder_formatter___closed__0));
v___x_44_ = ((lean_object*)(l_Lake_binder_formatter___closed__1));
v___x_45_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_43_, v___x_44_, v_a_38_, v_a_39_, v_a_40_, v_a_41_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lake_binder_formatter___boxed(lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lake_binder_formatter(v_a_46_, v_a_47_, v_a_48_, v_a_49_);
lean_dec(v_a_49_);
lean_dec_ref(v_a_48_);
lean_dec(v_a_47_);
lean_dec_ref(v_a_46_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lake_binder_parenthesizer(lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = ((lean_object*)(l_Lake_binder_parenthesizer___closed__0));
v___x_62_ = ((lean_object*)(l_Lake_binder_parenthesizer___closed__1));
v___x_63_ = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(v___x_61_, v___x_62_, v_a_56_, v_a_57_, v_a_58_, v_a_59_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lake_binder_parenthesizer___boxed(lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lake_binder_parenthesizer(v_a_64_, v_a_65_, v_a_66_, v_a_67_);
lean_dec(v_a_67_);
lean_dec_ref(v_a_66_);
lean_dec(v_a_65_);
lean_dec_ref(v_a_64_);
return v_res_69_;
}
}
static lean_object* _init_l_Lake_binder___closed__0(void){
_start:
{
uint8_t v___x_70_; lean_object* v___x_71_; 
v___x_70_ = 0;
v___x_71_ = l_Lean_Parser_Term_bracketedBinder(v___x_70_);
return v___x_71_;
}
}
static lean_object* _init_l_Lake_binder___closed__1(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_72_ = lean_obj_once(&l_Lake_binder___closed__0, &l_Lake_binder___closed__0_once, _init_l_Lake_binder___closed__0);
v___x_73_ = l_Lean_Parser_Term_binderIdent;
v___x_74_ = l_Lean_Parser_orelse(v___x_73_, v___x_72_);
return v___x_74_;
}
}
static lean_object* _init_l_Lake_binder(void){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lean_obj_once(&l_Lake_binder___closed__1, &l_Lake_binder___closed__1_once, _init_l_Lake_binder___closed__1);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeBinderIdentBinder___lam__0(lean_object* v_stx_76_){
_start:
{
lean_inc(v_stx_76_);
return v_stx_76_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeBinderIdentBinder___lam__0___boxed(lean_object* v_stx_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Lake_instCoeBinderIdentBinder___lam__0(v_stx_77_);
lean_dec(v_stx_77_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0(lean_object* v_x_96_, lean_object* v_x_97_){
_start:
{
if (lean_obj_tag(v_x_96_) == 0)
{
lean_object* v___x_98_; 
v___x_98_ = ((lean_object*)(l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___closed__1));
return v___x_98_;
}
else
{
lean_object* v_val_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v_val_99_ = lean_ctor_get(v_x_96_, 0);
lean_inc(v_val_99_);
lean_dec_ref_known(v_x_96_, 1);
v___x_100_ = ((lean_object*)(l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___closed__3));
v___x_101_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_val_99_);
v___x_102_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_100_);
lean_ctor_set(v___x_102_, 1, v___x_101_);
v___x_103_ = l_Repr_addAppParen(v___x_102_, v_x_97_);
return v___x_103_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0___boxed(lean_object* v_x_104_, lean_object* v_x_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0(v_x_104_, v_x_105_);
lean_dec(v_x_105_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lake_instReprBinderSyntaxView_repr_spec__1(lean_object* v_a_107_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = lean_nat_to_int(v_a_107_);
return v___x_108_;
}
}
static lean_object* _init_l_Lake_instReprBinderSyntaxView_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = lean_unsigned_to_nat(7u);
v___x_123_ = lean_nat_to_int(v___x_122_);
return v___x_123_;
}
}
static lean_object* _init_l_Lake_instReprBinderSyntaxView_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = lean_unsigned_to_nat(6u);
v___x_131_ = lean_nat_to_int(v___x_130_);
return v___x_131_;
}
}
static lean_object* _init_l_Lake_instReprBinderSyntaxView_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = lean_unsigned_to_nat(8u);
v___x_136_ = lean_nat_to_int(v___x_135_);
return v___x_136_;
}
}
static lean_object* _init_l_Lake_instReprBinderSyntaxView_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = lean_unsigned_to_nat(13u);
v___x_144_ = lean_nat_to_int(v___x_143_);
return v___x_144_;
}
}
static lean_object* _init_l_Lake_instReprBinderSyntaxView_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = ((lean_object*)(l_Lake_instReprBinderSyntaxView_repr___redArg___closed__0));
v___x_147_ = lean_string_length(v___x_146_);
return v___x_147_;
}
}
static lean_object* _init_l_Lake_instReprBinderSyntaxView_repr___redArg___closed__23(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_148_ = lean_obj_once(&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__22, &l_Lake_instReprBinderSyntaxView_repr___redArg___closed__22_once, _init_l_Lake_instReprBinderSyntaxView_repr___redArg___closed__22);
v___x_149_ = lean_nat_to_int(v___x_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprBinderSyntaxView_repr___redArg(lean_object* v_x_154_){
_start:
{
lean_object* v_ref_155_; lean_object* v_id_156_; lean_object* v_type_157_; uint8_t v_info_158_; lean_object* v_modifier_x3f_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; uint8_t v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v_ref_155_ = lean_ctor_get(v_x_154_, 0);
lean_inc(v_ref_155_);
v_id_156_ = lean_ctor_get(v_x_154_, 1);
lean_inc(v_id_156_);
v_type_157_ = lean_ctor_get(v_x_154_, 2);
lean_inc(v_type_157_);
v_info_158_ = lean_ctor_get_uint8(v_x_154_, sizeof(void*)*4);
v_modifier_x3f_159_ = lean_ctor_get(v_x_154_, 3);
lean_inc(v_modifier_x3f_159_);
lean_dec_ref(v_x_154_);
v___x_160_ = ((lean_object*)(l_Lake_instReprBinderSyntaxView_repr___redArg___closed__5));
v___x_161_ = ((lean_object*)(l_Lake_instReprBinderSyntaxView_repr___redArg___closed__6));
v___x_162_ = lean_obj_once(&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__7, &l_Lake_instReprBinderSyntaxView_repr___redArg___closed__7_once, _init_l_Lake_instReprBinderSyntaxView_repr___redArg___closed__7);
v___x_163_ = lean_unsigned_to_nat(0u);
v___x_164_ = l_Lean_Syntax_instRepr_repr(v_ref_155_, v___x_163_);
v___x_165_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_162_);
lean_ctor_set(v___x_165_, 1, v___x_164_);
v___x_166_ = 0;
v___x_167_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_167_, 0, v___x_165_);
lean_ctor_set_uint8(v___x_167_, sizeof(void*)*1, v___x_166_);
v___x_168_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_168_, 0, v___x_161_);
lean_ctor_set(v___x_168_, 1, v___x_167_);
v___x_169_ = ((lean_object*)(l_Lake_instReprBinderSyntaxView_repr___redArg___closed__9));
v___x_170_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_170_, 0, v___x_168_);
lean_ctor_set(v___x_170_, 1, v___x_169_);
v___x_171_ = lean_box(1);
v___x_172_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_172_, 0, v___x_170_);
lean_ctor_set(v___x_172_, 1, v___x_171_);
v___x_173_ = ((lean_object*)(l_Lake_instReprBinderSyntaxView_repr___redArg___closed__11));
v___x_174_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_174_, 0, v___x_172_);
lean_ctor_set(v___x_174_, 1, v___x_173_);
v___x_175_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
lean_ctor_set(v___x_175_, 1, v___x_160_);
v___x_176_ = lean_obj_once(&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__12, &l_Lake_instReprBinderSyntaxView_repr___redArg___closed__12_once, _init_l_Lake_instReprBinderSyntaxView_repr___redArg___closed__12);
v___x_177_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_id_156_);
v___x_178_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_176_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
v___x_179_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_179_, 0, v___x_178_);
lean_ctor_set_uint8(v___x_179_, sizeof(void*)*1, v___x_166_);
v___x_180_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_180_, 0, v___x_175_);
lean_ctor_set(v___x_180_, 1, v___x_179_);
v___x_181_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
lean_ctor_set(v___x_181_, 1, v___x_169_);
v___x_182_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
lean_ctor_set(v___x_182_, 1, v___x_171_);
v___x_183_ = ((lean_object*)(l_Lake_instReprBinderSyntaxView_repr___redArg___closed__14));
v___x_184_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_184_, 0, v___x_182_);
lean_ctor_set(v___x_184_, 1, v___x_183_);
v___x_185_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
lean_ctor_set(v___x_185_, 1, v___x_160_);
v___x_186_ = lean_obj_once(&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__15, &l_Lake_instReprBinderSyntaxView_repr___redArg___closed__15_once, _init_l_Lake_instReprBinderSyntaxView_repr___redArg___closed__15);
v___x_187_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_type_157_);
v___x_188_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_186_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
v___x_189_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_189_, 0, v___x_188_);
lean_ctor_set_uint8(v___x_189_, sizeof(void*)*1, v___x_166_);
v___x_190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_190_, 0, v___x_185_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
v___x_191_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
lean_ctor_set(v___x_191_, 1, v___x_169_);
v___x_192_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
lean_ctor_set(v___x_192_, 1, v___x_171_);
v___x_193_ = ((lean_object*)(l_Lake_instReprBinderSyntaxView_repr___redArg___closed__17));
v___x_194_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_192_);
lean_ctor_set(v___x_194_, 1, v___x_193_);
v___x_195_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
lean_ctor_set(v___x_195_, 1, v___x_160_);
v___x_196_ = l_Lean_instReprBinderInfo_repr(v_info_158_, v___x_163_);
v___x_197_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_197_, 0, v___x_186_);
lean_ctor_set(v___x_197_, 1, v___x_196_);
v___x_198_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_198_, 0, v___x_197_);
lean_ctor_set_uint8(v___x_198_, sizeof(void*)*1, v___x_166_);
v___x_199_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_199_, 0, v___x_195_);
lean_ctor_set(v___x_199_, 1, v___x_198_);
v___x_200_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
lean_ctor_set(v___x_200_, 1, v___x_169_);
v___x_201_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
lean_ctor_set(v___x_201_, 1, v___x_171_);
v___x_202_ = ((lean_object*)(l_Lake_instReprBinderSyntaxView_repr___redArg___closed__19));
v___x_203_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_203_, 0, v___x_201_);
lean_ctor_set(v___x_203_, 1, v___x_202_);
v___x_204_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
lean_ctor_set(v___x_204_, 1, v___x_160_);
v___x_205_ = lean_obj_once(&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__20, &l_Lake_instReprBinderSyntaxView_repr___redArg___closed__20_once, _init_l_Lake_instReprBinderSyntaxView_repr___redArg___closed__20);
v___x_206_ = l_Option_repr___at___00Lake_instReprBinderSyntaxView_repr_spec__0(v_modifier_x3f_159_, v___x_163_);
v___x_207_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_207_, 0, v___x_205_);
lean_ctor_set(v___x_207_, 1, v___x_206_);
v___x_208_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_208_, 0, v___x_207_);
lean_ctor_set_uint8(v___x_208_, sizeof(void*)*1, v___x_166_);
v___x_209_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_204_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = lean_obj_once(&l_Lake_instReprBinderSyntaxView_repr___redArg___closed__23, &l_Lake_instReprBinderSyntaxView_repr___redArg___closed__23_once, _init_l_Lake_instReprBinderSyntaxView_repr___redArg___closed__23);
v___x_211_ = ((lean_object*)(l_Lake_instReprBinderSyntaxView_repr___redArg___closed__24));
v___x_212_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_211_);
lean_ctor_set(v___x_212_, 1, v___x_209_);
v___x_213_ = ((lean_object*)(l_Lake_instReprBinderSyntaxView_repr___redArg___closed__25));
v___x_214_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_212_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
v___x_215_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_210_);
lean_ctor_set(v___x_215_, 1, v___x_214_);
v___x_216_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_216_, 0, v___x_215_);
lean_ctor_set_uint8(v___x_216_, sizeof(void*)*1, v___x_166_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprBinderSyntaxView_repr(lean_object* v_x_217_, lean_object* v_prec_218_){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = l_Lake_instReprBinderSyntaxView_repr___redArg(v_x_217_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprBinderSyntaxView_repr___boxed(lean_object* v_x_220_, lean_object* v_prec_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Lake_instReprBinderSyntaxView_repr(v_x_220_, v_prec_221_);
lean_dec(v_prec_221_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lake_expandOptType(lean_object* v_ref_225_, lean_object* v_optType_226_){
_start:
{
uint8_t v___x_227_; 
v___x_227_ = l_Lean_Syntax_isNone(v_optType_226_);
if (v___x_227_ == 0)
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_228_ = lean_unsigned_to_nat(0u);
v___x_229_ = l_Lean_Syntax_getArg(v_optType_226_, v___x_228_);
v___x_230_ = lean_unsigned_to_nat(1u);
v___x_231_ = l_Lean_Syntax_getArg(v___x_229_, v___x_230_);
lean_dec(v___x_229_);
return v___x_231_;
}
else
{
lean_object* v___x_232_; 
v___x_232_ = l_Lake_mkHoleFrom(v_ref_225_);
return v___x_232_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_expandOptType___boxed(lean_object* v_ref_233_, lean_object* v_optType_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Lake_expandOptType(v_ref_233_, v_optType_234_);
lean_dec(v_optType_234_);
lean_dec(v_ref_233_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0(size_t v_sz_240_, size_t v_i_241_, lean_object* v_bs_242_, lean_object* v___y_243_, lean_object* v___y_244_){
_start:
{
uint8_t v___x_245_; 
v___x_245_ = lean_usize_dec_lt(v_i_241_, v_sz_240_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_246_ = l_unsafeCast___redArg(v_bs_242_);
lean_dec_ref(v_bs_242_);
v___x_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
lean_ctor_set(v___x_247_, 1, v___y_244_);
return v___x_247_;
}
else
{
lean_object* v_v_248_; lean_object* v___x_249_; lean_object* v_bs_x27_250_; lean_object* v_a_252_; lean_object* v_a_253_; lean_object* v___x_259_; uint8_t v___y_261_; lean_object* v_k_275_; lean_object* v___x_276_; uint8_t v___x_277_; 
v_v_248_ = lean_array_uget(v_bs_242_, v_i_241_);
v___x_249_ = lean_unsigned_to_nat(0u);
v_bs_x27_250_ = lean_array_uset(v_bs_242_, v_i_241_, v___x_249_);
v___x_259_ = l_unsafeCast___redArg(v_v_248_);
lean_dec(v_v_248_);
lean_inc(v___x_259_);
v_k_275_ = l_Lean_Syntax_getKind(v___x_259_);
v___x_276_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0___closed__2));
v___x_277_ = lean_name_eq(v_k_275_, v___x_276_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; uint8_t v___x_279_; 
v___x_278_ = ((lean_object*)(l_Lake_mkHoleFrom___closed__4));
v___x_279_ = lean_name_eq(v_k_275_, v___x_278_);
lean_dec(v_k_275_);
v___y_261_ = v___x_279_;
goto v___jp_260_;
}
else
{
lean_dec(v_k_275_);
v___y_261_ = v___x_277_;
goto v___jp_260_;
}
v___jp_251_:
{
size_t v___x_254_; size_t v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_254_ = ((size_t)1ULL);
v___x_255_ = lean_usize_add(v_i_241_, v___x_254_);
v___x_256_ = l_unsafeCast___redArg(v_a_252_);
lean_dec(v_a_252_);
v___x_257_ = lean_array_uset(v_bs_x27_250_, v_i_241_, v___x_256_);
v_i_241_ = v___x_255_;
v_bs_242_ = v___x_257_;
v___y_244_ = v_a_253_;
goto _start;
}
v___jp_260_:
{
if (v___y_261_ == 0)
{
lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_262_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0___closed__0));
v___x_263_ = l_Lean_Macro_throwErrorAt___redArg(v___x_259_, v___x_262_, v___y_243_, v___y_244_);
lean_dec(v___x_259_);
if (lean_obj_tag(v___x_263_) == 0)
{
lean_object* v_a_264_; lean_object* v_a_265_; 
v_a_264_ = lean_ctor_get(v___x_263_, 0);
lean_inc(v_a_264_);
v_a_265_ = lean_ctor_get(v___x_263_, 1);
lean_inc(v_a_265_);
lean_dec_ref_known(v___x_263_, 2);
v_a_252_ = v_a_264_;
v_a_253_ = v_a_265_;
goto v___jp_251_;
}
else
{
lean_object* v_a_266_; lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_274_; 
lean_dec_ref(v_bs_x27_250_);
v_a_266_ = lean_ctor_get(v___x_263_, 0);
v_a_267_ = lean_ctor_get(v___x_263_, 1);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_274_ == 0)
{
v___x_269_ = v___x_263_;
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_a_267_);
lean_inc(v_a_266_);
lean_dec(v___x_263_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_272_; 
if (v_isShared_270_ == 0)
{
v___x_272_ = v___x_269_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_a_266_);
lean_ctor_set(v_reuseFailAlloc_273_, 1, v_a_267_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
else
{
v_a_252_ = v___x_259_;
v_a_253_ = v___y_244_;
goto v___jp_251_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0___boxed(lean_object* v_sz_280_, lean_object* v_i_281_, lean_object* v_bs_282_, lean_object* v___y_283_, lean_object* v___y_284_){
_start:
{
size_t v_sz_boxed_285_; size_t v_i_boxed_286_; lean_object* v_res_287_; 
v_sz_boxed_285_ = lean_unbox_usize(v_sz_280_);
lean_dec(v_sz_280_);
v_i_boxed_286_ = lean_unbox_usize(v_i_281_);
lean_dec(v_i_281_);
v_res_287_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0(v_sz_boxed_285_, v_i_boxed_286_, v_bs_282_, v___y_283_, v___y_284_);
lean_dec_ref(v___y_283_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBinderIds(lean_object* v_ids_290_, lean_object* v_a_291_, lean_object* v_a_292_){
_start:
{
lean_object* v___x_293_; size_t v_sz_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_526__overap_299_; lean_object* v___x_300_; 
v___x_293_ = l_Lean_Syntax_getArgs(v_ids_290_);
v_sz_294_ = lean_array_size(v___x_293_);
v___x_295_ = l_unsafeCast___redArg(v___x_293_);
lean_dec_ref(v___x_293_);
v___x_296_ = lean_box_usize(v_sz_294_);
v___x_297_ = ((lean_object*)(l_Lake_getBinderIds___boxed__const__1));
v___x_298_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_getBinderIds_spec__0___boxed), 5, 3);
lean_closure_set(v___x_298_, 0, v___x_296_);
lean_closure_set(v___x_298_, 1, v___x_297_);
lean_closure_set(v___x_298_, 2, v___x_295_);
v___x_526__overap_299_ = l_unsafeCast___redArg(v___x_298_);
lean_dec_ref(v___x_298_);
lean_inc_ref(v_a_291_);
v___x_300_ = lean_apply_2(v___x_526__overap_299_, v_a_291_, v_a_292_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBinderIds___boxed(lean_object* v_ids_301_, lean_object* v_a_302_, lean_object* v_a_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l_Lake_getBinderIds(v_ids_301_, v_a_302_, v_a_303_);
lean_dec_ref(v_a_302_);
lean_dec(v_ids_301_);
return v_res_304_;
}
}
static lean_object* _init_l_Lake_expandBinderIdent___closed__1(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = ((lean_object*)(l_Lake_expandBinderIdent___closed__0));
v___x_307_ = l_String_toRawSubstring_x27(v___x_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Lake_expandBinderIdent(lean_object* v_stx_310_, lean_object* v_a_311_, lean_object* v_a_312_){
_start:
{
lean_object* v___x_313_; uint8_t v___x_314_; 
v___x_313_ = ((lean_object*)(l_Lake_mkHoleFrom___closed__4));
lean_inc(v_stx_310_);
v___x_314_ = l_Lean_Syntax_isOfKind(v_stx_310_, v___x_313_);
if (v___x_314_ == 0)
{
lean_object* v___x_315_; 
v___x_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_315_, 0, v_stx_310_);
lean_ctor_set(v___x_315_, 1, v_a_312_);
return v___x_315_;
}
else
{
lean_object* v_quotContext_316_; lean_object* v_currMacroScope_317_; lean_object* v_ref_318_; uint8_t v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
lean_dec(v_stx_310_);
v_quotContext_316_ = lean_ctor_get(v_a_311_, 1);
v_currMacroScope_317_ = lean_ctor_get(v_a_311_, 2);
v_ref_318_ = lean_ctor_get(v_a_311_, 5);
v___x_319_ = 0;
v___x_320_ = l_Lean_SourceInfo_fromRef(v_ref_318_, v___x_319_);
v___x_321_ = lean_obj_once(&l_Lake_expandBinderIdent___closed__1, &l_Lake_expandBinderIdent___closed__1_once, _init_l_Lake_expandBinderIdent___closed__1);
v___x_322_ = ((lean_object*)(l_Lake_expandBinderIdent___closed__2));
lean_inc(v_currMacroScope_317_);
lean_inc(v_quotContext_316_);
v___x_323_ = l_Lean_addMacroScope(v_quotContext_316_, v___x_322_, v_currMacroScope_317_);
v___x_324_ = lean_box(0);
v___x_325_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_325_, 0, v___x_320_);
lean_ctor_set(v___x_325_, 1, v___x_321_);
lean_ctor_set(v___x_325_, 2, v___x_323_);
lean_ctor_set(v___x_325_, 3, v___x_324_);
v___x_326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_326_, 0, v___x_325_);
lean_ctor_set(v___x_326_, 1, v_a_312_);
return v___x_326_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_expandBinderIdent___boxed(lean_object* v_stx_327_, lean_object* v_a_328_, lean_object* v_a_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Lake_expandBinderIdent(v_stx_327_, v_a_328_, v_a_329_);
lean_dec_ref(v_a_328_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lake_expandOptIdent(lean_object* v_stx_331_){
_start:
{
uint8_t v___x_332_; 
v___x_332_ = l_Lean_Syntax_isNone(v_stx_331_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = lean_unsigned_to_nat(0u);
v___x_334_ = l_Lean_Syntax_getArg(v_stx_331_, v___x_333_);
return v___x_334_;
}
else
{
lean_object* v___x_335_; 
v___x_335_ = l_Lake_mkHoleFrom(v_stx_331_);
return v___x_335_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_expandOptIdent___boxed(lean_object* v_stx_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Lake_expandOptIdent(v_stx_336_);
lean_dec(v_stx_336_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lake_expandBinderType(lean_object* v_ref_338_, lean_object* v_stx_339_){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_340_ = l_Lean_Syntax_getNumArgs(v_stx_339_);
v___x_341_ = lean_unsigned_to_nat(0u);
v___x_342_ = lean_nat_dec_eq(v___x_340_, v___x_341_);
lean_dec(v___x_340_);
if (v___x_342_ == 0)
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = lean_unsigned_to_nat(1u);
v___x_344_ = l_Lean_Syntax_getArg(v_stx_339_, v___x_343_);
return v___x_344_;
}
else
{
lean_object* v___x_345_; 
v___x_345_ = l_Lake_mkHoleFrom(v_ref_338_);
return v___x_345_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_expandBinderType___boxed(lean_object* v_ref_346_, lean_object* v_stx_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lake_expandBinderType(v_ref_346_, v_stx_347_);
lean_dec(v_stx_347_);
lean_dec(v_ref_346_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lake_expandBinderModifier(lean_object* v_optBinderModifier_349_){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = l_Lean_Syntax_getOptional_x3f(v_optBinderModifier_349_);
if (lean_obj_tag(v___x_350_) == 0)
{
lean_object* v___x_351_; 
v___x_351_ = lean_box(0);
return v___x_351_;
}
else
{
lean_object* v_val_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_359_; 
v_val_352_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_359_ == 0)
{
v___x_354_ = v___x_350_;
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_val_352_);
lean_dec(v___x_350_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_val_352_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_expandBinderModifier___boxed(lean_object* v_optBinderModifier_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lake_expandBinderModifier(v_optBinderModifier_360_);
lean_dec(v_optBinderModifier_360_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__1(lean_object* v___x_362_, lean_object* v_stx_363_, lean_object* v_as_364_, size_t v_i_365_, size_t v_stop_366_, lean_object* v_b_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
uint8_t v___x_370_; 
v___x_370_ = lean_usize_dec_eq(v_i_365_, v_stop_366_);
if (v___x_370_ == 0)
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = lean_array_uget_borrowed(v_as_364_, v_i_365_);
lean_inc(v___x_371_);
v___x_372_ = l_Lake_expandBinderIdent(v___x_371_, v___y_368_, v___y_369_);
if (lean_obj_tag(v___x_372_) == 0)
{
lean_object* v_a_373_; lean_object* v_a_374_; lean_object* v___x_375_; uint8_t v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; size_t v___x_380_; size_t v___x_381_; 
v_a_373_ = lean_ctor_get(v___x_372_, 0);
lean_inc(v_a_373_);
v_a_374_ = lean_ctor_get(v___x_372_, 1);
lean_inc(v_a_374_);
lean_dec_ref_known(v___x_372_, 2);
v___x_375_ = l_Lake_expandBinderType(v___x_371_, v___x_362_);
v___x_376_ = 1;
v___x_377_ = lean_box(0);
lean_inc(v_stx_363_);
v___x_378_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_378_, 0, v_stx_363_);
lean_ctor_set(v___x_378_, 1, v_a_373_);
lean_ctor_set(v___x_378_, 2, v___x_375_);
lean_ctor_set(v___x_378_, 3, v___x_377_);
lean_ctor_set_uint8(v___x_378_, sizeof(void*)*4, v___x_376_);
v___x_379_ = lean_array_push(v_b_367_, v___x_378_);
v___x_380_ = ((size_t)1ULL);
v___x_381_ = lean_usize_add(v_i_365_, v___x_380_);
v_i_365_ = v___x_381_;
v_b_367_ = v___x_379_;
v___y_369_ = v_a_374_;
goto _start;
}
else
{
lean_object* v_a_383_; lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
lean_dec_ref(v_b_367_);
lean_dec(v_stx_363_);
v_a_383_ = lean_ctor_get(v___x_372_, 0);
v_a_384_ = lean_ctor_get(v___x_372_, 1);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_372_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_inc(v_a_383_);
lean_dec(v___x_372_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_a_383_);
lean_ctor_set(v_reuseFailAlloc_390_, 1, v_a_384_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
else
{
lean_object* v___x_392_; 
lean_dec(v_stx_363_);
v___x_392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_392_, 0, v_b_367_);
lean_ctor_set(v___x_392_, 1, v___y_369_);
return v___x_392_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__1___boxed(lean_object* v___x_393_, lean_object* v_stx_394_, lean_object* v_as_395_, lean_object* v_i_396_, lean_object* v_stop_397_, lean_object* v_b_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
size_t v_i_boxed_401_; size_t v_stop_boxed_402_; lean_object* v_res_403_; 
v_i_boxed_401_ = lean_unbox_usize(v_i_396_);
lean_dec(v_i_396_);
v_stop_boxed_402_ = lean_unbox_usize(v_stop_397_);
lean_dec(v_stop_397_);
v_res_403_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__1(v___x_393_, v_stx_394_, v_as_395_, v_i_boxed_401_, v_stop_boxed_402_, v_b_398_, v___y_399_, v___y_400_);
lean_dec_ref(v___y_399_);
lean_dec_ref(v_as_395_);
lean_dec(v___x_393_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__2(lean_object* v___x_404_, lean_object* v_stx_405_, lean_object* v___x_406_, lean_object* v_as_407_, size_t v_i_408_, size_t v_stop_409_, lean_object* v_b_410_, lean_object* v___y_411_, lean_object* v___y_412_){
_start:
{
uint8_t v___x_413_; 
v___x_413_ = lean_usize_dec_eq(v_i_408_, v_stop_409_);
if (v___x_413_ == 0)
{
lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_414_ = lean_array_uget_borrowed(v_as_407_, v_i_408_);
lean_inc(v___x_414_);
v___x_415_ = l_Lake_expandBinderIdent(v___x_414_, v___y_411_, v___y_412_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v_a_417_; lean_object* v___x_418_; uint8_t v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; size_t v___x_422_; size_t v___x_423_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc(v_a_416_);
v_a_417_ = lean_ctor_get(v___x_415_, 1);
lean_inc(v_a_417_);
lean_dec_ref_known(v___x_415_, 2);
v___x_418_ = l_Lake_expandBinderType(v___x_414_, v___x_404_);
v___x_419_ = 0;
lean_inc(v___x_406_);
lean_inc(v_stx_405_);
v___x_420_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_420_, 0, v_stx_405_);
lean_ctor_set(v___x_420_, 1, v_a_416_);
lean_ctor_set(v___x_420_, 2, v___x_418_);
lean_ctor_set(v___x_420_, 3, v___x_406_);
lean_ctor_set_uint8(v___x_420_, sizeof(void*)*4, v___x_419_);
v___x_421_ = lean_array_push(v_b_410_, v___x_420_);
v___x_422_ = ((size_t)1ULL);
v___x_423_ = lean_usize_add(v_i_408_, v___x_422_);
v_i_408_ = v___x_423_;
v_b_410_ = v___x_421_;
v___y_412_ = v_a_417_;
goto _start;
}
else
{
lean_object* v_a_425_; lean_object* v_a_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_433_; 
lean_dec_ref(v_b_410_);
lean_dec(v___x_406_);
lean_dec(v_stx_405_);
v_a_425_ = lean_ctor_get(v___x_415_, 0);
v_a_426_ = lean_ctor_get(v___x_415_, 1);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_433_ == 0)
{
v___x_428_ = v___x_415_;
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_a_426_);
lean_inc(v_a_425_);
lean_dec(v___x_415_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_431_; 
if (v_isShared_429_ == 0)
{
v___x_431_ = v___x_428_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_a_425_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v_a_426_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
}
else
{
lean_object* v___x_434_; 
lean_dec(v___x_406_);
lean_dec(v_stx_405_);
v___x_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_434_, 0, v_b_410_);
lean_ctor_set(v___x_434_, 1, v___y_412_);
return v___x_434_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__2___boxed(lean_object* v___x_435_, lean_object* v_stx_436_, lean_object* v___x_437_, lean_object* v_as_438_, lean_object* v_i_439_, lean_object* v_stop_440_, lean_object* v_b_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
size_t v_i_boxed_444_; size_t v_stop_boxed_445_; lean_object* v_res_446_; 
v_i_boxed_444_ = lean_unbox_usize(v_i_439_);
lean_dec(v_i_439_);
v_stop_boxed_445_ = lean_unbox_usize(v_stop_440_);
lean_dec(v_stop_440_);
v_res_446_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__2(v___x_435_, v_stx_436_, v___x_437_, v_as_438_, v_i_boxed_444_, v_stop_boxed_445_, v_b_441_, v___y_442_, v___y_443_);
lean_dec_ref(v___y_442_);
lean_dec_ref(v_as_438_);
lean_dec(v___x_435_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__0(lean_object* v___x_447_, lean_object* v_stx_448_, lean_object* v_as_449_, size_t v_i_450_, size_t v_stop_451_, lean_object* v_b_452_, lean_object* v___y_453_, lean_object* v___y_454_){
_start:
{
uint8_t v___x_455_; 
v___x_455_ = lean_usize_dec_eq(v_i_450_, v_stop_451_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_456_ = lean_array_uget_borrowed(v_as_449_, v_i_450_);
lean_inc(v___x_456_);
v___x_457_ = l_Lake_expandBinderIdent(v___x_456_, v___y_453_, v___y_454_);
if (lean_obj_tag(v___x_457_) == 0)
{
lean_object* v_a_458_; lean_object* v_a_459_; lean_object* v___x_460_; uint8_t v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; size_t v___x_465_; size_t v___x_466_; 
v_a_458_ = lean_ctor_get(v___x_457_, 0);
lean_inc(v_a_458_);
v_a_459_ = lean_ctor_get(v___x_457_, 1);
lean_inc(v_a_459_);
lean_dec_ref_known(v___x_457_, 2);
v___x_460_ = l_Lake_expandBinderType(v___x_456_, v___x_447_);
v___x_461_ = 2;
v___x_462_ = lean_box(0);
lean_inc(v_stx_448_);
v___x_463_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_463_, 0, v_stx_448_);
lean_ctor_set(v___x_463_, 1, v_a_458_);
lean_ctor_set(v___x_463_, 2, v___x_460_);
lean_ctor_set(v___x_463_, 3, v___x_462_);
lean_ctor_set_uint8(v___x_463_, sizeof(void*)*4, v___x_461_);
v___x_464_ = lean_array_push(v_b_452_, v___x_463_);
v___x_465_ = ((size_t)1ULL);
v___x_466_ = lean_usize_add(v_i_450_, v___x_465_);
v_i_450_ = v___x_466_;
v_b_452_ = v___x_464_;
v___y_454_ = v_a_459_;
goto _start;
}
else
{
lean_object* v_a_468_; lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_476_; 
lean_dec_ref(v_b_452_);
lean_dec(v_stx_448_);
v_a_468_ = lean_ctor_get(v___x_457_, 0);
v_a_469_ = lean_ctor_get(v___x_457_, 1);
v_isSharedCheck_476_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_476_ == 0)
{
v___x_471_ = v___x_457_;
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_inc(v_a_468_);
lean_dec(v___x_457_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_474_; 
if (v_isShared_472_ == 0)
{
v___x_474_ = v___x_471_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v_a_468_);
lean_ctor_set(v_reuseFailAlloc_475_, 1, v_a_469_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
else
{
lean_object* v___x_477_; 
lean_dec(v_stx_448_);
v___x_477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_477_, 0, v_b_452_);
lean_ctor_set(v___x_477_, 1, v___y_454_);
return v___x_477_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__0___boxed(lean_object* v___x_478_, lean_object* v_stx_479_, lean_object* v_as_480_, lean_object* v_i_481_, lean_object* v_stop_482_, lean_object* v_b_483_, lean_object* v___y_484_, lean_object* v___y_485_){
_start:
{
size_t v_i_boxed_486_; size_t v_stop_boxed_487_; lean_object* v_res_488_; 
v_i_boxed_486_ = lean_unbox_usize(v_i_481_);
lean_dec(v_i_481_);
v_stop_boxed_487_ = lean_unbox_usize(v_stop_482_);
lean_dec(v_stop_482_);
v_res_488_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__0(v___x_478_, v_stx_479_, v_as_480_, v_i_boxed_486_, v_stop_boxed_487_, v_b_483_, v___y_484_, v___y_485_);
lean_dec_ref(v___y_484_);
lean_dec_ref(v_as_480_);
lean_dec(v___x_478_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Lake_expandBinderCore(lean_object* v_binders_513_, lean_object* v_stx_514_, lean_object* v_a_515_, lean_object* v_a_516_){
_start:
{
lean_object* v_k_517_; uint8_t v___y_519_; uint8_t v___x_677_; 
lean_inc(v_stx_514_);
v_k_517_ = l_Lean_Syntax_getKind(v_stx_514_);
v___x_677_ = l_Lean_Syntax_isIdent(v_stx_514_);
if (v___x_677_ == 0)
{
lean_object* v___x_678_; uint8_t v___x_679_; 
v___x_678_ = ((lean_object*)(l_Lake_mkHoleFrom___closed__4));
v___x_679_ = lean_name_eq(v_k_517_, v___x_678_);
v___y_519_ = v___x_679_;
goto v___jp_518_;
}
else
{
v___y_519_ = v___x_677_;
goto v___jp_518_;
}
v___jp_518_:
{
if (v___y_519_ == 0)
{
lean_object* v___x_520_; uint8_t v___x_521_; 
v___x_520_ = ((lean_object*)(l_Lake_expandBinderCore___closed__1));
v___x_521_ = lean_name_eq(v_k_517_, v___x_520_);
if (v___x_521_ == 0)
{
lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_522_ = ((lean_object*)(l_Lake_expandBinderCore___closed__3));
v___x_523_ = lean_name_eq(v_k_517_, v___x_522_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; uint8_t v___x_525_; 
v___x_524_ = ((lean_object*)(l_Lake_expandBinderCore___closed__5));
v___x_525_ = lean_name_eq(v_k_517_, v___x_524_);
if (v___x_525_ == 0)
{
lean_object* v___x_526_; uint8_t v___x_527_; 
v___x_526_ = ((lean_object*)(l_Lake_expandBinderCore___closed__7));
v___x_527_ = lean_name_eq(v_k_517_, v___x_526_);
lean_dec(v_k_517_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; 
lean_dec(v_stx_514_);
lean_dec_ref(v_binders_513_);
v___x_528_ = l_Lean_Macro_throwUnsupported___redArg(v_a_516_);
return v___x_528_;
}
else
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v_id_531_; lean_object* v___x_532_; lean_object* v_a_533_; lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_547_; 
v___x_529_ = lean_unsigned_to_nat(1u);
v___x_530_ = l_Lean_Syntax_getArg(v_stx_514_, v___x_529_);
v_id_531_ = l_Lake_expandOptIdent(v___x_530_);
lean_dec(v___x_530_);
v___x_532_ = l_Lake_expandBinderIdent(v_id_531_, v_a_515_, v_a_516_);
v_a_533_ = lean_ctor_get(v___x_532_, 0);
v_a_534_ = lean_ctor_get(v___x_532_, 1);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_547_ == 0)
{
v___x_536_ = v___x_532_;
v_isShared_537_ = v_isSharedCheck_547_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_inc(v_a_533_);
lean_dec(v___x_532_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_547_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_538_; lean_object* v_type_539_; uint8_t v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_545_; 
v___x_538_ = lean_unsigned_to_nat(2u);
v_type_539_ = l_Lean_Syntax_getArg(v_stx_514_, v___x_538_);
v___x_540_ = 3;
v___x_541_ = lean_box(0);
v___x_542_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_542_, 0, v_stx_514_);
lean_ctor_set(v___x_542_, 1, v_a_533_);
lean_ctor_set(v___x_542_, 2, v_type_539_);
lean_ctor_set(v___x_542_, 3, v___x_541_);
lean_ctor_set_uint8(v___x_542_, sizeof(void*)*4, v___x_540_);
v___x_543_ = lean_array_push(v_binders_513_, v___x_542_);
if (v_isShared_537_ == 0)
{
lean_ctor_set(v___x_536_, 0, v___x_543_);
v___x_545_ = v___x_536_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___x_543_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v_a_534_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
}
else
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
lean_dec(v_k_517_);
v___x_548_ = lean_unsigned_to_nat(1u);
v___x_549_ = l_Lean_Syntax_getArg(v_stx_514_, v___x_548_);
v___x_550_ = l_Lake_getBinderIds(v___x_549_, v_a_515_, v_a_516_);
lean_dec(v___x_549_);
if (lean_obj_tag(v___x_550_) == 0)
{
lean_object* v_a_551_; lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_575_; 
v_a_551_ = lean_ctor_get(v___x_550_, 0);
v_a_552_ = lean_ctor_get(v___x_550_, 1);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_550_);
if (v_isSharedCheck_575_ == 0)
{
v___x_554_ = v___x_550_;
v_isShared_555_ = v_isSharedCheck_575_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_inc(v_a_551_);
lean_dec(v___x_550_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_575_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; uint8_t v___x_559_; 
v___x_556_ = l_unsafeCast___redArg(v_a_551_);
lean_dec(v_a_551_);
v___x_557_ = lean_unsigned_to_nat(0u);
v___x_558_ = lean_array_get_size(v___x_556_);
v___x_559_ = lean_nat_dec_lt(v___x_557_, v___x_558_);
if (v___x_559_ == 0)
{
lean_object* v___x_561_; 
lean_dec(v___x_556_);
lean_dec(v_stx_514_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 0, v_binders_513_);
v___x_561_ = v___x_554_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_binders_513_);
lean_ctor_set(v_reuseFailAlloc_562_, 1, v_a_552_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
else
{
lean_object* v___x_563_; lean_object* v___x_564_; uint8_t v___x_565_; 
v___x_563_ = lean_unsigned_to_nat(2u);
v___x_564_ = l_Lean_Syntax_getArg(v_stx_514_, v___x_563_);
v___x_565_ = lean_nat_dec_le(v___x_558_, v___x_558_);
if (v___x_565_ == 0)
{
if (v___x_559_ == 0)
{
lean_object* v___x_567_; 
lean_dec(v___x_564_);
lean_dec(v___x_556_);
lean_dec(v_stx_514_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 0, v_binders_513_);
v___x_567_ = v___x_554_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_binders_513_);
lean_ctor_set(v_reuseFailAlloc_568_, 1, v_a_552_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
else
{
size_t v___x_569_; size_t v___x_570_; lean_object* v___x_571_; 
lean_del_object(v___x_554_);
v___x_569_ = ((size_t)0ULL);
v___x_570_ = lean_usize_of_nat(v___x_558_);
v___x_571_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__0(v___x_564_, v_stx_514_, v___x_556_, v___x_569_, v___x_570_, v_binders_513_, v_a_515_, v_a_552_);
lean_dec(v___x_556_);
lean_dec(v___x_564_);
return v___x_571_;
}
}
else
{
size_t v___x_572_; size_t v___x_573_; lean_object* v___x_574_; 
lean_del_object(v___x_554_);
v___x_572_ = ((size_t)0ULL);
v___x_573_ = lean_usize_of_nat(v___x_558_);
v___x_574_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__0(v___x_564_, v_stx_514_, v___x_556_, v___x_572_, v___x_573_, v_binders_513_, v_a_515_, v_a_552_);
lean_dec(v___x_556_);
lean_dec(v___x_564_);
return v___x_574_;
}
}
}
}
else
{
lean_object* v_a_576_; lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_584_; 
lean_dec(v_stx_514_);
lean_dec_ref(v_binders_513_);
v_a_576_ = lean_ctor_get(v___x_550_, 0);
v_a_577_ = lean_ctor_get(v___x_550_, 1);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_550_);
if (v_isSharedCheck_584_ == 0)
{
v___x_579_ = v___x_550_;
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_inc(v_a_576_);
lean_dec(v___x_550_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_582_; 
if (v_isShared_580_ == 0)
{
v___x_582_ = v___x_579_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_a_576_);
lean_ctor_set(v_reuseFailAlloc_583_, 1, v_a_577_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
}
}
else
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
lean_dec(v_k_517_);
v___x_585_ = lean_unsigned_to_nat(1u);
v___x_586_ = l_Lean_Syntax_getArg(v_stx_514_, v___x_585_);
v___x_587_ = l_Lake_getBinderIds(v___x_586_, v_a_515_, v_a_516_);
lean_dec(v___x_586_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v_a_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_612_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
v_a_589_ = lean_ctor_get(v___x_587_, 1);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_612_ == 0)
{
v___x_591_ = v___x_587_;
v_isShared_592_ = v_isSharedCheck_612_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_a_589_);
lean_inc(v_a_588_);
lean_dec(v___x_587_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_612_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; uint8_t v___x_596_; 
v___x_593_ = l_unsafeCast___redArg(v_a_588_);
lean_dec(v_a_588_);
v___x_594_ = lean_unsigned_to_nat(0u);
v___x_595_ = lean_array_get_size(v___x_593_);
v___x_596_ = lean_nat_dec_lt(v___x_594_, v___x_595_);
if (v___x_596_ == 0)
{
lean_object* v___x_598_; 
lean_dec(v___x_593_);
lean_dec(v_stx_514_);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 0, v_binders_513_);
v___x_598_ = v___x_591_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_binders_513_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v_a_589_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
else
{
lean_object* v___x_600_; lean_object* v___x_601_; uint8_t v___x_602_; 
v___x_600_ = lean_unsigned_to_nat(2u);
v___x_601_ = l_Lean_Syntax_getArg(v_stx_514_, v___x_600_);
v___x_602_ = lean_nat_dec_le(v___x_595_, v___x_595_);
if (v___x_602_ == 0)
{
if (v___x_596_ == 0)
{
lean_object* v___x_604_; 
lean_dec(v___x_601_);
lean_dec(v___x_593_);
lean_dec(v_stx_514_);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 0, v_binders_513_);
v___x_604_ = v___x_591_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_binders_513_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v_a_589_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
return v___x_604_;
}
}
else
{
size_t v___x_606_; size_t v___x_607_; lean_object* v___x_608_; 
lean_del_object(v___x_591_);
v___x_606_ = ((size_t)0ULL);
v___x_607_ = lean_usize_of_nat(v___x_595_);
v___x_608_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__1(v___x_601_, v_stx_514_, v___x_593_, v___x_606_, v___x_607_, v_binders_513_, v_a_515_, v_a_589_);
lean_dec(v___x_593_);
lean_dec(v___x_601_);
return v___x_608_;
}
}
else
{
size_t v___x_609_; size_t v___x_610_; lean_object* v___x_611_; 
lean_del_object(v___x_591_);
v___x_609_ = ((size_t)0ULL);
v___x_610_ = lean_usize_of_nat(v___x_595_);
v___x_611_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__1(v___x_601_, v_stx_514_, v___x_593_, v___x_609_, v___x_610_, v_binders_513_, v_a_515_, v_a_589_);
lean_dec(v___x_593_);
lean_dec(v___x_601_);
return v___x_611_;
}
}
}
}
else
{
lean_object* v_a_613_; lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_621_; 
lean_dec(v_stx_514_);
lean_dec_ref(v_binders_513_);
v_a_613_ = lean_ctor_get(v___x_587_, 0);
v_a_614_ = lean_ctor_get(v___x_587_, 1);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_621_ == 0)
{
v___x_616_ = v___x_587_;
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_inc(v_a_613_);
lean_dec(v___x_587_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_619_; 
if (v_isShared_617_ == 0)
{
v___x_619_ = v___x_616_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_a_613_);
lean_ctor_set(v_reuseFailAlloc_620_, 1, v_a_614_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
return v___x_619_;
}
}
}
}
}
else
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
lean_dec(v_k_517_);
v___x_622_ = lean_unsigned_to_nat(1u);
v___x_623_ = l_Lean_Syntax_getArg(v_stx_514_, v___x_622_);
v___x_624_ = l_Lake_getBinderIds(v___x_623_, v_a_515_, v_a_516_);
lean_dec(v___x_623_);
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_a_625_; lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_652_; 
v_a_625_ = lean_ctor_get(v___x_624_, 0);
v_a_626_ = lean_ctor_get(v___x_624_, 1);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_652_ == 0)
{
v___x_628_ = v___x_624_;
v_isShared_629_ = v_isSharedCheck_652_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_inc(v_a_625_);
lean_dec(v___x_624_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_652_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; uint8_t v___x_633_; 
v___x_630_ = l_unsafeCast___redArg(v_a_625_);
lean_dec(v_a_625_);
v___x_631_ = lean_unsigned_to_nat(0u);
v___x_632_ = lean_array_get_size(v___x_630_);
v___x_633_ = lean_nat_dec_lt(v___x_631_, v___x_632_);
if (v___x_633_ == 0)
{
lean_object* v___x_635_; 
lean_dec(v___x_630_);
lean_dec(v_stx_514_);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 0, v_binders_513_);
v___x_635_ = v___x_628_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_binders_513_);
lean_ctor_set(v_reuseFailAlloc_636_, 1, v_a_626_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
else
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; uint8_t v___x_642_; 
v___x_637_ = lean_unsigned_to_nat(2u);
v___x_638_ = l_Lean_Syntax_getArg(v_stx_514_, v___x_637_);
v___x_639_ = lean_unsigned_to_nat(3u);
v___x_640_ = l_Lean_Syntax_getArg(v_stx_514_, v___x_639_);
v___x_641_ = l_Lake_expandBinderModifier(v___x_640_);
lean_dec(v___x_640_);
v___x_642_ = lean_nat_dec_le(v___x_632_, v___x_632_);
if (v___x_642_ == 0)
{
if (v___x_633_ == 0)
{
lean_object* v___x_644_; 
lean_dec(v___x_641_);
lean_dec(v___x_638_);
lean_dec(v___x_630_);
lean_dec(v_stx_514_);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 0, v_binders_513_);
v___x_644_ = v___x_628_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_binders_513_);
lean_ctor_set(v_reuseFailAlloc_645_, 1, v_a_626_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
else
{
size_t v___x_646_; size_t v___x_647_; lean_object* v___x_648_; 
lean_del_object(v___x_628_);
v___x_646_ = ((size_t)0ULL);
v___x_647_ = lean_usize_of_nat(v___x_632_);
v___x_648_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__2(v___x_638_, v_stx_514_, v___x_641_, v___x_630_, v___x_646_, v___x_647_, v_binders_513_, v_a_515_, v_a_626_);
lean_dec(v___x_630_);
lean_dec(v___x_638_);
return v___x_648_;
}
}
else
{
size_t v___x_649_; size_t v___x_650_; lean_object* v___x_651_; 
lean_del_object(v___x_628_);
v___x_649_ = ((size_t)0ULL);
v___x_650_ = lean_usize_of_nat(v___x_632_);
v___x_651_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinderCore_spec__2(v___x_638_, v_stx_514_, v___x_641_, v___x_630_, v___x_649_, v___x_650_, v_binders_513_, v_a_515_, v_a_626_);
lean_dec(v___x_630_);
lean_dec(v___x_638_);
return v___x_651_;
}
}
}
}
else
{
lean_object* v_a_653_; lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_661_; 
lean_dec(v_stx_514_);
lean_dec_ref(v_binders_513_);
v_a_653_ = lean_ctor_get(v___x_624_, 0);
v_a_654_ = lean_ctor_get(v___x_624_, 1);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_661_ == 0)
{
v___x_656_ = v___x_624_;
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_inc(v_a_653_);
lean_dec(v___x_624_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_653_);
lean_ctor_set(v_reuseFailAlloc_660_, 1, v_a_654_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
}
else
{
lean_object* v___x_662_; lean_object* v_a_663_; lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_676_; 
lean_dec(v_k_517_);
lean_inc(v_stx_514_);
v___x_662_ = l_Lake_expandBinderIdent(v_stx_514_, v_a_515_, v_a_516_);
v_a_663_ = lean_ctor_get(v___x_662_, 0);
v_a_664_ = lean_ctor_get(v___x_662_, 1);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_676_ == 0)
{
v___x_666_ = v___x_662_;
v_isShared_667_ = v_isSharedCheck_676_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_inc(v_a_663_);
lean_dec(v___x_662_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_676_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_668_; uint8_t v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_674_; 
v___x_668_ = l_Lake_mkHoleFrom(v_stx_514_);
v___x_669_ = 0;
v___x_670_ = lean_box(0);
v___x_671_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_671_, 0, v_stx_514_);
lean_ctor_set(v___x_671_, 1, v_a_663_);
lean_ctor_set(v___x_671_, 2, v___x_668_);
lean_ctor_set(v___x_671_, 3, v___x_670_);
lean_ctor_set_uint8(v___x_671_, sizeof(void*)*4, v___x_669_);
v___x_672_ = lean_array_push(v_binders_513_, v___x_671_);
if (v_isShared_667_ == 0)
{
lean_ctor_set(v___x_666_, 0, v___x_672_);
v___x_674_ = v___x_666_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v___x_672_);
lean_ctor_set(v_reuseFailAlloc_675_, 1, v_a_664_);
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
}
}
LEAN_EXPORT lean_object* l_Lake_expandBinderCore___boxed(lean_object* v_binders_680_, lean_object* v_stx_681_, lean_object* v_a_682_, lean_object* v_a_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lake_expandBinderCore(v_binders_680_, v_stx_681_, v_a_682_, v_a_683_);
lean_dec_ref(v_a_682_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lake_expandBinder(lean_object* v_stx_687_, lean_object* v_a_688_, lean_object* v_a_689_){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_690_ = ((lean_object*)(l_Lake_expandBinder___closed__0));
v___x_691_ = l_Lake_expandBinderCore(v___x_690_, v_stx_687_, v_a_688_, v_a_689_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Lake_expandBinder___boxed(lean_object* v_stx_692_, lean_object* v_a_693_, lean_object* v_a_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l_Lake_expandBinder(v_stx_692_, v_a_693_, v_a_694_);
lean_dec_ref(v_a_693_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinders_spec__0(lean_object* v_as_696_, size_t v_i_697_, size_t v_stop_698_, lean_object* v_b_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
uint8_t v___x_702_; 
v___x_702_ = lean_usize_dec_eq(v_i_697_, v_stop_698_);
if (v___x_702_ == 0)
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = lean_array_uget_borrowed(v_as_696_, v_i_697_);
lean_inc(v___x_703_);
v___x_704_ = l_Lake_expandBinderCore(v_b_699_, v___x_703_, v___y_700_, v___y_701_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v_a_705_; lean_object* v_a_706_; size_t v___x_707_; size_t v___x_708_; 
v_a_705_ = lean_ctor_get(v___x_704_, 0);
lean_inc(v_a_705_);
v_a_706_ = lean_ctor_get(v___x_704_, 1);
lean_inc(v_a_706_);
lean_dec_ref_known(v___x_704_, 2);
v___x_707_ = ((size_t)1ULL);
v___x_708_ = lean_usize_add(v_i_697_, v___x_707_);
v_i_697_ = v___x_708_;
v_b_699_ = v_a_705_;
v___y_701_ = v_a_706_;
goto _start;
}
else
{
return v___x_704_;
}
}
else
{
lean_object* v___x_710_; 
v___x_710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_710_, 0, v_b_699_);
lean_ctor_set(v___x_710_, 1, v___y_701_);
return v___x_710_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinders_spec__0___boxed(lean_object* v_as_711_, lean_object* v_i_712_, lean_object* v_stop_713_, lean_object* v_b_714_, lean_object* v___y_715_, lean_object* v___y_716_){
_start:
{
size_t v_i_boxed_717_; size_t v_stop_boxed_718_; lean_object* v_res_719_; 
v_i_boxed_717_ = lean_unbox_usize(v_i_712_);
lean_dec(v_i_712_);
v_stop_boxed_718_ = lean_unbox_usize(v_stop_713_);
lean_dec(v_stop_713_);
v_res_719_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinders_spec__0(v_as_711_, v_i_boxed_717_, v_stop_boxed_718_, v_b_714_, v___y_715_, v___y_716_);
lean_dec_ref(v___y_715_);
lean_dec_ref(v_as_711_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Lake_expandBinders(lean_object* v_stxs_720_, lean_object* v_a_721_, lean_object* v_a_722_){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; uint8_t v___x_726_; 
v___x_723_ = lean_unsigned_to_nat(0u);
v___x_724_ = ((lean_object*)(l_Lake_expandBinder___closed__0));
v___x_725_ = lean_array_get_size(v_stxs_720_);
v___x_726_ = lean_nat_dec_lt(v___x_723_, v___x_725_);
if (v___x_726_ == 0)
{
lean_object* v___x_727_; 
v___x_727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_727_, 0, v___x_724_);
lean_ctor_set(v___x_727_, 1, v_a_722_);
return v___x_727_;
}
else
{
uint8_t v___x_728_; 
v___x_728_ = lean_nat_dec_le(v___x_725_, v___x_725_);
if (v___x_728_ == 0)
{
if (v___x_726_ == 0)
{
lean_object* v___x_729_; 
v___x_729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_729_, 0, v___x_724_);
lean_ctor_set(v___x_729_, 1, v_a_722_);
return v___x_729_;
}
else
{
size_t v___x_730_; size_t v___x_731_; lean_object* v___x_732_; 
v___x_730_ = ((size_t)0ULL);
v___x_731_ = lean_usize_of_nat(v___x_725_);
v___x_732_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinders_spec__0(v_stxs_720_, v___x_730_, v___x_731_, v___x_724_, v_a_721_, v_a_722_);
return v___x_732_;
}
}
else
{
size_t v___x_733_; size_t v___x_734_; lean_object* v___x_735_; 
v___x_733_ = ((size_t)0ULL);
v___x_734_ = lean_usize_of_nat(v___x_725_);
v___x_735_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandBinders_spec__0(v_stxs_720_, v___x_733_, v___x_734_, v___x_724_, v_a_721_, v_a_722_);
return v___x_735_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_expandBinders___boxed(lean_object* v_stxs_736_, lean_object* v_a_737_, lean_object* v_a_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_Lake_expandBinders(v_stxs_736_, v_a_737_, v_a_738_);
lean_dec_ref(v_a_737_);
lean_dec_ref(v_stxs_736_);
return v_res_739_;
}
}
static lean_object* _init_l_Lake_BinderSyntaxView_mkBinder___closed__4(void){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = l_Array_mkArray0___redArg();
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lake_BinderSyntaxView_mkBinder(lean_object* v_x_755_){
_start:
{
uint8_t v_info_756_; 
v_info_756_ = lean_ctor_get_uint8(v_x_755_, sizeof(void*)*4);
switch(v_info_756_)
{
case 0:
{
lean_object* v_ref_757_; lean_object* v_id_758_; lean_object* v_type_759_; lean_object* v_modifier_x3f_760_; uint8_t v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___y_773_; 
v_ref_757_ = lean_ctor_get(v_x_755_, 0);
lean_inc(v_ref_757_);
v_id_758_ = lean_ctor_get(v_x_755_, 1);
lean_inc(v_id_758_);
v_type_759_ = lean_ctor_get(v_x_755_, 2);
lean_inc(v_type_759_);
v_modifier_x3f_760_ = lean_ctor_get(v_x_755_, 3);
lean_inc(v_modifier_x3f_760_);
lean_dec_ref(v_x_755_);
v___x_761_ = 0;
v___x_762_ = l_Lean_SourceInfo_fromRef(v_ref_757_, v___x_761_);
lean_dec(v_ref_757_);
v___x_763_ = ((lean_object*)(l_Lake_expandBinderCore___closed__1));
v___x_764_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__0));
lean_inc_n(v___x_762_, 4);
v___x_765_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_765_, 0, v___x_762_);
lean_ctor_set(v___x_765_, 1, v___x_764_);
v___x_766_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__2));
v___x_767_ = l_Lean_Syntax_node1(v___x_762_, v___x_766_, v_id_758_);
v___x_768_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__3));
v___x_769_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_769_, 0, v___x_762_);
lean_ctor_set(v___x_769_, 1, v___x_768_);
v___x_770_ = l_Lean_Syntax_node2(v___x_762_, v___x_766_, v___x_769_, v_type_759_);
v___x_771_ = lean_obj_once(&l_Lake_BinderSyntaxView_mkBinder___closed__4, &l_Lake_BinderSyntaxView_mkBinder___closed__4_once, _init_l_Lake_BinderSyntaxView_mkBinder___closed__4);
if (lean_obj_tag(v_modifier_x3f_760_) == 1)
{
lean_object* v_val_779_; lean_object* v___x_780_; 
v_val_779_ = lean_ctor_get(v_modifier_x3f_760_, 0);
lean_inc(v_val_779_);
lean_dec_ref_known(v_modifier_x3f_760_, 1);
v___x_780_ = l_Array_mkArray1___redArg(v_val_779_);
v___y_773_ = v___x_780_;
goto v___jp_772_;
}
else
{
lean_object* v___x_781_; 
lean_dec(v_modifier_x3f_760_);
v___x_781_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__6));
v___y_773_ = v___x_781_;
goto v___jp_772_;
}
v___jp_772_:
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_774_ = l_Array_append___redArg(v___x_771_, v___y_773_);
lean_dec_ref(v___y_773_);
lean_inc_n(v___x_762_, 2);
v___x_775_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_775_, 0, v___x_762_);
lean_ctor_set(v___x_775_, 1, v___x_766_);
lean_ctor_set(v___x_775_, 2, v___x_774_);
v___x_776_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__5));
v___x_777_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_777_, 0, v___x_762_);
lean_ctor_set(v___x_777_, 1, v___x_776_);
v___x_778_ = l_Lean_Syntax_node5(v___x_762_, v___x_763_, v___x_765_, v___x_767_, v___x_770_, v___x_775_, v___x_777_);
return v___x_778_;
}
}
case 1:
{
lean_object* v_ref_782_; lean_object* v_id_783_; lean_object* v_type_784_; uint8_t v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v_ref_782_ = lean_ctor_get(v_x_755_, 0);
lean_inc(v_ref_782_);
v_id_783_ = lean_ctor_get(v_x_755_, 1);
lean_inc(v_id_783_);
v_type_784_ = lean_ctor_get(v_x_755_, 2);
lean_inc(v_type_784_);
lean_dec_ref(v_x_755_);
v___x_785_ = 0;
v___x_786_ = l_Lean_SourceInfo_fromRef(v_ref_782_, v___x_785_);
lean_dec(v_ref_782_);
v___x_787_ = ((lean_object*)(l_Lake_expandBinderCore___closed__3));
v___x_788_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__7));
lean_inc_n(v___x_786_, 5);
v___x_789_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_789_, 0, v___x_786_);
lean_ctor_set(v___x_789_, 1, v___x_788_);
v___x_790_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__2));
v___x_791_ = l_Lean_Syntax_node1(v___x_786_, v___x_790_, v_id_783_);
v___x_792_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__3));
v___x_793_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_793_, 0, v___x_786_);
lean_ctor_set(v___x_793_, 1, v___x_792_);
v___x_794_ = l_Lean_Syntax_node2(v___x_786_, v___x_790_, v___x_793_, v_type_784_);
v___x_795_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__8));
v___x_796_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_796_, 0, v___x_786_);
lean_ctor_set(v___x_796_, 1, v___x_795_);
v___x_797_ = l_Lean_Syntax_node4(v___x_786_, v___x_787_, v___x_789_, v___x_791_, v___x_794_, v___x_796_);
return v___x_797_;
}
case 2:
{
lean_object* v_ref_798_; lean_object* v_id_799_; lean_object* v_type_800_; uint8_t v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v_ref_798_ = lean_ctor_get(v_x_755_, 0);
lean_inc(v_ref_798_);
v_id_799_ = lean_ctor_get(v_x_755_, 1);
lean_inc(v_id_799_);
v_type_800_ = lean_ctor_get(v_x_755_, 2);
lean_inc(v_type_800_);
lean_dec_ref(v_x_755_);
v___x_801_ = 0;
v___x_802_ = l_Lean_SourceInfo_fromRef(v_ref_798_, v___x_801_);
lean_dec(v_ref_798_);
v___x_803_ = ((lean_object*)(l_Lake_expandBinderCore___closed__5));
v___x_804_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__9));
lean_inc_n(v___x_802_, 5);
v___x_805_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_805_, 0, v___x_802_);
lean_ctor_set(v___x_805_, 1, v___x_804_);
v___x_806_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__2));
v___x_807_ = l_Lean_Syntax_node1(v___x_802_, v___x_806_, v_id_799_);
v___x_808_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__3));
v___x_809_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_809_, 0, v___x_802_);
lean_ctor_set(v___x_809_, 1, v___x_808_);
v___x_810_ = l_Lean_Syntax_node2(v___x_802_, v___x_806_, v___x_809_, v_type_800_);
v___x_811_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__10));
v___x_812_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_812_, 0, v___x_802_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
v___x_813_ = l_Lean_Syntax_node4(v___x_802_, v___x_803_, v___x_805_, v___x_807_, v___x_810_, v___x_812_);
return v___x_813_;
}
default: 
{
lean_object* v_ref_814_; lean_object* v_id_815_; lean_object* v_type_816_; uint8_t v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v_ref_814_ = lean_ctor_get(v_x_755_, 0);
lean_inc(v_ref_814_);
v_id_815_ = lean_ctor_get(v_x_755_, 1);
lean_inc(v_id_815_);
v_type_816_ = lean_ctor_get(v_x_755_, 2);
lean_inc(v_type_816_);
lean_dec_ref(v_x_755_);
v___x_817_ = 0;
v___x_818_ = l_Lean_SourceInfo_fromRef(v_ref_814_, v___x_817_);
lean_dec(v_ref_814_);
v___x_819_ = ((lean_object*)(l_Lake_expandBinderCore___closed__7));
v___x_820_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__11));
lean_inc_n(v___x_818_, 4);
v___x_821_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_821_, 0, v___x_818_);
lean_ctor_set(v___x_821_, 1, v___x_820_);
v___x_822_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__2));
v___x_823_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__3));
v___x_824_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_824_, 0, v___x_818_);
lean_ctor_set(v___x_824_, 1, v___x_823_);
v___x_825_ = l_Lean_Syntax_node2(v___x_818_, v___x_822_, v_id_815_, v___x_824_);
v___x_826_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__12));
v___x_827_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_827_, 0, v___x_818_);
lean_ctor_set(v___x_827_, 1, v___x_826_);
v___x_828_ = l_Lean_Syntax_node4(v___x_818_, v___x_819_, v___x_821_, v___x_825_, v_type_816_, v___x_827_);
return v___x_828_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BinderSyntaxView_mkDepArrow(lean_object* v_res_836_, lean_object* v_self_837_){
_start:
{
lean_object* v_ref_838_; uint8_t v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v_ref_838_ = lean_ctor_get(v_self_837_, 0);
v___x_839_ = 0;
v___x_840_ = l_Lean_SourceInfo_fromRef(v_ref_838_, v___x_839_);
v___x_841_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkDepArrow___closed__1));
v___x_842_ = l_Lake_BinderSyntaxView_mkBinder(v_self_837_);
v___x_843_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkDepArrow___closed__2));
lean_inc(v___x_840_);
v___x_844_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_844_, 0, v___x_840_);
lean_ctor_set(v___x_844_, 1, v___x_843_);
v___x_845_ = l_Lean_Syntax_node3(v___x_840_, v___x_841_, v___x_842_, v___x_844_, v_res_836_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkDepArrow_spec__0(lean_object* v_as_846_, size_t v_i_847_, size_t v_stop_848_, lean_object* v_b_849_){
_start:
{
uint8_t v___x_850_; 
v___x_850_ = lean_usize_dec_eq(v_i_847_, v_stop_848_);
if (v___x_850_ == 0)
{
lean_object* v___x_851_; lean_object* v___x_852_; size_t v___x_853_; size_t v___x_854_; 
v___x_851_ = lean_array_uget_borrowed(v_as_846_, v_i_847_);
lean_inc(v___x_851_);
v___x_852_ = l_Lake_BinderSyntaxView_mkDepArrow(v_b_849_, v___x_851_);
v___x_853_ = ((size_t)1ULL);
v___x_854_ = lean_usize_add(v_i_847_, v___x_853_);
v_i_847_ = v___x_854_;
v_b_849_ = v___x_852_;
goto _start;
}
else
{
return v_b_849_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkDepArrow_spec__0___boxed(lean_object* v_as_856_, lean_object* v_i_857_, lean_object* v_stop_858_, lean_object* v_b_859_){
_start:
{
size_t v_i_boxed_860_; size_t v_stop_boxed_861_; lean_object* v_res_862_; 
v_i_boxed_860_ = lean_unbox_usize(v_i_857_);
lean_dec(v_i_857_);
v_stop_boxed_861_ = lean_unbox_usize(v_stop_858_);
lean_dec(v_stop_858_);
v_res_862_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkDepArrow_spec__0(v_as_856_, v_i_boxed_860_, v_stop_boxed_861_, v_b_859_);
lean_dec_ref(v_as_856_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkDepArrow(lean_object* v_binders_863_, lean_object* v_res_864_){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; uint8_t v___x_867_; 
v___x_865_ = lean_unsigned_to_nat(0u);
v___x_866_ = lean_array_get_size(v_binders_863_);
v___x_867_ = lean_nat_dec_lt(v___x_865_, v___x_866_);
if (v___x_867_ == 0)
{
return v_res_864_;
}
else
{
uint8_t v___x_868_; 
v___x_868_ = lean_nat_dec_le(v___x_866_, v___x_866_);
if (v___x_868_ == 0)
{
if (v___x_867_ == 0)
{
return v_res_864_;
}
else
{
size_t v___x_869_; size_t v___x_870_; lean_object* v___x_871_; 
v___x_869_ = ((size_t)0ULL);
v___x_870_ = lean_usize_of_nat(v___x_866_);
v___x_871_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkDepArrow_spec__0(v_binders_863_, v___x_869_, v___x_870_, v_res_864_);
return v___x_871_;
}
}
else
{
size_t v___x_872_; size_t v___x_873_; lean_object* v___x_874_; 
v___x_872_ = ((size_t)0ULL);
v___x_873_ = lean_usize_of_nat(v___x_866_);
v___x_874_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkDepArrow_spec__0(v_binders_863_, v___x_872_, v___x_873_, v_res_864_);
return v___x_874_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_mkDepArrow___boxed(lean_object* v_binders_875_, lean_object* v_res_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = l_Lake_mkDepArrow(v_binders_875_, v_res_876_);
lean_dec_ref(v_binders_875_);
return v_res_877_;
}
}
static lean_object* _init_l_Lake_BinderSyntaxView_mkFunBinder___closed__9(void){
_start:
{
lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_897_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkFunBinder___closed__8));
v___x_898_ = l_String_toRawSubstring_x27(v___x_897_);
return v___x_898_;
}
}
static lean_object* _init_l_Lake_BinderSyntaxView_mkFunBinder___closed__10(void){
_start:
{
lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_899_ = lean_box(0);
v___x_900_ = l_unsafeCast___redArg(v___x_899_);
return v___x_900_;
}
}
static lean_object* _init_l_Lake_BinderSyntaxView_mkFunBinder___closed__11(void){
_start:
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_901_ = l_Lean_firstFrontendMacroScope;
v___x_902_ = lean_obj_once(&l_Lake_BinderSyntaxView_mkFunBinder___closed__10, &l_Lake_BinderSyntaxView_mkFunBinder___closed__10_once, _init_l_Lake_BinderSyntaxView_mkFunBinder___closed__10);
v___x_903_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkFunBinder___closed__1));
v___x_904_ = l_Lean_addMacroScope(v___x_903_, v___x_902_, v___x_901_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l_Lake_BinderSyntaxView_mkFunBinder(lean_object* v_x_930_){
_start:
{
lean_object* v_ref_931_; lean_object* v_id_932_; lean_object* v_type_933_; uint8_t v_info_934_; lean_object* v___x_935_; lean_object* v_ref_936_; 
v_ref_931_ = lean_ctor_get(v_x_930_, 0);
lean_inc(v_ref_931_);
v_id_932_ = lean_ctor_get(v_x_930_, 1);
lean_inc(v_id_932_);
v_type_933_ = lean_ctor_get(v_x_930_, 2);
lean_inc(v_type_933_);
v_info_934_ = lean_ctor_get_uint8(v_x_930_, sizeof(void*)*4);
lean_dec_ref(v_x_930_);
v___x_935_ = lean_box(0);
v_ref_936_ = l_Lean_replaceRef(v_ref_931_, v___x_935_);
lean_dec(v_ref_931_);
switch(v_info_934_)
{
case 0:
{
uint8_t v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_937_ = 0;
v___x_938_ = l_Lean_SourceInfo_fromRef(v_ref_936_, v___x_937_);
lean_dec(v_ref_936_);
v___x_939_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkFunBinder___closed__3));
v___x_940_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkFunBinder___closed__5));
v___x_941_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__0));
lean_inc_n(v___x_938_, 7);
v___x_942_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_938_);
lean_ctor_set(v___x_942_, 1, v___x_941_);
v___x_943_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkFunBinder___closed__7));
v___x_944_ = lean_obj_once(&l_Lake_BinderSyntaxView_mkFunBinder___closed__9, &l_Lake_BinderSyntaxView_mkFunBinder___closed__9_once, _init_l_Lake_BinderSyntaxView_mkFunBinder___closed__9);
v___x_945_ = lean_obj_once(&l_Lake_BinderSyntaxView_mkFunBinder___closed__11, &l_Lake_BinderSyntaxView_mkFunBinder___closed__11_once, _init_l_Lake_BinderSyntaxView_mkFunBinder___closed__11);
v___x_946_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkFunBinder___closed__22));
v___x_947_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_947_, 0, v___x_938_);
lean_ctor_set(v___x_947_, 1, v___x_944_);
lean_ctor_set(v___x_947_, 2, v___x_945_);
lean_ctor_set(v___x_947_, 3, v___x_946_);
v___x_948_ = l_Lean_Syntax_node1(v___x_938_, v___x_943_, v___x_947_);
v___x_949_ = l_Lean_Syntax_node2(v___x_938_, v___x_940_, v___x_942_, v___x_948_);
v___x_950_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__3));
v___x_951_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_951_, 0, v___x_938_);
lean_ctor_set(v___x_951_, 1, v___x_950_);
v___x_952_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__2));
v___x_953_ = l_Lean_Syntax_node1(v___x_938_, v___x_952_, v_type_933_);
v___x_954_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__5));
v___x_955_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_955_, 0, v___x_938_);
lean_ctor_set(v___x_955_, 1, v___x_954_);
v___x_956_ = l_Lean_Syntax_node5(v___x_938_, v___x_939_, v___x_949_, v_id_932_, v___x_951_, v___x_953_, v___x_955_);
return v___x_956_;
}
case 1:
{
uint8_t v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_957_ = 0;
v___x_958_ = l_Lean_SourceInfo_fromRef(v_ref_936_, v___x_957_);
lean_dec(v_ref_936_);
v___x_959_ = ((lean_object*)(l_Lake_expandBinderCore___closed__3));
v___x_960_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__7));
lean_inc_n(v___x_958_, 5);
v___x_961_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_961_, 0, v___x_958_);
lean_ctor_set(v___x_961_, 1, v___x_960_);
v___x_962_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__2));
v___x_963_ = l_Lean_Syntax_node1(v___x_958_, v___x_962_, v_id_932_);
v___x_964_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__3));
v___x_965_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_965_, 0, v___x_958_);
lean_ctor_set(v___x_965_, 1, v___x_964_);
v___x_966_ = l_Lean_Syntax_node2(v___x_958_, v___x_962_, v___x_965_, v_type_933_);
v___x_967_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__8));
v___x_968_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_958_);
lean_ctor_set(v___x_968_, 1, v___x_967_);
v___x_969_ = l_Lean_Syntax_node4(v___x_958_, v___x_959_, v___x_961_, v___x_963_, v___x_966_, v___x_968_);
return v___x_969_;
}
case 2:
{
uint8_t v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_970_ = 0;
v___x_971_ = l_Lean_SourceInfo_fromRef(v_ref_936_, v___x_970_);
lean_dec(v_ref_936_);
v___x_972_ = ((lean_object*)(l_Lake_expandBinderCore___closed__5));
v___x_973_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__9));
lean_inc_n(v___x_971_, 5);
v___x_974_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_971_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
v___x_975_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__2));
v___x_976_ = l_Lean_Syntax_node1(v___x_971_, v___x_975_, v_id_932_);
v___x_977_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__3));
v___x_978_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_971_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = l_Lean_Syntax_node2(v___x_971_, v___x_975_, v___x_978_, v_type_933_);
v___x_980_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__10));
v___x_981_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_971_);
lean_ctor_set(v___x_981_, 1, v___x_980_);
v___x_982_ = l_Lean_Syntax_node4(v___x_971_, v___x_972_, v___x_974_, v___x_976_, v___x_979_, v___x_981_);
return v___x_982_;
}
default: 
{
uint8_t v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_983_ = 0;
v___x_984_ = l_Lean_SourceInfo_fromRef(v_ref_936_, v___x_983_);
lean_dec(v_ref_936_);
v___x_985_ = ((lean_object*)(l_Lake_expandBinderCore___closed__7));
v___x_986_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__11));
lean_inc_n(v___x_984_, 4);
v___x_987_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_984_);
lean_ctor_set(v___x_987_, 1, v___x_986_);
v___x_988_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__2));
v___x_989_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__3));
v___x_990_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_984_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = l_Lean_Syntax_node2(v___x_984_, v___x_988_, v_id_932_, v___x_990_);
v___x_992_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__12));
v___x_993_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_993_, 0, v___x_984_);
lean_ctor_set(v___x_993_, 1, v___x_992_);
v___x_994_ = l_Lean_Syntax_node4(v___x_984_, v___x_985_, v___x_987_, v___x_991_, v_type_933_, v___x_993_);
return v___x_994_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BinderSyntaxView_mkArgument(lean_object* v_x_1002_){
_start:
{
lean_object* v_ref_1003_; lean_object* v_id_1004_; lean_object* v___x_1005_; lean_object* v_ref_1006_; uint8_t v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v_ref_1003_ = lean_ctor_get(v_x_1002_, 0);
lean_inc(v_ref_1003_);
v_id_1004_ = lean_ctor_get(v_x_1002_, 1);
lean_inc_n(v_id_1004_, 2);
lean_dec_ref(v_x_1002_);
v___x_1005_ = lean_box(0);
v_ref_1006_ = l_Lean_replaceRef(v_ref_1003_, v___x_1005_);
lean_dec(v_ref_1003_);
v___x_1007_ = 0;
v___x_1008_ = l_Lean_SourceInfo_fromRef(v_ref_1006_, v___x_1007_);
lean_dec(v_ref_1006_);
v___x_1009_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkArgument___closed__1));
v___x_1010_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__0));
lean_inc_n(v___x_1008_, 3);
v___x_1011_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1008_);
lean_ctor_set(v___x_1011_, 1, v___x_1010_);
v___x_1012_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkArgument___closed__2));
v___x_1013_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1008_);
lean_ctor_set(v___x_1013_, 1, v___x_1012_);
v___x_1014_ = ((lean_object*)(l_Lake_BinderSyntaxView_mkBinder___closed__5));
v___x_1015_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1008_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
v___x_1016_ = l_Lean_Syntax_node5(v___x_1008_, v___x_1009_, v___x_1011_, v_id_1004_, v___x_1013_, v_id_1004_, v___x_1015_);
return v___x_1016_;
}
}
lean_object* runtime_initialize_Lean_Parser_Term(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Util_Binder(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_binder = _init_l_Lake_binder();
lean_mark_persistent(l_Lake_binder);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Term(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Util_Binder(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* initialize_Lean_Parser_Term(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Util_Binder(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Binder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Util_Binder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Util_Binder(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Elab.Arg
// Imports: public import Lean.Elab.Term
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_stx_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_stx_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_expr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_expr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Term_instInhabitedArg_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Term_instInhabitedArg_default___closed__0 = (const lean_object*)&l_Lean_Elab_Term_instInhabitedArg_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Term_instInhabitedArg_default = (const lean_object*)&l_Lean_Elab_Term_instInhabitedArg_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Term_instInhabitedArg = (const lean_object*)&l_Lean_Elab_Term_instInhabitedArg_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instToStringArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_Elab_Term_instToStringArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instToStringArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_instToStringArg___closed__0 = (const lean_object*)&l_Lean_Elab_Term_instToStringArg___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Term_instToStringArg = (const lean_object*)&l_Lean_Elab_Term_instToStringArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instToMessageDataArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_Elab_Term_instToMessageDataArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instToMessageDataArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_instToMessageDataArg___closed__0 = (const lean_object*)&l_Lean_Elab_Term_instToMessageDataArg___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Term_instToMessageDataArg = (const lean_object*)&l_Lean_Elab_Term_instToMessageDataArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__0;
static lean_once_cell_t l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instInhabitedNamedArg_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instInhabitedNamedArg;
static const lean_string_object l_Lean_Elab_Term_instToStringNamedArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Elab_Term_instToStringNamedArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Term_instToStringNamedArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Term_instToStringNamedArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Elab_Term_instToStringNamedArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Term_instToStringNamedArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Term_instToStringNamedArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_Term_instToStringNamedArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Term_instToStringNamedArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instToStringNamedArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_Elab_Term_instToStringNamedArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instToStringNamedArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_instToStringNamedArg___closed__0 = (const lean_object*)&l_Lean_Elab_Term_instToStringNamedArg___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Term_instToStringNamedArg = (const lean_object*)&l_Lean_Elab_Term_instToStringNamedArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_Elab_Term_instToMessageDataNamedArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_instToMessageDataNamedArg___closed__0 = (const lean_object*)&l_Lean_Elab_Term_instToMessageDataNamedArg___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Term_instToMessageDataNamedArg = (const lean_object*)&l_Lean_Elab_Term_instToMessageDataNamedArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_addNamedArg_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_addNamedArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_addNamedArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Argument `"};
static const lean_object* l_Lean_Elab_Term_addNamedArg___closed__0 = (const lean_object*)&l_Lean_Elab_Term_addNamedArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Term_addNamedArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_addNamedArg___closed__1;
static const lean_string_object l_Lean_Elab_Term_addNamedArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "` was already set"};
static const lean_object* l_Lean_Elab_Term_addNamedArg___closed__2 = (const lean_object*)&l_Lean_Elab_Term_addNamedArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Term_addNamedArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_addNamedArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_addNamedArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_addNamedArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "namedArgument"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(226, 89, 129, 113, 173, 121, 169, 188)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ellipsis"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(101, 52, 71, 179, 21, 116, 195, 217)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "unexpected '..'"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__8;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Term_expandArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Term_expandArgs___closed__0 = (const lean_object*)&l_Lean_Elab_Term_expandArgs___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_expandArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandArgs___closed__0_value),((lean_object*)&l_Lean_Elab_Term_expandArgs___closed__0_value)}};
static const lean_object* l_Lean_Elab_Term_expandArgs___closed__1 = (const lean_object*)&l_Lean_Elab_Term_expandArgs___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorIdx(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Elab_Term_Arg_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_val_8_; lean_object* v___x_9_; 
v_val_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_val_8_);
lean_dec_ref_known(v_t_6_, 1);
v___x_9_ = lean_apply_1(v_k_7_, v_val_8_);
return v___x_9_;
}
else
{
lean_object* v_val_10_; lean_object* v___x_11_; 
v_val_10_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_val_10_);
lean_dec_ref_known(v_t_6_, 1);
v___x_11_ = lean_apply_1(v_k_7_, v_val_10_);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorElim(lean_object* v_motive_12_, lean_object* v_ctorIdx_13_, lean_object* v_t_14_, lean_object* v_h_15_, lean_object* v_k_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_Elab_Term_Arg_ctorElim___redArg(v_t_14_, v_k_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorElim___boxed(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_Elab_Term_Arg_ctorElim(v_motive_18_, v_ctorIdx_19_, v_t_20_, v_h_21_, v_k_22_);
lean_dec(v_ctorIdx_19_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_stx_elim___redArg(lean_object* v_t_24_, lean_object* v_stx_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Lean_Elab_Term_Arg_ctorElim___redArg(v_t_24_, v_stx_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_stx_elim(lean_object* v_motive_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_stx_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Elab_Term_Arg_ctorElim___redArg(v_t_28_, v_stx_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_expr_elim___redArg(lean_object* v_t_32_, lean_object* v_expr_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_Elab_Term_Arg_ctorElim___redArg(v_t_32_, v_expr_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_expr_elim(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_expr_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Elab_Term_Arg_ctorElim___redArg(v_t_36_, v_expr_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instToStringArg___lam__0(lean_object* v_x_44_){
_start:
{
if (lean_obj_tag(v_x_44_) == 0)
{
lean_object* v_val_45_; lean_object* v___x_46_; uint8_t v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v_val_45_ = lean_ctor_get(v_x_44_, 0);
lean_inc(v_val_45_);
lean_dec_ref_known(v_x_44_, 1);
v___x_46_ = lean_box(0);
v___x_47_ = 0;
v___x_48_ = l_Lean_Syntax_formatStx(v_val_45_, v___x_46_, v___x_47_);
v___x_49_ = l_Std_Format_defWidth;
v___x_50_ = lean_unsigned_to_nat(0u);
v___x_51_ = l_Std_Format_pretty(v___x_48_, v___x_49_, v___x_50_, v___x_50_);
return v___x_51_;
}
else
{
lean_object* v_val_52_; lean_object* v___x_53_; 
v_val_52_ = lean_ctor_get(v_x_44_, 0);
lean_inc_ref(v_val_52_);
lean_dec_ref_known(v_x_44_, 1);
v___x_53_ = lean_expr_dbg_to_string(v_val_52_);
lean_dec_ref(v_val_52_);
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instToMessageDataArg___lam__0(lean_object* v_x_56_){
_start:
{
if (lean_obj_tag(v_x_56_) == 0)
{
lean_object* v_val_57_; lean_object* v___x_58_; 
v_val_57_ = lean_ctor_get(v_x_56_, 0);
lean_inc(v_val_57_);
lean_dec_ref_known(v_x_56_, 1);
v___x_58_ = l_Lean_MessageData_ofSyntax(v_val_57_);
return v___x_58_;
}
else
{
lean_object* v_val_59_; lean_object* v___x_60_; 
v_val_59_ = lean_ctor_get(v_x_56_, 0);
lean_inc_ref(v_val_59_);
lean_dec_ref_known(v_x_56_, 1);
v___x_60_ = l_Lean_MessageData_ofExpr(v_val_59_);
return v___x_60_;
}
}
}
static lean_object* _init_l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__0(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = lean_box(0);
v___x_64_ = l_unsafeCast___redArg(v___x_63_);
return v___x_64_;
}
}
static lean_object* _init_l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__1(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_65_ = lean_unsigned_to_nat(0u);
v___x_66_ = ((lean_object*)(l_Lean_Elab_Term_instInhabitedArg_default));
v___x_67_ = lean_obj_once(&l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__0, &l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__0_once, _init_l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__0);
v___x_68_ = lean_box(0);
v___x_69_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_67_);
lean_ctor_set(v___x_69_, 2, v___x_66_);
lean_ctor_set(v___x_69_, 3, v___x_65_);
return v___x_69_;
}
}
static lean_object* _init_l_Lean_Elab_Term_instInhabitedNamedArg_default(void){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = lean_obj_once(&l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__1, &l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__1_once, _init_l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__1);
return v___x_70_;
}
}
static lean_object* _init_l_Lean_Elab_Term_instInhabitedNamedArg(void){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_Elab_Term_instInhabitedNamedArg_default;
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instToStringNamedArg___lam__0(lean_object* v_s_75_){
_start:
{
lean_object* v_name_76_; lean_object* v_val_77_; lean_object* v___x_78_; uint8_t v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___y_85_; 
v_name_76_ = lean_ctor_get(v_s_75_, 1);
lean_inc(v_name_76_);
v_val_77_ = lean_ctor_get(v_s_75_, 2);
lean_inc_ref(v_val_77_);
lean_dec_ref(v_s_75_);
v___x_78_ = ((lean_object*)(l_Lean_Elab_Term_instToStringNamedArg___lam__0___closed__0));
v___x_79_ = 1;
v___x_80_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_76_, v___x_79_);
v___x_81_ = lean_string_append(v___x_78_, v___x_80_);
lean_dec_ref(v___x_80_);
v___x_82_ = ((lean_object*)(l_Lean_Elab_Term_instToStringNamedArg___lam__0___closed__1));
v___x_83_ = lean_string_append(v___x_81_, v___x_82_);
if (lean_obj_tag(v_val_77_) == 0)
{
lean_object* v_val_89_; lean_object* v___x_90_; uint8_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v_val_89_ = lean_ctor_get(v_val_77_, 0);
lean_inc(v_val_89_);
lean_dec_ref_known(v_val_77_, 1);
v___x_90_ = lean_box(0);
v___x_91_ = 0;
v___x_92_ = l_Lean_Syntax_formatStx(v_val_89_, v___x_90_, v___x_91_);
v___x_93_ = l_Std_Format_defWidth;
v___x_94_ = lean_unsigned_to_nat(0u);
v___x_95_ = l_Std_Format_pretty(v___x_92_, v___x_93_, v___x_94_, v___x_94_);
v___y_85_ = v___x_95_;
goto v___jp_84_;
}
else
{
lean_object* v_val_96_; lean_object* v___x_97_; 
v_val_96_ = lean_ctor_get(v_val_77_, 0);
lean_inc_ref(v_val_96_);
lean_dec_ref_known(v_val_77_, 1);
v___x_97_ = lean_expr_dbg_to_string(v_val_96_);
lean_dec_ref(v_val_96_);
v___y_85_ = v___x_97_;
goto v___jp_84_;
}
v___jp_84_:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_86_ = lean_string_append(v___x_83_, v___y_85_);
lean_dec_ref(v___y_85_);
v___x_87_ = ((lean_object*)(l_Lean_Elab_Term_instToStringNamedArg___lam__0___closed__2));
v___x_88_ = lean_string_append(v___x_86_, v___x_87_);
return v___x_88_;
}
}
}
static lean_object* _init_l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = ((lean_object*)(l_Lean_Elab_Term_instToStringNamedArg___lam__0___closed__0));
v___x_101_ = l_Lean_stringToMessageData(v___x_100_);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = ((lean_object*)(l_Lean_Elab_Term_instToStringNamedArg___lam__0___closed__1));
v___x_103_ = l_Lean_stringToMessageData(v___x_102_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = ((lean_object*)(l_Lean_Elab_Term_instToStringNamedArg___lam__0___closed__2));
v___x_105_ = l_Lean_stringToMessageData(v___x_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0(lean_object* v_s_106_){
_start:
{
lean_object* v_name_107_; lean_object* v_val_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___y_115_; 
v_name_107_ = lean_ctor_get(v_s_106_, 1);
lean_inc(v_name_107_);
v_val_108_ = lean_ctor_get(v_s_106_, 2);
lean_inc_ref(v_val_108_);
lean_dec_ref(v_s_106_);
v___x_109_ = lean_obj_once(&l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__0, &l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__0_once, _init_l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__0);
v___x_110_ = l_Lean_MessageData_ofName(v_name_107_);
v___x_111_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_109_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
v___x_112_ = lean_obj_once(&l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__1, &l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__1_once, _init_l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__1);
v___x_113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_111_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
if (lean_obj_tag(v_val_108_) == 0)
{
lean_object* v_val_119_; lean_object* v___x_120_; 
v_val_119_ = lean_ctor_get(v_val_108_, 0);
lean_inc(v_val_119_);
lean_dec_ref_known(v_val_108_, 1);
v___x_120_ = l_Lean_MessageData_ofSyntax(v_val_119_);
v___y_115_ = v___x_120_;
goto v___jp_114_;
}
else
{
lean_object* v_val_121_; lean_object* v___x_122_; 
v_val_121_ = lean_ctor_get(v_val_108_, 0);
lean_inc_ref(v_val_121_);
lean_dec_ref_known(v_val_108_, 1);
v___x_122_ = l_Lean_MessageData_ofExpr(v_val_121_);
v___y_115_ = v___x_122_;
goto v___jp_114_;
}
v___jp_114_:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_113_);
lean_ctor_set(v___x_116_, 1, v___y_115_);
v___x_117_ = lean_obj_once(&l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__2, &l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__2_once, _init_l_Lean_Elab_Term_instToMessageDataNamedArg___lam__0___closed__2);
v___x_118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_118_, 0, v___x_116_);
lean_ctor_set(v___x_118_, 1, v___x_117_);
return v___x_118_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1_spec__2(lean_object* v_msgData_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_){
_start:
{
lean_object* v___x_131_; lean_object* v_env_132_; lean_object* v___x_133_; lean_object* v_toCold_134_; lean_object* v_mctx_135_; lean_object* v_lctx_136_; lean_object* v_options_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_131_ = lean_st_ref_get(v___y_129_);
v_env_132_ = lean_ctor_get(v___x_131_, 0);
lean_inc_ref(v_env_132_);
lean_dec(v___x_131_);
v___x_133_ = lean_st_ref_get(v___y_127_);
v_toCold_134_ = lean_ctor_get(v___y_128_, 0);
v_mctx_135_ = lean_ctor_get(v___x_133_, 0);
lean_inc_ref(v_mctx_135_);
lean_dec(v___x_133_);
v_lctx_136_ = lean_ctor_get(v___y_126_, 2);
v_options_137_ = lean_ctor_get(v_toCold_134_, 2);
lean_inc_ref(v_options_137_);
lean_inc_ref(v_lctx_136_);
v___x_138_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_138_, 0, v_env_132_);
lean_ctor_set(v___x_138_, 1, v_mctx_135_);
lean_ctor_set(v___x_138_, 2, v_lctx_136_);
lean_ctor_set(v___x_138_, 3, v_options_137_);
v___x_139_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
lean_ctor_set(v___x_139_, 1, v_msgData_125_);
v___x_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_140_, 0, v___x_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1_spec__2___boxed(lean_object* v_msgData_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1_spec__2(v_msgData_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
lean_dec(v___y_143_);
lean_dec_ref(v___y_142_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___redArg(lean_object* v_msg_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
lean_object* v_ref_154_; lean_object* v___x_155_; lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_164_; 
v_ref_154_ = lean_ctor_get(v___y_151_, 2);
v___x_155_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1_spec__2(v_msg_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_);
v_a_156_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_164_ == 0)
{
v___x_158_ = v___x_155_;
v_isShared_159_ = v_isSharedCheck_164_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_155_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_164_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_160_; lean_object* v___x_162_; 
lean_inc(v_ref_154_);
v___x_160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_160_, 0, v_ref_154_);
lean_ctor_set(v___x_160_, 1, v_a_156_);
if (v_isShared_159_ == 0)
{
lean_ctor_set_tag(v___x_158_, 1);
lean_ctor_set(v___x_158_, 0, v___x_160_);
v___x_162_ = v___x_158_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v___x_160_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___redArg___boxed(lean_object* v_msg_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___redArg(v_msg_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___redArg(lean_object* v_ref_172_, lean_object* v_msg_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
lean_object* v_toCold_179_; lean_object* v_currRecDepth_180_; lean_object* v_ref_181_; uint8_t v_diag_182_; uint8_t v_suppressElabErrors_183_; lean_object* v_ref_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v_toCold_179_ = lean_ctor_get(v___y_176_, 0);
v_currRecDepth_180_ = lean_ctor_get(v___y_176_, 1);
v_ref_181_ = lean_ctor_get(v___y_176_, 2);
v_diag_182_ = lean_ctor_get_uint8(v___y_176_, sizeof(void*)*3);
v_suppressElabErrors_183_ = lean_ctor_get_uint8(v___y_176_, sizeof(void*)*3 + 1);
v_ref_184_ = l_Lean_replaceRef(v_ref_172_, v_ref_181_);
lean_inc(v_currRecDepth_180_);
lean_inc_ref(v_toCold_179_);
v___x_185_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_185_, 0, v_toCold_179_);
lean_ctor_set(v___x_185_, 1, v_currRecDepth_180_);
lean_ctor_set(v___x_185_, 2, v_ref_184_);
lean_ctor_set_uint8(v___x_185_, sizeof(void*)*3, v_diag_182_);
lean_ctor_set_uint8(v___x_185_, sizeof(void*)*3 + 1, v_suppressElabErrors_183_);
v___x_186_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___redArg(v_msg_173_, v___y_174_, v___y_175_, v___x_185_, v___y_177_);
lean_dec_ref_known(v___x_185_, 3);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___redArg___boxed(lean_object* v_ref_187_, lean_object* v_msg_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___redArg(v_ref_187_, v_msg_188_, v___y_189_, v___y_190_, v___y_191_, v___y_192_);
lean_dec(v___y_192_);
lean_dec_ref(v___y_191_);
lean_dec(v___y_190_);
lean_dec_ref(v___y_189_);
lean_dec(v_ref_187_);
return v_res_194_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_addNamedArg_spec__0(lean_object* v_namedArg_195_, lean_object* v_as_196_, size_t v_i_197_, size_t v_stop_198_){
_start:
{
uint8_t v___x_199_; 
v___x_199_ = lean_usize_dec_eq(v_i_197_, v_stop_198_);
if (v___x_199_ == 0)
{
lean_object* v_name_200_; lean_object* v___x_201_; lean_object* v_name_202_; uint8_t v___x_203_; 
v_name_200_ = lean_ctor_get(v_namedArg_195_, 1);
v___x_201_ = lean_array_uget_borrowed(v_as_196_, v_i_197_);
v_name_202_ = lean_ctor_get(v___x_201_, 1);
v___x_203_ = lean_name_eq(v_name_200_, v_name_202_);
if (v___x_203_ == 0)
{
size_t v___x_204_; size_t v___x_205_; 
v___x_204_ = ((size_t)1ULL);
v___x_205_ = lean_usize_add(v_i_197_, v___x_204_);
v_i_197_ = v___x_205_;
goto _start;
}
else
{
return v___x_203_;
}
}
else
{
uint8_t v___x_207_; 
v___x_207_ = 0;
return v___x_207_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_addNamedArg_spec__0___boxed(lean_object* v_namedArg_208_, lean_object* v_as_209_, lean_object* v_i_210_, lean_object* v_stop_211_){
_start:
{
size_t v_i_boxed_212_; size_t v_stop_boxed_213_; uint8_t v_res_214_; lean_object* v_r_215_; 
v_i_boxed_212_ = lean_unbox_usize(v_i_210_);
lean_dec(v_i_210_);
v_stop_boxed_213_ = lean_unbox_usize(v_stop_211_);
lean_dec(v_stop_211_);
v_res_214_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_addNamedArg_spec__0(v_namedArg_208_, v_as_209_, v_i_boxed_212_, v_stop_boxed_213_);
lean_dec_ref(v_as_209_);
lean_dec_ref(v_namedArg_208_);
v_r_215_ = lean_box(v_res_214_);
return v_r_215_;
}
}
static lean_object* _init_l_Lean_Elab_Term_addNamedArg___closed__1(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = ((lean_object*)(l_Lean_Elab_Term_addNamedArg___closed__0));
v___x_218_ = l_Lean_stringToMessageData(v___x_217_);
return v___x_218_;
}
}
static lean_object* _init_l_Lean_Elab_Term_addNamedArg___closed__3(void){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = ((lean_object*)(l_Lean_Elab_Term_addNamedArg___closed__2));
v___x_221_ = l_Lean_stringToMessageData(v___x_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_addNamedArg(lean_object* v_namedArgs_222_, lean_object* v_namedArg_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; uint8_t v___x_234_; 
v___x_232_ = lean_unsigned_to_nat(0u);
v___x_233_ = lean_array_get_size(v_namedArgs_222_);
v___x_234_ = lean_nat_dec_lt(v___x_232_, v___x_233_);
if (v___x_234_ == 0)
{
goto v___jp_229_;
}
else
{
if (v___x_234_ == 0)
{
goto v___jp_229_;
}
else
{
size_t v___x_235_; size_t v___x_236_; uint8_t v___x_237_; 
v___x_235_ = ((size_t)0ULL);
v___x_236_ = lean_usize_of_nat(v___x_233_);
v___x_237_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_addNamedArg_spec__0(v_namedArg_223_, v_namedArgs_222_, v___x_235_, v___x_236_);
if (v___x_237_ == 0)
{
goto v___jp_229_;
}
else
{
lean_object* v_ref_238_; lean_object* v_name_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v_a_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_253_; 
lean_dec_ref(v_namedArgs_222_);
v_ref_238_ = lean_ctor_get(v_namedArg_223_, 0);
lean_inc(v_ref_238_);
v_name_239_ = lean_ctor_get(v_namedArg_223_, 1);
lean_inc(v_name_239_);
lean_dec_ref(v_namedArg_223_);
v___x_240_ = lean_obj_once(&l_Lean_Elab_Term_addNamedArg___closed__1, &l_Lean_Elab_Term_addNamedArg___closed__1_once, _init_l_Lean_Elab_Term_addNamedArg___closed__1);
v___x_241_ = l_Lean_MessageData_ofName(v_name_239_);
v___x_242_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_240_);
lean_ctor_set(v___x_242_, 1, v___x_241_);
v___x_243_ = lean_obj_once(&l_Lean_Elab_Term_addNamedArg___closed__3, &l_Lean_Elab_Term_addNamedArg___closed__3_once, _init_l_Lean_Elab_Term_addNamedArg___closed__3);
v___x_244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_242_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___redArg(v_ref_238_, v___x_244_, v_a_224_, v_a_225_, v_a_226_, v_a_227_);
lean_dec(v_ref_238_);
v_a_246_ = lean_ctor_get(v___x_245_, 0);
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_245_);
if (v_isSharedCheck_253_ == 0)
{
v___x_248_ = v___x_245_;
v_isShared_249_ = v_isSharedCheck_253_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_a_246_);
lean_dec(v___x_245_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_253_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_251_; 
if (v_isShared_249_ == 0)
{
v___x_251_ = v___x_248_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v_a_246_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
}
}
}
v___jp_229_:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = lean_array_push(v_namedArgs_222_, v_namedArg_223_);
v___x_231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
return v___x_231_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_addNamedArg___boxed(lean_object* v_namedArgs_254_, lean_object* v_namedArg_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_Elab_Term_addNamedArg(v_namedArgs_254_, v_namedArg_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_);
lean_dec(v_a_259_);
lean_dec_ref(v_a_258_);
lean_dec(v_a_257_);
lean_dec_ref(v_a_256_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1(lean_object* v_00_u03b1_262_, lean_object* v_ref_263_, lean_object* v_msg_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___redArg(v_ref_263_, v_msg_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___boxed(lean_object* v_00_u03b1_271_, lean_object* v_ref_272_, lean_object* v_msg_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1(v_00_u03b1_271_, v_ref_272_, v_msg_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_);
lean_dec(v___y_277_);
lean_dec_ref(v___y_276_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
lean_dec(v_ref_272_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1(lean_object* v_00_u03b1_280_, lean_object* v_msg_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___redArg(v_msg_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___boxed(lean_object* v_00_u03b1_288_, lean_object* v_msg_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1(v_00_u03b1_288_, v_msg_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_);
lean_dec(v___y_293_);
lean_dec_ref(v___y_292_);
lean_dec(v___y_291_);
lean_dec_ref(v___y_290_);
return v_res_295_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__8(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__7));
v___x_313_ = l_Lean_stringToMessageData(v___x_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0(lean_object* v_as_314_, size_t v_i_315_, size_t v_stop_316_, lean_object* v_b_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_){
_start:
{
lean_object* v_a_324_; uint8_t v___x_328_; 
v___x_328_ = lean_usize_dec_eq(v_i_315_, v_stop_316_);
if (v___x_328_ == 0)
{
lean_object* v_fst_329_; lean_object* v_snd_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_370_; 
v_fst_329_ = lean_ctor_get(v_b_317_, 0);
v_snd_330_ = lean_ctor_get(v_b_317_, 1);
v_isSharedCheck_370_ = !lean_is_exclusive(v_b_317_);
if (v_isSharedCheck_370_ == 0)
{
v___x_332_ = v_b_317_;
v_isShared_333_ = v_isSharedCheck_370_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_snd_330_);
lean_inc(v_fst_329_);
lean_dec(v_b_317_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_370_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; uint8_t v___x_337_; 
v___x_334_ = lean_array_uget_borrowed(v_as_314_, v_i_315_);
lean_inc(v___x_334_);
v___x_335_ = l_Lean_Syntax_getKind(v___x_334_);
v___x_336_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__4));
v___x_337_ = lean_name_eq(v___x_335_, v___x_336_);
if (v___x_337_ == 0)
{
lean_object* v___x_338_; uint8_t v___x_339_; 
v___x_338_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6));
v___x_339_ = lean_name_eq(v___x_335_, v___x_338_);
lean_dec(v___x_335_);
if (v___x_339_ == 0)
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_343_; 
lean_inc(v___x_334_);
v___x_340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_340_, 0, v___x_334_);
v___x_341_ = lean_array_push(v_snd_330_, v___x_340_);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 1, v___x_341_);
v___x_343_ = v___x_332_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_fst_329_);
lean_ctor_set(v_reuseFailAlloc_344_, 1, v___x_341_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
v_a_324_ = v___x_343_;
goto v___jp_323_;
}
}
else
{
lean_object* v___x_345_; lean_object* v___x_346_; 
lean_del_object(v___x_332_);
lean_dec(v_snd_330_);
lean_dec(v_fst_329_);
v___x_345_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__8, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__8);
v___x_346_ = l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___redArg(v___x_334_, v___x_345_, v___y_318_, v___y_319_, v___y_320_, v___y_321_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v_a_347_; 
v_a_347_ = lean_ctor_get(v___x_346_, 0);
lean_inc(v_a_347_);
lean_dec_ref_known(v___x_346_, 1);
v_a_324_ = v_a_347_;
goto v___jp_323_;
}
else
{
return v___x_346_;
}
}
}
else
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v_name_351_; lean_object* v___x_352_; lean_object* v_val_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
lean_dec(v___x_335_);
v___x_348_ = lean_unsigned_to_nat(1u);
v___x_349_ = l_Lean_Syntax_getArg(v___x_334_, v___x_348_);
v___x_350_ = l_Lean_Syntax_getId(v___x_349_);
lean_dec(v___x_349_);
v_name_351_ = l_Lean_Name_eraseMacroScopes(v___x_350_);
lean_dec(v___x_350_);
v___x_352_ = lean_unsigned_to_nat(3u);
v_val_353_ = l_Lean_Syntax_getArg(v___x_334_, v___x_352_);
v___x_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_354_, 0, v_val_353_);
v___x_355_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_334_);
v___x_356_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_356_, 0, v___x_334_);
lean_ctor_set(v___x_356_, 1, v_name_351_);
lean_ctor_set(v___x_356_, 2, v___x_354_);
lean_ctor_set(v___x_356_, 3, v___x_355_);
v___x_357_ = l_Lean_Elab_Term_addNamedArg(v_fst_329_, v___x_356_, v___y_318_, v___y_319_, v___y_320_, v___y_321_);
if (lean_obj_tag(v___x_357_) == 0)
{
lean_object* v_a_358_; lean_object* v___x_360_; 
v_a_358_ = lean_ctor_get(v___x_357_, 0);
lean_inc(v_a_358_);
lean_dec_ref_known(v___x_357_, 1);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 0, v_a_358_);
v___x_360_ = v___x_332_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_a_358_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v_snd_330_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
v_a_324_ = v___x_360_;
goto v___jp_323_;
}
}
else
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_369_; 
lean_del_object(v___x_332_);
lean_dec(v_snd_330_);
v_a_362_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_369_ == 0)
{
v___x_364_ = v___x_357_;
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_357_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
if (v_isShared_365_ == 0)
{
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_a_362_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
}
}
else
{
lean_object* v___x_371_; 
v___x_371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_371_, 0, v_b_317_);
return v___x_371_;
}
v___jp_323_:
{
size_t v___x_325_; size_t v___x_326_; 
v___x_325_ = ((size_t)1ULL);
v___x_326_ = lean_usize_add(v_i_315_, v___x_325_);
v_i_315_ = v___x_326_;
v_b_317_ = v_a_324_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___boxed(lean_object* v_as_372_, lean_object* v_i_373_, lean_object* v_stop_374_, lean_object* v_b_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
size_t v_i_boxed_381_; size_t v_stop_boxed_382_; lean_object* v_res_383_; 
v_i_boxed_381_ = lean_unbox_usize(v_i_373_);
lean_dec(v_i_373_);
v_stop_boxed_382_ = lean_unbox_usize(v_stop_374_);
lean_dec(v_stop_374_);
v_res_383_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0(v_as_372_, v_i_boxed_381_, v_stop_boxed_382_, v_b_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec_ref(v_as_372_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandArgs(lean_object* v_args_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_){
_start:
{
uint8_t v___y_395_; lean_object* v_fst_396_; lean_object* v_snd_397_; uint8_t v___y_403_; lean_object* v___y_404_; lean_object* v_fst_417_; uint8_t v_snd_418_; lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; 
v___x_431_ = lean_array_get_size(v_args_388_);
v___x_432_ = lean_unsigned_to_nat(0u);
v___x_433_ = lean_nat_dec_eq(v___x_431_, v___x_432_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; uint8_t v___x_439_; 
v___x_434_ = lean_box(0);
v___x_435_ = lean_unsigned_to_nat(1u);
v___x_436_ = lean_nat_sub(v___x_431_, v___x_435_);
v___x_437_ = lean_array_get_borrowed(v___x_434_, v_args_388_, v___x_436_);
lean_dec(v___x_436_);
v___x_438_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6));
lean_inc(v___x_437_);
v___x_439_ = l_Lean_Syntax_isOfKind(v___x_437_, v___x_438_);
if (v___x_439_ == 0)
{
v_fst_417_ = v_args_388_;
v_snd_418_ = v___x_439_;
goto v___jp_416_;
}
else
{
lean_object* v___x_440_; 
v___x_440_ = lean_array_pop(v_args_388_);
v_fst_417_ = v___x_440_;
v_snd_418_ = v___x_439_;
goto v___jp_416_;
}
}
else
{
uint8_t v___x_441_; 
v___x_441_ = 0;
v_fst_417_ = v_args_388_;
v_snd_418_ = v___x_441_;
goto v___jp_416_;
}
v___jp_394_:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_398_ = lean_box(v___y_395_);
v___x_399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_399_, 0, v_snd_397_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
v___x_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_400_, 0, v_fst_396_);
lean_ctor_set(v___x_400_, 1, v___x_399_);
v___x_401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
return v___x_401_;
}
v___jp_402_:
{
if (lean_obj_tag(v___y_404_) == 0)
{
lean_object* v_a_405_; lean_object* v_fst_406_; lean_object* v_snd_407_; 
v_a_405_ = lean_ctor_get(v___y_404_, 0);
lean_inc(v_a_405_);
lean_dec_ref_known(v___y_404_, 1);
v_fst_406_ = lean_ctor_get(v_a_405_, 0);
lean_inc(v_fst_406_);
v_snd_407_ = lean_ctor_get(v_a_405_, 1);
lean_inc(v_snd_407_);
lean_dec(v_a_405_);
v___y_395_ = v___y_403_;
v_fst_396_ = v_fst_406_;
v_snd_397_ = v_snd_407_;
goto v___jp_394_;
}
else
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_415_; 
v_a_408_ = lean_ctor_get(v___y_404_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v___y_404_);
if (v_isSharedCheck_415_ == 0)
{
v___x_410_ = v___y_404_;
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___y_404_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_413_; 
if (v_isShared_411_ == 0)
{
v___x_413_ = v___x_410_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_a_408_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
}
}
v___jp_416_:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; uint8_t v___x_422_; 
v___x_419_ = lean_unsigned_to_nat(0u);
v___x_420_ = ((lean_object*)(l_Lean_Elab_Term_expandArgs___closed__0));
v___x_421_ = lean_array_get_size(v_fst_417_);
v___x_422_ = lean_nat_dec_lt(v___x_419_, v___x_421_);
if (v___x_422_ == 0)
{
lean_dec_ref(v_fst_417_);
v___y_395_ = v_snd_418_;
v_fst_396_ = v___x_420_;
v_snd_397_ = v___x_420_;
goto v___jp_394_;
}
else
{
lean_object* v___x_423_; uint8_t v___x_424_; 
v___x_423_ = ((lean_object*)(l_Lean_Elab_Term_expandArgs___closed__1));
v___x_424_ = lean_nat_dec_le(v___x_421_, v___x_421_);
if (v___x_424_ == 0)
{
if (v___x_422_ == 0)
{
lean_dec_ref(v_fst_417_);
v___y_395_ = v_snd_418_;
v_fst_396_ = v___x_420_;
v_snd_397_ = v___x_420_;
goto v___jp_394_;
}
else
{
size_t v___x_425_; size_t v___x_426_; lean_object* v___x_427_; 
v___x_425_ = ((size_t)0ULL);
v___x_426_ = lean_usize_of_nat(v___x_421_);
v___x_427_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0(v_fst_417_, v___x_425_, v___x_426_, v___x_423_, v_a_389_, v_a_390_, v_a_391_, v_a_392_);
lean_dec_ref(v_fst_417_);
v___y_403_ = v_snd_418_;
v___y_404_ = v___x_427_;
goto v___jp_402_;
}
}
else
{
size_t v___x_428_; size_t v___x_429_; lean_object* v___x_430_; 
v___x_428_ = ((size_t)0ULL);
v___x_429_ = lean_usize_of_nat(v___x_421_);
v___x_430_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0(v_fst_417_, v___x_428_, v___x_429_, v___x_423_, v_a_389_, v_a_390_, v_a_391_, v_a_392_);
lean_dec_ref(v_fst_417_);
v___y_403_ = v_snd_418_;
v___y_404_ = v___x_430_;
goto v___jp_402_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandArgs___boxed(lean_object* v_args_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_Lean_Elab_Term_expandArgs(v_args_442_, v_a_443_, v_a_444_, v_a_445_, v_a_446_);
lean_dec(v_a_446_);
lean_dec_ref(v_a_445_);
lean_dec(v_a_444_);
lean_dec_ref(v_a_443_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandApp(lean_object* v_stx_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_455_ = lean_unsigned_to_nat(1u);
v___x_456_ = l_Lean_Syntax_getArg(v_stx_449_, v___x_455_);
v___x_457_ = l_Lean_Syntax_getArgs(v___x_456_);
lean_dec(v___x_456_);
v___x_458_ = l_Lean_Elab_Term_expandArgs(v___x_457_, v_a_450_, v_a_451_, v_a_452_, v_a_453_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v_a_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_469_; 
v_a_459_ = lean_ctor_get(v___x_458_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_469_ == 0)
{
v___x_461_ = v___x_458_;
v_isShared_462_ = v_isSharedCheck_469_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_a_459_);
lean_dec(v___x_458_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_469_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_467_; 
v___x_463_ = lean_unsigned_to_nat(0u);
v___x_464_ = l_Lean_Syntax_getArg(v_stx_449_, v___x_463_);
v___x_465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_464_);
lean_ctor_set(v___x_465_, 1, v_a_459_);
if (v_isShared_462_ == 0)
{
lean_ctor_set(v___x_461_, 0, v___x_465_);
v___x_467_ = v___x_461_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v___x_465_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
else
{
lean_object* v_a_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_477_; 
v_a_470_ = lean_ctor_get(v___x_458_, 0);
v_isSharedCheck_477_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_477_ == 0)
{
v___x_472_ = v___x_458_;
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_a_470_);
lean_dec(v___x_458_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_475_; 
if (v_isShared_473_ == 0)
{
v___x_475_ = v___x_472_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v_a_470_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandApp___boxed(lean_object* v_stx_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_Lean_Elab_Term_expandApp(v_stx_478_, v_a_479_, v_a_480_, v_a_481_, v_a_482_);
lean_dec(v_a_482_);
lean_dec_ref(v_a_481_);
lean_dec(v_a_480_);
lean_dec_ref(v_a_479_);
lean_dec(v_stx_478_);
return v_res_484_;
}
}
lean_object* runtime_initialize_Lean_Elab_Term(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Arg(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_instInhabitedNamedArg_default = _init_l_Lean_Elab_Term_instInhabitedNamedArg_default();
lean_mark_persistent(l_Lean_Elab_Term_instInhabitedNamedArg_default);
l_Lean_Elab_Term_instInhabitedNamedArg = _init_l_Lean_Elab_Term_instInhabitedNamedArg();
lean_mark_persistent(l_Lean_Elab_Term_instInhabitedNamedArg);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Arg(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Term(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Arg(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Arg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Arg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Arg(builtin);
}
#ifdef __cplusplus
}
#endif

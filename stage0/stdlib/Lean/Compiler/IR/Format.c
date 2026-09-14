// Lean compiler output
// Module: Lean.Compiler.IR.Format
// Imports: public import Lean.Compiler.IR.Basic import Init.Data.Format.Macro
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
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_String_quote(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "x_"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "◾"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__1 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__1_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__2 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instToFormatArg___private__1(lean_object*);
static const lean_closure_object l_Lean_IR_instToFormatArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instToFormatArg___private__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instToFormatArg___closed__0 = (const lean_object*)&l_Lean_IR_instToFormatArg___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instToFormatArg = (const lean_object*)&l_Lean_IR_instToFormatArg___closed__0_value;
static const lean_string_object l_Lean_IR_formatArray___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_IR_formatArray___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_IR_formatArray___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_IR_formatArray___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatArray___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lean_IR_formatArray___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_IR_formatArray___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_IR_formatArray___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_formatArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_formatArray___redArg___closed__0 = (const lean_object*)&l_Lean_IR_formatArray___redArg___closed__0_value;
static const lean_closure_object l_Lean_IR_formatArray___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_formatArray___redArg___closed__1 = (const lean_object*)&l_Lean_IR_formatArray___redArg___closed__1_value;
static const lean_closure_object l_Lean_IR_formatArray___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_formatArray___redArg___closed__2 = (const lean_object*)&l_Lean_IR_formatArray___redArg___closed__2_value;
static const lean_closure_object l_Lean_IR_formatArray___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_formatArray___redArg___closed__3 = (const lean_object*)&l_Lean_IR_formatArray___redArg___closed__3_value;
static const lean_closure_object l_Lean_IR_formatArray___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_formatArray___redArg___closed__4 = (const lean_object*)&l_Lean_IR_formatArray___redArg___closed__4_value;
static const lean_closure_object l_Lean_IR_formatArray___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_formatArray___redArg___closed__5 = (const lean_object*)&l_Lean_IR_formatArray___redArg___closed__5_value;
static const lean_closure_object l_Lean_IR_formatArray___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_formatArray___redArg___closed__6 = (const lean_object*)&l_Lean_IR_formatArray___redArg___closed__6_value;
static const lean_ctor_object l_Lean_IR_formatArray___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_formatArray___redArg___closed__0_value),((lean_object*)&l_Lean_IR_formatArray___redArg___closed__1_value)}};
static const lean_object* l_Lean_IR_formatArray___redArg___closed__7 = (const lean_object*)&l_Lean_IR_formatArray___redArg___closed__7_value;
static const lean_ctor_object l_Lean_IR_formatArray___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_formatArray___redArg___closed__7_value),((lean_object*)&l_Lean_IR_formatArray___redArg___closed__2_value),((lean_object*)&l_Lean_IR_formatArray___redArg___closed__3_value),((lean_object*)&l_Lean_IR_formatArray___redArg___closed__4_value),((lean_object*)&l_Lean_IR_formatArray___redArg___closed__5_value)}};
static const lean_object* l_Lean_IR_formatArray___redArg___closed__8 = (const lean_object*)&l_Lean_IR_formatArray___redArg___closed__8_value;
static const lean_ctor_object l_Lean_IR_formatArray___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_formatArray___redArg___closed__8_value),((lean_object*)&l_Lean_IR_formatArray___redArg___closed__6_value)}};
static const lean_object* l_Lean_IR_formatArray___redArg___closed__9 = (const lean_object*)&l_Lean_IR_formatArray___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_IR_formatArray___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_formatArray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatLitVal(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instToFormatLitVal___private__1(lean_object*);
static const lean_closure_object l_Lean_IR_instToFormatLitVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instToFormatLitVal___private__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instToFormatLitVal___closed__0 = (const lean_object*)&l_Lean_IR_instToFormatLitVal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instToFormatLitVal = (const lean_object*)&l_Lean_IR_instToFormatLitVal___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__0;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__1 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__1_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__1_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__2 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__3 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__3_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__3_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__4 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__4_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ctor_"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__5 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__5_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__5_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__6 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__6_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__7 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__7_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__7_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__8 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instToFormatCtorInfo___private__1(lean_object*);
static const lean_closure_object l_Lean_IR_instToFormatCtorInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instToFormatCtorInfo___private__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instToFormatCtorInfo___closed__0 = (const lean_object*)&l_Lean_IR_instToFormatCtorInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instToFormatCtorInfo = (const lean_object*)&l_Lean_IR_instToFormatCtorInfo___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0___boxed(lean_object*);
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "reset["};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__0 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__0_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__1 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "] "};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__2 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__2_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__3 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "reuse"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__4 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__4_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__4_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__5 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__6 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__6_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__6_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__7 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__7_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__8 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__8_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "!"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__9 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__9_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "proj["};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__10 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__10_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__10_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__11 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__11_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "uproj["};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__12 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__12_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__12_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__13 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__13_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "sproj["};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__14 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__14_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__14_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__15 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__15_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__16 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__16_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__16_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__17 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__17_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pap "};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__18 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__18_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__18_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__19 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__19_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "app "};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__20 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__20_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__20_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__21 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__21_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "box "};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__22 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__22_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__22_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__23 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__23_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "unbox "};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__24 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__24_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__24_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__25 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__25_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "isShared "};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__26 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__26_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__26_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__27 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__27_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instToFormatExpr___private__1(lean_object*);
static const lean_closure_object l_Lean_IR_instToFormatExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instToFormatExpr___private__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instToFormatExpr___closed__0 = (const lean_object*)&l_Lean_IR_instToFormatExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instToFormatExpr = (const lean_object*)&l_Lean_IR_instToFormatExpr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_IR_instToStringExpr___lam__0(lean_object*);
static const lean_closure_object l_Lean_IR_instToStringExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instToStringExpr___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instToStringExpr___closed__0 = (const lean_object*)&l_Lean_IR_instToStringExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instToStringExpr = (const lean_object*)&l_Lean_IR_instToStringExpr___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType_spec__1(lean_object*);
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "float"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__0 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__0_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__1 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "u8"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__2 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__2_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__3 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "u16"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__4 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__4_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__4_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__5 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "u32"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__6 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__6_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__6_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__7 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__7_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "u64"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__8 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__8_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__8_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__9 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__9_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "usize"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__10 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__10_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__10_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__11 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__11_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "obj"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__12 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__12_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__12_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__13 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__13_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tobj"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__14 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__14_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__14_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__15 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__15_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "float32"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__16 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__16_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__16_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__17 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__17_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "struct "};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__18 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__18_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__18_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__19 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__19_value;
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__20 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__20_value;
static lean_once_cell_t l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__22;
static lean_once_cell_t l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__23;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__20_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__24 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__24_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__21 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__21_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__21_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__25 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__25_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "union "};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__26 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__26_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__26_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__27 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__27_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tagged"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__28 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__28_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__28_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__29 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__29_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "void"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__30 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__30_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__30_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__31 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__31_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instToFormatIRType___private__1(lean_object*);
static const lean_closure_object l_Lean_IR_instToFormatIRType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instToFormatIRType___private__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instToFormatIRType___closed__0 = (const lean_object*)&l_Lean_IR_instToFormatIRType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instToFormatIRType = (const lean_object*)&l_Lean_IR_instToFormatIRType___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_IR_instToStringIRType___lam__0(lean_object*);
static const lean_closure_object l_Lean_IR_instToStringIRType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instToStringIRType___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instToStringIRType___closed__0 = (const lean_object*)&l_Lean_IR_instToStringIRType___closed__0_value;
static const lean_closure_object l_Lean_IR_instToStringIRType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_IR_instToStringIRType___closed__0_value),((lean_object*)&l_Lean_IR_instToFormatIRType___closed__0_value)} };
static const lean_object* l_Lean_IR_instToStringIRType___closed__1 = (const lean_object*)&l_Lean_IR_instToStringIRType___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instToStringIRType = (const lean_object*)&l_Lean_IR_instToStringIRType___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__0 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__0_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__1 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__2 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__2_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__3 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__4 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__4_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__4_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__5 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "@& "};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__6 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instToFormatParam___private__1(lean_object*);
static const lean_closure_object l_Lean_IR_instToFormatParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instToFormatParam___private__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instToFormatParam___closed__0 = (const lean_object*)&l_Lean_IR_instToFormatParam___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instToFormatParam = (const lean_object*)&l_Lean_IR_instToFormatParam___closed__0_value;
static const lean_string_object l_Lean_IR_formatAlt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = " →"};
static const lean_object* l_Lean_IR_formatAlt___closed__0 = (const lean_object*)&l_Lean_IR_formatAlt___closed__0_value;
static const lean_ctor_object l_Lean_IR_formatAlt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatAlt___closed__0_value)}};
static const lean_object* l_Lean_IR_formatAlt___closed__1 = (const lean_object*)&l_Lean_IR_formatAlt___closed__1_value;
static const lean_string_object l_Lean_IR_formatAlt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 9, .m_data = "default →"};
static const lean_object* l_Lean_IR_formatAlt___closed__2 = (const lean_object*)&l_Lean_IR_formatAlt___closed__2_value;
static const lean_ctor_object l_Lean_IR_formatAlt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatAlt___closed__2_value)}};
static const lean_object* l_Lean_IR_formatAlt___closed__3 = (const lean_object*)&l_Lean_IR_formatAlt___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_IR_formatAlt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_formatArray___at___00Lean_IR_formatParams_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_formatArray___at___00Lean_IR_formatParams_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_formatArray___at___00Lean_IR_formatParams_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_formatArray___at___00Lean_IR_formatParams_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_formatParams(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_formatParams___boxed(lean_object*);
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "let "};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__0 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__0_value;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatFnBodyHead___closed__0_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__1 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__1_value;
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__2 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__2_value;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatFnBodyHead___closed__2_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__3 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__3_value;
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "block_"};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__4 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__4_value;
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " := ..."};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__5 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__5_value;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatFnBodyHead___closed__5_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__6 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__6_value;
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "set "};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__7 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__7_value;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatFnBodyHead___closed__7_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__8 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__8_value;
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "] := "};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__9 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__9_value;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatFnBodyHead___closed__9_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__10 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__10_value;
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "setTag "};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__11 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__11_value;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatFnBodyHead___closed__11_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__12 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__12_value;
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "uset "};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__13 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__13_value;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatFnBodyHead___closed__13_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__14 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__14_value;
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sset "};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__15 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__15_value;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatFnBodyHead___closed__15_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__16 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__16_value;
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "] : "};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__17 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__17_value;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatFnBodyHead___closed__17_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__18 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__18_value;
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inc"};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__19 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__19_value;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatFnBodyHead___closed__19_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__20 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__20_value;
static lean_once_cell_t l_Lean_IR_formatFnBodyHead___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_formatFnBodyHead___closed__21;
static lean_once_cell_t l_Lean_IR_formatFnBodyHead___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_formatFnBodyHead___closed__22;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__8_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__23 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__23_value;
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dec"};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__24 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__24_value;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatFnBodyHead___closed__24_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__25 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__25_value;
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "del "};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__26 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__26_value;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatFnBodyHead___closed__26_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__27 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__27_value;
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "case "};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__28 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__28_value;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatFnBodyHead___closed__28_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__29 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__29_value;
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " of ..."};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__30 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__30_value;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatFnBodyHead___closed__30_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__31 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__31_value;
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ret "};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__32 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__32_value;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatFnBodyHead___closed__32_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__33 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__33_value;
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "jmp "};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__34 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__34_value;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatFnBodyHead___closed__34_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__35 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__35_value;
static const lean_string_object l_Lean_IR_formatFnBodyHead___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⊥"};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__36 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__36_value;
static const lean_ctor_object l_Lean_IR_formatFnBodyHead___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatFnBodyHead___closed__36_value)}};
static const lean_object* l_Lean_IR_formatFnBodyHead___closed__37 = (const lean_object*)&l_Lean_IR_formatFnBodyHead___closed__37_value;
LEAN_EXPORT lean_object* l_Lean_IR_formatFnBodyHead(lean_object*);
LEAN_EXPORT lean_object* lean_ir_format_fn_body_head(lean_object*);
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__0 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__0_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__1 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " :="};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__2 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__2_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__3 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " of"};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__4 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__4_value;
static const lean_ctor_object l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__4_value)}};
static const lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__5 = (const lean_object*)&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_formatFnBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instToFormatFnBody___lam__0(lean_object*);
static const lean_closure_object l_Lean_IR_instToFormatFnBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instToFormatFnBody___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instToFormatFnBody___closed__0 = (const lean_object*)&l_Lean_IR_instToFormatFnBody___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instToFormatFnBody = (const lean_object*)&l_Lean_IR_instToFormatFnBody___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_IR_instToStringFnBody___lam__0(lean_object*);
static const lean_closure_object l_Lean_IR_instToStringFnBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instToStringFnBody___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instToStringFnBody___closed__0 = (const lean_object*)&l_Lean_IR_instToStringFnBody___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instToStringFnBody = (const lean_object*)&l_Lean_IR_instToStringFnBody___closed__0_value;
static const lean_string_object l_Lean_IR_formatDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "def "};
static const lean_object* l_Lean_IR_formatDecl___closed__0 = (const lean_object*)&l_Lean_IR_formatDecl___closed__0_value;
static const lean_ctor_object l_Lean_IR_formatDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatDecl___closed__0_value)}};
static const lean_object* l_Lean_IR_formatDecl___closed__1 = (const lean_object*)&l_Lean_IR_formatDecl___closed__1_value;
static const lean_string_object l_Lean_IR_formatDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "extern "};
static const lean_object* l_Lean_IR_formatDecl___closed__2 = (const lean_object*)&l_Lean_IR_formatDecl___closed__2_value;
static const lean_ctor_object l_Lean_IR_formatDecl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_formatDecl___closed__2_value)}};
static const lean_object* l_Lean_IR_formatDecl___closed__3 = (const lean_object*)&l_Lean_IR_formatDecl___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_IR_formatDecl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instToFormatDecl___lam__0(lean_object*);
static const lean_closure_object l_Lean_IR_instToFormatDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instToFormatDecl___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instToFormatDecl___closed__0 = (const lean_object*)&l_Lean_IR_instToFormatDecl___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instToFormatDecl = (const lean_object*)&l_Lean_IR_instToFormatDecl___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_IR_declToString(lean_object*);
static const lean_closure_object l_Lean_IR_instToStringDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_declToString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instToStringDecl___closed__0 = (const lean_object*)&l_Lean_IR_instToStringDecl___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instToStringDecl = (const lean_object*)&l_Lean_IR_instToStringDecl___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg(lean_object* v_x_5_){
_start:
{
if (lean_obj_tag(v_x_5_) == 0)
{
lean_object* v_id_6_; lean_object* v___x_8_; uint8_t v_isShared_9_; uint8_t v_isSharedCheck_16_; 
v_id_6_ = lean_ctor_get(v_x_5_, 0);
v_isSharedCheck_16_ = !lean_is_exclusive(v_x_5_);
if (v_isSharedCheck_16_ == 0)
{
v___x_8_ = v_x_5_;
v_isShared_9_ = v_isSharedCheck_16_;
goto v_resetjp_7_;
}
else
{
lean_inc(v_id_6_);
lean_dec(v_x_5_);
v___x_8_ = lean_box(0);
v_isShared_9_ = v_isSharedCheck_16_;
goto v_resetjp_7_;
}
v_resetjp_7_:
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_14_; 
v___x_10_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_11_ = l_Nat_reprFast(v_id_6_);
v___x_12_ = lean_string_append(v___x_10_, v___x_11_);
lean_dec_ref(v___x_11_);
if (v_isShared_9_ == 0)
{
lean_ctor_set_tag(v___x_8_, 3);
lean_ctor_set(v___x_8_, 0, v___x_12_);
v___x_14_ = v___x_8_;
goto v_reusejp_13_;
}
else
{
lean_object* v_reuseFailAlloc_15_; 
v_reuseFailAlloc_15_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_15_, 0, v___x_12_);
v___x_14_ = v_reuseFailAlloc_15_;
goto v_reusejp_13_;
}
v_reusejp_13_:
{
return v___x_14_;
}
}
}
else
{
lean_object* v___x_17_; 
v___x_17_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__2));
return v___x_17_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instToFormatArg___private__1(lean_object* v_a_18_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg(v_a_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_formatArray___redArg___lam__0(lean_object* v_inst_25_, lean_object* v_x1_26_, lean_object* v_x2_27_){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_28_ = ((lean_object*)(l_Lean_IR_formatArray___redArg___lam__0___closed__1));
v___x_29_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_29_, 0, v_x1_26_);
lean_ctor_set(v___x_29_, 1, v___x_28_);
v___x_30_ = lean_apply_1(v_inst_25_, v_x2_27_);
v___x_31_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_31_, 0, v___x_29_);
lean_ctor_set(v___x_31_, 1, v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_formatArray___redArg(lean_object* v_inst_51_, lean_object* v_args_52_){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_53_ = lean_box(0);
v___x_54_ = lean_unsigned_to_nat(0u);
v___x_55_ = lean_array_get_size(v_args_52_);
v___x_56_ = ((lean_object*)(l_Lean_IR_formatArray___redArg___closed__9));
v___x_57_ = lean_nat_dec_lt(v___x_54_, v___x_55_);
if (v___x_57_ == 0)
{
lean_dec_ref(v_args_52_);
lean_dec_ref(v_inst_51_);
return v___x_53_;
}
else
{
lean_object* v___f_58_; uint8_t v___x_59_; 
v___f_58_ = lean_alloc_closure((void*)(l_Lean_IR_formatArray___redArg___lam__0), 3, 1);
lean_closure_set(v___f_58_, 0, v_inst_51_);
v___x_59_ = lean_nat_dec_le(v___x_55_, v___x_55_);
if (v___x_59_ == 0)
{
if (v___x_57_ == 0)
{
lean_dec_ref(v___f_58_);
lean_dec_ref(v_args_52_);
return v___x_53_;
}
else
{
size_t v___x_60_; size_t v___x_61_; lean_object* v___x_62_; 
v___x_60_ = ((size_t)0ULL);
v___x_61_ = lean_usize_of_nat(v___x_55_);
v___x_62_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_56_, v___f_58_, v_args_52_, v___x_60_, v___x_61_, v___x_53_);
return v___x_62_;
}
}
else
{
size_t v___x_63_; size_t v___x_64_; lean_object* v___x_65_; 
v___x_63_ = ((size_t)0ULL);
v___x_64_ = lean_usize_of_nat(v___x_55_);
v___x_65_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_56_, v___f_58_, v_args_52_, v___x_63_, v___x_64_, v___x_53_);
return v___x_65_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_formatArray(lean_object* v_00_u03b1_66_, lean_object* v_inst_67_, lean_object* v_args_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = l_Lean_IR_formatArray___redArg(v_inst_67_, v_args_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatLitVal(lean_object* v_x_70_){
_start:
{
if (lean_obj_tag(v_x_70_) == 0)
{
lean_object* v_v_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_79_; 
v_v_71_ = lean_ctor_get(v_x_70_, 0);
v_isSharedCheck_79_ = !lean_is_exclusive(v_x_70_);
if (v_isSharedCheck_79_ == 0)
{
v___x_73_ = v_x_70_;
v_isShared_74_ = v_isSharedCheck_79_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_v_71_);
lean_dec(v_x_70_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_79_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v___x_75_; lean_object* v___x_77_; 
v___x_75_ = l_Nat_reprFast(v_v_71_);
if (v_isShared_74_ == 0)
{
lean_ctor_set_tag(v___x_73_, 3);
lean_ctor_set(v___x_73_, 0, v___x_75_);
v___x_77_ = v___x_73_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v___x_75_);
v___x_77_ = v_reuseFailAlloc_78_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
return v___x_77_;
}
}
}
else
{
lean_object* v_v_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_88_; 
v_v_80_ = lean_ctor_get(v_x_70_, 0);
v_isSharedCheck_88_ = !lean_is_exclusive(v_x_70_);
if (v_isSharedCheck_88_ == 0)
{
v___x_82_ = v_x_70_;
v_isShared_83_ = v_isSharedCheck_88_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_v_80_);
lean_dec(v_x_70_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_88_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_84_; lean_object* v___x_86_; 
v___x_84_ = l_String_quote(v_v_80_);
if (v_isShared_83_ == 0)
{
lean_ctor_set_tag(v___x_82_, 3);
lean_ctor_set(v___x_82_, 0, v___x_84_);
v___x_86_ = v___x_82_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v___x_84_);
v___x_86_ = v_reuseFailAlloc_87_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
return v___x_86_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instToFormatLitVal___private__1(lean_object* v_a_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatLitVal(v_a_89_);
return v___x_90_;
}
}
static lean_object* _init_l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__0(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = lean_box(0);
v___x_94_ = l_unsafeCast___redArg(v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo(lean_object* v_x_107_){
_start:
{
lean_object* v_name_108_; lean_object* v_cidx_109_; lean_object* v_usize_110_; lean_object* v_ssize_111_; lean_object* v_r_113_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v_r_127_; lean_object* v___x_138_; uint8_t v___x_139_; 
v_name_108_ = lean_ctor_get(v_x_107_, 0);
lean_inc(v_name_108_);
v_cidx_109_ = lean_ctor_get(v_x_107_, 1);
lean_inc(v_cidx_109_);
v_usize_110_ = lean_ctor_get(v_x_107_, 3);
lean_inc(v_usize_110_);
v_ssize_111_ = lean_ctor_get(v_x_107_, 4);
lean_inc(v_ssize_111_);
lean_dec_ref(v_x_107_);
v___x_124_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__6));
v___x_125_ = l_Nat_reprFast(v_cidx_109_);
v___x_126_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
v_r_127_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_r_127_, 0, v___x_124_);
lean_ctor_set(v_r_127_, 1, v___x_126_);
v___x_138_ = lean_unsigned_to_nat(0u);
v___x_139_ = lean_nat_dec_lt(v___x_138_, v_usize_110_);
if (v___x_139_ == 0)
{
uint8_t v___x_140_; 
v___x_140_ = lean_nat_dec_lt(v___x_138_, v_ssize_111_);
if (v___x_140_ == 0)
{
lean_dec(v_ssize_111_);
lean_dec(v_usize_110_);
v_r_113_ = v_r_127_;
goto v___jp_112_;
}
else
{
goto v___jp_128_;
}
}
else
{
goto v___jp_128_;
}
v___jp_112_:
{
lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_114_ = lean_obj_once(&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__0, &l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__0_once, _init_l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__0);
v___x_115_ = lean_name_eq(v_name_108_, v___x_114_);
if (v___x_115_ == 0)
{
uint8_t v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v_r_123_; 
v___x_116_ = 1;
v___x_117_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__2));
v___x_118_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_118_, 0, v_r_113_);
lean_ctor_set(v___x_118_, 1, v___x_117_);
v___x_119_ = l_Lean_Name_toString(v_name_108_, v___x_116_);
v___x_120_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
v___x_121_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_118_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
v___x_122_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__4));
v_r_123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_r_123_, 0, v___x_121_);
lean_ctor_set(v_r_123_, 1, v___x_122_);
return v_r_123_;
}
else
{
lean_dec(v_name_108_);
return v_r_113_;
}
}
v___jp_128_:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v_r_137_; 
v___x_129_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__8));
v___x_130_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_130_, 0, v_r_127_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
v___x_131_ = l_Nat_reprFast(v_usize_110_);
v___x_132_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_132_, 0, v___x_131_);
v___x_133_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_130_);
lean_ctor_set(v___x_133_, 1, v___x_132_);
v___x_134_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
lean_ctor_set(v___x_134_, 1, v___x_129_);
v___x_135_ = l_Nat_reprFast(v_ssize_111_);
v___x_136_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
v_r_137_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_r_137_, 0, v___x_134_);
lean_ctor_set(v_r_137_, 1, v___x_136_);
v_r_113_ = v_r_137_;
goto v___jp_112_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instToFormatCtorInfo___private__1(lean_object* v_a_141_){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo(v_a_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0_spec__0(lean_object* v_as_145_, size_t v_i_146_, size_t v_stop_147_, lean_object* v_b_148_){
_start:
{
uint8_t v___x_149_; 
v___x_149_ = lean_usize_dec_eq(v_i_146_, v_stop_147_);
if (v___x_149_ == 0)
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; size_t v___x_155_; size_t v___x_156_; 
v___x_150_ = lean_array_uget_borrowed(v_as_145_, v_i_146_);
v___x_151_ = ((lean_object*)(l_Lean_IR_formatArray___redArg___lam__0___closed__1));
v___x_152_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_152_, 0, v_b_148_);
lean_ctor_set(v___x_152_, 1, v___x_151_);
lean_inc(v___x_150_);
v___x_153_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg(v___x_150_);
v___x_154_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_154_, 0, v___x_152_);
lean_ctor_set(v___x_154_, 1, v___x_153_);
v___x_155_ = ((size_t)1ULL);
v___x_156_ = lean_usize_add(v_i_146_, v___x_155_);
v_i_146_ = v___x_156_;
v_b_148_ = v___x_154_;
goto _start;
}
else
{
return v_b_148_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0_spec__0___boxed(lean_object* v_as_158_, lean_object* v_i_159_, lean_object* v_stop_160_, lean_object* v_b_161_){
_start:
{
size_t v_i_boxed_162_; size_t v_stop_boxed_163_; lean_object* v_res_164_; 
v_i_boxed_162_ = lean_unbox_usize(v_i_159_);
lean_dec(v_i_159_);
v_stop_boxed_163_ = lean_unbox_usize(v_stop_160_);
lean_dec(v_stop_160_);
v_res_164_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0_spec__0(v_as_158_, v_i_boxed_162_, v_stop_boxed_163_, v_b_161_);
lean_dec_ref(v_as_158_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0(lean_object* v_args_165_){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; uint8_t v___x_169_; 
v___x_166_ = lean_box(0);
v___x_167_ = lean_unsigned_to_nat(0u);
v___x_168_ = lean_array_get_size(v_args_165_);
v___x_169_ = lean_nat_dec_lt(v___x_167_, v___x_168_);
if (v___x_169_ == 0)
{
return v___x_166_;
}
else
{
size_t v___x_170_; size_t v___x_171_; lean_object* v___x_172_; 
v___x_170_ = ((size_t)0ULL);
v___x_171_ = lean_usize_of_nat(v___x_168_);
v___x_172_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0_spec__0(v_args_165_, v___x_170_, v___x_171_, v___x_166_);
return v___x_172_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0___boxed(lean_object* v_args_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0(v_args_173_);
lean_dec_ref(v_args_173_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr(lean_object* v_x_216_){
_start:
{
switch(lean_obj_tag(v_x_216_))
{
case 0:
{
lean_object* v_i_217_; lean_object* v_ys_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_227_; 
v_i_217_ = lean_ctor_get(v_x_216_, 0);
v_ys_218_ = lean_ctor_get(v_x_216_, 1);
v_isSharedCheck_227_ = !lean_is_exclusive(v_x_216_);
if (v_isSharedCheck_227_ == 0)
{
v___x_220_ = v_x_216_;
v_isShared_221_ = v_isSharedCheck_227_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_ys_218_);
lean_inc(v_i_217_);
lean_dec(v_x_216_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_227_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_225_; 
v___x_222_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo(v_i_217_);
v___x_223_ = l_Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0(v_ys_218_);
lean_dec_ref(v_ys_218_);
if (v_isShared_221_ == 0)
{
lean_ctor_set_tag(v___x_220_, 5);
lean_ctor_set(v___x_220_, 1, v___x_223_);
lean_ctor_set(v___x_220_, 0, v___x_222_);
v___x_225_ = v___x_220_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v___x_222_);
lean_ctor_set(v_reuseFailAlloc_226_, 1, v___x_223_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
case 1:
{
lean_object* v_n_228_; lean_object* v_x_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_246_; 
v_n_228_ = lean_ctor_get(v_x_216_, 0);
v_x_229_ = lean_ctor_get(v_x_216_, 1);
v_isSharedCheck_246_ = !lean_is_exclusive(v_x_216_);
if (v_isSharedCheck_246_ == 0)
{
v___x_231_ = v_x_216_;
v_isShared_232_ = v_isSharedCheck_246_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_x_229_);
lean_inc(v_n_228_);
lean_dec(v_x_216_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_246_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_237_; 
v___x_233_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__1));
v___x_234_ = l_Nat_reprFast(v_n_228_);
v___x_235_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
if (v_isShared_232_ == 0)
{
lean_ctor_set_tag(v___x_231_, 5);
lean_ctor_set(v___x_231_, 1, v___x_235_);
lean_ctor_set(v___x_231_, 0, v___x_233_);
v___x_237_ = v___x_231_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_233_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v___x_235_);
v___x_237_ = v_reuseFailAlloc_245_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_238_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__3));
v___x_239_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_241_ = l_Nat_reprFast(v_x_229_);
v___x_242_ = lean_string_append(v___x_240_, v___x_241_);
lean_dec_ref(v___x_241_);
v___x_243_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
v___x_244_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_239_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
return v___x_244_;
}
}
}
case 2:
{
lean_object* v_x_247_; lean_object* v_i_248_; uint8_t v_updtHeader_249_; lean_object* v_ys_250_; lean_object* v___x_251_; lean_object* v___y_253_; 
v_x_247_ = lean_ctor_get(v_x_216_, 0);
lean_inc(v_x_247_);
v_i_248_ = lean_ctor_get(v_x_216_, 1);
lean_inc_ref(v_i_248_);
v_updtHeader_249_ = lean_ctor_get_uint8(v_x_216_, sizeof(void*)*3);
v_ys_250_ = lean_ctor_get(v_x_216_, 2);
lean_inc_ref(v_ys_250_);
lean_dec_ref_known(v_x_216_, 3);
v___x_251_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__5));
if (v_updtHeader_249_ == 0)
{
lean_object* v___x_269_; 
v___x_269_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__8));
v___y_253_ = v___x_269_;
goto v___jp_252_;
}
else
{
lean_object* v___x_270_; 
v___x_270_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__9));
v___y_253_ = v___x_270_;
goto v___jp_252_;
}
v___jp_252_:
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
lean_inc_ref(v___y_253_);
v___x_254_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_254_, 0, v___y_253_);
v___x_255_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_251_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
v___x_256_ = ((lean_object*)(l_Lean_IR_formatArray___redArg___lam__0___closed__1));
v___x_257_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_255_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
v___x_258_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_259_ = l_Nat_reprFast(v_x_247_);
v___x_260_ = lean_string_append(v___x_258_, v___x_259_);
lean_dec_ref(v___x_259_);
v___x_261_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
v___x_262_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_257_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
v___x_263_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__7));
v___x_264_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_262_);
lean_ctor_set(v___x_264_, 1, v___x_263_);
v___x_265_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo(v_i_248_);
v___x_266_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_266_, 0, v___x_264_);
lean_ctor_set(v___x_266_, 1, v___x_265_);
v___x_267_ = l_Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0(v_ys_250_);
lean_dec_ref(v_ys_250_);
v___x_268_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_266_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
return v___x_268_;
}
}
case 3:
{
lean_object* v_i_271_; lean_object* v_x_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_289_; 
v_i_271_ = lean_ctor_get(v_x_216_, 0);
v_x_272_ = lean_ctor_get(v_x_216_, 1);
v_isSharedCheck_289_ = !lean_is_exclusive(v_x_216_);
if (v_isSharedCheck_289_ == 0)
{
v___x_274_ = v_x_216_;
v_isShared_275_ = v_isSharedCheck_289_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_x_272_);
lean_inc(v_i_271_);
lean_dec(v_x_216_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_289_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_280_; 
v___x_276_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__11));
v___x_277_ = l_Nat_reprFast(v_i_271_);
v___x_278_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
if (v_isShared_275_ == 0)
{
lean_ctor_set_tag(v___x_274_, 5);
lean_ctor_set(v___x_274_, 1, v___x_278_);
lean_ctor_set(v___x_274_, 0, v___x_276_);
v___x_280_ = v___x_274_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v___x_276_);
lean_ctor_set(v_reuseFailAlloc_288_, 1, v___x_278_);
v___x_280_ = v_reuseFailAlloc_288_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_281_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__3));
v___x_282_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_280_);
lean_ctor_set(v___x_282_, 1, v___x_281_);
v___x_283_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_284_ = l_Nat_reprFast(v_x_272_);
v___x_285_ = lean_string_append(v___x_283_, v___x_284_);
lean_dec_ref(v___x_284_);
v___x_286_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
v___x_287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_282_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
return v___x_287_;
}
}
}
case 4:
{
lean_object* v_i_290_; lean_object* v_x_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_308_; 
v_i_290_ = lean_ctor_get(v_x_216_, 0);
v_x_291_ = lean_ctor_get(v_x_216_, 1);
v_isSharedCheck_308_ = !lean_is_exclusive(v_x_216_);
if (v_isSharedCheck_308_ == 0)
{
v___x_293_ = v_x_216_;
v_isShared_294_ = v_isSharedCheck_308_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_x_291_);
lean_inc(v_i_290_);
lean_dec(v_x_216_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_308_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_299_; 
v___x_295_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__13));
v___x_296_ = l_Nat_reprFast(v_i_290_);
v___x_297_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
if (v_isShared_294_ == 0)
{
lean_ctor_set_tag(v___x_293_, 5);
lean_ctor_set(v___x_293_, 1, v___x_297_);
lean_ctor_set(v___x_293_, 0, v___x_295_);
v___x_299_ = v___x_293_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v___x_295_);
lean_ctor_set(v_reuseFailAlloc_307_, 1, v___x_297_);
v___x_299_ = v_reuseFailAlloc_307_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_300_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__3));
v___x_301_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_301_, 0, v___x_299_);
lean_ctor_set(v___x_301_, 1, v___x_300_);
v___x_302_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_303_ = l_Nat_reprFast(v_x_291_);
v___x_304_ = lean_string_append(v___x_302_, v___x_303_);
lean_dec_ref(v___x_303_);
v___x_305_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
v___x_306_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_306_, 0, v___x_301_);
lean_ctor_set(v___x_306_, 1, v___x_305_);
return v___x_306_;
}
}
}
case 5:
{
lean_object* v_n_309_; lean_object* v_offset_310_; lean_object* v_x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v_n_309_ = lean_ctor_get(v_x_216_, 0);
lean_inc(v_n_309_);
v_offset_310_ = lean_ctor_get(v_x_216_, 1);
lean_inc(v_offset_310_);
v_x_311_ = lean_ctor_get(v_x_216_, 2);
lean_inc(v_x_311_);
lean_dec_ref_known(v_x_216_, 3);
v___x_312_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__15));
v___x_313_ = l_Nat_reprFast(v_n_309_);
v___x_314_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_314_, 0, v___x_313_);
v___x_315_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_315_, 0, v___x_312_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
v___x_316_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__17));
v___x_317_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_317_, 0, v___x_315_);
lean_ctor_set(v___x_317_, 1, v___x_316_);
v___x_318_ = l_Nat_reprFast(v_offset_310_);
v___x_319_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
v___x_320_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_317_);
lean_ctor_set(v___x_320_, 1, v___x_319_);
v___x_321_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__3));
v___x_322_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_322_, 0, v___x_320_);
lean_ctor_set(v___x_322_, 1, v___x_321_);
v___x_323_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_324_ = l_Nat_reprFast(v_x_311_);
v___x_325_ = lean_string_append(v___x_323_, v___x_324_);
lean_dec_ref(v___x_324_);
v___x_326_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_326_, 0, v___x_325_);
v___x_327_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_327_, 0, v___x_322_);
lean_ctor_set(v___x_327_, 1, v___x_326_);
return v___x_327_;
}
case 6:
{
lean_object* v_c_328_; lean_object* v_ys_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_340_; 
v_c_328_ = lean_ctor_get(v_x_216_, 0);
v_ys_329_ = lean_ctor_get(v_x_216_, 1);
v_isSharedCheck_340_ = !lean_is_exclusive(v_x_216_);
if (v_isSharedCheck_340_ == 0)
{
v___x_331_ = v_x_216_;
v_isShared_332_ = v_isSharedCheck_340_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_ys_329_);
lean_inc(v_c_328_);
lean_dec(v_x_216_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_340_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
uint8_t v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_338_; 
v___x_333_ = 1;
v___x_334_ = l_Lean_Name_toString(v_c_328_, v___x_333_);
v___x_335_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
v___x_336_ = l_Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0(v_ys_329_);
lean_dec_ref(v_ys_329_);
if (v_isShared_332_ == 0)
{
lean_ctor_set_tag(v___x_331_, 5);
lean_ctor_set(v___x_331_, 1, v___x_336_);
lean_ctor_set(v___x_331_, 0, v___x_335_);
v___x_338_ = v___x_331_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v___x_335_);
lean_ctor_set(v_reuseFailAlloc_339_, 1, v___x_336_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
return v___x_338_;
}
}
}
case 7:
{
lean_object* v_c_341_; lean_object* v_ys_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_355_; 
v_c_341_ = lean_ctor_get(v_x_216_, 0);
v_ys_342_ = lean_ctor_get(v_x_216_, 1);
v_isSharedCheck_355_ = !lean_is_exclusive(v_x_216_);
if (v_isSharedCheck_355_ == 0)
{
v___x_344_ = v_x_216_;
v_isShared_345_ = v_isSharedCheck_355_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_ys_342_);
lean_inc(v_c_341_);
lean_dec(v_x_216_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_355_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___x_346_; uint8_t v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_351_; 
v___x_346_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__19));
v___x_347_ = 1;
v___x_348_ = l_Lean_Name_toString(v_c_341_, v___x_347_);
v___x_349_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
if (v_isShared_345_ == 0)
{
lean_ctor_set_tag(v___x_344_, 5);
lean_ctor_set(v___x_344_, 1, v___x_349_);
lean_ctor_set(v___x_344_, 0, v___x_346_);
v___x_351_ = v___x_344_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_346_);
lean_ctor_set(v_reuseFailAlloc_354_, 1, v___x_349_);
v___x_351_ = v_reuseFailAlloc_354_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = l_Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0(v_ys_342_);
lean_dec_ref(v_ys_342_);
v___x_353_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_353_, 0, v___x_351_);
lean_ctor_set(v___x_353_, 1, v___x_352_);
return v___x_353_;
}
}
}
case 8:
{
lean_object* v_x_356_; lean_object* v_ys_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_371_; 
v_x_356_ = lean_ctor_get(v_x_216_, 0);
v_ys_357_ = lean_ctor_get(v_x_216_, 1);
v_isSharedCheck_371_ = !lean_is_exclusive(v_x_216_);
if (v_isSharedCheck_371_ == 0)
{
v___x_359_ = v_x_216_;
v_isShared_360_ = v_isSharedCheck_371_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_ys_357_);
lean_inc(v_x_356_);
lean_dec(v_x_216_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_371_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_367_; 
v___x_361_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__21));
v___x_362_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_363_ = l_Nat_reprFast(v_x_356_);
v___x_364_ = lean_string_append(v___x_362_, v___x_363_);
lean_dec_ref(v___x_363_);
v___x_365_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
if (v_isShared_360_ == 0)
{
lean_ctor_set_tag(v___x_359_, 5);
lean_ctor_set(v___x_359_, 1, v___x_365_);
lean_ctor_set(v___x_359_, 0, v___x_361_);
v___x_367_ = v___x_359_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v___x_361_);
lean_ctor_set(v_reuseFailAlloc_370_, 1, v___x_365_);
v___x_367_ = v_reuseFailAlloc_370_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_368_ = l_Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0(v_ys_357_);
lean_dec_ref(v_ys_357_);
v___x_369_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_367_);
lean_ctor_set(v___x_369_, 1, v___x_368_);
return v___x_369_;
}
}
}
case 9:
{
lean_object* v_x_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_384_; 
v_x_372_ = lean_ctor_get(v_x_216_, 1);
v_isSharedCheck_384_ = !lean_is_exclusive(v_x_216_);
if (v_isSharedCheck_384_ == 0)
{
lean_object* v_unused_385_; 
v_unused_385_ = lean_ctor_get(v_x_216_, 0);
lean_dec(v_unused_385_);
v___x_374_ = v_x_216_;
v_isShared_375_ = v_isSharedCheck_384_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_x_372_);
lean_dec(v_x_216_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_384_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_382_; 
v___x_376_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__23));
v___x_377_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_378_ = l_Nat_reprFast(v_x_372_);
v___x_379_ = lean_string_append(v___x_377_, v___x_378_);
lean_dec_ref(v___x_378_);
v___x_380_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
if (v_isShared_375_ == 0)
{
lean_ctor_set_tag(v___x_374_, 5);
lean_ctor_set(v___x_374_, 1, v___x_380_);
lean_ctor_set(v___x_374_, 0, v___x_376_);
v___x_382_ = v___x_374_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v___x_376_);
lean_ctor_set(v_reuseFailAlloc_383_, 1, v___x_380_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
case 10:
{
lean_object* v_x_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_398_; 
v_x_386_ = lean_ctor_get(v_x_216_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v_x_216_);
if (v_isSharedCheck_398_ == 0)
{
v___x_388_ = v_x_216_;
v_isShared_389_ = v_isSharedCheck_398_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_x_386_);
lean_dec(v_x_216_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_398_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_395_; 
v___x_390_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__25));
v___x_391_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_392_ = l_Nat_reprFast(v_x_386_);
v___x_393_ = lean_string_append(v___x_391_, v___x_392_);
lean_dec_ref(v___x_392_);
if (v_isShared_389_ == 0)
{
lean_ctor_set_tag(v___x_388_, 3);
lean_ctor_set(v___x_388_, 0, v___x_393_);
v___x_395_ = v___x_388_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v___x_393_);
v___x_395_ = v_reuseFailAlloc_397_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
lean_object* v___x_396_; 
v___x_396_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_396_, 0, v___x_390_);
lean_ctor_set(v___x_396_, 1, v___x_395_);
return v___x_396_;
}
}
}
case 11:
{
lean_object* v_v_399_; lean_object* v___x_400_; 
v_v_399_ = lean_ctor_get(v_x_216_, 0);
lean_inc_ref(v_v_399_);
lean_dec_ref_known(v_x_216_, 1);
v___x_400_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatLitVal(v_v_399_);
return v___x_400_;
}
default: 
{
lean_object* v_x_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_413_; 
v_x_401_ = lean_ctor_get(v_x_216_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v_x_216_);
if (v_isSharedCheck_413_ == 0)
{
v___x_403_ = v_x_216_;
v_isShared_404_ = v_isSharedCheck_413_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_x_401_);
lean_dec(v_x_216_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_413_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_410_; 
v___x_405_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__27));
v___x_406_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_407_ = l_Nat_reprFast(v_x_401_);
v___x_408_ = lean_string_append(v___x_406_, v___x_407_);
lean_dec_ref(v___x_407_);
if (v_isShared_404_ == 0)
{
lean_ctor_set_tag(v___x_403_, 3);
lean_ctor_set(v___x_403_, 0, v___x_408_);
v___x_410_ = v___x_403_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_408_);
v___x_410_ = v_reuseFailAlloc_412_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
lean_object* v___x_411_; 
v___x_411_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_411_, 0, v___x_405_);
lean_ctor_set(v___x_411_, 1, v___x_410_);
return v___x_411_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instToFormatExpr___private__1(lean_object* v_a_414_){
_start:
{
lean_object* v___x_415_; 
v___x_415_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr(v_a_414_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instToStringExpr___lam__0(lean_object* v_e_418_){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_419_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr(v_e_418_);
v___x_420_ = l_Std_Format_defWidth;
v___x_421_ = lean_unsigned_to_nat(0u);
v___x_422_ = l_Std_Format_pretty(v___x_419_, v___x_420_, v___x_421_, v___x_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType_spec__1(lean_object* v_a_425_){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = lean_nat_to_int(v_a_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType_spec__0(lean_object* v_x_457_, lean_object* v_x_458_){
_start:
{
if (lean_obj_tag(v_x_457_) == 0)
{
lean_object* v___x_459_; 
lean_dec(v_x_458_);
v___x_459_ = lean_box(0);
return v___x_459_;
}
else
{
lean_object* v_tail_460_; 
v_tail_460_ = lean_ctor_get(v_x_457_, 1);
if (lean_obj_tag(v_tail_460_) == 0)
{
lean_object* v_head_461_; lean_object* v___x_462_; 
lean_dec(v_x_458_);
v_head_461_ = lean_ctor_get(v_x_457_, 0);
lean_inc(v_head_461_);
lean_dec_ref_known(v_x_457_, 2);
v___x_462_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_head_461_);
return v___x_462_;
}
else
{
lean_object* v_head_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
lean_inc(v_tail_460_);
v_head_463_ = lean_ctor_get(v_x_457_, 0);
lean_inc(v_head_463_);
lean_dec_ref_known(v_x_457_, 2);
v___x_464_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_head_463_);
v___x_465_ = l_List_foldl___at___00Std_Format_joinSep___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType_spec__0_spec__0(v_x_458_, v___x_464_, v_tail_460_);
return v___x_465_;
}
}
}
}
static lean_object* _init_l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__22(void){
_start:
{
lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_467_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__20));
v___x_468_ = lean_string_length(v___x_467_);
return v___x_468_;
}
}
static lean_object* _init_l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__23(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = lean_obj_once(&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__22, &l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__22_once, _init_l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__22);
v___x_470_ = lean_nat_to_int(v___x_469_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(lean_object* v_x_485_){
_start:
{
switch(lean_obj_tag(v_x_485_))
{
case 0:
{
lean_object* v___x_486_; 
v___x_486_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__1));
return v___x_486_;
}
case 1:
{
lean_object* v___x_487_; 
v___x_487_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__3));
return v___x_487_;
}
case 2:
{
lean_object* v___x_488_; 
v___x_488_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__5));
return v___x_488_;
}
case 3:
{
lean_object* v___x_489_; 
v___x_489_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__7));
return v___x_489_;
}
case 4:
{
lean_object* v___x_490_; 
v___x_490_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__9));
return v___x_490_;
}
case 5:
{
lean_object* v___x_491_; 
v___x_491_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__11));
return v___x_491_;
}
case 6:
{
lean_object* v___x_492_; 
v___x_492_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__2));
return v___x_492_;
}
case 7:
{
lean_object* v___x_493_; 
v___x_493_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__13));
return v___x_493_;
}
case 8:
{
lean_object* v___x_494_; 
v___x_494_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__15));
return v___x_494_;
}
case 9:
{
lean_object* v___x_495_; 
v___x_495_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__17));
return v___x_495_;
}
case 10:
{
lean_object* v_types_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_515_; 
v_types_496_ = lean_ctor_get(v_x_485_, 1);
v_isSharedCheck_515_ = !lean_is_exclusive(v_x_485_);
if (v_isSharedCheck_515_ == 0)
{
lean_object* v_unused_516_; 
v_unused_516_ = lean_ctor_get(v_x_485_, 0);
lean_dec(v_unused_516_);
v___x_498_ = v_x_485_;
v_isShared_499_ = v_isSharedCheck_515_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_types_496_);
lean_dec(v_x_485_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_515_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_507_; 
v___x_500_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__19));
v___x_501_ = lean_array_to_list(v_types_496_);
v___x_502_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__17));
v___x_503_ = l_Std_Format_joinSep___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType_spec__0(v___x_501_, v___x_502_);
v___x_504_ = lean_obj_once(&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__23, &l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__23_once, _init_l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__23);
v___x_505_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__24));
if (v_isShared_499_ == 0)
{
lean_ctor_set_tag(v___x_498_, 5);
lean_ctor_set(v___x_498_, 1, v___x_503_);
lean_ctor_set(v___x_498_, 0, v___x_505_);
v___x_507_ = v___x_498_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v___x_505_);
lean_ctor_set(v_reuseFailAlloc_514_, 1, v___x_503_);
v___x_507_ = v_reuseFailAlloc_514_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; uint8_t v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_508_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__25));
v___x_509_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_509_, 0, v___x_507_);
lean_ctor_set(v___x_509_, 1, v___x_508_);
v___x_510_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_510_, 0, v___x_504_);
lean_ctor_set(v___x_510_, 1, v___x_509_);
v___x_511_ = 0;
v___x_512_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_512_, 0, v___x_510_);
lean_ctor_set_uint8(v___x_512_, sizeof(void*)*1, v___x_511_);
v___x_513_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_513_, 0, v___x_500_);
lean_ctor_set(v___x_513_, 1, v___x_512_);
return v___x_513_;
}
}
}
case 11:
{
lean_object* v_types_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_536_; 
v_types_517_ = lean_ctor_get(v_x_485_, 1);
v_isSharedCheck_536_ = !lean_is_exclusive(v_x_485_);
if (v_isSharedCheck_536_ == 0)
{
lean_object* v_unused_537_; 
v_unused_537_ = lean_ctor_get(v_x_485_, 0);
lean_dec(v_unused_537_);
v___x_519_ = v_x_485_;
v_isShared_520_ = v_isSharedCheck_536_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_types_517_);
lean_dec(v_x_485_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_536_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_528_; 
v___x_521_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__27));
v___x_522_ = lean_array_to_list(v_types_517_);
v___x_523_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__17));
v___x_524_ = l_Std_Format_joinSep___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType_spec__0(v___x_522_, v___x_523_);
v___x_525_ = lean_obj_once(&l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__23, &l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__23_once, _init_l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__23);
v___x_526_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__24));
if (v_isShared_520_ == 0)
{
lean_ctor_set_tag(v___x_519_, 5);
lean_ctor_set(v___x_519_, 1, v___x_524_);
lean_ctor_set(v___x_519_, 0, v___x_526_);
v___x_528_ = v___x_519_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_526_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v___x_524_);
v___x_528_ = v_reuseFailAlloc_535_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; uint8_t v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_529_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__25));
v___x_530_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_530_, 0, v___x_528_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
v___x_531_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_531_, 0, v___x_525_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
v___x_532_ = 0;
v___x_533_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_533_, 0, v___x_531_);
lean_ctor_set_uint8(v___x_533_, sizeof(void*)*1, v___x_532_);
v___x_534_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_521_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
return v___x_534_;
}
}
}
case 12:
{
lean_object* v___x_538_; 
v___x_538_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__29));
return v___x_538_;
}
default: 
{
lean_object* v___x_539_; 
v___x_539_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___closed__31));
return v___x_539_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType_spec__0_spec__0(lean_object* v_x_540_, lean_object* v_x_541_, lean_object* v_x_542_){
_start:
{
if (lean_obj_tag(v_x_542_) == 0)
{
lean_dec(v_x_540_);
return v_x_541_;
}
else
{
lean_object* v_head_543_; lean_object* v_tail_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_554_; 
v_head_543_ = lean_ctor_get(v_x_542_, 0);
v_tail_544_ = lean_ctor_get(v_x_542_, 1);
v_isSharedCheck_554_ = !lean_is_exclusive(v_x_542_);
if (v_isSharedCheck_554_ == 0)
{
v___x_546_ = v_x_542_;
v_isShared_547_ = v_isSharedCheck_554_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_tail_544_);
lean_inc(v_head_543_);
lean_dec(v_x_542_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_554_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_549_; 
lean_inc(v_x_540_);
if (v_isShared_547_ == 0)
{
lean_ctor_set_tag(v___x_546_, 5);
lean_ctor_set(v___x_546_, 1, v_x_540_);
lean_ctor_set(v___x_546_, 0, v_x_541_);
v___x_549_ = v___x_546_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v_x_541_);
lean_ctor_set(v_reuseFailAlloc_553_, 1, v_x_540_);
v___x_549_ = v_reuseFailAlloc_553_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_head_543_);
v___x_551_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_551_, 0, v___x_549_);
lean_ctor_set(v___x_551_, 1, v___x_550_);
v_x_541_ = v___x_551_;
v_x_542_ = v_tail_544_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instToFormatIRType___private__1(lean_object* v_a_555_){
_start:
{
lean_object* v___x_556_; 
v___x_556_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_a_555_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instToStringIRType___lam__0(lean_object* v_f_559_){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_560_ = l_Std_Format_defWidth;
v___x_561_ = lean_unsigned_to_nat(0u);
v___x_562_ = l_Std_Format_pretty(v_f_559_, v___x_560_, v___x_561_, v___x_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam(lean_object* v_x_578_){
_start:
{
lean_object* v_x_579_; uint8_t v_borrow_580_; lean_object* v_ty_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___y_591_; 
v_x_579_ = lean_ctor_get(v_x_578_, 0);
lean_inc(v_x_579_);
v_borrow_580_ = lean_ctor_get_uint8(v_x_578_, sizeof(void*)*2);
v_ty_581_ = lean_ctor_get(v_x_578_, 1);
lean_inc(v_ty_581_);
lean_dec_ref(v_x_578_);
v___x_582_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__1));
v___x_583_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_584_ = l_Nat_reprFast(v_x_579_);
v___x_585_ = lean_string_append(v___x_583_, v___x_584_);
lean_dec_ref(v___x_584_);
v___x_586_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
v___x_587_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_587_, 0, v___x_582_);
lean_ctor_set(v___x_587_, 1, v___x_586_);
v___x_588_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__3));
v___x_589_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_587_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
if (v_borrow_580_ == 0)
{
lean_object* v___x_598_; 
v___x_598_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__8));
v___y_591_ = v___x_598_;
goto v___jp_590_;
}
else
{
lean_object* v___x_599_; 
v___x_599_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__6));
v___y_591_ = v___x_599_;
goto v___jp_590_;
}
v___jp_590_:
{
lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
lean_inc_ref(v___y_591_);
v___x_592_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_592_, 0, v___y_591_);
v___x_593_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_593_, 0, v___x_589_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
v___x_594_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_ty_581_);
v___x_595_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_595_, 0, v___x_593_);
lean_ctor_set(v___x_595_, 1, v___x_594_);
v___x_596_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__5));
v___x_597_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_595_);
lean_ctor_set(v___x_597_, 1, v___x_596_);
return v___x_597_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instToFormatParam___private__1(lean_object* v_a_600_){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam(v_a_600_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_formatAlt(lean_object* v_fmt_610_, lean_object* v_indent_611_, lean_object* v_x_612_){
_start:
{
if (lean_obj_tag(v_x_612_) == 0)
{
lean_object* v_info_613_; lean_object* v_b_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_632_; 
v_info_613_ = lean_ctor_get(v_x_612_, 0);
v_b_614_ = lean_ctor_get(v_x_612_, 1);
v_isSharedCheck_632_ = !lean_is_exclusive(v_x_612_);
if (v_isSharedCheck_632_ == 0)
{
v___x_616_ = v_x_612_;
v_isShared_617_ = v_isSharedCheck_632_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_b_614_);
lean_inc(v_info_613_);
lean_dec(v_x_612_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_632_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v_name_618_; uint8_t v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_624_; 
v_name_618_ = lean_ctor_get(v_info_613_, 0);
lean_inc(v_name_618_);
lean_dec_ref(v_info_613_);
v___x_619_ = 1;
v___x_620_ = l_Lean_Name_toString(v_name_618_, v___x_619_);
v___x_621_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
v___x_622_ = ((lean_object*)(l_Lean_IR_formatAlt___closed__1));
if (v_isShared_617_ == 0)
{
lean_ctor_set_tag(v___x_616_, 5);
lean_ctor_set(v___x_616_, 1, v___x_622_);
lean_ctor_set(v___x_616_, 0, v___x_621_);
v___x_624_ = v___x_616_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v___x_621_);
lean_ctor_set(v_reuseFailAlloc_631_, 1, v___x_622_);
v___x_624_ = v_reuseFailAlloc_631_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_625_ = lean_nat_to_int(v_indent_611_);
v___x_626_ = lean_box(1);
v___x_627_ = lean_apply_1(v_fmt_610_, v_b_614_);
v___x_628_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_628_, 0, v___x_626_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
v___x_629_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_629_, 0, v___x_625_);
lean_ctor_set(v___x_629_, 1, v___x_628_);
v___x_630_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_630_, 0, v___x_624_);
lean_ctor_set(v___x_630_, 1, v___x_629_);
return v___x_630_;
}
}
}
else
{
lean_object* v_b_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
v_b_633_ = lean_ctor_get(v_x_612_, 0);
lean_inc(v_b_633_);
lean_dec_ref_known(v_x_612_, 1);
v___x_634_ = ((lean_object*)(l_Lean_IR_formatAlt___closed__3));
v___x_635_ = lean_nat_to_int(v_indent_611_);
v___x_636_ = lean_box(1);
v___x_637_ = lean_apply_1(v_fmt_610_, v_b_633_);
v___x_638_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_636_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
v___x_639_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_639_, 0, v___x_635_);
lean_ctor_set(v___x_639_, 1, v___x_638_);
v___x_640_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_634_);
lean_ctor_set(v___x_640_, 1, v___x_639_);
return v___x_640_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_formatArray___at___00Lean_IR_formatParams_spec__0_spec__0(lean_object* v_as_641_, size_t v_i_642_, size_t v_stop_643_, lean_object* v_b_644_){
_start:
{
uint8_t v___x_645_; 
v___x_645_ = lean_usize_dec_eq(v_i_642_, v_stop_643_);
if (v___x_645_ == 0)
{
lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; size_t v___x_651_; size_t v___x_652_; 
v___x_646_ = lean_array_uget_borrowed(v_as_641_, v_i_642_);
v___x_647_ = ((lean_object*)(l_Lean_IR_formatArray___redArg___lam__0___closed__1));
v___x_648_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_648_, 0, v_b_644_);
lean_ctor_set(v___x_648_, 1, v___x_647_);
lean_inc(v___x_646_);
v___x_649_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam(v___x_646_);
v___x_650_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_650_, 0, v___x_648_);
lean_ctor_set(v___x_650_, 1, v___x_649_);
v___x_651_ = ((size_t)1ULL);
v___x_652_ = lean_usize_add(v_i_642_, v___x_651_);
v_i_642_ = v___x_652_;
v_b_644_ = v___x_650_;
goto _start;
}
else
{
return v_b_644_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_formatArray___at___00Lean_IR_formatParams_spec__0_spec__0___boxed(lean_object* v_as_654_, lean_object* v_i_655_, lean_object* v_stop_656_, lean_object* v_b_657_){
_start:
{
size_t v_i_boxed_658_; size_t v_stop_boxed_659_; lean_object* v_res_660_; 
v_i_boxed_658_ = lean_unbox_usize(v_i_655_);
lean_dec(v_i_655_);
v_stop_boxed_659_ = lean_unbox_usize(v_stop_656_);
lean_dec(v_stop_656_);
v_res_660_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_formatArray___at___00Lean_IR_formatParams_spec__0_spec__0(v_as_654_, v_i_boxed_658_, v_stop_boxed_659_, v_b_657_);
lean_dec_ref(v_as_654_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_formatArray___at___00Lean_IR_formatParams_spec__0(lean_object* v_args_661_){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; uint8_t v___x_665_; 
v___x_662_ = lean_box(0);
v___x_663_ = lean_unsigned_to_nat(0u);
v___x_664_ = lean_array_get_size(v_args_661_);
v___x_665_ = lean_nat_dec_lt(v___x_663_, v___x_664_);
if (v___x_665_ == 0)
{
return v___x_662_;
}
else
{
size_t v___x_666_; size_t v___x_667_; lean_object* v___x_668_; 
v___x_666_ = ((size_t)0ULL);
v___x_667_ = lean_usize_of_nat(v___x_664_);
v___x_668_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_formatArray___at___00Lean_IR_formatParams_spec__0_spec__0(v_args_661_, v___x_666_, v___x_667_, v___x_662_);
return v___x_668_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_formatArray___at___00Lean_IR_formatParams_spec__0___boxed(lean_object* v_args_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l_Lean_IR_formatArray___at___00Lean_IR_formatParams_spec__0(v_args_669_);
lean_dec_ref(v_args_669_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_formatParams(lean_object* v_ps_671_){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = l_Lean_IR_formatArray___at___00Lean_IR_formatParams_spec__0(v_ps_671_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_formatParams___boxed(lean_object* v_ps_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = l_Lean_IR_formatParams(v_ps_673_);
lean_dec_ref(v_ps_673_);
return v_res_674_;
}
}
static lean_object* _init_l_Lean_IR_formatFnBodyHead___closed__21(void){
_start:
{
lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_706_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__1));
v___x_707_ = lean_string_length(v___x_706_);
return v___x_707_;
}
}
static lean_object* _init_l_Lean_IR_formatFnBodyHead___closed__22(void){
_start:
{
lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_708_ = lean_obj_once(&l_Lean_IR_formatFnBodyHead___closed__21, &l_Lean_IR_formatFnBodyHead___closed__21_once, _init_l_Lean_IR_formatFnBodyHead___closed__21);
v___x_709_ = lean_nat_to_int(v___x_708_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_formatFnBodyHead(lean_object* v_x_733_){
_start:
{
switch(lean_obj_tag(v_x_733_))
{
case 0:
{
lean_object* v_x_734_; lean_object* v_ty_735_; lean_object* v_e_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v_x_734_ = lean_ctor_get(v_x_733_, 0);
lean_inc(v_x_734_);
v_ty_735_ = lean_ctor_get(v_x_733_, 1);
lean_inc(v_ty_735_);
v_e_736_ = lean_ctor_get(v_x_733_, 2);
lean_inc_ref(v_e_736_);
lean_dec_ref_known(v_x_733_, 4);
v___x_737_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__1));
v___x_738_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_739_ = l_Nat_reprFast(v_x_734_);
v___x_740_ = lean_string_append(v___x_738_, v___x_739_);
lean_dec_ref(v___x_739_);
v___x_741_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
v___x_742_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_737_);
lean_ctor_set(v___x_742_, 1, v___x_741_);
v___x_743_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__3));
v___x_744_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_742_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
v___x_745_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_ty_735_);
v___x_746_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_744_);
lean_ctor_set(v___x_746_, 1, v___x_745_);
v___x_747_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__3));
v___x_748_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_748_, 0, v___x_746_);
lean_ctor_set(v___x_748_, 1, v___x_747_);
v___x_749_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr(v_e_736_);
v___x_750_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_750_, 0, v___x_748_);
lean_ctor_set(v___x_750_, 1, v___x_749_);
return v___x_750_;
}
case 1:
{
lean_object* v_j_751_; lean_object* v_xs_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
v_j_751_ = lean_ctor_get(v_x_733_, 0);
lean_inc(v_j_751_);
v_xs_752_ = lean_ctor_get(v_x_733_, 1);
lean_inc_ref(v_xs_752_);
lean_dec_ref_known(v_x_733_, 4);
v___x_753_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__4));
v___x_754_ = l_Nat_reprFast(v_j_751_);
v___x_755_ = lean_string_append(v___x_753_, v___x_754_);
lean_dec_ref(v___x_754_);
v___x_756_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_756_, 0, v___x_755_);
v___x_757_ = l_Lean_IR_formatArray___at___00Lean_IR_formatParams_spec__0(v_xs_752_);
lean_dec_ref(v_xs_752_);
v___x_758_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_758_, 0, v___x_756_);
lean_ctor_set(v___x_758_, 1, v___x_757_);
v___x_759_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__6));
v___x_760_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_760_, 0, v___x_758_);
lean_ctor_set(v___x_760_, 1, v___x_759_);
return v___x_760_;
}
case 2:
{
lean_object* v_x_761_; lean_object* v_i_762_; lean_object* v_y_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v_x_761_ = lean_ctor_get(v_x_733_, 0);
lean_inc(v_x_761_);
v_i_762_ = lean_ctor_get(v_x_733_, 1);
lean_inc(v_i_762_);
v_y_763_ = lean_ctor_get(v_x_733_, 2);
lean_inc(v_y_763_);
lean_dec_ref_known(v_x_733_, 4);
v___x_764_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__8));
v___x_765_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_766_ = l_Nat_reprFast(v_x_761_);
v___x_767_ = lean_string_append(v___x_765_, v___x_766_);
lean_dec_ref(v___x_766_);
v___x_768_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_768_, 0, v___x_767_);
v___x_769_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_769_, 0, v___x_764_);
lean_ctor_set(v___x_769_, 1, v___x_768_);
v___x_770_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__2));
v___x_771_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_771_, 0, v___x_769_);
lean_ctor_set(v___x_771_, 1, v___x_770_);
v___x_772_ = l_Nat_reprFast(v_i_762_);
v___x_773_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_773_, 0, v___x_772_);
v___x_774_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_774_, 0, v___x_771_);
lean_ctor_set(v___x_774_, 1, v___x_773_);
v___x_775_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__10));
v___x_776_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_776_, 0, v___x_774_);
lean_ctor_set(v___x_776_, 1, v___x_775_);
v___x_777_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg(v_y_763_);
v___x_778_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_778_, 0, v___x_776_);
lean_ctor_set(v___x_778_, 1, v___x_777_);
return v___x_778_;
}
case 3:
{
lean_object* v_x_779_; lean_object* v_cidx_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v_x_779_ = lean_ctor_get(v_x_733_, 0);
lean_inc(v_x_779_);
v_cidx_780_ = lean_ctor_get(v_x_733_, 1);
lean_inc(v_cidx_780_);
lean_dec_ref_known(v_x_733_, 3);
v___x_781_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__12));
v___x_782_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_783_ = l_Nat_reprFast(v_x_779_);
v___x_784_ = lean_string_append(v___x_782_, v___x_783_);
lean_dec_ref(v___x_783_);
v___x_785_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
v___x_786_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_781_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
v___x_787_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__3));
v___x_788_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_788_, 0, v___x_786_);
lean_ctor_set(v___x_788_, 1, v___x_787_);
v___x_789_ = l_Nat_reprFast(v_cidx_780_);
v___x_790_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
v___x_791_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_791_, 0, v___x_788_);
lean_ctor_set(v___x_791_, 1, v___x_790_);
return v___x_791_;
}
case 4:
{
lean_object* v_x_792_; lean_object* v_i_793_; lean_object* v_y_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v_x_792_ = lean_ctor_get(v_x_733_, 0);
lean_inc(v_x_792_);
v_i_793_ = lean_ctor_get(v_x_733_, 1);
lean_inc(v_i_793_);
v_y_794_ = lean_ctor_get(v_x_733_, 2);
lean_inc(v_y_794_);
lean_dec_ref_known(v_x_733_, 4);
v___x_795_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__14));
v___x_796_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_797_ = l_Nat_reprFast(v_x_792_);
v___x_798_ = lean_string_append(v___x_796_, v___x_797_);
lean_dec_ref(v___x_797_);
v___x_799_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_799_, 0, v___x_798_);
v___x_800_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_800_, 0, v___x_795_);
lean_ctor_set(v___x_800_, 1, v___x_799_);
v___x_801_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__2));
v___x_802_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_802_, 0, v___x_800_);
lean_ctor_set(v___x_802_, 1, v___x_801_);
v___x_803_ = l_Nat_reprFast(v_i_793_);
v___x_804_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_804_, 0, v___x_803_);
v___x_805_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_805_, 0, v___x_802_);
lean_ctor_set(v___x_805_, 1, v___x_804_);
v___x_806_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__10));
v___x_807_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_807_, 0, v___x_805_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
v___x_808_ = l_Nat_reprFast(v_y_794_);
v___x_809_ = lean_string_append(v___x_796_, v___x_808_);
lean_dec_ref(v___x_808_);
v___x_810_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_810_, 0, v___x_809_);
v___x_811_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_811_, 0, v___x_807_);
lean_ctor_set(v___x_811_, 1, v___x_810_);
return v___x_811_;
}
case 5:
{
lean_object* v_x_812_; lean_object* v_i_813_; lean_object* v_offset_814_; lean_object* v_y_815_; lean_object* v_ty_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v_x_812_ = lean_ctor_get(v_x_733_, 0);
lean_inc(v_x_812_);
v_i_813_ = lean_ctor_get(v_x_733_, 1);
lean_inc(v_i_813_);
v_offset_814_ = lean_ctor_get(v_x_733_, 2);
lean_inc(v_offset_814_);
v_y_815_ = lean_ctor_get(v_x_733_, 3);
lean_inc(v_y_815_);
v_ty_816_ = lean_ctor_get(v_x_733_, 4);
lean_inc(v_ty_816_);
lean_dec_ref_known(v_x_733_, 6);
v___x_817_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__16));
v___x_818_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_819_ = l_Nat_reprFast(v_x_812_);
v___x_820_ = lean_string_append(v___x_818_, v___x_819_);
lean_dec_ref(v___x_819_);
v___x_821_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_821_, 0, v___x_820_);
v___x_822_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_822_, 0, v___x_817_);
lean_ctor_set(v___x_822_, 1, v___x_821_);
v___x_823_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__2));
v___x_824_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_824_, 0, v___x_822_);
lean_ctor_set(v___x_824_, 1, v___x_823_);
v___x_825_ = l_Nat_reprFast(v_i_813_);
v___x_826_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_826_, 0, v___x_825_);
v___x_827_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_827_, 0, v___x_824_);
lean_ctor_set(v___x_827_, 1, v___x_826_);
v___x_828_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__17));
v___x_829_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_829_, 0, v___x_827_);
lean_ctor_set(v___x_829_, 1, v___x_828_);
v___x_830_ = l_Nat_reprFast(v_offset_814_);
v___x_831_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
v___x_832_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_832_, 0, v___x_829_);
lean_ctor_set(v___x_832_, 1, v___x_831_);
v___x_833_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__18));
v___x_834_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_834_, 0, v___x_832_);
lean_ctor_set(v___x_834_, 1, v___x_833_);
v___x_835_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_ty_816_);
v___x_836_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_836_, 0, v___x_834_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
v___x_837_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__3));
v___x_838_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_838_, 0, v___x_836_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
v___x_839_ = l_Nat_reprFast(v_y_815_);
v___x_840_ = lean_string_append(v___x_818_, v___x_839_);
lean_dec_ref(v___x_839_);
v___x_841_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_841_, 0, v___x_840_);
v___x_842_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_842_, 0, v___x_838_);
lean_ctor_set(v___x_842_, 1, v___x_841_);
return v___x_842_;
}
case 6:
{
lean_object* v_x_843_; lean_object* v_n_844_; lean_object* v___x_845_; lean_object* v___y_847_; lean_object* v___x_856_; uint8_t v___x_857_; 
v_x_843_ = lean_ctor_get(v_x_733_, 0);
lean_inc(v_x_843_);
v_n_844_ = lean_ctor_get(v_x_733_, 1);
lean_inc(v_n_844_);
lean_dec_ref_known(v_x_733_, 3);
v___x_845_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__20));
v___x_856_ = lean_unsigned_to_nat(1u);
v___x_857_ = lean_nat_dec_eq(v_n_844_, v___x_856_);
if (v___x_857_ == 0)
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; uint8_t v___x_866_; lean_object* v___x_867_; 
v___x_858_ = l_Nat_reprFast(v_n_844_);
v___x_859_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_859_, 0, v___x_858_);
v___x_860_ = lean_obj_once(&l_Lean_IR_formatFnBodyHead___closed__22, &l_Lean_IR_formatFnBodyHead___closed__22_once, _init_l_Lean_IR_formatFnBodyHead___closed__22);
v___x_861_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__2));
v___x_862_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_862_, 0, v___x_861_);
lean_ctor_set(v___x_862_, 1, v___x_859_);
v___x_863_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__4));
v___x_864_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_864_, 0, v___x_862_);
lean_ctor_set(v___x_864_, 1, v___x_863_);
v___x_865_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_865_, 0, v___x_860_);
lean_ctor_set(v___x_865_, 1, v___x_864_);
v___x_866_ = 0;
v___x_867_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_867_, 0, v___x_865_);
lean_ctor_set_uint8(v___x_867_, sizeof(void*)*1, v___x_866_);
v___y_847_ = v___x_867_;
goto v___jp_846_;
}
else
{
lean_object* v___x_868_; 
lean_dec(v_n_844_);
v___x_868_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__23));
v___y_847_ = v___x_868_;
goto v___jp_846_;
}
v___jp_846_:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_848_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_848_, 0, v___x_845_);
lean_ctor_set(v___x_848_, 1, v___y_847_);
v___x_849_ = ((lean_object*)(l_Lean_IR_formatArray___redArg___lam__0___closed__1));
v___x_850_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_850_, 0, v___x_848_);
lean_ctor_set(v___x_850_, 1, v___x_849_);
v___x_851_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_852_ = l_Nat_reprFast(v_x_843_);
v___x_853_ = lean_string_append(v___x_851_, v___x_852_);
lean_dec_ref(v___x_852_);
v___x_854_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
v___x_855_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_855_, 0, v___x_850_);
lean_ctor_set(v___x_855_, 1, v___x_854_);
return v___x_855_;
}
}
case 7:
{
lean_object* v_x_869_; lean_object* v_n_870_; lean_object* v___x_871_; lean_object* v___y_873_; lean_object* v___x_882_; uint8_t v___x_883_; 
v_x_869_ = lean_ctor_get(v_x_733_, 0);
lean_inc(v_x_869_);
v_n_870_ = lean_ctor_get(v_x_733_, 1);
lean_inc(v_n_870_);
lean_dec_ref_known(v_x_733_, 3);
v___x_871_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__25));
v___x_882_ = lean_unsigned_to_nat(1u);
v___x_883_ = lean_nat_dec_eq(v_n_870_, v___x_882_);
if (v___x_883_ == 0)
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; uint8_t v___x_892_; lean_object* v___x_893_; 
v___x_884_ = l_Nat_reprFast(v_n_870_);
v___x_885_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_885_, 0, v___x_884_);
v___x_886_ = lean_obj_once(&l_Lean_IR_formatFnBodyHead___closed__22, &l_Lean_IR_formatFnBodyHead___closed__22_once, _init_l_Lean_IR_formatFnBodyHead___closed__22);
v___x_887_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__2));
v___x_888_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_888_, 0, v___x_887_);
lean_ctor_set(v___x_888_, 1, v___x_885_);
v___x_889_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__4));
v___x_890_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_890_, 0, v___x_888_);
lean_ctor_set(v___x_890_, 1, v___x_889_);
v___x_891_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_891_, 0, v___x_886_);
lean_ctor_set(v___x_891_, 1, v___x_890_);
v___x_892_ = 0;
v___x_893_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_893_, 0, v___x_891_);
lean_ctor_set_uint8(v___x_893_, sizeof(void*)*1, v___x_892_);
v___y_873_ = v___x_893_;
goto v___jp_872_;
}
else
{
lean_object* v___x_894_; 
lean_dec(v_n_870_);
v___x_894_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__23));
v___y_873_ = v___x_894_;
goto v___jp_872_;
}
v___jp_872_:
{
lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_874_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_874_, 0, v___x_871_);
lean_ctor_set(v___x_874_, 1, v___y_873_);
v___x_875_ = ((lean_object*)(l_Lean_IR_formatArray___redArg___lam__0___closed__1));
v___x_876_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_874_);
lean_ctor_set(v___x_876_, 1, v___x_875_);
v___x_877_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_878_ = l_Nat_reprFast(v_x_869_);
v___x_879_ = lean_string_append(v___x_877_, v___x_878_);
lean_dec_ref(v___x_878_);
v___x_880_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_880_, 0, v___x_879_);
v___x_881_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_876_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
return v___x_881_;
}
}
case 8:
{
lean_object* v_x_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_907_; 
v_x_895_ = lean_ctor_get(v_x_733_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v_x_733_);
if (v_isSharedCheck_907_ == 0)
{
lean_object* v_unused_908_; 
v_unused_908_ = lean_ctor_get(v_x_733_, 1);
lean_dec(v_unused_908_);
v___x_897_ = v_x_733_;
v_isShared_898_ = v_isSharedCheck_907_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_x_895_);
lean_dec(v_x_733_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_907_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_905_; 
v___x_899_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__27));
v___x_900_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_901_ = l_Nat_reprFast(v_x_895_);
v___x_902_ = lean_string_append(v___x_900_, v___x_901_);
lean_dec_ref(v___x_901_);
v___x_903_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_903_, 0, v___x_902_);
if (v_isShared_898_ == 0)
{
lean_ctor_set_tag(v___x_897_, 5);
lean_ctor_set(v___x_897_, 1, v___x_903_);
lean_ctor_set(v___x_897_, 0, v___x_899_);
v___x_905_ = v___x_897_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v___x_899_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v___x_903_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
case 9:
{
lean_object* v_x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v_x_909_ = lean_ctor_get(v_x_733_, 1);
lean_inc(v_x_909_);
lean_dec_ref_known(v_x_733_, 4);
v___x_910_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__29));
v___x_911_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_912_ = l_Nat_reprFast(v_x_909_);
v___x_913_ = lean_string_append(v___x_911_, v___x_912_);
lean_dec_ref(v___x_912_);
v___x_914_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_914_, 0, v___x_913_);
v___x_915_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_910_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v___x_916_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__31));
v___x_917_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_917_, 0, v___x_915_);
lean_ctor_set(v___x_917_, 1, v___x_916_);
return v___x_917_;
}
case 10:
{
lean_object* v_x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v_x_918_ = lean_ctor_get(v_x_733_, 0);
lean_inc(v_x_918_);
lean_dec_ref_known(v_x_733_, 1);
v___x_919_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__33));
v___x_920_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg(v_x_918_);
v___x_921_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_921_, 0, v___x_919_);
lean_ctor_set(v___x_921_, 1, v___x_920_);
return v___x_921_;
}
case 11:
{
lean_object* v_j_922_; lean_object* v_ys_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_937_; 
v_j_922_ = lean_ctor_get(v_x_733_, 0);
v_ys_923_ = lean_ctor_get(v_x_733_, 1);
v_isSharedCheck_937_ = !lean_is_exclusive(v_x_733_);
if (v_isSharedCheck_937_ == 0)
{
v___x_925_ = v_x_733_;
v_isShared_926_ = v_isSharedCheck_937_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_ys_923_);
lean_inc(v_j_922_);
lean_dec(v_x_733_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_937_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_933_; 
v___x_927_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__35));
v___x_928_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__4));
v___x_929_ = l_Nat_reprFast(v_j_922_);
v___x_930_ = lean_string_append(v___x_928_, v___x_929_);
lean_dec_ref(v___x_929_);
v___x_931_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_931_, 0, v___x_930_);
if (v_isShared_926_ == 0)
{
lean_ctor_set_tag(v___x_925_, 5);
lean_ctor_set(v___x_925_, 1, v___x_931_);
lean_ctor_set(v___x_925_, 0, v___x_927_);
v___x_933_ = v___x_925_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v___x_927_);
lean_ctor_set(v_reuseFailAlloc_936_, 1, v___x_931_);
v___x_933_ = v_reuseFailAlloc_936_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_934_ = l_Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0(v_ys_923_);
lean_dec_ref(v_ys_923_);
v___x_935_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_935_, 0, v___x_933_);
lean_ctor_set(v___x_935_, 1, v___x_934_);
return v___x_935_;
}
}
}
default: 
{
lean_object* v___x_938_; 
v___x_938_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__37));
return v___x_938_;
}
}
}
}
LEAN_EXPORT lean_object* lean_ir_format_fn_body_head(lean_object* v_fn_939_){
_start:
{
lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_940_ = l_Lean_IR_formatFnBodyHead(v_fn_939_);
v___x_941_ = l_Std_Format_defWidth;
v___x_942_ = lean_unsigned_to_nat(0u);
v___x_943_ = l_Std_Format_pretty(v___x_940_, v___x_941_, v___x_942_, v___x_942_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop(lean_object* v_indent_953_, lean_object* v_a_954_){
_start:
{
switch(lean_obj_tag(v_a_954_))
{
case 0:
{
lean_object* v_x_955_; lean_object* v_ty_956_; lean_object* v_e_957_; lean_object* v_b_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v_x_955_ = lean_ctor_get(v_a_954_, 0);
lean_inc(v_x_955_);
v_ty_956_ = lean_ctor_get(v_a_954_, 1);
lean_inc(v_ty_956_);
v_e_957_ = lean_ctor_get(v_a_954_, 2);
lean_inc_ref(v_e_957_);
v_b_958_ = lean_ctor_get(v_a_954_, 3);
lean_inc(v_b_958_);
lean_dec_ref_known(v_a_954_, 4);
v___x_959_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__1));
v___x_960_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_961_ = l_Nat_reprFast(v_x_955_);
v___x_962_ = lean_string_append(v___x_960_, v___x_961_);
lean_dec_ref(v___x_961_);
v___x_963_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_963_, 0, v___x_962_);
v___x_964_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_964_, 0, v___x_959_);
lean_ctor_set(v___x_964_, 1, v___x_963_);
v___x_965_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__3));
v___x_966_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_966_, 0, v___x_964_);
lean_ctor_set(v___x_966_, 1, v___x_965_);
v___x_967_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_ty_956_);
v___x_968_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_966_);
lean_ctor_set(v___x_968_, 1, v___x_967_);
v___x_969_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__3));
v___x_970_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_968_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr(v_e_957_);
v___x_972_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_972_, 0, v___x_970_);
lean_ctor_set(v___x_972_, 1, v___x_971_);
v___x_973_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__1));
v___x_974_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_972_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
v___x_975_ = lean_box(1);
v___x_976_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_976_, 0, v___x_974_);
lean_ctor_set(v___x_976_, 1, v___x_975_);
v___x_977_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop(v_indent_953_, v_b_958_);
v___x_978_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_976_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
return v___x_978_;
}
case 1:
{
lean_object* v_j_979_; lean_object* v_xs_980_; lean_object* v_v_981_; lean_object* v_b_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
v_j_979_ = lean_ctor_get(v_a_954_, 0);
lean_inc(v_j_979_);
v_xs_980_ = lean_ctor_get(v_a_954_, 1);
lean_inc_ref(v_xs_980_);
v_v_981_ = lean_ctor_get(v_a_954_, 2);
lean_inc(v_v_981_);
v_b_982_ = lean_ctor_get(v_a_954_, 3);
lean_inc(v_b_982_);
lean_dec_ref_known(v_a_954_, 4);
v___x_983_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__4));
v___x_984_ = l_Nat_reprFast(v_j_979_);
v___x_985_ = lean_string_append(v___x_983_, v___x_984_);
lean_dec_ref(v___x_984_);
v___x_986_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
v___x_987_ = l_Lean_IR_formatArray___at___00Lean_IR_formatParams_spec__0(v_xs_980_);
lean_dec_ref(v_xs_980_);
v___x_988_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_986_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
v___x_989_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__3));
v___x_990_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_988_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
lean_inc_n(v_indent_953_, 2);
v___x_991_ = lean_nat_to_int(v_indent_953_);
v___x_992_ = lean_box(1);
v___x_993_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop(v_indent_953_, v_v_981_);
v___x_994_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_992_);
lean_ctor_set(v___x_994_, 1, v___x_993_);
v___x_995_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_995_, 0, v___x_991_);
lean_ctor_set(v___x_995_, 1, v___x_994_);
v___x_996_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_990_);
lean_ctor_set(v___x_996_, 1, v___x_995_);
v___x_997_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__1));
v___x_998_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_998_, 0, v___x_996_);
lean_ctor_set(v___x_998_, 1, v___x_997_);
v___x_999_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_998_);
lean_ctor_set(v___x_999_, 1, v___x_992_);
v___x_1000_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop(v_indent_953_, v_b_982_);
v___x_1001_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1001_, 0, v___x_999_);
lean_ctor_set(v___x_1001_, 1, v___x_1000_);
return v___x_1001_;
}
case 2:
{
lean_object* v_x_1002_; lean_object* v_i_1003_; lean_object* v_y_1004_; lean_object* v_b_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v_x_1002_ = lean_ctor_get(v_a_954_, 0);
lean_inc(v_x_1002_);
v_i_1003_ = lean_ctor_get(v_a_954_, 1);
lean_inc(v_i_1003_);
v_y_1004_ = lean_ctor_get(v_a_954_, 2);
lean_inc(v_y_1004_);
v_b_1005_ = lean_ctor_get(v_a_954_, 3);
lean_inc(v_b_1005_);
lean_dec_ref_known(v_a_954_, 4);
v___x_1006_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__8));
v___x_1007_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_1008_ = l_Nat_reprFast(v_x_1002_);
v___x_1009_ = lean_string_append(v___x_1007_, v___x_1008_);
lean_dec_ref(v___x_1008_);
v___x_1010_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1009_);
v___x_1011_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1006_);
lean_ctor_set(v___x_1011_, 1, v___x_1010_);
v___x_1012_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__2));
v___x_1013_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1011_);
lean_ctor_set(v___x_1013_, 1, v___x_1012_);
v___x_1014_ = l_Nat_reprFast(v_i_1003_);
v___x_1015_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1014_);
v___x_1016_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1013_);
lean_ctor_set(v___x_1016_, 1, v___x_1015_);
v___x_1017_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__10));
v___x_1018_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1016_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg(v_y_1004_);
v___x_1020_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1018_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
v___x_1021_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__1));
v___x_1022_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1020_);
lean_ctor_set(v___x_1022_, 1, v___x_1021_);
v___x_1023_ = lean_box(1);
v___x_1024_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1022_);
lean_ctor_set(v___x_1024_, 1, v___x_1023_);
v___x_1025_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop(v_indent_953_, v_b_1005_);
v___x_1026_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1024_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
return v___x_1026_;
}
case 3:
{
lean_object* v_x_1027_; lean_object* v_cidx_1028_; lean_object* v_b_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; 
v_x_1027_ = lean_ctor_get(v_a_954_, 0);
lean_inc(v_x_1027_);
v_cidx_1028_ = lean_ctor_get(v_a_954_, 1);
lean_inc(v_cidx_1028_);
v_b_1029_ = lean_ctor_get(v_a_954_, 2);
lean_inc(v_b_1029_);
lean_dec_ref_known(v_a_954_, 3);
v___x_1030_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__12));
v___x_1031_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_1032_ = l_Nat_reprFast(v_x_1027_);
v___x_1033_ = lean_string_append(v___x_1031_, v___x_1032_);
lean_dec_ref(v___x_1032_);
v___x_1034_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1033_);
v___x_1035_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1030_);
lean_ctor_set(v___x_1035_, 1, v___x_1034_);
v___x_1036_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__3));
v___x_1037_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1035_);
lean_ctor_set(v___x_1037_, 1, v___x_1036_);
v___x_1038_ = l_Nat_reprFast(v_cidx_1028_);
v___x_1039_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1038_);
v___x_1040_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1037_);
lean_ctor_set(v___x_1040_, 1, v___x_1039_);
v___x_1041_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__1));
v___x_1042_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1040_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___x_1043_ = lean_box(1);
v___x_1044_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1042_);
lean_ctor_set(v___x_1044_, 1, v___x_1043_);
v___x_1045_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop(v_indent_953_, v_b_1029_);
v___x_1046_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1044_);
lean_ctor_set(v___x_1046_, 1, v___x_1045_);
return v___x_1046_;
}
case 4:
{
lean_object* v_x_1047_; lean_object* v_i_1048_; lean_object* v_y_1049_; lean_object* v_b_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
v_x_1047_ = lean_ctor_get(v_a_954_, 0);
lean_inc(v_x_1047_);
v_i_1048_ = lean_ctor_get(v_a_954_, 1);
lean_inc(v_i_1048_);
v_y_1049_ = lean_ctor_get(v_a_954_, 2);
lean_inc(v_y_1049_);
v_b_1050_ = lean_ctor_get(v_a_954_, 3);
lean_inc(v_b_1050_);
lean_dec_ref_known(v_a_954_, 4);
v___x_1051_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__14));
v___x_1052_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_1053_ = l_Nat_reprFast(v_x_1047_);
v___x_1054_ = lean_string_append(v___x_1052_, v___x_1053_);
lean_dec_ref(v___x_1053_);
v___x_1055_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
v___x_1056_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1051_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
v___x_1057_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__2));
v___x_1058_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1056_);
lean_ctor_set(v___x_1058_, 1, v___x_1057_);
v___x_1059_ = l_Nat_reprFast(v_i_1048_);
v___x_1060_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1059_);
v___x_1061_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1058_);
lean_ctor_set(v___x_1061_, 1, v___x_1060_);
v___x_1062_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__10));
v___x_1063_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1061_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
v___x_1064_ = l_Nat_reprFast(v_y_1049_);
v___x_1065_ = lean_string_append(v___x_1052_, v___x_1064_);
lean_dec_ref(v___x_1064_);
v___x_1066_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1065_);
v___x_1067_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1063_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
v___x_1068_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__1));
v___x_1069_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1067_);
lean_ctor_set(v___x_1069_, 1, v___x_1068_);
v___x_1070_ = lean_box(1);
v___x_1071_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1069_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
v___x_1072_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop(v_indent_953_, v_b_1050_);
v___x_1073_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1071_);
lean_ctor_set(v___x_1073_, 1, v___x_1072_);
return v___x_1073_;
}
case 5:
{
lean_object* v_x_1074_; lean_object* v_i_1075_; lean_object* v_offset_1076_; lean_object* v_y_1077_; lean_object* v_ty_1078_; lean_object* v_b_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v_x_1074_ = lean_ctor_get(v_a_954_, 0);
lean_inc(v_x_1074_);
v_i_1075_ = lean_ctor_get(v_a_954_, 1);
lean_inc(v_i_1075_);
v_offset_1076_ = lean_ctor_get(v_a_954_, 2);
lean_inc(v_offset_1076_);
v_y_1077_ = lean_ctor_get(v_a_954_, 3);
lean_inc(v_y_1077_);
v_ty_1078_ = lean_ctor_get(v_a_954_, 4);
lean_inc(v_ty_1078_);
v_b_1079_ = lean_ctor_get(v_a_954_, 5);
lean_inc(v_b_1079_);
lean_dec_ref_known(v_a_954_, 6);
v___x_1080_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__16));
v___x_1081_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_1082_ = l_Nat_reprFast(v_x_1074_);
v___x_1083_ = lean_string_append(v___x_1081_, v___x_1082_);
lean_dec_ref(v___x_1082_);
v___x_1084_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1083_);
v___x_1085_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1080_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
v___x_1086_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__2));
v___x_1087_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = l_Nat_reprFast(v_i_1075_);
v___x_1089_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
v___x_1090_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1087_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
v___x_1091_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___closed__17));
v___x_1092_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1090_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = l_Nat_reprFast(v_offset_1076_);
v___x_1094_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1093_);
v___x_1095_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1092_);
lean_ctor_set(v___x_1095_, 1, v___x_1094_);
v___x_1096_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__18));
v___x_1097_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1095_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
v___x_1098_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_ty_1078_);
v___x_1099_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1097_);
lean_ctor_set(v___x_1099_, 1, v___x_1098_);
v___x_1100_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__3));
v___x_1101_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1099_);
lean_ctor_set(v___x_1101_, 1, v___x_1100_);
v___x_1102_ = l_Nat_reprFast(v_y_1077_);
v___x_1103_ = lean_string_append(v___x_1081_, v___x_1102_);
lean_dec_ref(v___x_1102_);
v___x_1104_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1103_);
v___x_1105_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1105_, 0, v___x_1101_);
lean_ctor_set(v___x_1105_, 1, v___x_1104_);
v___x_1106_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__1));
v___x_1107_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1105_);
lean_ctor_set(v___x_1107_, 1, v___x_1106_);
v___x_1108_ = lean_box(1);
v___x_1109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1107_);
lean_ctor_set(v___x_1109_, 1, v___x_1108_);
v___x_1110_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop(v_indent_953_, v_b_1079_);
v___x_1111_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1109_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
return v___x_1111_;
}
case 6:
{
lean_object* v_x_1112_; lean_object* v_n_1113_; lean_object* v_b_1114_; lean_object* v___x_1115_; lean_object* v___y_1117_; lean_object* v___x_1132_; uint8_t v___x_1133_; 
v_x_1112_ = lean_ctor_get(v_a_954_, 0);
lean_inc(v_x_1112_);
v_n_1113_ = lean_ctor_get(v_a_954_, 1);
lean_inc(v_n_1113_);
v_b_1114_ = lean_ctor_get(v_a_954_, 2);
lean_inc(v_b_1114_);
lean_dec_ref_known(v_a_954_, 3);
v___x_1115_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__20));
v___x_1132_ = lean_unsigned_to_nat(1u);
v___x_1133_ = lean_nat_dec_eq(v_n_1113_, v___x_1132_);
if (v___x_1133_ == 0)
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; uint8_t v___x_1142_; lean_object* v___x_1143_; 
v___x_1134_ = l_Nat_reprFast(v_n_1113_);
v___x_1135_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
v___x_1136_ = lean_obj_once(&l_Lean_IR_formatFnBodyHead___closed__22, &l_Lean_IR_formatFnBodyHead___closed__22_once, _init_l_Lean_IR_formatFnBodyHead___closed__22);
v___x_1137_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__2));
v___x_1138_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1137_);
lean_ctor_set(v___x_1138_, 1, v___x_1135_);
v___x_1139_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__4));
v___x_1140_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1138_);
lean_ctor_set(v___x_1140_, 1, v___x_1139_);
v___x_1141_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1136_);
lean_ctor_set(v___x_1141_, 1, v___x_1140_);
v___x_1142_ = 0;
v___x_1143_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1143_, 0, v___x_1141_);
lean_ctor_set_uint8(v___x_1143_, sizeof(void*)*1, v___x_1142_);
v___y_1117_ = v___x_1143_;
goto v___jp_1116_;
}
else
{
lean_object* v___x_1144_; 
lean_dec(v_n_1113_);
v___x_1144_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__23));
v___y_1117_ = v___x_1144_;
goto v___jp_1116_;
}
v___jp_1116_:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1118_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1115_);
lean_ctor_set(v___x_1118_, 1, v___y_1117_);
v___x_1119_ = ((lean_object*)(l_Lean_IR_formatArray___redArg___lam__0___closed__1));
v___x_1120_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1118_);
lean_ctor_set(v___x_1120_, 1, v___x_1119_);
v___x_1121_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_1122_ = l_Nat_reprFast(v_x_1112_);
v___x_1123_ = lean_string_append(v___x_1121_, v___x_1122_);
lean_dec_ref(v___x_1122_);
v___x_1124_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1123_);
v___x_1125_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1120_);
lean_ctor_set(v___x_1125_, 1, v___x_1124_);
v___x_1126_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__1));
v___x_1127_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1125_);
lean_ctor_set(v___x_1127_, 1, v___x_1126_);
v___x_1128_ = lean_box(1);
v___x_1129_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1127_);
lean_ctor_set(v___x_1129_, 1, v___x_1128_);
v___x_1130_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop(v_indent_953_, v_b_1114_);
v___x_1131_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1129_);
lean_ctor_set(v___x_1131_, 1, v___x_1130_);
return v___x_1131_;
}
}
case 7:
{
lean_object* v_x_1145_; lean_object* v_n_1146_; lean_object* v_b_1147_; lean_object* v___x_1148_; lean_object* v___y_1150_; lean_object* v___x_1165_; uint8_t v___x_1166_; 
v_x_1145_ = lean_ctor_get(v_a_954_, 0);
lean_inc(v_x_1145_);
v_n_1146_ = lean_ctor_get(v_a_954_, 1);
lean_inc(v_n_1146_);
v_b_1147_ = lean_ctor_get(v_a_954_, 2);
lean_inc(v_b_1147_);
lean_dec_ref_known(v_a_954_, 3);
v___x_1148_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__25));
v___x_1165_ = lean_unsigned_to_nat(1u);
v___x_1166_ = lean_nat_dec_eq(v_n_1146_, v___x_1165_);
if (v___x_1166_ == 0)
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; uint8_t v___x_1175_; lean_object* v___x_1176_; 
v___x_1167_ = l_Nat_reprFast(v_n_1146_);
v___x_1168_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1168_, 0, v___x_1167_);
v___x_1169_ = lean_obj_once(&l_Lean_IR_formatFnBodyHead___closed__22, &l_Lean_IR_formatFnBodyHead___closed__22_once, _init_l_Lean_IR_formatFnBodyHead___closed__22);
v___x_1170_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__2));
v___x_1171_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1170_);
lean_ctor_set(v___x_1171_, 1, v___x_1168_);
v___x_1172_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___closed__4));
v___x_1173_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1171_);
lean_ctor_set(v___x_1173_, 1, v___x_1172_);
v___x_1174_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1169_);
lean_ctor_set(v___x_1174_, 1, v___x_1173_);
v___x_1175_ = 0;
v___x_1176_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1176_, 0, v___x_1174_);
lean_ctor_set_uint8(v___x_1176_, sizeof(void*)*1, v___x_1175_);
v___y_1150_ = v___x_1176_;
goto v___jp_1149_;
}
else
{
lean_object* v___x_1177_; 
lean_dec(v_n_1146_);
v___x_1177_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__23));
v___y_1150_ = v___x_1177_;
goto v___jp_1149_;
}
v___jp_1149_:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1151_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1148_);
lean_ctor_set(v___x_1151_, 1, v___y_1150_);
v___x_1152_ = ((lean_object*)(l_Lean_IR_formatArray___redArg___lam__0___closed__1));
v___x_1153_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1151_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
v___x_1154_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_1155_ = l_Nat_reprFast(v_x_1145_);
v___x_1156_ = lean_string_append(v___x_1154_, v___x_1155_);
lean_dec_ref(v___x_1155_);
v___x_1157_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1156_);
v___x_1158_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1153_);
lean_ctor_set(v___x_1158_, 1, v___x_1157_);
v___x_1159_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__1));
v___x_1160_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1158_);
lean_ctor_set(v___x_1160_, 1, v___x_1159_);
v___x_1161_ = lean_box(1);
v___x_1162_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1160_);
lean_ctor_set(v___x_1162_, 1, v___x_1161_);
v___x_1163_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop(v_indent_953_, v_b_1147_);
v___x_1164_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1162_);
lean_ctor_set(v___x_1164_, 1, v___x_1163_);
return v___x_1164_;
}
}
case 8:
{
lean_object* v_x_1178_; lean_object* v_b_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1197_; 
v_x_1178_ = lean_ctor_get(v_a_954_, 0);
v_b_1179_ = lean_ctor_get(v_a_954_, 1);
v_isSharedCheck_1197_ = !lean_is_exclusive(v_a_954_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1181_ = v_a_954_;
v_isShared_1182_ = v_isSharedCheck_1197_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_b_1179_);
lean_inc(v_x_1178_);
lean_dec(v_a_954_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1197_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1189_; 
v___x_1183_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__27));
v___x_1184_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_1185_ = l_Nat_reprFast(v_x_1178_);
v___x_1186_ = lean_string_append(v___x_1184_, v___x_1185_);
lean_dec_ref(v___x_1185_);
v___x_1187_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1187_, 0, v___x_1186_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set_tag(v___x_1181_, 5);
lean_ctor_set(v___x_1181_, 1, v___x_1187_);
lean_ctor_set(v___x_1181_, 0, v___x_1183_);
v___x_1189_ = v___x_1181_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v___x_1183_);
lean_ctor_set(v_reuseFailAlloc_1196_, 1, v___x_1187_);
v___x_1189_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1190_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__1));
v___x_1191_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1189_);
lean_ctor_set(v___x_1191_, 1, v___x_1190_);
v___x_1192_ = lean_box(1);
v___x_1193_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1191_);
lean_ctor_set(v___x_1193_, 1, v___x_1192_);
v___x_1194_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop(v_indent_953_, v_b_1179_);
v___x_1195_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1195_, 0, v___x_1193_);
lean_ctor_set(v___x_1195_, 1, v___x_1194_);
return v___x_1195_;
}
}
}
case 9:
{
lean_object* v_x_1198_; lean_object* v_xType_1199_; lean_object* v_cs_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; uint8_t v___x_1216_; 
v_x_1198_ = lean_ctor_get(v_a_954_, 1);
lean_inc(v_x_1198_);
v_xType_1199_ = lean_ctor_get(v_a_954_, 2);
lean_inc(v_xType_1199_);
v_cs_1200_ = lean_ctor_get(v_a_954_, 3);
lean_inc_ref(v_cs_1200_);
lean_dec_ref_known(v_a_954_, 4);
v___x_1201_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__29));
v___x_1202_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg___closed__0));
v___x_1203_ = l_Nat_reprFast(v_x_1198_);
v___x_1204_ = lean_string_append(v___x_1202_, v___x_1203_);
lean_dec_ref(v___x_1203_);
v___x_1205_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1204_);
v___x_1206_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1206_, 0, v___x_1201_);
lean_ctor_set(v___x_1206_, 1, v___x_1205_);
v___x_1207_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__3));
v___x_1208_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1206_);
lean_ctor_set(v___x_1208_, 1, v___x_1207_);
v___x_1209_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_xType_1199_);
v___x_1210_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1208_);
lean_ctor_set(v___x_1210_, 1, v___x_1209_);
v___x_1211_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__5));
v___x_1212_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1210_);
lean_ctor_set(v___x_1212_, 1, v___x_1211_);
v___x_1213_ = lean_box(0);
v___x_1214_ = lean_unsigned_to_nat(0u);
v___x_1215_ = lean_array_get_size(v_cs_1200_);
v___x_1216_ = lean_nat_dec_lt(v___x_1214_, v___x_1215_);
if (v___x_1216_ == 0)
{
lean_object* v___x_1217_; 
lean_dec_ref(v_cs_1200_);
lean_dec(v_indent_953_);
v___x_1217_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1212_);
lean_ctor_set(v___x_1217_, 1, v___x_1213_);
return v___x_1217_;
}
else
{
uint8_t v___x_1218_; 
v___x_1218_ = lean_nat_dec_le(v___x_1215_, v___x_1215_);
if (v___x_1218_ == 0)
{
if (v___x_1216_ == 0)
{
lean_object* v___x_1219_; 
lean_dec_ref(v_cs_1200_);
lean_dec(v_indent_953_);
v___x_1219_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1212_);
lean_ctor_set(v___x_1219_, 1, v___x_1213_);
return v___x_1219_;
}
else
{
size_t v___x_1220_; size_t v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1220_ = ((size_t)0ULL);
v___x_1221_ = lean_usize_of_nat(v___x_1215_);
v___x_1222_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop_spec__0(v_indent_953_, v_cs_1200_, v___x_1220_, v___x_1221_, v___x_1213_);
lean_dec_ref(v_cs_1200_);
v___x_1223_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1212_);
lean_ctor_set(v___x_1223_, 1, v___x_1222_);
return v___x_1223_;
}
}
else
{
size_t v___x_1224_; size_t v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1224_ = ((size_t)0ULL);
v___x_1225_ = lean_usize_of_nat(v___x_1215_);
v___x_1226_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop_spec__0(v_indent_953_, v_cs_1200_, v___x_1224_, v___x_1225_, v___x_1213_);
lean_dec_ref(v_cs_1200_);
v___x_1227_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1212_);
lean_ctor_set(v___x_1227_, 1, v___x_1226_);
return v___x_1227_;
}
}
}
case 10:
{
lean_object* v_x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
lean_dec(v_indent_953_);
v_x_1228_ = lean_ctor_get(v_a_954_, 0);
lean_inc(v_x_1228_);
lean_dec_ref_known(v_a_954_, 1);
v___x_1229_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__33));
v___x_1230_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg(v_x_1228_);
v___x_1231_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1229_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
return v___x_1231_;
}
case 11:
{
lean_object* v_j_1232_; lean_object* v_ys_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1247_; 
lean_dec(v_indent_953_);
v_j_1232_ = lean_ctor_get(v_a_954_, 0);
v_ys_1233_ = lean_ctor_get(v_a_954_, 1);
v_isSharedCheck_1247_ = !lean_is_exclusive(v_a_954_);
if (v_isSharedCheck_1247_ == 0)
{
v___x_1235_ = v_a_954_;
v_isShared_1236_ = v_isSharedCheck_1247_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_ys_1233_);
lean_inc(v_j_1232_);
lean_dec(v_a_954_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1247_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1243_; 
v___x_1237_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__35));
v___x_1238_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__4));
v___x_1239_ = l_Nat_reprFast(v_j_1232_);
v___x_1240_ = lean_string_append(v___x_1238_, v___x_1239_);
lean_dec_ref(v___x_1239_);
v___x_1241_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1240_);
if (v_isShared_1236_ == 0)
{
lean_ctor_set_tag(v___x_1235_, 5);
lean_ctor_set(v___x_1235_, 1, v___x_1241_);
lean_ctor_set(v___x_1235_, 0, v___x_1237_);
v___x_1243_ = v___x_1235_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v___x_1237_);
lean_ctor_set(v_reuseFailAlloc_1246_, 1, v___x_1241_);
v___x_1243_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1244_ = l_Lean_IR_formatArray___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_spec__0(v_ys_1233_);
lean_dec_ref(v_ys_1233_);
v___x_1245_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1243_);
lean_ctor_set(v___x_1245_, 1, v___x_1244_);
return v___x_1245_;
}
}
}
default: 
{
lean_object* v___x_1248_; 
lean_dec(v_indent_953_);
v___x_1248_ = ((lean_object*)(l_Lean_IR_formatFnBodyHead___closed__37));
return v___x_1248_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop_spec__0(lean_object* v_indent_1249_, lean_object* v_as_1250_, size_t v_i_1251_, size_t v_stop_1252_, lean_object* v_b_1253_){
_start:
{
uint8_t v___x_1254_; 
v___x_1254_ = lean_usize_dec_eq(v_i_1251_, v_stop_1252_);
if (v___x_1254_ == 0)
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; size_t v___x_1261_; size_t v___x_1262_; 
v___x_1255_ = lean_array_uget_borrowed(v_as_1250_, v_i_1251_);
v___x_1256_ = lean_box(1);
v___x_1257_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1257_, 0, v_b_1253_);
lean_ctor_set(v___x_1257_, 1, v___x_1256_);
lean_inc_n(v_indent_1249_, 2);
v___x_1258_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop), 2, 1);
lean_closure_set(v___x_1258_, 0, v_indent_1249_);
lean_inc(v___x_1255_);
v___x_1259_ = l_Lean_IR_formatAlt(v___x_1258_, v_indent_1249_, v___x_1255_);
v___x_1260_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1257_);
lean_ctor_set(v___x_1260_, 1, v___x_1259_);
v___x_1261_ = ((size_t)1ULL);
v___x_1262_ = lean_usize_add(v_i_1251_, v___x_1261_);
v_i_1251_ = v___x_1262_;
v_b_1253_ = v___x_1260_;
goto _start;
}
else
{
lean_dec(v_indent_1249_);
return v_b_1253_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop_spec__0___boxed(lean_object* v_indent_1264_, lean_object* v_as_1265_, lean_object* v_i_1266_, lean_object* v_stop_1267_, lean_object* v_b_1268_){
_start:
{
size_t v_i_boxed_1269_; size_t v_stop_boxed_1270_; lean_object* v_res_1271_; 
v_i_boxed_1269_ = lean_unbox_usize(v_i_1266_);
lean_dec(v_i_1266_);
v_stop_boxed_1270_ = lean_unbox_usize(v_stop_1267_);
lean_dec(v_stop_1267_);
v_res_1271_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop_spec__0(v_indent_1264_, v_as_1265_, v_i_boxed_1269_, v_stop_boxed_1270_, v_b_1268_);
lean_dec_ref(v_as_1265_);
return v_res_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_formatFnBody(lean_object* v_fnBody_1272_, lean_object* v_indent_1273_){
_start:
{
lean_object* v___x_1274_; 
v___x_1274_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop(v_indent_1273_, v_fnBody_1272_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instToFormatFnBody___lam__0(lean_object* v_fnBody_1275_){
_start:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1276_ = lean_unsigned_to_nat(2u);
v___x_1277_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop(v___x_1276_, v_fnBody_1275_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instToStringFnBody___lam__0(lean_object* v_b_1280_){
_start:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___x_1281_ = lean_unsigned_to_nat(2u);
v___x_1282_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop(v___x_1281_, v_b_1280_);
v___x_1283_ = l_Std_Format_defWidth;
v___x_1284_ = lean_unsigned_to_nat(0u);
v___x_1285_ = l_Std_Format_pretty(v___x_1282_, v___x_1283_, v___x_1284_, v___x_1284_);
return v___x_1285_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_formatDecl(lean_object* v_decl_1294_, lean_object* v_indent_1295_){
_start:
{
if (lean_obj_tag(v_decl_1294_) == 0)
{
lean_object* v_f_1296_; lean_object* v_xs_1297_; lean_object* v_type_1298_; lean_object* v_body_1299_; lean_object* v___x_1300_; uint8_t v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
v_f_1296_ = lean_ctor_get(v_decl_1294_, 0);
lean_inc(v_f_1296_);
v_xs_1297_ = lean_ctor_get(v_decl_1294_, 1);
lean_inc_ref(v_xs_1297_);
v_type_1298_ = lean_ctor_get(v_decl_1294_, 2);
lean_inc(v_type_1298_);
v_body_1299_ = lean_ctor_get(v_decl_1294_, 3);
lean_inc(v_body_1299_);
lean_dec_ref_known(v_decl_1294_, 5);
v___x_1300_ = ((lean_object*)(l_Lean_IR_formatDecl___closed__1));
v___x_1301_ = 1;
v___x_1302_ = l_Lean_Name_toString(v_f_1296_, v___x_1301_);
v___x_1303_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1302_);
v___x_1304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1300_);
lean_ctor_set(v___x_1304_, 1, v___x_1303_);
v___x_1305_ = l_Lean_IR_formatArray___at___00Lean_IR_formatParams_spec__0(v_xs_1297_);
lean_dec_ref(v_xs_1297_);
v___x_1306_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1304_);
lean_ctor_set(v___x_1306_, 1, v___x_1305_);
v___x_1307_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__3));
v___x_1308_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1306_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_type_1298_);
v___x_1310_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1308_);
lean_ctor_set(v___x_1310_, 1, v___x_1309_);
v___x_1311_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop___closed__3));
v___x_1312_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1310_);
lean_ctor_set(v___x_1312_, 1, v___x_1311_);
lean_inc(v_indent_1295_);
v___x_1313_ = lean_nat_to_int(v_indent_1295_);
v___x_1314_ = lean_box(1);
v___x_1315_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatFnBody_loop(v_indent_1295_, v_body_1299_);
v___x_1316_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1314_);
lean_ctor_set(v___x_1316_, 1, v___x_1315_);
v___x_1317_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1313_);
lean_ctor_set(v___x_1317_, 1, v___x_1316_);
v___x_1318_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1312_);
lean_ctor_set(v___x_1318_, 1, v___x_1317_);
return v___x_1318_;
}
else
{
lean_object* v_f_1319_; lean_object* v_xs_1320_; lean_object* v_type_1321_; lean_object* v___x_1322_; uint8_t v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
lean_dec(v_indent_1295_);
v_f_1319_ = lean_ctor_get(v_decl_1294_, 0);
lean_inc(v_f_1319_);
v_xs_1320_ = lean_ctor_get(v_decl_1294_, 1);
lean_inc_ref(v_xs_1320_);
v_type_1321_ = lean_ctor_get(v_decl_1294_, 2);
lean_inc(v_type_1321_);
lean_dec_ref_known(v_decl_1294_, 4);
v___x_1322_ = ((lean_object*)(l_Lean_IR_formatDecl___closed__3));
v___x_1323_ = 1;
v___x_1324_ = l_Lean_Name_toString(v_f_1319_, v___x_1323_);
v___x_1325_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1324_);
v___x_1326_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1322_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
v___x_1327_ = l_Lean_IR_formatArray___at___00Lean_IR_formatParams_spec__0(v_xs_1320_);
lean_dec_ref(v_xs_1320_);
v___x_1328_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1326_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
v___x_1329_ = ((lean_object*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam___closed__3));
v___x_1330_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1328_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
v___x_1331_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_type_1321_);
v___x_1332_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1330_);
lean_ctor_set(v___x_1332_, 1, v___x_1331_);
return v___x_1332_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instToFormatDecl___lam__0(lean_object* v_decl_1333_){
_start:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1334_ = lean_unsigned_to_nat(2u);
v___x_1335_ = l_Lean_IR_formatDecl(v_decl_1333_, v___x_1334_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_declToString(lean_object* v_d_1338_){
_start:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1339_ = lean_unsigned_to_nat(2u);
v___x_1340_ = l_Lean_IR_formatDecl(v_d_1338_, v___x_1339_);
v___x_1341_ = l_Std_Format_defWidth;
v___x_1342_ = lean_unsigned_to_nat(0u);
v___x_1343_ = l_Std_Format_pretty(v___x_1340_, v___x_1341_, v___x_1342_, v___x_1342_);
return v___x_1343_;
}
}
lean_object* runtime_initialize_Lean_Compiler_IR_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Format_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_IR_Format(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_IR_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_IR_Format(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_IR_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Format_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_IR_Format(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_IR_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_IR_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_IR_Format(builtin);
}
#ifdef __cplusplus
}
#endif

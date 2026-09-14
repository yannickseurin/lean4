// Lean compiler output
// Module: Init.Data.SInt.Bitwise
// Imports: import all Init.Data.UInt.Basic import all Init.Data.BitVec.Basic import all Init.Data.BitVec.Lemmas import all Init.Data.SInt.Basic public import Init.Data.SInt.Basic public import Init.Ext import Init.Data.BitVec.Bitblast import Init.Data.SInt.Lemmas import Init.System.Platform
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
static const lean_string_object l_commandDeclare__bitwise__int__theorems_____00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "commandDeclare_bitwise_int_theorems__"};
static const lean_object* l_commandDeclare__bitwise__int__theorems_____00__closed__0 = (const lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__0_value;
static const lean_ctor_object l_commandDeclare__bitwise__int__theorems_____00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(119, 23, 191, 110, 65, 43, 96, 39)}};
static const lean_object* l_commandDeclare__bitwise__int__theorems_____00__closed__1 = (const lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__1_value;
static const lean_string_object l_commandDeclare__bitwise__int__theorems_____00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_commandDeclare__bitwise__int__theorems_____00__closed__2 = (const lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__2_value;
static const lean_ctor_object l_commandDeclare__bitwise__int__theorems_____00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_commandDeclare__bitwise__int__theorems_____00__closed__3 = (const lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__3_value;
static const lean_string_object l_commandDeclare__bitwise__int__theorems_____00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "declare_bitwise_int_theorems"};
static const lean_object* l_commandDeclare__bitwise__int__theorems_____00__closed__4 = (const lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__4_value;
static const lean_ctor_object l_commandDeclare__bitwise__int__theorems_____00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__4_value)}};
static const lean_object* l_commandDeclare__bitwise__int__theorems_____00__closed__5 = (const lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__5_value;
static const lean_string_object l_commandDeclare__bitwise__int__theorems_____00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_commandDeclare__bitwise__int__theorems_____00__closed__6 = (const lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__6_value;
static const lean_ctor_object l_commandDeclare__bitwise__int__theorems_____00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_commandDeclare__bitwise__int__theorems_____00__closed__7 = (const lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__7_value;
static const lean_ctor_object l_commandDeclare__bitwise__int__theorems_____00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__7_value)}};
static const lean_object* l_commandDeclare__bitwise__int__theorems_____00__closed__8 = (const lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__8_value;
static const lean_ctor_object l_commandDeclare__bitwise__int__theorems_____00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__3_value),((lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__5_value),((lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__8_value)}};
static const lean_object* l_commandDeclare__bitwise__int__theorems_____00__closed__9 = (const lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__9_value;
static const lean_string_object l_commandDeclare__bitwise__int__theorems_____00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_commandDeclare__bitwise__int__theorems_____00__closed__10 = (const lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__10_value;
static const lean_ctor_object l_commandDeclare__bitwise__int__theorems_____00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__10_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_commandDeclare__bitwise__int__theorems_____00__closed__11 = (const lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__11_value;
static const lean_ctor_object l_commandDeclare__bitwise__int__theorems_____00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__11_value),((lean_object*)(((size_t)(1023) << 1) | 1))}};
static const lean_object* l_commandDeclare__bitwise__int__theorems_____00__closed__12 = (const lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__12_value;
static const lean_ctor_object l_commandDeclare__bitwise__int__theorems_____00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__3_value),((lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__9_value),((lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__12_value)}};
static const lean_object* l_commandDeclare__bitwise__int__theorems_____00__closed__13 = (const lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__13_value;
static const lean_ctor_object l_commandDeclare__bitwise__int__theorems_____00__closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__13_value)}};
static const lean_object* l_commandDeclare__bitwise__int__theorems_____00__closed__14 = (const lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__14_value;
LEAN_EXPORT const lean_object* l_commandDeclare__bitwise__int__theorems____ = (const lean_object*)&l_commandDeclare__bitwise__int__theorems_____00__closed__14_value;
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__2 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__2_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__3 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__3_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__4_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__4_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__4_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(254, 132, 206, 38, 133, 164, 145, 139)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__4 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__4_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__5 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__5_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__6 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__6_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__7;
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__0 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__0_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ISize"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__1 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__1_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(110, 52, 237, 35, 121, 142, 86, 222)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__2 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__2_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namespace"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__3 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__3_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__4_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__4_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__4_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(84, 17, 124, 142, 243, 161, 231, 243)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__4 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__4_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__5 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__5_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__6_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__6_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__6_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__6 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__6_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__7 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__7_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__8_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__8_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__8_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__8 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__8_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__9 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__9_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__10 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__10_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__11_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__11_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__11_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(66, 184, 196, 169, 25, 125, 40, 35)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__11 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__11_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__12 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__12_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__13 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__13_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__14_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__14_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__14_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__14 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__14_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__15 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__15_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__16_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__16_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__16_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__16 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__16_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__17 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__17_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__18 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__18_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__19_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__19_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__19_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(167, 64, 108, 103, 216, 152, 33, 14)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__19 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__19_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__20 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__20_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "protected"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__21 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__21_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__22_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__22_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__22_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(33, 80, 123, 180, 50, 194, 119, 199)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__22 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__22_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "theorem"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__23 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__23_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__24_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__24_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__24_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(238, 116, 137, 74, 194, 103, 58, 54)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__24 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__24_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__25 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__25_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__26_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__26_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__26_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__26 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__26_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toBitVec_not"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__27 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__27_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__28;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(4, 183, 142, 241, 137, 246, 36, 132)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__29 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__29_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__30 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__30_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__31_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__31_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__31_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(22, 101, 130, 251, 183, 19, 113, 82)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__31 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__31_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "implicitBinder"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__32 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__32_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__33_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__33_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__33_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(39, 181, 62, 102, 86, 14, 161, 96)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__33 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__33_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__34 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__34_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__35 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__35_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__36;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__37 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__37_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__38 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__38_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__39 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__39_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__40 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__40_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__41_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__41_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__41_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__41 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__41_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_=_"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__42 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__42_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__42_value),LEAN_SCALAR_PTR_LITERAL(167, 251, 107, 62, 223, 239, 203, 78)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__43 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__43_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__44 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__44_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__45_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__45_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__45_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__44_value),LEAN_SCALAR_PTR_LITERAL(103, 149, 207, 196, 17, 4, 77, 74)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__45 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__45_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__46 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__46_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__47_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__47_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__47_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__46_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__47 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__47_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__48 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__48_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__49_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__49_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__49_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__48_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__49 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__49_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__50 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__50_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__51 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__51_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__51_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__52 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__52_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__53 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__53_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__54;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__55;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term~~~_"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__56 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__56_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__56_value),LEAN_SCALAR_PTR_LITERAL(77, 157, 31, 78, 77, 225, 98, 3)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__57 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__57_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "~~~"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__58 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__58_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__59 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__59_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__60 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__60_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toBitVec"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__61 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__61_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__62;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__61_value),LEAN_SCALAR_PTR_LITERAL(130, 88, 94, 113, 144, 209, 170, 121)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__63 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__63_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__64 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__64_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "a.toBitVec"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__65 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__65_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__66;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__67_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__67_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__61_value),LEAN_SCALAR_PTR_LITERAL(238, 90, 95, 221, 27, 118, 9, 223)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__67 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__67_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__68 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__68_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__69_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__69_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__69_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__69_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__69_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__69_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__68_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__69 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__69_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__70 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__70_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rfl"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__71 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__71_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__72;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(77, 42, 253, 71, 61, 132, 173, 240)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__73 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__73_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__74 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__74_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__75 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__75_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__76_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__76_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__76_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__76_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__76_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__74_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__76_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__75_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__76 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__76_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toBitVec_and"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__77 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__77_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__78_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__78;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(114, 9, 190, 33, 169, 157, 178, 61)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__79 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__79_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicitBinder"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__80 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__80_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__81_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__81_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__81_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__81_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__81_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__81_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__80_value),LEAN_SCALAR_PTR_LITERAL(49, 119, 193, 23, 170, 93, 183, 238)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__81 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__81_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__82 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__82_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__83_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__83;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__82_value),LEAN_SCALAR_PTR_LITERAL(47, 22, 244, 233, 226, 169, 241, 142)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__84 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__84_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_&&&_"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__85 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__85_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__85_value),LEAN_SCALAR_PTR_LITERAL(193, 99, 184, 216, 31, 112, 180, 172)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__86 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__86_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "&&&"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__87 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__87_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "b.toBitVec"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__88 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__88_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__89_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__89;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__90_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__82_value),LEAN_SCALAR_PTR_LITERAL(47, 22, 244, 233, 226, 169, 241, 142)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__90_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__61_value),LEAN_SCALAR_PTR_LITERAL(6, 235, 47, 200, 31, 68, 206, 165)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__90 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__90_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "toBitVec_or"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__91 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__91_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__92_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__92;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__91_value),LEAN_SCALAR_PTR_LITERAL(84, 192, 11, 42, 238, 76, 177, 131)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__93 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__93_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_|||_"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__94 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__94_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__94_value),LEAN_SCALAR_PTR_LITERAL(235, 153, 6, 35, 60, 189, 128, 63)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__95 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__95_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "|||"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__96 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__96_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toBitVec_xor"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__97 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__97_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__98_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__98;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__97_value),LEAN_SCALAR_PTR_LITERAL(134, 92, 36, 213, 197, 9, 127, 37)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__99 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__99_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_^^^_"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__100 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__100_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__100_value),LEAN_SCALAR_PTR_LITERAL(80, 193, 94, 25, 196, 159, 89, 59)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__101 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__101_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "^^^"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__102 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__102_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "toBitVec_shiftLeft"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__103 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__103_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__104_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__104;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__103_value),LEAN_SCALAR_PTR_LITERAL(67, 94, 183, 134, 188, 119, 20, 251)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__105 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__105_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_<<<_"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__106 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__106_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__106_value),LEAN_SCALAR_PTR_LITERAL(165, 87, 195, 47, 75, 199, 87, 179)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__107 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__107_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "<<<"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__108 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__108_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__109 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__109_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__110_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__110_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__110_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__110_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__110_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__110_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__109_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__110 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__110_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__111_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "b.toBitVec.smod"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__111 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__111_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__112_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__112;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__113_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "smod"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__113 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__113_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__114_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__82_value),LEAN_SCALAR_PTR_LITERAL(47, 22, 244, 233, 226, 169, 241, 142)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__114_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__114_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__61_value),LEAN_SCALAR_PTR_LITERAL(6, 235, 47, 200, 31, 68, 206, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__114_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__114_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__113_value),LEAN_SCALAR_PTR_LITERAL(40, 22, 211, 94, 185, 99, 127, 0)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__114 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__114_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__115_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "toBitVec_shiftRight"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__115 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__115_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__116_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__116;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__115_value),LEAN_SCALAR_PTR_LITERAL(93, 43, 133, 175, 145, 37, 127, 56)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__117 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__117_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__118_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_>>>_"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__118 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__118_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__119_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__118_value),LEAN_SCALAR_PTR_LITERAL(42, 229, 82, 200, 78, 65, 60, 50)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__119 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__119_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__120_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ">>>"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__120 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__120_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "a.toBitVec.sshiftRight'"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__121 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__121_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__122_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__122;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__123_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "sshiftRight'"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__123 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__123_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__124_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__124_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__124_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__61_value),LEAN_SCALAR_PTR_LITERAL(238, 90, 95, 221, 27, 118, 9, 223)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__124_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__124_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__123_value),LEAN_SCALAR_PTR_LITERAL(239, 94, 99, 244, 171, 72, 235, 147)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__124 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__124_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__125_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toBitVec_abs"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__125 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__125_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__126_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__126;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__127_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__125_value),LEAN_SCALAR_PTR_LITERAL(2, 104, 147, 67, 55, 70, 103, 90)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__127 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__127_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__128_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "a.abs.toBitVec"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__128 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__128_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__129_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__129;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__130_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "abs"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__130 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__130_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__131_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__131_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__131_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__130_value),LEAN_SCALAR_PTR_LITERAL(79, 24, 211, 250, 166, 8, 132, 9)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__131_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__131_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__61_value),LEAN_SCALAR_PTR_LITERAL(38, 41, 28, 132, 151, 243, 114, 72)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__131 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__131_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__132_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "a.toBitVec.abs"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__132 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__132_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__133_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__133;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__134_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__134_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__134_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__61_value),LEAN_SCALAR_PTR_LITERAL(238, 90, 95, 221, 27, 118, 9, 223)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__134_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__134_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__130_value),LEAN_SCALAR_PTR_LITERAL(18, 100, 236, 57, 163, 250, 139, 64)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__134 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__134_value;
static const lean_array_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__135_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__29_value),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__79_value),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__93_value),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__99_value),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__105_value),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__117_value),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__127_value)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__135 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__135_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__136_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__136;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__137_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__137;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__138_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "attribute"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__138 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__138_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__139_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__139_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__139_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__139_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__139_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__139_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__139_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__138_value),LEAN_SCALAR_PTR_LITERAL(79, 30, 18, 84, 71, 173, 185, 159)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__139 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__139_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__140_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__140 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__140_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__141_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__141 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__141_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__142_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__142_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__142_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__142_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__142_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__142_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__142_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__141_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__142 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__142_value;
static const lean_string_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__143_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "int_toBitVec"};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__143 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__143_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__144_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__144;
static const lean_ctor_object l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__145_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__143_value),LEAN_SCALAR_PTR_LITERAL(86, 82, 181, 235, 29, 69, 188, 18)}};
static const lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__145 = (const lean_object*)&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__145_value;
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__0(lean_object* v_____do__lift_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
uint8_t v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = 0;
v___x_38_ = l_Lean_SourceInfo_fromRef(v_____do__lift_34_, v___x_37_);
v___x_39_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
lean_ctor_set(v___x_39_, 1, v___y_36_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__0___boxed(lean_object* v_____do__lift_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__0(v_____do__lift_40_, v___y_41_, v___y_42_);
lean_dec_ref(v___y_41_);
lean_dec(v_____do__lift_40_);
return v_res_43_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__7(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Array_mkArray0___redArg();
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1(lean_object* v___f_57_, lean_object* v_typeName_58_, lean_object* v_____r_59_, lean_object* v_cmds_60_, lean_object* v___y_61_, lean_object* v___y_62_){
_start:
{
lean_object* v_ref_63_; lean_object* v___x_64_; 
v_ref_63_ = lean_ctor_get(v___y_61_, 5);
lean_inc_ref(v___y_61_);
lean_inc(v_ref_63_);
v___x_64_ = lean_apply_3(v___f_57_, v_ref_63_, v___y_61_, v___y_62_);
if (lean_obj_tag(v___x_64_) == 0)
{
lean_object* v_a_65_; lean_object* v_a_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_84_; 
v_a_65_ = lean_ctor_get(v___x_64_, 0);
v_a_66_ = lean_ctor_get(v___x_64_, 1);
v_isSharedCheck_84_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_84_ == 0)
{
v___x_68_ = v___x_64_;
v_isShared_69_ = v_isSharedCheck_84_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_a_66_);
lean_inc(v_a_65_);
lean_dec(v___x_64_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_84_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_82_; 
v___x_70_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__3));
v___x_71_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__4));
lean_inc_n(v_a_65_, 3);
v___x_72_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_72_, 0, v_a_65_);
lean_ctor_set(v___x_72_, 1, v___x_70_);
v___x_73_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__6));
v___x_74_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__7, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__7_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__7);
v___x_75_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_75_, 0, v_a_65_);
lean_ctor_set(v___x_75_, 1, v___x_73_);
lean_ctor_set(v___x_75_, 2, v___x_74_);
v___x_76_ = l_Lean_Syntax_node2(v_a_65_, v___x_73_, v_typeName_58_, v___x_75_);
v___x_77_ = l_Lean_Syntax_node2(v_a_65_, v___x_71_, v___x_72_, v___x_76_);
v___x_78_ = lean_array_push(v_cmds_60_, v___x_77_);
v___x_79_ = lean_box(2);
v___x_80_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_73_);
lean_ctor_set(v___x_80_, 2, v___x_78_);
if (v_isShared_69_ == 0)
{
lean_ctor_set(v___x_68_, 0, v___x_80_);
v___x_82_ = v___x_68_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v___x_80_);
lean_ctor_set(v_reuseFailAlloc_83_, 1, v_a_66_);
v___x_82_ = v_reuseFailAlloc_83_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
return v___x_82_;
}
}
}
else
{
lean_object* v_a_85_; lean_object* v_a_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_93_; 
lean_dec_ref(v_cmds_60_);
lean_dec(v_typeName_58_);
v_a_85_ = lean_ctor_get(v___x_64_, 0);
v_a_86_ = lean_ctor_get(v___x_64_, 1);
v_isSharedCheck_93_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_93_ == 0)
{
v___x_88_ = v___x_64_;
v_isShared_89_ = v_isSharedCheck_93_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_a_86_);
lean_inc(v_a_85_);
lean_dec(v___x_64_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_93_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___x_91_; 
if (v_isShared_89_ == 0)
{
v___x_91_ = v___x_88_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v_a_85_);
lean_ctor_set(v_reuseFailAlloc_92_, 1, v_a_86_);
v___x_91_ = v_reuseFailAlloc_92_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
return v___x_91_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___boxed(lean_object* v___f_94_, lean_object* v_typeName_95_, lean_object* v_____r_96_, lean_object* v_cmds_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1(v___f_94_, v_typeName_95_, v_____r_96_, v_cmds_97_, v___y_98_, v___y_99_);
lean_dec_ref(v___y_98_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1_spec__0(lean_object* v___x_101_, size_t v_sz_102_, size_t v_i_103_, lean_object* v_bs_104_){
_start:
{
uint8_t v___x_105_; 
v___x_105_ = lean_usize_dec_lt(v_i_103_, v_sz_102_);
if (v___x_105_ == 0)
{
lean_object* v___x_106_; 
lean_dec(v___x_101_);
v___x_106_ = l_unsafeCast___redArg(v_bs_104_);
lean_dec_ref(v_bs_104_);
return v___x_106_;
}
else
{
lean_object* v_v_107_; lean_object* v___x_108_; lean_object* v_bs_x27_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; size_t v___x_113_; size_t v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v_v_107_ = lean_array_uget(v_bs_104_, v_i_103_);
v___x_108_ = lean_unsigned_to_nat(0u);
v_bs_x27_109_ = lean_array_uset(v_bs_104_, v_i_103_, v___x_108_);
v___x_110_ = l_unsafeCast___redArg(v_v_107_);
lean_dec(v_v_107_);
lean_inc(v___x_101_);
v___x_111_ = l_Lean_Name_append(v___x_101_, v___x_110_);
v___x_112_ = l_Lean_mkIdent(v___x_111_);
v___x_113_ = ((size_t)1ULL);
v___x_114_ = lean_usize_add(v_i_103_, v___x_113_);
v___x_115_ = l_unsafeCast___redArg(v___x_112_);
lean_dec(v___x_112_);
v___x_116_ = lean_array_uset(v_bs_x27_109_, v_i_103_, v___x_115_);
v_i_103_ = v___x_114_;
v_bs_104_ = v___x_116_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1_spec__0___boxed(lean_object* v___x_118_, lean_object* v_sz_119_, lean_object* v_i_120_, lean_object* v_bs_121_){
_start:
{
size_t v_sz_boxed_122_; size_t v_i_boxed_123_; lean_object* v_res_124_; 
v_sz_boxed_122_ = lean_unbox_usize(v_sz_119_);
lean_dec(v_sz_119_);
v_i_boxed_123_ = lean_unbox_usize(v_i_120_);
lean_dec(v_i_120_);
v_res_124_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1_spec__0(v___x_118_, v_sz_boxed_122_, v_i_boxed_123_, v_bs_121_);
return v_res_124_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__28(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__27));
v___x_195_ = l_String_toRawSubstring_x27(v___x_194_);
return v___x_195_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__36(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__35));
v___x_213_ = l_String_toRawSubstring_x27(v___x_212_);
return v___x_213_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__54(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__53));
v___x_251_ = l_String_toRawSubstring_x27(v___x_250_);
return v___x_251_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__55(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = lean_box(0);
v___x_253_ = l_unsafeCast___redArg(v___x_252_);
return v___x_253_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__62(void){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_261_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__61));
v___x_262_ = l_String_toRawSubstring_x27(v___x_261_);
return v___x_262_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__66(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__65));
v___x_268_ = l_String_toRawSubstring_x27(v___x_267_);
return v___x_268_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__72(void){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__71));
v___x_281_ = l_String_toRawSubstring_x27(v___x_280_);
return v___x_281_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__78(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__77));
v___x_293_ = l_String_toRawSubstring_x27(v___x_292_);
return v___x_293_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__83(void){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__82));
v___x_304_ = l_String_toRawSubstring_x27(v___x_303_);
return v___x_304_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__89(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__88));
v___x_313_ = l_String_toRawSubstring_x27(v___x_312_);
return v___x_313_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__92(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__91));
v___x_319_ = l_String_toRawSubstring_x27(v___x_318_);
return v___x_319_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__98(void){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__97));
v___x_328_ = l_String_toRawSubstring_x27(v___x_327_);
return v___x_328_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__104(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__103));
v___x_337_ = l_String_toRawSubstring_x27(v___x_336_);
return v___x_337_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__112(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__111));
v___x_352_ = l_String_toRawSubstring_x27(v___x_351_);
return v___x_352_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__116(void){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_359_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__115));
v___x_360_ = l_String_toRawSubstring_x27(v___x_359_);
return v___x_360_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__122(void){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_368_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__121));
v___x_369_ = l_String_toRawSubstring_x27(v___x_368_);
return v___x_369_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__126(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__125));
v___x_377_ = l_String_toRawSubstring_x27(v___x_376_);
return v___x_377_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__129(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__128));
v___x_382_ = l_String_toRawSubstring_x27(v___x_381_);
return v___x_382_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__133(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__132));
v___x_390_ = l_String_toRawSubstring_x27(v___x_389_);
return v___x_390_;
}
}
static size_t _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__136(void){
_start:
{
lean_object* v___x_411_; size_t v_sz_412_; 
v___x_411_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__135));
v_sz_412_ = lean_array_size(v___x_411_);
return v_sz_412_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__137(void){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__135));
v___x_414_ = l_unsafeCast___redArg(v___x_413_);
return v___x_414_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__144(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__143));
v___x_430_ = l_String_toRawSubstring_x27(v___x_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1(lean_object* v_x_433_, lean_object* v_a_434_, lean_object* v_a_435_){
_start:
{
lean_object* v___y_437_; lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_456_ = ((lean_object*)(l_commandDeclare__bitwise__int__theorems_____00__closed__1));
lean_inc(v_x_433_);
v___x_457_ = l_Lean_Syntax_isOfKind(v_x_433_, v___x_456_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; lean_object* v___x_459_; 
lean_dec(v_x_433_);
v___x_458_ = lean_box(1);
v___x_459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
lean_ctor_set(v___x_459_, 1, v_a_435_);
return v___x_459_;
}
else
{
lean_object* v_ref_460_; lean_object* v___f_461_; lean_object* v___x_462_; lean_object* v_typeName_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; uint8_t v_isISize_468_; uint8_t v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v_ref_460_ = lean_ctor_get(v_a_434_, 5);
v___f_461_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__0));
v___x_462_ = lean_unsigned_to_nat(1u);
v_typeName_463_ = l_Lean_Syntax_getArg(v_x_433_, v___x_462_);
v___x_464_ = lean_unsigned_to_nat(2u);
v___x_465_ = l_Lean_Syntax_getArg(v_x_433_, v___x_464_);
lean_dec(v_x_433_);
v___x_466_ = l_Lean_TSyntax_getId(v_typeName_463_);
v___x_467_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__2));
v_isISize_468_ = lean_name_eq(v___x_466_, v___x_467_);
v___x_469_ = 0;
v___x_470_ = l_Lean_SourceInfo_fromRef(v_ref_460_, v___x_469_);
v___x_471_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__6));
v___x_472_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__3));
v___x_473_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__4));
lean_inc_n(v___x_470_, 133);
v___x_474_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_474_, 0, v___x_470_);
lean_ctor_set(v___x_474_, 1, v___x_472_);
lean_inc_n(v_typeName_463_, 2);
v___x_475_ = l_Lean_Syntax_node2(v___x_470_, v___x_473_, v___x_474_, v_typeName_463_);
v___x_476_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__6));
v___x_477_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__8));
v___x_478_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__7, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__7_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1___closed__7);
v___x_479_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_479_, 0, v___x_470_);
lean_ctor_set(v___x_479_, 1, v___x_471_);
lean_ctor_set(v___x_479_, 2, v___x_478_);
v___x_480_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__11));
v___x_481_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__12));
v___x_482_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_482_, 0, v___x_470_);
lean_ctor_set(v___x_482_, 1, v___x_481_);
v___x_483_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__14));
v___x_484_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__16));
lean_inc_ref_n(v___x_479_, 20);
v___x_485_ = l_Lean_Syntax_node1(v___x_470_, v___x_484_, v___x_479_);
v___x_486_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__18));
v___x_487_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__19));
v___x_488_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_488_, 0, v___x_470_);
lean_ctor_set(v___x_488_, 1, v___x_486_);
v___x_489_ = l_Lean_Syntax_node4(v___x_470_, v___x_487_, v___x_488_, v___x_479_, v___x_479_, v___x_479_);
v___x_490_ = l_Lean_Syntax_node2(v___x_470_, v___x_483_, v___x_485_, v___x_489_);
v___x_491_ = l_Lean_Syntax_node1(v___x_470_, v___x_471_, v___x_490_);
v___x_492_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__20));
v___x_493_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_470_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
v___x_494_ = l_Lean_Syntax_node3(v___x_470_, v___x_480_, v___x_482_, v___x_491_, v___x_493_);
v___x_495_ = l_Lean_Syntax_node1(v___x_470_, v___x_471_, v___x_494_);
v___x_496_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__21));
v___x_497_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__22));
v___x_498_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_498_, 0, v___x_470_);
lean_ctor_set(v___x_498_, 1, v___x_496_);
v___x_499_ = l_Lean_Syntax_node1(v___x_470_, v___x_497_, v___x_498_);
v___x_500_ = l_Lean_Syntax_node1(v___x_470_, v___x_471_, v___x_499_);
v___x_501_ = l_Lean_Syntax_node7(v___x_470_, v___x_477_, v___x_479_, v___x_495_, v___x_479_, v___x_500_, v___x_479_, v___x_479_, v___x_479_);
v___x_502_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__23));
v___x_503_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__24));
v___x_504_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_504_, 0, v___x_470_);
lean_ctor_set(v___x_504_, 1, v___x_502_);
v___x_505_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__26));
v___x_506_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__28, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__28_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__28);
v___x_507_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__29));
v___x_508_ = lean_box(0);
v___x_509_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_509_, 0, v___x_470_);
lean_ctor_set(v___x_509_, 1, v___x_506_);
lean_ctor_set(v___x_509_, 2, v___x_507_);
lean_ctor_set(v___x_509_, 3, v___x_508_);
v___x_510_ = l_Lean_Syntax_node2(v___x_470_, v___x_505_, v___x_509_, v___x_479_);
v___x_511_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__31));
v___x_512_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__33));
v___x_513_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__34));
v___x_514_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_514_, 0, v___x_470_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
v___x_515_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__36, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__36_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__36);
v___x_516_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__37));
v___x_517_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_517_, 0, v___x_470_);
lean_ctor_set(v___x_517_, 1, v___x_515_);
lean_ctor_set(v___x_517_, 2, v___x_516_);
lean_ctor_set(v___x_517_, 3, v___x_508_);
lean_inc_ref_n(v___x_517_, 7);
v___x_518_ = l_Lean_Syntax_node1(v___x_470_, v___x_471_, v___x_517_);
v___x_519_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__38));
v___x_520_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_520_, 0, v___x_470_);
lean_ctor_set(v___x_520_, 1, v___x_519_);
lean_inc_ref_n(v___x_520_, 7);
v___x_521_ = l_Lean_Syntax_node2(v___x_470_, v___x_471_, v___x_520_, v_typeName_463_);
v___x_522_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__39));
v___x_523_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_523_, 0, v___x_470_);
lean_ctor_set(v___x_523_, 1, v___x_522_);
lean_inc_n(v___x_521_, 2);
lean_inc(v___x_518_);
v___x_524_ = l_Lean_Syntax_node4(v___x_470_, v___x_512_, v___x_514_, v___x_518_, v___x_521_, v___x_523_);
v___x_525_ = l_Lean_Syntax_node1(v___x_470_, v___x_471_, v___x_524_);
v___x_526_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__41));
v___x_527_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__43));
v___x_528_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__45));
v___x_529_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__47));
v___x_530_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__49));
v___x_531_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__50));
v___x_532_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_532_, 0, v___x_470_);
lean_ctor_set(v___x_532_, 1, v___x_531_);
v___x_533_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__52));
v___x_534_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__54, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__54_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__54);
v___x_535_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__55, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__55_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__55);
v___x_536_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_536_, 0, v___x_470_);
lean_ctor_set(v___x_536_, 1, v___x_534_);
lean_ctor_set(v___x_536_, 2, v___x_535_);
lean_ctor_set(v___x_536_, 3, v___x_508_);
v___x_537_ = l_Lean_Syntax_node1(v___x_470_, v___x_533_, v___x_536_);
lean_inc_ref_n(v___x_532_, 2);
v___x_538_ = l_Lean_Syntax_node2(v___x_470_, v___x_530_, v___x_532_, v___x_537_);
v___x_539_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__57));
v___x_540_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__58));
v___x_541_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_541_, 0, v___x_470_);
lean_ctor_set(v___x_541_, 1, v___x_540_);
lean_inc_ref(v___x_541_);
v___x_542_ = l_Lean_Syntax_node2(v___x_470_, v___x_539_, v___x_541_, v___x_517_);
v___x_543_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__59));
v___x_544_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_544_, 0, v___x_470_);
lean_ctor_set(v___x_544_, 1, v___x_543_);
lean_inc_ref_n(v___x_544_, 9);
lean_inc_n(v___x_538_, 7);
v___x_545_ = l_Lean_Syntax_node3(v___x_470_, v___x_529_, v___x_538_, v___x_542_, v___x_544_);
v___x_546_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__60));
v___x_547_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_547_, 0, v___x_470_);
lean_ctor_set(v___x_547_, 1, v___x_546_);
v___x_548_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__62, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__62_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__62);
v___x_549_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__63));
v___x_550_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_550_, 0, v___x_470_);
lean_ctor_set(v___x_550_, 1, v___x_548_);
lean_ctor_set(v___x_550_, 2, v___x_549_);
lean_ctor_set(v___x_550_, 3, v___x_508_);
lean_inc_ref_n(v___x_550_, 5);
lean_inc_ref_n(v___x_547_, 5);
v___x_551_ = l_Lean_Syntax_node3(v___x_470_, v___x_528_, v___x_545_, v___x_547_, v___x_550_);
v___x_552_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__64));
v___x_553_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_553_, 0, v___x_470_);
lean_ctor_set(v___x_553_, 1, v___x_552_);
v___x_554_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__66, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__66_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__66);
v___x_555_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__67));
v___x_556_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_556_, 0, v___x_470_);
lean_ctor_set(v___x_556_, 1, v___x_554_);
lean_ctor_set(v___x_556_, 2, v___x_555_);
lean_ctor_set(v___x_556_, 3, v___x_508_);
lean_inc_ref_n(v___x_556_, 4);
v___x_557_ = l_Lean_Syntax_node2(v___x_470_, v___x_539_, v___x_541_, v___x_556_);
lean_inc_ref_n(v___x_553_, 6);
v___x_558_ = l_Lean_Syntax_node3(v___x_470_, v___x_527_, v___x_551_, v___x_553_, v___x_557_);
v___x_559_ = l_Lean_Syntax_node2(v___x_470_, v___x_526_, v___x_520_, v___x_558_);
v___x_560_ = l_Lean_Syntax_node2(v___x_470_, v___x_511_, v___x_525_, v___x_559_);
v___x_561_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__69));
v___x_562_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__70));
v___x_563_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_563_, 0, v___x_470_);
lean_ctor_set(v___x_563_, 1, v___x_562_);
v___x_564_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__72, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__72_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__72);
v___x_565_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__73));
v___x_566_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_566_, 0, v___x_470_);
lean_ctor_set(v___x_566_, 1, v___x_564_);
lean_ctor_set(v___x_566_, 2, v___x_565_);
lean_ctor_set(v___x_566_, 3, v___x_508_);
v___x_567_ = l_Lean_Syntax_node3(v___x_470_, v___x_529_, v___x_538_, v___x_566_, v___x_544_);
v___x_568_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__76));
v___x_569_ = l_Lean_Syntax_node2(v___x_470_, v___x_568_, v___x_479_, v___x_479_);
v___x_570_ = l_Lean_Syntax_node4(v___x_470_, v___x_561_, v___x_563_, v___x_567_, v___x_569_, v___x_479_);
lean_inc_n(v___x_570_, 6);
lean_inc_ref_n(v___x_504_, 6);
v___x_571_ = l_Lean_Syntax_node4(v___x_470_, v___x_503_, v___x_504_, v___x_510_, v___x_560_, v___x_570_);
lean_inc_n(v___x_501_, 6);
v___x_572_ = l_Lean_Syntax_node2(v___x_470_, v___x_476_, v___x_501_, v___x_571_);
v___x_573_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__78, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__78_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__78);
v___x_574_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__79));
v___x_575_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_575_, 0, v___x_470_);
lean_ctor_set(v___x_575_, 1, v___x_573_);
lean_ctor_set(v___x_575_, 2, v___x_574_);
lean_ctor_set(v___x_575_, 3, v___x_508_);
v___x_576_ = l_Lean_Syntax_node2(v___x_470_, v___x_505_, v___x_575_, v___x_479_);
v___x_577_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__81));
v___x_578_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__83, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__83_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__83);
v___x_579_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__84));
v___x_580_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_580_, 0, v___x_470_);
lean_ctor_set(v___x_580_, 1, v___x_578_);
lean_ctor_set(v___x_580_, 2, v___x_579_);
lean_ctor_set(v___x_580_, 3, v___x_508_);
lean_inc_ref_n(v___x_580_, 5);
v___x_581_ = l_Lean_Syntax_node2(v___x_470_, v___x_471_, v___x_517_, v___x_580_);
v___x_582_ = l_Lean_Syntax_node5(v___x_470_, v___x_577_, v___x_532_, v___x_581_, v___x_521_, v___x_479_, v___x_544_);
v___x_583_ = l_Lean_Syntax_node1(v___x_470_, v___x_471_, v___x_582_);
v___x_584_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__86));
v___x_585_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__87));
v___x_586_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_470_);
lean_ctor_set(v___x_586_, 1, v___x_585_);
lean_inc_ref(v___x_586_);
v___x_587_ = l_Lean_Syntax_node3(v___x_470_, v___x_584_, v___x_517_, v___x_586_, v___x_580_);
v___x_588_ = l_Lean_Syntax_node3(v___x_470_, v___x_529_, v___x_538_, v___x_587_, v___x_544_);
v___x_589_ = l_Lean_Syntax_node3(v___x_470_, v___x_528_, v___x_588_, v___x_547_, v___x_550_);
v___x_590_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__89, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__89_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__89);
v___x_591_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__90));
v___x_592_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_592_, 0, v___x_470_);
lean_ctor_set(v___x_592_, 1, v___x_590_);
lean_ctor_set(v___x_592_, 2, v___x_591_);
lean_ctor_set(v___x_592_, 3, v___x_508_);
lean_inc_ref_n(v___x_592_, 2);
v___x_593_ = l_Lean_Syntax_node3(v___x_470_, v___x_584_, v___x_556_, v___x_586_, v___x_592_);
v___x_594_ = l_Lean_Syntax_node3(v___x_470_, v___x_527_, v___x_589_, v___x_553_, v___x_593_);
v___x_595_ = l_Lean_Syntax_node2(v___x_470_, v___x_526_, v___x_520_, v___x_594_);
lean_inc_n(v___x_583_, 4);
v___x_596_ = l_Lean_Syntax_node2(v___x_470_, v___x_511_, v___x_583_, v___x_595_);
v___x_597_ = l_Lean_Syntax_node4(v___x_470_, v___x_503_, v___x_504_, v___x_576_, v___x_596_, v___x_570_);
v___x_598_ = l_Lean_Syntax_node2(v___x_470_, v___x_476_, v___x_501_, v___x_597_);
v___x_599_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__92, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__92_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__92);
v___x_600_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__93));
v___x_601_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_601_, 0, v___x_470_);
lean_ctor_set(v___x_601_, 1, v___x_599_);
lean_ctor_set(v___x_601_, 2, v___x_600_);
lean_ctor_set(v___x_601_, 3, v___x_508_);
v___x_602_ = l_Lean_Syntax_node2(v___x_470_, v___x_505_, v___x_601_, v___x_479_);
v___x_603_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__95));
v___x_604_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__96));
v___x_605_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_470_);
lean_ctor_set(v___x_605_, 1, v___x_604_);
lean_inc_ref(v___x_605_);
v___x_606_ = l_Lean_Syntax_node3(v___x_470_, v___x_603_, v___x_517_, v___x_605_, v___x_580_);
v___x_607_ = l_Lean_Syntax_node3(v___x_470_, v___x_529_, v___x_538_, v___x_606_, v___x_544_);
v___x_608_ = l_Lean_Syntax_node3(v___x_470_, v___x_528_, v___x_607_, v___x_547_, v___x_550_);
v___x_609_ = l_Lean_Syntax_node3(v___x_470_, v___x_603_, v___x_556_, v___x_605_, v___x_592_);
v___x_610_ = l_Lean_Syntax_node3(v___x_470_, v___x_527_, v___x_608_, v___x_553_, v___x_609_);
v___x_611_ = l_Lean_Syntax_node2(v___x_470_, v___x_526_, v___x_520_, v___x_610_);
v___x_612_ = l_Lean_Syntax_node2(v___x_470_, v___x_511_, v___x_583_, v___x_611_);
v___x_613_ = l_Lean_Syntax_node4(v___x_470_, v___x_503_, v___x_504_, v___x_602_, v___x_612_, v___x_570_);
v___x_614_ = l_Lean_Syntax_node2(v___x_470_, v___x_476_, v___x_501_, v___x_613_);
v___x_615_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__98, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__98_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__98);
v___x_616_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__99));
v___x_617_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_617_, 0, v___x_470_);
lean_ctor_set(v___x_617_, 1, v___x_615_);
lean_ctor_set(v___x_617_, 2, v___x_616_);
lean_ctor_set(v___x_617_, 3, v___x_508_);
v___x_618_ = l_Lean_Syntax_node2(v___x_470_, v___x_505_, v___x_617_, v___x_479_);
v___x_619_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__101));
v___x_620_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__102));
v___x_621_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_470_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
lean_inc_ref(v___x_621_);
v___x_622_ = l_Lean_Syntax_node3(v___x_470_, v___x_619_, v___x_517_, v___x_621_, v___x_580_);
v___x_623_ = l_Lean_Syntax_node3(v___x_470_, v___x_529_, v___x_538_, v___x_622_, v___x_544_);
v___x_624_ = l_Lean_Syntax_node3(v___x_470_, v___x_528_, v___x_623_, v___x_547_, v___x_550_);
v___x_625_ = l_Lean_Syntax_node3(v___x_470_, v___x_619_, v___x_556_, v___x_621_, v___x_592_);
v___x_626_ = l_Lean_Syntax_node3(v___x_470_, v___x_527_, v___x_624_, v___x_553_, v___x_625_);
v___x_627_ = l_Lean_Syntax_node2(v___x_470_, v___x_526_, v___x_520_, v___x_626_);
v___x_628_ = l_Lean_Syntax_node2(v___x_470_, v___x_511_, v___x_583_, v___x_627_);
v___x_629_ = l_Lean_Syntax_node4(v___x_470_, v___x_503_, v___x_504_, v___x_618_, v___x_628_, v___x_570_);
v___x_630_ = l_Lean_Syntax_node2(v___x_470_, v___x_476_, v___x_501_, v___x_629_);
v___x_631_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__104, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__104_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__104);
v___x_632_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__105));
v___x_633_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_633_, 0, v___x_470_);
lean_ctor_set(v___x_633_, 1, v___x_631_);
lean_ctor_set(v___x_633_, 2, v___x_632_);
lean_ctor_set(v___x_633_, 3, v___x_508_);
v___x_634_ = l_Lean_Syntax_node2(v___x_470_, v___x_505_, v___x_633_, v___x_479_);
v___x_635_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__107));
v___x_636_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__108));
v___x_637_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_470_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
lean_inc_ref(v___x_637_);
v___x_638_ = l_Lean_Syntax_node3(v___x_470_, v___x_635_, v___x_517_, v___x_637_, v___x_580_);
v___x_639_ = l_Lean_Syntax_node3(v___x_470_, v___x_529_, v___x_538_, v___x_638_, v___x_544_);
v___x_640_ = l_Lean_Syntax_node3(v___x_470_, v___x_528_, v___x_639_, v___x_547_, v___x_550_);
v___x_641_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__110));
v___x_642_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__112, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__112_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__112);
v___x_643_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__114));
v___x_644_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_644_, 0, v___x_470_);
lean_ctor_set(v___x_644_, 1, v___x_642_);
lean_ctor_set(v___x_644_, 2, v___x_643_);
lean_ctor_set(v___x_644_, 3, v___x_508_);
v___x_645_ = l_Lean_Syntax_node1(v___x_470_, v___x_471_, v___x_465_);
v___x_646_ = l_Lean_Syntax_node2(v___x_470_, v___x_641_, v___x_644_, v___x_645_);
v___x_647_ = l_Lean_Syntax_node3(v___x_470_, v___x_529_, v___x_538_, v___x_646_, v___x_544_);
lean_inc(v___x_647_);
v___x_648_ = l_Lean_Syntax_node3(v___x_470_, v___x_635_, v___x_556_, v___x_637_, v___x_647_);
v___x_649_ = l_Lean_Syntax_node3(v___x_470_, v___x_527_, v___x_640_, v___x_553_, v___x_648_);
v___x_650_ = l_Lean_Syntax_node2(v___x_470_, v___x_526_, v___x_520_, v___x_649_);
v___x_651_ = l_Lean_Syntax_node2(v___x_470_, v___x_511_, v___x_583_, v___x_650_);
v___x_652_ = l_Lean_Syntax_node4(v___x_470_, v___x_503_, v___x_504_, v___x_634_, v___x_651_, v___x_570_);
v___x_653_ = l_Lean_Syntax_node2(v___x_470_, v___x_476_, v___x_501_, v___x_652_);
v___x_654_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__116, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__116_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__116);
v___x_655_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__117));
v___x_656_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_656_, 0, v___x_470_);
lean_ctor_set(v___x_656_, 1, v___x_654_);
lean_ctor_set(v___x_656_, 2, v___x_655_);
lean_ctor_set(v___x_656_, 3, v___x_508_);
v___x_657_ = l_Lean_Syntax_node2(v___x_470_, v___x_505_, v___x_656_, v___x_479_);
v___x_658_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__119));
v___x_659_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__120));
v___x_660_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_470_);
lean_ctor_set(v___x_660_, 1, v___x_659_);
v___x_661_ = l_Lean_Syntax_node3(v___x_470_, v___x_658_, v___x_517_, v___x_660_, v___x_580_);
v___x_662_ = l_Lean_Syntax_node3(v___x_470_, v___x_529_, v___x_538_, v___x_661_, v___x_544_);
v___x_663_ = l_Lean_Syntax_node3(v___x_470_, v___x_528_, v___x_662_, v___x_547_, v___x_550_);
v___x_664_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__122, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__122_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__122);
v___x_665_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__124));
v___x_666_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_666_, 0, v___x_470_);
lean_ctor_set(v___x_666_, 1, v___x_664_);
lean_ctor_set(v___x_666_, 2, v___x_665_);
lean_ctor_set(v___x_666_, 3, v___x_508_);
v___x_667_ = l_Lean_Syntax_node1(v___x_470_, v___x_471_, v___x_647_);
v___x_668_ = l_Lean_Syntax_node2(v___x_470_, v___x_641_, v___x_666_, v___x_667_);
v___x_669_ = l_Lean_Syntax_node3(v___x_470_, v___x_527_, v___x_663_, v___x_553_, v___x_668_);
v___x_670_ = l_Lean_Syntax_node2(v___x_470_, v___x_526_, v___x_520_, v___x_669_);
v___x_671_ = l_Lean_Syntax_node2(v___x_470_, v___x_511_, v___x_583_, v___x_670_);
v___x_672_ = l_Lean_Syntax_node4(v___x_470_, v___x_503_, v___x_504_, v___x_657_, v___x_671_, v___x_570_);
v___x_673_ = l_Lean_Syntax_node2(v___x_470_, v___x_476_, v___x_501_, v___x_672_);
v___x_674_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__126, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__126_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__126);
v___x_675_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__127));
v___x_676_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_676_, 0, v___x_470_);
lean_ctor_set(v___x_676_, 1, v___x_674_);
lean_ctor_set(v___x_676_, 2, v___x_675_);
lean_ctor_set(v___x_676_, 3, v___x_508_);
v___x_677_ = l_Lean_Syntax_node2(v___x_470_, v___x_505_, v___x_676_, v___x_479_);
v___x_678_ = l_Lean_Syntax_node5(v___x_470_, v___x_577_, v___x_532_, v___x_518_, v___x_521_, v___x_479_, v___x_544_);
v___x_679_ = l_Lean_Syntax_node1(v___x_470_, v___x_471_, v___x_678_);
v___x_680_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__129, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__129_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__129);
v___x_681_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__131));
v___x_682_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_682_, 0, v___x_470_);
lean_ctor_set(v___x_682_, 1, v___x_680_);
lean_ctor_set(v___x_682_, 2, v___x_681_);
lean_ctor_set(v___x_682_, 3, v___x_508_);
v___x_683_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__133, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__133_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__133);
v___x_684_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__134));
v___x_685_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_685_, 0, v___x_470_);
lean_ctor_set(v___x_685_, 1, v___x_683_);
lean_ctor_set(v___x_685_, 2, v___x_684_);
lean_ctor_set(v___x_685_, 3, v___x_508_);
v___x_686_ = l_Lean_Syntax_node3(v___x_470_, v___x_527_, v___x_682_, v___x_553_, v___x_685_);
v___x_687_ = l_Lean_Syntax_node2(v___x_470_, v___x_526_, v___x_520_, v___x_686_);
v___x_688_ = l_Lean_Syntax_node2(v___x_470_, v___x_511_, v___x_679_, v___x_687_);
v___x_689_ = l_Lean_Syntax_node4(v___x_470_, v___x_503_, v___x_504_, v___x_677_, v___x_688_, v___x_570_);
v___x_690_ = l_Lean_Syntax_node2(v___x_470_, v___x_476_, v___x_501_, v___x_689_);
v___x_691_ = l_Lean_Syntax_node8(v___x_470_, v___x_471_, v___x_475_, v___x_572_, v___x_598_, v___x_614_, v___x_630_, v___x_653_, v___x_673_, v___x_690_);
v___x_692_ = l_Lean_Syntax_getArgs(v___x_691_);
lean_dec(v___x_691_);
if (v_isISize_468_ == 0)
{
lean_object* v___x_693_; lean_object* v_a_694_; lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_728_; 
v___x_693_ = l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__0(v_ref_460_, v_a_434_, v_a_435_);
v_a_694_ = lean_ctor_get(v___x_693_, 0);
v_a_695_ = lean_ctor_get(v___x_693_, 1);
v_isSharedCheck_728_ = !lean_is_exclusive(v___x_693_);
if (v_isSharedCheck_728_ == 0)
{
v___x_697_ = v___x_693_;
v_isShared_698_ = v_isSharedCheck_728_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_inc(v_a_694_);
lean_dec(v___x_693_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_728_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
size_t v_sz_699_; size_t v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_707_; 
v_sz_699_ = lean_usize_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__136, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__136_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__136);
v___x_700_ = ((size_t)0ULL);
v___x_701_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__137, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__137_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__137);
v___x_702_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1_spec__0(v___x_466_, v_sz_699_, v___x_700_, v___x_701_);
v___x_703_ = l_unsafeCast___redArg(v___x_702_);
lean_dec_ref(v___x_702_);
v___x_704_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__138));
v___x_705_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__139));
lean_inc(v_a_694_);
if (v_isShared_698_ == 0)
{
lean_ctor_set_tag(v___x_697_, 2);
lean_ctor_set(v___x_697_, 1, v___x_704_);
v___x_707_ = v___x_697_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_a_694_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v___x_704_);
v___x_707_ = v_reuseFailAlloc_727_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_708_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__140));
lean_inc_n(v_a_694_, 9);
v___x_709_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_709_, 0, v_a_694_);
lean_ctor_set(v___x_709_, 1, v___x_708_);
v___x_710_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_710_, 0, v_a_694_);
lean_ctor_set(v___x_710_, 1, v___x_471_);
lean_ctor_set(v___x_710_, 2, v___x_478_);
lean_inc_ref(v___x_710_);
v___x_711_ = l_Lean_Syntax_node1(v_a_694_, v___x_484_, v___x_710_);
v___x_712_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__142));
v___x_713_ = lean_obj_once(&l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__144, &l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__144_once, _init_l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__144);
v___x_714_ = ((lean_object*)(l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___closed__145));
v___x_715_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_715_, 0, v_a_694_);
lean_ctor_set(v___x_715_, 1, v___x_713_);
lean_ctor_set(v___x_715_, 2, v___x_714_);
lean_ctor_set(v___x_715_, 3, v___x_508_);
v___x_716_ = l_Lean_Syntax_node2(v_a_694_, v___x_712_, v___x_715_, v___x_710_);
v___x_717_ = l_Lean_Syntax_node2(v_a_694_, v___x_483_, v___x_711_, v___x_716_);
v___x_718_ = l_Lean_Syntax_node1(v_a_694_, v___x_471_, v___x_717_);
v___x_719_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_719_, 0, v_a_694_);
lean_ctor_set(v___x_719_, 1, v___x_492_);
v___x_720_ = l_unsafeCast___redArg(v___x_703_);
lean_dec(v___x_703_);
v___x_721_ = l_Array_append___redArg(v___x_478_, v___x_720_);
lean_dec(v___x_720_);
v___x_722_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_722_, 0, v_a_694_);
lean_ctor_set(v___x_722_, 1, v___x_471_);
lean_ctor_set(v___x_722_, 2, v___x_721_);
v___x_723_ = l_Lean_Syntax_node5(v_a_694_, v___x_705_, v___x_707_, v___x_709_, v___x_718_, v___x_719_, v___x_722_);
v___x_724_ = lean_array_push(v___x_692_, v___x_723_);
v___x_725_ = lean_box(0);
v___x_726_ = l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1(v___f_461_, v_typeName_463_, v___x_725_, v___x_724_, v_a_434_, v_a_695_);
v___y_437_ = v___x_726_;
goto v___jp_436_;
}
}
}
else
{
lean_object* v___x_729_; lean_object* v___x_730_; 
lean_dec(v___x_466_);
v___x_729_ = lean_box(0);
v___x_730_ = l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___lam__1(v___f_461_, v_typeName_463_, v___x_729_, v___x_692_, v_a_434_, v_a_435_);
v___y_437_ = v___x_730_;
goto v___jp_436_;
}
}
v___jp_436_:
{
if (lean_obj_tag(v___y_437_) == 0)
{
lean_object* v_a_438_; lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_446_; 
v_a_438_ = lean_ctor_get(v___y_437_, 0);
v_a_439_ = lean_ctor_get(v___y_437_, 1);
v_isSharedCheck_446_ = !lean_is_exclusive(v___y_437_);
if (v_isSharedCheck_446_ == 0)
{
v___x_441_ = v___y_437_;
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_inc(v_a_438_);
lean_dec(v___y_437_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_444_; 
if (v_isShared_442_ == 0)
{
v___x_444_ = v___x_441_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_a_438_);
lean_ctor_set(v_reuseFailAlloc_445_, 1, v_a_439_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
else
{
lean_object* v_a_447_; lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
v_a_447_ = lean_ctor_get(v___y_437_, 0);
v_a_448_ = lean_ctor_get(v___y_437_, 1);
v_isSharedCheck_455_ = !lean_is_exclusive(v___y_437_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v___y_437_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_inc(v_a_447_);
lean_dec(v___y_437_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_447_);
lean_ctor_set(v_reuseFailAlloc_454_, 1, v_a_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1___boxed(lean_object* v_x_731_, lean_object* v_a_732_, lean_object* v_a_733_){
_start:
{
lean_object* v_res_734_; 
v_res_734_ = l___aux__Init__Data__SInt__Bitwise______macroRules__commandDeclare__bitwise__int__theorems______1(v_x_731_, v_a_732_, v_a_733_);
lean_dec_ref(v_a_732_);
return v_res_734_;
}
}
lean_object* runtime_initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_BitVec_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_BitVec_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_SInt_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_SInt_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Ext(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_BitVec_Bitblast(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_SInt_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_SInt_Bitwise(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_BitVec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_BitVec_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_SInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_SInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_BitVec_Bitblast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_SInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_SInt_Bitwise(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_BitVec_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_BitVec_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_SInt_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_SInt_Basic(uint8_t builtin);
lean_object* initialize_Init_Ext(uint8_t builtin);
lean_object* initialize_Init_Data_BitVec_Bitblast(uint8_t builtin);
lean_object* initialize_Init_Data_SInt_Lemmas(uint8_t builtin);
lean_object* initialize_Init_System_Platform(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_SInt_Bitwise(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_BitVec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_BitVec_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_SInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_SInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_BitVec_Bitblast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_SInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_SInt_Bitwise(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_SInt_Bitwise(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_SInt_Bitwise(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Init.Data.SInt.Lemmas
// Imports: import all Init.Data.Nat.Bitwise.Basic public import Init.Data.SInt.Basic import all Init.Data.SInt.Basic import all Init.Data.BitVec.Basic import all Init.Data.UInt.Basic public import Init.Data.BitVec.Lemmas public import Init.Data.Int.Order import Init.ByCases import Init.Data.BitVec.Bitblast import Init.Data.BitVec.Bootstrap import Init.Data.Int.DivMod.Lemmas import Init.Data.Int.LemmasAux import Init.Data.Int.Pow import Init.Data.UInt.Lemmas import Init.System.Platform
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
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
static const lean_string_object l_commandDeclare__int__theorems_____00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "commandDeclare_int_theorems__"};
static const lean_object* l_commandDeclare__int__theorems_____00__closed__0 = (const lean_object*)&l_commandDeclare__int__theorems_____00__closed__0_value;
static const lean_ctor_object l_commandDeclare__int__theorems_____00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_commandDeclare__int__theorems_____00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 239, 52, 0, 96, 209, 11, 62)}};
static const lean_object* l_commandDeclare__int__theorems_____00__closed__1 = (const lean_object*)&l_commandDeclare__int__theorems_____00__closed__1_value;
static const lean_string_object l_commandDeclare__int__theorems_____00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_commandDeclare__int__theorems_____00__closed__2 = (const lean_object*)&l_commandDeclare__int__theorems_____00__closed__2_value;
static const lean_ctor_object l_commandDeclare__int__theorems_____00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_commandDeclare__int__theorems_____00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_commandDeclare__int__theorems_____00__closed__3 = (const lean_object*)&l_commandDeclare__int__theorems_____00__closed__3_value;
static const lean_string_object l_commandDeclare__int__theorems_____00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "declare_int_theorems"};
static const lean_object* l_commandDeclare__int__theorems_____00__closed__4 = (const lean_object*)&l_commandDeclare__int__theorems_____00__closed__4_value;
static const lean_ctor_object l_commandDeclare__int__theorems_____00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_commandDeclare__int__theorems_____00__closed__4_value)}};
static const lean_object* l_commandDeclare__int__theorems_____00__closed__5 = (const lean_object*)&l_commandDeclare__int__theorems_____00__closed__5_value;
static const lean_string_object l_commandDeclare__int__theorems_____00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_commandDeclare__int__theorems_____00__closed__6 = (const lean_object*)&l_commandDeclare__int__theorems_____00__closed__6_value;
static const lean_ctor_object l_commandDeclare__int__theorems_____00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_commandDeclare__int__theorems_____00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_commandDeclare__int__theorems_____00__closed__7 = (const lean_object*)&l_commandDeclare__int__theorems_____00__closed__7_value;
static const lean_ctor_object l_commandDeclare__int__theorems_____00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_commandDeclare__int__theorems_____00__closed__7_value)}};
static const lean_object* l_commandDeclare__int__theorems_____00__closed__8 = (const lean_object*)&l_commandDeclare__int__theorems_____00__closed__8_value;
static const lean_ctor_object l_commandDeclare__int__theorems_____00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_commandDeclare__int__theorems_____00__closed__3_value),((lean_object*)&l_commandDeclare__int__theorems_____00__closed__5_value),((lean_object*)&l_commandDeclare__int__theorems_____00__closed__8_value)}};
static const lean_object* l_commandDeclare__int__theorems_____00__closed__9 = (const lean_object*)&l_commandDeclare__int__theorems_____00__closed__9_value;
static const lean_string_object l_commandDeclare__int__theorems_____00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_commandDeclare__int__theorems_____00__closed__10 = (const lean_object*)&l_commandDeclare__int__theorems_____00__closed__10_value;
static const lean_ctor_object l_commandDeclare__int__theorems_____00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_commandDeclare__int__theorems_____00__closed__10_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_commandDeclare__int__theorems_____00__closed__11 = (const lean_object*)&l_commandDeclare__int__theorems_____00__closed__11_value;
static const lean_ctor_object l_commandDeclare__int__theorems_____00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_commandDeclare__int__theorems_____00__closed__11_value),((lean_object*)(((size_t)(1023) << 1) | 1))}};
static const lean_object* l_commandDeclare__int__theorems_____00__closed__12 = (const lean_object*)&l_commandDeclare__int__theorems_____00__closed__12_value;
static const lean_ctor_object l_commandDeclare__int__theorems_____00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_commandDeclare__int__theorems_____00__closed__3_value),((lean_object*)&l_commandDeclare__int__theorems_____00__closed__9_value),((lean_object*)&l_commandDeclare__int__theorems_____00__closed__12_value)}};
static const lean_object* l_commandDeclare__int__theorems_____00__closed__13 = (const lean_object*)&l_commandDeclare__int__theorems_____00__closed__13_value;
static const lean_ctor_object l_commandDeclare__int__theorems_____00__closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_commandDeclare__int__theorems_____00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_commandDeclare__int__theorems_____00__closed__13_value)}};
static const lean_object* l_commandDeclare__int__theorems_____00__closed__14 = (const lean_object*)&l_commandDeclare__int__theorems_____00__closed__14_value;
LEAN_EXPORT const lean_object* l_commandDeclare__int__theorems____ = (const lean_object*)&l_commandDeclare__int__theorems_____00__closed__14_value;
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__2 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__2_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__3 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__3_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__4_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__4_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__4_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(254, 132, 206, 38, 133, 164, 145, 139)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__4 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__4_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__5 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__5_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__6 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__6_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__7;
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__0 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__0_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ISize"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__1 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__1_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(110, 52, 237, 35, 121, 142, 86, 222)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__2 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__2_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namespace"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__3 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__3_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__4_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__4_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__4_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(84, 17, 124, 142, 243, 161, 231, 243)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__4 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__4_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__5 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__5_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__6_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__6_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__6_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__6 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__6_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__7 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__7_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__8_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__8_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__8_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__8 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__8_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "theorem"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__9 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__9_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__10_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__10_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__10_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(238, 116, 137, 74, 194, 103, 58, 54)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__10 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__10_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__11 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__11_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__12_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__12_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__12_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__12 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__12_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "le_iff_toBitVec_sle"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__13 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__13_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__14;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(224, 98, 156, 243, 176, 144, 13, 23)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__15 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__15_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__16 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__16_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__17_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__17_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__17_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(22, 101, 130, 251, 183, 19, 113, 82)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__17 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__17_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "implicitBinder"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__19 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__19_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__20_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__20_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__20_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(39, 181, 62, 102, 86, 14, 161, 96)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__20 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__20_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__21 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__21_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__22 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__22_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__23;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__24 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__24_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__25 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__25_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__26;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(47, 22, 244, 233, 226, 169, 241, 142)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__27 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__27_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__28 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__28_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__29 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__29_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__30 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__30_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__31_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__31_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__31_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__31 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__31_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_↔_"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__32 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__32_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(220, 124, 41, 198, 228, 162, 237, 244)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__33 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__33_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_≤_"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__34 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__34_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(111, 3, 61, 112, 38, 138, 106, 121)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__35 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__35_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "≤"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__36 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__36_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "↔"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__37 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__37_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__38 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__38_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__39_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__39_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__39_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__38_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__39 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__39_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "a.toBitVec.sle"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__40 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__40_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__41;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toBitVec"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__42 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__42_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sle"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__43 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__43_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__44_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__44_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__42_value),LEAN_SCALAR_PTR_LITERAL(238, 90, 95, 221, 27, 118, 9, 223)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__44_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__43_value),LEAN_SCALAR_PTR_LITERAL(229, 214, 5, 189, 16, 107, 180, 166)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__44 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__44_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "b.toBitVec"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__45 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__45_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__46;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(47, 22, 244, 233, 226, 169, 241, 142)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__47_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__42_value),LEAN_SCALAR_PTR_LITERAL(6, 235, 47, 200, 31, 68, 206, 165)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__47 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__47_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__48 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__48_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__49_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__49_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__49_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__48_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__49 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__49_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__50 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__50_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Iff.rfl"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__51 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__51_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__52;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__53 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__53_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rfl"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__54 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__54_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__55_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__53_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__55_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__54_value),LEAN_SCALAR_PTR_LITERAL(197, 85, 193, 93, 217, 248, 54, 49)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__55 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__55_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__56 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__56_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__57 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__57_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__58_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__58_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__56_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__58_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__57_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__58 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__58_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "lt_iff_toBitVec_slt"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__59 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__59_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__60;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__59_value),LEAN_SCALAR_PTR_LITERAL(7, 125, 217, 200, 188, 3, 210, 9)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__61 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__61_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_<_"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__62 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__62_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__62_value),LEAN_SCALAR_PTR_LITERAL(192, 242, 106, 74, 199, 131, 133, 95)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__63 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__63_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "<"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__64 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__64_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "a.toBitVec.slt"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__65 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__65_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__66;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "slt"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__67 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__67_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__68_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__68_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__68_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__42_value),LEAN_SCALAR_PTR_LITERAL(238, 90, 95, 221, 27, 118, 9, 223)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__68_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__67_value),LEAN_SCALAR_PTR_LITERAL(216, 157, 226, 89, 27, 108, 130, 144)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__68 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__68_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toBitVec_inj"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__69 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__69_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__70_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__70;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__69_value),LEAN_SCALAR_PTR_LITERAL(89, 245, 252, 212, 180, 248, 61, 129)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__71 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__71_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_=_"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__72 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__72_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__72_value),LEAN_SCALAR_PTR_LITERAL(167, 251, 107, 62, 223, 239, 203, 78)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__73 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__73_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "a.toBitVec"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__74 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__74_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__75_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__75;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__76_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__76_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__42_value),LEAN_SCALAR_PTR_LITERAL(238, 90, 95, 221, 27, 118, 9, 223)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__76 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__76_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__77 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__77_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "anonymousCtor"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__78 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__78_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__79_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__79_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__79_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__79_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__79_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__79_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__78_value),LEAN_SCALAR_PTR_LITERAL(56, 53, 154, 97, 179, 232, 94, 186)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__79 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__79_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__80 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__80_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toBitVec.inj"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__81 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__81_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__82_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__82;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inj"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__83 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__83_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__84_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__42_value),LEAN_SCALAR_PTR_LITERAL(130, 88, 94, 113, 144, 209, 170, 121)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__84_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__83_value),LEAN_SCALAR_PTR_LITERAL(3, 10, 226, 202, 47, 118, 47, 253)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__84 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__84_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__85 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__85_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__86 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__86_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__87_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__87_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__87_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__87_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__87_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__87_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__86_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__87 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__87_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__88 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__88_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__89_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__89_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__89_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__89_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__89_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__89_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__88_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__89 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__89_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__90 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__90_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__91 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__91_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__91_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__92 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__92_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__93 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__93_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__94_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__94;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__95_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__95;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "subst"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__96 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__96_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__97_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__97_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__97_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__97_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__97_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__97_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__96_value),LEAN_SCALAR_PTR_LITERAL(169, 13, 108, 115, 152, 155, 29, 181)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__97 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__97_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cdot"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__98 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__98_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__99_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__99_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__99_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__99_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__99_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__99_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__98_value),LEAN_SCALAR_PTR_LITERAL(215, 94, 65, 66, 49, 100, 151, 85)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__99 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__99_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "·"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__100 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__100_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "▸"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__101 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__101_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__102_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__102;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__54_value),LEAN_SCALAR_PTR_LITERAL(77, 42, 253, 71, 61, 132, 173, 240)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__103 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__103_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__104 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__104_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__105 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__105_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ofBitVec_inj"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__106 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__106_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__107_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__107;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__106_value),LEAN_SCALAR_PTR_LITERAL(221, 185, 57, 244, 153, 117, 189, 185)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__108 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__108_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__109 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__109_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__110_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__110;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__111_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__109_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__111 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__111_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__112_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ofBitVec"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__112 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__112_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__113_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__113;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__114_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__112_value),LEAN_SCALAR_PTR_LITERAL(109, 13, 70, 115, 31, 141, 156, 173)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__114 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__114_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__115_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__115 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__115_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__116_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__116_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__116_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__116_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__116_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__116_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__116_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__115_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__116 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__116_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "by"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__117 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__117_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__118_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__118 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__118_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__119_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__119 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__119_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__120_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__120_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__120_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__120_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__120_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__118_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__120_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__120_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__119_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__120 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__120_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__121 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__121_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__122_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__122_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__122_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__122_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__122_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__118_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__122_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__122_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__121_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__122 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__122_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__123_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tactic_<;>_"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__123 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__123_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__124_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__124_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__124_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__124_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__124_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__118_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__124_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__124_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__123_value),LEAN_SCALAR_PTR_LITERAL(31, 118, 44, 159, 195, 11, 47, 176)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__124 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__124_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__125_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "apply"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__125 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__125_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__126_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__126_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__126_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__126_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__126_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__118_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__126_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__126_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__125_value),LEAN_SCALAR_PTR_LITERAL(202, 125, 237, 78, 179, 140, 218, 80)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__126 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__126_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__127_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Iff.intro"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__127 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__127_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__128_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__128;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__129_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__129 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__129_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__130_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__53_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__130_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__130_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__129_value),LEAN_SCALAR_PTR_LITERAL(176, 155, 85, 49, 105, 137, 67, 168)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__130 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__130_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__131_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "<;>"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__131 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__131_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__132_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__132_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__132_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__132_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__132_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__118_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__132_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__132_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__86_value),LEAN_SCALAR_PTR_LITERAL(117, 253, 122, 28, 77, 248, 149, 120)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__132 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__132_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__133_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rintro"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__133 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__133_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__134_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__134_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__134_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__134_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__134_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__118_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__134_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__134_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__133_value),LEAN_SCALAR_PTR_LITERAL(170, 254, 242, 235, 94, 162, 254, 146)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__134 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__134_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__135_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "rintroPat"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__135 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__135_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__136_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "one"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__136 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__136_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__137_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__137_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__137_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__137_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__137_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__118_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__137_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__137_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__135_value),LEAN_SCALAR_PTR_LITERAL(120, 93, 179, 129, 121, 199, 215, 253)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__137_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__137_value_aux_3),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__136_value),LEAN_SCALAR_PTR_LITERAL(40, 214, 202, 122, 59, 249, 35, 61)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__137 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__137_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__138_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "rcasesPat"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__138 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__138_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__139_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__139_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__139_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__139_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__139_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__118_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__139_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__139_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__138_value),LEAN_SCALAR_PTR_LITERAL(162, 181, 165, 225, 136, 177, 169, 19)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__139_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__139_value_aux_3),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__136_value),LEAN_SCALAR_PTR_LITERAL(186, 152, 172, 228, 11, 240, 156, 168)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__139 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__139_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__140_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__140 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__140_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__141_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__141;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__142_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__140_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__142 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__142_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__143_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__143 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__143_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__144_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "cases"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__144 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__144_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__145_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__145_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__145_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__145_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__145_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__118_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__145_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__145_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__144_value),LEAN_SCALAR_PTR_LITERAL(197, 49, 98, 208, 150, 151, 163, 74)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__145 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__145_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__146_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elimTarget"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__146 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__146_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__147_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__147_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__147_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__147_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__147_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__118_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__147_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__147_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__146_value),LEAN_SCALAR_PTR_LITERAL(136, 63, 46, 91, 99, 29, 205, 171)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__147 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__147_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__148_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticRfl"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__148 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__148_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__149_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__149_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__149_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__149_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__149_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__118_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__149_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__149_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__148_value),LEAN_SCALAR_PTR_LITERAL(201, 188, 173, 198, 169, 252, 183, 45)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__149 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__149_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__150_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "eq_iff_ofBitVec_eq"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__150 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__150_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__151_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__151;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__152_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__150_value),LEAN_SCALAR_PTR_LITERAL(204, 182, 120, 87, 208, 6, 5, 44)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__152 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__152_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__153_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ofBitVec_inj.symm"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__153 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__153_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__154_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__154;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__155_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "symm"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__155 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__155_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__156_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__106_value),LEAN_SCALAR_PTR_LITERAL(221, 185, 57, 244, 153, 117, 189, 185)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__156_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__156_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__155_value),LEAN_SCALAR_PTR_LITERAL(22, 209, 90, 41, 119, 255, 106, 147)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__156 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__156_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__157_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ne_iff_ofBitVec_ne"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__157 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__157_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__158_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__158;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__159_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__157_value),LEAN_SCALAR_PTR_LITERAL(177, 124, 199, 96, 100, 166, 4, 189)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__159 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__159_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__160_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_≠_"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__160 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__160_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__161_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__160_value),LEAN_SCALAR_PTR_LITERAL(120, 22, 203, 44, 60, 124, 87, 95)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__161 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__161_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__162_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "≠"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__162 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__162_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__163_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__163 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__163_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__164_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__164_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__164_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__164_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__164_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__118_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__164_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__164_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__163_value),LEAN_SCALAR_PTR_LITERAL(50, 13, 241, 145, 67, 153, 105, 177)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__164 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__164_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__165_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__165 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__165_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__166_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__166_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__166_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__166_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__166_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__118_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__166_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__166_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__165_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__166 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__166_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__167_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__167 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__167_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__168_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpLemma"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__168 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__168_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__169_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__169_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__169_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__169_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__169_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__118_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__169_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__169_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__168_value),LEAN_SCALAR_PTR_LITERAL(38, 215, 101, 250, 181, 108, 118, 102)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__169 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__169_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__170_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__170 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__170_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__171_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "eq_iff_toBitVec_eq"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__171 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__171_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__172_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__172;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__173_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__171_value),LEAN_SCALAR_PTR_LITERAL(204, 196, 118, 25, 1, 164, 248, 180)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__173 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__173_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__174_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "toBitVec_inj.symm"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__174 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__174_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__175_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__175;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__176_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__69_value),LEAN_SCALAR_PTR_LITERAL(89, 245, 252, 212, 180, 248, 61, 129)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__176_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__176_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__155_value),LEAN_SCALAR_PTR_LITERAL(66, 49, 95, 225, 222, 165, 83, 187)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__176 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__176_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__177_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ne_iff_toBitVec_ne"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__177 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__177_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__178_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__178;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__179_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__177_value),LEAN_SCALAR_PTR_LITERAL(166, 231, 164, 53, 49, 215, 3, 212)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__179 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__179_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__180_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__180 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__180_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__181_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__181_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__181_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__181_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__181_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__181_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__181_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__180_value),LEAN_SCALAR_PTR_LITERAL(103, 149, 207, 196, 17, 4, 77, 74)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__181 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__181_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__182_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Decidable.not_iff_not"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__182 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__182_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__183_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__183;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__184_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__184 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__184_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__185_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "not_iff_not"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__185 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__185_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__186_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__184_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__186_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__186_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__185_value),LEAN_SCALAR_PTR_LITERAL(72, 176, 176, 135, 176, 196, 69, 82)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__186 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__186_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__187_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__187 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__187_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__188_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fieldIdx"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__188 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__188_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__189_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__188_value),LEAN_SCALAR_PTR_LITERAL(243, 141, 165, 29, 238, 211, 61, 163)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__189 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__189_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__190_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "2"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__190 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__190_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__191_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__191 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__191_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__192_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__192_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__192_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__192_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__192_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__192_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__192_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__191_value),LEAN_SCALAR_PTR_LITERAL(66, 184, 196, 169, 25, 125, 40, 35)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__192 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__192_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__193_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__193 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__193_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__194_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__194 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__194_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__195_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__195_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__195_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__195_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__195_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__195_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__195_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__194_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__195 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__195_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__196_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__196 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__196_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__197_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__197_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__197_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__197_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__197_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__197_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__197_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__196_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__197 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__197_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__198_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__198 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__198_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__199_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__199_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__199_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__199_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__199_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__198_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__199_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__199_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__163_value),LEAN_SCALAR_PTR_LITERAL(167, 64, 108, 103, 216, 152, 33, 14)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__199 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__199_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__200_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "toBitVec_ofNat'"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__200 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__200_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__201_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__201;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__202_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__200_value),LEAN_SCALAR_PTR_LITERAL(16, 207, 149, 240, 11, 231, 225, 30)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__202 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__202_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__203_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "n"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__203 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__203_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__204_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__204;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__205_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__203_value),LEAN_SCALAR_PTR_LITERAL(85, 67, 188, 79, 172, 243, 130, 138)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__205 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__205_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__206_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__206 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__206_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__207_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__207;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__208_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__206_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__208 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__208_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__209_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__209;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__210_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__42_value),LEAN_SCALAR_PTR_LITERAL(130, 88, 94, 113, 144, 209, 170, 121)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__210 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__210_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__211_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__211 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__211_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__212_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__212;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__213_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__211_value),LEAN_SCALAR_PTR_LITERAL(190, 214, 116, 82, 37, 136, 167, 32)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__213 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__213_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__214_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "BitVec.ofNat"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__214 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__214_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__215_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__215;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__216_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__109_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__216_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__216_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__211_value),LEAN_SCALAR_PTR_LITERAL(101, 105, 192, 171, 214, 131, 43, 105)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__216 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__216_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__217_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__217 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__217_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__218_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__218_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__218_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__218_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__218_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__218_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__218_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__217_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__218 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__218_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__219_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__219 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__219_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__220_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "toBitVec_ofNat"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__220 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__220_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__221_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__221;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__222_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__220_value),LEAN_SCALAR_PTR_LITERAL(48, 40, 156, 211, 194, 107, 54, 55)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__222 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__222_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__223_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "noindex"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__223 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__223_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__224_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__224_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__224_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__224_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__224_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__224_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__224_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__223_value),LEAN_SCALAR_PTR_LITERAL(0, 143, 63, 201, 38, 174, 32, 127)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__224 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__224_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__225_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "no_index"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__225 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__225_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__226_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "OfNat.ofNat"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__226 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__226_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__227_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__227;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__228_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__228 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__228_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__229_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__228_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__229_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__229_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__211_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__229 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__229_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__230_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "protected"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__230 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__230_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__231_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__231_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__231_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__231_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__231_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__231_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__231_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__230_value),LEAN_SCALAR_PTR_LITERAL(33, 80, 123, 180, 50, 194, 119, 199)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__231 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__231_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__232_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toBitVec_add"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__232 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__232_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__233_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__233;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__234_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__232_value),LEAN_SCALAR_PTR_LITERAL(54, 148, 186, 80, 123, 86, 181, 153)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__234 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__234_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__235_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_+_"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__235 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__235_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__236_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__235_value),LEAN_SCALAR_PTR_LITERAL(57, 160, 89, 154, 247, 230, 95, 119)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__236 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__236_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__237_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__237 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__237_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__238_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toBitVec_sub"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__238 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__238_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__239_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__239;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__240_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__238_value),LEAN_SCALAR_PTR_LITERAL(11, 9, 230, 95, 126, 235, 121, 31)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__240 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__240_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__241_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_-_"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__241 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__241_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__242_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__241_value),LEAN_SCALAR_PTR_LITERAL(92, 98, 183, 241, 65, 154, 192, 109)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__242 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__242_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__243_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__243 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__243_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__244_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toBitVec_mul"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__244 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__244_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__245_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__245;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__246_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__244_value),LEAN_SCALAR_PTR_LITERAL(78, 183, 160, 166, 105, 95, 150, 56)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__246 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__246_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__247_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_*_"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__247 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__247_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__248_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__247_value),LEAN_SCALAR_PTR_LITERAL(166, 30, 182, 203, 156, 152, 64, 201)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__248 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__248_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__249_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__249 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__249_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__250_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toBitVec_div"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__250 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__250_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__251_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__251;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__252_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__250_value),LEAN_SCALAR_PTR_LITERAL(237, 243, 123, 229, 238, 121, 75, 82)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__252 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__252_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__253_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_/_"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__253 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__253_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__254_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__253_value),LEAN_SCALAR_PTR_LITERAL(210, 175, 43, 55, 191, 201, 132, 176)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__254 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__254_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__255_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__255 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__255_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__256_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "a.toBitVec.sdiv"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__256 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__256_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__257_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__257;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__258_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sdiv"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__258 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__258_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__259_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__259_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__259_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__42_value),LEAN_SCALAR_PTR_LITERAL(238, 90, 95, 221, 27, 118, 9, 223)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__259_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__259_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__258_value),LEAN_SCALAR_PTR_LITERAL(12, 106, 63, 230, 239, 115, 94, 188)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__259 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__259_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__260_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toBitVec_mod"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__260 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__260_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__261_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__261;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__262_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__260_value),LEAN_SCALAR_PTR_LITERAL(128, 222, 30, 228, 150, 168, 215, 197)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__262 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__262_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__263_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_%_"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__263 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__263_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__264_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__263_value),LEAN_SCALAR_PTR_LITERAL(223, 214, 140, 105, 32, 178, 232, 218)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__264 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__264_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__265_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "%"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__265 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__265_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__266_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "a.toBitVec.srem"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__266 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__266_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__267_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__267;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__268_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "srem"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__268 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__268_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__269_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__269_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__269_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__42_value),LEAN_SCALAR_PTR_LITERAL(238, 90, 95, 221, 27, 118, 9, 223)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__269_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__269_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__268_value),LEAN_SCALAR_PTR_LITERAL(106, 212, 48, 197, 204, 217, 39, 75)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__269 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__269_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__270_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "min_def"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__270 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__270_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__271_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__271;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__272_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__270_value),LEAN_SCALAR_PTR_LITERAL(207, 2, 125, 173, 229, 86, 25, 131)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__272 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__272_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__273_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "min"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__273 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__273_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__274_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__274;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__275_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__273_value),LEAN_SCALAR_PTR_LITERAL(171, 138, 56, 11, 246, 187, 250, 154)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__275 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__275_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__276_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "termIfThenElse"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__276 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__276_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__277_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__276_value),LEAN_SCALAR_PTR_LITERAL(225, 209, 193, 165, 165, 31, 104, 198)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__277 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__277_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__278_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "if"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__278 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__278_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__279_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "then"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__279 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__279_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__280_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "else"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__280 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__280_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__281_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "max_def"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__281 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__281_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__282_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__282;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__283_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__281_value),LEAN_SCALAR_PTR_LITERAL(174, 216, 77, 6, 72, 105, 14, 231)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__283 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__283_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__284_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "max"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__284 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__284_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__285_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__285;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__286_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__284_value),LEAN_SCALAR_PTR_LITERAL(125, 252, 78, 228, 194, 170, 176, 213)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__286 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__286_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__287_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "open"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__287 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__287_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__288_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__288_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__288_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__288_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__288_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__288_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__288_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__287_value),LEAN_SCALAR_PTR_LITERAL(148, 8, 226, 43, 107, 167, 95, 157)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__288 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__288_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__289_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "openOnly"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__289 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__289_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__290_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__290_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__290_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__290_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__290_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__290_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__290_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__289_value),LEAN_SCALAR_PTR_LITERAL(240, 111, 143, 230, 204, 176, 68, 125)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__290 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__290_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__291_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toBitVec_min"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__291 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__291_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__292_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__292;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__293_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__291_value),LEAN_SCALAR_PTR_LITERAL(222, 63, 203, 200, 218, 55, 248, 169)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__293 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__293_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__294_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "BitVec.min_def"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__294 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__294_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__295_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__295;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__296_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__109_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__296_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__296_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__270_value),LEAN_SCALAR_PTR_LITERAL(84, 231, 43, 187, 80, 176, 238, 186)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__296 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__296_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__297_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "apply_ite"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__297 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__297_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__298_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__298;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__299_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__297_value),LEAN_SCALAR_PTR_LITERAL(228, 253, 97, 171, 128, 176, 200, 75)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__299 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__299_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__300_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toBitVec_max"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__300 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__300_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__301_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__301;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__302_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__300_value),LEAN_SCALAR_PTR_LITERAL(246, 132, 188, 183, 132, 123, 141, 135)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__302 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__302_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__303_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "BitVec.max_def"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__303 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__303_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__304_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__304;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__305_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__109_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__305_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__305_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__281_value),LEAN_SCALAR_PTR_LITERAL(181, 80, 145, 194, 65, 238, 11, 251)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__305 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__305_value;
static const lean_array_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__306_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*11, .m_other = 0, .m_tag = 246}, .m_size = 11, .m_capacity = 11, .m_data = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__15_value),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__61_value),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__173_value),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__179_value),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__234_value),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__240_value),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__246_value),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__252_value),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__262_value),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__293_value),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__302_value)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__306 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__306_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__307_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__307;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__308_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__308;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__309_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "attribute"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__309 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__309_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__310_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__310_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__310_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__310_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__310_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__310_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__310_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__309_value),LEAN_SCALAR_PTR_LITERAL(79, 30, 18, 84, 71, 173, 185, 159)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__310 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__310_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__311_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__311 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__311_value;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__312_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__312_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__312_value_aux_0),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__312_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__312_value_aux_1),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__198_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__312_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__312_value_aux_2),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__311_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__312 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__312_value;
static const lean_string_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__313_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "int_toBitVec"};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__313 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__313_value;
static lean_once_cell_t l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__314_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__314;
static const lean_ctor_object l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__315_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__313_value),LEAN_SCALAR_PTR_LITERAL(86, 82, 181, 235, 29, 69, 188, 18)}};
static const lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__315 = (const lean_object*)&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__315_value;
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__0(lean_object* v_____do__lift_34_, lean_object* v___y_35_, lean_object* v___y_36_){
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
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__0___boxed(lean_object* v_____do__lift_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__0(v_____do__lift_40_, v___y_41_, v___y_42_);
lean_dec_ref(v___y_41_);
lean_dec(v_____do__lift_40_);
return v_res_43_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__7(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Array_mkArray0___redArg();
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1(lean_object* v___f_57_, lean_object* v_typeName_58_, lean_object* v_____r_59_, lean_object* v_cmds_60_, lean_object* v___y_61_, lean_object* v___y_62_){
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
v___x_70_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__3));
v___x_71_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__4));
lean_inc_n(v_a_65_, 3);
v___x_72_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_72_, 0, v_a_65_);
lean_ctor_set(v___x_72_, 1, v___x_70_);
v___x_73_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__6));
v___x_74_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__7, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__7_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__7);
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
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___boxed(lean_object* v___f_94_, lean_object* v_typeName_95_, lean_object* v_____r_96_, lean_object* v_cmds_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1(v___f_94_, v_typeName_95_, v_____r_96_, v_cmds_97_, v___y_98_, v___y_99_);
lean_dec_ref(v___y_98_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1_spec__0(lean_object* v___x_101_, size_t v_sz_102_, size_t v_i_103_, lean_object* v_bs_104_){
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1_spec__0___boxed(lean_object* v___x_118_, lean_object* v_sz_119_, lean_object* v_i_120_, lean_object* v_bs_121_){
_start:
{
size_t v_sz_boxed_122_; size_t v_i_boxed_123_; lean_object* v_res_124_; 
v_sz_boxed_122_ = lean_unbox_usize(v_sz_119_);
lean_dec(v_sz_119_);
v_i_boxed_123_ = lean_unbox_usize(v_i_120_);
lean_dec(v_i_120_);
v_res_124_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1_spec__0(v___x_118_, v_sz_boxed_122_, v_i_boxed_123_, v_bs_121_);
return v_res_124_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__14(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__13));
v___x_161_ = l_String_toRawSubstring_x27(v___x_160_);
return v___x_161_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__23(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__22));
v___x_180_ = l_String_toRawSubstring_x27(v___x_179_);
return v___x_180_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__26(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__25));
v___x_185_ = l_String_toRawSubstring_x27(v___x_184_);
return v___x_185_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__41(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_211_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__40));
v___x_212_ = l_String_toRawSubstring_x27(v___x_211_);
return v___x_212_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__46(void){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__45));
v___x_221_ = l_String_toRawSubstring_x27(v___x_220_);
return v___x_221_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__52(void){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__51));
v___x_234_ = l_String_toRawSubstring_x27(v___x_233_);
return v___x_234_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__60(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_248_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__59));
v___x_249_ = l_String_toRawSubstring_x27(v___x_248_);
return v___x_249_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__66(void){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_257_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__65));
v___x_258_ = l_String_toRawSubstring_x27(v___x_257_);
return v___x_258_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__70(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_265_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__69));
v___x_266_ = l_String_toRawSubstring_x27(v___x_265_);
return v___x_266_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__75(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__74));
v___x_274_ = l_String_toRawSubstring_x27(v___x_273_);
return v___x_274_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__82(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__81));
v___x_288_ = l_String_toRawSubstring_x27(v___x_287_);
return v___x_288_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__94(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_311_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__93));
v___x_312_ = l_String_toRawSubstring_x27(v___x_311_);
return v___x_312_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__95(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = lean_box(0);
v___x_314_ = l_unsafeCast___redArg(v___x_313_);
return v___x_314_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__102(void){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_329_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__54));
v___x_330_ = l_String_toRawSubstring_x27(v___x_329_);
return v___x_330_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__107(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__106));
v___x_337_ = l_String_toRawSubstring_x27(v___x_336_);
return v___x_337_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__110(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__109));
v___x_342_ = l_String_toRawSubstring_x27(v___x_341_);
return v___x_342_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__113(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__112));
v___x_347_ = l_String_toRawSubstring_x27(v___x_346_);
return v___x_347_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__128(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__127));
v___x_384_ = l_String_toRawSubstring_x27(v___x_383_);
return v___x_384_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__141(void){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_417_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__140));
v___x_418_ = l_String_toRawSubstring_x27(v___x_417_);
return v___x_418_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__151(void){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_441_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__150));
v___x_442_ = l_String_toRawSubstring_x27(v___x_441_);
return v___x_442_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__154(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__153));
v___x_447_ = l_String_toRawSubstring_x27(v___x_446_);
return v___x_447_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__158(void){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_453_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__157));
v___x_454_ = l_String_toRawSubstring_x27(v___x_453_);
return v___x_454_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__172(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__171));
v___x_483_ = l_String_toRawSubstring_x27(v___x_482_);
return v___x_483_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__175(void){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_487_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__174));
v___x_488_ = l_String_toRawSubstring_x27(v___x_487_);
return v___x_488_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__178(void){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_493_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__177));
v___x_494_ = l_String_toRawSubstring_x27(v___x_493_);
return v___x_494_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__183(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__182));
v___x_505_ = l_String_toRawSubstring_x27(v___x_504_);
return v___x_505_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__201(void){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__200));
v___x_543_ = l_String_toRawSubstring_x27(v___x_542_);
return v___x_543_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__204(void){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_547_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__203));
v___x_548_ = l_String_toRawSubstring_x27(v___x_547_);
return v___x_548_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__207(void){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__206));
v___x_553_ = l_String_toRawSubstring_x27(v___x_552_);
return v___x_553_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__209(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_556_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__42));
v___x_557_ = l_String_toRawSubstring_x27(v___x_556_);
return v___x_557_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__212(void){
_start:
{
lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_561_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__211));
v___x_562_ = l_String_toRawSubstring_x27(v___x_561_);
return v___x_562_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__215(void){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_566_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__214));
v___x_567_ = l_String_toRawSubstring_x27(v___x_566_);
return v___x_567_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__221(void){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__220));
v___x_580_ = l_String_toRawSubstring_x27(v___x_579_);
return v___x_580_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__227(void){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__226));
v___x_592_ = l_String_toRawSubstring_x27(v___x_591_);
return v___x_592_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__233(void){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_604_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__232));
v___x_605_ = l_String_toRawSubstring_x27(v___x_604_);
return v___x_605_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__239(void){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__238));
v___x_614_ = l_String_toRawSubstring_x27(v___x_613_);
return v___x_614_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__245(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_622_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__244));
v___x_623_ = l_String_toRawSubstring_x27(v___x_622_);
return v___x_623_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__251(void){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__250));
v___x_632_ = l_String_toRawSubstring_x27(v___x_631_);
return v___x_632_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__257(void){
_start:
{
lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_640_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__256));
v___x_641_ = l_String_toRawSubstring_x27(v___x_640_);
return v___x_641_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__261(void){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_648_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__260));
v___x_649_ = l_String_toRawSubstring_x27(v___x_648_);
return v___x_649_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__267(void){
_start:
{
lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_657_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__266));
v___x_658_ = l_String_toRawSubstring_x27(v___x_657_);
return v___x_658_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__271(void){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_665_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__270));
v___x_666_ = l_String_toRawSubstring_x27(v___x_665_);
return v___x_666_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__274(void){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_670_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__273));
v___x_671_ = l_String_toRawSubstring_x27(v___x_670_);
return v___x_671_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__282(void){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__281));
v___x_682_ = l_String_toRawSubstring_x27(v___x_681_);
return v___x_682_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__285(void){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_686_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__284));
v___x_687_ = l_String_toRawSubstring_x27(v___x_686_);
return v___x_687_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__292(void){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__291));
v___x_704_ = l_String_toRawSubstring_x27(v___x_703_);
return v___x_704_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__295(void){
_start:
{
lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_708_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__294));
v___x_709_ = l_String_toRawSubstring_x27(v___x_708_);
return v___x_709_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__298(void){
_start:
{
lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_714_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__297));
v___x_715_ = l_String_toRawSubstring_x27(v___x_714_);
return v___x_715_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__301(void){
_start:
{
lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_719_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__300));
v___x_720_ = l_String_toRawSubstring_x27(v___x_719_);
return v___x_720_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__304(void){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_724_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__303));
v___x_725_ = l_String_toRawSubstring_x27(v___x_724_);
return v___x_725_;
}
}
static size_t _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__307(void){
_start:
{
lean_object* v___x_753_; size_t v_sz_754_; 
v___x_753_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__306));
v_sz_754_ = lean_array_size(v___x_753_);
return v_sz_754_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__308(void){
_start:
{
lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_755_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__306));
v___x_756_ = l_unsafeCast___redArg(v___x_755_);
return v___x_756_;
}
}
static lean_object* _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__314(void){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__313));
v___x_771_ = l_String_toRawSubstring_x27(v___x_770_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1(lean_object* v_x_774_, lean_object* v_a_775_, lean_object* v_a_776_){
_start:
{
lean_object* v___y_778_; lean_object* v___x_797_; uint8_t v___x_798_; 
v___x_797_ = ((lean_object*)(l_commandDeclare__int__theorems_____00__closed__1));
lean_inc(v_x_774_);
v___x_798_ = l_Lean_Syntax_isOfKind(v_x_774_, v___x_797_);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; lean_object* v___x_800_; 
lean_dec(v_x_774_);
v___x_799_ = lean_box(1);
v___x_800_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_800_, 0, v___x_799_);
lean_ctor_set(v___x_800_, 1, v_a_776_);
return v___x_800_;
}
else
{
lean_object* v_ref_801_; lean_object* v___f_802_; lean_object* v___x_803_; lean_object* v_typeName_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; uint8_t v_isISize_809_; uint8_t v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v_ref_801_ = lean_ctor_get(v_a_775_, 5);
v___f_802_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__0));
v___x_803_ = lean_unsigned_to_nat(1u);
v_typeName_804_ = l_Lean_Syntax_getArg(v_x_774_, v___x_803_);
v___x_805_ = lean_unsigned_to_nat(2u);
v___x_806_ = l_Lean_Syntax_getArg(v_x_774_, v___x_805_);
lean_dec(v_x_774_);
v___x_807_ = l_Lean_TSyntax_getId(v_typeName_804_);
v___x_808_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__2));
v_isISize_809_ = lean_name_eq(v___x_807_, v___x_808_);
v___x_810_ = 0;
v___x_811_ = l_Lean_SourceInfo_fromRef(v_ref_801_, v___x_810_);
v___x_812_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__6));
v___x_813_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__3));
v___x_814_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__4));
lean_inc_n(v___x_811_, 375);
v___x_815_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_815_, 0, v___x_811_);
lean_ctor_set(v___x_815_, 1, v___x_813_);
lean_inc_n(v_typeName_804_, 4);
v___x_816_ = l_Lean_Syntax_node2(v___x_811_, v___x_814_, v___x_815_, v_typeName_804_);
v___x_817_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__6));
v___x_818_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__8));
v___x_819_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__7, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__7_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1___closed__7);
v___x_820_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_820_, 0, v___x_811_);
lean_ctor_set(v___x_820_, 1, v___x_812_);
lean_ctor_set(v___x_820_, 2, v___x_819_);
lean_inc_ref_n(v___x_820_, 87);
v___x_821_ = l_Lean_Syntax_node7(v___x_811_, v___x_818_, v___x_820_, v___x_820_, v___x_820_, v___x_820_, v___x_820_, v___x_820_, v___x_820_);
v___x_822_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__9));
v___x_823_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__10));
v___x_824_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_824_, 0, v___x_811_);
lean_ctor_set(v___x_824_, 1, v___x_822_);
v___x_825_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__12));
v___x_826_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__14, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__14_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__14);
v___x_827_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__15));
v___x_828_ = lean_box(0);
v___x_829_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_829_, 0, v___x_811_);
lean_ctor_set(v___x_829_, 1, v___x_826_);
lean_ctor_set(v___x_829_, 2, v___x_827_);
lean_ctor_set(v___x_829_, 3, v___x_828_);
lean_inc_ref_n(v___x_829_, 3);
v___x_830_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_829_, v___x_820_);
v___x_831_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__17));
v___x_832_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__20));
v___x_833_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__21));
v___x_834_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_834_, 0, v___x_811_);
lean_ctor_set(v___x_834_, 1, v___x_833_);
v___x_835_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__23, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__23_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__23);
v___x_836_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__24));
v___x_837_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_837_, 0, v___x_811_);
lean_ctor_set(v___x_837_, 1, v___x_835_);
lean_ctor_set(v___x_837_, 2, v___x_836_);
lean_ctor_set(v___x_837_, 3, v___x_828_);
v___x_838_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__26, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__26_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__26);
v___x_839_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__27));
v___x_840_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_840_, 0, v___x_811_);
lean_ctor_set(v___x_840_, 1, v___x_838_);
lean_ctor_set(v___x_840_, 2, v___x_839_);
lean_ctor_set(v___x_840_, 3, v___x_828_);
lean_inc_ref_n(v___x_840_, 12);
lean_inc_ref_n(v___x_837_, 12);
v___x_841_ = l_Lean_Syntax_node2(v___x_811_, v___x_812_, v___x_837_, v___x_840_);
v___x_842_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__28));
v___x_843_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_843_, 0, v___x_811_);
lean_ctor_set(v___x_843_, 1, v___x_842_);
lean_inc_ref_n(v___x_843_, 21);
v___x_844_ = l_Lean_Syntax_node2(v___x_811_, v___x_812_, v___x_843_, v_typeName_804_);
v___x_845_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__29));
v___x_846_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_846_, 0, v___x_811_);
lean_ctor_set(v___x_846_, 1, v___x_845_);
lean_inc_ref_n(v___x_846_, 2);
lean_inc_n(v___x_841_, 3);
lean_inc_ref_n(v___x_834_, 2);
v___x_847_ = l_Lean_Syntax_node4(v___x_811_, v___x_832_, v___x_834_, v___x_841_, v___x_844_, v___x_846_);
v___x_848_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_847_);
v___x_849_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__31));
v___x_850_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__33));
v___x_851_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__35));
v___x_852_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__36));
v___x_853_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_853_, 0, v___x_811_);
lean_ctor_set(v___x_853_, 1, v___x_852_);
v___x_854_ = l_Lean_Syntax_node3(v___x_811_, v___x_851_, v___x_837_, v___x_853_, v___x_840_);
v___x_855_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__37));
v___x_856_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_856_, 0, v___x_811_);
lean_ctor_set(v___x_856_, 1, v___x_855_);
v___x_857_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__39));
v___x_858_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__41, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__41_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__41);
v___x_859_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__44));
v___x_860_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_860_, 0, v___x_811_);
lean_ctor_set(v___x_860_, 1, v___x_858_);
lean_ctor_set(v___x_860_, 2, v___x_859_);
lean_ctor_set(v___x_860_, 3, v___x_828_);
v___x_861_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__46, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__46_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__46);
v___x_862_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__47));
v___x_863_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_863_, 0, v___x_811_);
lean_ctor_set(v___x_863_, 1, v___x_861_);
lean_ctor_set(v___x_863_, 2, v___x_862_);
lean_ctor_set(v___x_863_, 3, v___x_828_);
lean_inc_ref_n(v___x_863_, 7);
v___x_864_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_863_);
lean_inc_n(v___x_864_, 3);
v___x_865_ = l_Lean_Syntax_node2(v___x_811_, v___x_857_, v___x_860_, v___x_864_);
lean_inc_n(v___x_865_, 2);
lean_inc_ref_n(v___x_856_, 7);
lean_inc_n(v___x_854_, 2);
v___x_866_ = l_Lean_Syntax_node3(v___x_811_, v___x_850_, v___x_854_, v___x_856_, v___x_865_);
v___x_867_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_866_);
lean_inc_n(v___x_848_, 13);
v___x_868_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_848_, v___x_867_);
v___x_869_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__49));
v___x_870_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__50));
v___x_871_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_871_, 0, v___x_811_);
lean_ctor_set(v___x_871_, 1, v___x_870_);
v___x_872_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__52, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__52_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__52);
v___x_873_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__54));
v___x_874_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__55));
v___x_875_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_875_, 0, v___x_811_);
lean_ctor_set(v___x_875_, 1, v___x_872_);
lean_ctor_set(v___x_875_, 2, v___x_874_);
lean_ctor_set(v___x_875_, 3, v___x_828_);
v___x_876_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__58));
v___x_877_ = l_Lean_Syntax_node2(v___x_811_, v___x_876_, v___x_820_, v___x_820_);
lean_inc_n(v___x_877_, 10);
lean_inc_ref_n(v___x_871_, 10);
v___x_878_ = l_Lean_Syntax_node4(v___x_811_, v___x_869_, v___x_871_, v___x_875_, v___x_877_, v___x_820_);
lean_inc(v___x_878_);
lean_inc_ref_n(v___x_824_, 18);
v___x_879_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_830_, v___x_868_, v___x_878_);
lean_inc_n(v___x_821_, 7);
v___x_880_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_821_, v___x_879_);
v___x_881_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__60, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__60_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__60);
v___x_882_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__61));
v___x_883_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_883_, 0, v___x_811_);
lean_ctor_set(v___x_883_, 1, v___x_881_);
lean_ctor_set(v___x_883_, 2, v___x_882_);
lean_ctor_set(v___x_883_, 3, v___x_828_);
v___x_884_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_883_, v___x_820_);
v___x_885_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__63));
v___x_886_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__64));
v___x_887_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_887_, 0, v___x_811_);
lean_ctor_set(v___x_887_, 1, v___x_886_);
v___x_888_ = l_Lean_Syntax_node3(v___x_811_, v___x_885_, v___x_837_, v___x_887_, v___x_840_);
v___x_889_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__66, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__66_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__66);
v___x_890_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__68));
v___x_891_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_891_, 0, v___x_811_);
lean_ctor_set(v___x_891_, 1, v___x_889_);
lean_ctor_set(v___x_891_, 2, v___x_890_);
lean_ctor_set(v___x_891_, 3, v___x_828_);
v___x_892_ = l_Lean_Syntax_node2(v___x_811_, v___x_857_, v___x_891_, v___x_864_);
v___x_893_ = l_Lean_Syntax_node3(v___x_811_, v___x_850_, v___x_888_, v___x_856_, v___x_892_);
v___x_894_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_893_);
v___x_895_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_848_, v___x_894_);
v___x_896_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_884_, v___x_895_, v___x_878_);
v___x_897_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_821_, v___x_896_);
v___x_898_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__70, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__70_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__70);
v___x_899_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__71));
v___x_900_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_900_, 0, v___x_811_);
lean_ctor_set(v___x_900_, 1, v___x_898_);
lean_ctor_set(v___x_900_, 2, v___x_899_);
lean_ctor_set(v___x_900_, 3, v___x_828_);
v___x_901_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_900_, v___x_820_);
v___x_902_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__73));
v___x_903_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__75, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__75_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__75);
v___x_904_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__76));
v___x_905_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_905_, 0, v___x_811_);
lean_ctor_set(v___x_905_, 1, v___x_903_);
lean_ctor_set(v___x_905_, 2, v___x_904_);
lean_ctor_set(v___x_905_, 3, v___x_828_);
v___x_906_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__77));
v___x_907_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_907_, 0, v___x_811_);
lean_ctor_set(v___x_907_, 1, v___x_906_);
lean_inc_ref_n(v___x_907_, 13);
lean_inc_ref_n(v___x_905_, 6);
v___x_908_ = l_Lean_Syntax_node3(v___x_811_, v___x_902_, v___x_905_, v___x_907_, v___x_863_);
v___x_909_ = l_Lean_Syntax_node3(v___x_811_, v___x_902_, v___x_837_, v___x_907_, v___x_840_);
lean_inc_n(v___x_909_, 3);
lean_inc(v___x_908_);
v___x_910_ = l_Lean_Syntax_node3(v___x_811_, v___x_850_, v___x_908_, v___x_856_, v___x_909_);
v___x_911_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_910_);
v___x_912_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_848_, v___x_911_);
v___x_913_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__79));
v___x_914_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__80));
v___x_915_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_811_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v___x_916_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__82, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__82_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__82);
v___x_917_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__84));
v___x_918_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_918_, 0, v___x_811_);
lean_ctor_set(v___x_918_, 1, v___x_916_);
lean_ctor_set(v___x_918_, 2, v___x_917_);
lean_ctor_set(v___x_918_, 3, v___x_828_);
v___x_919_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__85));
v___x_920_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_920_, 0, v___x_811_);
lean_ctor_set(v___x_920_, 1, v___x_919_);
v___x_921_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__87));
v___x_922_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__89));
v___x_923_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__90));
v___x_924_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_924_, 0, v___x_811_);
lean_ctor_set(v___x_924_, 1, v___x_923_);
v___x_925_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__92));
v___x_926_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__94, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__94_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__94);
v___x_927_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__95, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__95_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__95);
v___x_928_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_928_, 0, v___x_811_);
lean_ctor_set(v___x_928_, 1, v___x_926_);
lean_ctor_set(v___x_928_, 2, v___x_927_);
lean_ctor_set(v___x_928_, 3, v___x_828_);
v___x_929_ = l_Lean_Syntax_node1(v___x_811_, v___x_925_, v___x_928_);
lean_inc(v___x_929_);
lean_inc_ref_n(v___x_924_, 3);
v___x_930_ = l_Lean_Syntax_node2(v___x_811_, v___x_922_, v___x_924_, v___x_929_);
v___x_931_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__97));
v___x_932_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__99));
v___x_933_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__100));
v___x_934_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_934_, 0, v___x_811_);
lean_ctor_set(v___x_934_, 1, v___x_933_);
v___x_935_ = l_Lean_Syntax_node2(v___x_811_, v___x_932_, v___x_934_, v___x_929_);
v___x_936_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__101));
v___x_937_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_937_, 0, v___x_811_);
lean_ctor_set(v___x_937_, 1, v___x_936_);
v___x_938_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__102, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__102_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__102);
v___x_939_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__103));
v___x_940_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_940_, 0, v___x_811_);
lean_ctor_set(v___x_940_, 1, v___x_938_);
lean_ctor_set(v___x_940_, 2, v___x_939_);
lean_ctor_set(v___x_940_, 3, v___x_828_);
lean_inc_ref(v___x_940_);
v___x_941_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_940_);
v___x_942_ = l_Lean_Syntax_node3(v___x_811_, v___x_931_, v___x_935_, v___x_937_, v___x_941_);
v___x_943_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__104));
v___x_944_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_944_, 0, v___x_811_);
lean_ctor_set(v___x_944_, 1, v___x_943_);
lean_inc_ref_n(v___x_944_, 14);
lean_inc_n(v___x_930_, 11);
v___x_945_ = l_Lean_Syntax_node3(v___x_811_, v___x_921_, v___x_930_, v___x_942_, v___x_944_);
lean_inc_ref_n(v___x_920_, 6);
v___x_946_ = l_Lean_Syntax_node3(v___x_811_, v___x_812_, v___x_918_, v___x_920_, v___x_945_);
v___x_947_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__105));
v___x_948_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_948_, 0, v___x_811_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
v___x_949_ = l_Lean_Syntax_node3(v___x_811_, v___x_913_, v___x_915_, v___x_946_, v___x_948_);
v___x_950_ = l_Lean_Syntax_node4(v___x_811_, v___x_869_, v___x_871_, v___x_949_, v___x_877_, v___x_820_);
v___x_951_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_901_, v___x_912_, v___x_950_);
v___x_952_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_821_, v___x_951_);
v___x_953_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__107, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__107_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__107);
v___x_954_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__108));
v___x_955_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_955_, 0, v___x_811_);
lean_ctor_set(v___x_955_, 1, v___x_953_);
lean_ctor_set(v___x_955_, 2, v___x_954_);
lean_ctor_set(v___x_955_, 3, v___x_828_);
lean_inc_ref(v___x_955_);
v___x_956_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_955_, v___x_820_);
v___x_957_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__110, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__110_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__110);
v___x_958_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__111));
v___x_959_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_959_, 0, v___x_811_);
lean_ctor_set(v___x_959_, 1, v___x_957_);
lean_ctor_set(v___x_959_, 2, v___x_958_);
lean_ctor_set(v___x_959_, 3, v___x_828_);
v___x_960_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_806_);
v___x_961_ = l_Lean_Syntax_node2(v___x_811_, v___x_857_, v___x_959_, v___x_960_);
v___x_962_ = l_Lean_Syntax_node2(v___x_811_, v___x_812_, v___x_843_, v___x_961_);
v___x_963_ = l_Lean_Syntax_node4(v___x_811_, v___x_832_, v___x_834_, v___x_841_, v___x_962_, v___x_846_);
v___x_964_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_963_);
v___x_965_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__113, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__113_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__113);
v___x_966_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__114));
v___x_967_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_967_, 0, v___x_811_);
lean_ctor_set(v___x_967_, 1, v___x_965_);
lean_ctor_set(v___x_967_, 2, v___x_966_);
lean_ctor_set(v___x_967_, 3, v___x_828_);
v___x_968_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_837_);
lean_inc_ref(v___x_967_);
v___x_969_ = l_Lean_Syntax_node2(v___x_811_, v___x_857_, v___x_967_, v___x_968_);
v___x_970_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_840_);
v___x_971_ = l_Lean_Syntax_node2(v___x_811_, v___x_857_, v___x_967_, v___x_970_);
lean_inc(v___x_971_);
lean_inc(v___x_969_);
v___x_972_ = l_Lean_Syntax_node3(v___x_811_, v___x_902_, v___x_969_, v___x_907_, v___x_971_);
lean_inc(v___x_972_);
v___x_973_ = l_Lean_Syntax_node3(v___x_811_, v___x_850_, v___x_972_, v___x_856_, v___x_909_);
v___x_974_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_973_);
lean_inc_n(v___x_964_, 2);
v___x_975_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_964_, v___x_974_);
v___x_976_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__116));
v___x_977_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__117));
v___x_978_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_811_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__120));
v___x_980_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__122));
v___x_981_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__124));
v___x_982_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__125));
v___x_983_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__126));
v___x_984_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_984_, 0, v___x_811_);
lean_ctor_set(v___x_984_, 1, v___x_982_);
v___x_985_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__128, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__128_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__128);
v___x_986_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__130));
v___x_987_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_987_, 0, v___x_811_);
lean_ctor_set(v___x_987_, 1, v___x_985_);
lean_ctor_set(v___x_987_, 2, v___x_986_);
lean_ctor_set(v___x_987_, 3, v___x_828_);
v___x_988_ = l_Lean_Syntax_node2(v___x_811_, v___x_983_, v___x_984_, v___x_987_);
v___x_989_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__131));
v___x_990_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_811_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__132));
v___x_992_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__133));
v___x_993_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__134));
v___x_994_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_811_);
lean_ctor_set(v___x_994_, 1, v___x_992_);
v___x_995_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__137));
v___x_996_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__139));
v___x_997_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__141, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__141_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__141);
v___x_998_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__142));
v___x_999_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_999_, 0, v___x_811_);
lean_ctor_set(v___x_999_, 1, v___x_997_);
lean_ctor_set(v___x_999_, 2, v___x_998_);
lean_ctor_set(v___x_999_, 3, v___x_828_);
lean_inc_ref(v___x_999_);
v___x_1000_ = l_Lean_Syntax_node1(v___x_811_, v___x_996_, v___x_999_);
v___x_1001_ = l_Lean_Syntax_node1(v___x_811_, v___x_995_, v___x_1000_);
v___x_1002_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_1001_);
v___x_1003_ = l_Lean_Syntax_node3(v___x_811_, v___x_993_, v___x_994_, v___x_1002_, v___x_820_);
v___x_1004_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__143));
v___x_1005_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___x_811_);
lean_ctor_set(v___x_1005_, 1, v___x_1004_);
v___x_1006_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__144));
v___x_1007_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__145));
v___x_1008_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___x_811_);
lean_ctor_set(v___x_1008_, 1, v___x_1006_);
v___x_1009_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__147));
v___x_1010_ = l_Lean_Syntax_node2(v___x_811_, v___x_1009_, v___x_820_, v___x_999_);
v___x_1011_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_1010_);
v___x_1012_ = l_Lean_Syntax_node4(v___x_811_, v___x_1007_, v___x_1008_, v___x_1011_, v___x_820_, v___x_820_);
v___x_1013_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__149));
v___x_1014_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_811_);
lean_ctor_set(v___x_1014_, 1, v___x_873_);
v___x_1015_ = l_Lean_Syntax_node1(v___x_811_, v___x_1013_, v___x_1014_);
lean_inc(v___x_1015_);
lean_inc_ref(v___x_1005_);
v___x_1016_ = l_Lean_Syntax_node5(v___x_811_, v___x_812_, v___x_1003_, v___x_1005_, v___x_1012_, v___x_1005_, v___x_1015_);
v___x_1017_ = l_Lean_Syntax_node1(v___x_811_, v___x_980_, v___x_1016_);
v___x_1018_ = l_Lean_Syntax_node1(v___x_811_, v___x_979_, v___x_1017_);
v___x_1019_ = l_Lean_Syntax_node3(v___x_811_, v___x_991_, v___x_924_, v___x_1018_, v___x_944_);
v___x_1020_ = l_Lean_Syntax_node3(v___x_811_, v___x_981_, v___x_988_, v___x_990_, v___x_1019_);
v___x_1021_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_1020_);
v___x_1022_ = l_Lean_Syntax_node1(v___x_811_, v___x_980_, v___x_1021_);
v___x_1023_ = l_Lean_Syntax_node1(v___x_811_, v___x_979_, v___x_1022_);
lean_inc_ref_n(v___x_978_, 4);
v___x_1024_ = l_Lean_Syntax_node2(v___x_811_, v___x_976_, v___x_978_, v___x_1023_);
v___x_1025_ = l_Lean_Syntax_node4(v___x_811_, v___x_869_, v___x_871_, v___x_1024_, v___x_877_, v___x_820_);
v___x_1026_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_956_, v___x_975_, v___x_1025_);
v___x_1027_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_821_, v___x_1026_);
v___x_1028_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__151, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__151_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__151);
v___x_1029_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__152));
v___x_1030_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1030_, 0, v___x_811_);
lean_ctor_set(v___x_1030_, 1, v___x_1028_);
lean_ctor_set(v___x_1030_, 2, v___x_1029_);
lean_ctor_set(v___x_1030_, 3, v___x_828_);
v___x_1031_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_1030_, v___x_820_);
v___x_1032_ = l_Lean_Syntax_node3(v___x_811_, v___x_850_, v___x_909_, v___x_856_, v___x_972_);
v___x_1033_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_1032_);
v___x_1034_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_964_, v___x_1033_);
v___x_1035_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__154, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__154_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__154);
v___x_1036_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__156));
v___x_1037_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1037_, 0, v___x_811_);
lean_ctor_set(v___x_1037_, 1, v___x_1035_);
lean_ctor_set(v___x_1037_, 2, v___x_1036_);
lean_ctor_set(v___x_1037_, 3, v___x_828_);
v___x_1038_ = l_Lean_Syntax_node4(v___x_811_, v___x_869_, v___x_871_, v___x_1037_, v___x_877_, v___x_820_);
v___x_1039_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_1031_, v___x_1034_, v___x_1038_);
v___x_1040_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_821_, v___x_1039_);
v___x_1041_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__158, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__158_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__158);
v___x_1042_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__159));
v___x_1043_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1043_, 0, v___x_811_);
lean_ctor_set(v___x_1043_, 1, v___x_1041_);
lean_ctor_set(v___x_1043_, 2, v___x_1042_);
lean_ctor_set(v___x_1043_, 3, v___x_828_);
v___x_1044_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_1043_, v___x_820_);
v___x_1045_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__161));
v___x_1046_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__162));
v___x_1047_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1047_, 0, v___x_811_);
lean_ctor_set(v___x_1047_, 1, v___x_1046_);
lean_inc_ref_n(v___x_1047_, 2);
v___x_1048_ = l_Lean_Syntax_node3(v___x_811_, v___x_1045_, v___x_837_, v___x_1047_, v___x_840_);
v___x_1049_ = l_Lean_Syntax_node3(v___x_811_, v___x_1045_, v___x_969_, v___x_1047_, v___x_971_);
lean_inc(v___x_1048_);
v___x_1050_ = l_Lean_Syntax_node3(v___x_811_, v___x_850_, v___x_1048_, v___x_856_, v___x_1049_);
v___x_1051_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_1050_);
v___x_1052_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_964_, v___x_1051_);
v___x_1053_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__163));
v___x_1054_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__164));
v___x_1055_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1055_, 0, v___x_811_);
lean_ctor_set(v___x_1055_, 1, v___x_1053_);
v___x_1056_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__166));
v___x_1057_ = l_Lean_Syntax_node1(v___x_811_, v___x_1056_, v___x_820_);
v___x_1058_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__167));
v___x_1059_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_811_);
lean_ctor_set(v___x_1059_, 1, v___x_1058_);
v___x_1060_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__169));
v___x_1061_ = l_Lean_Syntax_node3(v___x_811_, v___x_1060_, v___x_820_, v___x_820_, v___x_955_);
v___x_1062_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_1061_);
v___x_1063_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__170));
v___x_1064_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_811_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
lean_inc_ref_n(v___x_1064_, 3);
lean_inc_ref_n(v___x_1059_, 2);
v___x_1065_ = l_Lean_Syntax_node3(v___x_811_, v___x_812_, v___x_1059_, v___x_1062_, v___x_1064_);
lean_inc_n(v___x_1057_, 2);
lean_inc_ref_n(v___x_1055_, 3);
v___x_1066_ = l_Lean_Syntax_node6(v___x_811_, v___x_1054_, v___x_1055_, v___x_1057_, v___x_820_, v___x_820_, v___x_1065_, v___x_820_);
v___x_1067_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_1066_);
v___x_1068_ = l_Lean_Syntax_node1(v___x_811_, v___x_980_, v___x_1067_);
v___x_1069_ = l_Lean_Syntax_node1(v___x_811_, v___x_979_, v___x_1068_);
v___x_1070_ = l_Lean_Syntax_node2(v___x_811_, v___x_976_, v___x_978_, v___x_1069_);
v___x_1071_ = l_Lean_Syntax_node4(v___x_811_, v___x_869_, v___x_871_, v___x_1070_, v___x_877_, v___x_820_);
v___x_1072_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_1044_, v___x_1052_, v___x_1071_);
v___x_1073_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_821_, v___x_1072_);
v___x_1074_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__172, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__172_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__172);
v___x_1075_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__173));
v___x_1076_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1076_, 0, v___x_811_);
lean_ctor_set(v___x_1076_, 1, v___x_1074_);
lean_ctor_set(v___x_1076_, 2, v___x_1075_);
lean_ctor_set(v___x_1076_, 3, v___x_828_);
lean_inc_ref(v___x_1076_);
v___x_1077_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_1076_, v___x_820_);
v___x_1078_ = l_Lean_Syntax_node3(v___x_811_, v___x_850_, v___x_909_, v___x_856_, v___x_908_);
v___x_1079_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_1078_);
v___x_1080_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_848_, v___x_1079_);
v___x_1081_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__175, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__175_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__175);
v___x_1082_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__176));
v___x_1083_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1083_, 0, v___x_811_);
lean_ctor_set(v___x_1083_, 1, v___x_1081_);
lean_ctor_set(v___x_1083_, 2, v___x_1082_);
lean_ctor_set(v___x_1083_, 3, v___x_828_);
v___x_1084_ = l_Lean_Syntax_node4(v___x_811_, v___x_869_, v___x_871_, v___x_1083_, v___x_877_, v___x_820_);
v___x_1085_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_1077_, v___x_1080_, v___x_1084_);
v___x_1086_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_821_, v___x_1085_);
v___x_1087_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__178, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__178_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__178);
v___x_1088_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__179));
v___x_1089_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1089_, 0, v___x_811_);
lean_ctor_set(v___x_1089_, 1, v___x_1087_);
lean_ctor_set(v___x_1089_, 2, v___x_1088_);
lean_ctor_set(v___x_1089_, 3, v___x_828_);
v___x_1090_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_1089_, v___x_820_);
v___x_1091_ = l_Lean_Syntax_node3(v___x_811_, v___x_1045_, v___x_905_, v___x_1047_, v___x_863_);
v___x_1092_ = l_Lean_Syntax_node3(v___x_811_, v___x_850_, v___x_1048_, v___x_856_, v___x_1091_);
v___x_1093_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_1092_);
v___x_1094_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_848_, v___x_1093_);
v___x_1095_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__181));
v___x_1096_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__183, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__183_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__183);
v___x_1097_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__186));
v___x_1098_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1098_, 0, v___x_811_);
lean_ctor_set(v___x_1098_, 1, v___x_1096_);
lean_ctor_set(v___x_1098_, 2, v___x_1097_);
lean_ctor_set(v___x_1098_, 3, v___x_828_);
v___x_1099_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__187));
v___x_1100_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_811_);
lean_ctor_set(v___x_1100_, 1, v___x_1099_);
v___x_1101_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__189));
v___x_1102_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__190));
v___x_1103_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1103_, 0, v___x_811_);
lean_ctor_set(v___x_1103_, 1, v___x_1102_);
v___x_1104_ = l_Lean_Syntax_node1(v___x_811_, v___x_1101_, v___x_1103_);
lean_inc_ref_n(v___x_1100_, 7);
v___x_1105_ = l_Lean_Syntax_node3(v___x_811_, v___x_1095_, v___x_1098_, v___x_1100_, v___x_1104_);
v___x_1106_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_1076_);
v___x_1107_ = l_Lean_Syntax_node2(v___x_811_, v___x_857_, v___x_1105_, v___x_1106_);
v___x_1108_ = l_Lean_Syntax_node4(v___x_811_, v___x_869_, v___x_871_, v___x_1107_, v___x_877_, v___x_820_);
v___x_1109_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_1090_, v___x_1094_, v___x_1108_);
v___x_1110_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_821_, v___x_1109_);
v___x_1111_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__192));
v___x_1112_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__193));
v___x_1113_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_811_);
lean_ctor_set(v___x_1113_, 1, v___x_1112_);
v___x_1114_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__195));
v___x_1115_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__197));
v___x_1116_ = l_Lean_Syntax_node1(v___x_811_, v___x_1115_, v___x_820_);
v___x_1117_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__199));
v___x_1118_ = l_Lean_Syntax_node4(v___x_811_, v___x_1117_, v___x_1055_, v___x_820_, v___x_820_, v___x_820_);
v___x_1119_ = l_Lean_Syntax_node2(v___x_811_, v___x_1114_, v___x_1116_, v___x_1118_);
v___x_1120_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_1119_);
v___x_1121_ = l_Lean_Syntax_node3(v___x_811_, v___x_1111_, v___x_1113_, v___x_1120_, v___x_1064_);
v___x_1122_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_1121_);
lean_inc(v___x_1122_);
v___x_1123_ = l_Lean_Syntax_node7(v___x_811_, v___x_818_, v___x_820_, v___x_1122_, v___x_820_, v___x_820_, v___x_820_, v___x_820_, v___x_820_);
v___x_1124_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__201, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__201_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__201);
v___x_1125_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__202));
v___x_1126_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1126_, 0, v___x_811_);
lean_ctor_set(v___x_1126_, 1, v___x_1124_);
lean_ctor_set(v___x_1126_, 2, v___x_1125_);
lean_ctor_set(v___x_1126_, 3, v___x_828_);
v___x_1127_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_1126_, v___x_820_);
v___x_1128_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__204, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__204_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__204);
v___x_1129_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__205));
v___x_1130_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1130_, 0, v___x_811_);
lean_ctor_set(v___x_1130_, 1, v___x_1128_);
lean_ctor_set(v___x_1130_, 2, v___x_1129_);
lean_ctor_set(v___x_1130_, 3, v___x_828_);
lean_inc_ref(v___x_1130_);
v___x_1131_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_1130_);
v___x_1132_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__207, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__207_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__207);
v___x_1133_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__208));
v___x_1134_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1134_, 0, v___x_811_);
lean_ctor_set(v___x_1134_, 1, v___x_1132_);
lean_ctor_set(v___x_1134_, 2, v___x_1133_);
lean_ctor_set(v___x_1134_, 3, v___x_828_);
v___x_1135_ = l_Lean_Syntax_node2(v___x_811_, v___x_812_, v___x_843_, v___x_1134_);
lean_inc_n(v___x_1131_, 2);
v___x_1136_ = l_Lean_Syntax_node4(v___x_811_, v___x_832_, v___x_834_, v___x_1131_, v___x_1135_, v___x_846_);
v___x_1137_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_1136_);
v___x_1138_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__209, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__209_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__209);
v___x_1139_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__210));
v___x_1140_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1140_, 0, v___x_811_);
lean_ctor_set(v___x_1140_, 1, v___x_1138_);
lean_ctor_set(v___x_1140_, 2, v___x_1139_);
lean_ctor_set(v___x_1140_, 3, v___x_828_);
v___x_1141_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__212, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__212_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__212);
v___x_1142_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__213));
v___x_1143_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1143_, 0, v___x_811_);
lean_ctor_set(v___x_1143_, 1, v___x_1141_);
lean_ctor_set(v___x_1143_, 2, v___x_1142_);
lean_ctor_set(v___x_1143_, 3, v___x_828_);
v___x_1144_ = l_Lean_Syntax_node2(v___x_811_, v___x_857_, v___x_1143_, v___x_1131_);
v___x_1145_ = l_Lean_Syntax_node3(v___x_811_, v___x_921_, v___x_930_, v___x_1144_, v___x_944_);
v___x_1146_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_1145_);
lean_inc_ref_n(v___x_1140_, 9);
v___x_1147_ = l_Lean_Syntax_node2(v___x_811_, v___x_857_, v___x_1140_, v___x_1146_);
v___x_1148_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__215, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__215_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__215);
v___x_1149_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__216));
v___x_1150_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1150_, 0, v___x_811_);
lean_ctor_set(v___x_1150_, 1, v___x_1148_);
lean_ctor_set(v___x_1150_, 2, v___x_1149_);
lean_ctor_set(v___x_1150_, 3, v___x_828_);
v___x_1151_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__218));
v___x_1152_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__219));
v___x_1153_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_811_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
v___x_1154_ = l_Lean_Syntax_node1(v___x_811_, v___x_1151_, v___x_1153_);
v___x_1155_ = l_Lean_Syntax_node2(v___x_811_, v___x_812_, v___x_1154_, v___x_1130_);
v___x_1156_ = l_Lean_Syntax_node2(v___x_811_, v___x_857_, v___x_1150_, v___x_1155_);
v___x_1157_ = l_Lean_Syntax_node3(v___x_811_, v___x_902_, v___x_1147_, v___x_907_, v___x_1156_);
v___x_1158_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_1157_);
lean_inc(v___x_1137_);
v___x_1159_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_1137_, v___x_1158_);
v___x_1160_ = l_Lean_Syntax_node3(v___x_811_, v___x_921_, v___x_930_, v___x_940_, v___x_944_);
v___x_1161_ = l_Lean_Syntax_node4(v___x_811_, v___x_869_, v___x_871_, v___x_1160_, v___x_877_, v___x_820_);
lean_inc_n(v___x_1161_, 6);
v___x_1162_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_1127_, v___x_1159_, v___x_1161_);
lean_inc(v___x_1123_);
v___x_1163_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_1123_, v___x_1162_);
v___x_1164_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__221, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__221_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__221);
v___x_1165_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__222));
v___x_1166_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1166_, 0, v___x_811_);
lean_ctor_set(v___x_1166_, 1, v___x_1164_);
lean_ctor_set(v___x_1166_, 2, v___x_1165_);
lean_ctor_set(v___x_1166_, 3, v___x_828_);
v___x_1167_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_1166_, v___x_820_);
v___x_1168_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__224));
v___x_1169_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__225));
v___x_1170_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1170_, 0, v___x_811_);
lean_ctor_set(v___x_1170_, 1, v___x_1169_);
v___x_1171_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__227, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__227_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__227);
v___x_1172_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__229));
v___x_1173_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1173_, 0, v___x_811_);
lean_ctor_set(v___x_1173_, 1, v___x_1171_);
lean_ctor_set(v___x_1173_, 2, v___x_1172_);
lean_ctor_set(v___x_1173_, 3, v___x_828_);
v___x_1174_ = l_Lean_Syntax_node2(v___x_811_, v___x_857_, v___x_1173_, v___x_1131_);
lean_inc(v___x_1174_);
v___x_1175_ = l_Lean_Syntax_node3(v___x_811_, v___x_921_, v___x_930_, v___x_1174_, v___x_944_);
v___x_1176_ = l_Lean_Syntax_node2(v___x_811_, v___x_1168_, v___x_1170_, v___x_1175_);
v___x_1177_ = l_Lean_Syntax_node3(v___x_811_, v___x_921_, v___x_930_, v___x_1176_, v___x_944_);
v___x_1178_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_1177_);
v___x_1179_ = l_Lean_Syntax_node2(v___x_811_, v___x_857_, v___x_1140_, v___x_1178_);
v___x_1180_ = l_Lean_Syntax_node3(v___x_811_, v___x_902_, v___x_1179_, v___x_907_, v___x_1174_);
v___x_1181_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_1180_);
v___x_1182_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_1137_, v___x_1181_);
v___x_1183_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_1167_, v___x_1182_, v___x_1161_);
v___x_1184_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_1123_, v___x_1183_);
v___x_1185_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__230));
v___x_1186_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__231));
v___x_1187_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1187_, 0, v___x_811_);
lean_ctor_set(v___x_1187_, 1, v___x_1185_);
v___x_1188_ = l_Lean_Syntax_node1(v___x_811_, v___x_1186_, v___x_1187_);
v___x_1189_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_1188_);
lean_inc(v___x_1189_);
v___x_1190_ = l_Lean_Syntax_node7(v___x_811_, v___x_818_, v___x_820_, v___x_1122_, v___x_820_, v___x_1189_, v___x_820_, v___x_820_, v___x_820_);
v___x_1191_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__233, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__233_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__233);
v___x_1192_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__234));
v___x_1193_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1193_, 0, v___x_811_);
lean_ctor_set(v___x_1193_, 1, v___x_1191_);
lean_ctor_set(v___x_1193_, 2, v___x_1192_);
lean_ctor_set(v___x_1193_, 3, v___x_828_);
v___x_1194_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_1193_, v___x_820_);
v___x_1195_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__236));
v___x_1196_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__237));
v___x_1197_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___x_811_);
lean_ctor_set(v___x_1197_, 1, v___x_1196_);
lean_inc_ref(v___x_1197_);
v___x_1198_ = l_Lean_Syntax_node3(v___x_811_, v___x_1195_, v___x_837_, v___x_1197_, v___x_840_);
v___x_1199_ = l_Lean_Syntax_node3(v___x_811_, v___x_921_, v___x_930_, v___x_1198_, v___x_944_);
v___x_1200_ = l_Lean_Syntax_node3(v___x_811_, v___x_1095_, v___x_1199_, v___x_1100_, v___x_1140_);
v___x_1201_ = l_Lean_Syntax_node3(v___x_811_, v___x_1195_, v___x_905_, v___x_1197_, v___x_863_);
v___x_1202_ = l_Lean_Syntax_node3(v___x_811_, v___x_902_, v___x_1200_, v___x_907_, v___x_1201_);
v___x_1203_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_1202_);
v___x_1204_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_848_, v___x_1203_);
v___x_1205_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_1194_, v___x_1204_, v___x_1161_);
lean_inc_n(v___x_1190_, 6);
v___x_1206_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_1190_, v___x_1205_);
v___x_1207_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__239, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__239_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__239);
v___x_1208_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__240));
v___x_1209_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1209_, 0, v___x_811_);
lean_ctor_set(v___x_1209_, 1, v___x_1207_);
lean_ctor_set(v___x_1209_, 2, v___x_1208_);
lean_ctor_set(v___x_1209_, 3, v___x_828_);
v___x_1210_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_1209_, v___x_820_);
v___x_1211_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__242));
v___x_1212_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__243));
v___x_1213_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1213_, 0, v___x_811_);
lean_ctor_set(v___x_1213_, 1, v___x_1212_);
lean_inc_ref(v___x_1213_);
v___x_1214_ = l_Lean_Syntax_node3(v___x_811_, v___x_1211_, v___x_837_, v___x_1213_, v___x_840_);
v___x_1215_ = l_Lean_Syntax_node3(v___x_811_, v___x_921_, v___x_930_, v___x_1214_, v___x_944_);
v___x_1216_ = l_Lean_Syntax_node3(v___x_811_, v___x_1095_, v___x_1215_, v___x_1100_, v___x_1140_);
v___x_1217_ = l_Lean_Syntax_node3(v___x_811_, v___x_1211_, v___x_905_, v___x_1213_, v___x_863_);
v___x_1218_ = l_Lean_Syntax_node3(v___x_811_, v___x_902_, v___x_1216_, v___x_907_, v___x_1217_);
v___x_1219_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_1218_);
v___x_1220_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_848_, v___x_1219_);
v___x_1221_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_1210_, v___x_1220_, v___x_1161_);
v___x_1222_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_1190_, v___x_1221_);
v___x_1223_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__245, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__245_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__245);
v___x_1224_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__246));
v___x_1225_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1225_, 0, v___x_811_);
lean_ctor_set(v___x_1225_, 1, v___x_1223_);
lean_ctor_set(v___x_1225_, 2, v___x_1224_);
lean_ctor_set(v___x_1225_, 3, v___x_828_);
v___x_1226_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_1225_, v___x_820_);
v___x_1227_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__248));
v___x_1228_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__249));
v___x_1229_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1229_, 0, v___x_811_);
lean_ctor_set(v___x_1229_, 1, v___x_1228_);
lean_inc_ref(v___x_1229_);
v___x_1230_ = l_Lean_Syntax_node3(v___x_811_, v___x_1227_, v___x_837_, v___x_1229_, v___x_840_);
v___x_1231_ = l_Lean_Syntax_node3(v___x_811_, v___x_921_, v___x_930_, v___x_1230_, v___x_944_);
v___x_1232_ = l_Lean_Syntax_node3(v___x_811_, v___x_1095_, v___x_1231_, v___x_1100_, v___x_1140_);
v___x_1233_ = l_Lean_Syntax_node3(v___x_811_, v___x_1227_, v___x_905_, v___x_1229_, v___x_863_);
v___x_1234_ = l_Lean_Syntax_node3(v___x_811_, v___x_902_, v___x_1232_, v___x_907_, v___x_1233_);
v___x_1235_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_1234_);
v___x_1236_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_848_, v___x_1235_);
v___x_1237_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_1226_, v___x_1236_, v___x_1161_);
v___x_1238_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_1190_, v___x_1237_);
v___x_1239_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__251, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__251_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__251);
v___x_1240_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__252));
v___x_1241_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1241_, 0, v___x_811_);
lean_ctor_set(v___x_1241_, 1, v___x_1239_);
lean_ctor_set(v___x_1241_, 2, v___x_1240_);
lean_ctor_set(v___x_1241_, 3, v___x_828_);
v___x_1242_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_1241_, v___x_820_);
v___x_1243_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__254));
v___x_1244_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__255));
v___x_1245_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1245_, 0, v___x_811_);
lean_ctor_set(v___x_1245_, 1, v___x_1244_);
v___x_1246_ = l_Lean_Syntax_node3(v___x_811_, v___x_1243_, v___x_837_, v___x_1245_, v___x_840_);
v___x_1247_ = l_Lean_Syntax_node3(v___x_811_, v___x_921_, v___x_930_, v___x_1246_, v___x_944_);
v___x_1248_ = l_Lean_Syntax_node3(v___x_811_, v___x_1095_, v___x_1247_, v___x_1100_, v___x_1140_);
v___x_1249_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__257, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__257_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__257);
v___x_1250_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__259));
v___x_1251_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1251_, 0, v___x_811_);
lean_ctor_set(v___x_1251_, 1, v___x_1249_);
lean_ctor_set(v___x_1251_, 2, v___x_1250_);
lean_ctor_set(v___x_1251_, 3, v___x_828_);
v___x_1252_ = l_Lean_Syntax_node2(v___x_811_, v___x_857_, v___x_1251_, v___x_864_);
v___x_1253_ = l_Lean_Syntax_node3(v___x_811_, v___x_902_, v___x_1248_, v___x_907_, v___x_1252_);
v___x_1254_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_1253_);
v___x_1255_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_848_, v___x_1254_);
v___x_1256_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_1242_, v___x_1255_, v___x_1161_);
v___x_1257_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_1190_, v___x_1256_);
v___x_1258_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__261, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__261_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__261);
v___x_1259_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__262));
v___x_1260_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1260_, 0, v___x_811_);
lean_ctor_set(v___x_1260_, 1, v___x_1258_);
lean_ctor_set(v___x_1260_, 2, v___x_1259_);
lean_ctor_set(v___x_1260_, 3, v___x_828_);
v___x_1261_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_1260_, v___x_820_);
v___x_1262_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__264));
v___x_1263_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__265));
v___x_1264_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1264_, 0, v___x_811_);
lean_ctor_set(v___x_1264_, 1, v___x_1263_);
v___x_1265_ = l_Lean_Syntax_node3(v___x_811_, v___x_1262_, v___x_837_, v___x_1264_, v___x_840_);
v___x_1266_ = l_Lean_Syntax_node3(v___x_811_, v___x_921_, v___x_930_, v___x_1265_, v___x_944_);
v___x_1267_ = l_Lean_Syntax_node3(v___x_811_, v___x_1095_, v___x_1266_, v___x_1100_, v___x_1140_);
v___x_1268_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__267, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__267_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__267);
v___x_1269_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__269));
v___x_1270_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1270_, 0, v___x_811_);
lean_ctor_set(v___x_1270_, 1, v___x_1268_);
lean_ctor_set(v___x_1270_, 2, v___x_1269_);
lean_ctor_set(v___x_1270_, 3, v___x_828_);
v___x_1271_ = l_Lean_Syntax_node2(v___x_811_, v___x_857_, v___x_1270_, v___x_864_);
v___x_1272_ = l_Lean_Syntax_node3(v___x_811_, v___x_902_, v___x_1267_, v___x_907_, v___x_1271_);
v___x_1273_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_1272_);
v___x_1274_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_848_, v___x_1273_);
v___x_1275_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_1261_, v___x_1274_, v___x_1161_);
v___x_1276_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_1190_, v___x_1275_);
v___x_1277_ = l_Lean_Syntax_node7(v___x_811_, v___x_818_, v___x_820_, v___x_820_, v___x_820_, v___x_1189_, v___x_820_, v___x_820_, v___x_820_);
v___x_1278_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__271, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__271_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__271);
v___x_1279_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__272));
v___x_1280_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1280_, 0, v___x_811_);
lean_ctor_set(v___x_1280_, 1, v___x_1278_);
lean_ctor_set(v___x_1280_, 2, v___x_1279_);
lean_ctor_set(v___x_1280_, 3, v___x_828_);
lean_inc_ref_n(v___x_1280_, 2);
v___x_1281_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_1280_, v___x_820_);
v___x_1282_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__274, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__274_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__274);
v___x_1283_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__275));
v___x_1284_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1284_, 0, v___x_811_);
lean_ctor_set(v___x_1284_, 1, v___x_1282_);
lean_ctor_set(v___x_1284_, 2, v___x_1283_);
lean_ctor_set(v___x_1284_, 3, v___x_828_);
v___x_1285_ = l_Lean_Syntax_node2(v___x_811_, v___x_857_, v___x_1284_, v___x_841_);
v___x_1286_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__277));
v___x_1287_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__278));
v___x_1288_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___x_811_);
lean_ctor_set(v___x_1288_, 1, v___x_1287_);
v___x_1289_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__279));
v___x_1290_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_811_);
lean_ctor_set(v___x_1290_, 1, v___x_1289_);
v___x_1291_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__280));
v___x_1292_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1292_, 0, v___x_811_);
lean_ctor_set(v___x_1292_, 1, v___x_1291_);
lean_inc_ref_n(v___x_1292_, 3);
lean_inc_ref_n(v___x_1290_, 3);
lean_inc_ref_n(v___x_1288_, 3);
v___x_1293_ = l_Lean_Syntax_node6(v___x_811_, v___x_1286_, v___x_1288_, v___x_854_, v___x_1290_, v___x_837_, v___x_1292_, v___x_840_);
lean_inc(v___x_1285_);
v___x_1294_ = l_Lean_Syntax_node3(v___x_811_, v___x_902_, v___x_1285_, v___x_907_, v___x_1293_);
v___x_1295_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_1294_);
v___x_1296_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_848_, v___x_1295_);
v___x_1297_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_1015_);
v___x_1298_ = l_Lean_Syntax_node1(v___x_811_, v___x_980_, v___x_1297_);
v___x_1299_ = l_Lean_Syntax_node1(v___x_811_, v___x_979_, v___x_1298_);
v___x_1300_ = l_Lean_Syntax_node2(v___x_811_, v___x_976_, v___x_978_, v___x_1299_);
v___x_1301_ = l_Lean_Syntax_node4(v___x_811_, v___x_869_, v___x_871_, v___x_1300_, v___x_877_, v___x_820_);
lean_inc(v___x_1301_);
v___x_1302_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_1281_, v___x_1296_, v___x_1301_);
lean_inc(v___x_1277_);
v___x_1303_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_1277_, v___x_1302_);
v___x_1304_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__282, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__282_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__282);
v___x_1305_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__283));
v___x_1306_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1306_, 0, v___x_811_);
lean_ctor_set(v___x_1306_, 1, v___x_1304_);
lean_ctor_set(v___x_1306_, 2, v___x_1305_);
lean_ctor_set(v___x_1306_, 3, v___x_828_);
lean_inc_ref_n(v___x_1306_, 2);
v___x_1307_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_1306_, v___x_820_);
v___x_1308_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__285, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__285_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__285);
v___x_1309_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__286));
v___x_1310_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1310_, 0, v___x_811_);
lean_ctor_set(v___x_1310_, 1, v___x_1308_);
lean_ctor_set(v___x_1310_, 2, v___x_1309_);
lean_ctor_set(v___x_1310_, 3, v___x_828_);
v___x_1311_ = l_Lean_Syntax_node2(v___x_811_, v___x_857_, v___x_1310_, v___x_841_);
v___x_1312_ = l_Lean_Syntax_node6(v___x_811_, v___x_1286_, v___x_1288_, v___x_854_, v___x_1290_, v___x_840_, v___x_1292_, v___x_837_);
lean_inc(v___x_1311_);
v___x_1313_ = l_Lean_Syntax_node3(v___x_811_, v___x_902_, v___x_1311_, v___x_907_, v___x_1312_);
v___x_1314_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_1313_);
v___x_1315_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_848_, v___x_1314_);
v___x_1316_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_1307_, v___x_1315_, v___x_1301_);
v___x_1317_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_1277_, v___x_1316_);
v___x_1318_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__287));
v___x_1319_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__288));
v___x_1320_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___x_811_);
lean_ctor_set(v___x_1320_, 1, v___x_1318_);
v___x_1321_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__290));
v___x_1322_ = l_Lean_Syntax_node2(v___x_811_, v___x_812_, v___x_1280_, v___x_829_);
v___x_1323_ = l_Lean_Syntax_node4(v___x_811_, v___x_1321_, v_typeName_804_, v___x_924_, v___x_1322_, v___x_944_);
lean_inc_ref(v___x_1320_);
v___x_1324_ = l_Lean_Syntax_node2(v___x_811_, v___x_1319_, v___x_1320_, v___x_1323_);
v___x_1325_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__292, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__292_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__292);
v___x_1326_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__293));
v___x_1327_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1327_, 0, v___x_811_);
lean_ctor_set(v___x_1327_, 1, v___x_1325_);
lean_ctor_set(v___x_1327_, 2, v___x_1326_);
lean_ctor_set(v___x_1327_, 3, v___x_828_);
v___x_1328_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_1327_, v___x_820_);
v___x_1329_ = l_Lean_Syntax_node3(v___x_811_, v___x_921_, v___x_930_, v___x_1285_, v___x_944_);
v___x_1330_ = l_Lean_Syntax_node3(v___x_811_, v___x_1095_, v___x_1329_, v___x_1100_, v___x_1140_);
v___x_1331_ = l_Lean_Syntax_node6(v___x_811_, v___x_1286_, v___x_1288_, v___x_865_, v___x_1290_, v___x_905_, v___x_1292_, v___x_863_);
v___x_1332_ = l_Lean_Syntax_node3(v___x_811_, v___x_902_, v___x_1330_, v___x_907_, v___x_1331_);
v___x_1333_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_1332_);
v___x_1334_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_848_, v___x_1333_);
v___x_1335_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__295, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__295_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__295);
v___x_1336_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__296));
v___x_1337_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1337_, 0, v___x_811_);
lean_ctor_set(v___x_1337_, 1, v___x_1335_);
lean_ctor_set(v___x_1337_, 2, v___x_1336_);
lean_ctor_set(v___x_1337_, 3, v___x_828_);
v___x_1338_ = l_Lean_Syntax_node3(v___x_811_, v___x_1060_, v___x_820_, v___x_820_, v___x_1337_);
v___x_1339_ = l_Lean_Syntax_node3(v___x_811_, v___x_1060_, v___x_820_, v___x_820_, v___x_1280_);
v___x_1340_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__298, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__298_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__298);
v___x_1341_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__299));
v___x_1342_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1342_, 0, v___x_811_);
lean_ctor_set(v___x_1342_, 1, v___x_1340_);
lean_ctor_set(v___x_1342_, 2, v___x_1341_);
lean_ctor_set(v___x_1342_, 3, v___x_828_);
v___x_1343_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_1140_);
v___x_1344_ = l_Lean_Syntax_node2(v___x_811_, v___x_857_, v___x_1342_, v___x_1343_);
v___x_1345_ = l_Lean_Syntax_node3(v___x_811_, v___x_1060_, v___x_820_, v___x_820_, v___x_1344_);
v___x_1346_ = l_Lean_Syntax_node3(v___x_811_, v___x_1060_, v___x_820_, v___x_820_, v___x_829_);
lean_inc(v___x_1346_);
lean_inc(v___x_1345_);
v___x_1347_ = l_Lean_Syntax_node7(v___x_811_, v___x_812_, v___x_1338_, v___x_920_, v___x_1339_, v___x_920_, v___x_1345_, v___x_920_, v___x_1346_);
v___x_1348_ = l_Lean_Syntax_node3(v___x_811_, v___x_812_, v___x_1059_, v___x_1347_, v___x_1064_);
v___x_1349_ = l_Lean_Syntax_node6(v___x_811_, v___x_1054_, v___x_1055_, v___x_1057_, v___x_820_, v___x_820_, v___x_1348_, v___x_820_);
v___x_1350_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_1349_);
v___x_1351_ = l_Lean_Syntax_node1(v___x_811_, v___x_980_, v___x_1350_);
v___x_1352_ = l_Lean_Syntax_node1(v___x_811_, v___x_979_, v___x_1351_);
v___x_1353_ = l_Lean_Syntax_node2(v___x_811_, v___x_976_, v___x_978_, v___x_1352_);
v___x_1354_ = l_Lean_Syntax_node4(v___x_811_, v___x_869_, v___x_871_, v___x_1353_, v___x_877_, v___x_820_);
v___x_1355_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_1328_, v___x_1334_, v___x_1354_);
v___x_1356_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_1190_, v___x_1355_);
v___x_1357_ = l_Lean_Syntax_node2(v___x_811_, v___x_812_, v___x_1306_, v___x_829_);
v___x_1358_ = l_Lean_Syntax_node4(v___x_811_, v___x_1321_, v_typeName_804_, v___x_924_, v___x_1357_, v___x_944_);
v___x_1359_ = l_Lean_Syntax_node2(v___x_811_, v___x_1319_, v___x_1320_, v___x_1358_);
v___x_1360_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__301, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__301_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__301);
v___x_1361_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__302));
v___x_1362_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1362_, 0, v___x_811_);
lean_ctor_set(v___x_1362_, 1, v___x_1360_);
lean_ctor_set(v___x_1362_, 2, v___x_1361_);
lean_ctor_set(v___x_1362_, 3, v___x_828_);
v___x_1363_ = l_Lean_Syntax_node2(v___x_811_, v___x_825_, v___x_1362_, v___x_820_);
v___x_1364_ = l_Lean_Syntax_node3(v___x_811_, v___x_921_, v___x_930_, v___x_1311_, v___x_944_);
v___x_1365_ = l_Lean_Syntax_node3(v___x_811_, v___x_1095_, v___x_1364_, v___x_1100_, v___x_1140_);
v___x_1366_ = l_Lean_Syntax_node6(v___x_811_, v___x_1286_, v___x_1288_, v___x_865_, v___x_1290_, v___x_863_, v___x_1292_, v___x_905_);
v___x_1367_ = l_Lean_Syntax_node3(v___x_811_, v___x_902_, v___x_1365_, v___x_907_, v___x_1366_);
v___x_1368_ = l_Lean_Syntax_node2(v___x_811_, v___x_849_, v___x_843_, v___x_1367_);
v___x_1369_ = l_Lean_Syntax_node2(v___x_811_, v___x_831_, v___x_848_, v___x_1368_);
v___x_1370_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__304, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__304_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__304);
v___x_1371_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__305));
v___x_1372_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1372_, 0, v___x_811_);
lean_ctor_set(v___x_1372_, 1, v___x_1370_);
lean_ctor_set(v___x_1372_, 2, v___x_1371_);
lean_ctor_set(v___x_1372_, 3, v___x_828_);
v___x_1373_ = l_Lean_Syntax_node3(v___x_811_, v___x_1060_, v___x_820_, v___x_820_, v___x_1372_);
v___x_1374_ = l_Lean_Syntax_node3(v___x_811_, v___x_1060_, v___x_820_, v___x_820_, v___x_1306_);
v___x_1375_ = l_Lean_Syntax_node7(v___x_811_, v___x_812_, v___x_1373_, v___x_920_, v___x_1374_, v___x_920_, v___x_1345_, v___x_920_, v___x_1346_);
v___x_1376_ = l_Lean_Syntax_node3(v___x_811_, v___x_812_, v___x_1059_, v___x_1375_, v___x_1064_);
v___x_1377_ = l_Lean_Syntax_node6(v___x_811_, v___x_1054_, v___x_1055_, v___x_1057_, v___x_820_, v___x_820_, v___x_1376_, v___x_820_);
v___x_1378_ = l_Lean_Syntax_node1(v___x_811_, v___x_812_, v___x_1377_);
v___x_1379_ = l_Lean_Syntax_node1(v___x_811_, v___x_980_, v___x_1378_);
v___x_1380_ = l_Lean_Syntax_node1(v___x_811_, v___x_979_, v___x_1379_);
v___x_1381_ = l_Lean_Syntax_node2(v___x_811_, v___x_976_, v___x_978_, v___x_1380_);
v___x_1382_ = l_Lean_Syntax_node4(v___x_811_, v___x_869_, v___x_871_, v___x_1381_, v___x_877_, v___x_820_);
v___x_1383_ = l_Lean_Syntax_node4(v___x_811_, v___x_823_, v___x_824_, v___x_1363_, v___x_1369_, v___x_1382_);
v___x_1384_ = l_Lean_Syntax_node2(v___x_811_, v___x_817_, v___x_1190_, v___x_1383_);
v___x_1385_ = lean_unsigned_to_nat(22u);
v___x_1386_ = lean_mk_empty_array_with_capacity(v___x_1385_);
v___x_1387_ = lean_array_push(v___x_1386_, v___x_816_);
v___x_1388_ = lean_array_push(v___x_1387_, v___x_880_);
v___x_1389_ = lean_array_push(v___x_1388_, v___x_897_);
v___x_1390_ = lean_array_push(v___x_1389_, v___x_952_);
v___x_1391_ = lean_array_push(v___x_1390_, v___x_1027_);
v___x_1392_ = lean_array_push(v___x_1391_, v___x_1040_);
v___x_1393_ = lean_array_push(v___x_1392_, v___x_1073_);
v___x_1394_ = lean_array_push(v___x_1393_, v___x_1086_);
v___x_1395_ = lean_array_push(v___x_1394_, v___x_1110_);
v___x_1396_ = lean_array_push(v___x_1395_, v___x_1163_);
v___x_1397_ = lean_array_push(v___x_1396_, v___x_1184_);
v___x_1398_ = lean_array_push(v___x_1397_, v___x_1206_);
v___x_1399_ = lean_array_push(v___x_1398_, v___x_1222_);
v___x_1400_ = lean_array_push(v___x_1399_, v___x_1238_);
v___x_1401_ = lean_array_push(v___x_1400_, v___x_1257_);
v___x_1402_ = lean_array_push(v___x_1401_, v___x_1276_);
v___x_1403_ = lean_array_push(v___x_1402_, v___x_1303_);
v___x_1404_ = lean_array_push(v___x_1403_, v___x_1317_);
v___x_1405_ = lean_array_push(v___x_1404_, v___x_1324_);
v___x_1406_ = lean_array_push(v___x_1405_, v___x_1356_);
v___x_1407_ = lean_array_push(v___x_1406_, v___x_1359_);
v___x_1408_ = lean_array_push(v___x_1407_, v___x_1384_);
v___x_1409_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1409_, 0, v___x_811_);
lean_ctor_set(v___x_1409_, 1, v___x_812_);
lean_ctor_set(v___x_1409_, 2, v___x_1408_);
v___x_1410_ = l_Lean_Syntax_getArgs(v___x_1409_);
lean_dec_ref_known(v___x_1409_, 3);
if (v_isISize_809_ == 0)
{
lean_object* v___x_1411_; lean_object* v_a_1412_; lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1445_; 
v___x_1411_ = l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__0(v_ref_801_, v_a_775_, v_a_776_);
v_a_1412_ = lean_ctor_get(v___x_1411_, 0);
v_a_1413_ = lean_ctor_get(v___x_1411_, 1);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1411_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1415_ = v___x_1411_;
v_isShared_1416_ = v_isSharedCheck_1445_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_inc(v_a_1412_);
lean_dec(v___x_1411_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1445_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
size_t v_sz_1417_; size_t v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1425_; 
v_sz_1417_ = lean_usize_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__307, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__307_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__307);
v___x_1418_ = ((size_t)0ULL);
v___x_1419_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__308, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__308_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__308);
v___x_1420_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1_spec__0(v___x_807_, v_sz_1417_, v___x_1418_, v___x_1419_);
v___x_1421_ = l_unsafeCast___redArg(v___x_1420_);
lean_dec_ref(v___x_1420_);
v___x_1422_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__309));
v___x_1423_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__310));
lean_inc(v_a_1412_);
if (v_isShared_1416_ == 0)
{
lean_ctor_set_tag(v___x_1415_, 2);
lean_ctor_set(v___x_1415_, 1, v___x_1422_);
v___x_1425_ = v___x_1415_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1412_);
lean_ctor_set(v_reuseFailAlloc_1444_, 1, v___x_1422_);
v___x_1425_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
lean_inc_n(v_a_1412_, 9);
v___x_1426_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1426_, 0, v_a_1412_);
lean_ctor_set(v___x_1426_, 1, v___x_1058_);
v___x_1427_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1427_, 0, v_a_1412_);
lean_ctor_set(v___x_1427_, 1, v___x_812_);
lean_ctor_set(v___x_1427_, 2, v___x_819_);
lean_inc_ref(v___x_1427_);
v___x_1428_ = l_Lean_Syntax_node1(v_a_1412_, v___x_1115_, v___x_1427_);
v___x_1429_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__312));
v___x_1430_ = lean_obj_once(&l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__314, &l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__314_once, _init_l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__314);
v___x_1431_ = ((lean_object*)(l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___closed__315));
v___x_1432_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1432_, 0, v_a_1412_);
lean_ctor_set(v___x_1432_, 1, v___x_1430_);
lean_ctor_set(v___x_1432_, 2, v___x_1431_);
lean_ctor_set(v___x_1432_, 3, v___x_828_);
v___x_1433_ = l_Lean_Syntax_node2(v_a_1412_, v___x_1429_, v___x_1432_, v___x_1427_);
v___x_1434_ = l_Lean_Syntax_node2(v_a_1412_, v___x_1114_, v___x_1428_, v___x_1433_);
v___x_1435_ = l_Lean_Syntax_node1(v_a_1412_, v___x_812_, v___x_1434_);
v___x_1436_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1436_, 0, v_a_1412_);
lean_ctor_set(v___x_1436_, 1, v___x_1063_);
v___x_1437_ = l_unsafeCast___redArg(v___x_1421_);
lean_dec(v___x_1421_);
v___x_1438_ = l_Array_append___redArg(v___x_819_, v___x_1437_);
lean_dec(v___x_1437_);
v___x_1439_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1439_, 0, v_a_1412_);
lean_ctor_set(v___x_1439_, 1, v___x_812_);
lean_ctor_set(v___x_1439_, 2, v___x_1438_);
v___x_1440_ = l_Lean_Syntax_node5(v_a_1412_, v___x_1423_, v___x_1425_, v___x_1426_, v___x_1435_, v___x_1436_, v___x_1439_);
v___x_1441_ = lean_array_push(v___x_1410_, v___x_1440_);
v___x_1442_ = lean_box(0);
v___x_1443_ = l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1(v___f_802_, v_typeName_804_, v___x_1442_, v___x_1441_, v_a_775_, v_a_1413_);
v___y_778_ = v___x_1443_;
goto v___jp_777_;
}
}
}
else
{
lean_object* v___x_1446_; lean_object* v___x_1447_; 
lean_dec(v___x_807_);
v___x_1446_ = lean_box(0);
v___x_1447_ = l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___lam__1(v___f_802_, v_typeName_804_, v___x_1446_, v___x_1410_, v_a_775_, v_a_776_);
v___y_778_ = v___x_1447_;
goto v___jp_777_;
}
}
v___jp_777_:
{
if (lean_obj_tag(v___y_778_) == 0)
{
lean_object* v_a_779_; lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_787_; 
v_a_779_ = lean_ctor_get(v___y_778_, 0);
v_a_780_ = lean_ctor_get(v___y_778_, 1);
v_isSharedCheck_787_ = !lean_is_exclusive(v___y_778_);
if (v_isSharedCheck_787_ == 0)
{
v___x_782_ = v___y_778_;
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_inc(v_a_779_);
lean_dec(v___y_778_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_785_; 
if (v_isShared_783_ == 0)
{
v___x_785_ = v___x_782_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_779_);
lean_ctor_set(v_reuseFailAlloc_786_, 1, v_a_780_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
else
{
lean_object* v_a_788_; lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_796_; 
v_a_788_ = lean_ctor_get(v___y_778_, 0);
v_a_789_ = lean_ctor_get(v___y_778_, 1);
v_isSharedCheck_796_ = !lean_is_exclusive(v___y_778_);
if (v_isSharedCheck_796_ == 0)
{
v___x_791_ = v___y_778_;
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_inc(v_a_788_);
lean_dec(v___y_778_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_794_; 
if (v_isShared_792_ == 0)
{
v___x_794_ = v___x_791_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_a_788_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v_a_789_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1___boxed(lean_object* v_x_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_){
_start:
{
lean_object* v_res_1451_; 
v_res_1451_ = l___aux__Init__Data__SInt__Lemmas______macroRules__commandDeclare__int__theorems______1(v_x_1448_, v_a_1449_, v_a_1450_);
lean_dec_ref(v_a_1449_);
return v_res_1451_;
}
}
lean_object* runtime_initialize_Init_Data_Nat_Bitwise_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_SInt_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_SInt_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_BitVec_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_BitVec_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_Order(uint8_t builtin);
lean_object* runtime_initialize_Init_ByCases(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_BitVec_Bitblast(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_BitVec_Bootstrap(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_DivMod_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_LemmasAux(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_Pow(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_SInt_Lemmas(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Nat_Bitwise_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_SInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_SInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_BitVec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_BitVec_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_BitVec_Bitblast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_BitVec_Bootstrap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_DivMod_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_LemmasAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_Pow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_SInt_Lemmas(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Nat_Bitwise_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_SInt_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_SInt_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_BitVec_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_BitVec_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Int_Order(uint8_t builtin);
lean_object* initialize_Init_ByCases(uint8_t builtin);
lean_object* initialize_Init_Data_BitVec_Bitblast(uint8_t builtin);
lean_object* initialize_Init_Data_BitVec_Bootstrap(uint8_t builtin);
lean_object* initialize_Init_Data_Int_DivMod_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Int_LemmasAux(uint8_t builtin);
lean_object* initialize_Init_Data_Int_Pow(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Lemmas(uint8_t builtin);
lean_object* initialize_Init_System_Platform(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_SInt_Lemmas(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Nat_Bitwise_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_SInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_SInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_BitVec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_BitVec_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_BitVec_Bitblast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_BitVec_Bootstrap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_DivMod_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_LemmasAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_Pow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_SInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_SInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_SInt_Lemmas(builtin);
}
#ifdef __cplusplus
}
#endif

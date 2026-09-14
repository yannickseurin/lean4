// Lean compiler output
// Module: Lean.Server.CodeActions.Provider
// Imports: public import Std.Data.Iterators.Producers.Range public import Std.Data.Iterators.Combinators.StepSize public import Lean.Elab.BuiltinTerm public import Lean.Elab.BuiltinNotation public import Lean.Server.CodeActions.Attr
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_CodeAction_instInhabitedCommandCodeActions_default;
lean_object* l_Array_instInhabited___redArg();
extern lean_object* l_Lean_CodeAction_cmdCodeActionExt;
lean_object* l_Lean_Server_Snapshots_Snapshot_env(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_lspPosToUtf8Pos(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Server_Snapshots_Snapshot_infoTree(lean_object*);
lean_object* l_Lean_Elab_InfoTree_foldInfoTree___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Server_instInhabitedRequestError_default;
lean_object* l_instInhabitedEIO___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailInfo(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_updateContext_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_stx(lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_instBEqRange_beq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_foldInfo___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_CodeAction_holeCodeActionExt;
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Server_addBuiltinCodeActionProvider(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_CodeAction_holeCodeActionProvider_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_CodeAction_holeCodeActionProvider_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_CodeAction_holeCodeActionProvider_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_CodeAction_holeCodeActionProvider_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__0 = (const lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__0_value;
static const lean_string_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__1 = (const lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__1_value;
static const lean_string_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__2 = (const lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__2_value;
static const lean_string_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "elabHole"};
static const lean_object* l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__3 = (const lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__4_value_aux_0),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__4_value_aux_1),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__4_value_aux_2),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(6, 231, 135, 173, 201, 53, 99, 157)}};
static const lean_object* l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__4 = (const lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__4_value;
static const lean_string_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "elabSyntheticHole"};
static const lean_object* l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__5 = (const lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__5_value;
static const lean_ctor_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__6_value_aux_0),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__6_value_aux_1),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__6_value_aux_2),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(54, 70, 171, 41, 20, 127, 159, 116)}};
static const lean_object* l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__6 = (const lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__6_value;
static const lean_string_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "elabSorry"};
static const lean_object* l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__7 = (const lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__7_value;
static const lean_ctor_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__8_value_aux_0),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__8_value_aux_1),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__8_value_aux_2),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(188, 135, 76, 60, 43, 16, 249, 86)}};
static const lean_object* l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__8 = (const lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__9 = (const lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__9_value;
static const lean_ctor_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__6_value),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__9_value)}};
static const lean_object* l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__10 = (const lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__10_value;
static const lean_ctor_object l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__4_value),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__10_value)}};
static const lean_object* l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__11 = (const lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_CodeAction_holeCodeActionProvider___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_holeCodeActionProvider___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_holeCodeActionProvider_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_holeCodeActionProvider_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_CodeAction_holeCodeActionProvider___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_CodeAction_holeCodeActionProvider___closed__0;
static lean_once_cell_t l_Lean_CodeAction_holeCodeActionProvider___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_CodeAction_holeCodeActionProvider___closed__1;
static const lean_array_object l_Lean_CodeAction_holeCodeActionProvider___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_CodeAction_holeCodeActionProvider___closed__2 = (const lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___closed__2_value;
static lean_once_cell_t l_Lean_CodeAction_holeCodeActionProvider___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_CodeAction_holeCodeActionProvider___closed__3;
static const lean_array_object l_Lean_CodeAction_holeCodeActionProvider___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_CodeAction_holeCodeActionProvider___closed__4 = (const lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_CodeAction_holeCodeActionProvider(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_holeCodeActionProvider___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "CodeAction"};
static const lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___closed__0 = (const lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___closed__0_value;
static const lean_string_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "holeCodeActionProvider"};
static const lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___closed__1 = (const lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(173, 156, 186, 144, 130, 73, 162, 22)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(136, 16, 220, 55, 95, 189, 101, 35)}};
static const lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___closed__2 = (const lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1();
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_tactic_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_tactic_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_tacticSeq_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_tacticSeq_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_visit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_visit___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_merge(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_merge___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__2 = (const lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__2_value;
static const lean_string_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__1 = (const lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__1_value;
static const lean_string_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__0 = (const lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__3 = (const lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__3_value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__4 = (const lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__4_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeqBracketed"};
static const lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__5 = (const lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__5_value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__5_value),LEAN_SCALAR_PTR_LITERAL(142, 80, 121, 250, 245, 54, 71, 145)}};
static const lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__6 = (const lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_findTactic_x3f(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1_spec__4___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1_spec__4___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_findInfoTree_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2_spec__3___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2_spec__3___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_findInfoTree_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_CodeAction_cmdCodeActionProvider_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_CodeAction_cmdCodeActionProvider_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_CodeAction_cmdCodeActionProvider_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_CodeAction_cmdCodeActionProvider_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_cmdCodeActionProvider___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_cmdCodeActionProvider___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Server.CodeActions.Provider"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.CodeAction.cmdCodeActionProvider"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_CodeAction_cmdCodeActionProvider___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_CodeAction_cmdCodeActionProvider___closed__0;
static const lean_array_object l_Lean_CodeAction_cmdCodeActionProvider___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_CodeAction_cmdCodeActionProvider___closed__1 = (const lean_object*)&l_Lean_CodeAction_cmdCodeActionProvider___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_CodeAction_cmdCodeActionProvider(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_cmdCodeActionProvider___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "cmdCodeActionProvider"};
static const lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1___closed__0 = (const lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(173, 156, 186, 144, 130, 73, 162, 22)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(224, 13, 245, 170, 192, 34, 91, 12)}};
static const lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1___closed__1 = (const lean_object*)&l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1();
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_CodeAction_holeCodeActionProvider_spec__0(lean_object* v___y_1_){
_start:
{
lean_object* v_doc_3_; lean_object* v___x_4_; 
v_doc_3_ = lean_ctor_get(v___y_1_, 1);
lean_inc_ref(v_doc_3_);
v___x_4_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4_, 0, v_doc_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_CodeAction_holeCodeActionProvider_spec__0___boxed(lean_object* v___y_5_, lean_object* v___y_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lean_Server_RequestM_readDoc___at___00Lean_CodeAction_holeCodeActionProvider_spec__0(v___y_5_);
lean_dec_ref(v___y_5_);
return v_res_7_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_CodeAction_holeCodeActionProvider_spec__1(lean_object* v_a_8_, lean_object* v_x_9_){
_start:
{
if (lean_obj_tag(v_x_9_) == 0)
{
uint8_t v___x_10_; 
v___x_10_ = 0;
return v___x_10_;
}
else
{
lean_object* v_head_11_; lean_object* v_tail_12_; uint8_t v___x_13_; 
v_head_11_ = lean_ctor_get(v_x_9_, 0);
v_tail_12_ = lean_ctor_get(v_x_9_, 1);
v___x_13_ = lean_name_eq(v_a_8_, v_head_11_);
if (v___x_13_ == 0)
{
v_x_9_ = v_tail_12_;
goto _start;
}
else
{
return v___x_13_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_CodeAction_holeCodeActionProvider_spec__1___boxed(lean_object* v_a_15_, lean_object* v_x_16_){
_start:
{
uint8_t v_res_17_; lean_object* v_r_18_; 
v_res_17_ = l_List_elem___at___00Lean_CodeAction_holeCodeActionProvider_spec__1(v_a_15_, v_x_16_);
lean_dec(v_x_16_);
lean_dec(v_a_15_);
v_r_18_ = lean_box(v_res_17_);
return v_r_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_holeCodeActionProvider___lam__0(lean_object* v___x_49_, lean_object* v___x_50_, lean_object* v_ctx_51_, lean_object* v_info_52_, lean_object* v_result_53_){
_start:
{
if (lean_obj_tag(v_info_52_) == 1)
{
lean_object* v_i_54_; uint8_t v___y_56_; lean_object* v_toElabInfo_59_; lean_object* v_elaborator_60_; lean_object* v_stx_61_; lean_object* v___x_62_; uint8_t v___x_63_; 
v_i_54_ = lean_ctor_get(v_info_52_, 0);
v_toElabInfo_59_ = lean_ctor_get(v_i_54_, 0);
v_elaborator_60_ = lean_ctor_get(v_toElabInfo_59_, 0);
v_stx_61_ = lean_ctor_get(v_toElabInfo_59_, 1);
v___x_62_ = ((lean_object*)(l_Lean_CodeAction_holeCodeActionProvider___lam__0___closed__11));
v___x_63_ = l_List_elem___at___00Lean_CodeAction_holeCodeActionProvider_spec__1(v_elaborator_60_, v___x_62_);
if (v___x_63_ == 0)
{
lean_dec_ref(v_ctx_51_);
return v_result_53_;
}
else
{
lean_object* v___x_64_; 
v___x_64_ = l_Lean_Syntax_getPos_x3f(v_stx_61_, v___x_63_);
if (lean_obj_tag(v___x_64_) == 1)
{
lean_object* v_val_65_; lean_object* v___x_66_; 
v_val_65_ = lean_ctor_get(v___x_64_, 0);
lean_inc(v_val_65_);
lean_dec_ref_known(v___x_64_, 1);
v___x_66_ = l_Lean_Syntax_getTailPos_x3f(v_stx_61_, v___x_63_);
if (lean_obj_tag(v___x_66_) == 1)
{
lean_object* v_val_67_; uint8_t v___x_68_; 
v_val_67_ = lean_ctor_get(v___x_66_, 0);
lean_inc(v_val_67_);
lean_dec_ref_known(v___x_66_, 1);
v___x_68_ = lean_nat_dec_le(v_val_65_, v___x_49_);
lean_dec(v_val_65_);
if (v___x_68_ == 0)
{
lean_dec(v_val_67_);
v___y_56_ = v___x_68_;
goto v___jp_55_;
}
else
{
uint8_t v___x_69_; 
v___x_69_ = lean_nat_dec_le(v___x_50_, v_val_67_);
lean_dec(v_val_67_);
v___y_56_ = v___x_69_;
goto v___jp_55_;
}
}
else
{
lean_dec(v___x_66_);
lean_dec(v_val_65_);
lean_dec_ref(v_ctx_51_);
return v_result_53_;
}
}
else
{
lean_dec(v___x_64_);
lean_dec_ref(v_ctx_51_);
return v_result_53_;
}
}
v___jp_55_:
{
if (v___y_56_ == 0)
{
lean_dec_ref(v_ctx_51_);
return v_result_53_;
}
else
{
lean_object* v___x_57_; lean_object* v___x_58_; 
lean_inc_ref(v_i_54_);
v___x_57_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_57_, 0, v_ctx_51_);
lean_ctor_set(v___x_57_, 1, v_i_54_);
v___x_58_ = lean_array_push(v_result_53_, v___x_57_);
return v___x_58_;
}
}
}
else
{
lean_dec_ref(v_ctx_51_);
return v_result_53_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_holeCodeActionProvider___lam__0___boxed(lean_object* v___x_70_, lean_object* v___x_71_, lean_object* v_ctx_72_, lean_object* v_info_73_, lean_object* v_result_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Lean_CodeAction_holeCodeActionProvider___lam__0(v___x_70_, v___x_71_, v_ctx_72_, v_info_73_, v_result_74_);
lean_dec_ref(v_info_73_);
lean_dec(v___x_71_);
lean_dec(v___x_70_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_holeCodeActionProvider_spec__2(lean_object* v_params_76_, lean_object* v_snap_77_, lean_object* v_fst_78_, lean_object* v_snd_79_, lean_object* v_as_80_, size_t v_i_81_, size_t v_stop_82_, lean_object* v_b_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_a_87_; uint8_t v___x_91_; 
v___x_91_ = lean_usize_dec_eq(v_i_81_, v_stop_82_);
if (v___x_91_ == 0)
{
lean_object* v___x_1554__overap_92_; lean_object* v___x_93_; 
v___x_1554__overap_92_ = lean_array_uget_borrowed(v_as_80_, v_i_81_);
lean_inc(v___x_1554__overap_92_);
lean_inc_ref(v___y_84_);
lean_inc_ref(v_snd_79_);
lean_inc_ref(v_fst_78_);
lean_inc_ref(v_snap_77_);
lean_inc_ref(v_params_76_);
v___x_93_ = lean_apply_6(v___x_1554__overap_92_, v_params_76_, v_snap_77_, v_fst_78_, v_snd_79_, v___y_84_, lean_box(0));
if (lean_obj_tag(v___x_93_) == 0)
{
lean_object* v_a_94_; lean_object* v___x_95_; 
v_a_94_ = lean_ctor_get(v___x_93_, 0);
lean_inc(v_a_94_);
lean_dec_ref_known(v___x_93_, 1);
v___x_95_ = l_Array_append___redArg(v_b_83_, v_a_94_);
lean_dec(v_a_94_);
v_a_87_ = v___x_95_;
goto v___jp_86_;
}
else
{
lean_dec_ref(v_b_83_);
if (lean_obj_tag(v___x_93_) == 0)
{
lean_object* v_a_96_; 
v_a_96_ = lean_ctor_get(v___x_93_, 0);
lean_inc(v_a_96_);
lean_dec_ref_known(v___x_93_, 1);
v_a_87_ = v_a_96_;
goto v___jp_86_;
}
else
{
lean_dec_ref(v_snd_79_);
lean_dec_ref(v_fst_78_);
lean_dec_ref(v_snap_77_);
lean_dec_ref(v_params_76_);
return v___x_93_;
}
}
}
else
{
lean_object* v___x_97_; 
lean_dec_ref(v_snd_79_);
lean_dec_ref(v_fst_78_);
lean_dec_ref(v_snap_77_);
lean_dec_ref(v_params_76_);
v___x_97_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_97_, 0, v_b_83_);
return v___x_97_;
}
v___jp_86_:
{
size_t v___x_88_; size_t v___x_89_; 
v___x_88_ = ((size_t)1ULL);
v___x_89_ = lean_usize_add(v_i_81_, v___x_88_);
v_i_81_ = v___x_89_;
v_b_83_ = v_a_87_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_holeCodeActionProvider_spec__2___boxed(lean_object* v_params_98_, lean_object* v_snap_99_, lean_object* v_fst_100_, lean_object* v_snd_101_, lean_object* v_as_102_, lean_object* v_i_103_, lean_object* v_stop_104_, lean_object* v_b_105_, lean_object* v___y_106_, lean_object* v___y_107_){
_start:
{
size_t v_i_boxed_108_; size_t v_stop_boxed_109_; lean_object* v_res_110_; 
v_i_boxed_108_ = lean_unbox_usize(v_i_103_);
lean_dec(v_i_103_);
v_stop_boxed_109_ = lean_unbox_usize(v_stop_104_);
lean_dec(v_stop_104_);
v_res_110_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_holeCodeActionProvider_spec__2(v_params_98_, v_snap_99_, v_fst_100_, v_snd_101_, v_as_102_, v_i_boxed_108_, v_stop_boxed_109_, v_b_105_, v___y_106_);
lean_dec_ref(v___y_106_);
lean_dec_ref(v_as_102_);
return v_res_110_;
}
}
static lean_object* _init_l_Lean_CodeAction_holeCodeActionProvider___closed__0(void){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Array_instInhabited___redArg();
return v___x_111_;
}
}
static lean_object* _init_l_Lean_CodeAction_holeCodeActionProvider___closed__1(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = lean_obj_once(&l_Lean_CodeAction_holeCodeActionProvider___closed__0, &l_Lean_CodeAction_holeCodeActionProvider___closed__0_once, _init_l_Lean_CodeAction_holeCodeActionProvider___closed__0);
v___x_113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
return v___x_113_;
}
}
static lean_object* _init_l_Lean_CodeAction_holeCodeActionProvider___closed__3(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = lean_box(0);
v___x_117_ = l_unsafeCast___redArg(v___x_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_holeCodeActionProvider(lean_object* v_params_120_, lean_object* v_snap_121_, lean_object* v_a_122_){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v_a_126_; lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_168_; 
v___x_124_ = lean_obj_once(&l_Lean_CodeAction_holeCodeActionProvider___closed__1, &l_Lean_CodeAction_holeCodeActionProvider___closed__1_once, _init_l_Lean_CodeAction_holeCodeActionProvider___closed__1);
v___x_125_ = l_Lean_Server_RequestM_readDoc___at___00Lean_CodeAction_holeCodeActionProvider_spec__0(v_a_122_);
v_a_126_ = lean_ctor_get(v___x_125_, 0);
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_125_);
if (v_isSharedCheck_168_ == 0)
{
v___x_128_ = v___x_125_;
v_isShared_129_ = v_isSharedCheck_168_;
goto v_resetjp_127_;
}
else
{
lean_inc(v_a_126_);
lean_dec(v___x_125_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_168_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v_toEditableDocumentCore_130_; lean_object* v_meta_131_; lean_object* v_range_132_; lean_object* v_text_133_; lean_object* v_start_134_; lean_object* v_end_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___f_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
v_toEditableDocumentCore_130_ = lean_ctor_get(v_a_126_, 0);
lean_inc_ref(v_toEditableDocumentCore_130_);
lean_dec(v_a_126_);
v_meta_131_ = lean_ctor_get(v_toEditableDocumentCore_130_, 0);
lean_inc_ref(v_meta_131_);
lean_dec_ref(v_toEditableDocumentCore_130_);
v_range_132_ = lean_ctor_get(v_params_120_, 3);
v_text_133_ = lean_ctor_get(v_meta_131_, 3);
lean_inc_ref(v_text_133_);
lean_dec_ref(v_meta_131_);
v_start_134_ = lean_ctor_get(v_range_132_, 0);
v_end_135_ = lean_ctor_get(v_range_132_, 1);
lean_inc_ref(v_start_134_);
v___x_136_ = l_Lean_FileMap_lspPosToUtf8Pos(v_text_133_, v_start_134_);
lean_inc_ref(v_end_135_);
v___x_137_ = l_Lean_FileMap_lspPosToUtf8Pos(v_text_133_, v_end_135_);
lean_dec_ref(v_text_133_);
v___f_138_ = lean_alloc_closure((void*)(l_Lean_CodeAction_holeCodeActionProvider___lam__0___boxed), 5, 2);
lean_closure_set(v___f_138_, 0, v___x_137_);
lean_closure_set(v___f_138_, 1, v___x_136_);
v___x_139_ = lean_unsigned_to_nat(0u);
v___x_140_ = ((lean_object*)(l_Lean_CodeAction_holeCodeActionProvider___closed__2));
lean_inc_ref(v_snap_121_);
v___x_141_ = l_Lean_Server_Snapshots_Snapshot_infoTree(v_snap_121_);
v___x_142_ = l_Lean_Elab_InfoTree_foldInfo___redArg(v___f_138_, v___x_140_, v___x_141_);
v___x_143_ = lean_array_get_size(v___x_142_);
v___x_144_ = lean_unsigned_to_nat(1u);
v___x_145_ = lean_nat_dec_eq(v___x_143_, v___x_144_);
if (v___x_145_ == 0)
{
lean_object* v___x_147_; 
lean_dec(v___x_142_);
lean_dec_ref(v_snap_121_);
lean_dec_ref(v_params_120_);
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 0, v___x_140_);
v___x_147_ = v___x_128_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_140_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
else
{
lean_object* v___x_149_; lean_object* v_fst_150_; lean_object* v_snd_151_; lean_object* v___x_152_; lean_object* v_toEnvExtension_153_; lean_object* v_asyncMode_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v_snd_158_; lean_object* v___x_159_; lean_object* v___x_160_; uint8_t v___x_161_; 
v___x_149_ = lean_array_fget(v___x_142_, v___x_139_);
lean_dec(v___x_142_);
v_fst_150_ = lean_ctor_get(v___x_149_, 0);
lean_inc(v_fst_150_);
v_snd_151_ = lean_ctor_get(v___x_149_, 1);
lean_inc(v_snd_151_);
lean_dec(v___x_149_);
v___x_152_ = l_Lean_CodeAction_holeCodeActionExt;
v_toEnvExtension_153_ = lean_ctor_get(v___x_152_, 0);
v_asyncMode_154_ = lean_ctor_get(v_toEnvExtension_153_, 2);
v___x_155_ = l_Lean_Server_Snapshots_Snapshot_env(v_snap_121_);
v___x_156_ = lean_obj_once(&l_Lean_CodeAction_holeCodeActionProvider___closed__3, &l_Lean_CodeAction_holeCodeActionProvider___closed__3_once, _init_l_Lean_CodeAction_holeCodeActionProvider___closed__3);
v___x_157_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_124_, v___x_152_, v___x_155_, v_asyncMode_154_, v___x_156_);
v_snd_158_ = lean_ctor_get(v___x_157_, 1);
lean_inc(v_snd_158_);
lean_dec(v___x_157_);
v___x_159_ = ((lean_object*)(l_Lean_CodeAction_holeCodeActionProvider___closed__4));
v___x_160_ = lean_array_get_size(v_snd_158_);
v___x_161_ = lean_nat_dec_lt(v___x_139_, v___x_160_);
if (v___x_161_ == 0)
{
lean_object* v___x_163_; 
lean_dec(v_snd_158_);
lean_dec(v_snd_151_);
lean_dec(v_fst_150_);
lean_dec_ref(v_snap_121_);
lean_dec_ref(v_params_120_);
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 0, v___x_159_);
v___x_163_ = v___x_128_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v___x_159_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
else
{
size_t v___x_165_; size_t v___x_166_; lean_object* v___x_167_; 
lean_del_object(v___x_128_);
v___x_165_ = ((size_t)0ULL);
v___x_166_ = lean_usize_of_nat(v___x_160_);
v___x_167_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_holeCodeActionProvider_spec__2(v_params_120_, v_snap_121_, v_fst_150_, v_snd_151_, v_snd_158_, v___x_165_, v___x_166_, v___x_159_, v_a_122_);
lean_dec(v_snd_158_);
return v___x_167_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_holeCodeActionProvider___boxed(lean_object* v_params_169_, lean_object* v_snap_170_, lean_object* v_a_171_, lean_object* v_a_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Lean_CodeAction_holeCodeActionProvider(v_params_169_, v_snap_170_, v_a_171_);
lean_dec_ref(v_a_171_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1(){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_181_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___closed__2));
v___x_182_ = lean_alloc_closure((void*)(l_Lean_CodeAction_holeCodeActionProvider___boxed), 4, 0);
v___x_183_ = l_Lean_Server_addBuiltinCodeActionProvider(v___x_181_, v___x_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1___boxed(lean_object* v_a_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1();
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_ctorIdx(lean_object* v_x_186_){
_start:
{
if (lean_obj_tag(v_x_186_) == 0)
{
lean_object* v___x_187_; 
v___x_187_ = lean_unsigned_to_nat(0u);
return v___x_187_;
}
else
{
lean_object* v___x_188_; 
v___x_188_ = lean_unsigned_to_nat(1u);
return v___x_188_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_ctorIdx___boxed(lean_object* v_x_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l_Lean_CodeAction_FindTacticResult_ctorIdx(v_x_189_);
lean_dec_ref(v_x_189_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_ctorElim___redArg(lean_object* v_t_191_, lean_object* v_k_192_){
_start:
{
if (lean_obj_tag(v_t_191_) == 0)
{
lean_object* v_a_193_; lean_object* v___x_194_; 
v_a_193_ = lean_ctor_get(v_t_191_, 0);
lean_inc(v_a_193_);
lean_dec_ref_known(v_t_191_, 1);
v___x_194_ = lean_apply_1(v_k_192_, v_a_193_);
return v___x_194_;
}
else
{
uint8_t v_preferred_195_; lean_object* v_insertIdx_196_; lean_object* v_a_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v_preferred_195_ = lean_ctor_get_uint8(v_t_191_, sizeof(void*)*2);
v_insertIdx_196_ = lean_ctor_get(v_t_191_, 0);
lean_inc(v_insertIdx_196_);
v_a_197_ = lean_ctor_get(v_t_191_, 1);
lean_inc(v_a_197_);
lean_dec_ref_known(v_t_191_, 2);
v___x_198_ = lean_box(v_preferred_195_);
v___x_199_ = lean_apply_3(v_k_192_, v___x_198_, v_insertIdx_196_, v_a_197_);
return v___x_199_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_ctorElim(lean_object* v_motive_200_, lean_object* v_ctorIdx_201_, lean_object* v_t_202_, lean_object* v_h_203_, lean_object* v_k_204_){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = l_Lean_CodeAction_FindTacticResult_ctorElim___redArg(v_t_202_, v_k_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_ctorElim___boxed(lean_object* v_motive_206_, lean_object* v_ctorIdx_207_, lean_object* v_t_208_, lean_object* v_h_209_, lean_object* v_k_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lean_CodeAction_FindTacticResult_ctorElim(v_motive_206_, v_ctorIdx_207_, v_t_208_, v_h_209_, v_k_210_);
lean_dec(v_ctorIdx_207_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_tactic_elim___redArg(lean_object* v_t_212_, lean_object* v_tactic_213_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l_Lean_CodeAction_FindTacticResult_ctorElim___redArg(v_t_212_, v_tactic_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_tactic_elim(lean_object* v_motive_215_, lean_object* v_t_216_, lean_object* v_h_217_, lean_object* v_tactic_218_){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = l_Lean_CodeAction_FindTacticResult_ctorElim___redArg(v_t_216_, v_tactic_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_tacticSeq_elim___redArg(lean_object* v_t_220_, lean_object* v_tacticSeq_221_){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = l_Lean_CodeAction_FindTacticResult_ctorElim___redArg(v_t_220_, v_tacticSeq_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_FindTacticResult_tacticSeq_elim(lean_object* v_motive_223_, lean_object* v_t_224_, lean_object* v_h_225_, lean_object* v_tacticSeq_226_){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = l_Lean_CodeAction_FindTacticResult_ctorElim___redArg(v_t_224_, v_tacticSeq_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_visit(lean_object* v_range_228_, lean_object* v_stx_229_, lean_object* v_prev_x3f_230_){
_start:
{
uint8_t v___x_231_; lean_object* v___x_232_; 
v___x_231_ = 1;
v___x_232_ = l_Lean_Syntax_getPos_x3f(v_stx_229_, v___x_231_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v___x_233_; 
lean_dec(v_prev_x3f_230_);
v___x_233_ = lean_box(0);
return v___x_233_;
}
else
{
lean_object* v_val_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_265_; 
v_val_234_ = lean_ctor_get(v___x_232_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_265_ == 0)
{
v___x_236_ = v___x_232_;
v_isShared_237_ = v_isSharedCheck_265_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_val_234_);
lean_dec(v___x_232_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_265_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___y_239_; 
if (lean_obj_tag(v_prev_x3f_230_) == 0)
{
lean_inc(v_val_234_);
v___y_239_ = v_val_234_;
goto v___jp_238_;
}
else
{
lean_object* v_val_264_; 
v_val_264_ = lean_ctor_get(v_prev_x3f_230_, 0);
lean_inc(v_val_264_);
lean_dec_ref_known(v_prev_x3f_230_, 1);
v___y_239_ = v_val_264_;
goto v___jp_238_;
}
v___jp_238_:
{
lean_object* v_start_240_; lean_object* v_stop_241_; uint8_t v___x_242_; 
v_start_240_ = lean_ctor_get(v_range_228_, 0);
v_stop_241_ = lean_ctor_get(v_range_228_, 1);
v___x_242_ = lean_nat_dec_le(v___y_239_, v_start_240_);
lean_dec(v___y_239_);
if (v___x_242_ == 0)
{
lean_object* v___x_243_; 
lean_del_object(v___x_236_);
lean_dec(v_val_234_);
v___x_243_ = lean_box(0);
return v___x_243_;
}
else
{
lean_object* v___x_244_; 
v___x_244_ = l_Lean_Syntax_getTailInfo(v_stx_229_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v_trailing_245_; lean_object* v_endPos_246_; lean_object* v_startPos_247_; lean_object* v_stopPos_248_; lean_object* v___x_249_; lean_object* v___x_250_; uint8_t v___x_251_; 
v_trailing_245_ = lean_ctor_get(v___x_244_, 2);
lean_inc_ref(v_trailing_245_);
v_endPos_246_ = lean_ctor_get(v___x_244_, 3);
lean_inc(v_endPos_246_);
lean_dec_ref_known(v___x_244_, 4);
v_startPos_247_ = lean_ctor_get(v_trailing_245_, 1);
lean_inc(v_startPos_247_);
v_stopPos_248_ = lean_ctor_get(v_trailing_245_, 2);
lean_inc(v_stopPos_248_);
lean_dec_ref(v_trailing_245_);
v___x_249_ = lean_nat_sub(v_stopPos_248_, v_startPos_247_);
lean_dec(v_startPos_247_);
lean_dec(v_stopPos_248_);
v___x_250_ = lean_nat_add(v_endPos_246_, v___x_249_);
lean_dec(v___x_249_);
v___x_251_ = lean_nat_dec_le(v_stop_241_, v___x_250_);
lean_dec(v___x_250_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; 
lean_dec(v_endPos_246_);
lean_del_object(v___x_236_);
lean_dec(v_val_234_);
v___x_252_ = lean_box(0);
return v___x_252_;
}
else
{
uint8_t v___x_253_; 
v___x_253_ = lean_nat_dec_le(v_val_234_, v_start_240_);
lean_dec(v_val_234_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; lean_object* v___x_256_; 
lean_dec(v_endPos_246_);
v___x_254_ = lean_box(v___x_253_);
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 0, v___x_254_);
v___x_256_ = v___x_236_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v___x_254_);
v___x_256_ = v_reuseFailAlloc_257_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
return v___x_256_;
}
}
else
{
uint8_t v___x_258_; lean_object* v___x_259_; lean_object* v___x_261_; 
v___x_258_ = lean_nat_dec_le(v_stop_241_, v_endPos_246_);
lean_dec(v_endPos_246_);
v___x_259_ = lean_box(v___x_258_);
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 0, v___x_259_);
v___x_261_ = v___x_236_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_259_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
else
{
lean_object* v___x_263_; 
lean_dec(v___x_244_);
lean_del_object(v___x_236_);
lean_dec(v_val_234_);
v___x_263_ = lean_box(0);
return v___x_263_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_visit___boxed(lean_object* v_range_266_, lean_object* v_stx_267_, lean_object* v_prev_x3f_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_visit(v_range_266_, v_stx_267_, v_prev_x3f_268_);
lean_dec(v_stx_267_);
lean_dec_ref(v_range_266_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_merge(lean_object* v_r_u2081_270_, lean_object* v_r_u2082_271_){
_start:
{
if (lean_obj_tag(v_r_u2081_270_) == 1)
{
lean_object* v_val_272_; 
v_val_272_ = lean_ctor_get(v_r_u2081_270_, 0);
if (lean_obj_tag(v_val_272_) == 1)
{
uint8_t v_preferred_273_; 
v_preferred_273_ = lean_ctor_get_uint8(v_val_272_, sizeof(void*)*2);
if (v_preferred_273_ == 1)
{
if (lean_obj_tag(v_r_u2082_271_) == 1)
{
uint8_t v_preferred_274_; 
v_preferred_274_ = lean_ctor_get_uint8(v_r_u2082_271_, sizeof(void*)*2);
if (v_preferred_274_ == 0)
{
lean_inc_ref(v_val_272_);
return v_val_272_;
}
else
{
lean_inc_ref(v_r_u2082_271_);
return v_r_u2082_271_;
}
}
else
{
lean_inc_ref(v_r_u2082_271_);
return v_r_u2082_271_;
}
}
else
{
lean_inc_ref(v_r_u2082_271_);
return v_r_u2082_271_;
}
}
else
{
lean_inc_ref(v_r_u2082_271_);
return v_r_u2082_271_;
}
}
else
{
lean_inc_ref(v_r_u2082_271_);
return v_r_u2082_271_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_merge___boxed(lean_object* v_r_u2081_275_, lean_object* v_r_u2082_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_merge(v_r_u2081_275_, v_r_u2082_276_);
lean_dec_ref(v_r_u2082_276_);
lean_dec(v_r_u2081_275_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__2___redArg(lean_object* v_upperBound_281_, lean_object* v___x_282_, lean_object* v_range_283_, lean_object* v_a_284_, lean_object* v_b_285_){
_start:
{
lean_object* v_a_287_; uint8_t v___x_291_; 
v___x_291_ = lean_nat_dec_lt(v_a_284_, v_upperBound_281_);
if (v___x_291_ == 0)
{
lean_dec(v_a_284_);
lean_dec_ref(v_range_283_);
lean_inc_ref(v_b_285_);
return v_b_285_;
}
else
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; uint8_t v___x_297_; lean_object* v___x_298_; 
v___x_292_ = lean_box(0);
v___x_293_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__2___redArg___closed__0));
v___x_294_ = lean_unsigned_to_nat(2u);
v___x_295_ = lean_nat_mul(v___x_294_, v_a_284_);
v___x_296_ = l_Lean_Syntax_getArg(v___x_282_, v___x_295_);
lean_dec(v___x_295_);
v___x_297_ = 0;
v___x_298_ = l_Lean_Syntax_getPos_x3f(v___x_296_, v___x_297_);
lean_dec(v___x_296_);
if (lean_obj_tag(v___x_298_) == 1)
{
lean_object* v_val_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_319_; 
v_val_299_ = lean_ctor_get(v___x_298_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_298_);
if (v_isSharedCheck_319_ == 0)
{
v___x_301_ = v___x_298_;
v_isShared_302_ = v_isSharedCheck_319_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_val_299_);
lean_dec(v___x_298_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_319_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v_stop_303_; lean_object* v___x_304_; lean_object* v___x_305_; uint8_t v___x_306_; 
v_stop_303_ = lean_ctor_get(v_range_283_, 1);
v___x_304_ = lean_unsigned_to_nat(1u);
v___x_305_ = lean_nat_add(v_stop_303_, v___x_304_);
v___x_306_ = lean_nat_dec_le(v___x_305_, v_val_299_);
lean_dec(v_val_299_);
lean_dec(v___x_305_);
if (v___x_306_ == 0)
{
lean_del_object(v___x_301_);
v_a_287_ = v___x_293_;
goto v___jp_286_;
}
else
{
lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_316_; 
v_isSharedCheck_316_ = !lean_is_exclusive(v_range_283_);
if (v_isSharedCheck_316_ == 0)
{
lean_object* v_unused_317_; lean_object* v_unused_318_; 
v_unused_317_ = lean_ctor_get(v_range_283_, 1);
lean_dec(v_unused_317_);
v_unused_318_ = lean_ctor_get(v_range_283_, 0);
lean_dec(v_unused_318_);
v___x_308_ = v_range_283_;
v_isShared_309_ = v_isSharedCheck_316_;
goto v_resetjp_307_;
}
else
{
lean_dec(v_range_283_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_316_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v___x_311_; 
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 0, v_a_284_);
v___x_311_ = v___x_301_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_284_);
v___x_311_ = v_reuseFailAlloc_315_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
lean_object* v___x_313_; 
if (v_isShared_309_ == 0)
{
lean_ctor_set(v___x_308_, 1, v___x_292_);
lean_ctor_set(v___x_308_, 0, v___x_311_);
v___x_313_ = v___x_308_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v___x_311_);
lean_ctor_set(v_reuseFailAlloc_314_, 1, v___x_292_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
}
}
else
{
lean_dec(v___x_298_);
v_a_287_ = v___x_293_;
goto v___jp_286_;
}
}
v___jp_286_:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = lean_unsigned_to_nat(1u);
v___x_289_ = lean_nat_add(v_a_284_, v___x_288_);
lean_dec(v_a_284_);
v_a_284_ = v___x_289_;
v_b_285_ = v_a_287_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__2___redArg___boxed(lean_object* v_upperBound_320_, lean_object* v___x_321_, lean_object* v_range_322_, lean_object* v_a_323_, lean_object* v_b_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__2___redArg(v_upperBound_320_, v___x_321_, v_range_322_, v_a_323_, v_b_324_);
lean_dec_ref(v_b_324_);
lean_dec(v___x_321_);
lean_dec(v_upperBound_320_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0___redArg___lam__0(lean_object* v_stx_326_, lean_object* v_a_327_, uint8_t v___x_328_, lean_object* v_snd_329_, lean_object* v_____r_330_, lean_object* v_childRes_331_){
_start:
{
lean_object* v___y_333_; lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = l_Lean_Syntax_getArg(v_stx_326_, v_a_327_);
v___x_338_ = l_Lean_Syntax_getTailPos_x3f(v___x_337_, v___x_328_);
lean_dec(v___x_337_);
if (lean_obj_tag(v___x_338_) == 0)
{
v___y_333_ = v_snd_329_;
goto v___jp_332_;
}
else
{
lean_dec(v_snd_329_);
v___y_333_ = v___x_338_;
goto v___jp_332_;
}
v___jp_332_:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v_childRes_331_);
lean_ctor_set(v___x_334_, 1, v___y_333_);
v___x_335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
v___x_336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
return v___x_336_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0___redArg___lam__0___boxed(lean_object* v_stx_339_, lean_object* v_a_340_, lean_object* v___x_341_, lean_object* v_snd_342_, lean_object* v_____r_343_, lean_object* v_childRes_344_){
_start:
{
uint8_t v___x_3798__boxed_345_; lean_object* v_res_346_; 
v___x_3798__boxed_345_ = lean_unbox(v___x_341_);
v_res_346_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0___redArg___lam__0(v_stx_339_, v_a_340_, v___x_3798__boxed_345_, v_snd_342_, v_____r_343_, v_childRes_344_);
lean_dec(v_a_340_);
lean_dec(v_stx_339_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__1___redArg(lean_object* v___y_357_, uint8_t v___x_358_, lean_object* v___x_359_, lean_object* v_range_360_, lean_object* v___x_361_, lean_object* v_preferred_362_, lean_object* v_a_363_, lean_object* v_b_364_){
_start:
{
lean_object* v_inner_365_; lean_object* v_next_366_; 
v_inner_365_ = lean_ctor_get(v_a_363_, 2);
lean_inc(v_inner_365_);
v_next_366_ = lean_ctor_get(v_inner_365_, 0);
lean_inc(v_next_366_);
if (lean_obj_tag(v_next_366_) == 0)
{
lean_object* v___x_367_; 
lean_dec(v_inner_365_);
lean_dec_ref(v_a_363_);
lean_dec_ref(v_preferred_362_);
lean_dec(v___x_361_);
lean_dec_ref(v_range_360_);
lean_dec(v___x_359_);
v___x_367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_367_, 0, v_b_364_);
return v___x_367_;
}
else
{
lean_object* v_nextIdx_368_; lean_object* v_n_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_430_; 
v_nextIdx_368_ = lean_ctor_get(v_a_363_, 0);
v_n_369_ = lean_ctor_get(v_a_363_, 1);
v_isSharedCheck_430_ = !lean_is_exclusive(v_a_363_);
if (v_isSharedCheck_430_ == 0)
{
lean_object* v_unused_431_; 
v_unused_431_ = lean_ctor_get(v_a_363_, 2);
lean_dec(v_unused_431_);
v___x_371_ = v_a_363_;
v_isShared_372_ = v_isSharedCheck_430_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_n_369_);
lean_inc(v_nextIdx_368_);
lean_dec(v_a_363_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_430_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v_upperBound_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_428_; 
v_upperBound_373_ = lean_ctor_get(v_inner_365_, 1);
v_isSharedCheck_428_ = !lean_is_exclusive(v_inner_365_);
if (v_isSharedCheck_428_ == 0)
{
lean_object* v_unused_429_; 
v_unused_429_ = lean_ctor_get(v_inner_365_, 0);
lean_dec(v_unused_429_);
v___x_375_ = v_inner_365_;
v_isShared_376_ = v_isSharedCheck_428_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_upperBound_373_);
lean_dec(v_inner_365_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_428_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v_val_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_427_; 
v_val_377_ = lean_ctor_get(v_next_366_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v_next_366_);
if (v_isSharedCheck_427_ == 0)
{
v___x_379_ = v_next_366_;
v_isShared_380_ = v_isSharedCheck_427_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_val_377_);
lean_dec(v_next_366_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_427_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_381_; uint8_t v___x_382_; 
v___x_381_ = lean_nat_add(v_val_377_, v_nextIdx_368_);
lean_dec(v_nextIdx_368_);
lean_dec(v_val_377_);
v___x_382_ = lean_nat_dec_lt(v___x_381_, v_upperBound_373_);
if (v___x_382_ == 0)
{
lean_object* v___x_384_; 
lean_dec(v___x_381_);
lean_del_object(v___x_375_);
lean_dec(v_upperBound_373_);
lean_del_object(v___x_371_);
lean_dec(v_n_369_);
lean_dec_ref(v_preferred_362_);
lean_dec(v___x_361_);
lean_dec_ref(v_range_360_);
lean_dec(v___x_359_);
if (v_isShared_380_ == 0)
{
lean_ctor_set(v___x_379_, 0, v_b_364_);
v___x_384_ = v___x_379_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v_b_364_);
v___x_384_ = v_reuseFailAlloc_385_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
return v___x_384_;
}
}
else
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_389_; 
v___x_386_ = lean_unsigned_to_nat(1u);
v___x_387_ = lean_nat_add(v___x_381_, v___x_386_);
if (v_isShared_380_ == 0)
{
lean_ctor_set(v___x_379_, 0, v___x_387_);
v___x_389_ = v___x_379_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v___x_387_);
v___x_389_ = v_reuseFailAlloc_426_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
lean_object* v___x_391_; 
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v___x_389_);
v___x_391_ = v___x_375_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v___x_389_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v_upperBound_373_);
v___x_391_ = v_reuseFailAlloc_425_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
lean_object* v___x_393_; 
lean_inc(v_n_369_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 2, v___x_391_);
lean_ctor_set(v___x_371_, 0, v_n_369_);
v___x_393_ = v___x_371_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v_n_369_);
lean_ctor_set(v_reuseFailAlloc_424_, 1, v_n_369_);
lean_ctor_set(v_reuseFailAlloc_424_, 2, v___x_391_);
v___x_393_ = v_reuseFailAlloc_424_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
lean_object* v___y_395_; lean_object* v_val_400_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_402_ = l_Lean_Syntax_getArg(v___x_359_, v___x_381_);
v___x_403_ = lean_box(0);
v___x_404_ = l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_visit(v_range_360_, v___x_402_, v___x_403_);
if (lean_obj_tag(v___x_404_) == 1)
{
lean_object* v_val_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v_val_405_ = lean_ctor_get(v___x_404_, 0);
lean_inc(v_val_405_);
lean_dec_ref_known(v___x_404_, 1);
lean_inc(v___x_359_);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_359_);
lean_ctor_set(v___x_406_, 1, v___x_381_);
lean_inc(v___x_361_);
v___x_407_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_407_, 0, v___x_406_);
lean_ctor_set(v___x_407_, 1, v___x_361_);
lean_inc(v___x_402_);
lean_inc_ref(v___x_407_);
lean_inc_ref(v_range_360_);
lean_inc_ref(v_preferred_362_);
v___x_408_ = l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go(v_preferred_362_, v_range_360_, v___x_407_, v___x_402_, v___x_403_);
if (lean_obj_tag(v___x_408_) == 0)
{
lean_dec_ref_known(v___x_407_, 2);
lean_dec(v_val_405_);
lean_dec(v___x_402_);
lean_dec_ref(v___x_393_);
lean_dec(v_b_364_);
lean_dec_ref(v_preferred_362_);
lean_dec(v___x_361_);
lean_dec_ref(v_range_360_);
lean_dec(v___x_359_);
return v___x_408_;
}
else
{
lean_object* v_val_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_422_; 
v_val_409_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_422_ == 0)
{
v___x_411_ = v___x_408_;
v_isShared_412_ = v_isSharedCheck_422_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_val_409_);
lean_dec(v___x_408_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_422_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
if (lean_obj_tag(v_val_409_) == 0)
{
uint8_t v___x_413_; 
v___x_413_ = lean_unbox(v_val_405_);
lean_dec(v_val_405_);
if (v___x_413_ == 0)
{
lean_del_object(v___x_411_);
lean_dec_ref_known(v___x_407_, 2);
lean_dec(v___x_402_);
v_a_363_ = v___x_393_;
goto _start;
}
else
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_419_; 
v___x_415_ = lean_unsigned_to_nat(0u);
v___x_416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_416_, 0, v___x_402_);
lean_ctor_set(v___x_416_, 1, v___x_415_);
v___x_417_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
lean_ctor_set(v___x_417_, 1, v___x_407_);
if (v_isShared_412_ == 0)
{
lean_ctor_set_tag(v___x_411_, 0);
lean_ctor_set(v___x_411_, 0, v___x_417_);
v___x_419_ = v___x_411_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_417_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
v_val_400_ = v___x_419_;
goto v___jp_399_;
}
}
}
else
{
lean_object* v_val_421_; 
lean_del_object(v___x_411_);
lean_dec_ref_known(v___x_407_, 2);
lean_dec(v_val_405_);
lean_dec(v___x_402_);
v_val_421_ = lean_ctor_get(v_val_409_, 0);
lean_inc(v_val_421_);
lean_dec_ref_known(v_val_409_, 1);
v_val_400_ = v_val_421_;
goto v___jp_399_;
}
}
}
}
else
{
lean_dec(v___x_404_);
lean_dec(v___x_402_);
lean_dec(v___x_381_);
v_a_363_ = v___x_393_;
goto _start;
}
v___jp_394_:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_merge(v___y_357_, v___y_395_);
lean_dec_ref(v___y_395_);
v___x_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_397_, 0, v___x_396_);
v_a_363_ = v___x_393_;
v_b_364_ = v___x_397_;
goto _start;
}
v___jp_399_:
{
if (lean_obj_tag(v_b_364_) == 0)
{
v___y_395_ = v_val_400_;
goto v___jp_394_;
}
else
{
lean_dec_ref_known(v_b_364_, 1);
if (v___x_358_ == 0)
{
v___y_395_ = v_val_400_;
goto v___jp_394_;
}
else
{
lean_object* v___x_401_; 
lean_dec_ref(v_val_400_);
lean_dec_ref(v___x_393_);
lean_dec_ref(v_preferred_362_);
lean_dec(v___x_361_);
lean_dec_ref(v_range_360_);
lean_dec(v___x_359_);
v___x_401_ = lean_box(0);
return v___x_401_;
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
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go(lean_object* v_preferred_438_, lean_object* v_range_439_, lean_object* v_stack_440_, lean_object* v_stx_441_, lean_object* v_prev_x3f_442_){
_start:
{
lean_object* v___x_443_; lean_object* v___x_444_; uint8_t v___x_445_; 
lean_inc(v_stx_441_);
v___x_443_ = l_Lean_Syntax_getKind(v_stx_441_);
v___x_444_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__3));
v___x_445_ = lean_name_eq(v___x_443_, v___x_444_);
lean_dec(v___x_443_);
if (v___x_445_ == 0)
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v_childRes_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_446_ = l_Lean_Syntax_getNumArgs(v_stx_441_);
v___x_447_ = lean_unsigned_to_nat(0u);
v_childRes_448_ = lean_box(0);
v___x_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_449_, 0, v_childRes_448_);
lean_ctor_set(v___x_449_, 1, v_prev_x3f_442_);
v___x_450_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0___redArg(v___x_446_, v_stx_441_, v_range_439_, v_stack_440_, v_preferred_438_, v___x_445_, v___x_447_, v___x_449_);
lean_dec(v___x_446_);
if (lean_obj_tag(v___x_450_) == 0)
{
return v_childRes_448_;
}
else
{
lean_object* v_val_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_459_; 
v_val_451_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_459_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_459_ == 0)
{
v___x_453_ = v___x_450_;
v_isShared_454_ = v_isSharedCheck_459_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_val_451_);
lean_dec(v___x_450_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_459_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v_fst_455_; lean_object* v___x_457_; 
v_fst_455_ = lean_ctor_get(v_val_451_, 0);
lean_inc(v_fst_455_);
lean_dec(v_val_451_);
if (v_isShared_454_ == 0)
{
lean_ctor_set(v___x_453_, 0, v_fst_455_);
v___x_457_ = v___x_453_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v_fst_455_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
return v___x_457_;
}
}
}
}
else
{
lean_object* v___x_460_; lean_object* v___y_462_; lean_object* v___y_463_; lean_object* v___y_464_; lean_object* v___y_482_; lean_object* v___y_483_; lean_object* v___y_484_; uint8_t v___y_485_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; uint8_t v_bracket_493_; lean_object* v___y_495_; lean_object* v___y_496_; lean_object* v___y_497_; lean_object* v___y_498_; lean_object* v___y_502_; 
lean_dec(v_prev_x3f_442_);
v___x_460_ = lean_unsigned_to_nat(0u);
v___x_490_ = l_Lean_Syntax_getArg(v_stx_441_, v___x_460_);
lean_inc(v___x_490_);
v___x_491_ = l_Lean_Syntax_getKind(v___x_490_);
v___x_492_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__6));
v_bracket_493_ = lean_name_eq(v___x_491_, v___x_492_);
lean_dec(v___x_491_);
if (v_bracket_493_ == 0)
{
v___y_502_ = v___x_460_;
goto v___jp_501_;
}
else
{
lean_object* v___x_521_; 
v___x_521_ = lean_unsigned_to_nat(1u);
v___y_502_ = v___x_521_;
goto v___jp_501_;
}
v___jp_461_:
{
lean_object* v_childRes_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v_childRes_465_ = lean_box(0);
v___x_466_ = l_Lean_Syntax_getNumArgs(v___y_463_);
v___x_467_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go___closed__4));
v___x_468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_468_, 0, v___x_467_);
lean_ctor_set(v___x_468_, 1, v___x_466_);
v___x_469_ = lean_unsigned_to_nat(1u);
v___x_470_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_470_, 0, v___x_460_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
lean_ctor_set(v___x_470_, 2, v___x_468_);
v___x_471_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__1___redArg(v___y_464_, v___x_445_, v___y_463_, v_range_439_, v___y_462_, v_preferred_438_, v___x_470_, v_childRes_465_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_dec(v___y_464_);
return v___x_471_;
}
else
{
lean_object* v_val_472_; 
v_val_472_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_val_472_);
if (lean_obj_tag(v_val_472_) == 0)
{
lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_479_ == 0)
{
lean_object* v_unused_480_; 
v_unused_480_ = lean_ctor_get(v___x_471_, 0);
lean_dec(v_unused_480_);
v___x_474_ = v___x_471_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_dec(v___x_471_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 0, v___y_464_);
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v___y_464_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
else
{
lean_dec_ref_known(v_val_472_, 1);
lean_dec(v___y_464_);
return v___x_471_;
}
}
}
v___jp_481_:
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
lean_inc(v___y_484_);
v___x_486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_486_, 0, v___y_484_);
lean_ctor_set(v___x_486_, 1, v___x_460_);
lean_inc(v___y_482_);
v___x_487_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
lean_ctor_set(v___x_487_, 1, v___y_482_);
v___x_488_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_488_, 0, v___y_483_);
lean_ctor_set(v___x_488_, 1, v___x_487_);
lean_ctor_set_uint8(v___x_488_, sizeof(void*)*2, v___y_485_);
v___x_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_489_, 0, v___x_488_);
v___y_462_ = v___y_482_;
v___y_463_ = v___y_484_;
v___y_464_ = v___x_489_;
goto v___jp_461_;
}
v___jp_494_:
{
if (v_bracket_493_ == 0)
{
lean_object* v___x_499_; uint8_t v___x_500_; 
lean_inc_ref(v_preferred_438_);
v___x_499_ = lean_apply_1(v_preferred_438_, v___y_496_);
v___x_500_ = lean_unbox(v___x_499_);
v___y_482_ = v___y_495_;
v___y_483_ = v___y_498_;
v___y_484_ = v___y_497_;
v___y_485_ = v___x_500_;
goto v___jp_481_;
}
else
{
lean_dec(v___y_496_);
v___y_482_ = v___y_495_;
v___y_483_ = v___y_498_;
v___y_484_ = v___y_497_;
v___y_485_ = v___x_445_;
goto v___jp_481_;
}
}
v___jp_501_:
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; uint8_t v___x_509_; lean_object* v___x_510_; 
lean_inc(v___y_502_);
lean_inc(v___x_490_);
v___x_503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_503_, 0, v___x_490_);
lean_ctor_set(v___x_503_, 1, v___y_502_);
v___x_504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_504_, 0, v_stx_441_);
lean_ctor_set(v___x_504_, 1, v___x_460_);
v___x_505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_505_, 0, v___x_504_);
lean_ctor_set(v___x_505_, 1, v_stack_440_);
v___x_506_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_503_);
lean_ctor_set(v___x_506_, 1, v___x_505_);
v___x_507_ = l_Lean_Syntax_getArg(v___x_490_, v___y_502_);
lean_dec(v___y_502_);
lean_dec(v___x_490_);
v___x_508_ = l_Lean_Syntax_getArg(v___x_507_, v___x_460_);
v___x_509_ = 0;
v___x_510_ = l_Lean_Syntax_getPos_x3f(v___x_508_, v___x_509_);
lean_dec(v___x_508_);
if (lean_obj_tag(v___x_510_) == 0)
{
lean_object* v___x_511_; 
v___x_511_ = lean_box(0);
v___y_462_ = v___x_506_;
v___y_463_ = v___x_507_;
v___y_464_ = v___x_511_;
goto v___jp_461_;
}
else
{
lean_object* v_val_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v_fst_516_; 
v_val_512_ = lean_ctor_get(v___x_510_, 0);
lean_inc(v_val_512_);
lean_dec_ref_known(v___x_510_, 1);
v___x_513_ = l_Lean_Syntax_getNumArgs(v___x_507_);
v___x_514_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__2___redArg___closed__0));
lean_inc_ref(v_range_439_);
v___x_515_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__2___redArg(v___x_513_, v___x_507_, v_range_439_, v___x_460_, v___x_514_);
v_fst_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_fst_516_);
lean_dec_ref(v___x_515_);
if (lean_obj_tag(v_fst_516_) == 0)
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_517_ = lean_unsigned_to_nat(1u);
v___x_518_ = lean_nat_add(v___x_513_, v___x_517_);
lean_dec(v___x_513_);
v___x_519_ = lean_nat_shiftr(v___x_518_, v___x_517_);
lean_dec(v___x_518_);
v___y_495_ = v___x_506_;
v___y_496_ = v_val_512_;
v___y_497_ = v___x_507_;
v___y_498_ = v___x_519_;
goto v___jp_494_;
}
else
{
lean_object* v_val_520_; 
lean_dec(v___x_513_);
v_val_520_ = lean_ctor_get(v_fst_516_, 0);
lean_inc(v_val_520_);
lean_dec_ref_known(v_fst_516_, 1);
v___y_495_ = v___x_506_;
v___y_496_ = v_val_512_;
v___y_497_ = v___x_507_;
v___y_498_ = v_val_520_;
goto v___jp_494_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0___redArg(lean_object* v_upperBound_522_, lean_object* v_stx_523_, lean_object* v_range_524_, lean_object* v_stack_525_, lean_object* v_preferred_526_, uint8_t v___x_527_, lean_object* v_a_528_, lean_object* v_b_529_){
_start:
{
lean_object* v___y_531_; uint8_t v___x_546_; 
v___x_546_ = lean_nat_dec_lt(v_a_528_, v_upperBound_522_);
if (v___x_546_ == 0)
{
lean_object* v___x_547_; 
lean_dec(v_a_528_);
lean_dec_ref(v_preferred_526_);
lean_dec(v_stack_525_);
lean_dec_ref(v_range_524_);
lean_dec(v_stx_523_);
v___x_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_547_, 0, v_b_529_);
return v___x_547_;
}
else
{
lean_object* v_fst_548_; lean_object* v_snd_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_570_; 
v_fst_548_ = lean_ctor_get(v_b_529_, 0);
v_snd_549_ = lean_ctor_get(v_b_529_, 1);
v_isSharedCheck_570_ = !lean_is_exclusive(v_b_529_);
if (v_isSharedCheck_570_ == 0)
{
v___x_551_ = v_b_529_;
v_isShared_552_ = v_isSharedCheck_570_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_snd_549_);
lean_inc(v_fst_548_);
lean_dec(v_b_529_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_570_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = l_Lean_Syntax_getArg(v_stx_523_, v_a_528_);
lean_inc(v_snd_549_);
v___x_554_ = l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_visit(v_range_524_, v___x_553_, v_snd_549_);
if (lean_obj_tag(v___x_554_) == 1)
{
lean_object* v___x_556_; 
lean_dec_ref_known(v___x_554_, 1);
lean_inc(v_a_528_);
lean_inc(v_stx_523_);
if (v_isShared_552_ == 0)
{
lean_ctor_set(v___x_551_, 1, v_a_528_);
lean_ctor_set(v___x_551_, 0, v_stx_523_);
v___x_556_ = v___x_551_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v_stx_523_);
lean_ctor_set(v_reuseFailAlloc_567_, 1, v_a_528_);
v___x_556_ = v_reuseFailAlloc_567_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
lean_object* v___x_557_; lean_object* v___x_558_; 
lean_inc(v_stack_525_);
v___x_557_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
lean_ctor_set(v___x_557_, 1, v_stack_525_);
lean_inc(v_snd_549_);
lean_inc_ref(v_range_524_);
lean_inc_ref(v_preferred_526_);
v___x_558_ = l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go(v_preferred_526_, v_range_524_, v___x_557_, v___x_553_, v_snd_549_);
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v___x_559_; 
lean_dec(v_snd_549_);
lean_dec(v_fst_548_);
lean_dec(v_a_528_);
lean_dec_ref(v_preferred_526_);
lean_dec(v_stack_525_);
lean_dec_ref(v_range_524_);
lean_dec(v_stx_523_);
v___x_559_ = lean_box(0);
return v___x_559_;
}
else
{
lean_object* v_val_560_; 
v_val_560_ = lean_ctor_get(v___x_558_, 0);
lean_inc(v_val_560_);
lean_dec_ref_known(v___x_558_, 1);
if (lean_obj_tag(v_val_560_) == 1)
{
if (lean_obj_tag(v_fst_548_) == 0)
{
if (v___x_527_ == 0)
{
lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_561_ = lean_box(0);
v___x_562_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0___redArg___lam__0(v_stx_523_, v_a_528_, v___x_546_, v_snd_549_, v___x_561_, v_val_560_);
v___y_531_ = v___x_562_;
goto v___jp_530_;
}
else
{
lean_object* v___x_563_; 
lean_dec_ref_known(v_val_560_, 1);
lean_dec(v_snd_549_);
lean_dec(v_a_528_);
lean_dec_ref(v_preferred_526_);
lean_dec(v_stack_525_);
lean_dec_ref(v_range_524_);
lean_dec(v_stx_523_);
v___x_563_ = lean_box(0);
return v___x_563_;
}
}
else
{
lean_object* v___x_564_; 
lean_dec_ref_known(v_fst_548_, 1);
lean_dec_ref_known(v_val_560_, 1);
lean_dec(v_snd_549_);
lean_dec(v_a_528_);
lean_dec_ref(v_preferred_526_);
lean_dec(v_stack_525_);
lean_dec_ref(v_range_524_);
lean_dec(v_stx_523_);
v___x_564_ = lean_box(0);
return v___x_564_;
}
}
else
{
lean_object* v___x_565_; lean_object* v___x_566_; 
lean_dec(v_val_560_);
v___x_565_ = lean_box(0);
v___x_566_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0___redArg___lam__0(v_stx_523_, v_a_528_, v___x_546_, v_snd_549_, v___x_565_, v_fst_548_);
v___y_531_ = v___x_566_;
goto v___jp_530_;
}
}
}
}
else
{
lean_object* v___x_568_; lean_object* v___x_569_; 
lean_dec(v___x_554_);
lean_dec(v___x_553_);
lean_del_object(v___x_551_);
v___x_568_ = lean_box(0);
v___x_569_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0___redArg___lam__0(v_stx_523_, v_a_528_, v___x_546_, v_snd_549_, v___x_568_, v_fst_548_);
v___y_531_ = v___x_569_;
goto v___jp_530_;
}
}
}
v___jp_530_:
{
if (lean_obj_tag(v___y_531_) == 0)
{
lean_object* v___x_532_; 
lean_dec(v_a_528_);
lean_dec_ref(v_preferred_526_);
lean_dec(v_stack_525_);
lean_dec_ref(v_range_524_);
lean_dec(v_stx_523_);
v___x_532_ = lean_box(0);
return v___x_532_;
}
else
{
lean_object* v_val_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_545_; 
v_val_533_ = lean_ctor_get(v___y_531_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v___y_531_);
if (v_isSharedCheck_545_ == 0)
{
v___x_535_ = v___y_531_;
v_isShared_536_ = v_isSharedCheck_545_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_val_533_);
lean_dec(v___y_531_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_545_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
if (lean_obj_tag(v_val_533_) == 0)
{
lean_object* v_a_537_; lean_object* v___x_539_; 
lean_dec(v_a_528_);
lean_dec_ref(v_preferred_526_);
lean_dec(v_stack_525_);
lean_dec_ref(v_range_524_);
lean_dec(v_stx_523_);
v_a_537_ = lean_ctor_get(v_val_533_, 0);
lean_inc(v_a_537_);
lean_dec_ref_known(v_val_533_, 1);
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 0, v_a_537_);
v___x_539_ = v___x_535_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_a_537_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
else
{
lean_object* v_a_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
lean_del_object(v___x_535_);
v_a_541_ = lean_ctor_get(v_val_533_, 0);
lean_inc(v_a_541_);
lean_dec_ref_known(v_val_533_, 1);
v___x_542_ = lean_unsigned_to_nat(1u);
v___x_543_ = lean_nat_add(v_a_528_, v___x_542_);
lean_dec(v_a_528_);
v_a_528_ = v___x_543_;
v_b_529_ = v_a_541_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0___redArg___boxed(lean_object* v_upperBound_571_, lean_object* v_stx_572_, lean_object* v_range_573_, lean_object* v_stack_574_, lean_object* v_preferred_575_, lean_object* v___x_576_, lean_object* v_a_577_, lean_object* v_b_578_){
_start:
{
uint8_t v___x_3840__boxed_579_; lean_object* v_res_580_; 
v___x_3840__boxed_579_ = lean_unbox(v___x_576_);
v_res_580_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0___redArg(v_upperBound_571_, v_stx_572_, v_range_573_, v_stack_574_, v_preferred_575_, v___x_3840__boxed_579_, v_a_577_, v_b_578_);
lean_dec(v_upperBound_571_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__1___redArg___boxed(lean_object* v___y_581_, lean_object* v___x_582_, lean_object* v___x_583_, lean_object* v_range_584_, lean_object* v___x_585_, lean_object* v_preferred_586_, lean_object* v_a_587_, lean_object* v_b_588_){
_start:
{
uint8_t v___x_3871__boxed_589_; lean_object* v_res_590_; 
v___x_3871__boxed_589_ = lean_unbox(v___x_582_);
v_res_590_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__1___redArg(v___y_581_, v___x_3871__boxed_589_, v___x_583_, v_range_584_, v___x_585_, v_preferred_586_, v_a_587_, v_b_588_);
lean_dec(v___y_581_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0(lean_object* v_upperBound_591_, lean_object* v_stx_592_, lean_object* v_range_593_, lean_object* v_stack_594_, lean_object* v_preferred_595_, uint8_t v___x_596_, lean_object* v_inst_597_, lean_object* v_R_598_, lean_object* v_a_599_, lean_object* v_b_600_, lean_object* v_c_601_){
_start:
{
lean_object* v___x_602_; 
v___x_602_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0___redArg(v_upperBound_591_, v_stx_592_, v_range_593_, v_stack_594_, v_preferred_595_, v___x_596_, v_a_599_, v_b_600_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0___boxed(lean_object* v_upperBound_603_, lean_object* v_stx_604_, lean_object* v_range_605_, lean_object* v_stack_606_, lean_object* v_preferred_607_, lean_object* v___x_608_, lean_object* v_inst_609_, lean_object* v_R_610_, lean_object* v_a_611_, lean_object* v_b_612_, lean_object* v_c_613_){
_start:
{
uint8_t v___x_4243__boxed_614_; lean_object* v_res_615_; 
v___x_4243__boxed_614_ = lean_unbox(v___x_608_);
v_res_615_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__0(v_upperBound_603_, v_stx_604_, v_range_605_, v_stack_606_, v_preferred_607_, v___x_4243__boxed_614_, v_inst_609_, v_R_610_, v_a_611_, v_b_612_, v_c_613_);
lean_dec(v_upperBound_603_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__1(lean_object* v___y_616_, uint8_t v___x_617_, lean_object* v___x_618_, lean_object* v_range_619_, lean_object* v___x_620_, lean_object* v_preferred_621_, lean_object* v_inst_622_, lean_object* v_R_623_, lean_object* v_a_624_, lean_object* v_b_625_, lean_object* v_c_626_){
_start:
{
lean_object* v___x_627_; 
v___x_627_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__1___redArg(v___y_616_, v___x_617_, v___x_618_, v_range_619_, v___x_620_, v_preferred_621_, v_a_624_, v_b_625_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__1___boxed(lean_object* v___y_628_, lean_object* v___x_629_, lean_object* v___x_630_, lean_object* v_range_631_, lean_object* v___x_632_, lean_object* v_preferred_633_, lean_object* v_inst_634_, lean_object* v_R_635_, lean_object* v_a_636_, lean_object* v_b_637_, lean_object* v_c_638_){
_start:
{
uint8_t v___x_4254__boxed_639_; lean_object* v_res_640_; 
v___x_4254__boxed_639_ = lean_unbox(v___x_629_);
v_res_640_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__1(v___y_628_, v___x_4254__boxed_639_, v___x_630_, v_range_631_, v___x_632_, v_preferred_633_, v_inst_634_, v_R_635_, v_a_636_, v_b_637_, v_c_638_);
lean_dec(v___y_628_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__2(lean_object* v_upperBound_641_, lean_object* v___x_642_, lean_object* v_range_643_, lean_object* v_inst_644_, lean_object* v_R_645_, lean_object* v_a_646_, lean_object* v_b_647_, lean_object* v_c_648_){
_start:
{
lean_object* v___x_649_; 
v___x_649_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__2___redArg(v_upperBound_641_, v___x_642_, v_range_643_, v_a_646_, v_b_647_);
return v___x_649_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__2___boxed(lean_object* v_upperBound_650_, lean_object* v___x_651_, lean_object* v_range_652_, lean_object* v_inst_653_, lean_object* v_R_654_, lean_object* v_a_655_, lean_object* v_b_656_, lean_object* v_c_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go_spec__2(v_upperBound_650_, v___x_651_, v_range_652_, v_inst_653_, v_R_654_, v_a_655_, v_b_656_, v_c_657_);
lean_dec_ref(v_b_656_);
lean_dec(v___x_651_);
lean_dec(v_upperBound_650_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_findTactic_x3f(lean_object* v_preferred_659_, lean_object* v_range_660_, lean_object* v_root_661_){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_662_ = lean_box(0);
v___x_663_ = l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_visit(v_range_660_, v_root_661_, v___x_662_);
if (lean_obj_tag(v___x_663_) == 0)
{
lean_dec(v_root_661_);
lean_dec_ref(v_range_660_);
lean_dec_ref(v_preferred_659_);
return v___x_662_;
}
else
{
lean_object* v___x_664_; lean_object* v___x_665_; 
lean_dec_ref_known(v___x_663_, 1);
v___x_664_ = lean_box(0);
v___x_665_ = l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_findTactic_x3f_go(v_preferred_659_, v_range_660_, v___x_664_, v_root_661_, v___x_662_);
if (lean_obj_tag(v___x_665_) == 0)
{
return v___x_662_;
}
else
{
lean_object* v_val_666_; 
v_val_666_ = lean_ctor_get(v___x_665_, 0);
lean_inc(v_val_666_);
lean_dec_ref_known(v___x_665_, 1);
return v_val_666_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1_spec__4(lean_object* v_ctx_x3f_679_, lean_object* v_i_680_, lean_object* v_kind_681_, lean_object* v_tgtRange_682_, lean_object* v_f_683_, uint8_t v_canonicalOnly_684_, lean_object* v_as_685_, size_t v_sz_686_, size_t v_i_687_, lean_object* v_b_688_){
_start:
{
uint8_t v___x_689_; 
v___x_689_ = lean_usize_dec_lt(v_i_687_, v_sz_686_);
if (v___x_689_ == 0)
{
lean_object* v___x_690_; 
lean_dec_ref(v_f_683_);
lean_dec(v_ctx_x3f_679_);
v___x_690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_690_, 0, v_b_688_);
return v___x_690_;
}
else
{
lean_object* v_snd_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_716_; 
v_snd_691_ = lean_ctor_get(v_b_688_, 1);
v_isSharedCheck_716_ = !lean_is_exclusive(v_b_688_);
if (v_isSharedCheck_716_ == 0)
{
lean_object* v_unused_717_; 
v_unused_717_ = lean_ctor_get(v_b_688_, 0);
lean_dec(v_unused_717_);
v___x_693_ = v_b_688_;
v_isShared_694_ = v_isSharedCheck_716_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_snd_691_);
lean_dec(v_b_688_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_716_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v___x_695_; lean_object* v_a_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_695_ = lean_box(0);
v_a_696_ = lean_array_uget_borrowed(v_as_685_, v_i_687_);
lean_inc(v_ctx_x3f_679_);
v___x_697_ = l_Lean_Elab_Info_updateContext_x3f(v_ctx_x3f_679_, v_i_680_);
lean_inc_ref(v_f_683_);
lean_inc(v_a_696_);
v___x_698_ = l_Lean_CodeAction_findInfoTree_x3f(v_kind_681_, v_tgtRange_682_, v___x_697_, v_a_696_, v_f_683_, v_canonicalOnly_684_);
if (lean_obj_tag(v___x_698_) == 1)
{
lean_object* v___x_700_; 
lean_dec_ref(v_f_683_);
lean_dec(v_ctx_x3f_679_);
lean_inc_ref(v___x_698_);
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 1, v___x_695_);
lean_ctor_set(v___x_693_, 0, v___x_698_);
v___x_700_ = v___x_693_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v___x_698_);
lean_ctor_set(v_reuseFailAlloc_711_, 1, v___x_695_);
v___x_700_ = v_reuseFailAlloc_711_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_709_; 
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_709_ == 0)
{
lean_object* v_unused_710_; 
v_unused_710_ = lean_ctor_get(v___x_698_, 0);
lean_dec(v_unused_710_);
v___x_702_ = v___x_698_;
v_isShared_703_ = v_isSharedCheck_709_;
goto v_resetjp_701_;
}
else
{
lean_dec(v___x_698_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_709_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_705_; 
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 0, v___x_700_);
v___x_705_ = v___x_702_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v___x_700_);
v___x_705_ = v_reuseFailAlloc_708_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_706_, 0, v___x_705_);
lean_ctor_set(v___x_706_, 1, v_snd_691_);
v___x_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_707_, 0, v___x_706_);
return v___x_707_;
}
}
}
}
else
{
lean_object* v___x_712_; size_t v___x_713_; size_t v___x_714_; 
lean_dec(v___x_698_);
lean_del_object(v___x_693_);
lean_dec(v_snd_691_);
v___x_712_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1_spec__4___closed__1));
v___x_713_ = ((size_t)1ULL);
v___x_714_ = lean_usize_add(v_i_687_, v___x_713_);
v_i_687_ = v___x_714_;
v_b_688_ = v___x_712_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1(lean_object* v_ctx_x3f_718_, lean_object* v_i_719_, lean_object* v_kind_720_, lean_object* v_tgtRange_721_, lean_object* v_f_722_, uint8_t v_canonicalOnly_723_, lean_object* v_as_724_, size_t v_sz_725_, size_t v_i_726_, lean_object* v_b_727_){
_start:
{
uint8_t v___x_728_; 
v___x_728_ = lean_usize_dec_lt(v_i_726_, v_sz_725_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; 
lean_dec_ref(v_f_722_);
lean_dec(v_ctx_x3f_718_);
v___x_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_729_, 0, v_b_727_);
return v___x_729_;
}
else
{
lean_object* v_snd_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_755_; 
v_snd_730_ = lean_ctor_get(v_b_727_, 1);
v_isSharedCheck_755_ = !lean_is_exclusive(v_b_727_);
if (v_isSharedCheck_755_ == 0)
{
lean_object* v_unused_756_; 
v_unused_756_ = lean_ctor_get(v_b_727_, 0);
lean_dec(v_unused_756_);
v___x_732_ = v_b_727_;
v_isShared_733_ = v_isSharedCheck_755_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_snd_730_);
lean_dec(v_b_727_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_755_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_734_; lean_object* v_a_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_734_ = lean_box(0);
v_a_735_ = lean_array_uget_borrowed(v_as_724_, v_i_726_);
lean_inc(v_ctx_x3f_718_);
v___x_736_ = l_Lean_Elab_Info_updateContext_x3f(v_ctx_x3f_718_, v_i_719_);
lean_inc_ref(v_f_722_);
lean_inc(v_a_735_);
v___x_737_ = l_Lean_CodeAction_findInfoTree_x3f(v_kind_720_, v_tgtRange_721_, v___x_736_, v_a_735_, v_f_722_, v_canonicalOnly_723_);
if (lean_obj_tag(v___x_737_) == 1)
{
lean_object* v___x_739_; 
lean_dec_ref(v_f_722_);
lean_dec(v_ctx_x3f_718_);
lean_inc_ref(v___x_737_);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 1, v___x_734_);
lean_ctor_set(v___x_732_, 0, v___x_737_);
v___x_739_ = v___x_732_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v___x_737_);
lean_ctor_set(v_reuseFailAlloc_750_, 1, v___x_734_);
v___x_739_ = v_reuseFailAlloc_750_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_748_; 
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_748_ == 0)
{
lean_object* v_unused_749_; 
v_unused_749_ = lean_ctor_get(v___x_737_, 0);
lean_dec(v_unused_749_);
v___x_741_ = v___x_737_;
v_isShared_742_ = v_isSharedCheck_748_;
goto v_resetjp_740_;
}
else
{
lean_dec(v___x_737_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_748_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
lean_ctor_set(v___x_741_, 0, v___x_739_);
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_739_);
v___x_744_ = v_reuseFailAlloc_747_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_745_, 0, v___x_744_);
lean_ctor_set(v___x_745_, 1, v_snd_730_);
v___x_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
return v___x_746_;
}
}
}
}
else
{
lean_object* v___x_751_; size_t v___x_752_; size_t v___x_753_; lean_object* v___x_754_; 
lean_dec(v___x_737_);
lean_del_object(v___x_732_);
lean_dec(v_snd_730_);
v___x_751_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1___closed__1));
v___x_752_ = ((size_t)1ULL);
v___x_753_ = lean_usize_add(v_i_726_, v___x_752_);
v___x_754_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1_spec__4(v_ctx_x3f_718_, v_i_719_, v_kind_720_, v_tgtRange_721_, v_f_722_, v_canonicalOnly_723_, v_as_724_, v_sz_725_, v___x_753_, v___x_751_);
return v___x_754_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0(lean_object* v_ctx_x3f_757_, lean_object* v_i_758_, lean_object* v_kind_759_, lean_object* v_tgtRange_760_, lean_object* v_f_761_, uint8_t v_canonicalOnly_762_, lean_object* v_t_763_, lean_object* v_init_764_){
_start:
{
lean_object* v_root_765_; lean_object* v_tail_766_; lean_object* v___x_767_; 
v_root_765_ = lean_ctor_get(v_t_763_, 0);
v_tail_766_ = lean_ctor_get(v_t_763_, 1);
lean_inc_ref(v_f_761_);
lean_inc(v_ctx_x3f_757_);
lean_inc_ref(v_init_764_);
v___x_767_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0(v_init_764_, v_ctx_x3f_757_, v_i_758_, v_kind_759_, v_tgtRange_760_, v_f_761_, v_canonicalOnly_762_, v_root_765_, v_init_764_);
lean_dec_ref(v_init_764_);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_object* v___x_768_; 
lean_dec_ref(v_f_761_);
lean_dec(v_ctx_x3f_757_);
v___x_768_ = lean_box(0);
return v___x_768_;
}
else
{
lean_object* v_val_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_793_; 
v_val_769_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_793_ == 0)
{
v___x_771_ = v___x_767_;
v_isShared_772_ = v_isSharedCheck_793_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_val_769_);
lean_dec(v___x_767_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_793_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
if (lean_obj_tag(v_val_769_) == 0)
{
lean_object* v_a_773_; lean_object* v___x_775_; 
lean_dec_ref(v_f_761_);
lean_dec(v_ctx_x3f_757_);
v_a_773_ = lean_ctor_get(v_val_769_, 0);
lean_inc(v_a_773_);
lean_dec_ref_known(v_val_769_, 1);
if (v_isShared_772_ == 0)
{
lean_ctor_set(v___x_771_, 0, v_a_773_);
v___x_775_ = v___x_771_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_a_773_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
else
{
lean_object* v_a_777_; lean_object* v___x_778_; lean_object* v___x_779_; size_t v_sz_780_; size_t v___x_781_; lean_object* v___x_782_; 
lean_del_object(v___x_771_);
v_a_777_ = lean_ctor_get(v_val_769_, 0);
lean_inc(v_a_777_);
lean_dec_ref_known(v_val_769_, 1);
v___x_778_ = lean_box(0);
v___x_779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_779_, 0, v___x_778_);
lean_ctor_set(v___x_779_, 1, v_a_777_);
v_sz_780_ = lean_array_size(v_tail_766_);
v___x_781_ = ((size_t)0ULL);
v___x_782_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1(v_ctx_x3f_757_, v_i_758_, v_kind_759_, v_tgtRange_760_, v_f_761_, v_canonicalOnly_762_, v_tail_766_, v_sz_780_, v___x_781_, v___x_779_);
if (lean_obj_tag(v___x_782_) == 0)
{
return v___x_778_;
}
else
{
lean_object* v_val_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_792_; 
v_val_783_ = lean_ctor_get(v___x_782_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_782_);
if (v_isSharedCheck_792_ == 0)
{
v___x_785_ = v___x_782_;
v_isShared_786_ = v_isSharedCheck_792_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_val_783_);
lean_dec(v___x_782_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_792_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v_fst_787_; 
v_fst_787_ = lean_ctor_get(v_val_783_, 0);
if (lean_obj_tag(v_fst_787_) == 0)
{
lean_object* v_snd_788_; lean_object* v___x_790_; 
v_snd_788_ = lean_ctor_get(v_val_783_, 1);
lean_inc(v_snd_788_);
lean_dec(v_val_783_);
if (v_isShared_786_ == 0)
{
lean_ctor_set(v___x_785_, 0, v_snd_788_);
v___x_790_ = v___x_785_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_snd_788_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
else
{
lean_inc_ref(v_fst_787_);
lean_del_object(v___x_785_);
lean_dec(v_val_783_);
return v_fst_787_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_findInfoTree_x3f(lean_object* v_kind_794_, lean_object* v_tgtRange_795_, lean_object* v_ctx_x3f_796_, lean_object* v_t_797_, lean_object* v_f_798_, uint8_t v_canonicalOnly_799_){
_start:
{
switch(lean_obj_tag(v_t_797_))
{
case 0:
{
lean_object* v_i_800_; lean_object* v_t_801_; lean_object* v___x_802_; 
v_i_800_ = lean_ctor_get(v_t_797_, 0);
lean_inc_ref(v_i_800_);
v_t_801_ = lean_ctor_get(v_t_797_, 1);
lean_inc_ref(v_t_801_);
lean_dec_ref_known(v_t_797_, 2);
v___x_802_ = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(v_i_800_, v_ctx_x3f_796_);
v_ctx_x3f_796_ = v___x_802_;
v_t_797_ = v_t_801_;
goto _start;
}
case 1:
{
lean_object* v_i_804_; lean_object* v_children_805_; 
v_i_804_ = lean_ctor_get(v_t_797_, 0);
v_children_805_ = lean_ctor_get(v_t_797_, 1);
if (lean_obj_tag(v_ctx_x3f_796_) == 1)
{
lean_object* v_val_812_; uint8_t v___y_814_; lean_object* v___x_826_; lean_object* v___x_827_; 
v_val_812_ = lean_ctor_get(v_ctx_x3f_796_, 0);
v___x_826_ = l_Lean_Elab_Info_stx(v_i_804_);
v___x_827_ = l_Lean_Syntax_getRange_x3f(v___x_826_, v_canonicalOnly_799_);
if (lean_obj_tag(v___x_827_) == 1)
{
lean_object* v_val_828_; lean_object* v___x_829_; uint8_t v___x_830_; 
v_val_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_val_828_);
lean_dec_ref_known(v___x_827_, 1);
v___x_829_ = l_Lean_Syntax_getKind(v___x_826_);
v___x_830_ = lean_name_eq(v___x_829_, v_kind_794_);
lean_dec(v___x_829_);
if (v___x_830_ == 0)
{
lean_dec(v_val_828_);
v___y_814_ = v___x_830_;
goto v___jp_813_;
}
else
{
uint8_t v___x_831_; 
v___x_831_ = l_Lean_Syntax_instBEqRange_beq(v_val_828_, v_tgtRange_795_);
lean_dec(v_val_828_);
v___y_814_ = v___x_831_;
goto v___jp_813_;
}
}
else
{
lean_inc_ref(v_children_805_);
lean_inc_ref(v_i_804_);
lean_dec(v___x_827_);
lean_dec(v___x_826_);
lean_dec_ref_known(v_t_797_, 2);
goto v___jp_806_;
}
v___jp_813_:
{
if (v___y_814_ == 0)
{
lean_inc_ref(v_children_805_);
lean_inc_ref(v_i_804_);
lean_dec_ref_known(v_t_797_, 2);
goto v___jp_806_;
}
else
{
lean_object* v___x_815_; uint8_t v___x_816_; 
lean_inc_ref(v_f_798_);
lean_inc_ref(v_i_804_);
lean_inc(v_val_812_);
v___x_815_ = lean_apply_2(v_f_798_, v_val_812_, v_i_804_);
v___x_816_ = lean_unbox(v___x_815_);
if (v___x_816_ == 0)
{
lean_inc_ref(v_children_805_);
lean_inc_ref(v_i_804_);
lean_dec_ref_known(v_t_797_, 2);
goto v___jp_806_;
}
else
{
lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_824_; 
lean_inc(v_val_812_);
lean_dec_ref(v_f_798_);
v_isSharedCheck_824_ = !lean_is_exclusive(v_ctx_x3f_796_);
if (v_isSharedCheck_824_ == 0)
{
lean_object* v_unused_825_; 
v_unused_825_ = lean_ctor_get(v_ctx_x3f_796_, 0);
lean_dec(v_unused_825_);
v___x_818_ = v_ctx_x3f_796_;
v_isShared_819_ = v_isSharedCheck_824_;
goto v_resetjp_817_;
}
else
{
lean_dec(v_ctx_x3f_796_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_824_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v___x_820_; lean_object* v___x_822_; 
v___x_820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_820_, 0, v_val_812_);
lean_ctor_set(v___x_820_, 1, v_t_797_);
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 0, v___x_820_);
v___x_822_ = v___x_818_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v___x_820_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
return v___x_822_;
}
}
}
}
}
}
else
{
lean_inc_ref(v_children_805_);
lean_inc_ref(v_i_804_);
lean_dec_ref_known(v_t_797_, 2);
goto v___jp_806_;
}
v___jp_806_:
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_807_ = lean_box(0);
v___x_808_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1___closed__0));
v___x_809_ = l_Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0(v_ctx_x3f_796_, v_i_804_, v_kind_794_, v_tgtRange_795_, v_f_798_, v_canonicalOnly_799_, v_children_805_, v___x_808_);
lean_dec_ref(v_children_805_);
lean_dec_ref(v_i_804_);
if (lean_obj_tag(v___x_809_) == 0)
{
return v___x_807_;
}
else
{
lean_object* v_val_810_; lean_object* v_fst_811_; 
v_val_810_ = lean_ctor_get(v___x_809_, 0);
lean_inc(v_val_810_);
lean_dec_ref_known(v___x_809_, 1);
v_fst_811_ = lean_ctor_get(v_val_810_, 0);
lean_inc(v_fst_811_);
lean_dec(v_val_810_);
if (lean_obj_tag(v_fst_811_) == 0)
{
return v___x_807_;
}
else
{
return v_fst_811_;
}
}
}
}
default: 
{
lean_object* v___x_832_; 
lean_dec_ref(v_f_798_);
lean_dec_ref(v_t_797_);
lean_dec(v_ctx_x3f_796_);
v___x_832_ = lean_box(0);
return v___x_832_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2_spec__3(lean_object* v_ctx_x3f_842_, lean_object* v_i_843_, lean_object* v_kind_844_, lean_object* v_tgtRange_845_, lean_object* v_f_846_, uint8_t v_canonicalOnly_847_, lean_object* v_as_848_, size_t v_sz_849_, size_t v_i_850_, lean_object* v_b_851_){
_start:
{
uint8_t v___x_852_; 
v___x_852_ = lean_usize_dec_lt(v_i_850_, v_sz_849_);
if (v___x_852_ == 0)
{
lean_object* v___x_853_; 
lean_dec_ref(v_f_846_);
lean_dec(v_ctx_x3f_842_);
v___x_853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_853_, 0, v_b_851_);
return v___x_853_;
}
else
{
lean_object* v_snd_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_880_; 
v_snd_854_ = lean_ctor_get(v_b_851_, 1);
v_isSharedCheck_880_ = !lean_is_exclusive(v_b_851_);
if (v_isSharedCheck_880_ == 0)
{
lean_object* v_unused_881_; 
v_unused_881_ = lean_ctor_get(v_b_851_, 0);
lean_dec(v_unused_881_);
v___x_856_ = v_b_851_;
v_isShared_857_ = v_isSharedCheck_880_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_snd_854_);
lean_dec(v_b_851_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_880_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_858_; lean_object* v_a_859_; lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_858_ = lean_box(0);
v_a_859_ = lean_array_uget_borrowed(v_as_848_, v_i_850_);
lean_inc(v_ctx_x3f_842_);
v___x_860_ = l_Lean_Elab_Info_updateContext_x3f(v_ctx_x3f_842_, v_i_843_);
lean_inc_ref(v_f_846_);
lean_inc(v_a_859_);
v___x_861_ = l_Lean_CodeAction_findInfoTree_x3f(v_kind_844_, v_tgtRange_845_, v___x_860_, v_a_859_, v_f_846_, v_canonicalOnly_847_);
if (lean_obj_tag(v___x_861_) == 1)
{
lean_object* v___x_863_; 
lean_dec_ref(v_f_846_);
lean_dec(v_ctx_x3f_842_);
lean_inc_ref(v___x_861_);
if (v_isShared_857_ == 0)
{
lean_ctor_set(v___x_856_, 1, v___x_858_);
lean_ctor_set(v___x_856_, 0, v___x_861_);
v___x_863_ = v___x_856_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_861_);
lean_ctor_set(v_reuseFailAlloc_875_, 1, v___x_858_);
v___x_863_ = v_reuseFailAlloc_875_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_873_; 
v_isSharedCheck_873_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_873_ == 0)
{
lean_object* v_unused_874_; 
v_unused_874_ = lean_ctor_get(v___x_861_, 0);
lean_dec(v_unused_874_);
v___x_865_ = v___x_861_;
v_isShared_866_ = v_isSharedCheck_873_;
goto v_resetjp_864_;
}
else
{
lean_dec(v___x_861_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_873_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_868_; 
if (v_isShared_866_ == 0)
{
lean_ctor_set_tag(v___x_865_, 0);
lean_ctor_set(v___x_865_, 0, v___x_863_);
v___x_868_ = v___x_865_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v___x_863_);
v___x_868_ = v_reuseFailAlloc_872_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_869_, 0, v___x_868_);
v___x_870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_870_, 0, v___x_869_);
lean_ctor_set(v___x_870_, 1, v_snd_854_);
v___x_871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_871_, 0, v___x_870_);
return v___x_871_;
}
}
}
}
else
{
lean_object* v___x_876_; size_t v___x_877_; size_t v___x_878_; 
lean_dec(v___x_861_);
lean_del_object(v___x_856_);
lean_dec(v_snd_854_);
v___x_876_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2_spec__3___closed__1));
v___x_877_ = ((size_t)1ULL);
v___x_878_ = lean_usize_add(v_i_850_, v___x_877_);
v_i_850_ = v___x_878_;
v_b_851_ = v___x_876_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2(lean_object* v_ctx_x3f_882_, lean_object* v_i_883_, lean_object* v_kind_884_, lean_object* v_tgtRange_885_, lean_object* v_f_886_, uint8_t v_canonicalOnly_887_, lean_object* v_as_888_, size_t v_sz_889_, size_t v_i_890_, lean_object* v_b_891_){
_start:
{
uint8_t v___x_892_; 
v___x_892_ = lean_usize_dec_lt(v_i_890_, v_sz_889_);
if (v___x_892_ == 0)
{
lean_object* v___x_893_; 
lean_dec_ref(v_f_886_);
lean_dec(v_ctx_x3f_882_);
v___x_893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_893_, 0, v_b_891_);
return v___x_893_;
}
else
{
lean_object* v_snd_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_920_; 
v_snd_894_ = lean_ctor_get(v_b_891_, 1);
v_isSharedCheck_920_ = !lean_is_exclusive(v_b_891_);
if (v_isSharedCheck_920_ == 0)
{
lean_object* v_unused_921_; 
v_unused_921_ = lean_ctor_get(v_b_891_, 0);
lean_dec(v_unused_921_);
v___x_896_ = v_b_891_;
v_isShared_897_ = v_isSharedCheck_920_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_snd_894_);
lean_dec(v_b_891_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_920_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_898_; lean_object* v_a_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_898_ = lean_box(0);
v_a_899_ = lean_array_uget_borrowed(v_as_888_, v_i_890_);
lean_inc(v_ctx_x3f_882_);
v___x_900_ = l_Lean_Elab_Info_updateContext_x3f(v_ctx_x3f_882_, v_i_883_);
lean_inc_ref(v_f_886_);
lean_inc(v_a_899_);
v___x_901_ = l_Lean_CodeAction_findInfoTree_x3f(v_kind_884_, v_tgtRange_885_, v___x_900_, v_a_899_, v_f_886_, v_canonicalOnly_887_);
if (lean_obj_tag(v___x_901_) == 1)
{
lean_object* v___x_903_; 
lean_dec_ref(v_f_886_);
lean_dec(v_ctx_x3f_882_);
lean_inc_ref(v___x_901_);
if (v_isShared_897_ == 0)
{
lean_ctor_set(v___x_896_, 1, v___x_898_);
lean_ctor_set(v___x_896_, 0, v___x_901_);
v___x_903_ = v___x_896_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v___x_901_);
lean_ctor_set(v_reuseFailAlloc_915_, 1, v___x_898_);
v___x_903_ = v_reuseFailAlloc_915_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_913_; 
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_913_ == 0)
{
lean_object* v_unused_914_; 
v_unused_914_ = lean_ctor_get(v___x_901_, 0);
lean_dec(v_unused_914_);
v___x_905_ = v___x_901_;
v_isShared_906_ = v_isSharedCheck_913_;
goto v_resetjp_904_;
}
else
{
lean_dec(v___x_901_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_913_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
lean_ctor_set_tag(v___x_905_, 0);
lean_ctor_set(v___x_905_, 0, v___x_903_);
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v___x_903_);
v___x_908_ = v_reuseFailAlloc_912_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
v___x_910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_910_, 0, v___x_909_);
lean_ctor_set(v___x_910_, 1, v_snd_894_);
v___x_911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
return v___x_911_;
}
}
}
}
else
{
lean_object* v___x_916_; size_t v___x_917_; size_t v___x_918_; lean_object* v___x_919_; 
lean_dec(v___x_901_);
lean_del_object(v___x_896_);
lean_dec(v_snd_894_);
v___x_916_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2___closed__0));
v___x_917_ = ((size_t)1ULL);
v___x_918_ = lean_usize_add(v_i_890_, v___x_917_);
v___x_919_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2_spec__3(v_ctx_x3f_882_, v_i_883_, v_kind_884_, v_tgtRange_885_, v_f_886_, v_canonicalOnly_887_, v_as_888_, v_sz_889_, v___x_918_, v___x_916_);
return v___x_919_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0(lean_object* v_init_922_, lean_object* v_ctx_x3f_923_, lean_object* v_i_924_, lean_object* v_kind_925_, lean_object* v_tgtRange_926_, lean_object* v_f_927_, uint8_t v_canonicalOnly_928_, lean_object* v_n_929_, lean_object* v_b_930_){
_start:
{
if (lean_obj_tag(v_n_929_) == 0)
{
lean_object* v_cs_931_; lean_object* v___x_932_; lean_object* v___x_933_; size_t v_sz_934_; size_t v___x_935_; lean_object* v___x_936_; 
v_cs_931_ = lean_ctor_get(v_n_929_, 0);
v___x_932_ = lean_box(0);
v___x_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_932_);
lean_ctor_set(v___x_933_, 1, v_b_930_);
v_sz_934_ = lean_array_size(v_cs_931_);
v___x_935_ = ((size_t)0ULL);
v___x_936_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__1(v_init_922_, v_ctx_x3f_923_, v_i_924_, v_kind_925_, v_tgtRange_926_, v_f_927_, v_canonicalOnly_928_, v_cs_931_, v_sz_934_, v___x_935_, v___x_933_);
if (lean_obj_tag(v___x_936_) == 0)
{
return v___x_932_;
}
else
{
lean_object* v_val_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_947_; 
v_val_937_ = lean_ctor_get(v___x_936_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_947_ == 0)
{
v___x_939_ = v___x_936_;
v_isShared_940_ = v_isSharedCheck_947_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_val_937_);
lean_dec(v___x_936_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_947_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v_fst_941_; 
v_fst_941_ = lean_ctor_get(v_val_937_, 0);
if (lean_obj_tag(v_fst_941_) == 0)
{
lean_object* v_snd_942_; lean_object* v___x_943_; lean_object* v___x_945_; 
v_snd_942_ = lean_ctor_get(v_val_937_, 1);
lean_inc(v_snd_942_);
lean_dec(v_val_937_);
v___x_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_943_, 0, v_snd_942_);
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 0, v___x_943_);
v___x_945_ = v___x_939_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v___x_943_);
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
lean_inc_ref(v_fst_941_);
lean_del_object(v___x_939_);
lean_dec(v_val_937_);
return v_fst_941_;
}
}
}
}
else
{
lean_object* v_vs_948_; lean_object* v___x_949_; lean_object* v___x_950_; size_t v_sz_951_; size_t v___x_952_; lean_object* v___x_953_; 
v_vs_948_ = lean_ctor_get(v_n_929_, 0);
v___x_949_ = lean_box(0);
v___x_950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_950_, 0, v___x_949_);
lean_ctor_set(v___x_950_, 1, v_b_930_);
v_sz_951_ = lean_array_size(v_vs_948_);
v___x_952_ = ((size_t)0ULL);
v___x_953_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2(v_ctx_x3f_923_, v_i_924_, v_kind_925_, v_tgtRange_926_, v_f_927_, v_canonicalOnly_928_, v_vs_948_, v_sz_951_, v___x_952_, v___x_950_);
if (lean_obj_tag(v___x_953_) == 0)
{
return v___x_949_;
}
else
{
lean_object* v_val_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_964_; 
v_val_954_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_964_ == 0)
{
v___x_956_ = v___x_953_;
v_isShared_957_ = v_isSharedCheck_964_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_val_954_);
lean_dec(v___x_953_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_964_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v_fst_958_; 
v_fst_958_ = lean_ctor_get(v_val_954_, 0);
if (lean_obj_tag(v_fst_958_) == 0)
{
lean_object* v_snd_959_; lean_object* v___x_960_; lean_object* v___x_962_; 
v_snd_959_ = lean_ctor_get(v_val_954_, 1);
lean_inc(v_snd_959_);
lean_dec(v_val_954_);
v___x_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_960_, 0, v_snd_959_);
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 0, v___x_960_);
v___x_962_ = v___x_956_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v___x_960_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
else
{
lean_inc_ref(v_fst_958_);
lean_del_object(v___x_956_);
lean_dec(v_val_954_);
return v_fst_958_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__1(lean_object* v_init_965_, lean_object* v_ctx_x3f_966_, lean_object* v_i_967_, lean_object* v_kind_968_, lean_object* v_tgtRange_969_, lean_object* v_f_970_, uint8_t v_canonicalOnly_971_, lean_object* v_as_972_, size_t v_sz_973_, size_t v_i_974_, lean_object* v_b_975_){
_start:
{
uint8_t v___x_976_; 
v___x_976_ = lean_usize_dec_lt(v_i_974_, v_sz_973_);
if (v___x_976_ == 0)
{
lean_object* v___x_977_; 
lean_dec_ref(v_f_970_);
lean_dec(v_ctx_x3f_966_);
v___x_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_977_, 0, v_b_975_);
return v___x_977_;
}
else
{
lean_object* v_snd_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_1005_; 
v_snd_978_ = lean_ctor_get(v_b_975_, 1);
v_isSharedCheck_1005_ = !lean_is_exclusive(v_b_975_);
if (v_isSharedCheck_1005_ == 0)
{
lean_object* v_unused_1006_; 
v_unused_1006_ = lean_ctor_get(v_b_975_, 0);
lean_dec(v_unused_1006_);
v___x_980_ = v_b_975_;
v_isShared_981_ = v_isSharedCheck_1005_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_snd_978_);
lean_dec(v_b_975_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_1005_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v_a_982_; lean_object* v___x_983_; 
v_a_982_ = lean_array_uget_borrowed(v_as_972_, v_i_974_);
lean_inc(v_snd_978_);
lean_inc_ref(v_f_970_);
lean_inc(v_ctx_x3f_966_);
v___x_983_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0(v_init_965_, v_ctx_x3f_966_, v_i_967_, v_kind_968_, v_tgtRange_969_, v_f_970_, v_canonicalOnly_971_, v_a_982_, v_snd_978_);
if (lean_obj_tag(v___x_983_) == 0)
{
lean_object* v___x_984_; 
lean_del_object(v___x_980_);
lean_dec(v_snd_978_);
lean_dec_ref(v_f_970_);
lean_dec(v_ctx_x3f_966_);
v___x_984_ = lean_box(0);
return v___x_984_;
}
else
{
lean_object* v_val_985_; 
v_val_985_ = lean_ctor_get(v___x_983_, 0);
lean_inc(v_val_985_);
if (lean_obj_tag(v_val_985_) == 0)
{
lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_995_; 
lean_dec_ref(v_f_970_);
lean_dec(v_ctx_x3f_966_);
v_isSharedCheck_995_ = !lean_is_exclusive(v_val_985_);
if (v_isSharedCheck_995_ == 0)
{
lean_object* v_unused_996_; 
v_unused_996_ = lean_ctor_get(v_val_985_, 0);
lean_dec(v_unused_996_);
v___x_987_ = v_val_985_;
v_isShared_988_ = v_isSharedCheck_995_;
goto v_resetjp_986_;
}
else
{
lean_dec(v_val_985_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_995_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_981_ == 0)
{
lean_ctor_set(v___x_980_, 0, v___x_983_);
v___x_990_ = v___x_980_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v___x_983_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v_snd_978_);
v___x_990_ = v_reuseFailAlloc_994_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
lean_object* v___x_992_; 
if (v_isShared_988_ == 0)
{
lean_ctor_set_tag(v___x_987_, 1);
lean_ctor_set(v___x_987_, 0, v___x_990_);
v___x_992_ = v___x_987_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v___x_990_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
return v___x_992_;
}
}
}
}
else
{
lean_object* v_a_997_; lean_object* v___x_998_; lean_object* v___x_1000_; 
lean_dec_ref_known(v___x_983_, 1);
lean_dec(v_snd_978_);
v_a_997_ = lean_ctor_get(v_val_985_, 0);
lean_inc(v_a_997_);
lean_dec_ref_known(v_val_985_, 1);
v___x_998_ = lean_box(0);
if (v_isShared_981_ == 0)
{
lean_ctor_set(v___x_980_, 1, v_a_997_);
lean_ctor_set(v___x_980_, 0, v___x_998_);
v___x_1000_ = v___x_980_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v___x_998_);
lean_ctor_set(v_reuseFailAlloc_1004_, 1, v_a_997_);
v___x_1000_ = v_reuseFailAlloc_1004_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
size_t v___x_1001_; size_t v___x_1002_; 
v___x_1001_ = ((size_t)1ULL);
v___x_1002_ = lean_usize_add(v_i_974_, v___x_1001_);
v_i_974_ = v___x_1002_;
v_b_975_ = v___x_1000_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_init_1007_, lean_object* v_ctx_x3f_1008_, lean_object* v_i_1009_, lean_object* v_kind_1010_, lean_object* v_tgtRange_1011_, lean_object* v_f_1012_, lean_object* v_canonicalOnly_1013_, lean_object* v_as_1014_, lean_object* v_sz_1015_, lean_object* v_i_1016_, lean_object* v_b_1017_){
_start:
{
uint8_t v_canonicalOnly_boxed_1018_; size_t v_sz_boxed_1019_; size_t v_i_boxed_1020_; lean_object* v_res_1021_; 
v_canonicalOnly_boxed_1018_ = lean_unbox(v_canonicalOnly_1013_);
v_sz_boxed_1019_ = lean_unbox_usize(v_sz_1015_);
lean_dec(v_sz_1015_);
v_i_boxed_1020_ = lean_unbox_usize(v_i_1016_);
lean_dec(v_i_1016_);
v_res_1021_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__1(v_init_1007_, v_ctx_x3f_1008_, v_i_1009_, v_kind_1010_, v_tgtRange_1011_, v_f_1012_, v_canonicalOnly_boxed_1018_, v_as_1014_, v_sz_boxed_1019_, v_i_boxed_1020_, v_b_1017_);
lean_dec_ref(v_as_1014_);
lean_dec_ref(v_tgtRange_1011_);
lean_dec(v_kind_1010_);
lean_dec_ref(v_i_1009_);
lean_dec_ref(v_init_1007_);
return v_res_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0___boxed(lean_object* v_ctx_x3f_1022_, lean_object* v_i_1023_, lean_object* v_kind_1024_, lean_object* v_tgtRange_1025_, lean_object* v_f_1026_, lean_object* v_canonicalOnly_1027_, lean_object* v_t_1028_, lean_object* v_init_1029_){
_start:
{
uint8_t v_canonicalOnly_boxed_1030_; lean_object* v_res_1031_; 
v_canonicalOnly_boxed_1030_ = lean_unbox(v_canonicalOnly_1027_);
v_res_1031_ = l_Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0(v_ctx_x3f_1022_, v_i_1023_, v_kind_1024_, v_tgtRange_1025_, v_f_1026_, v_canonicalOnly_boxed_1030_, v_t_1028_, v_init_1029_);
lean_dec_ref(v_t_1028_);
lean_dec_ref(v_tgtRange_1025_);
lean_dec(v_kind_1024_);
lean_dec_ref(v_i_1023_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1___boxed(lean_object* v_ctx_x3f_1032_, lean_object* v_i_1033_, lean_object* v_kind_1034_, lean_object* v_tgtRange_1035_, lean_object* v_f_1036_, lean_object* v_canonicalOnly_1037_, lean_object* v_as_1038_, lean_object* v_sz_1039_, lean_object* v_i_1040_, lean_object* v_b_1041_){
_start:
{
uint8_t v_canonicalOnly_boxed_1042_; size_t v_sz_boxed_1043_; size_t v_i_boxed_1044_; lean_object* v_res_1045_; 
v_canonicalOnly_boxed_1042_ = lean_unbox(v_canonicalOnly_1037_);
v_sz_boxed_1043_ = lean_unbox_usize(v_sz_1039_);
lean_dec(v_sz_1039_);
v_i_boxed_1044_ = lean_unbox_usize(v_i_1040_);
lean_dec(v_i_1040_);
v_res_1045_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1(v_ctx_x3f_1032_, v_i_1033_, v_kind_1034_, v_tgtRange_1035_, v_f_1036_, v_canonicalOnly_boxed_1042_, v_as_1038_, v_sz_boxed_1043_, v_i_boxed_1044_, v_b_1041_);
lean_dec_ref(v_as_1038_);
lean_dec_ref(v_tgtRange_1035_);
lean_dec(v_kind_1034_);
lean_dec_ref(v_i_1033_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1_spec__4___boxed(lean_object* v_ctx_x3f_1046_, lean_object* v_i_1047_, lean_object* v_kind_1048_, lean_object* v_tgtRange_1049_, lean_object* v_f_1050_, lean_object* v_canonicalOnly_1051_, lean_object* v_as_1052_, lean_object* v_sz_1053_, lean_object* v_i_1054_, lean_object* v_b_1055_){
_start:
{
uint8_t v_canonicalOnly_boxed_1056_; size_t v_sz_boxed_1057_; size_t v_i_boxed_1058_; lean_object* v_res_1059_; 
v_canonicalOnly_boxed_1056_ = lean_unbox(v_canonicalOnly_1051_);
v_sz_boxed_1057_ = lean_unbox_usize(v_sz_1053_);
lean_dec(v_sz_1053_);
v_i_boxed_1058_ = lean_unbox_usize(v_i_1054_);
lean_dec(v_i_1054_);
v_res_1059_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__1_spec__4(v_ctx_x3f_1046_, v_i_1047_, v_kind_1048_, v_tgtRange_1049_, v_f_1050_, v_canonicalOnly_boxed_1056_, v_as_1052_, v_sz_boxed_1057_, v_i_boxed_1058_, v_b_1055_);
lean_dec_ref(v_as_1052_);
lean_dec_ref(v_tgtRange_1049_);
lean_dec(v_kind_1048_);
lean_dec_ref(v_i_1047_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2___boxed(lean_object* v_ctx_x3f_1060_, lean_object* v_i_1061_, lean_object* v_kind_1062_, lean_object* v_tgtRange_1063_, lean_object* v_f_1064_, lean_object* v_canonicalOnly_1065_, lean_object* v_as_1066_, lean_object* v_sz_1067_, lean_object* v_i_1068_, lean_object* v_b_1069_){
_start:
{
uint8_t v_canonicalOnly_boxed_1070_; size_t v_sz_boxed_1071_; size_t v_i_boxed_1072_; lean_object* v_res_1073_; 
v_canonicalOnly_boxed_1070_ = lean_unbox(v_canonicalOnly_1065_);
v_sz_boxed_1071_ = lean_unbox_usize(v_sz_1067_);
lean_dec(v_sz_1067_);
v_i_boxed_1072_ = lean_unbox_usize(v_i_1068_);
lean_dec(v_i_1068_);
v_res_1073_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2(v_ctx_x3f_1060_, v_i_1061_, v_kind_1062_, v_tgtRange_1063_, v_f_1064_, v_canonicalOnly_boxed_1070_, v_as_1066_, v_sz_boxed_1071_, v_i_boxed_1072_, v_b_1069_);
lean_dec_ref(v_as_1066_);
lean_dec_ref(v_tgtRange_1063_);
lean_dec(v_kind_1062_);
lean_dec_ref(v_i_1061_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_ctx_x3f_1074_, lean_object* v_i_1075_, lean_object* v_kind_1076_, lean_object* v_tgtRange_1077_, lean_object* v_f_1078_, lean_object* v_canonicalOnly_1079_, lean_object* v_as_1080_, lean_object* v_sz_1081_, lean_object* v_i_1082_, lean_object* v_b_1083_){
_start:
{
uint8_t v_canonicalOnly_boxed_1084_; size_t v_sz_boxed_1085_; size_t v_i_boxed_1086_; lean_object* v_res_1087_; 
v_canonicalOnly_boxed_1084_ = lean_unbox(v_canonicalOnly_1079_);
v_sz_boxed_1085_ = lean_unbox_usize(v_sz_1081_);
lean_dec(v_sz_1081_);
v_i_boxed_1086_ = lean_unbox_usize(v_i_1082_);
lean_dec(v_i_1082_);
v_res_1087_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0_spec__2_spec__3(v_ctx_x3f_1074_, v_i_1075_, v_kind_1076_, v_tgtRange_1077_, v_f_1078_, v_canonicalOnly_boxed_1084_, v_as_1080_, v_sz_boxed_1085_, v_i_boxed_1086_, v_b_1083_);
lean_dec_ref(v_as_1080_);
lean_dec_ref(v_tgtRange_1077_);
lean_dec(v_kind_1076_);
lean_dec_ref(v_i_1075_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0___boxed(lean_object* v_init_1088_, lean_object* v_ctx_x3f_1089_, lean_object* v_i_1090_, lean_object* v_kind_1091_, lean_object* v_tgtRange_1092_, lean_object* v_f_1093_, lean_object* v_canonicalOnly_1094_, lean_object* v_n_1095_, lean_object* v_b_1096_){
_start:
{
uint8_t v_canonicalOnly_boxed_1097_; lean_object* v_res_1098_; 
v_canonicalOnly_boxed_1097_ = lean_unbox(v_canonicalOnly_1094_);
v_res_1098_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_CodeAction_findInfoTree_x3f_spec__0_spec__0(v_init_1088_, v_ctx_x3f_1089_, v_i_1090_, v_kind_1091_, v_tgtRange_1092_, v_f_1093_, v_canonicalOnly_boxed_1097_, v_n_1095_, v_b_1096_);
lean_dec_ref(v_n_1095_);
lean_dec_ref(v_tgtRange_1092_);
lean_dec(v_kind_1091_);
lean_dec_ref(v_i_1090_);
lean_dec_ref(v_init_1088_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_findInfoTree_x3f___boxed(lean_object* v_kind_1099_, lean_object* v_tgtRange_1100_, lean_object* v_ctx_x3f_1101_, lean_object* v_t_1102_, lean_object* v_f_1103_, lean_object* v_canonicalOnly_1104_){
_start:
{
uint8_t v_canonicalOnly_boxed_1105_; lean_object* v_res_1106_; 
v_canonicalOnly_boxed_1105_ = lean_unbox(v_canonicalOnly_1104_);
v_res_1106_ = l_Lean_CodeAction_findInfoTree_x3f(v_kind_1099_, v_tgtRange_1100_, v_ctx_x3f_1101_, v_t_1102_, v_f_1103_, v_canonicalOnly_boxed_1105_);
lean_dec_ref(v_tgtRange_1100_);
lean_dec(v_kind_1099_);
return v_res_1106_;
}
}
static lean_object* _init_l_panic___at___00Lean_CodeAction_cmdCodeActionProvider_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1107_ = l_Lean_Server_instInhabitedRequestError_default;
v___x_1108_ = lean_alloc_closure((void*)(l_instInhabitedEIO___aux__1___boxed), 4, 3);
lean_closure_set(v___x_1108_, 0, lean_box(0));
lean_closure_set(v___x_1108_, 1, lean_box(0));
lean_closure_set(v___x_1108_, 2, v___x_1107_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_CodeAction_cmdCodeActionProvider_spec__0(lean_object* v_msg_1109_, lean_object* v___y_1110_){
_start:
{
lean_object* v___x_1112_; lean_object* v___f_1113_; lean_object* v___x_3957__overap_1114_; lean_object* v___x_1115_; 
v___x_1112_ = lean_obj_once(&l_panic___at___00Lean_CodeAction_cmdCodeActionProvider_spec__0___closed__0, &l_panic___at___00Lean_CodeAction_cmdCodeActionProvider_spec__0___closed__0_once, _init_l_panic___at___00Lean_CodeAction_cmdCodeActionProvider_spec__0___closed__0);
v___f_1113_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1113_, 0, v___x_1112_);
v___x_3957__overap_1114_ = lean_panic_fn_borrowed(v___f_1113_, v_msg_1109_);
lean_dec_ref(v___f_1113_);
lean_inc_ref(v___y_1110_);
v___x_1115_ = lean_apply_2(v___x_3957__overap_1114_, v___y_1110_, lean_box(0));
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_CodeAction_cmdCodeActionProvider_spec__0___boxed(lean_object* v_msg_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l_panic___at___00Lean_CodeAction_cmdCodeActionProvider_spec__0(v_msg_1116_, v___y_1117_);
lean_dec_ref(v___y_1117_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_cmdCodeActionProvider___lam__0(lean_object* v___x_1120_, lean_object* v___x_1121_, lean_object* v_ctx_1122_, lean_object* v_node_1123_, lean_object* v_result_1124_){
_start:
{
uint8_t v___y_1126_; 
if (lean_obj_tag(v_node_1123_) == 1)
{
lean_object* v_i_1129_; 
v_i_1129_ = lean_ctor_get(v_node_1123_, 0);
if (lean_obj_tag(v_i_1129_) == 3)
{
lean_object* v_i_1130_; lean_object* v_stx_1131_; uint8_t v___x_1132_; lean_object* v___x_1133_; 
v_i_1130_ = lean_ctor_get(v_i_1129_, 0);
v_stx_1131_ = lean_ctor_get(v_i_1130_, 1);
v___x_1132_ = 1;
v___x_1133_ = l_Lean_Syntax_getPos_x3f(v_stx_1131_, v___x_1132_);
if (lean_obj_tag(v___x_1133_) == 1)
{
lean_object* v_val_1134_; lean_object* v___x_1135_; 
v_val_1134_ = lean_ctor_get(v___x_1133_, 0);
lean_inc(v_val_1134_);
lean_dec_ref_known(v___x_1133_, 1);
v___x_1135_ = l_Lean_Syntax_getTailPos_x3f(v_stx_1131_, v___x_1132_);
if (lean_obj_tag(v___x_1135_) == 1)
{
lean_object* v_val_1136_; uint8_t v___x_1137_; 
v_val_1136_ = lean_ctor_get(v___x_1135_, 0);
lean_inc(v_val_1136_);
lean_dec_ref_known(v___x_1135_, 1);
v___x_1137_ = lean_nat_dec_le(v_val_1134_, v___x_1120_);
lean_dec(v_val_1134_);
if (v___x_1137_ == 0)
{
lean_dec(v_val_1136_);
v___y_1126_ = v___x_1137_;
goto v___jp_1125_;
}
else
{
uint8_t v___x_1138_; 
v___x_1138_ = lean_nat_dec_le(v___x_1121_, v_val_1136_);
lean_dec(v_val_1136_);
v___y_1126_ = v___x_1138_;
goto v___jp_1125_;
}
}
else
{
lean_dec(v___x_1135_);
lean_dec(v_val_1134_);
lean_dec_ref_known(v_node_1123_, 2);
lean_dec_ref(v_ctx_1122_);
return v_result_1124_;
}
}
else
{
lean_dec(v___x_1133_);
lean_dec_ref_known(v_node_1123_, 2);
lean_dec_ref(v_ctx_1122_);
return v_result_1124_;
}
}
else
{
lean_dec_ref_known(v_node_1123_, 2);
lean_dec_ref(v_ctx_1122_);
return v_result_1124_;
}
}
else
{
lean_dec_ref(v_node_1123_);
lean_dec_ref(v_ctx_1122_);
return v_result_1124_;
}
v___jp_1125_:
{
if (v___y_1126_ == 0)
{
lean_dec_ref(v_node_1123_);
lean_dec_ref(v_ctx_1122_);
return v_result_1124_;
}
else
{
lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1127_, 0, v_ctx_1122_);
lean_ctor_set(v___x_1127_, 1, v_node_1123_);
v___x_1128_ = lean_array_push(v_result_1124_, v___x_1127_);
return v___x_1128_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_cmdCodeActionProvider___lam__0___boxed(lean_object* v___x_1139_, lean_object* v___x_1140_, lean_object* v_ctx_1141_, lean_object* v_node_1142_, lean_object* v_result_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lean_CodeAction_cmdCodeActionProvider___lam__0(v___x_1139_, v___x_1140_, v_ctx_1141_, v_node_1142_, v_result_1143_);
lean_dec(v___x_1140_);
lean_dec(v___x_1139_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__1(lean_object* v_params_1145_, lean_object* v_snap_1146_, lean_object* v_fst_1147_, lean_object* v_snd_1148_, lean_object* v_as_1149_, size_t v_sz_1150_, size_t v_i_1151_, lean_object* v_b_1152_, lean_object* v___y_1153_){
_start:
{
lean_object* v_snd_1156_; uint8_t v___x_1160_; 
v___x_1160_ = lean_usize_dec_lt(v_i_1151_, v_sz_1150_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; 
lean_dec_ref(v_snd_1148_);
lean_dec_ref(v_fst_1147_);
lean_dec_ref(v_snap_1146_);
lean_dec_ref(v_params_1145_);
v___x_1161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1161_, 0, v_b_1152_);
return v___x_1161_;
}
else
{
lean_object* v___x_4579__overap_1162_; lean_object* v___x_1163_; 
v___x_4579__overap_1162_ = lean_array_uget_borrowed(v_as_1149_, v_i_1151_);
lean_inc(v___x_4579__overap_1162_);
lean_inc_ref(v___y_1153_);
lean_inc_ref(v_snd_1148_);
lean_inc_ref(v_fst_1147_);
lean_inc_ref(v_snap_1146_);
lean_inc_ref(v_params_1145_);
v___x_1163_ = lean_apply_6(v___x_4579__overap_1162_, v_params_1145_, v_snap_1146_, v_fst_1147_, v_snd_1148_, v___y_1153_, lean_box(0));
if (lean_obj_tag(v___x_1163_) == 0)
{
lean_object* v_a_1164_; lean_object* v___x_1165_; 
v_a_1164_ = lean_ctor_get(v___x_1163_, 0);
lean_inc(v_a_1164_);
lean_dec_ref_known(v___x_1163_, 1);
v___x_1165_ = l_Array_append___redArg(v_b_1152_, v_a_1164_);
lean_dec(v_a_1164_);
v_snd_1156_ = v___x_1165_;
goto v___jp_1155_;
}
else
{
lean_dec_ref_known(v___x_1163_, 1);
v_snd_1156_ = v_b_1152_;
goto v___jp_1155_;
}
}
v___jp_1155_:
{
size_t v___x_1157_; size_t v___x_1158_; 
v___x_1157_ = ((size_t)1ULL);
v___x_1158_ = lean_usize_add(v_i_1151_, v___x_1157_);
v_i_1151_ = v___x_1158_;
v_b_1152_ = v_snd_1156_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__1___boxed(lean_object* v_params_1166_, lean_object* v_snap_1167_, lean_object* v_fst_1168_, lean_object* v_snd_1169_, lean_object* v_as_1170_, lean_object* v_sz_1171_, lean_object* v_i_1172_, lean_object* v_b_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
size_t v_sz_boxed_1176_; size_t v_i_boxed_1177_; lean_object* v_res_1178_; 
v_sz_boxed_1176_ = lean_unbox_usize(v_sz_1171_);
lean_dec(v_sz_1171_);
v_i_boxed_1177_ = lean_unbox_usize(v_i_1172_);
lean_dec(v_i_1172_);
v_res_1178_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__1(v_params_1166_, v_snap_1167_, v_fst_1168_, v_snd_1169_, v_as_1170_, v_sz_boxed_1176_, v_i_boxed_1177_, v_b_1173_, v___y_1174_);
lean_dec_ref(v___y_1174_);
lean_dec_ref(v_as_1170_);
return v_res_1178_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1182_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__2));
v___x_1183_ = lean_unsigned_to_nat(48u);
v___x_1184_ = lean_unsigned_to_nat(185u);
v___x_1185_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__1));
v___x_1186_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__0));
v___x_1187_ = l_mkPanicMessageWithDecl(v___x_1186_, v___x_1185_, v___x_1184_, v___x_1183_, v___x_1182_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2(lean_object* v___x_1188_, lean_object* v_params_1189_, lean_object* v_snap_1190_, lean_object* v_as_1191_, size_t v_sz_1192_, size_t v_i_1193_, lean_object* v_b_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v_a_1198_; lean_object* v___y_1203_; uint8_t v___x_1214_; 
v___x_1214_ = lean_usize_dec_lt(v_i_1193_, v_sz_1192_);
if (v___x_1214_ == 0)
{
lean_object* v___x_1215_; 
lean_dec_ref(v_snap_1190_);
lean_dec_ref(v_params_1189_);
v___x_1215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1215_, 0, v_b_1194_);
return v___x_1215_;
}
else
{
lean_object* v_a_1216_; lean_object* v_snd_1217_; 
v_a_1216_ = lean_array_uget_borrowed(v_as_1191_, v_i_1193_);
v_snd_1217_ = lean_ctor_get(v_a_1216_, 1);
if (lean_obj_tag(v_snd_1217_) == 1)
{
lean_object* v_i_1218_; 
v_i_1218_ = lean_ctor_get(v_snd_1217_, 0);
if (lean_obj_tag(v_i_1218_) == 3)
{
lean_object* v_fst_1219_; lean_object* v_i_1220_; lean_object* v_onAnyCmd_1221_; lean_object* v_onCmd_1222_; lean_object* v_out_1224_; lean_object* v___y_1225_; lean_object* v_stx_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
v_fst_1219_ = lean_ctor_get(v_a_1216_, 0);
v_i_1220_ = lean_ctor_get(v_i_1218_, 0);
v_onAnyCmd_1221_ = lean_ctor_get(v___x_1188_, 0);
v_onCmd_1222_ = lean_ctor_get(v___x_1188_, 1);
v_stx_1230_ = lean_ctor_get(v_i_1220_, 1);
lean_inc(v_stx_1230_);
v___x_1231_ = l_Lean_Syntax_getKind(v_stx_1230_);
v___x_1232_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_onCmd_1222_, v___x_1231_);
lean_dec(v___x_1231_);
if (lean_obj_tag(v___x_1232_) == 1)
{
lean_object* v_val_1233_; size_t v_sz_1234_; size_t v___x_1235_; lean_object* v___x_1236_; 
v_val_1233_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_val_1233_);
lean_dec_ref_known(v___x_1232_, 1);
v_sz_1234_ = lean_array_size(v_val_1233_);
v___x_1235_ = ((size_t)0ULL);
lean_inc_ref(v_snd_1217_);
lean_inc(v_fst_1219_);
lean_inc_ref(v_snap_1190_);
lean_inc_ref(v_params_1189_);
v___x_1236_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__1(v_params_1189_, v_snap_1190_, v_fst_1219_, v_snd_1217_, v_val_1233_, v_sz_1234_, v___x_1235_, v_b_1194_, v___y_1195_);
lean_dec(v_val_1233_);
if (lean_obj_tag(v___x_1236_) == 0)
{
lean_object* v_a_1237_; 
v_a_1237_ = lean_ctor_get(v___x_1236_, 0);
lean_inc(v_a_1237_);
lean_dec_ref_known(v___x_1236_, 1);
v_out_1224_ = v_a_1237_;
v___y_1225_ = v___y_1195_;
goto v___jp_1223_;
}
else
{
lean_dec_ref(v_snap_1190_);
lean_dec_ref(v_params_1189_);
return v___x_1236_;
}
}
else
{
lean_dec(v___x_1232_);
v_out_1224_ = v_b_1194_;
v___y_1225_ = v___y_1195_;
goto v___jp_1223_;
}
v___jp_1223_:
{
size_t v_sz_1226_; size_t v___x_1227_; lean_object* v___x_1228_; 
v_sz_1226_ = lean_array_size(v_onAnyCmd_1221_);
v___x_1227_ = ((size_t)0ULL);
lean_inc_ref(v_snd_1217_);
lean_inc(v_fst_1219_);
lean_inc_ref(v_snap_1190_);
lean_inc_ref(v_params_1189_);
v___x_1228_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__1(v_params_1189_, v_snap_1190_, v_fst_1219_, v_snd_1217_, v_onAnyCmd_1221_, v_sz_1226_, v___x_1227_, v_out_1224_, v___y_1225_);
if (lean_obj_tag(v___x_1228_) == 0)
{
lean_object* v_a_1229_; 
v_a_1229_ = lean_ctor_get(v___x_1228_, 0);
lean_inc(v_a_1229_);
lean_dec_ref_known(v___x_1228_, 1);
v_a_1198_ = v_a_1229_;
goto v___jp_1197_;
}
else
{
lean_dec_ref(v_snap_1190_);
lean_dec_ref(v_params_1189_);
return v___x_1228_;
}
}
}
else
{
v___y_1203_ = v___y_1195_;
goto v___jp_1202_;
}
}
else
{
v___y_1203_ = v___y_1195_;
goto v___jp_1202_;
}
}
v___jp_1197_:
{
size_t v___x_1199_; size_t v___x_1200_; 
v___x_1199_ = ((size_t)1ULL);
v___x_1200_ = lean_usize_add(v_i_1193_, v___x_1199_);
v_i_1193_ = v___x_1200_;
v_b_1194_ = v_a_1198_;
goto _start;
}
v___jp_1202_:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1204_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__3);
v___x_1205_ = l_panic___at___00Lean_CodeAction_cmdCodeActionProvider_spec__0(v___x_1204_, v___y_1203_);
if (lean_obj_tag(v___x_1205_) == 0)
{
lean_dec_ref_known(v___x_1205_, 1);
v_a_1198_ = v_b_1194_;
goto v___jp_1197_;
}
else
{
lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1213_; 
lean_dec_ref(v_b_1194_);
lean_dec_ref(v_snap_1190_);
lean_dec_ref(v_params_1189_);
v_a_1206_ = lean_ctor_get(v___x_1205_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1205_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1208_ = v___x_1205_;
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v___x_1205_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1209_ == 0)
{
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_a_1206_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___boxed(lean_object* v___x_1238_, lean_object* v_params_1239_, lean_object* v_snap_1240_, lean_object* v_as_1241_, lean_object* v_sz_1242_, lean_object* v_i_1243_, lean_object* v_b_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_){
_start:
{
size_t v_sz_boxed_1247_; size_t v_i_boxed_1248_; lean_object* v_res_1249_; 
v_sz_boxed_1247_ = lean_unbox_usize(v_sz_1242_);
lean_dec(v_sz_1242_);
v_i_boxed_1248_ = lean_unbox_usize(v_i_1243_);
lean_dec(v_i_1243_);
v_res_1249_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2(v___x_1238_, v_params_1239_, v_snap_1240_, v_as_1241_, v_sz_boxed_1247_, v_i_boxed_1248_, v_b_1244_, v___y_1245_);
lean_dec_ref(v___y_1245_);
lean_dec_ref(v_as_1241_);
lean_dec_ref(v___x_1238_);
return v_res_1249_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2(lean_object* v_params_1250_, lean_object* v_snap_1251_, lean_object* v___x_1252_, lean_object* v_as_1253_, size_t v_sz_1254_, size_t v_i_1255_, lean_object* v_b_1256_, lean_object* v___y_1257_){
_start:
{
lean_object* v_a_1260_; lean_object* v___y_1265_; uint8_t v___x_1276_; 
v___x_1276_ = lean_usize_dec_lt(v_i_1255_, v_sz_1254_);
if (v___x_1276_ == 0)
{
lean_object* v___x_1277_; 
lean_dec_ref(v_snap_1251_);
lean_dec_ref(v_params_1250_);
v___x_1277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1277_, 0, v_b_1256_);
return v___x_1277_;
}
else
{
lean_object* v_a_1278_; lean_object* v_snd_1279_; 
v_a_1278_ = lean_array_uget_borrowed(v_as_1253_, v_i_1255_);
v_snd_1279_ = lean_ctor_get(v_a_1278_, 1);
if (lean_obj_tag(v_snd_1279_) == 1)
{
lean_object* v_i_1280_; 
v_i_1280_ = lean_ctor_get(v_snd_1279_, 0);
if (lean_obj_tag(v_i_1280_) == 3)
{
lean_object* v_fst_1281_; lean_object* v_i_1282_; lean_object* v_onAnyCmd_1283_; lean_object* v_onCmd_1284_; lean_object* v_out_1286_; lean_object* v___y_1287_; lean_object* v_stx_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; 
v_fst_1281_ = lean_ctor_get(v_a_1278_, 0);
v_i_1282_ = lean_ctor_get(v_i_1280_, 0);
v_onAnyCmd_1283_ = lean_ctor_get(v___x_1252_, 0);
v_onCmd_1284_ = lean_ctor_get(v___x_1252_, 1);
v_stx_1292_ = lean_ctor_get(v_i_1282_, 1);
lean_inc(v_stx_1292_);
v___x_1293_ = l_Lean_Syntax_getKind(v_stx_1292_);
v___x_1294_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_onCmd_1284_, v___x_1293_);
lean_dec(v___x_1293_);
if (lean_obj_tag(v___x_1294_) == 1)
{
lean_object* v_val_1295_; size_t v_sz_1296_; size_t v___x_1297_; lean_object* v___x_1298_; 
v_val_1295_ = lean_ctor_get(v___x_1294_, 0);
lean_inc(v_val_1295_);
lean_dec_ref_known(v___x_1294_, 1);
v_sz_1296_ = lean_array_size(v_val_1295_);
v___x_1297_ = ((size_t)0ULL);
lean_inc_ref(v_snd_1279_);
lean_inc(v_fst_1281_);
lean_inc_ref(v_snap_1251_);
lean_inc_ref(v_params_1250_);
v___x_1298_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__1(v_params_1250_, v_snap_1251_, v_fst_1281_, v_snd_1279_, v_val_1295_, v_sz_1296_, v___x_1297_, v_b_1256_, v___y_1257_);
lean_dec(v_val_1295_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v_a_1299_; 
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
lean_inc(v_a_1299_);
lean_dec_ref_known(v___x_1298_, 1);
v_out_1286_ = v_a_1299_;
v___y_1287_ = v___y_1257_;
goto v___jp_1285_;
}
else
{
lean_dec_ref(v_snap_1251_);
lean_dec_ref(v_params_1250_);
return v___x_1298_;
}
}
else
{
lean_dec(v___x_1294_);
v_out_1286_ = v_b_1256_;
v___y_1287_ = v___y_1257_;
goto v___jp_1285_;
}
v___jp_1285_:
{
size_t v_sz_1288_; size_t v___x_1289_; lean_object* v___x_1290_; 
v_sz_1288_ = lean_array_size(v_onAnyCmd_1283_);
v___x_1289_ = ((size_t)0ULL);
lean_inc_ref(v_snd_1279_);
lean_inc(v_fst_1281_);
lean_inc_ref(v_snap_1251_);
lean_inc_ref(v_params_1250_);
v___x_1290_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__1(v_params_1250_, v_snap_1251_, v_fst_1281_, v_snd_1279_, v_onAnyCmd_1283_, v_sz_1288_, v___x_1289_, v_out_1286_, v___y_1287_);
if (lean_obj_tag(v___x_1290_) == 0)
{
lean_object* v_a_1291_; 
v_a_1291_ = lean_ctor_get(v___x_1290_, 0);
lean_inc(v_a_1291_);
lean_dec_ref_known(v___x_1290_, 1);
v_a_1260_ = v_a_1291_;
goto v___jp_1259_;
}
else
{
lean_dec_ref(v_snap_1251_);
lean_dec_ref(v_params_1250_);
return v___x_1290_;
}
}
}
else
{
v___y_1265_ = v___y_1257_;
goto v___jp_1264_;
}
}
else
{
v___y_1265_ = v___y_1257_;
goto v___jp_1264_;
}
}
v___jp_1259_:
{
size_t v___x_1261_; size_t v___x_1262_; lean_object* v___x_1263_; 
v___x_1261_ = ((size_t)1ULL);
v___x_1262_ = lean_usize_add(v_i_1255_, v___x_1261_);
v___x_1263_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2(v___x_1252_, v_params_1250_, v_snap_1251_, v_as_1253_, v_sz_1254_, v___x_1262_, v_a_1260_, v___y_1257_);
return v___x_1263_;
}
v___jp_1264_:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2_spec__2___closed__3);
v___x_1267_ = l_panic___at___00Lean_CodeAction_cmdCodeActionProvider_spec__0(v___x_1266_, v___y_1265_);
if (lean_obj_tag(v___x_1267_) == 0)
{
lean_dec_ref_known(v___x_1267_, 1);
v_a_1260_ = v_b_1256_;
goto v___jp_1259_;
}
else
{
lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1275_; 
lean_dec_ref(v_b_1256_);
lean_dec_ref(v_snap_1251_);
lean_dec_ref(v_params_1250_);
v_a_1268_ = lean_ctor_get(v___x_1267_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1270_ = v___x_1267_;
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_dec(v___x_1267_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1273_; 
if (v_isShared_1271_ == 0)
{
v___x_1273_ = v___x_1270_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_a_1268_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2___boxed(lean_object* v_params_1300_, lean_object* v_snap_1301_, lean_object* v___x_1302_, lean_object* v_as_1303_, lean_object* v_sz_1304_, lean_object* v_i_1305_, lean_object* v_b_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_){
_start:
{
size_t v_sz_boxed_1309_; size_t v_i_boxed_1310_; lean_object* v_res_1311_; 
v_sz_boxed_1309_ = lean_unbox_usize(v_sz_1304_);
lean_dec(v_sz_1304_);
v_i_boxed_1310_ = lean_unbox_usize(v_i_1305_);
lean_dec(v_i_1305_);
v_res_1311_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2(v_params_1300_, v_snap_1301_, v___x_1302_, v_as_1303_, v_sz_boxed_1309_, v_i_boxed_1310_, v_b_1306_, v___y_1307_);
lean_dec_ref(v___y_1307_);
lean_dec_ref(v_as_1303_);
lean_dec_ref(v___x_1302_);
return v_res_1311_;
}
}
static lean_object* _init_l_Lean_CodeAction_cmdCodeActionProvider___closed__0(void){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1312_ = l_Lean_CodeAction_instInhabitedCommandCodeActions_default;
v___x_1313_ = lean_obj_once(&l_Lean_CodeAction_holeCodeActionProvider___closed__0, &l_Lean_CodeAction_holeCodeActionProvider___closed__0_once, _init_l_Lean_CodeAction_holeCodeActionProvider___closed__0);
v___x_1314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1313_);
lean_ctor_set(v___x_1314_, 1, v___x_1312_);
return v___x_1314_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_cmdCodeActionProvider(lean_object* v_params_1317_, lean_object* v_snap_1318_, lean_object* v_a_1319_){
_start:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v_a_1323_; lean_object* v_toEditableDocumentCore_1324_; lean_object* v_meta_1325_; lean_object* v_range_1326_; lean_object* v_text_1327_; lean_object* v_start_1328_; lean_object* v_end_1329_; lean_object* v___x_1330_; lean_object* v_toEnvExtension_1331_; lean_object* v_asyncMode_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v_snd_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___f_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; size_t v_sz_1343_; size_t v___x_1344_; lean_object* v___x_1345_; 
v___x_1321_ = lean_obj_once(&l_Lean_CodeAction_cmdCodeActionProvider___closed__0, &l_Lean_CodeAction_cmdCodeActionProvider___closed__0_once, _init_l_Lean_CodeAction_cmdCodeActionProvider___closed__0);
v___x_1322_ = l_Lean_Server_RequestM_readDoc___at___00Lean_CodeAction_holeCodeActionProvider_spec__0(v_a_1319_);
v_a_1323_ = lean_ctor_get(v___x_1322_, 0);
lean_inc(v_a_1323_);
lean_dec_ref(v___x_1322_);
v_toEditableDocumentCore_1324_ = lean_ctor_get(v_a_1323_, 0);
lean_inc_ref(v_toEditableDocumentCore_1324_);
lean_dec(v_a_1323_);
v_meta_1325_ = lean_ctor_get(v_toEditableDocumentCore_1324_, 0);
lean_inc_ref(v_meta_1325_);
lean_dec_ref(v_toEditableDocumentCore_1324_);
v_range_1326_ = lean_ctor_get(v_params_1317_, 3);
v_text_1327_ = lean_ctor_get(v_meta_1325_, 3);
lean_inc_ref(v_text_1327_);
lean_dec_ref(v_meta_1325_);
v_start_1328_ = lean_ctor_get(v_range_1326_, 0);
v_end_1329_ = lean_ctor_get(v_range_1326_, 1);
v___x_1330_ = l_Lean_CodeAction_cmdCodeActionExt;
v_toEnvExtension_1331_ = lean_ctor_get(v___x_1330_, 0);
v_asyncMode_1332_ = lean_ctor_get(v_toEnvExtension_1331_, 2);
v___x_1333_ = l_Lean_Server_Snapshots_Snapshot_env(v_snap_1318_);
v___x_1334_ = lean_obj_once(&l_Lean_CodeAction_holeCodeActionProvider___closed__3, &l_Lean_CodeAction_holeCodeActionProvider___closed__3_once, _init_l_Lean_CodeAction_holeCodeActionProvider___closed__3);
v___x_1335_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1321_, v___x_1330_, v___x_1333_, v_asyncMode_1332_, v___x_1334_);
v_snd_1336_ = lean_ctor_get(v___x_1335_, 1);
lean_inc(v_snd_1336_);
lean_dec(v___x_1335_);
lean_inc_ref(v_start_1328_);
v___x_1337_ = l_Lean_FileMap_lspPosToUtf8Pos(v_text_1327_, v_start_1328_);
lean_inc_ref(v_end_1329_);
v___x_1338_ = l_Lean_FileMap_lspPosToUtf8Pos(v_text_1327_, v_end_1329_);
lean_dec_ref(v_text_1327_);
v___f_1339_ = lean_alloc_closure((void*)(l_Lean_CodeAction_cmdCodeActionProvider___lam__0___boxed), 5, 2);
lean_closure_set(v___f_1339_, 0, v___x_1338_);
lean_closure_set(v___f_1339_, 1, v___x_1337_);
v___x_1340_ = ((lean_object*)(l_Lean_CodeAction_cmdCodeActionProvider___closed__1));
lean_inc_ref(v_snap_1318_);
v___x_1341_ = l_Lean_Server_Snapshots_Snapshot_infoTree(v_snap_1318_);
v___x_1342_ = l_Lean_Elab_InfoTree_foldInfoTree___redArg(v___x_1340_, v___f_1339_, v___x_1341_);
v_sz_1343_ = lean_array_size(v___x_1342_);
v___x_1344_ = ((size_t)0ULL);
v___x_1345_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_CodeAction_cmdCodeActionProvider_spec__2(v_params_1317_, v_snap_1318_, v_snd_1336_, v___x_1342_, v_sz_1343_, v___x_1344_, v___x_1340_, v_a_1319_);
lean_dec(v___x_1342_);
lean_dec(v_snd_1336_);
return v___x_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_cmdCodeActionProvider___boxed(lean_object* v_params_1346_, lean_object* v_snap_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_){
_start:
{
lean_object* v_res_1350_; 
v_res_1350_ = l_Lean_CodeAction_cmdCodeActionProvider(v_params_1346_, v_snap_1347_, v_a_1348_);
lean_dec_ref(v_a_1348_);
return v_res_1350_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1(){
_start:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; 
v___x_1357_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1___closed__1));
v___x_1358_ = lean_alloc_closure((void*)(l_Lean_CodeAction_cmdCodeActionProvider___boxed), 4, 0);
v___x_1359_ = l_Lean_Server_addBuiltinCodeActionProvider(v___x_1357_, v___x_1358_);
return v___x_1359_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1___boxed(lean_object* v_a_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1();
return v_res_1361_;
}
}
lean_object* runtime_initialize_Std_Data_Iterators_Producers_Range(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_Iterators_Combinators_StepSize(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_BuiltinTerm(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_BuiltinNotation(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_CodeActions_Attr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_CodeActions_Provider(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Data_Iterators_Producers_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_Iterators_Combinators_StepSize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinNotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_CodeActions_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_holeCodeActionProvider___regBuiltin_Lean_CodeAction_holeCodeActionProvider__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Server_CodeActions_Provider_0__Lean_CodeAction_cmdCodeActionProvider___regBuiltin_Lean_CodeAction_cmdCodeActionProvider__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_CodeActions_Provider(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Data_Iterators_Producers_Range(uint8_t builtin);
lean_object* initialize_Std_Data_Iterators_Combinators_StepSize(uint8_t builtin);
lean_object* initialize_Lean_Elab_BuiltinTerm(uint8_t builtin);
lean_object* initialize_Lean_Elab_BuiltinNotation(uint8_t builtin);
lean_object* initialize_Lean_Server_CodeActions_Attr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_CodeActions_Provider(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Data_Iterators_Producers_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_Iterators_Combinators_StepSize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BuiltinTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BuiltinNotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_CodeActions_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_CodeActions_Provider(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_CodeActions_Provider(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_CodeActions_Provider(builtin);
}
#ifdef __cplusplus
}
#endif

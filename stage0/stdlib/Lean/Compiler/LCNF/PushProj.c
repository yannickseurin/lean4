// Lean compiler output
// Module: Lean.Compiler.LCNF.PushProj
// Imports: public import Lean.Compiler.LCNF.PassManager import Lean.Compiler.LCNF.Internalize
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_CodeDecl_collectUsed(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedFVarIdHashSet;
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_attachCodeDecls___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instEmptyCollectionFVarIdHashSet;
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_collectUsed(uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCodeDecl_default___redArg();
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_Decl_internalize(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go___closed__0;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go___boxed__const__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3_spec__4_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___closed__1;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_pushProj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "pushProj"};
static const lean_object* l_Lean_Compiler_LCNF_pushProj___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_pushProj___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_pushProj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_pushProj___closed__0_value),LEAN_SCALAR_PTR_LITERAL(229, 57, 226, 13, 246, 16, 24, 68)}};
static const lean_object* l_Lean_Compiler_LCNF_pushProj___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_pushProj___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_pushProj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_pushProj___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_pushProj___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_pushProj(lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_pushProj___closed__0_value),LEAN_SCALAR_PTR_LITERAL(163, 211, 73, 224, 17, 126, 75, 83)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "PushProj"};
static const lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__1___redArg(lean_object* v_alt_1_, lean_object* v_f_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_){
_start:
{
lean_object* v___y_9_; 
switch(lean_obj_tag(v_alt_1_))
{
case 0:
{
lean_object* v_code_28_; 
v_code_28_ = lean_ctor_get(v_alt_1_, 2);
lean_inc_ref(v_code_28_);
v___y_9_ = v_code_28_;
goto v___jp_8_;
}
case 1:
{
lean_object* v_code_29_; 
v_code_29_ = lean_ctor_get(v_alt_1_, 1);
lean_inc_ref(v_code_29_);
v___y_9_ = v_code_29_;
goto v___jp_8_;
}
default: 
{
lean_object* v_code_30_; 
v_code_30_ = lean_ctor_get(v_alt_1_, 0);
lean_inc_ref(v_code_30_);
v___y_9_ = v_code_30_;
goto v___jp_8_;
}
}
v___jp_8_:
{
lean_object* v___x_10_; 
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc_ref(v___y_3_);
v___x_10_ = lean_apply_6(v_f_2_, v___y_9_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, lean_box(0));
if (lean_obj_tag(v___x_10_) == 0)
{
lean_object* v_a_11_; lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_a_11_ = lean_ctor_get(v___x_10_, 0);
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_19_ == 0)
{
v___x_13_ = v___x_10_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_inc(v_a_11_);
lean_dec(v___x_10_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
v___x_15_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_1_, v_a_11_);
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
lean_object* v_a_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_27_; 
lean_dec_ref(v_alt_1_);
v_a_20_ = lean_ctor_get(v___x_10_, 0);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_27_ == 0)
{
v___x_22_ = v___x_10_;
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_a_20_);
lean_dec(v___x_10_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_25_; 
if (v_isShared_23_ == 0)
{
v___x_25_ = v___x_22_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_a_20_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__1___redArg___boxed(lean_object* v_alt_31_, lean_object* v_f_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__1___redArg(v_alt_31_, v_f_32_, v___y_33_, v___y_34_, v___y_35_, v___y_36_);
lean_dec(v___y_36_);
lean_dec_ref(v___y_35_);
lean_dec(v___y_34_);
lean_dec_ref(v___y_33_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__1(uint8_t v_pu_39_, lean_object* v_alt_40_, lean_object* v_f_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__1___redArg(v_alt_40_, v_f_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__1___boxed(lean_object* v_pu_48_, lean_object* v_alt_49_, lean_object* v_f_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
uint8_t v_pu_boxed_56_; lean_object* v_res_57_; 
v_pu_boxed_56_ = lean_unbox(v_pu_48_);
v_res_57_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__1(v_pu_boxed_56_, v_alt_49_, v_f_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
lean_dec(v___y_52_);
lean_dec_ref(v___y_51_);
return v_res_57_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0_spec__0___redArg(lean_object* v_a_58_, lean_object* v_x_59_){
_start:
{
if (lean_obj_tag(v_x_59_) == 0)
{
uint8_t v___x_60_; 
v___x_60_ = 0;
return v___x_60_;
}
else
{
lean_object* v_key_61_; lean_object* v_tail_62_; uint8_t v___x_63_; 
v_key_61_ = lean_ctor_get(v_x_59_, 0);
v_tail_62_ = lean_ctor_get(v_x_59_, 2);
v___x_63_ = l_Lean_instBEqFVarId_beq(v_key_61_, v_a_58_);
if (v___x_63_ == 0)
{
v_x_59_ = v_tail_62_;
goto _start;
}
else
{
return v___x_63_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0_spec__0___redArg___boxed(lean_object* v_a_65_, lean_object* v_x_66_){
_start:
{
uint8_t v_res_67_; lean_object* v_r_68_; 
v_res_67_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0_spec__0___redArg(v_a_65_, v_x_66_);
lean_dec(v_x_66_);
lean_dec(v_a_65_);
v_r_68_ = lean_box(v_res_67_);
return v_r_68_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0___redArg(lean_object* v_m_69_, lean_object* v_a_70_){
_start:
{
lean_object* v_buckets_71_; lean_object* v___x_72_; uint64_t v___x_73_; uint64_t v___x_74_; uint64_t v___x_75_; uint64_t v_fold_76_; uint64_t v___x_77_; uint64_t v___x_78_; uint64_t v___x_79_; size_t v___x_80_; size_t v___x_81_; size_t v___x_82_; size_t v___x_83_; size_t v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v_buckets_71_ = lean_ctor_get(v_m_69_, 1);
v___x_72_ = lean_array_get_size(v_buckets_71_);
v___x_73_ = l_Lean_instHashableFVarId_hash(v_a_70_);
v___x_74_ = 32ULL;
v___x_75_ = lean_uint64_shift_right(v___x_73_, v___x_74_);
v_fold_76_ = lean_uint64_xor(v___x_73_, v___x_75_);
v___x_77_ = 16ULL;
v___x_78_ = lean_uint64_shift_right(v_fold_76_, v___x_77_);
v___x_79_ = lean_uint64_xor(v_fold_76_, v___x_78_);
v___x_80_ = lean_uint64_to_usize(v___x_79_);
v___x_81_ = lean_usize_of_nat(v___x_72_);
v___x_82_ = ((size_t)1ULL);
v___x_83_ = lean_usize_sub(v___x_81_, v___x_82_);
v___x_84_ = lean_usize_land(v___x_80_, v___x_83_);
v___x_85_ = lean_array_uget_borrowed(v_buckets_71_, v___x_84_);
v___x_86_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0_spec__0___redArg(v_a_70_, v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0___redArg___boxed(lean_object* v_m_87_, lean_object* v_a_88_){
_start:
{
uint8_t v_res_89_; lean_object* v_r_90_; 
v_res_89_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0___redArg(v_m_87_, v_a_88_);
lean_dec(v_a_88_);
lean_dec_ref(v_m_87_);
v_r_90_ = lean_box(v_res_89_);
return v_r_90_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__3(lean_object* v_fvar_91_, lean_object* v_b_92_, size_t v_sz_93_, size_t v_i_94_, lean_object* v_bs_95_){
_start:
{
uint8_t v___x_96_; 
v___x_96_ = lean_usize_dec_lt(v_i_94_, v_sz_93_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; 
lean_dec_ref(v_b_92_);
v___x_97_ = l_unsafeCast___redArg(v_bs_95_);
lean_dec_ref(v_bs_95_);
return v___x_97_;
}
else
{
lean_object* v_v_98_; lean_object* v___x_99_; lean_object* v_bs_x27_100_; lean_object* v___y_102_; lean_object* v___x_108_; uint8_t v___x_109_; 
v_v_98_ = lean_array_uget(v_bs_95_, v_i_94_);
v___x_99_ = lean_unsigned_to_nat(0u);
v_bs_x27_100_ = lean_array_uset(v_bs_95_, v_i_94_, v___x_99_);
v___x_108_ = l_unsafeCast___redArg(v_v_98_);
lean_dec(v_v_98_);
v___x_109_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0___redArg(v___x_108_, v_fvar_91_);
if (v___x_109_ == 0)
{
v___y_102_ = v___x_108_;
goto v___jp_101_;
}
else
{
uint8_t v___x_110_; lean_object* v___x_111_; 
v___x_110_ = 1;
lean_inc_ref(v_b_92_);
v___x_111_ = l_Lean_Compiler_LCNF_CodeDecl_collectUsed(v___x_110_, v_b_92_, v___x_108_);
v___y_102_ = v___x_111_;
goto v___jp_101_;
}
v___jp_101_:
{
size_t v___x_103_; size_t v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_103_ = ((size_t)1ULL);
v___x_104_ = lean_usize_add(v_i_94_, v___x_103_);
v___x_105_ = l_unsafeCast___redArg(v___y_102_);
lean_dec_ref(v___y_102_);
v___x_106_ = lean_array_uset(v_bs_x27_100_, v_i_94_, v___x_105_);
v_i_94_ = v___x_104_;
v_bs_95_ = v___x_106_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__3___boxed(lean_object* v_fvar_112_, lean_object* v_b_113_, lean_object* v_sz_114_, lean_object* v_i_115_, lean_object* v_bs_116_){
_start:
{
size_t v_sz_boxed_117_; size_t v_i_boxed_118_; lean_object* v_res_119_; 
v_sz_boxed_117_ = lean_unbox_usize(v_sz_114_);
lean_dec(v_sz_114_);
v_i_boxed_118_ = lean_unbox_usize(v_i_115_);
lean_dec(v_i_115_);
v_res_119_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__3(v_fvar_112_, v_b_113_, v_sz_boxed_117_, v_i_boxed_118_, v_bs_116_);
lean_dec(v_fvar_112_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2___redArg___lam__0(lean_object* v___x_120_, lean_object* v_altsUsed_121_, lean_object* v___x_122_, lean_object* v_fvar_123_, lean_object* v_b_124_, lean_object* v_k_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_){
_start:
{
lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_131_ = lean_array_get_borrowed(v___x_120_, v_altsUsed_121_, v___x_122_);
v___x_132_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0___redArg(v___x_131_, v_fvar_123_);
if (v___x_132_ == 0)
{
lean_object* v___x_133_; 
lean_dec_ref(v_b_124_);
v___x_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_133_, 0, v_k_125_);
return v___x_133_;
}
else
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_134_ = lean_unsigned_to_nat(1u);
v___x_135_ = lean_mk_empty_array_with_capacity(v___x_134_);
v___x_136_ = lean_array_push(v___x_135_, v_b_124_);
v___x_137_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v___x_136_, v_k_125_);
lean_dec_ref(v___x_136_);
v___x_138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
return v___x_138_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2___redArg___lam__0___boxed(lean_object* v___x_139_, lean_object* v_altsUsed_140_, lean_object* v___x_141_, lean_object* v_fvar_142_, lean_object* v_b_143_, lean_object* v_k_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2___redArg___lam__0(v___x_139_, v_altsUsed_140_, v___x_141_, v_fvar_142_, v_b_143_, v_k_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_);
lean_dec(v___y_148_);
lean_dec_ref(v___y_147_);
lean_dec(v___y_146_);
lean_dec_ref(v___y_145_);
lean_dec(v_fvar_142_);
lean_dec(v___x_141_);
lean_dec_ref(v_altsUsed_140_);
lean_dec_ref(v___x_139_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2___redArg(lean_object* v_altsUsed_151_, lean_object* v_fvar_152_, lean_object* v_b_153_, size_t v_sz_154_, size_t v_i_155_, lean_object* v_bs_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_){
_start:
{
uint8_t v___x_162_; 
v___x_162_ = lean_usize_dec_lt(v_i_155_, v_sz_154_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; lean_object* v___x_164_; 
lean_dec_ref(v_b_153_);
lean_dec(v_fvar_152_);
lean_dec_ref(v_altsUsed_151_);
v___x_163_ = l_unsafeCast___redArg(v_bs_156_);
lean_dec_ref(v_bs_156_);
v___x_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
return v___x_164_;
}
else
{
lean_object* v___x_165_; lean_object* v_v_166_; lean_object* v___x_167_; lean_object* v_bs_x27_168_; lean_object* v___x_169_; lean_object* v___f_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_165_ = l_Lean_instInhabitedFVarIdHashSet;
v_v_166_ = lean_array_uget(v_bs_156_, v_i_155_);
v___x_167_ = lean_unsigned_to_nat(0u);
v_bs_x27_168_ = lean_array_uset(v_bs_156_, v_i_155_, v___x_167_);
v___x_169_ = lean_usize_to_nat(v_i_155_);
lean_inc_ref(v_b_153_);
lean_inc(v_fvar_152_);
lean_inc_ref(v_altsUsed_151_);
v___f_170_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_170_, 0, v___x_165_);
lean_closure_set(v___f_170_, 1, v_altsUsed_151_);
lean_closure_set(v___f_170_, 2, v___x_169_);
lean_closure_set(v___f_170_, 3, v_fvar_152_);
lean_closure_set(v___f_170_, 4, v_b_153_);
v___x_171_ = l_unsafeCast___redArg(v_v_166_);
lean_dec(v_v_166_);
v___x_172_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__1___redArg(v___x_171_, v___f_170_, v___y_157_, v___y_158_, v___y_159_, v___y_160_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; size_t v___x_174_; size_t v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
lean_inc(v_a_173_);
lean_dec_ref_known(v___x_172_, 1);
v___x_174_ = ((size_t)1ULL);
v___x_175_ = lean_usize_add(v_i_155_, v___x_174_);
v___x_176_ = l_unsafeCast___redArg(v_a_173_);
lean_dec(v_a_173_);
v___x_177_ = lean_array_uset(v_bs_x27_168_, v_i_155_, v___x_176_);
v_i_155_ = v___x_175_;
v_bs_156_ = v___x_177_;
goto _start;
}
else
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_186_; 
lean_dec_ref(v_bs_x27_168_);
lean_dec_ref(v_b_153_);
lean_dec(v_fvar_152_);
lean_dec_ref(v_altsUsed_151_);
v_a_179_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_186_ == 0)
{
v___x_181_ = v___x_172_;
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_172_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_184_; 
if (v_isShared_182_ == 0)
{
v___x_184_ = v___x_181_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_a_179_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2___redArg___boxed(lean_object* v_altsUsed_187_, lean_object* v_fvar_188_, lean_object* v_b_189_, lean_object* v_sz_190_, lean_object* v_i_191_, lean_object* v_bs_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_){
_start:
{
size_t v_sz_boxed_198_; size_t v_i_boxed_199_; lean_object* v_res_200_; 
v_sz_boxed_198_ = lean_unbox_usize(v_sz_190_);
lean_dec(v_sz_190_);
v_i_boxed_199_ = lean_unbox_usize(v_i_191_);
lean_dec(v_i_191_);
v_res_200_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2___redArg(v_altsUsed_187_, v_fvar_188_, v_b_189_, v_sz_boxed_198_, v_i_boxed_199_, v_bs_192_, v___y_193_, v___y_194_, v___y_195_, v___y_196_);
lean_dec(v___y_196_);
lean_dec_ref(v___y_195_);
lean_dec(v___y_194_);
lean_dec_ref(v___y_193_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2(lean_object* v_altsUsed_201_, lean_object* v_fvar_202_, lean_object* v_b_203_, lean_object* v_as_204_, size_t v_sz_205_, size_t v_i_206_, lean_object* v_bs_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2___redArg(v_altsUsed_201_, v_fvar_202_, v_b_203_, v_sz_205_, v_i_206_, v_bs_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2___boxed(lean_object* v_altsUsed_214_, lean_object* v_fvar_215_, lean_object* v_b_216_, lean_object* v_as_217_, lean_object* v_sz_218_, lean_object* v_i_219_, lean_object* v_bs_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_){
_start:
{
size_t v_sz_boxed_226_; size_t v_i_boxed_227_; lean_object* v_res_228_; 
v_sz_boxed_226_ = lean_unbox_usize(v_sz_218_);
lean_dec(v_sz_218_);
v_i_boxed_227_ = lean_unbox_usize(v_i_219_);
lean_dec(v_i_219_);
v_res_228_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2(v_altsUsed_214_, v_fvar_215_, v_b_216_, v_as_217_, v_sz_boxed_226_, v_i_boxed_227_, v_bs_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
lean_dec(v___y_224_);
lean_dec_ref(v___y_223_);
lean_dec(v___y_222_);
lean_dec_ref(v___y_221_);
lean_dec_ref(v_as_217_);
return v_res_228_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go___closed__0(void){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = l_Lean_Compiler_LCNF_instInhabitedCodeDecl_default___redArg();
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go(lean_object* v_decls_232_, lean_object* v_alts_233_, lean_object* v_altsUsed_234_, lean_object* v_ctx_235_, lean_object* v_ctxUsed_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_242_ = lean_array_get_size(v_decls_232_);
v___x_243_ = lean_unsigned_to_nat(0u);
v___x_244_ = lean_nat_dec_eq(v___x_242_, v___x_243_);
if (v___x_244_ == 0)
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v_b_248_; lean_object* v_bs_249_; 
v___x_245_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go___closed__0, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go___closed__0_once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go___closed__0);
v___x_246_ = lean_unsigned_to_nat(1u);
v___x_247_ = lean_nat_sub(v___x_242_, v___x_246_);
v_b_248_ = lean_array_get(v___x_245_, v_decls_232_, v___x_247_);
lean_dec(v___x_247_);
v_bs_249_ = lean_array_pop(v_decls_232_);
if (lean_obj_tag(v_b_248_) == 0)
{
lean_object* v_decl_256_; lean_object* v_fvarId_257_; lean_object* v_value_258_; uint8_t v___x_259_; lean_object* v_fvar_261_; lean_object* v___y_262_; lean_object* v___y_263_; lean_object* v___y_264_; lean_object* v___y_265_; 
v_decl_256_ = lean_ctor_get(v_b_248_, 0);
v_fvarId_257_ = lean_ctor_get(v_decl_256_, 0);
v_value_258_ = lean_ctor_get(v_decl_256_, 3);
v___x_259_ = 1;
switch(lean_obj_tag(v_value_258_))
{
case 7:
{
lean_inc(v_fvarId_257_);
v_fvar_261_ = v_fvarId_257_;
v___y_262_ = v_a_237_;
v___y_263_ = v_a_238_;
v___y_264_ = v_a_239_;
v___y_265_ = v_a_240_;
goto v___jp_260_;
}
case 6:
{
lean_inc(v_fvarId_257_);
v_fvar_261_ = v_fvarId_257_;
v___y_262_ = v_a_237_;
v___y_263_ = v_a_238_;
v___y_264_ = v_a_239_;
v___y_265_ = v_a_240_;
goto v___jp_260_;
}
case 8:
{
lean_inc(v_fvarId_257_);
v_fvar_261_ = v_fvarId_257_;
v___y_262_ = v_a_237_;
v___y_263_ = v_a_238_;
v___y_264_ = v_a_239_;
v___y_265_ = v_a_240_;
goto v___jp_260_;
}
default: 
{
lean_dec_ref(v_ctxUsed_236_);
lean_dec_ref(v_altsUsed_234_);
goto v___jp_250_;
}
}
v___jp_260_:
{
uint8_t v___x_266_; 
v___x_266_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0___redArg(v_ctxUsed_236_, v_fvar_261_);
if (v___x_266_ == 0)
{
size_t v_sz_267_; size_t v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_1750__overap_273_; lean_object* v___x_274_; 
v_sz_267_ = lean_array_size(v_alts_233_);
v___x_268_ = ((size_t)0ULL);
v___x_269_ = l_unsafeCast___redArg(v_alts_233_);
v___x_270_ = lean_box_usize(v_sz_267_);
v___x_271_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go___boxed__const__1));
lean_inc_ref(v_b_248_);
lean_inc(v_fvar_261_);
lean_inc_ref(v_altsUsed_234_);
v___x_272_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__2___boxed), 12, 7);
lean_closure_set(v___x_272_, 0, v_altsUsed_234_);
lean_closure_set(v___x_272_, 1, v_fvar_261_);
lean_closure_set(v___x_272_, 2, v_b_248_);
lean_closure_set(v___x_272_, 3, v_alts_233_);
lean_closure_set(v___x_272_, 4, v___x_270_);
lean_closure_set(v___x_272_, 5, v___x_271_);
lean_closure_set(v___x_272_, 6, v___x_269_);
v___x_1750__overap_273_ = l_unsafeCast___redArg(v___x_272_);
lean_dec_ref(v___x_272_);
lean_inc(v___y_265_);
lean_inc_ref(v___y_264_);
lean_inc(v___y_263_);
lean_inc_ref(v___y_262_);
v___x_274_ = lean_apply_5(v___x_1750__overap_273_, v___y_262_, v___y_263_, v___y_264_, v___y_265_, lean_box(0));
if (lean_obj_tag(v___x_274_) == 0)
{
lean_object* v_a_275_; size_t v_sz_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v_a_275_ = lean_ctor_get(v___x_274_, 0);
lean_inc(v_a_275_);
lean_dec_ref_known(v___x_274_, 1);
v_sz_276_ = lean_array_size(v_altsUsed_234_);
v___x_277_ = l_unsafeCast___redArg(v_altsUsed_234_);
lean_dec_ref(v_altsUsed_234_);
v___x_278_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__3(v_fvar_261_, v_b_248_, v_sz_276_, v___x_268_, v___x_277_);
lean_dec(v_fvar_261_);
v___x_279_ = l_unsafeCast___redArg(v___x_278_);
lean_dec_ref(v___x_278_);
v_decls_232_ = v_bs_249_;
v_alts_233_ = v_a_275_;
v_altsUsed_234_ = v___x_279_;
v_a_237_ = v___y_262_;
v_a_238_ = v___y_263_;
v_a_239_ = v___y_264_;
v_a_240_ = v___y_265_;
goto _start;
}
else
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
lean_dec(v_fvar_261_);
lean_dec_ref_known(v_b_248_, 1);
lean_dec_ref(v_bs_249_);
lean_dec_ref(v_ctxUsed_236_);
lean_dec_ref(v_ctx_235_);
lean_dec_ref(v_altsUsed_234_);
v_a_281_ = lean_ctor_get(v___x_274_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_288_ == 0)
{
v___x_283_ = v___x_274_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_274_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
else
{
lean_object* v___x_289_; lean_object* v___x_290_; 
lean_dec(v_fvar_261_);
lean_inc_ref(v_b_248_);
v___x_289_ = lean_array_push(v_ctx_235_, v_b_248_);
v___x_290_ = l_Lean_Compiler_LCNF_CodeDecl_collectUsed(v___x_259_, v_b_248_, v_ctxUsed_236_);
v_decls_232_ = v_bs_249_;
v_ctx_235_ = v___x_289_;
v_ctxUsed_236_ = v___x_290_;
v_a_237_ = v___y_262_;
v_a_238_ = v___y_263_;
v_a_239_ = v___y_264_;
v_a_240_ = v___y_265_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_ctxUsed_236_);
lean_dec_ref(v_altsUsed_234_);
goto v___jp_250_;
}
v___jp_250_:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_251_ = lean_array_push(v_bs_249_, v_b_248_);
v___x_252_ = l_Array_reverse___redArg(v_ctx_235_);
v___x_253_ = l_Array_append___redArg(v___x_251_, v___x_252_);
lean_dec_ref(v___x_252_);
v___x_254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
lean_ctor_set(v___x_254_, 1, v_alts_233_);
v___x_255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_255_, 0, v___x_254_);
return v___x_255_;
}
}
else
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
lean_dec_ref(v_ctxUsed_236_);
lean_dec_ref(v_altsUsed_234_);
lean_dec_ref(v_decls_232_);
v___x_292_ = l_Array_reverse___redArg(v_ctx_235_);
v___x_293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set(v___x_293_, 1, v_alts_233_);
v___x_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
return v___x_294_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go___boxed(lean_object* v_decls_295_, lean_object* v_alts_296_, lean_object* v_altsUsed_297_, lean_object* v_ctx_298_, lean_object* v_ctxUsed_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go(v_decls_295_, v_alts_296_, v_altsUsed_297_, v_ctx_298_, v_ctxUsed_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
lean_dec(v_a_301_);
lean_dec_ref(v_a_300_);
return v_res_305_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0(lean_object* v_00_u03b2_306_, lean_object* v_m_307_, lean_object* v_a_308_){
_start:
{
uint8_t v___x_309_; 
v___x_309_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0___redArg(v_m_307_, v_a_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0___boxed(lean_object* v_00_u03b2_310_, lean_object* v_m_311_, lean_object* v_a_312_){
_start:
{
uint8_t v_res_313_; lean_object* v_r_314_; 
v_res_313_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0(v_00_u03b2_310_, v_m_311_, v_a_312_);
lean_dec(v_a_312_);
lean_dec_ref(v_m_311_);
v_r_314_ = lean_box(v_res_313_);
return v_r_314_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0_spec__0(lean_object* v_00_u03b2_315_, lean_object* v_a_316_, lean_object* v_x_317_){
_start:
{
uint8_t v___x_318_; 
v___x_318_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0_spec__0___redArg(v_a_316_, v_x_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_319_, lean_object* v_a_320_, lean_object* v_x_321_){
_start:
{
uint8_t v_res_322_; lean_object* v_r_323_; 
v_res_322_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0_spec__0(v_00_u03b2_319_, v_a_320_, v_x_321_);
lean_dec(v_x_321_);
lean_dec(v_a_320_);
v_r_323_ = lean_box(v_res_322_);
return v_r_323_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__1(size_t v_sz_324_, size_t v_i_325_, lean_object* v_bs_326_){
_start:
{
uint8_t v___x_327_; 
v___x_327_ = lean_usize_dec_lt(v_i_325_, v_sz_324_);
if (v___x_327_ == 0)
{
lean_object* v___x_328_; 
v___x_328_ = l_unsafeCast___redArg(v_bs_326_);
lean_dec_ref(v_bs_326_);
return v___x_328_;
}
else
{
lean_object* v___x_329_; lean_object* v_v_330_; lean_object* v___x_331_; lean_object* v_bs_x27_332_; lean_object* v___x_333_; uint8_t v___x_334_; lean_object* v___y_336_; 
v___x_329_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v_v_330_ = lean_array_uget(v_bs_326_, v_i_325_);
v___x_331_ = lean_unsigned_to_nat(0u);
v_bs_x27_332_ = lean_array_uset(v_bs_326_, v_i_325_, v___x_331_);
v___x_333_ = l_unsafeCast___redArg(v_v_330_);
lean_dec(v_v_330_);
v___x_334_ = 1;
switch(lean_obj_tag(v___x_333_))
{
case 0:
{
lean_object* v_code_343_; 
v_code_343_ = lean_ctor_get(v___x_333_, 2);
lean_inc_ref(v_code_343_);
lean_dec_ref_known(v___x_333_, 3);
v___y_336_ = v_code_343_;
goto v___jp_335_;
}
case 1:
{
lean_object* v_code_344_; 
v_code_344_ = lean_ctor_get(v___x_333_, 1);
lean_inc_ref(v_code_344_);
lean_dec_ref_known(v___x_333_, 2);
v___y_336_ = v_code_344_;
goto v___jp_335_;
}
default: 
{
lean_object* v_code_345_; 
v_code_345_ = lean_ctor_get(v___x_333_, 0);
lean_inc_ref(v_code_345_);
lean_dec_ref_known(v___x_333_, 1);
v___y_336_ = v_code_345_;
goto v___jp_335_;
}
}
v___jp_335_:
{
lean_object* v___x_337_; size_t v___x_338_; size_t v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_337_ = l_Lean_Compiler_LCNF_Code_collectUsed(v___x_334_, v___y_336_, v___x_329_);
v___x_338_ = ((size_t)1ULL);
v___x_339_ = lean_usize_add(v_i_325_, v___x_338_);
v___x_340_ = l_unsafeCast___redArg(v___x_337_);
lean_dec_ref(v___x_337_);
v___x_341_ = lean_array_uset(v_bs_x27_332_, v_i_325_, v___x_340_);
v_i_325_ = v___x_339_;
v_bs_326_ = v___x_341_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__1___boxed(lean_object* v_sz_346_, lean_object* v_i_347_, lean_object* v_bs_348_){
_start:
{
size_t v_sz_boxed_349_; size_t v_i_boxed_350_; lean_object* v_res_351_; 
v_sz_boxed_349_ = lean_unbox_usize(v_sz_346_);
lean_dec(v_sz_346_);
v_i_boxed_350_ = lean_unbox_usize(v_i_347_);
lean_dec(v_i_347_);
v_res_351_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__1(v_sz_boxed_349_, v_i_boxed_350_, v_bs_348_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3_spec__4_spec__6___redArg(lean_object* v_x_352_, lean_object* v_x_353_){
_start:
{
if (lean_obj_tag(v_x_353_) == 0)
{
return v_x_352_;
}
else
{
lean_object* v_key_354_; lean_object* v_value_355_; lean_object* v_tail_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_379_; 
v_key_354_ = lean_ctor_get(v_x_353_, 0);
v_value_355_ = lean_ctor_get(v_x_353_, 1);
v_tail_356_ = lean_ctor_get(v_x_353_, 2);
v_isSharedCheck_379_ = !lean_is_exclusive(v_x_353_);
if (v_isSharedCheck_379_ == 0)
{
v___x_358_ = v_x_353_;
v_isShared_359_ = v_isSharedCheck_379_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_tail_356_);
lean_inc(v_value_355_);
lean_inc(v_key_354_);
lean_dec(v_x_353_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_379_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_360_; uint64_t v___x_361_; uint64_t v___x_362_; uint64_t v___x_363_; uint64_t v_fold_364_; uint64_t v___x_365_; uint64_t v___x_366_; uint64_t v___x_367_; size_t v___x_368_; size_t v___x_369_; size_t v___x_370_; size_t v___x_371_; size_t v___x_372_; lean_object* v___x_373_; lean_object* v___x_375_; 
v___x_360_ = lean_array_get_size(v_x_352_);
v___x_361_ = l_Lean_instHashableFVarId_hash(v_key_354_);
v___x_362_ = 32ULL;
v___x_363_ = lean_uint64_shift_right(v___x_361_, v___x_362_);
v_fold_364_ = lean_uint64_xor(v___x_361_, v___x_363_);
v___x_365_ = 16ULL;
v___x_366_ = lean_uint64_shift_right(v_fold_364_, v___x_365_);
v___x_367_ = lean_uint64_xor(v_fold_364_, v___x_366_);
v___x_368_ = lean_uint64_to_usize(v___x_367_);
v___x_369_ = lean_usize_of_nat(v___x_360_);
v___x_370_ = ((size_t)1ULL);
v___x_371_ = lean_usize_sub(v___x_369_, v___x_370_);
v___x_372_ = lean_usize_land(v___x_368_, v___x_371_);
v___x_373_ = lean_array_uget_borrowed(v_x_352_, v___x_372_);
lean_inc(v___x_373_);
if (v_isShared_359_ == 0)
{
lean_ctor_set(v___x_358_, 2, v___x_373_);
v___x_375_ = v___x_358_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_key_354_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v_value_355_);
lean_ctor_set(v_reuseFailAlloc_378_, 2, v___x_373_);
v___x_375_ = v_reuseFailAlloc_378_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
lean_object* v___x_376_; 
v___x_376_ = lean_array_uset(v_x_352_, v___x_372_, v___x_375_);
v_x_352_ = v___x_376_;
v_x_353_ = v_tail_356_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3_spec__4___redArg(lean_object* v_i_380_, lean_object* v_source_381_, lean_object* v_target_382_){
_start:
{
lean_object* v___x_383_; uint8_t v___x_384_; 
v___x_383_ = lean_array_get_size(v_source_381_);
v___x_384_ = lean_nat_dec_lt(v_i_380_, v___x_383_);
if (v___x_384_ == 0)
{
lean_dec_ref(v_source_381_);
lean_dec(v_i_380_);
return v_target_382_;
}
else
{
lean_object* v_es_385_; lean_object* v___x_386_; lean_object* v_source_387_; lean_object* v_target_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v_es_385_ = lean_array_fget(v_source_381_, v_i_380_);
v___x_386_ = lean_box(0);
v_source_387_ = lean_array_fset(v_source_381_, v_i_380_, v___x_386_);
v_target_388_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3_spec__4_spec__6___redArg(v_target_382_, v_es_385_);
v___x_389_ = lean_unsigned_to_nat(1u);
v___x_390_ = lean_nat_add(v_i_380_, v___x_389_);
lean_dec(v_i_380_);
v_i_380_ = v___x_390_;
v_source_381_ = v_source_387_;
v_target_382_ = v_target_388_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3___redArg(lean_object* v_data_392_){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v_nbuckets_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_393_ = lean_array_get_size(v_data_392_);
v___x_394_ = lean_unsigned_to_nat(2u);
v_nbuckets_395_ = lean_nat_mul(v___x_393_, v___x_394_);
v___x_396_ = lean_unsigned_to_nat(0u);
v___x_397_ = lean_box(0);
v___x_398_ = lean_mk_array(v_nbuckets_395_, v___x_397_);
v___x_399_ = lean_array_propagate_mark(v_data_392_, v___x_398_);
v___x_400_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3_spec__4___redArg(v___x_396_, v_data_392_, v___x_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2___redArg(lean_object* v_m_401_, lean_object* v_a_402_, lean_object* v_b_403_){
_start:
{
lean_object* v_size_404_; lean_object* v_buckets_405_; lean_object* v___x_406_; uint64_t v___x_407_; uint64_t v___x_408_; uint64_t v___x_409_; uint64_t v_fold_410_; uint64_t v___x_411_; uint64_t v___x_412_; uint64_t v___x_413_; size_t v___x_414_; size_t v___x_415_; size_t v___x_416_; size_t v___x_417_; size_t v___x_418_; lean_object* v_bkt_419_; uint8_t v___x_420_; 
v_size_404_ = lean_ctor_get(v_m_401_, 0);
v_buckets_405_ = lean_ctor_get(v_m_401_, 1);
v___x_406_ = lean_array_get_size(v_buckets_405_);
v___x_407_ = l_Lean_instHashableFVarId_hash(v_a_402_);
v___x_408_ = 32ULL;
v___x_409_ = lean_uint64_shift_right(v___x_407_, v___x_408_);
v_fold_410_ = lean_uint64_xor(v___x_407_, v___x_409_);
v___x_411_ = 16ULL;
v___x_412_ = lean_uint64_shift_right(v_fold_410_, v___x_411_);
v___x_413_ = lean_uint64_xor(v_fold_410_, v___x_412_);
v___x_414_ = lean_uint64_to_usize(v___x_413_);
v___x_415_ = lean_usize_of_nat(v___x_406_);
v___x_416_ = ((size_t)1ULL);
v___x_417_ = lean_usize_sub(v___x_415_, v___x_416_);
v___x_418_ = lean_usize_land(v___x_414_, v___x_417_);
v_bkt_419_ = lean_array_uget_borrowed(v_buckets_405_, v___x_418_);
v___x_420_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__0_spec__0___redArg(v_a_402_, v_bkt_419_);
if (v___x_420_ == 0)
{
lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_441_; 
lean_inc_ref(v_buckets_405_);
lean_inc(v_size_404_);
v_isSharedCheck_441_ = !lean_is_exclusive(v_m_401_);
if (v_isSharedCheck_441_ == 0)
{
lean_object* v_unused_442_; lean_object* v_unused_443_; 
v_unused_442_ = lean_ctor_get(v_m_401_, 1);
lean_dec(v_unused_442_);
v_unused_443_ = lean_ctor_get(v_m_401_, 0);
lean_dec(v_unused_443_);
v___x_422_ = v_m_401_;
v_isShared_423_ = v_isSharedCheck_441_;
goto v_resetjp_421_;
}
else
{
lean_dec(v_m_401_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_441_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_424_; lean_object* v_size_x27_425_; lean_object* v___x_426_; lean_object* v_buckets_x27_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; 
v___x_424_ = lean_unsigned_to_nat(1u);
v_size_x27_425_ = lean_nat_add(v_size_404_, v___x_424_);
lean_dec(v_size_404_);
lean_inc(v_bkt_419_);
v___x_426_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_426_, 0, v_a_402_);
lean_ctor_set(v___x_426_, 1, v_b_403_);
lean_ctor_set(v___x_426_, 2, v_bkt_419_);
v_buckets_x27_427_ = lean_array_uset(v_buckets_405_, v___x_418_, v___x_426_);
v___x_428_ = lean_unsigned_to_nat(4u);
v___x_429_ = lean_nat_mul(v_size_x27_425_, v___x_428_);
v___x_430_ = lean_unsigned_to_nat(3u);
v___x_431_ = lean_nat_div(v___x_429_, v___x_430_);
lean_dec(v___x_429_);
v___x_432_ = lean_array_get_size(v_buckets_x27_427_);
v___x_433_ = lean_nat_dec_le(v___x_431_, v___x_432_);
lean_dec(v___x_431_);
if (v___x_433_ == 0)
{
lean_object* v_val_434_; lean_object* v___x_436_; 
v_val_434_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3___redArg(v_buckets_x27_427_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 1, v_val_434_);
lean_ctor_set(v___x_422_, 0, v_size_x27_425_);
v___x_436_ = v___x_422_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_size_x27_425_);
lean_ctor_set(v_reuseFailAlloc_437_, 1, v_val_434_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
else
{
lean_object* v___x_439_; 
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 1, v_buckets_x27_427_);
lean_ctor_set(v___x_422_, 0, v_size_x27_425_);
v___x_439_ = v___x_422_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_size_x27_425_);
lean_ctor_set(v_reuseFailAlloc_440_, 1, v_buckets_x27_427_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
}
else
{
lean_dec(v_b_403_);
lean_dec(v_a_402_);
return v_m_401_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj___boxed(lean_object* v_code_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj(v_code_446_, v_a_447_, v_a_448_, v_a_449_, v_a_450_);
lean_dec(v_a_450_);
lean_dec_ref(v_a_449_);
lean_dec(v_a_448_);
lean_dec_ref(v_a_447_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__3(lean_object* v_i_453_, lean_object* v_as_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_){
_start:
{
lean_object* v___x_460_; uint8_t v___x_461_; 
v___x_460_ = lean_array_get_size(v_as_454_);
v___x_461_ = lean_nat_dec_lt(v_i_453_, v___x_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; 
lean_dec(v_i_453_);
v___x_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_462_, 0, v_as_454_);
return v___x_462_;
}
else
{
lean_object* v_a_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v_a_463_ = lean_array_fget_borrowed(v_as_454_, v_i_453_);
v___x_464_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj___boxed), 6, 0);
lean_inc(v_a_463_);
v___x_465_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go_spec__1___redArg(v_a_463_, v___x_464_, v___y_455_, v___y_456_, v___y_457_, v___y_458_);
if (lean_obj_tag(v___x_465_) == 0)
{
lean_object* v_a_466_; size_t v___x_467_; size_t v___x_468_; uint8_t v___x_469_; 
v_a_466_ = lean_ctor_get(v___x_465_, 0);
lean_inc(v_a_466_);
lean_dec_ref_known(v___x_465_, 1);
v___x_467_ = lean_ptr_addr(v_a_463_);
v___x_468_ = lean_ptr_addr(v_a_466_);
v___x_469_ = lean_usize_dec_eq(v___x_467_, v___x_468_);
if (v___x_469_ == 0)
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_470_ = lean_unsigned_to_nat(1u);
v___x_471_ = lean_nat_add(v_i_453_, v___x_470_);
v___x_472_ = lean_array_fset(v_as_454_, v_i_453_, v_a_466_);
lean_dec(v_i_453_);
v_i_453_ = v___x_471_;
v_as_454_ = v___x_472_;
goto _start;
}
else
{
lean_object* v___x_474_; lean_object* v___x_475_; 
lean_dec(v_a_466_);
v___x_474_ = lean_unsigned_to_nat(1u);
v___x_475_ = lean_nat_add(v_i_453_, v___x_474_);
lean_dec(v_i_453_);
v_i_453_ = v___x_475_;
goto _start;
}
}
else
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_484_; 
lean_dec_ref(v_as_454_);
lean_dec(v_i_453_);
v_a_477_ = lean_ctor_get(v___x_465_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_465_);
if (v_isSharedCheck_484_ == 0)
{
v___x_479_ = v___x_465_;
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_465_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_482_; 
if (v_isShared_480_ == 0)
{
v___x_482_ = v___x_479_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_a_477_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs(lean_object* v_c_485_, lean_object* v_decls_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_){
_start:
{
lean_object* v_typeName_492_; lean_object* v_resultType_493_; lean_object* v_discr_494_; lean_object* v_alts_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_543_; 
v_typeName_492_ = lean_ctor_get(v_c_485_, 0);
v_resultType_493_ = lean_ctor_get(v_c_485_, 1);
v_discr_494_ = lean_ctor_get(v_c_485_, 2);
v_alts_495_ = lean_ctor_get(v_c_485_, 3);
v_isSharedCheck_543_ = !lean_is_exclusive(v_c_485_);
if (v_isSharedCheck_543_ == 0)
{
v___x_497_ = v_c_485_;
v_isShared_498_ = v_isSharedCheck_543_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_alts_495_);
lean_inc(v_discr_494_);
lean_inc(v_resultType_493_);
lean_inc(v_typeName_492_);
lean_dec(v_c_485_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_543_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_499_; size_t v_sz_500_; size_t v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v_altsUsed_504_; lean_object* v___x_505_; lean_object* v_ctxUsed_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_499_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v_sz_500_ = lean_array_size(v_alts_495_);
v___x_501_ = ((size_t)0ULL);
v___x_502_ = l_unsafeCast___redArg(v_alts_495_);
v___x_503_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__1(v_sz_500_, v___x_501_, v___x_502_);
v_altsUsed_504_ = l_unsafeCast___redArg(v___x_503_);
lean_dec_ref(v___x_503_);
v___x_505_ = lean_box(0);
lean_inc(v_discr_494_);
v_ctxUsed_506_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2___redArg(v___x_499_, v_discr_494_, v___x_505_);
v___x_507_ = lean_unsigned_to_nat(0u);
v___x_508_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj___closed__0));
v___x_509_ = l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_go(v_decls_486_, v_alts_495_, v_altsUsed_504_, v___x_508_, v_ctxUsed_506_, v_a_487_, v_a_488_, v_a_489_, v_a_490_);
if (lean_obj_tag(v___x_509_) == 0)
{
lean_object* v_a_510_; lean_object* v_fst_511_; lean_object* v_snd_512_; lean_object* v___x_513_; 
v_a_510_ = lean_ctor_get(v___x_509_, 0);
lean_inc(v_a_510_);
lean_dec_ref_known(v___x_509_, 1);
v_fst_511_ = lean_ctor_get(v_a_510_, 0);
lean_inc(v_fst_511_);
v_snd_512_ = lean_ctor_get(v_a_510_, 1);
lean_inc(v_snd_512_);
lean_dec(v_a_510_);
v___x_513_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__3(v___x_507_, v_snd_512_, v_a_487_, v_a_488_, v_a_489_, v_a_490_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_526_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_513_);
if (v_isSharedCheck_526_ == 0)
{
v___x_516_ = v___x_513_;
v_isShared_517_ = v_isSharedCheck_526_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_513_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_526_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_519_; 
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 3, v_a_514_);
v___x_519_ = v___x_497_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_typeName_492_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v_resultType_493_);
lean_ctor_set(v_reuseFailAlloc_525_, 2, v_discr_494_);
lean_ctor_set(v_reuseFailAlloc_525_, 3, v_a_514_);
v___x_519_ = v_reuseFailAlloc_525_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_523_; 
v___x_520_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_520_, 0, v___x_519_);
v___x_521_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_fst_511_, v___x_520_);
lean_dec(v_fst_511_);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v___x_521_);
v___x_523_ = v___x_516_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v___x_521_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
else
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_534_; 
lean_dec(v_fst_511_);
lean_del_object(v___x_497_);
lean_dec(v_discr_494_);
lean_dec_ref(v_resultType_493_);
lean_dec(v_typeName_492_);
v_a_527_ = lean_ctor_get(v___x_513_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_513_);
if (v_isSharedCheck_534_ == 0)
{
v___x_529_ = v___x_513_;
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_513_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
if (v_isShared_530_ == 0)
{
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_a_527_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
else
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
lean_del_object(v___x_497_);
lean_dec(v_discr_494_);
lean_dec_ref(v_resultType_493_);
lean_dec(v_typeName_492_);
v_a_535_ = lean_ctor_get(v___x_509_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_509_);
if (v_isSharedCheck_542_ == 0)
{
v___x_537_ = v___x_509_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_509_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_a_535_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj_go(lean_object* v_c_544_, lean_object* v_decls_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_){
_start:
{
switch(lean_obj_tag(v_c_544_))
{
case 0:
{
lean_object* v_decl_551_; lean_object* v_k_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v_decl_551_ = lean_ctor_get(v_c_544_, 0);
lean_inc_ref(v_decl_551_);
v_k_552_ = lean_ctor_get(v_c_544_, 1);
lean_inc_ref(v_k_552_);
lean_dec_ref_known(v_c_544_, 2);
v___x_553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_553_, 0, v_decl_551_);
v___x_554_ = lean_array_push(v_decls_545_, v___x_553_);
v_c_544_ = v_k_552_;
v_decls_545_ = v___x_554_;
goto _start;
}
case 2:
{
lean_object* v_decl_556_; lean_object* v_k_557_; lean_object* v_params_558_; lean_object* v_type_559_; lean_object* v_value_560_; uint8_t v___x_561_; lean_object* v___x_562_; 
v_decl_556_ = lean_ctor_get(v_c_544_, 0);
lean_inc_ref(v_decl_556_);
v_k_557_ = lean_ctor_get(v_c_544_, 1);
lean_inc_ref(v_k_557_);
lean_dec_ref_known(v_c_544_, 2);
v_params_558_ = lean_ctor_get(v_decl_556_, 2);
lean_inc_ref(v_params_558_);
v_type_559_ = lean_ctor_get(v_decl_556_, 3);
lean_inc_ref(v_type_559_);
v_value_560_ = lean_ctor_get(v_decl_556_, 4);
v___x_561_ = 1;
lean_inc_ref(v_value_560_);
v___x_562_ = l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj(v_value_560_, v_a_546_, v_a_547_, v_a_548_, v_a_549_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_582_; 
v_a_563_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_582_ == 0)
{
v___x_565_ = v___x_562_;
v_isShared_566_ = v_isSharedCheck_582_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_562_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_582_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_567_; 
v___x_567_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_561_, v_decl_556_, v_type_559_, v_params_558_, v_a_563_, v_a_547_);
if (lean_obj_tag(v___x_567_) == 0)
{
lean_object* v_a_568_; lean_object* v___x_570_; 
v_a_568_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_a_568_);
lean_dec_ref_known(v___x_567_, 1);
if (v_isShared_566_ == 0)
{
lean_ctor_set_tag(v___x_565_, 2);
lean_ctor_set(v___x_565_, 0, v_a_568_);
v___x_570_ = v___x_565_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_a_568_);
v___x_570_ = v_reuseFailAlloc_573_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
lean_object* v___x_571_; 
v___x_571_ = lean_array_push(v_decls_545_, v___x_570_);
v_c_544_ = v_k_557_;
v_decls_545_ = v___x_571_;
goto _start;
}
}
else
{
lean_object* v_a_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_581_; 
lean_del_object(v___x_565_);
lean_dec_ref(v_k_557_);
lean_dec_ref(v_decls_545_);
v_a_574_ = lean_ctor_get(v___x_567_, 0);
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_567_);
if (v_isSharedCheck_581_ == 0)
{
v___x_576_ = v___x_567_;
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_a_574_);
lean_dec(v___x_567_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_579_; 
if (v_isShared_577_ == 0)
{
v___x_579_ = v___x_576_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_a_574_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
}
}
}
}
}
else
{
lean_dec_ref(v_type_559_);
lean_dec_ref(v_params_558_);
lean_dec_ref(v_k_557_);
lean_dec_ref(v_decl_556_);
lean_dec_ref(v_decls_545_);
return v___x_562_;
}
}
case 4:
{
lean_object* v_cases_583_; lean_object* v___x_584_; 
v_cases_583_ = lean_ctor_get(v_c_544_, 0);
lean_inc_ref(v_cases_583_);
lean_dec_ref_known(v_c_544_, 1);
v___x_584_ = l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs(v_cases_583_, v_decls_545_, v_a_546_, v_a_547_, v_a_548_, v_a_549_);
return v___x_584_;
}
case 7:
{
lean_object* v_fvarId_585_; lean_object* v_i_586_; lean_object* v_y_587_; lean_object* v_k_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v_fvarId_585_ = lean_ctor_get(v_c_544_, 0);
lean_inc(v_fvarId_585_);
v_i_586_ = lean_ctor_get(v_c_544_, 1);
lean_inc(v_i_586_);
v_y_587_ = lean_ctor_get(v_c_544_, 2);
lean_inc(v_y_587_);
v_k_588_ = lean_ctor_get(v_c_544_, 3);
lean_inc_ref(v_k_588_);
lean_dec_ref_known(v_c_544_, 4);
v___x_589_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_589_, 0, v_fvarId_585_);
lean_ctor_set(v___x_589_, 1, v_i_586_);
lean_ctor_set(v___x_589_, 2, v_y_587_);
v___x_590_ = lean_array_push(v_decls_545_, v___x_589_);
v_c_544_ = v_k_588_;
v_decls_545_ = v___x_590_;
goto _start;
}
case 8:
{
lean_object* v_fvarId_592_; lean_object* v_i_593_; lean_object* v_y_594_; lean_object* v_k_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v_fvarId_592_ = lean_ctor_get(v_c_544_, 0);
lean_inc(v_fvarId_592_);
v_i_593_ = lean_ctor_get(v_c_544_, 1);
lean_inc(v_i_593_);
v_y_594_ = lean_ctor_get(v_c_544_, 2);
lean_inc(v_y_594_);
v_k_595_ = lean_ctor_get(v_c_544_, 3);
lean_inc_ref(v_k_595_);
lean_dec_ref_known(v_c_544_, 4);
v___x_596_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v___x_596_, 0, v_fvarId_592_);
lean_ctor_set(v___x_596_, 1, v_i_593_);
lean_ctor_set(v___x_596_, 2, v_y_594_);
v___x_597_ = lean_array_push(v_decls_545_, v___x_596_);
v_c_544_ = v_k_595_;
v_decls_545_ = v___x_597_;
goto _start;
}
case 9:
{
lean_object* v_fvarId_599_; lean_object* v_i_600_; lean_object* v_offset_601_; lean_object* v_y_602_; lean_object* v_ty_603_; lean_object* v_k_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v_fvarId_599_ = lean_ctor_get(v_c_544_, 0);
lean_inc(v_fvarId_599_);
v_i_600_ = lean_ctor_get(v_c_544_, 1);
lean_inc(v_i_600_);
v_offset_601_ = lean_ctor_get(v_c_544_, 2);
lean_inc(v_offset_601_);
v_y_602_ = lean_ctor_get(v_c_544_, 3);
lean_inc(v_y_602_);
v_ty_603_ = lean_ctor_get(v_c_544_, 4);
lean_inc_ref(v_ty_603_);
v_k_604_ = lean_ctor_get(v_c_544_, 5);
lean_inc_ref(v_k_604_);
lean_dec_ref_known(v_c_544_, 6);
v___x_605_ = lean_alloc_ctor(5, 5, 0);
lean_ctor_set(v___x_605_, 0, v_fvarId_599_);
lean_ctor_set(v___x_605_, 1, v_i_600_);
lean_ctor_set(v___x_605_, 2, v_offset_601_);
lean_ctor_set(v___x_605_, 3, v_y_602_);
lean_ctor_set(v___x_605_, 4, v_ty_603_);
v___x_606_ = lean_array_push(v_decls_545_, v___x_605_);
v_c_544_ = v_k_604_;
v_decls_545_ = v___x_606_;
goto _start;
}
case 10:
{
lean_object* v_fvarId_608_; lean_object* v_cidx_609_; lean_object* v_k_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v_fvarId_608_ = lean_ctor_get(v_c_544_, 0);
lean_inc(v_fvarId_608_);
v_cidx_609_ = lean_ctor_get(v_c_544_, 1);
lean_inc(v_cidx_609_);
v_k_610_ = lean_ctor_get(v_c_544_, 2);
lean_inc_ref(v_k_610_);
lean_dec_ref_known(v_c_544_, 3);
v___x_611_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_611_, 0, v_fvarId_608_);
lean_ctor_set(v___x_611_, 1, v_cidx_609_);
v___x_612_ = lean_array_push(v_decls_545_, v___x_611_);
v_c_544_ = v_k_610_;
v_decls_545_ = v___x_612_;
goto _start;
}
case 11:
{
lean_object* v_fvarId_614_; lean_object* v_n_615_; uint8_t v_check_616_; uint8_t v_persistent_617_; lean_object* v_k_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v_fvarId_614_ = lean_ctor_get(v_c_544_, 0);
lean_inc(v_fvarId_614_);
v_n_615_ = lean_ctor_get(v_c_544_, 1);
lean_inc(v_n_615_);
v_check_616_ = lean_ctor_get_uint8(v_c_544_, sizeof(void*)*3);
v_persistent_617_ = lean_ctor_get_uint8(v_c_544_, sizeof(void*)*3 + 1);
v_k_618_ = lean_ctor_get(v_c_544_, 2);
lean_inc_ref(v_k_618_);
lean_dec_ref_known(v_c_544_, 3);
v___x_619_ = lean_alloc_ctor(7, 2, 2);
lean_ctor_set(v___x_619_, 0, v_fvarId_614_);
lean_ctor_set(v___x_619_, 1, v_n_615_);
lean_ctor_set_uint8(v___x_619_, sizeof(void*)*2, v_check_616_);
lean_ctor_set_uint8(v___x_619_, sizeof(void*)*2 + 1, v_persistent_617_);
v___x_620_ = lean_array_push(v_decls_545_, v___x_619_);
v_c_544_ = v_k_618_;
v_decls_545_ = v___x_620_;
goto _start;
}
case 12:
{
lean_object* v_fvarId_622_; lean_object* v_n_623_; uint8_t v_check_624_; uint8_t v_persistent_625_; lean_object* v_objs_x3f_626_; lean_object* v_k_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v_fvarId_622_ = lean_ctor_get(v_c_544_, 0);
lean_inc(v_fvarId_622_);
v_n_623_ = lean_ctor_get(v_c_544_, 1);
lean_inc(v_n_623_);
v_check_624_ = lean_ctor_get_uint8(v_c_544_, sizeof(void*)*4);
v_persistent_625_ = lean_ctor_get_uint8(v_c_544_, sizeof(void*)*4 + 1);
v_objs_x3f_626_ = lean_ctor_get(v_c_544_, 2);
lean_inc(v_objs_x3f_626_);
v_k_627_ = lean_ctor_get(v_c_544_, 3);
lean_inc_ref(v_k_627_);
lean_dec_ref_known(v_c_544_, 4);
v___x_628_ = lean_alloc_ctor(8, 3, 2);
lean_ctor_set(v___x_628_, 0, v_fvarId_622_);
lean_ctor_set(v___x_628_, 1, v_n_623_);
lean_ctor_set(v___x_628_, 2, v_objs_x3f_626_);
lean_ctor_set_uint8(v___x_628_, sizeof(void*)*3, v_check_624_);
lean_ctor_set_uint8(v___x_628_, sizeof(void*)*3 + 1, v_persistent_625_);
v___x_629_ = lean_array_push(v_decls_545_, v___x_628_);
v_c_544_ = v_k_627_;
v_decls_545_ = v___x_629_;
goto _start;
}
case 13:
{
lean_object* v_fvarId_631_; lean_object* v_k_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v_fvarId_631_ = lean_ctor_get(v_c_544_, 0);
lean_inc(v_fvarId_631_);
v_k_632_ = lean_ctor_get(v_c_544_, 1);
lean_inc_ref(v_k_632_);
lean_dec_ref_known(v_c_544_, 2);
v___x_633_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_633_, 0, v_fvarId_631_);
v___x_634_ = lean_array_push(v_decls_545_, v___x_633_);
v_c_544_ = v_k_632_;
v_decls_545_ = v___x_634_;
goto _start;
}
default: 
{
lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_636_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_decls_545_, v_c_544_);
lean_dec_ref(v_decls_545_);
v___x_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
return v___x_637_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj(lean_object* v_code_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_){
_start:
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj___closed__0));
v___x_645_ = l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj_go(v_code_638_, v___x_644_, v_a_639_, v_a_640_, v_a_641_, v_a_642_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__3___boxed(lean_object* v_i_646_, lean_object* v_as_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__3(v_i_646_, v_as_647_, v___y_648_, v___y_649_, v___y_650_, v___y_651_);
lean_dec(v___y_651_);
lean_dec_ref(v___y_650_);
lean_dec(v___y_649_);
lean_dec_ref(v___y_648_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs___boxed(lean_object* v_c_654_, lean_object* v_decls_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs(v_c_654_, v_decls_655_, v_a_656_, v_a_657_, v_a_658_, v_a_659_);
lean_dec(v_a_659_);
lean_dec_ref(v_a_658_);
lean_dec(v_a_657_);
lean_dec_ref(v_a_656_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj_go___boxed(lean_object* v_c_662_, lean_object* v_decls_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_){
_start:
{
lean_object* v_res_669_; 
v_res_669_ = l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Code_pushProj_go(v_c_662_, v_decls_663_, v_a_664_, v_a_665_, v_a_666_, v_a_667_);
lean_dec(v_a_667_);
lean_dec_ref(v_a_666_);
lean_dec(v_a_665_);
lean_dec_ref(v_a_664_);
return v_res_669_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2(lean_object* v_00_u03b2_670_, lean_object* v_m_671_, lean_object* v_a_672_, lean_object* v_b_673_){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2___redArg(v_m_671_, v_a_672_, v_b_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3(lean_object* v_00_u03b2_675_, lean_object* v_data_676_){
_start:
{
lean_object* v___x_677_; 
v___x_677_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3___redArg(v_data_676_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_678_, lean_object* v_i_679_, lean_object* v_source_680_, lean_object* v_target_681_){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3_spec__4___redArg(v_i_679_, v_source_680_, v_target_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_683_, lean_object* v_x_684_, lean_object* v_x_685_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Cases_pushProjs_spec__2_spec__3_spec__4_spec__6___redArg(v_x_684_, v_x_685_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj_spec__0___redArg(lean_object* v_f_687_, lean_object* v_v_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_){
_start:
{
if (lean_obj_tag(v_v_688_) == 0)
{
lean_object* v_code_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_718_; 
v_code_694_ = lean_ctor_get(v_v_688_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v_v_688_);
if (v_isSharedCheck_718_ == 0)
{
v___x_696_ = v_v_688_;
v_isShared_697_ = v_isSharedCheck_718_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_code_694_);
lean_dec(v_v_688_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_718_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v___x_698_; 
lean_inc(v___y_692_);
lean_inc_ref(v___y_691_);
lean_inc(v___y_690_);
lean_inc_ref(v___y_689_);
v___x_698_ = lean_apply_6(v_f_687_, v_code_694_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, lean_box(0));
if (lean_obj_tag(v___x_698_) == 0)
{
lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_709_; 
v_a_699_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_709_ == 0)
{
v___x_701_ = v___x_698_;
v_isShared_702_ = v_isSharedCheck_709_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v___x_698_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_709_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_704_; 
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 0, v_a_699_);
v___x_704_ = v___x_696_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_a_699_);
v___x_704_ = v_reuseFailAlloc_708_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
lean_object* v___x_706_; 
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 0, v___x_704_);
v___x_706_ = v___x_701_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v___x_704_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
}
}
else
{
lean_object* v_a_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_717_; 
lean_del_object(v___x_696_);
v_a_710_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_717_ == 0)
{
v___x_712_ = v___x_698_;
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_a_710_);
lean_dec(v___x_698_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_715_; 
if (v_isShared_713_ == 0)
{
v___x_715_ = v___x_712_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_a_710_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
}
else
{
lean_object* v___x_719_; 
lean_dec_ref(v_f_687_);
v___x_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_719_, 0, v_v_688_);
return v___x_719_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj_spec__0___redArg___boxed(lean_object* v_f_720_, lean_object* v_v_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj_spec__0___redArg(v_f_720_, v_v_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_);
lean_dec(v___y_725_);
lean_dec_ref(v___y_724_);
lean_dec(v___y_723_);
lean_dec_ref(v___y_722_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj_spec__0(uint8_t v_pu_728_, lean_object* v_f_729_, lean_object* v_v_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_){
_start:
{
lean_object* v___x_736_; 
v___x_736_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj_spec__0___redArg(v_f_729_, v_v_730_, v___y_731_, v___y_732_, v___y_733_, v___y_734_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj_spec__0___boxed(lean_object* v_pu_737_, lean_object* v_f_738_, lean_object* v_v_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
uint8_t v_pu_boxed_745_; lean_object* v_res_746_; 
v_pu_boxed_745_ = lean_unbox(v_pu_737_);
v_res_746_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj_spec__0(v_pu_boxed_745_, v_f_738_, v_v_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_);
lean_dec(v___y_743_);
lean_dec_ref(v___y_742_);
lean_dec(v___y_741_);
lean_dec_ref(v___y_740_);
return v_res_746_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___closed__1(void){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_748_ = lean_box(0);
v___x_749_ = lean_unsigned_to_nat(16u);
v___x_750_ = lean_mk_array(v___x_749_, v___x_748_);
return v___x_750_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___closed__2(void){
_start:
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_751_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___closed__1, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___closed__1_once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___closed__1);
v___x_752_ = lean_unsigned_to_nat(0u);
v___x_753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_753_, 0, v___x_752_);
lean_ctor_set(v___x_753_, 1, v___x_751_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj(lean_object* v_decl_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_){
_start:
{
lean_object* v_toSignature_760_; lean_object* v_value_761_; uint8_t v_recursive_762_; lean_object* v_inlineAttr_x3f_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_785_; 
v_toSignature_760_ = lean_ctor_get(v_decl_754_, 0);
v_value_761_ = lean_ctor_get(v_decl_754_, 1);
v_recursive_762_ = lean_ctor_get_uint8(v_decl_754_, sizeof(void*)*3);
v_inlineAttr_x3f_763_ = lean_ctor_get(v_decl_754_, 2);
v_isSharedCheck_785_ = !lean_is_exclusive(v_decl_754_);
if (v_isSharedCheck_785_ == 0)
{
v___x_765_ = v_decl_754_;
v_isShared_766_ = v_isSharedCheck_785_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_inlineAttr_x3f_763_);
lean_inc(v_value_761_);
lean_inc(v_toSignature_760_);
lean_dec(v_decl_754_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_785_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___f_767_; uint8_t v___x_768_; lean_object* v___x_769_; 
v___f_767_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___closed__0));
v___x_768_ = 1;
v___x_769_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj_spec__0___redArg(v___f_767_, v_value_761_, v_a_755_, v_a_756_, v_a_757_, v_a_758_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v_a_770_; lean_object* v___x_772_; 
v_a_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_a_770_);
lean_dec_ref_known(v___x_769_, 1);
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 1, v_a_770_);
v___x_772_ = v___x_765_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_toSignature_760_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v_a_770_);
lean_ctor_set(v_reuseFailAlloc_776_, 2, v_inlineAttr_x3f_763_);
lean_ctor_set_uint8(v_reuseFailAlloc_776_, sizeof(void*)*3, v_recursive_762_);
v___x_772_ = v_reuseFailAlloc_776_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
lean_object* v___x_773_; uint8_t v___x_774_; lean_object* v___x_775_; 
v___x_773_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___closed__2, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___closed__2_once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___closed__2);
v___x_774_ = 0;
v___x_775_ = l_Lean_Compiler_LCNF_Decl_internalize(v___x_768_, v___x_772_, v___x_773_, v___x_774_, v_a_755_, v_a_756_, v_a_757_, v_a_758_);
return v___x_775_;
}
}
else
{
lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_784_; 
lean_del_object(v___x_765_);
lean_dec(v_inlineAttr_x3f_763_);
lean_dec_ref(v_toSignature_760_);
v_a_777_ = lean_ctor_get(v___x_769_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_784_ == 0)
{
v___x_779_ = v___x_769_;
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v___x_769_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_782_; 
if (v_isShared_780_ == 0)
{
v___x_782_ = v___x_779_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_a_777_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj___boxed(lean_object* v_decl_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_Decl_pushProj(v_decl_786_, v_a_787_, v_a_788_, v_a_789_, v_a_790_);
lean_dec(v_a_790_);
lean_dec_ref(v_a_789_);
lean_dec(v_a_788_);
lean_dec_ref(v_a_787_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_pushProj(lean_object* v_occurrence_797_){
_start:
{
lean_object* v___x_798_; uint8_t v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_798_ = ((lean_object*)(l_Lean_Compiler_LCNF_pushProj___closed__1));
v___x_799_ = 2;
v___x_800_ = ((lean_object*)(l_Lean_Compiler_LCNF_pushProj___closed__2));
v___x_801_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_798_, v___x_799_, v___x_800_, v_occurrence_797_);
return v___x_801_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_806_ = lean_box(0);
v___x_807_ = l_unsafeCast___redArg(v___x_806_);
return v___x_807_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_809_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_));
v___x_810_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_811_ = l_Lean_Name_str___override(v___x_810_, v___x_809_);
return v___x_811_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_813_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_));
v___x_814_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_815_ = l_Lean_Name_str___override(v___x_814_, v___x_813_);
return v___x_815_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_816_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_));
v___x_817_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_818_ = l_Lean_Name_str___override(v___x_817_, v___x_816_);
return v___x_818_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_820_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_));
v___x_821_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_822_ = l_Lean_Name_str___override(v___x_821_, v___x_820_);
return v___x_822_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_824_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_));
v___x_825_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_826_ = l_Lean_Name_str___override(v___x_825_, v___x_824_);
return v___x_826_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_827_ = lean_unsigned_to_nat(0u);
v___x_828_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_829_ = l_Lean_Name_num___override(v___x_828_, v___x_827_);
return v___x_829_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_830_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_));
v___x_831_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_832_ = l_Lean_Name_str___override(v___x_831_, v___x_830_);
return v___x_832_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_833_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_));
v___x_834_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_835_ = l_Lean_Name_str___override(v___x_834_, v___x_833_);
return v___x_835_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_836_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_));
v___x_837_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_838_ = l_Lean_Name_str___override(v___x_837_, v___x_836_);
return v___x_838_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_840_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_));
v___x_841_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_842_ = l_Lean_Name_str___override(v___x_841_, v___x_840_);
return v___x_842_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_844_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_));
v___x_845_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_846_ = l_Lean_Name_str___override(v___x_845_, v___x_844_);
return v___x_846_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_847_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_));
v___x_848_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_849_ = l_Lean_Name_str___override(v___x_848_, v___x_847_);
return v___x_849_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_850_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_));
v___x_851_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_852_ = l_Lean_Name_str___override(v___x_851_, v___x_850_);
return v___x_852_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_853_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_));
v___x_854_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_855_ = l_Lean_Name_str___override(v___x_854_, v___x_853_);
return v___x_855_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_856_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_));
v___x_857_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_858_ = l_Lean_Name_str___override(v___x_857_, v___x_856_);
return v___x_858_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_859_ = lean_unsigned_to_nat(1777867010u);
v___x_860_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_861_ = l_Lean_Name_num___override(v___x_860_, v___x_859_);
return v___x_861_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_863_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_));
v___x_864_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_865_ = l_Lean_Name_str___override(v___x_864_, v___x_863_);
return v___x_865_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_867_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_));
v___x_868_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_869_ = l_Lean_Name_str___override(v___x_868_, v___x_867_);
return v___x_869_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_870_ = lean_unsigned_to_nat(2u);
v___x_871_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_872_ = l_Lean_Name_num___override(v___x_871_, v___x_870_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_874_; uint8_t v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_874_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_));
v___x_875_ = 1;
v___x_876_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_);
v___x_877_ = l_Lean_registerTraceClass(v___x_874_, v___x_875_, v___x_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2____boxed(lean_object* v_a_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_();
return v_res_879_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Internalize(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_PushProj(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_PushProj_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PushProj_1777867010____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_PushProj(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Internalize(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_PushProj(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PushProj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_PushProj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_PushProj(builtin);
}
#ifdef __cplusplus
}
#endif

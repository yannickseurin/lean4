// Lean compiler output
// Module: Lean.ScopedEnvExtension
// Imports: public import Lean.Attributes
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
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_instInhabitedError;
lean_object* l_instInhabitedEIO___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedEnvExtension_default___redArg();
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_global_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_global_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_scoped_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_scoped_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__1;
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__2;
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__3;
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg();
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries___redArg();
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries(lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg();
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack___redArg();
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__0 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__0_value;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__1 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__1_value;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__2 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__2_value;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__3 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__3_value;
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4_value_aux_0),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4_value_aux_1),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4_value_aux_2),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4_value;
static const lean_array_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__5 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__5_value;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__6 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__6_value;
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7_value_aux_0),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7_value_aux_1),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7_value_aux_2),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7_value;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__8 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__8_value;
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__9 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__9_value;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__10 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__10_value;
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11_value_aux_0),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11_value_aux_1),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11_value_aux_2),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11_value;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__12;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__13;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__14 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__14_value;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__15 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__15_value;
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16_value_aux_0),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16_value_aux_1),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16_value_aux_2),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__15_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16_value;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__17 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__17_value;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__18;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__19;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__20;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__21;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__22;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__23;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__24;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__25;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__26;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__27;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam;
static const lean_string_object l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "(`Inhabited.default` for `IO.Error`)"};
static const lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__3___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__0 = (const lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__0_value;
static const lean_closure_object l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__1 = (const lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__1_value;
static const lean_closure_object l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__2 = (const lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__2_value;
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3;
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__4;
static const lean_closure_object l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__5 = (const lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_mkInitial___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_mkInitial___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_mkInitial(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_mkInitial___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_ScopedEntries_insert(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addImportedFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addImportedFn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addImportedFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addImportedFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addEntryFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addEntryFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0 = (const lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0_value;
static const lean_ctor_object l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0_value),((lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0_value)}};
static const lean_object* l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__1 = (const lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__1_value;
static const lean_ctor_object l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0_value),((lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__1_value)}};
static const lean_object* l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__2 = (const lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_exportEntriesFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_exportEntriesFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0_value),((lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0_value),((lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__2___boxed(lean_object*);
static const lean_closure_object l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__4___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__0_value;
static const lean_closure_object l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__1 = (const lean_object*)&l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__1_value;
static const lean_closure_object l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__2 = (const lean_object*)&l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__2_value;
static const lean_closure_object l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__3 = (const lean_object*)&l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__3_value;
static lean_once_cell_t l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__4;
static lean_once_cell_t l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_ScopedEnvExtension_0__Lean_initFn___closed__0_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_initFn___closed__0_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ScopedEnvExtension_0__Lean_initFn___closed__0_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_initFn_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_initFn_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_scopedEnvExtensionsRef;
static const lean_string_object l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "number of local entries: "};
static const lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__1___boxed(lean_object*);
static const lean_closure_object l_Lean_registerScopedEnvExtensionUnsafe___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___closed__0 = (const lean_object*)&l_Lean_registerScopedEnvExtensionUnsafe___redArg___closed__0_value;
static const lean_closure_object l_Lean_registerScopedEnvExtensionUnsafe___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___closed__1 = (const lean_object*)&l_Lean_registerScopedEnvExtensionUnsafe___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_pushScope___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_ScopedEnvExtension_pushScope___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ScopedEnvExtension_pushScope___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ScopedEnvExtension_pushScope___redArg___closed__0 = (const lean_object*)&l_Lean_ScopedEnvExtension_pushScope___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_pushScope___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_pushScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_popScope___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_ScopedEnvExtension_popScope___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ScopedEnvExtension_popScope___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ScopedEnvExtension_popScope___redArg___closed__0 = (const lean_object*)&l_Lean_ScopedEnvExtension_popScope___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_popScope___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_popScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_setDelimitsLocal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addScopedEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addScopedEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_stateStackModify___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_stateStackModify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addLocalEntry___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addLocalEntry___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addLocalEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ScopedEnvExtension_getState___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.ScopedEnvExtension"};
static const lean_object* l_Lean_ScopedEnvExtension_getState___redArg___closed__0 = (const lean_object*)&l_Lean_ScopedEnvExtension_getState___redArg___closed__0_value;
static const lean_string_object l_Lean_ScopedEnvExtension_getState___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.ScopedEnvExtension.getState"};
static const lean_object* l_Lean_ScopedEnvExtension_getState___redArg___closed__1 = (const lean_object*)&l_Lean_ScopedEnvExtension_getState___redArg___closed__1_value;
static const lean_string_object l_Lean_ScopedEnvExtension_getState___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_ScopedEnvExtension_getState___redArg___closed__2 = (const lean_object*)&l_Lean_ScopedEnvExtension_getState___redArg___closed__2_value;
static lean_once_cell_t l_Lean_ScopedEnvExtension_getState___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_getState___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_getState___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_getState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_getState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_activateScoped___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_activateScoped___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_activateScoped(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_modifyState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_pushScope___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_pushScope___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pushScope(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_popScope___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_popScope___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_popScope___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_popScope(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_activateScoped___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_activateScoped___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_activateScoped___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_activateScoped___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_activateScoped(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimpleScopedEnvExtension_Descr_name___autoParam;
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_registerSimpleScopedEnvExtension___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerSimpleScopedEnvExtension___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___closed__0 = (const lean_object*)&l_Lean_registerSimpleScopedEnvExtension___redArg___closed__0_value;
static const lean_closure_object l_Lean_registerSimpleScopedEnvExtension___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerSimpleScopedEnvExtension___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___closed__1 = (const lean_object*)&l_Lean_registerSimpleScopedEnvExtension___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorIdx___redArg(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorIdx___redArg___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_ScopedEnvExtension_Entry_ctorIdx___redArg(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorIdx(lean_object* v_00_u03b1_6_, lean_object* v_x_7_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Lean_ScopedEnvExtension_Entry_ctorIdx___redArg(v_x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorIdx___boxed(lean_object* v_00_u03b1_9_, lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_ScopedEnvExtension_Entry_ctorIdx(v_00_u03b1_9_, v_x_10_);
lean_dec_ref(v_x_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorElim___redArg(lean_object* v_t_12_, lean_object* v_k_13_){
_start:
{
if (lean_obj_tag(v_t_12_) == 0)
{
lean_object* v_a_14_; lean_object* v___x_15_; 
v_a_14_ = lean_ctor_get(v_t_12_, 0);
lean_inc(v_a_14_);
lean_dec_ref_known(v_t_12_, 1);
v___x_15_ = lean_apply_1(v_k_13_, v_a_14_);
return v___x_15_;
}
else
{
lean_object* v_a_16_; lean_object* v_a_17_; lean_object* v___x_18_; 
v_a_16_ = lean_ctor_get(v_t_12_, 0);
lean_inc(v_a_16_);
v_a_17_ = lean_ctor_get(v_t_12_, 1);
lean_inc(v_a_17_);
lean_dec_ref_known(v_t_12_, 2);
v___x_18_ = lean_apply_2(v_k_13_, v_a_16_, v_a_17_);
return v___x_18_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorElim(lean_object* v_00_u03b1_19_, lean_object* v_motive_20_, lean_object* v_ctorIdx_21_, lean_object* v_t_22_, lean_object* v_h_23_, lean_object* v_k_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lean_ScopedEnvExtension_Entry_ctorElim___redArg(v_t_22_, v_k_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorElim___boxed(lean_object* v_00_u03b1_26_, lean_object* v_motive_27_, lean_object* v_ctorIdx_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_k_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_ScopedEnvExtension_Entry_ctorElim(v_00_u03b1_26_, v_motive_27_, v_ctorIdx_28_, v_t_29_, v_h_30_, v_k_31_);
lean_dec(v_ctorIdx_28_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_global_elim___redArg(lean_object* v_t_33_, lean_object* v_global_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_ScopedEnvExtension_Entry_ctorElim___redArg(v_t_33_, v_global_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_global_elim(lean_object* v_00_u03b1_36_, lean_object* v_motive_37_, lean_object* v_t_38_, lean_object* v_h_39_, lean_object* v_global_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_ScopedEnvExtension_Entry_ctorElim___redArg(v_t_38_, v_global_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_scoped_elim___redArg(lean_object* v_t_42_, lean_object* v_scoped_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lean_ScopedEnvExtension_Entry_ctorElim___redArg(v_t_42_, v_scoped_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_scoped_elim(lean_object* v_00_u03b1_45_, lean_object* v_motive_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_scoped_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_ScopedEnvExtension_Entry_ctorElim___redArg(v_t_47_, v_scoped_49_);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__0(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = lean_box(0);
v___x_52_ = lean_unsigned_to_nat(16u);
v___x_53_ = lean_mk_array(v___x_52_, v___x_51_);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__1(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_54_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__0);
v___x_55_ = lean_unsigned_to_nat(0u);
v___x_56_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
lean_ctor_set(v___x_56_, 1, v___x_54_);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__2(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_57_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__3(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__2, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__2);
v___x_59_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; uint8_t v___x_62_; lean_object* v___x_63_; 
v___x_60_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__3, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__3);
v___x_61_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__1, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__1);
v___x_62_ = 1;
v___x_63_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_63_, 0, v___x_61_);
lean_ctor_set(v___x_63_, 1, v___x_60_);
lean_ctor_set_uint8(v___x_63_, sizeof(void*)*2, v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg(){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___boxed(lean_object* v___dummy_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg();
return v_res_67_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0(void){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg();
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default(lean_object* v_00_u03b2_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries___redArg(){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries___redArg___boxed(lean_object* v___dummy_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lean_ScopedEnvExtension_instInhabitedScopedEntries___redArg();
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries(lean_object* v_a_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg___closed__0(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_77_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4);
v___x_78_ = lean_box(0);
v___x_79_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_77_);
lean_ctor_set(v___x_79_, 2, v___x_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg(){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg___closed__0);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg___boxed(lean_object* v___dummy_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg();
return v_res_83_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0(void){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg();
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default(lean_object* v_00_u03b1_85_, lean_object* v_00_u03b2_86_, lean_object* v_00_u03c3_87_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack___redArg(){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack___redArg___boxed(lean_object* v___dummy_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lean_ScopedEnvExtension_instInhabitedStateStack___redArg();
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack(lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__12(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__10));
v___x_124_ = l_Lean_mkAtom(v___x_123_);
return v___x_124_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__13(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_125_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__12, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__12_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__12);
v___x_126_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__5));
v___x_127_ = lean_array_push(v___x_126_, v___x_125_);
return v___x_127_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__18(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__17));
v___x_137_ = l_Lean_mkAtom(v___x_136_);
return v___x_137_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__19(void){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_138_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__18, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__18_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__18);
v___x_139_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__5));
v___x_140_ = lean_array_push(v___x_139_, v___x_138_);
return v___x_140_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__20(void){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_141_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__19, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__19_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__19);
v___x_142_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16));
v___x_143_ = lean_box(2);
v___x_144_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
lean_ctor_set(v___x_144_, 1, v___x_142_);
lean_ctor_set(v___x_144_, 2, v___x_141_);
return v___x_144_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__21(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_145_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__20, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__20_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__20);
v___x_146_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__13, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__13_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__13);
v___x_147_ = lean_array_push(v___x_146_, v___x_145_);
return v___x_147_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__22(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_148_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__21, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__21_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__21);
v___x_149_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11));
v___x_150_ = lean_box(2);
v___x_151_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set(v___x_151_, 1, v___x_149_);
lean_ctor_set(v___x_151_, 2, v___x_148_);
return v___x_151_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__23(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_152_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__22, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__22_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__22);
v___x_153_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__5));
v___x_154_ = lean_array_push(v___x_153_, v___x_152_);
return v___x_154_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__24(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_155_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__23, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__23_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__23);
v___x_156_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__9));
v___x_157_ = lean_box(2);
v___x_158_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
lean_ctor_set(v___x_158_, 1, v___x_156_);
lean_ctor_set(v___x_158_, 2, v___x_155_);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__25(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_159_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__24, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__24_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__24);
v___x_160_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__5));
v___x_161_ = lean_array_push(v___x_160_, v___x_159_);
return v___x_161_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__26(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_162_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__25, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__25_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__25);
v___x_163_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7));
v___x_164_ = lean_box(2);
v___x_165_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
lean_ctor_set(v___x_165_, 1, v___x_163_);
lean_ctor_set(v___x_165_, 2, v___x_162_);
return v___x_165_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__27(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_166_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__26, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__26_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__26);
v___x_167_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__5));
v___x_168_ = lean_array_push(v___x_167_, v___x_166_);
return v___x_168_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_169_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__27, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__27_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__27);
v___x_170_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4));
v___x_171_ = lean_box(2);
v___x_172_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
lean_ctor_set(v___x_172_, 1, v___x_170_);
lean_ctor_set(v___x_172_, 2, v___x_169_);
return v___x_172_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam(void){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0(lean_object* v_x_177_, lean_object* v___y_178_, lean_object* v___y_179_){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__1));
v___x_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___boxed(lean_object* v_x_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0(v_x_183_, v___y_184_, v___y_185_);
lean_dec_ref(v___y_185_);
lean_dec(v___y_184_);
lean_dec(v_x_183_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__1(lean_object* v_inst_188_, lean_object* v_x_189_){
_start:
{
lean_inc(v_inst_188_);
return v_inst_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__1___boxed(lean_object* v_inst_190_, lean_object* v_x_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__1(v_inst_190_, v_x_191_);
lean_dec(v_x_191_);
lean_dec(v_inst_190_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__2(lean_object* v_s_193_, lean_object* v_x_194_){
_start:
{
lean_inc(v_s_193_);
return v_s_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__2___boxed(lean_object* v_s_195_, lean_object* v_x_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__2(v_s_195_, v_x_196_);
lean_dec(v_x_196_);
lean_dec(v_s_195_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__3(lean_object* v_x_198_, lean_object* v_a_199_){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_200_, 0, v_a_199_);
lean_inc_ref_n(v___x_200_, 2);
v___x_201_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
lean_ctor_set(v___x_201_, 1, v___x_200_);
lean_ctor_set(v___x_201_, 2, v___x_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__3___boxed(lean_object* v_x_202_, lean_object* v_a_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__3(v_x_202_, v_a_203_);
lean_dec_ref(v_x_202_);
return v_res_204_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = lean_box(0);
v___x_209_ = l_unsafeCast___redArg(v___x_208_);
return v___x_209_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__4(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = l_instInhabitedError;
v___x_211_ = lean_alloc_closure((void*)(l_instInhabitedEIO___aux__1___boxed), 4, 3);
lean_closure_set(v___x_211_, 0, lean_box(0));
lean_closure_set(v___x_211_, 1, lean_box(0));
lean_closure_set(v___x_211_, 2, v___x_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg(lean_object* v_inst_213_){
_start:
{
lean_object* v___f_214_; lean_object* v___f_215_; lean_object* v___f_216_; lean_object* v___f_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___f_214_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__0));
v___f_215_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_215_, 0, v_inst_213_);
v___f_216_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__1));
v___f_217_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__2));
v___x_218_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3, &l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3);
v___x_219_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__4, &l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__4_once, _init_l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__4);
v___x_220_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__5));
v___x_221_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_221_, 0, v___x_218_);
lean_ctor_set(v___x_221_, 1, v___x_219_);
lean_ctor_set(v___x_221_, 2, v___f_214_);
lean_ctor_set(v___x_221_, 3, v___f_215_);
lean_ctor_set(v___x_221_, 4, v___f_216_);
lean_ctor_set(v___x_221_, 5, v___x_220_);
lean_ctor_set(v___x_221_, 6, v___f_217_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr(lean_object* v_00_u03b1_222_, lean_object* v_00_u03b2_223_, lean_object* v_00_u03c3_224_, lean_object* v_inst_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg(v_inst_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_mkInitial___redArg(lean_object* v_descr_227_){
_start:
{
lean_object* v_mkInitial_229_; lean_object* v___x_230_; 
v_mkInitial_229_ = lean_ctor_get(v_descr_227_, 1);
lean_inc_ref(v_mkInitial_229_);
lean_dec_ref(v_descr_227_);
v___x_230_ = lean_apply_1(v_mkInitial_229_, lean_box(0));
if (lean_obj_tag(v___x_230_) == 0)
{
lean_object* v_a_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_245_; 
v_a_231_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_245_ == 0)
{
v___x_233_ = v___x_230_;
v_isShared_234_ = v_isSharedCheck_245_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_a_231_);
lean_dec(v___x_230_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_245_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_235_; uint8_t v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_243_; 
v___x_235_ = l_Lean_NameSet_empty;
v___x_236_ = 1;
v___x_237_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_237_, 0, v_a_231_);
lean_ctor_set(v___x_237_, 1, v___x_235_);
lean_ctor_set_uint8(v___x_237_, sizeof(void*)*2, v___x_236_);
v___x_238_ = lean_box(0);
v___x_239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4);
v___x_241_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_241_, 0, v___x_239_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
lean_ctor_set(v___x_241_, 2, v___x_238_);
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 0, v___x_241_);
v___x_243_ = v___x_233_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v___x_241_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
else
{
lean_object* v_a_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_253_; 
v_a_246_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_253_ == 0)
{
v___x_248_ = v___x_230_;
v_isShared_249_ = v_isSharedCheck_253_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_a_246_);
lean_dec(v___x_230_);
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
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_mkInitial___redArg___boxed(lean_object* v_descr_254_, lean_object* v_a_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Lean_ScopedEnvExtension_mkInitial___redArg(v_descr_254_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_mkInitial(lean_object* v_00_u03b1_257_, lean_object* v_00_u03b2_258_, lean_object* v_00_u03c3_259_, lean_object* v_descr_260_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = l_Lean_ScopedEnvExtension_mkInitial___redArg(v_descr_260_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_mkInitial___boxed(lean_object* v_00_u03b1_263_, lean_object* v_00_u03b2_264_, lean_object* v_00_u03c3_265_, lean_object* v_descr_266_, lean_object* v_a_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lean_ScopedEnvExtension_mkInitial(v_00_u03b1_263_, v_00_u03b2_264_, v_00_u03c3_265_, v_descr_266_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___redArg(lean_object* v_a_269_, lean_object* v_x_270_){
_start:
{
if (lean_obj_tag(v_x_270_) == 0)
{
lean_object* v___x_271_; 
v___x_271_ = lean_box(0);
return v___x_271_;
}
else
{
lean_object* v_key_272_; lean_object* v_value_273_; lean_object* v_tail_274_; uint8_t v___x_275_; 
v_key_272_ = lean_ctor_get(v_x_270_, 0);
v_value_273_ = lean_ctor_get(v_x_270_, 1);
v_tail_274_ = lean_ctor_get(v_x_270_, 2);
v___x_275_ = lean_name_eq(v_key_272_, v_a_269_);
if (v___x_275_ == 0)
{
v_x_270_ = v_tail_274_;
goto _start;
}
else
{
lean_object* v___x_277_; 
lean_inc(v_value_273_);
v___x_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_277_, 0, v_value_273_);
return v___x_277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_a_278_, lean_object* v_x_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___redArg(v_a_278_, v_x_279_);
lean_dec(v_x_279_);
lean_dec(v_a_278_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___redArg(lean_object* v_m_281_, lean_object* v_a_282_){
_start:
{
lean_object* v_buckets_283_; lean_object* v___x_284_; uint64_t v___y_286_; lean_object* v___x_300_; 
v_buckets_283_ = lean_ctor_get(v_m_281_, 1);
v___x_284_ = lean_array_get_size(v_buckets_283_);
v___x_300_ = l_unsafeCast___redArg(v_a_282_);
if (lean_obj_tag(v___x_300_) == 0)
{
uint64_t v___x_301_; 
v___x_301_ = 1723ULL;
v___y_286_ = v___x_301_;
goto v___jp_285_;
}
else
{
uint64_t v_hash_302_; 
v_hash_302_ = lean_ctor_get_uint64(v___x_300_, sizeof(void*)*2);
lean_dec(v___x_300_);
v___y_286_ = v_hash_302_;
goto v___jp_285_;
}
v___jp_285_:
{
uint64_t v___x_287_; uint64_t v___x_288_; uint64_t v_fold_289_; uint64_t v___x_290_; uint64_t v___x_291_; uint64_t v___x_292_; size_t v___x_293_; size_t v___x_294_; size_t v___x_295_; size_t v___x_296_; size_t v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_287_ = 32ULL;
v___x_288_ = lean_uint64_shift_right(v___y_286_, v___x_287_);
v_fold_289_ = lean_uint64_xor(v___y_286_, v___x_288_);
v___x_290_ = 16ULL;
v___x_291_ = lean_uint64_shift_right(v_fold_289_, v___x_290_);
v___x_292_ = lean_uint64_xor(v_fold_289_, v___x_291_);
v___x_293_ = lean_uint64_to_usize(v___x_292_);
v___x_294_ = lean_usize_of_nat(v___x_284_);
v___x_295_ = ((size_t)1ULL);
v___x_296_ = lean_usize_sub(v___x_294_, v___x_295_);
v___x_297_ = lean_usize_land(v___x_293_, v___x_296_);
v___x_298_ = lean_array_uget_borrowed(v_buckets_283_, v___x_297_);
v___x_299_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___redArg(v_a_282_, v___x_298_);
return v___x_299_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___redArg___boxed(lean_object* v_m_303_, lean_object* v_a_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___redArg(v_m_303_, v_a_304_);
lean_dec(v_a_304_);
lean_dec_ref(v_m_303_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_keys_306_, lean_object* v_vals_307_, lean_object* v_i_308_, lean_object* v_k_309_){
_start:
{
lean_object* v___x_310_; uint8_t v___x_311_; 
v___x_310_ = lean_array_get_size(v_keys_306_);
v___x_311_ = lean_nat_dec_lt(v_i_308_, v___x_310_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; 
lean_dec(v_i_308_);
v___x_312_ = lean_box(0);
return v___x_312_;
}
else
{
lean_object* v_k_x27_313_; uint8_t v___x_314_; 
v_k_x27_313_ = lean_array_fget_borrowed(v_keys_306_, v_i_308_);
v___x_314_ = lean_name_eq(v_k_309_, v_k_x27_313_);
if (v___x_314_ == 0)
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = lean_unsigned_to_nat(1u);
v___x_316_ = lean_nat_add(v_i_308_, v___x_315_);
lean_dec(v_i_308_);
v_i_308_ = v___x_316_;
goto _start;
}
else
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = lean_array_fget_borrowed(v_vals_307_, v_i_308_);
lean_dec(v_i_308_);
lean_inc(v___x_318_);
v___x_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
return v___x_319_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_keys_320_, lean_object* v_vals_321_, lean_object* v_i_322_, lean_object* v_k_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___redArg(v_keys_320_, v_vals_321_, v_i_322_, v_k_323_);
lean_dec(v_k_323_);
lean_dec_ref(v_vals_321_);
lean_dec_ref(v_keys_320_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___redArg(lean_object* v_x_325_, size_t v_x_326_, lean_object* v_x_327_){
_start:
{
if (lean_obj_tag(v_x_325_) == 0)
{
lean_object* v_es_328_; lean_object* v___x_329_; size_t v___x_330_; size_t v___x_331_; lean_object* v_j_332_; lean_object* v___x_333_; 
v_es_328_ = lean_ctor_get(v_x_325_, 0);
v___x_329_ = lean_box(2);
v___x_330_ = ((size_t)31ULL);
v___x_331_ = lean_usize_land(v_x_326_, v___x_330_);
v_j_332_ = lean_usize_to_nat(v___x_331_);
v___x_333_ = lean_array_get_borrowed(v___x_329_, v_es_328_, v_j_332_);
lean_dec(v_j_332_);
switch(lean_obj_tag(v___x_333_))
{
case 0:
{
lean_object* v_key_334_; lean_object* v_val_335_; uint8_t v___x_336_; 
v_key_334_ = lean_ctor_get(v___x_333_, 0);
v_val_335_ = lean_ctor_get(v___x_333_, 1);
v___x_336_ = lean_name_eq(v_x_327_, v_key_334_);
if (v___x_336_ == 0)
{
lean_object* v___x_337_; 
v___x_337_ = lean_box(0);
return v___x_337_;
}
else
{
lean_object* v___x_338_; 
lean_inc(v_val_335_);
v___x_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_338_, 0, v_val_335_);
return v___x_338_;
}
}
case 1:
{
lean_object* v_node_339_; size_t v___x_340_; size_t v___x_341_; 
v_node_339_ = lean_ctor_get(v___x_333_, 0);
v___x_340_ = ((size_t)5ULL);
v___x_341_ = lean_usize_shift_right(v_x_326_, v___x_340_);
v_x_325_ = v_node_339_;
v_x_326_ = v___x_341_;
goto _start;
}
default: 
{
lean_object* v___x_343_; 
v___x_343_ = lean_box(0);
return v___x_343_;
}
}
}
else
{
lean_object* v_ks_344_; lean_object* v_vs_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v_ks_344_ = lean_ctor_get(v_x_325_, 0);
v_vs_345_ = lean_ctor_get(v_x_325_, 1);
v___x_346_ = lean_unsigned_to_nat(0u);
v___x_347_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___redArg(v_ks_344_, v_vs_345_, v___x_346_, v_x_327_);
return v___x_347_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_348_, lean_object* v_x_349_, lean_object* v_x_350_){
_start:
{
size_t v_x_1070__boxed_351_; lean_object* v_res_352_; 
v_x_1070__boxed_351_ = lean_unbox_usize(v_x_349_);
lean_dec(v_x_349_);
v_res_352_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___redArg(v_x_348_, v_x_1070__boxed_351_, v_x_350_);
lean_dec(v_x_350_);
lean_dec_ref(v_x_348_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___redArg(lean_object* v_x_353_, lean_object* v_x_354_){
_start:
{
uint64_t v___y_356_; lean_object* v___x_359_; 
v___x_359_ = l_unsafeCast___redArg(v_x_354_);
if (lean_obj_tag(v___x_359_) == 0)
{
uint64_t v___x_360_; 
v___x_360_ = 1723ULL;
v___y_356_ = v___x_360_;
goto v___jp_355_;
}
else
{
uint64_t v_hash_361_; 
v_hash_361_ = lean_ctor_get_uint64(v___x_359_, sizeof(void*)*2);
lean_dec(v___x_359_);
v___y_356_ = v_hash_361_;
goto v___jp_355_;
}
v___jp_355_:
{
size_t v___x_357_; lean_object* v___x_358_; 
v___x_357_ = lean_uint64_to_usize(v___y_356_);
v___x_358_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___redArg(v_x_353_, v___x_357_, v_x_354_);
return v___x_358_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___redArg___boxed(lean_object* v_x_362_, lean_object* v_x_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___redArg(v_x_362_, v_x_363_);
lean_dec(v_x_363_);
lean_dec_ref(v_x_362_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___redArg(lean_object* v_x_365_, lean_object* v_x_366_){
_start:
{
uint8_t v_stage_u2081_367_; 
v_stage_u2081_367_ = lean_ctor_get_uint8(v_x_365_, sizeof(void*)*2);
if (v_stage_u2081_367_ == 0)
{
lean_object* v_map_u2081_368_; lean_object* v_map_u2082_369_; lean_object* v___x_370_; 
v_map_u2081_368_ = lean_ctor_get(v_x_365_, 0);
v_map_u2082_369_ = lean_ctor_get(v_x_365_, 1);
v___x_370_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___redArg(v_map_u2082_369_, v_x_366_);
if (lean_obj_tag(v___x_370_) == 0)
{
lean_object* v___x_371_; 
v___x_371_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___redArg(v_map_u2081_368_, v_x_366_);
return v___x_371_;
}
else
{
return v___x_370_;
}
}
else
{
lean_object* v_map_u2081_372_; lean_object* v___x_373_; 
v_map_u2081_372_ = lean_ctor_get(v_x_365_, 0);
v___x_373_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___redArg(v_map_u2081_372_, v_x_366_);
return v___x_373_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___redArg___boxed(lean_object* v_x_374_, lean_object* v_x_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___redArg(v_x_374_, v_x_375_);
lean_dec(v_x_375_);
lean_dec_ref(v_x_374_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__10___redArg(lean_object* v_a_377_, lean_object* v_b_378_, lean_object* v_x_379_){
_start:
{
if (lean_obj_tag(v_x_379_) == 0)
{
lean_dec(v_b_378_);
lean_dec(v_a_377_);
return v_x_379_;
}
else
{
lean_object* v_key_380_; lean_object* v_value_381_; lean_object* v_tail_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_394_; 
v_key_380_ = lean_ctor_get(v_x_379_, 0);
v_value_381_ = lean_ctor_get(v_x_379_, 1);
v_tail_382_ = lean_ctor_get(v_x_379_, 2);
v_isSharedCheck_394_ = !lean_is_exclusive(v_x_379_);
if (v_isSharedCheck_394_ == 0)
{
v___x_384_ = v_x_379_;
v_isShared_385_ = v_isSharedCheck_394_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_tail_382_);
lean_inc(v_value_381_);
lean_inc(v_key_380_);
lean_dec(v_x_379_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_394_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
uint8_t v___x_386_; 
v___x_386_ = lean_name_eq(v_key_380_, v_a_377_);
if (v___x_386_ == 0)
{
lean_object* v___x_387_; lean_object* v___x_389_; 
v___x_387_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__10___redArg(v_a_377_, v_b_378_, v_tail_382_);
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 2, v___x_387_);
v___x_389_ = v___x_384_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_key_380_);
lean_ctor_set(v_reuseFailAlloc_390_, 1, v_value_381_);
lean_ctor_set(v_reuseFailAlloc_390_, 2, v___x_387_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
else
{
lean_object* v___x_392_; 
lean_dec(v_value_381_);
lean_dec(v_key_380_);
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 1, v_b_378_);
lean_ctor_set(v___x_384_, 0, v_a_377_);
v___x_392_ = v___x_384_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v_a_377_);
lean_ctor_set(v_reuseFailAlloc_393_, 1, v_b_378_);
lean_ctor_set(v_reuseFailAlloc_393_, 2, v_tail_382_);
v___x_392_ = v_reuseFailAlloc_393_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
return v___x_392_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13_spec__15___redArg(lean_object* v_x_395_, lean_object* v_x_396_){
_start:
{
if (lean_obj_tag(v_x_396_) == 0)
{
return v_x_395_;
}
else
{
lean_object* v_key_397_; lean_object* v_value_398_; lean_object* v_tail_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_426_; 
v_key_397_ = lean_ctor_get(v_x_396_, 0);
v_value_398_ = lean_ctor_get(v_x_396_, 1);
v_tail_399_ = lean_ctor_get(v_x_396_, 2);
v_isSharedCheck_426_ = !lean_is_exclusive(v_x_396_);
if (v_isSharedCheck_426_ == 0)
{
v___x_401_ = v_x_396_;
v_isShared_402_ = v_isSharedCheck_426_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_tail_399_);
lean_inc(v_value_398_);
lean_inc(v_key_397_);
lean_dec(v_x_396_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_426_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_403_; uint64_t v___y_405_; lean_object* v___x_423_; 
v___x_403_ = lean_array_get_size(v_x_395_);
v___x_423_ = l_unsafeCast___redArg(v_key_397_);
if (lean_obj_tag(v___x_423_) == 0)
{
uint64_t v___x_424_; 
v___x_424_ = 1723ULL;
v___y_405_ = v___x_424_;
goto v___jp_404_;
}
else
{
uint64_t v_hash_425_; 
v_hash_425_ = lean_ctor_get_uint64(v___x_423_, sizeof(void*)*2);
lean_dec(v___x_423_);
v___y_405_ = v_hash_425_;
goto v___jp_404_;
}
v___jp_404_:
{
uint64_t v___x_406_; uint64_t v___x_407_; uint64_t v_fold_408_; uint64_t v___x_409_; uint64_t v___x_410_; uint64_t v___x_411_; size_t v___x_412_; size_t v___x_413_; size_t v___x_414_; size_t v___x_415_; size_t v___x_416_; lean_object* v___x_417_; lean_object* v___x_419_; 
v___x_406_ = 32ULL;
v___x_407_ = lean_uint64_shift_right(v___y_405_, v___x_406_);
v_fold_408_ = lean_uint64_xor(v___y_405_, v___x_407_);
v___x_409_ = 16ULL;
v___x_410_ = lean_uint64_shift_right(v_fold_408_, v___x_409_);
v___x_411_ = lean_uint64_xor(v_fold_408_, v___x_410_);
v___x_412_ = lean_uint64_to_usize(v___x_411_);
v___x_413_ = lean_usize_of_nat(v___x_403_);
v___x_414_ = ((size_t)1ULL);
v___x_415_ = lean_usize_sub(v___x_413_, v___x_414_);
v___x_416_ = lean_usize_land(v___x_412_, v___x_415_);
v___x_417_ = lean_array_uget_borrowed(v_x_395_, v___x_416_);
lean_inc(v___x_417_);
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 2, v___x_417_);
v___x_419_ = v___x_401_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_key_397_);
lean_ctor_set(v_reuseFailAlloc_422_, 1, v_value_398_);
lean_ctor_set(v_reuseFailAlloc_422_, 2, v___x_417_);
v___x_419_ = v_reuseFailAlloc_422_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
lean_object* v___x_420_; 
v___x_420_ = lean_array_uset(v_x_395_, v___x_416_, v___x_419_);
v_x_395_ = v___x_420_;
v_x_396_ = v_tail_399_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13___redArg(lean_object* v_i_427_, lean_object* v_source_428_, lean_object* v_target_429_){
_start:
{
lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_430_ = lean_array_get_size(v_source_428_);
v___x_431_ = lean_nat_dec_lt(v_i_427_, v___x_430_);
if (v___x_431_ == 0)
{
lean_dec_ref(v_source_428_);
lean_dec(v_i_427_);
return v_target_429_;
}
else
{
lean_object* v_es_432_; lean_object* v___x_433_; lean_object* v_source_434_; lean_object* v_target_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v_es_432_ = lean_array_fget(v_source_428_, v_i_427_);
v___x_433_ = lean_box(0);
v_source_434_ = lean_array_fset(v_source_428_, v_i_427_, v___x_433_);
v_target_435_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13_spec__15___redArg(v_target_429_, v_es_432_);
v___x_436_ = lean_unsigned_to_nat(1u);
v___x_437_ = lean_nat_add(v_i_427_, v___x_436_);
lean_dec(v_i_427_);
v_i_427_ = v___x_437_;
v_source_428_ = v_source_434_;
v_target_429_ = v_target_435_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9___redArg(lean_object* v_data_439_){
_start:
{
lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v_nbuckets_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_440_ = lean_array_get_size(v_data_439_);
v___x_441_ = lean_unsigned_to_nat(2u);
v_nbuckets_442_ = lean_nat_mul(v___x_440_, v___x_441_);
v___x_443_ = lean_unsigned_to_nat(0u);
v___x_444_ = lean_box(0);
v___x_445_ = lean_mk_array(v_nbuckets_442_, v___x_444_);
v___x_446_ = lean_array_propagate_mark(v_data_439_, v___x_445_);
v___x_447_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13___redArg(v___x_443_, v_data_439_, v___x_446_);
return v___x_447_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___redArg(lean_object* v_a_448_, lean_object* v_x_449_){
_start:
{
if (lean_obj_tag(v_x_449_) == 0)
{
uint8_t v___x_450_; 
v___x_450_ = 0;
return v___x_450_;
}
else
{
lean_object* v_key_451_; lean_object* v_tail_452_; uint8_t v___x_453_; 
v_key_451_ = lean_ctor_get(v_x_449_, 0);
v_tail_452_ = lean_ctor_get(v_x_449_, 2);
v___x_453_ = lean_name_eq(v_key_451_, v_a_448_);
if (v___x_453_ == 0)
{
v_x_449_ = v_tail_452_;
goto _start;
}
else
{
return v___x_453_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___redArg___boxed(lean_object* v_a_455_, lean_object* v_x_456_){
_start:
{
uint8_t v_res_457_; lean_object* v_r_458_; 
v_res_457_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___redArg(v_a_455_, v_x_456_);
lean_dec(v_x_456_);
lean_dec(v_a_455_);
v_r_458_ = lean_box(v_res_457_);
return v_r_458_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4___redArg(lean_object* v_m_459_, lean_object* v_a_460_, lean_object* v_b_461_){
_start:
{
lean_object* v_size_462_; lean_object* v_buckets_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_510_; 
v_size_462_ = lean_ctor_get(v_m_459_, 0);
v_buckets_463_ = lean_ctor_get(v_m_459_, 1);
v_isSharedCheck_510_ = !lean_is_exclusive(v_m_459_);
if (v_isSharedCheck_510_ == 0)
{
v___x_465_ = v_m_459_;
v_isShared_466_ = v_isSharedCheck_510_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_buckets_463_);
lean_inc(v_size_462_);
lean_dec(v_m_459_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_510_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_467_; uint64_t v___y_469_; lean_object* v___x_507_; 
v___x_467_ = lean_array_get_size(v_buckets_463_);
v___x_507_ = l_unsafeCast___redArg(v_a_460_);
if (lean_obj_tag(v___x_507_) == 0)
{
uint64_t v___x_508_; 
v___x_508_ = 1723ULL;
v___y_469_ = v___x_508_;
goto v___jp_468_;
}
else
{
uint64_t v_hash_509_; 
v_hash_509_ = lean_ctor_get_uint64(v___x_507_, sizeof(void*)*2);
lean_dec(v___x_507_);
v___y_469_ = v_hash_509_;
goto v___jp_468_;
}
v___jp_468_:
{
uint64_t v___x_470_; uint64_t v___x_471_; uint64_t v_fold_472_; uint64_t v___x_473_; uint64_t v___x_474_; uint64_t v___x_475_; size_t v___x_476_; size_t v___x_477_; size_t v___x_478_; size_t v___x_479_; size_t v___x_480_; lean_object* v_bkt_481_; uint8_t v___x_482_; 
v___x_470_ = 32ULL;
v___x_471_ = lean_uint64_shift_right(v___y_469_, v___x_470_);
v_fold_472_ = lean_uint64_xor(v___y_469_, v___x_471_);
v___x_473_ = 16ULL;
v___x_474_ = lean_uint64_shift_right(v_fold_472_, v___x_473_);
v___x_475_ = lean_uint64_xor(v_fold_472_, v___x_474_);
v___x_476_ = lean_uint64_to_usize(v___x_475_);
v___x_477_ = lean_usize_of_nat(v___x_467_);
v___x_478_ = ((size_t)1ULL);
v___x_479_ = lean_usize_sub(v___x_477_, v___x_478_);
v___x_480_ = lean_usize_land(v___x_476_, v___x_479_);
v_bkt_481_ = lean_array_uget_borrowed(v_buckets_463_, v___x_480_);
v___x_482_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___redArg(v_a_460_, v_bkt_481_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; lean_object* v_size_x27_484_; lean_object* v___x_485_; lean_object* v_buckets_x27_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; uint8_t v___x_492_; 
v___x_483_ = lean_unsigned_to_nat(1u);
v_size_x27_484_ = lean_nat_add(v_size_462_, v___x_483_);
lean_dec(v_size_462_);
lean_inc(v_bkt_481_);
v___x_485_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_485_, 0, v_a_460_);
lean_ctor_set(v___x_485_, 1, v_b_461_);
lean_ctor_set(v___x_485_, 2, v_bkt_481_);
v_buckets_x27_486_ = lean_array_uset(v_buckets_463_, v___x_480_, v___x_485_);
v___x_487_ = lean_unsigned_to_nat(4u);
v___x_488_ = lean_nat_mul(v_size_x27_484_, v___x_487_);
v___x_489_ = lean_unsigned_to_nat(3u);
v___x_490_ = lean_nat_div(v___x_488_, v___x_489_);
lean_dec(v___x_488_);
v___x_491_ = lean_array_get_size(v_buckets_x27_486_);
v___x_492_ = lean_nat_dec_le(v___x_490_, v___x_491_);
lean_dec(v___x_490_);
if (v___x_492_ == 0)
{
lean_object* v_val_493_; lean_object* v___x_495_; 
v_val_493_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9___redArg(v_buckets_x27_486_);
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 1, v_val_493_);
lean_ctor_set(v___x_465_, 0, v_size_x27_484_);
v___x_495_ = v___x_465_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_size_x27_484_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v_val_493_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
else
{
lean_object* v___x_498_; 
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 1, v_buckets_x27_486_);
lean_ctor_set(v___x_465_, 0, v_size_x27_484_);
v___x_498_ = v___x_465_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_size_x27_484_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v_buckets_x27_486_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
else
{
lean_object* v___x_500_; lean_object* v_buckets_x27_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_505_; 
lean_inc(v_bkt_481_);
v___x_500_ = lean_box(0);
v_buckets_x27_501_ = lean_array_uset(v_buckets_463_, v___x_480_, v___x_500_);
v___x_502_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__10___redArg(v_a_460_, v_b_461_, v_bkt_481_);
v___x_503_ = lean_array_uset(v_buckets_x27_501_, v___x_480_, v___x_502_);
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 1, v___x_503_);
v___x_505_ = v___x_465_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_size_462_);
lean_ctor_set(v_reuseFailAlloc_506_, 1, v___x_503_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8_spec__10___redArg(lean_object* v_x_511_, lean_object* v_x_512_, lean_object* v_x_513_, lean_object* v_x_514_){
_start:
{
lean_object* v_ks_515_; lean_object* v_vs_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_540_; 
v_ks_515_ = lean_ctor_get(v_x_511_, 0);
v_vs_516_ = lean_ctor_get(v_x_511_, 1);
v_isSharedCheck_540_ = !lean_is_exclusive(v_x_511_);
if (v_isSharedCheck_540_ == 0)
{
v___x_518_ = v_x_511_;
v_isShared_519_ = v_isSharedCheck_540_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_vs_516_);
lean_inc(v_ks_515_);
lean_dec(v_x_511_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_540_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_520_; uint8_t v___x_521_; 
v___x_520_ = lean_array_get_size(v_ks_515_);
v___x_521_ = lean_nat_dec_lt(v_x_512_, v___x_520_);
if (v___x_521_ == 0)
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_525_; 
lean_dec(v_x_512_);
v___x_522_ = lean_array_push(v_ks_515_, v_x_513_);
v___x_523_ = lean_array_push(v_vs_516_, v_x_514_);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 1, v___x_523_);
lean_ctor_set(v___x_518_, 0, v___x_522_);
v___x_525_ = v___x_518_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v___x_522_);
lean_ctor_set(v_reuseFailAlloc_526_, 1, v___x_523_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
else
{
lean_object* v_k_x27_527_; uint8_t v___x_528_; 
v_k_x27_527_ = lean_array_fget_borrowed(v_ks_515_, v_x_512_);
v___x_528_ = lean_name_eq(v_x_513_, v_k_x27_527_);
if (v___x_528_ == 0)
{
lean_object* v___x_530_; 
if (v_isShared_519_ == 0)
{
v___x_530_ = v___x_518_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_ks_515_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v_vs_516_);
v___x_530_ = v_reuseFailAlloc_534_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_531_ = lean_unsigned_to_nat(1u);
v___x_532_ = lean_nat_add(v_x_512_, v___x_531_);
lean_dec(v_x_512_);
v_x_511_ = v___x_530_;
v_x_512_ = v___x_532_;
goto _start;
}
}
else
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_538_; 
v___x_535_ = lean_array_fset(v_ks_515_, v_x_512_, v_x_513_);
v___x_536_ = lean_array_fset(v_vs_516_, v_x_512_, v_x_514_);
lean_dec(v_x_512_);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 1, v___x_536_);
lean_ctor_set(v___x_518_, 0, v___x_535_);
v___x_538_ = v___x_518_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v___x_535_);
lean_ctor_set(v_reuseFailAlloc_539_, 1, v___x_536_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8___redArg(lean_object* v_n_541_, lean_object* v_k_542_, lean_object* v_v_543_){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = lean_unsigned_to_nat(0u);
v___x_545_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8_spec__10___redArg(v_n_541_, v___x_544_, v_k_542_, v_v_543_);
return v___x_545_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_546_ = lean_box(0);
v___x_547_ = l_unsafeCast___redArg(v___x_546_);
return v___x_547_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_548_; 
v___x_548_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg(lean_object* v_x_549_, size_t v_x_550_, size_t v_x_551_, lean_object* v_x_552_, lean_object* v_x_553_){
_start:
{
if (lean_obj_tag(v_x_549_) == 0)
{
lean_object* v_es_554_; size_t v___x_555_; size_t v___x_556_; lean_object* v_j_557_; lean_object* v___x_558_; uint8_t v___x_559_; 
v_es_554_ = lean_ctor_get(v_x_549_, 0);
v___x_555_ = ((size_t)31ULL);
v___x_556_ = lean_usize_land(v_x_550_, v___x_555_);
v_j_557_ = lean_usize_to_nat(v___x_556_);
v___x_558_ = lean_array_get_size(v_es_554_);
v___x_559_ = lean_nat_dec_lt(v_j_557_, v___x_558_);
if (v___x_559_ == 0)
{
lean_dec(v_j_557_);
lean_dec(v_x_553_);
lean_dec(v_x_552_);
return v_x_549_;
}
else
{
lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_598_; 
lean_inc_ref(v_es_554_);
v_isSharedCheck_598_ = !lean_is_exclusive(v_x_549_);
if (v_isSharedCheck_598_ == 0)
{
lean_object* v_unused_599_; 
v_unused_599_ = lean_ctor_get(v_x_549_, 0);
lean_dec(v_unused_599_);
v___x_561_ = v_x_549_;
v_isShared_562_ = v_isSharedCheck_598_;
goto v_resetjp_560_;
}
else
{
lean_dec(v_x_549_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_598_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v_v_563_; lean_object* v___x_564_; lean_object* v_xs_x27_565_; lean_object* v___y_567_; 
v_v_563_ = lean_array_fget(v_es_554_, v_j_557_);
v___x_564_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__0);
v_xs_x27_565_ = lean_array_fset(v_es_554_, v_j_557_, v___x_564_);
switch(lean_obj_tag(v_v_563_))
{
case 0:
{
lean_object* v_key_572_; lean_object* v_val_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_583_; 
v_key_572_ = lean_ctor_get(v_v_563_, 0);
v_val_573_ = lean_ctor_get(v_v_563_, 1);
v_isSharedCheck_583_ = !lean_is_exclusive(v_v_563_);
if (v_isSharedCheck_583_ == 0)
{
v___x_575_ = v_v_563_;
v_isShared_576_ = v_isSharedCheck_583_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_val_573_);
lean_inc(v_key_572_);
lean_dec(v_v_563_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_583_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
uint8_t v___x_577_; 
v___x_577_ = lean_name_eq(v_x_552_, v_key_572_);
if (v___x_577_ == 0)
{
lean_object* v___x_578_; lean_object* v___x_579_; 
lean_del_object(v___x_575_);
v___x_578_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_572_, v_val_573_, v_x_552_, v_x_553_);
v___x_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
v___y_567_ = v___x_579_;
goto v___jp_566_;
}
else
{
lean_object* v___x_581_; 
lean_dec(v_val_573_);
lean_dec(v_key_572_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 1, v_x_553_);
lean_ctor_set(v___x_575_, 0, v_x_552_);
v___x_581_ = v___x_575_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_x_552_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v_x_553_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
v___y_567_ = v___x_581_;
goto v___jp_566_;
}
}
}
}
case 1:
{
lean_object* v_node_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_596_; 
v_node_584_ = lean_ctor_get(v_v_563_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v_v_563_);
if (v_isSharedCheck_596_ == 0)
{
v___x_586_ = v_v_563_;
v_isShared_587_ = v_isSharedCheck_596_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_node_584_);
lean_dec(v_v_563_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_596_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
size_t v___x_588_; size_t v___x_589_; size_t v___x_590_; size_t v___x_591_; lean_object* v___x_592_; lean_object* v___x_594_; 
v___x_588_ = ((size_t)5ULL);
v___x_589_ = lean_usize_shift_right(v_x_550_, v___x_588_);
v___x_590_ = ((size_t)1ULL);
v___x_591_ = lean_usize_add(v_x_551_, v___x_590_);
v___x_592_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg(v_node_584_, v___x_589_, v___x_591_, v_x_552_, v_x_553_);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 0, v___x_592_);
v___x_594_ = v___x_586_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v___x_592_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
v___y_567_ = v___x_594_;
goto v___jp_566_;
}
}
}
default: 
{
lean_object* v___x_597_; 
v___x_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_597_, 0, v_x_552_);
lean_ctor_set(v___x_597_, 1, v_x_553_);
v___y_567_ = v___x_597_;
goto v___jp_566_;
}
}
v___jp_566_:
{
lean_object* v___x_568_; lean_object* v___x_570_; 
v___x_568_ = lean_array_fset(v_xs_x27_565_, v_j_557_, v___y_567_);
lean_dec(v_j_557_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 0, v___x_568_);
v___x_570_ = v___x_561_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_568_);
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
else
{
lean_object* v_ks_600_; lean_object* v_vs_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_619_; 
v_ks_600_ = lean_ctor_get(v_x_549_, 0);
v_vs_601_ = lean_ctor_get(v_x_549_, 1);
v_isSharedCheck_619_ = !lean_is_exclusive(v_x_549_);
if (v_isSharedCheck_619_ == 0)
{
v___x_603_ = v_x_549_;
v_isShared_604_ = v_isSharedCheck_619_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_vs_601_);
lean_inc(v_ks_600_);
lean_dec(v_x_549_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_619_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_606_; 
if (v_isShared_604_ == 0)
{
v___x_606_ = v___x_603_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_ks_600_);
lean_ctor_set(v_reuseFailAlloc_618_, 1, v_vs_601_);
v___x_606_ = v_reuseFailAlloc_618_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
lean_object* v_newNode_607_; size_t v___x_608_; uint8_t v___x_609_; 
v_newNode_607_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8___redArg(v___x_606_, v_x_552_, v_x_553_);
v___x_608_ = ((size_t)7ULL);
v___x_609_ = lean_usize_dec_le(v___x_608_, v_x_551_);
if (v___x_609_ == 0)
{
lean_object* v___x_610_; lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_610_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_607_);
v___x_611_ = lean_unsigned_to_nat(4u);
v___x_612_ = lean_nat_dec_lt(v___x_610_, v___x_611_);
lean_dec(v___x_610_);
if (v___x_612_ == 0)
{
lean_object* v_ks_613_; lean_object* v_vs_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v_ks_613_ = lean_ctor_get(v_newNode_607_, 0);
lean_inc_ref(v_ks_613_);
v_vs_614_ = lean_ctor_get(v_newNode_607_, 1);
lean_inc_ref(v_vs_614_);
lean_dec_ref(v_newNode_607_);
v___x_615_ = lean_unsigned_to_nat(0u);
v___x_616_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__1);
v___x_617_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___redArg(v_x_551_, v_ks_613_, v_vs_614_, v___x_615_, v___x_616_);
lean_dec_ref(v_vs_614_);
lean_dec_ref(v_ks_613_);
return v___x_617_;
}
else
{
return v_newNode_607_;
}
}
else
{
return v_newNode_607_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___redArg(size_t v_depth_620_, lean_object* v_keys_621_, lean_object* v_vals_622_, lean_object* v_i_623_, lean_object* v_entries_624_){
_start:
{
lean_object* v___x_625_; uint8_t v___x_626_; 
v___x_625_ = lean_array_get_size(v_keys_621_);
v___x_626_ = lean_nat_dec_lt(v_i_623_, v___x_625_);
if (v___x_626_ == 0)
{
lean_dec(v_i_623_);
return v_entries_624_;
}
else
{
lean_object* v_k_627_; lean_object* v_v_628_; uint64_t v___y_630_; lean_object* v___x_641_; 
v_k_627_ = lean_array_fget_borrowed(v_keys_621_, v_i_623_);
v_v_628_ = lean_array_fget_borrowed(v_vals_622_, v_i_623_);
v___x_641_ = l_unsafeCast___redArg(v_k_627_);
if (lean_obj_tag(v___x_641_) == 0)
{
uint64_t v___x_642_; 
v___x_642_ = 1723ULL;
v___y_630_ = v___x_642_;
goto v___jp_629_;
}
else
{
uint64_t v_hash_643_; 
v_hash_643_ = lean_ctor_get_uint64(v___x_641_, sizeof(void*)*2);
lean_dec(v___x_641_);
v___y_630_ = v_hash_643_;
goto v___jp_629_;
}
v___jp_629_:
{
size_t v_h_631_; size_t v___x_632_; lean_object* v___x_633_; size_t v___x_634_; size_t v___x_635_; size_t v___x_636_; size_t v_h_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
v_h_631_ = lean_uint64_to_usize(v___y_630_);
v___x_632_ = ((size_t)5ULL);
v___x_633_ = lean_unsigned_to_nat(1u);
v___x_634_ = ((size_t)1ULL);
v___x_635_ = lean_usize_sub(v_depth_620_, v___x_634_);
v___x_636_ = lean_usize_mul(v___x_632_, v___x_635_);
v_h_637_ = lean_usize_shift_right(v_h_631_, v___x_636_);
v___x_638_ = lean_nat_add(v_i_623_, v___x_633_);
lean_dec(v_i_623_);
lean_inc(v_v_628_);
lean_inc(v_k_627_);
v___x_639_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg(v_entries_624_, v_h_637_, v_depth_620_, v_k_627_, v_v_628_);
v_i_623_ = v___x_638_;
v_entries_624_ = v___x_639_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___redArg___boxed(lean_object* v_depth_644_, lean_object* v_keys_645_, lean_object* v_vals_646_, lean_object* v_i_647_, lean_object* v_entries_648_){
_start:
{
size_t v_depth_boxed_649_; lean_object* v_res_650_; 
v_depth_boxed_649_ = lean_unbox_usize(v_depth_644_);
lean_dec(v_depth_644_);
v_res_650_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___redArg(v_depth_boxed_649_, v_keys_645_, v_vals_646_, v_i_647_, v_entries_648_);
lean_dec_ref(v_vals_646_);
lean_dec_ref(v_keys_645_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_x_651_, lean_object* v_x_652_, lean_object* v_x_653_, lean_object* v_x_654_, lean_object* v_x_655_){
_start:
{
size_t v_x_1457__boxed_656_; size_t v_x_1458__boxed_657_; lean_object* v_res_658_; 
v_x_1457__boxed_656_ = lean_unbox_usize(v_x_652_);
lean_dec(v_x_652_);
v_x_1458__boxed_657_ = lean_unbox_usize(v_x_653_);
lean_dec(v_x_653_);
v_res_658_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg(v_x_651_, v_x_1457__boxed_656_, v_x_1458__boxed_657_, v_x_654_, v_x_655_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3___redArg(lean_object* v_x_659_, lean_object* v_x_660_, lean_object* v_x_661_){
_start:
{
uint64_t v___y_663_; lean_object* v___x_667_; 
v___x_667_ = l_unsafeCast___redArg(v_x_660_);
if (lean_obj_tag(v___x_667_) == 0)
{
uint64_t v___x_668_; 
v___x_668_ = 1723ULL;
v___y_663_ = v___x_668_;
goto v___jp_662_;
}
else
{
uint64_t v_hash_669_; 
v_hash_669_ = lean_ctor_get_uint64(v___x_667_, sizeof(void*)*2);
lean_dec(v___x_667_);
v___y_663_ = v_hash_669_;
goto v___jp_662_;
}
v___jp_662_:
{
size_t v___x_664_; size_t v___x_665_; lean_object* v___x_666_; 
v___x_664_ = lean_uint64_to_usize(v___y_663_);
v___x_665_ = ((size_t)1ULL);
v___x_666_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg(v_x_659_, v___x_664_, v___x_665_, v_x_660_, v_x_661_);
return v___x_666_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1___redArg(lean_object* v_x_670_, lean_object* v_x_671_, lean_object* v_x_672_){
_start:
{
uint8_t v_stage_u2081_673_; 
v_stage_u2081_673_ = lean_ctor_get_uint8(v_x_670_, sizeof(void*)*2);
if (v_stage_u2081_673_ == 0)
{
lean_object* v_map_u2081_674_; lean_object* v_map_u2082_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_683_; 
v_map_u2081_674_ = lean_ctor_get(v_x_670_, 0);
v_map_u2082_675_ = lean_ctor_get(v_x_670_, 1);
v_isSharedCheck_683_ = !lean_is_exclusive(v_x_670_);
if (v_isSharedCheck_683_ == 0)
{
v___x_677_ = v_x_670_;
v_isShared_678_ = v_isSharedCheck_683_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_map_u2082_675_);
lean_inc(v_map_u2081_674_);
lean_dec(v_x_670_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_683_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_679_; lean_object* v___x_681_; 
v___x_679_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3___redArg(v_map_u2082_675_, v_x_671_, v_x_672_);
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 1, v___x_679_);
v___x_681_ = v___x_677_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_map_u2081_674_);
lean_ctor_set(v_reuseFailAlloc_682_, 1, v___x_679_);
lean_ctor_set_uint8(v_reuseFailAlloc_682_, sizeof(void*)*2, v_stage_u2081_673_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
else
{
lean_object* v_map_u2081_684_; lean_object* v_map_u2082_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_693_; 
v_map_u2081_684_ = lean_ctor_get(v_x_670_, 0);
v_map_u2082_685_ = lean_ctor_get(v_x_670_, 1);
v_isSharedCheck_693_ = !lean_is_exclusive(v_x_670_);
if (v_isSharedCheck_693_ == 0)
{
v___x_687_ = v_x_670_;
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_map_u2082_685_);
lean_inc(v_map_u2081_684_);
lean_dec(v_x_670_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_689_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4___redArg(v_map_u2081_684_, v_x_671_, v_x_672_);
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 0, v___x_689_);
v___x_691_ = v___x_687_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v___x_689_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v_map_u2082_685_);
lean_ctor_set_uint8(v_reuseFailAlloc_692_, sizeof(void*)*2, v_stage_u2081_673_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__0(void){
_start:
{
lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_694_ = lean_unsigned_to_nat(32u);
v___x_695_ = lean_mk_empty_array_with_capacity(v___x_694_);
v___x_696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_696_, 0, v___x_695_);
return v___x_696_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__1(void){
_start:
{
size_t v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_697_ = ((size_t)5ULL);
v___x_698_ = lean_unsigned_to_nat(0u);
v___x_699_ = lean_unsigned_to_nat(32u);
v___x_700_ = lean_mk_empty_array_with_capacity(v___x_699_);
v___x_701_ = lean_obj_once(&l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__0, &l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__0);
v___x_702_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_702_, 0, v___x_701_);
lean_ctor_set(v___x_702_, 1, v___x_700_);
lean_ctor_set(v___x_702_, 2, v___x_698_);
lean_ctor_set(v___x_702_, 3, v___x_698_);
lean_ctor_set_usize(v___x_702_, 4, v___x_697_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg(lean_object* v_scopedEntries_703_, lean_object* v_ns_704_, lean_object* v_b_705_){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___redArg(v_scopedEntries_703_, v_ns_704_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_707_ = lean_obj_once(&l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__1, &l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__1);
v___x_708_ = l_Lean_PersistentArray_push___redArg(v___x_707_, v_b_705_);
v___x_709_ = l_Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1___redArg(v_scopedEntries_703_, v_ns_704_, v___x_708_);
return v___x_709_;
}
else
{
lean_object* v_val_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v_val_710_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_val_710_);
lean_dec_ref_known(v___x_706_, 1);
v___x_711_ = l_Lean_PersistentArray_push___redArg(v_val_710_, v_b_705_);
v___x_712_ = l_Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1___redArg(v_scopedEntries_703_, v_ns_704_, v___x_711_);
return v___x_712_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_ScopedEntries_insert(lean_object* v_00_u03b2_713_, lean_object* v_scopedEntries_714_, lean_object* v_ns_715_, lean_object* v_b_716_){
_start:
{
lean_object* v___x_717_; 
v___x_717_ = l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg(v_scopedEntries_714_, v_ns_715_, v_b_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0(lean_object* v_00_u03b2_718_, lean_object* v_x_719_, lean_object* v_x_720_){
_start:
{
lean_object* v___x_721_; 
v___x_721_ = l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___redArg(v_x_719_, v_x_720_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___boxed(lean_object* v_00_u03b2_722_, lean_object* v_x_723_, lean_object* v_x_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0(v_00_u03b2_722_, v_x_723_, v_x_724_);
lean_dec(v_x_724_);
lean_dec_ref(v_x_723_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1(lean_object* v_00_u03b2_726_, lean_object* v_x_727_, lean_object* v_x_728_, lean_object* v_x_729_){
_start:
{
lean_object* v___x_730_; 
v___x_730_ = l_Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1___redArg(v_x_727_, v_x_728_, v_x_729_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0(lean_object* v_00_u03b2_731_, lean_object* v_x_732_, lean_object* v_x_733_){
_start:
{
lean_object* v___x_734_; 
v___x_734_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___redArg(v_x_732_, v_x_733_);
return v___x_734_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___boxed(lean_object* v_00_u03b2_735_, lean_object* v_x_736_, lean_object* v_x_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0(v_00_u03b2_735_, v_x_736_, v_x_737_);
lean_dec(v_x_737_);
lean_dec_ref(v_x_736_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1(lean_object* v_00_u03b2_739_, lean_object* v_m_740_, lean_object* v_a_741_){
_start:
{
lean_object* v___x_742_; 
v___x_742_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___redArg(v_m_740_, v_a_741_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___boxed(lean_object* v_00_u03b2_743_, lean_object* v_m_744_, lean_object* v_a_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1(v_00_u03b2_743_, v_m_744_, v_a_745_);
lean_dec(v_a_745_);
lean_dec_ref(v_m_744_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3(lean_object* v_00_u03b2_747_, lean_object* v_x_748_, lean_object* v_x_749_, lean_object* v_x_750_){
_start:
{
lean_object* v___x_751_; 
v___x_751_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3___redArg(v_x_748_, v_x_749_, v_x_750_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4(lean_object* v_00_u03b2_752_, lean_object* v_m_753_, lean_object* v_a_754_, lean_object* v_b_755_){
_start:
{
lean_object* v___x_756_; 
v___x_756_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4___redArg(v_m_753_, v_a_754_, v_b_755_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_757_, lean_object* v_x_758_, size_t v_x_759_, lean_object* v_x_760_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___redArg(v_x_758_, v_x_759_, v_x_760_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_762_, lean_object* v_x_763_, lean_object* v_x_764_, lean_object* v_x_765_){
_start:
{
size_t v_x_1763__boxed_766_; lean_object* v_res_767_; 
v_x_1763__boxed_766_ = lean_unbox_usize(v_x_764_);
lean_dec(v_x_764_);
v_res_767_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1(v_00_u03b2_762_, v_x_763_, v_x_1763__boxed_766_, v_x_765_);
lean_dec(v_x_765_);
lean_dec_ref(v_x_763_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_768_, lean_object* v_a_769_, lean_object* v_x_770_){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___redArg(v_a_769_, v_x_770_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_772_, lean_object* v_a_773_, lean_object* v_x_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3(v_00_u03b2_772_, v_a_773_, v_x_774_);
lean_dec(v_x_774_);
lean_dec(v_a_773_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_776_, lean_object* v_x_777_, size_t v_x_778_, size_t v_x_779_, lean_object* v_x_780_, lean_object* v_x_781_){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg(v_x_777_, v_x_778_, v_x_779_, v_x_780_, v_x_781_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___boxed(lean_object* v_00_u03b2_783_, lean_object* v_x_784_, lean_object* v_x_785_, lean_object* v_x_786_, lean_object* v_x_787_, lean_object* v_x_788_){
_start:
{
size_t v_x_1779__boxed_789_; size_t v_x_1780__boxed_790_; lean_object* v_res_791_; 
v_x_1779__boxed_789_ = lean_unbox_usize(v_x_785_);
lean_dec(v_x_785_);
v_x_1780__boxed_790_ = lean_unbox_usize(v_x_786_);
lean_dec(v_x_786_);
v_res_791_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6(v_00_u03b2_783_, v_x_784_, v_x_1779__boxed_789_, v_x_1780__boxed_790_, v_x_787_, v_x_788_);
return v_res_791_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8(lean_object* v_00_u03b2_792_, lean_object* v_a_793_, lean_object* v_x_794_){
_start:
{
uint8_t v___x_795_; 
v___x_795_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___redArg(v_a_793_, v_x_794_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___boxed(lean_object* v_00_u03b2_796_, lean_object* v_a_797_, lean_object* v_x_798_){
_start:
{
uint8_t v_res_799_; lean_object* v_r_800_; 
v_res_799_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8(v_00_u03b2_796_, v_a_797_, v_x_798_);
lean_dec(v_x_798_);
lean_dec(v_a_797_);
v_r_800_ = lean_box(v_res_799_);
return v_r_800_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9(lean_object* v_00_u03b2_801_, lean_object* v_data_802_){
_start:
{
lean_object* v___x_803_; 
v___x_803_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9___redArg(v_data_802_);
return v___x_803_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__10(lean_object* v_00_u03b2_804_, lean_object* v_a_805_, lean_object* v_b_806_, lean_object* v_x_807_){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__10___redArg(v_a_805_, v_b_806_, v_x_807_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_809_, lean_object* v_keys_810_, lean_object* v_vals_811_, lean_object* v_heq_812_, lean_object* v_i_813_, lean_object* v_k_814_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___redArg(v_keys_810_, v_vals_811_, v_i_813_, v_k_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_816_, lean_object* v_keys_817_, lean_object* v_vals_818_, lean_object* v_heq_819_, lean_object* v_i_820_, lean_object* v_k_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_816_, v_keys_817_, v_vals_818_, v_heq_819_, v_i_820_, v_k_821_);
lean_dec(v_k_821_);
lean_dec_ref(v_vals_818_);
lean_dec_ref(v_keys_817_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8(lean_object* v_00_u03b2_823_, lean_object* v_n_824_, lean_object* v_k_825_, lean_object* v_v_826_){
_start:
{
lean_object* v___x_827_; 
v___x_827_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8___redArg(v_n_824_, v_k_825_, v_v_826_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9(lean_object* v_00_u03b2_828_, size_t v_depth_829_, lean_object* v_keys_830_, lean_object* v_vals_831_, lean_object* v_heq_832_, lean_object* v_i_833_, lean_object* v_entries_834_){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___redArg(v_depth_829_, v_keys_830_, v_vals_831_, v_i_833_, v_entries_834_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___boxed(lean_object* v_00_u03b2_836_, lean_object* v_depth_837_, lean_object* v_keys_838_, lean_object* v_vals_839_, lean_object* v_heq_840_, lean_object* v_i_841_, lean_object* v_entries_842_){
_start:
{
size_t v_depth_boxed_843_; lean_object* v_res_844_; 
v_depth_boxed_843_ = lean_unbox_usize(v_depth_837_);
lean_dec(v_depth_837_);
v_res_844_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9(v_00_u03b2_836_, v_depth_boxed_843_, v_keys_838_, v_vals_839_, v_heq_840_, v_i_841_, v_entries_842_);
lean_dec_ref(v_vals_839_);
lean_dec_ref(v_keys_838_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13(lean_object* v_00_u03b2_845_, lean_object* v_i_846_, lean_object* v_source_847_, lean_object* v_target_848_){
_start:
{
lean_object* v___x_849_; 
v___x_849_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13___redArg(v_i_846_, v_source_847_, v_target_848_);
return v___x_849_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8_spec__10(lean_object* v_00_u03b2_850_, lean_object* v_x_851_, lean_object* v_x_852_, lean_object* v_x_853_, lean_object* v_x_854_){
_start:
{
lean_object* v___x_855_; 
v___x_855_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8_spec__10___redArg(v_x_851_, v_x_852_, v_x_853_, v_x_854_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13_spec__15(lean_object* v_00_u03b2_856_, lean_object* v_x_857_, lean_object* v_x_858_){
_start:
{
lean_object* v___x_859_; 
v___x_859_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13_spec__15___redArg(v_x_857_, v_x_858_);
return v___x_859_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___redArg(lean_object* v_descr_860_, lean_object* v_as_861_, size_t v_sz_862_, size_t v_i_863_, lean_object* v_b_864_, lean_object* v___y_865_){
_start:
{
lean_object* v_a_868_; uint8_t v___x_872_; 
v___x_872_ = lean_usize_dec_lt(v_i_863_, v_sz_862_);
if (v___x_872_ == 0)
{
lean_object* v___x_873_; 
lean_dec_ref(v_descr_860_);
v___x_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_873_, 0, v_b_864_);
return v___x_873_;
}
else
{
lean_object* v_fst_874_; lean_object* v_snd_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_914_; 
v_fst_874_ = lean_ctor_get(v_b_864_, 0);
v_snd_875_ = lean_ctor_get(v_b_864_, 1);
v_isSharedCheck_914_ = !lean_is_exclusive(v_b_864_);
if (v_isSharedCheck_914_ == 0)
{
v___x_877_ = v_b_864_;
v_isShared_878_ = v_isSharedCheck_914_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_snd_875_);
lean_inc(v_fst_874_);
lean_dec(v_b_864_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_914_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v_a_879_; 
v_a_879_ = lean_array_uget_borrowed(v_as_861_, v_i_863_);
if (lean_obj_tag(v_a_879_) == 0)
{
lean_object* v_a_880_; lean_object* v_ofOLeanEntry_881_; lean_object* v_addEntry_882_; lean_object* v___x_883_; 
v_a_880_ = lean_ctor_get(v_a_879_, 0);
v_ofOLeanEntry_881_ = lean_ctor_get(v_descr_860_, 2);
v_addEntry_882_ = lean_ctor_get(v_descr_860_, 4);
lean_inc_ref(v_ofOLeanEntry_881_);
lean_inc_ref(v___y_865_);
lean_inc(v_a_880_);
lean_inc(v_fst_874_);
v___x_883_ = lean_apply_4(v_ofOLeanEntry_881_, v_fst_874_, v_a_880_, v___y_865_, lean_box(0));
if (lean_obj_tag(v___x_883_) == 0)
{
lean_object* v_a_884_; lean_object* v___x_885_; lean_object* v___x_887_; 
v_a_884_ = lean_ctor_get(v___x_883_, 0);
lean_inc(v_a_884_);
lean_dec_ref_known(v___x_883_, 1);
lean_inc(v_addEntry_882_);
v___x_885_ = lean_apply_2(v_addEntry_882_, v_fst_874_, v_a_884_);
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 0, v___x_885_);
v___x_887_ = v___x_877_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_888_, 1, v_snd_875_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
v_a_868_ = v___x_887_;
goto v___jp_867_;
}
}
else
{
lean_object* v_a_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_896_; 
lean_del_object(v___x_877_);
lean_dec(v_snd_875_);
lean_dec(v_fst_874_);
lean_dec_ref(v_descr_860_);
v_a_889_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_896_ == 0)
{
v___x_891_ = v___x_883_;
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_a_889_);
lean_dec(v___x_883_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_894_; 
if (v_isShared_892_ == 0)
{
v___x_894_ = v___x_891_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_a_889_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
}
else
{
lean_object* v_a_897_; lean_object* v_a_898_; lean_object* v_ofOLeanEntry_899_; lean_object* v___x_900_; 
v_a_897_ = lean_ctor_get(v_a_879_, 0);
v_a_898_ = lean_ctor_get(v_a_879_, 1);
v_ofOLeanEntry_899_ = lean_ctor_get(v_descr_860_, 2);
lean_inc_ref(v_ofOLeanEntry_899_);
lean_inc_ref(v___y_865_);
lean_inc(v_a_898_);
lean_inc(v_fst_874_);
v___x_900_ = lean_apply_4(v_ofOLeanEntry_899_, v_fst_874_, v_a_898_, v___y_865_, lean_box(0));
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v_a_901_; lean_object* v___x_902_; lean_object* v___x_904_; 
v_a_901_ = lean_ctor_get(v___x_900_, 0);
lean_inc(v_a_901_);
lean_dec_ref_known(v___x_900_, 1);
lean_inc(v_a_897_);
v___x_902_ = l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg(v_snd_875_, v_a_897_, v_a_901_);
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 1, v___x_902_);
v___x_904_ = v___x_877_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_fst_874_);
lean_ctor_set(v_reuseFailAlloc_905_, 1, v___x_902_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
v_a_868_ = v___x_904_;
goto v___jp_867_;
}
}
else
{
lean_object* v_a_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_913_; 
lean_del_object(v___x_877_);
lean_dec(v_snd_875_);
lean_dec(v_fst_874_);
lean_dec_ref(v_descr_860_);
v_a_906_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_913_ == 0)
{
v___x_908_ = v___x_900_;
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_a_906_);
lean_dec(v___x_900_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_911_; 
if (v_isShared_909_ == 0)
{
v___x_911_ = v___x_908_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_a_906_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
}
}
}
v___jp_867_:
{
size_t v___x_869_; size_t v___x_870_; 
v___x_869_ = ((size_t)1ULL);
v___x_870_ = lean_usize_add(v_i_863_, v___x_869_);
v_i_863_ = v___x_870_;
v_b_864_ = v_a_868_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___redArg___boxed(lean_object* v_descr_915_, lean_object* v_as_916_, lean_object* v_sz_917_, lean_object* v_i_918_, lean_object* v_b_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
size_t v_sz_boxed_922_; size_t v_i_boxed_923_; lean_object* v_res_924_; 
v_sz_boxed_922_ = lean_unbox_usize(v_sz_917_);
lean_dec(v_sz_917_);
v_i_boxed_923_ = lean_unbox_usize(v_i_918_);
lean_dec(v_i_918_);
v_res_924_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___redArg(v_descr_915_, v_as_916_, v_sz_boxed_922_, v_i_boxed_923_, v_b_919_, v___y_920_);
lean_dec_ref(v___y_920_);
lean_dec_ref(v_as_916_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___redArg(lean_object* v_descr_925_, lean_object* v_as_926_, size_t v_sz_927_, size_t v_i_928_, lean_object* v_b_929_, lean_object* v___y_930_){
_start:
{
uint8_t v___x_932_; 
v___x_932_ = lean_usize_dec_lt(v_i_928_, v_sz_927_);
if (v___x_932_ == 0)
{
lean_object* v___x_933_; 
lean_dec_ref(v_descr_925_);
v___x_933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_933_, 0, v_b_929_);
return v___x_933_;
}
else
{
lean_object* v_fst_934_; lean_object* v_snd_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_959_; 
v_fst_934_ = lean_ctor_get(v_b_929_, 0);
v_snd_935_ = lean_ctor_get(v_b_929_, 1);
v_isSharedCheck_959_ = !lean_is_exclusive(v_b_929_);
if (v_isSharedCheck_959_ == 0)
{
v___x_937_ = v_b_929_;
v_isShared_938_ = v_isSharedCheck_959_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_snd_935_);
lean_inc(v_fst_934_);
lean_dec(v_b_929_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_959_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v_a_939_; lean_object* v___x_941_; 
v_a_939_ = lean_array_uget_borrowed(v_as_926_, v_i_928_);
if (v_isShared_938_ == 0)
{
v___x_941_ = v___x_937_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_fst_934_);
lean_ctor_set(v_reuseFailAlloc_958_, 1, v_snd_935_);
v___x_941_ = v_reuseFailAlloc_958_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
size_t v_sz_942_; size_t v___x_943_; lean_object* v___x_944_; 
v_sz_942_ = lean_array_size(v_a_939_);
v___x_943_ = ((size_t)0ULL);
lean_inc_ref(v_descr_925_);
v___x_944_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___redArg(v_descr_925_, v_a_939_, v_sz_942_, v___x_943_, v___x_941_, v___y_930_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_a_945_; lean_object* v_fst_946_; lean_object* v_snd_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_957_; 
v_a_945_ = lean_ctor_get(v___x_944_, 0);
lean_inc(v_a_945_);
lean_dec_ref_known(v___x_944_, 1);
v_fst_946_ = lean_ctor_get(v_a_945_, 0);
v_snd_947_ = lean_ctor_get(v_a_945_, 1);
v_isSharedCheck_957_ = !lean_is_exclusive(v_a_945_);
if (v_isSharedCheck_957_ == 0)
{
v___x_949_ = v_a_945_;
v_isShared_950_ = v_isSharedCheck_957_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_snd_947_);
lean_inc(v_fst_946_);
lean_dec(v_a_945_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_957_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_950_ == 0)
{
v___x_952_ = v___x_949_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_fst_946_);
lean_ctor_set(v_reuseFailAlloc_956_, 1, v_snd_947_);
v___x_952_ = v_reuseFailAlloc_956_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
size_t v___x_953_; size_t v___x_954_; 
v___x_953_ = ((size_t)1ULL);
v___x_954_ = lean_usize_add(v_i_928_, v___x_953_);
v_i_928_ = v___x_954_;
v_b_929_ = v___x_952_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_descr_925_);
return v___x_944_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___redArg___boxed(lean_object* v_descr_960_, lean_object* v_as_961_, lean_object* v_sz_962_, lean_object* v_i_963_, lean_object* v_b_964_, lean_object* v___y_965_, lean_object* v___y_966_){
_start:
{
size_t v_sz_boxed_967_; size_t v_i_boxed_968_; lean_object* v_res_969_; 
v_sz_boxed_967_ = lean_unbox_usize(v_sz_962_);
lean_dec(v_sz_962_);
v_i_boxed_968_ = lean_unbox_usize(v_i_963_);
lean_dec(v_i_963_);
v_res_969_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___redArg(v_descr_960_, v_as_961_, v_sz_boxed_967_, v_i_boxed_968_, v_b_964_, v___y_965_);
lean_dec_ref(v___y_965_);
lean_dec_ref(v_as_961_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addImportedFn___redArg(lean_object* v_descr_970_, lean_object* v_as_971_, lean_object* v_a_972_){
_start:
{
lean_object* v_mkInitial_974_; lean_object* v_finalizeImport_975_; lean_object* v___x_976_; 
v_mkInitial_974_ = lean_ctor_get(v_descr_970_, 1);
v_finalizeImport_975_ = lean_ctor_get(v_descr_970_, 5);
lean_inc(v_finalizeImport_975_);
lean_inc_ref(v_mkInitial_974_);
v___x_976_ = lean_apply_1(v_mkInitial_974_, lean_box(0));
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v_a_977_; uint8_t v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; size_t v_sz_981_; size_t v___x_982_; lean_object* v___x_983_; 
v_a_977_ = lean_ctor_get(v___x_976_, 0);
lean_inc(v_a_977_);
lean_dec_ref_known(v___x_976_, 1);
v___x_978_ = 1;
v___x_979_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4);
v___x_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_980_, 0, v_a_977_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v_sz_981_ = lean_array_size(v_as_971_);
v___x_982_ = ((size_t)0ULL);
v___x_983_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___redArg(v_descr_970_, v_as_971_, v_sz_981_, v___x_982_, v___x_980_, v_a_972_);
if (lean_obj_tag(v___x_983_) == 0)
{
lean_object* v_a_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_1005_; 
v_a_984_ = lean_ctor_get(v___x_983_, 0);
v_isSharedCheck_1005_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_986_ = v___x_983_;
v_isShared_987_ = v_isSharedCheck_1005_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_a_984_);
lean_dec(v___x_983_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_1005_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v_fst_988_; lean_object* v_snd_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_1004_; 
v_fst_988_ = lean_ctor_get(v_a_984_, 0);
v_snd_989_ = lean_ctor_get(v_a_984_, 1);
v_isSharedCheck_1004_ = !lean_is_exclusive(v_a_984_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_991_ = v_a_984_;
v_isShared_992_ = v_isSharedCheck_1004_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_snd_989_);
lean_inc(v_fst_988_);
lean_dec(v_a_984_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_1004_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_998_; 
v___x_993_ = lean_apply_1(v_finalizeImport_975_, v_fst_988_);
v___x_994_ = l_Lean_NameSet_empty;
v___x_995_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_995_, 0, v___x_993_);
lean_ctor_set(v___x_995_, 1, v___x_994_);
lean_ctor_set_uint8(v___x_995_, sizeof(void*)*2, v___x_978_);
v___x_996_ = lean_box(0);
if (v_isShared_992_ == 0)
{
lean_ctor_set_tag(v___x_991_, 1);
lean_ctor_set(v___x_991_, 1, v___x_996_);
lean_ctor_set(v___x_991_, 0, v___x_995_);
v___x_998_ = v___x_991_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v___x_995_);
lean_ctor_set(v_reuseFailAlloc_1003_, 1, v___x_996_);
v___x_998_ = v_reuseFailAlloc_1003_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
lean_object* v___x_999_; lean_object* v___x_1001_; 
v___x_999_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_999_, 0, v___x_998_);
lean_ctor_set(v___x_999_, 1, v_snd_989_);
lean_ctor_set(v___x_999_, 2, v___x_996_);
if (v_isShared_987_ == 0)
{
lean_ctor_set(v___x_986_, 0, v___x_999_);
v___x_1001_ = v___x_986_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v___x_999_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
}
else
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1013_; 
lean_dec(v_finalizeImport_975_);
v_a_1006_ = lean_ctor_get(v___x_983_, 0);
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1008_ = v___x_983_;
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v___x_983_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1011_; 
if (v_isShared_1009_ == 0)
{
v___x_1011_ = v___x_1008_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_a_1006_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
}
}
else
{
lean_object* v_a_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1021_; 
lean_dec(v_finalizeImport_975_);
lean_dec_ref(v_descr_970_);
v_a_1014_ = lean_ctor_get(v___x_976_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1016_ = v___x_976_;
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_a_1014_);
lean_dec(v___x_976_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1019_; 
if (v_isShared_1017_ == 0)
{
v___x_1019_ = v___x_1016_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v_a_1014_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addImportedFn___redArg___boxed(lean_object* v_descr_1022_, lean_object* v_as_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Lean_ScopedEnvExtension_addImportedFn___redArg(v_descr_1022_, v_as_1023_, v_a_1024_);
lean_dec_ref(v_a_1024_);
lean_dec_ref(v_as_1023_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addImportedFn(lean_object* v_00_u03b1_1027_, lean_object* v_00_u03b2_1028_, lean_object* v_00_u03c3_1029_, lean_object* v_descr_1030_, lean_object* v_as_1031_, lean_object* v_a_1032_){
_start:
{
lean_object* v___x_1034_; 
v___x_1034_ = l_Lean_ScopedEnvExtension_addImportedFn___redArg(v_descr_1030_, v_as_1031_, v_a_1032_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addImportedFn___boxed(lean_object* v_00_u03b1_1035_, lean_object* v_00_u03b2_1036_, lean_object* v_00_u03c3_1037_, lean_object* v_descr_1038_, lean_object* v_as_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l_Lean_ScopedEnvExtension_addImportedFn(v_00_u03b1_1035_, v_00_u03b2_1036_, v_00_u03c3_1037_, v_descr_1038_, v_as_1039_, v_a_1040_);
lean_dec_ref(v_a_1040_);
lean_dec_ref(v_as_1039_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0(lean_object* v_00_u03b1_1043_, lean_object* v_00_u03c3_1044_, lean_object* v_00_u03b2_1045_, lean_object* v_descr_1046_, lean_object* v_as_1047_, size_t v_sz_1048_, size_t v_i_1049_, lean_object* v_b_1050_, lean_object* v___y_1051_){
_start:
{
lean_object* v___x_1053_; 
v___x_1053_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___redArg(v_descr_1046_, v_as_1047_, v_sz_1048_, v_i_1049_, v_b_1050_, v___y_1051_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___boxed(lean_object* v_00_u03b1_1054_, lean_object* v_00_u03c3_1055_, lean_object* v_00_u03b2_1056_, lean_object* v_descr_1057_, lean_object* v_as_1058_, lean_object* v_sz_1059_, lean_object* v_i_1060_, lean_object* v_b_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_){
_start:
{
size_t v_sz_boxed_1064_; size_t v_i_boxed_1065_; lean_object* v_res_1066_; 
v_sz_boxed_1064_ = lean_unbox_usize(v_sz_1059_);
lean_dec(v_sz_1059_);
v_i_boxed_1065_ = lean_unbox_usize(v_i_1060_);
lean_dec(v_i_1060_);
v_res_1066_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0(v_00_u03b1_1054_, v_00_u03c3_1055_, v_00_u03b2_1056_, v_descr_1057_, v_as_1058_, v_sz_boxed_1064_, v_i_boxed_1065_, v_b_1061_, v___y_1062_);
lean_dec_ref(v___y_1062_);
lean_dec_ref(v_as_1058_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1(lean_object* v_00_u03b1_1067_, lean_object* v_00_u03c3_1068_, lean_object* v_00_u03b2_1069_, lean_object* v_descr_1070_, lean_object* v_as_1071_, size_t v_sz_1072_, size_t v_i_1073_, lean_object* v_b_1074_, lean_object* v___y_1075_){
_start:
{
lean_object* v___x_1077_; 
v___x_1077_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___redArg(v_descr_1070_, v_as_1071_, v_sz_1072_, v_i_1073_, v_b_1074_, v___y_1075_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___boxed(lean_object* v_00_u03b1_1078_, lean_object* v_00_u03c3_1079_, lean_object* v_00_u03b2_1080_, lean_object* v_descr_1081_, lean_object* v_as_1082_, lean_object* v_sz_1083_, lean_object* v_i_1084_, lean_object* v_b_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_){
_start:
{
size_t v_sz_boxed_1088_; size_t v_i_boxed_1089_; lean_object* v_res_1090_; 
v_sz_boxed_1088_ = lean_unbox_usize(v_sz_1083_);
lean_dec(v_sz_1083_);
v_i_boxed_1089_ = lean_unbox_usize(v_i_1084_);
lean_dec(v_i_1084_);
v_res_1090_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1(v_00_u03b1_1078_, v_00_u03c3_1079_, v_00_u03b2_1080_, v_descr_1081_, v_as_1082_, v_sz_boxed_1088_, v_i_boxed_1089_, v_b_1085_, v___y_1086_);
lean_dec_ref(v___y_1086_);
lean_dec_ref(v_as_1082_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___redArg(lean_object* v_a_1091_, lean_object* v_descr_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_){
_start:
{
if (lean_obj_tag(v_a_1094_) == 0)
{
lean_object* v___x_1096_; 
lean_dec(v_a_1093_);
lean_dec_ref(v_descr_1092_);
v___x_1096_ = l_List_reverse___redArg(v_a_1095_);
return v___x_1096_;
}
else
{
lean_object* v_head_1097_; lean_object* v_tail_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1123_; 
v_head_1097_ = lean_ctor_get(v_a_1094_, 0);
v_tail_1098_ = lean_ctor_get(v_a_1094_, 1);
v_isSharedCheck_1123_ = !lean_is_exclusive(v_a_1094_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1100_ = v_a_1094_;
v_isShared_1101_ = v_isSharedCheck_1123_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_tail_1098_);
lean_inc(v_head_1097_);
lean_dec(v_a_1094_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1123_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___y_1103_; lean_object* v_state_1108_; lean_object* v_activeScopes_1109_; uint8_t v_delimitsLocal_1110_; uint8_t v___x_1111_; 
v_state_1108_ = lean_ctor_get(v_head_1097_, 0);
v_activeScopes_1109_ = lean_ctor_get(v_head_1097_, 1);
v_delimitsLocal_1110_ = lean_ctor_get_uint8(v_head_1097_, sizeof(void*)*2);
v___x_1111_ = l_Lean_NameSet_contains(v_activeScopes_1109_, v_a_1091_);
if (v___x_1111_ == 0)
{
v___y_1103_ = v_head_1097_;
goto v___jp_1102_;
}
else
{
lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1120_; 
lean_inc(v_activeScopes_1109_);
lean_inc(v_state_1108_);
v_isSharedCheck_1120_ = !lean_is_exclusive(v_head_1097_);
if (v_isSharedCheck_1120_ == 0)
{
lean_object* v_unused_1121_; lean_object* v_unused_1122_; 
v_unused_1121_ = lean_ctor_get(v_head_1097_, 1);
lean_dec(v_unused_1121_);
v_unused_1122_ = lean_ctor_get(v_head_1097_, 0);
lean_dec(v_unused_1122_);
v___x_1113_ = v_head_1097_;
v_isShared_1114_ = v_isSharedCheck_1120_;
goto v_resetjp_1112_;
}
else
{
lean_dec(v_head_1097_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1120_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v_addEntry_1115_; lean_object* v___x_1116_; lean_object* v___x_1118_; 
v_addEntry_1115_ = lean_ctor_get(v_descr_1092_, 4);
lean_inc(v_addEntry_1115_);
lean_inc(v_a_1093_);
v___x_1116_ = lean_apply_2(v_addEntry_1115_, v_state_1108_, v_a_1093_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 0, v___x_1116_);
v___x_1118_ = v___x_1113_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v___x_1116_);
lean_ctor_set(v_reuseFailAlloc_1119_, 1, v_activeScopes_1109_);
lean_ctor_set_uint8(v_reuseFailAlloc_1119_, sizeof(void*)*2, v_delimitsLocal_1110_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
v___y_1103_ = v___x_1118_;
goto v___jp_1102_;
}
}
}
v___jp_1102_:
{
lean_object* v___x_1105_; 
if (v_isShared_1101_ == 0)
{
lean_ctor_set(v___x_1100_, 1, v_a_1095_);
lean_ctor_set(v___x_1100_, 0, v___y_1103_);
v___x_1105_ = v___x_1100_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___y_1103_);
lean_ctor_set(v_reuseFailAlloc_1107_, 1, v_a_1095_);
v___x_1105_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
v_a_1094_ = v_tail_1098_;
v_a_1095_ = v___x_1105_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___redArg___boxed(lean_object* v_a_1124_, lean_object* v_descr_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___redArg(v_a_1124_, v_descr_1125_, v_a_1126_, v_a_1127_, v_a_1128_);
lean_dec(v_a_1124_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__0___redArg(lean_object* v_descr_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_){
_start:
{
if (lean_obj_tag(v_a_1132_) == 0)
{
lean_object* v___x_1134_; 
lean_dec(v_a_1131_);
lean_dec_ref(v_descr_1130_);
v___x_1134_ = l_List_reverse___redArg(v_a_1133_);
return v___x_1134_;
}
else
{
lean_object* v_head_1135_; lean_object* v_tail_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1156_; 
v_head_1135_ = lean_ctor_get(v_a_1132_, 0);
v_tail_1136_ = lean_ctor_get(v_a_1132_, 1);
v_isSharedCheck_1156_ = !lean_is_exclusive(v_a_1132_);
if (v_isSharedCheck_1156_ == 0)
{
v___x_1138_ = v_a_1132_;
v_isShared_1139_ = v_isSharedCheck_1156_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_tail_1136_);
lean_inc(v_head_1135_);
lean_dec(v_a_1132_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1156_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v_addEntry_1140_; lean_object* v_state_1141_; lean_object* v_activeScopes_1142_; uint8_t v_delimitsLocal_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1155_; 
v_addEntry_1140_ = lean_ctor_get(v_descr_1130_, 4);
v_state_1141_ = lean_ctor_get(v_head_1135_, 0);
v_activeScopes_1142_ = lean_ctor_get(v_head_1135_, 1);
v_delimitsLocal_1143_ = lean_ctor_get_uint8(v_head_1135_, sizeof(void*)*2);
v_isSharedCheck_1155_ = !lean_is_exclusive(v_head_1135_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1145_ = v_head_1135_;
v_isShared_1146_ = v_isSharedCheck_1155_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_activeScopes_1142_);
lean_inc(v_state_1141_);
lean_dec(v_head_1135_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1155_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1147_; lean_object* v___x_1149_; 
lean_inc(v_addEntry_1140_);
lean_inc(v_a_1131_);
v___x_1147_ = lean_apply_2(v_addEntry_1140_, v_state_1141_, v_a_1131_);
if (v_isShared_1146_ == 0)
{
lean_ctor_set(v___x_1145_, 0, v___x_1147_);
v___x_1149_ = v___x_1145_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1147_);
lean_ctor_set(v_reuseFailAlloc_1154_, 1, v_activeScopes_1142_);
lean_ctor_set_uint8(v_reuseFailAlloc_1154_, sizeof(void*)*2, v_delimitsLocal_1143_);
v___x_1149_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
lean_object* v___x_1151_; 
if (v_isShared_1139_ == 0)
{
lean_ctor_set(v___x_1138_, 1, v_a_1133_);
lean_ctor_set(v___x_1138_, 0, v___x_1149_);
v___x_1151_ = v___x_1138_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v___x_1149_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v_a_1133_);
v___x_1151_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
v_a_1132_ = v_tail_1136_;
v_a_1133_ = v___x_1151_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addEntryFn___redArg(lean_object* v_descr_1157_, lean_object* v_s_1158_, lean_object* v_e_1159_){
_start:
{
if (lean_obj_tag(v_e_1159_) == 0)
{
lean_object* v_stateStack_1160_; lean_object* v_scopedEntries_1161_; lean_object* v_newEntries_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1182_; 
v_stateStack_1160_ = lean_ctor_get(v_s_1158_, 0);
v_scopedEntries_1161_ = lean_ctor_get(v_s_1158_, 1);
v_newEntries_1162_ = lean_ctor_get(v_s_1158_, 2);
v_isSharedCheck_1182_ = !lean_is_exclusive(v_s_1158_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1164_ = v_s_1158_;
v_isShared_1165_ = v_isSharedCheck_1182_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_newEntries_1162_);
lean_inc(v_scopedEntries_1161_);
lean_inc(v_stateStack_1160_);
lean_dec(v_s_1158_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1182_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v_a_1166_; lean_object* v___x_1168_; uint8_t v_isShared_1169_; uint8_t v_isSharedCheck_1181_; 
v_a_1166_ = lean_ctor_get(v_e_1159_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v_e_1159_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1168_ = v_e_1159_;
v_isShared_1169_ = v_isSharedCheck_1181_;
goto v_resetjp_1167_;
}
else
{
lean_inc(v_a_1166_);
lean_dec(v_e_1159_);
v___x_1168_ = lean_box(0);
v_isShared_1169_ = v_isSharedCheck_1181_;
goto v_resetjp_1167_;
}
v_resetjp_1167_:
{
lean_object* v_toOLeanEntry_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1175_; 
v_toOLeanEntry_1170_ = lean_ctor_get(v_descr_1157_, 3);
lean_inc(v_toOLeanEntry_1170_);
v___x_1171_ = lean_box(0);
lean_inc(v_a_1166_);
v___x_1172_ = l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__0___redArg(v_descr_1157_, v_a_1166_, v_stateStack_1160_, v___x_1171_);
v___x_1173_ = lean_apply_1(v_toOLeanEntry_1170_, v_a_1166_);
if (v_isShared_1169_ == 0)
{
lean_ctor_set(v___x_1168_, 0, v___x_1173_);
v___x_1175_ = v___x_1168_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v___x_1173_);
v___x_1175_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
lean_object* v___x_1176_; lean_object* v___x_1178_; 
v___x_1176_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
lean_ctor_set(v___x_1176_, 1, v_newEntries_1162_);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 2, v___x_1176_);
lean_ctor_set(v___x_1164_, 0, v___x_1172_);
v___x_1178_ = v___x_1164_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v___x_1172_);
lean_ctor_set(v_reuseFailAlloc_1179_, 1, v_scopedEntries_1161_);
lean_ctor_set(v_reuseFailAlloc_1179_, 2, v___x_1176_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
}
}
}
else
{
lean_object* v_stateStack_1183_; lean_object* v_scopedEntries_1184_; lean_object* v_newEntries_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1207_; 
v_stateStack_1183_ = lean_ctor_get(v_s_1158_, 0);
v_scopedEntries_1184_ = lean_ctor_get(v_s_1158_, 1);
v_newEntries_1185_ = lean_ctor_get(v_s_1158_, 2);
v_isSharedCheck_1207_ = !lean_is_exclusive(v_s_1158_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1187_ = v_s_1158_;
v_isShared_1188_ = v_isSharedCheck_1207_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_newEntries_1185_);
lean_inc(v_scopedEntries_1184_);
lean_inc(v_stateStack_1183_);
lean_dec(v_s_1158_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1207_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v_a_1189_; lean_object* v_a_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1206_; 
v_a_1189_ = lean_ctor_get(v_e_1159_, 0);
v_a_1190_ = lean_ctor_get(v_e_1159_, 1);
v_isSharedCheck_1206_ = !lean_is_exclusive(v_e_1159_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1192_ = v_e_1159_;
v_isShared_1193_ = v_isSharedCheck_1206_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_a_1190_);
lean_inc(v_a_1189_);
lean_dec(v_e_1159_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1206_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v_toOLeanEntry_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1200_; 
v_toOLeanEntry_1194_ = lean_ctor_get(v_descr_1157_, 3);
lean_inc(v_toOLeanEntry_1194_);
v___x_1195_ = lean_box(0);
lean_inc_n(v_a_1190_, 2);
v___x_1196_ = l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___redArg(v_a_1189_, v_descr_1157_, v_a_1190_, v_stateStack_1183_, v___x_1195_);
lean_inc(v_a_1189_);
v___x_1197_ = l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg(v_scopedEntries_1184_, v_a_1189_, v_a_1190_);
v___x_1198_ = lean_apply_1(v_toOLeanEntry_1194_, v_a_1190_);
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 1, v___x_1198_);
v___x_1200_ = v___x_1192_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_a_1189_);
lean_ctor_set(v_reuseFailAlloc_1205_, 1, v___x_1198_);
v___x_1200_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
lean_object* v___x_1201_; lean_object* v___x_1203_; 
v___x_1201_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1201_, 0, v___x_1200_);
lean_ctor_set(v___x_1201_, 1, v_newEntries_1185_);
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 2, v___x_1201_);
lean_ctor_set(v___x_1187_, 1, v___x_1197_);
lean_ctor_set(v___x_1187_, 0, v___x_1196_);
v___x_1203_ = v___x_1187_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v___x_1196_);
lean_ctor_set(v_reuseFailAlloc_1204_, 1, v___x_1197_);
lean_ctor_set(v_reuseFailAlloc_1204_, 2, v___x_1201_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addEntryFn(lean_object* v_00_u03b1_1208_, lean_object* v_00_u03b2_1209_, lean_object* v_00_u03c3_1210_, lean_object* v_descr_1211_, lean_object* v_s_1212_, lean_object* v_e_1213_){
_start:
{
lean_object* v___x_1214_; 
v___x_1214_ = l_Lean_ScopedEnvExtension_addEntryFn___redArg(v_descr_1211_, v_s_1212_, v_e_1213_);
return v___x_1214_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__0(lean_object* v_00_u03c3_1215_, lean_object* v_00_u03b2_1216_, lean_object* v_00_u03b1_1217_, lean_object* v_descr_1218_, lean_object* v_a_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_){
_start:
{
lean_object* v___x_1222_; 
v___x_1222_ = l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__0___redArg(v_descr_1218_, v_a_1219_, v_a_1220_, v_a_1221_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1(lean_object* v_00_u03c3_1223_, lean_object* v_a_1224_, lean_object* v_00_u03b2_1225_, lean_object* v_00_u03b1_1226_, lean_object* v_descr_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_){
_start:
{
lean_object* v___x_1231_; 
v___x_1231_ = l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___redArg(v_a_1224_, v_descr_1227_, v_a_1228_, v_a_1229_, v_a_1230_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___boxed(lean_object* v_00_u03c3_1232_, lean_object* v_a_1233_, lean_object* v_00_u03b2_1234_, lean_object* v_00_u03b1_1235_, lean_object* v_descr_1236_, lean_object* v_a_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1(v_00_u03c3_1232_, v_a_1233_, v_00_u03b2_1234_, v_00_u03b1_1235_, v_descr_1236_, v_a_1237_, v_a_1238_, v_a_1239_);
lean_dec(v_a_1233_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___redArg(lean_object* v_descr_1241_, lean_object* v_env_1242_, lean_object* v_as_1243_, size_t v_sz_1244_, size_t v_i_1245_, lean_object* v_b_1246_){
_start:
{
lean_object* v_a_1248_; uint8_t v___x_1252_; 
v___x_1252_ = lean_usize_dec_lt(v_i_1245_, v_sz_1244_);
if (v___x_1252_ == 0)
{
lean_dec_ref(v_env_1242_);
lean_dec_ref(v_descr_1241_);
return v_b_1246_;
}
else
{
lean_object* v_snd_1253_; lean_object* v_fst_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1354_; 
v_snd_1253_ = lean_ctor_get(v_b_1246_, 1);
v_fst_1254_ = lean_ctor_get(v_b_1246_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v_b_1246_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1256_ = v_b_1246_;
v_isShared_1257_ = v_isSharedCheck_1354_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_snd_1253_);
lean_inc(v_fst_1254_);
lean_dec(v_b_1246_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1354_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v_fst_1258_; lean_object* v_snd_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1353_; 
v_fst_1258_ = lean_ctor_get(v_snd_1253_, 0);
v_snd_1259_ = lean_ctor_get(v_snd_1253_, 1);
v_isSharedCheck_1353_ = !lean_is_exclusive(v_snd_1253_);
if (v_isSharedCheck_1353_ == 0)
{
v___x_1261_ = v_snd_1253_;
v_isShared_1262_ = v_isSharedCheck_1353_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_snd_1259_);
lean_inc(v_fst_1258_);
lean_dec(v_snd_1253_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1353_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v_a_1263_; 
v_a_1263_ = lean_array_uget(v_as_1243_, v_i_1245_);
if (lean_obj_tag(v_a_1263_) == 0)
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1313_; 
v_a_1264_ = lean_ctor_get(v_a_1263_, 0);
v_isSharedCheck_1313_ = !lean_is_exclusive(v_a_1263_);
if (v_isSharedCheck_1313_ == 0)
{
v___x_1266_ = v_a_1263_;
v_isShared_1267_ = v_isSharedCheck_1313_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v_a_1263_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1313_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v_exportEntry_x3f_1268_; lean_object* v___x_1269_; lean_object* v_exported_1270_; lean_object* v_server_1271_; lean_object* v_private_1272_; lean_object* v___y_1274_; lean_object* v_server_1275_; lean_object* v_exported_1294_; 
v_exportEntry_x3f_1268_ = lean_ctor_get(v_descr_1241_, 6);
lean_inc_ref(v_exportEntry_x3f_1268_);
lean_inc_ref(v_env_1242_);
v___x_1269_ = lean_apply_2(v_exportEntry_x3f_1268_, v_env_1242_, v_a_1264_);
v_exported_1270_ = lean_ctor_get(v___x_1269_, 0);
lean_inc(v_exported_1270_);
v_server_1271_ = lean_ctor_get(v___x_1269_, 1);
lean_inc(v_server_1271_);
v_private_1272_ = lean_ctor_get(v___x_1269_, 2);
lean_inc(v_private_1272_);
lean_dec_ref(v___x_1269_);
if (lean_obj_tag(v_exported_1270_) == 1)
{
lean_object* v_val_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1312_; 
v_val_1304_ = lean_ctor_get(v_exported_1270_, 0);
v_isSharedCheck_1312_ = !lean_is_exclusive(v_exported_1270_);
if (v_isSharedCheck_1312_ == 0)
{
v___x_1306_ = v_exported_1270_;
v_isShared_1307_ = v_isSharedCheck_1312_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_val_1304_);
lean_dec(v_exported_1270_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1312_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1309_; 
if (v_isShared_1307_ == 0)
{
lean_ctor_set_tag(v___x_1306_, 0);
v___x_1309_ = v___x_1306_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v_val_1304_);
v___x_1309_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
lean_object* v___x_1310_; 
v___x_1310_ = lean_array_push(v_fst_1254_, v___x_1309_);
v_exported_1294_ = v___x_1310_;
goto v___jp_1293_;
}
}
}
else
{
lean_dec(v_exported_1270_);
v_exported_1294_ = v_fst_1254_;
goto v___jp_1293_;
}
v___jp_1273_:
{
if (lean_obj_tag(v_private_1272_) == 1)
{
lean_object* v_val_1276_; lean_object* v___x_1278_; 
v_val_1276_ = lean_ctor_get(v_private_1272_, 0);
lean_inc(v_val_1276_);
lean_dec_ref_known(v_private_1272_, 1);
if (v_isShared_1267_ == 0)
{
lean_ctor_set(v___x_1266_, 0, v_val_1276_);
v___x_1278_ = v___x_1266_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v_val_1276_);
v___x_1278_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
lean_object* v___x_1279_; lean_object* v___x_1281_; 
v___x_1279_ = lean_array_push(v_snd_1259_, v___x_1278_);
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 1, v___x_1279_);
lean_ctor_set(v___x_1261_, 0, v_server_1275_);
v___x_1281_ = v___x_1261_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v_server_1275_);
lean_ctor_set(v_reuseFailAlloc_1285_, 1, v___x_1279_);
v___x_1281_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
lean_object* v___x_1283_; 
if (v_isShared_1257_ == 0)
{
lean_ctor_set(v___x_1256_, 1, v___x_1281_);
lean_ctor_set(v___x_1256_, 0, v___y_1274_);
v___x_1283_ = v___x_1256_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v___y_1274_);
lean_ctor_set(v_reuseFailAlloc_1284_, 1, v___x_1281_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
v_a_1248_ = v___x_1283_;
goto v___jp_1247_;
}
}
}
}
else
{
lean_object* v___x_1288_; 
lean_dec(v_private_1272_);
lean_del_object(v___x_1266_);
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 0, v_server_1275_);
v___x_1288_ = v___x_1261_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v_server_1275_);
lean_ctor_set(v_reuseFailAlloc_1292_, 1, v_snd_1259_);
v___x_1288_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
lean_object* v___x_1290_; 
if (v_isShared_1257_ == 0)
{
lean_ctor_set(v___x_1256_, 1, v___x_1288_);
lean_ctor_set(v___x_1256_, 0, v___y_1274_);
v___x_1290_ = v___x_1256_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v___y_1274_);
lean_ctor_set(v_reuseFailAlloc_1291_, 1, v___x_1288_);
v___x_1290_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
v_a_1248_ = v___x_1290_;
goto v___jp_1247_;
}
}
}
}
v___jp_1293_:
{
if (lean_obj_tag(v_server_1271_) == 1)
{
lean_object* v_val_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1303_; 
v_val_1295_ = lean_ctor_get(v_server_1271_, 0);
v_isSharedCheck_1303_ = !lean_is_exclusive(v_server_1271_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1297_ = v_server_1271_;
v_isShared_1298_ = v_isSharedCheck_1303_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_val_1295_);
lean_dec(v_server_1271_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1303_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
lean_ctor_set_tag(v___x_1297_, 0);
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_val_1295_);
v___x_1300_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
lean_object* v___x_1301_; 
v___x_1301_ = lean_array_push(v_fst_1258_, v___x_1300_);
v___y_1274_ = v_exported_1294_;
v_server_1275_ = v___x_1301_;
goto v___jp_1273_;
}
}
}
else
{
lean_dec(v_server_1271_);
v___y_1274_ = v_exported_1294_;
v_server_1275_ = v_fst_1258_;
goto v___jp_1273_;
}
}
}
}
else
{
lean_object* v_a_1314_; lean_object* v_a_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1352_; 
v_a_1314_ = lean_ctor_get(v_a_1263_, 0);
v_a_1315_ = lean_ctor_get(v_a_1263_, 1);
v_isSharedCheck_1352_ = !lean_is_exclusive(v_a_1263_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1317_ = v_a_1263_;
v_isShared_1318_ = v_isSharedCheck_1352_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_a_1315_);
lean_inc(v_a_1314_);
lean_dec(v_a_1263_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1352_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v_exportEntry_x3f_1319_; lean_object* v___x_1320_; lean_object* v_exported_1321_; lean_object* v_server_1322_; lean_object* v_private_1323_; lean_object* v___y_1325_; lean_object* v_server_1326_; lean_object* v_exported_1345_; 
v_exportEntry_x3f_1319_ = lean_ctor_get(v_descr_1241_, 6);
lean_inc_ref(v_exportEntry_x3f_1319_);
lean_inc_ref(v_env_1242_);
v___x_1320_ = lean_apply_2(v_exportEntry_x3f_1319_, v_env_1242_, v_a_1315_);
v_exported_1321_ = lean_ctor_get(v___x_1320_, 0);
lean_inc(v_exported_1321_);
v_server_1322_ = lean_ctor_get(v___x_1320_, 1);
lean_inc(v_server_1322_);
v_private_1323_ = lean_ctor_get(v___x_1320_, 2);
lean_inc(v_private_1323_);
lean_dec_ref(v___x_1320_);
if (lean_obj_tag(v_exported_1321_) == 1)
{
lean_object* v_val_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
v_val_1349_ = lean_ctor_get(v_exported_1321_, 0);
lean_inc(v_val_1349_);
lean_dec_ref_known(v_exported_1321_, 1);
lean_inc(v_a_1314_);
v___x_1350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1350_, 0, v_a_1314_);
lean_ctor_set(v___x_1350_, 1, v_val_1349_);
v___x_1351_ = lean_array_push(v_fst_1254_, v___x_1350_);
v_exported_1345_ = v___x_1351_;
goto v___jp_1344_;
}
else
{
lean_dec(v_exported_1321_);
v_exported_1345_ = v_fst_1254_;
goto v___jp_1344_;
}
v___jp_1324_:
{
if (lean_obj_tag(v_private_1323_) == 1)
{
lean_object* v_val_1327_; lean_object* v___x_1329_; 
v_val_1327_ = lean_ctor_get(v_private_1323_, 0);
lean_inc(v_val_1327_);
lean_dec_ref_known(v_private_1323_, 1);
if (v_isShared_1318_ == 0)
{
lean_ctor_set(v___x_1317_, 1, v_val_1327_);
v___x_1329_ = v___x_1317_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v_a_1314_);
lean_ctor_set(v_reuseFailAlloc_1337_, 1, v_val_1327_);
v___x_1329_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
lean_object* v___x_1330_; lean_object* v___x_1332_; 
v___x_1330_ = lean_array_push(v_snd_1259_, v___x_1329_);
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 1, v___x_1330_);
lean_ctor_set(v___x_1261_, 0, v_server_1326_);
v___x_1332_ = v___x_1261_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v_server_1326_);
lean_ctor_set(v_reuseFailAlloc_1336_, 1, v___x_1330_);
v___x_1332_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
lean_object* v___x_1334_; 
if (v_isShared_1257_ == 0)
{
lean_ctor_set(v___x_1256_, 1, v___x_1332_);
lean_ctor_set(v___x_1256_, 0, v___y_1325_);
v___x_1334_ = v___x_1256_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v___y_1325_);
lean_ctor_set(v_reuseFailAlloc_1335_, 1, v___x_1332_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
v_a_1248_ = v___x_1334_;
goto v___jp_1247_;
}
}
}
}
else
{
lean_object* v___x_1339_; 
lean_dec(v_private_1323_);
lean_del_object(v___x_1317_);
lean_dec(v_a_1314_);
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 0, v_server_1326_);
v___x_1339_ = v___x_1261_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v_server_1326_);
lean_ctor_set(v_reuseFailAlloc_1343_, 1, v_snd_1259_);
v___x_1339_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
lean_object* v___x_1341_; 
if (v_isShared_1257_ == 0)
{
lean_ctor_set(v___x_1256_, 1, v___x_1339_);
lean_ctor_set(v___x_1256_, 0, v___y_1325_);
v___x_1341_ = v___x_1256_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v___y_1325_);
lean_ctor_set(v_reuseFailAlloc_1342_, 1, v___x_1339_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
v_a_1248_ = v___x_1341_;
goto v___jp_1247_;
}
}
}
}
v___jp_1344_:
{
if (lean_obj_tag(v_server_1322_) == 1)
{
lean_object* v_val_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v_val_1346_ = lean_ctor_get(v_server_1322_, 0);
lean_inc(v_val_1346_);
lean_dec_ref_known(v_server_1322_, 1);
lean_inc(v_a_1314_);
v___x_1347_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1347_, 0, v_a_1314_);
lean_ctor_set(v___x_1347_, 1, v_val_1346_);
v___x_1348_ = lean_array_push(v_fst_1258_, v___x_1347_);
v___y_1325_ = v_exported_1345_;
v_server_1326_ = v___x_1348_;
goto v___jp_1324_;
}
else
{
lean_dec(v_server_1322_);
v___y_1325_ = v_exported_1345_;
v_server_1326_ = v_fst_1258_;
goto v___jp_1324_;
}
}
}
}
}
}
}
v___jp_1247_:
{
size_t v___x_1249_; size_t v___x_1250_; 
v___x_1249_ = ((size_t)1ULL);
v___x_1250_ = lean_usize_add(v_i_1245_, v___x_1249_);
v_i_1245_ = v___x_1250_;
v_b_1246_ = v_a_1248_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___redArg___boxed(lean_object* v_descr_1355_, lean_object* v_env_1356_, lean_object* v_as_1357_, lean_object* v_sz_1358_, lean_object* v_i_1359_, lean_object* v_b_1360_){
_start:
{
size_t v_sz_boxed_1361_; size_t v_i_boxed_1362_; lean_object* v_res_1363_; 
v_sz_boxed_1361_ = lean_unbox_usize(v_sz_1358_);
lean_dec(v_sz_1358_);
v_i_boxed_1362_ = lean_unbox_usize(v_i_1359_);
lean_dec(v_i_1359_);
v_res_1363_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___redArg(v_descr_1355_, v_env_1356_, v_as_1357_, v_sz_boxed_1361_, v_i_boxed_1362_, v_b_1360_);
lean_dec_ref(v_as_1357_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_exportEntriesFn___redArg(lean_object* v_descr_1371_, lean_object* v_env_1372_, lean_object* v_s_1373_){
_start:
{
lean_object* v_newEntries_1374_; lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1391_; 
v_newEntries_1374_ = lean_ctor_get(v_s_1373_, 2);
v_isSharedCheck_1391_ = !lean_is_exclusive(v_s_1373_);
if (v_isSharedCheck_1391_ == 0)
{
lean_object* v_unused_1392_; lean_object* v_unused_1393_; 
v_unused_1392_ = lean_ctor_get(v_s_1373_, 1);
lean_dec(v_unused_1392_);
v_unused_1393_ = lean_ctor_get(v_s_1373_, 0);
lean_dec(v_unused_1393_);
v___x_1376_ = v_s_1373_;
v_isShared_1377_ = v_isSharedCheck_1391_;
goto v_resetjp_1375_;
}
else
{
lean_inc(v_newEntries_1374_);
lean_dec(v_s_1373_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1391_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; size_t v_sz_1381_; size_t v___x_1382_; lean_object* v___x_1383_; lean_object* v_snd_1384_; lean_object* v_fst_1385_; lean_object* v_fst_1386_; lean_object* v_snd_1387_; lean_object* v___x_1389_; 
v___x_1378_ = lean_array_mk(v_newEntries_1374_);
v___x_1379_ = l_Array_reverse___redArg(v___x_1378_);
v___x_1380_ = ((lean_object*)(l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__2));
v_sz_1381_ = lean_array_size(v___x_1379_);
v___x_1382_ = ((size_t)0ULL);
v___x_1383_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___redArg(v_descr_1371_, v_env_1372_, v___x_1379_, v_sz_1381_, v___x_1382_, v___x_1380_);
lean_dec_ref(v___x_1379_);
v_snd_1384_ = lean_ctor_get(v___x_1383_, 1);
lean_inc(v_snd_1384_);
v_fst_1385_ = lean_ctor_get(v___x_1383_, 0);
lean_inc(v_fst_1385_);
lean_dec_ref(v___x_1383_);
v_fst_1386_ = lean_ctor_get(v_snd_1384_, 0);
lean_inc(v_fst_1386_);
v_snd_1387_ = lean_ctor_get(v_snd_1384_, 1);
lean_inc(v_snd_1387_);
lean_dec(v_snd_1384_);
if (v_isShared_1377_ == 0)
{
lean_ctor_set(v___x_1376_, 2, v_snd_1387_);
lean_ctor_set(v___x_1376_, 1, v_fst_1386_);
lean_ctor_set(v___x_1376_, 0, v_fst_1385_);
v___x_1389_ = v___x_1376_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v_fst_1385_);
lean_ctor_set(v_reuseFailAlloc_1390_, 1, v_fst_1386_);
lean_ctor_set(v_reuseFailAlloc_1390_, 2, v_snd_1387_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
return v___x_1389_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_exportEntriesFn(lean_object* v_00_u03b1_1394_, lean_object* v_00_u03b2_1395_, lean_object* v_00_u03c3_1396_, lean_object* v_descr_1397_, lean_object* v_env_1398_, lean_object* v_s_1399_){
_start:
{
lean_object* v___x_1400_; 
v___x_1400_ = l_Lean_ScopedEnvExtension_exportEntriesFn___redArg(v_descr_1397_, v_env_1398_, v_s_1399_);
return v___x_1400_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0(lean_object* v_00_u03b1_1401_, lean_object* v_00_u03b2_1402_, lean_object* v_00_u03c3_1403_, lean_object* v_descr_1404_, lean_object* v_env_1405_, lean_object* v_as_1406_, size_t v_sz_1407_, size_t v_i_1408_, lean_object* v_b_1409_){
_start:
{
lean_object* v___x_1410_; 
v___x_1410_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___redArg(v_descr_1404_, v_env_1405_, v_as_1406_, v_sz_1407_, v_i_1408_, v_b_1409_);
return v___x_1410_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___boxed(lean_object* v_00_u03b1_1411_, lean_object* v_00_u03b2_1412_, lean_object* v_00_u03c3_1413_, lean_object* v_descr_1414_, lean_object* v_env_1415_, lean_object* v_as_1416_, lean_object* v_sz_1417_, lean_object* v_i_1418_, lean_object* v_b_1419_){
_start:
{
size_t v_sz_boxed_1420_; size_t v_i_boxed_1421_; lean_object* v_res_1422_; 
v_sz_boxed_1420_ = lean_unbox_usize(v_sz_1417_);
lean_dec(v_sz_1417_);
v_i_boxed_1421_ = lean_unbox_usize(v_i_1418_);
lean_dec(v_i_1418_);
v_res_1422_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0(v_00_u03b1_1411_, v_00_u03b2_1412_, v_00_u03c3_1413_, v_descr_1414_, v_env_1415_, v_as_1416_, v_sz_boxed_1420_, v_i_boxed_1421_, v_b_1419_);
lean_dec_ref(v_as_1416_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__4(lean_object* v_x_1423_, lean_object* v___y_1424_){
_start:
{
lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1426_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__1));
v___x_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1426_);
return v___x_1427_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__4___boxed(lean_object* v_x_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_){
_start:
{
lean_object* v_res_1431_; 
v_res_1431_ = l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__4(v_x_1428_, v___y_1429_);
lean_dec_ref(v___y_1429_);
lean_dec_ref(v_x_1428_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__0(lean_object* v_s_1432_, lean_object* v_x_1433_){
_start:
{
lean_inc_ref(v_s_1432_);
return v_s_1432_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__0___boxed(lean_object* v_s_1434_, lean_object* v_x_1435_){
_start:
{
lean_object* v_res_1436_; 
v_res_1436_ = l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__0(v_s_1434_, v_x_1435_);
lean_dec_ref(v_x_1435_);
lean_dec_ref(v_s_1434_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1(lean_object* v_x_1439_, lean_object* v_x_1440_){
_start:
{
lean_object* v___x_1441_; 
v___x_1441_ = ((lean_object*)(l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1___closed__0));
return v___x_1441_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1___boxed(lean_object* v_x_1442_, lean_object* v_x_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1(v_x_1442_, v_x_1443_);
lean_dec_ref(v_x_1443_);
lean_dec_ref(v_x_1442_);
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__2(lean_object* v_x_1445_){
_start:
{
lean_object* v___x_1446_; 
v___x_1446_ = lean_box(0);
return v___x_1446_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__2___boxed(lean_object* v_x_1447_){
_start:
{
lean_object* v_res_1448_; 
v_res_1448_ = l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__2(v_x_1447_);
lean_dec_ref(v_x_1447_);
return v_res_1448_;
}
}
static lean_object* _init_l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__4(void){
_start:
{
lean_object* v___x_1453_; 
v___x_1453_ = l_Lean_instInhabitedEnvExtension_default___redArg();
return v___x_1453_;
}
}
static lean_object* _init_l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__5(void){
_start:
{
lean_object* v___f_1454_; lean_object* v___f_1455_; lean_object* v___f_1456_; lean_object* v___f_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
v___f_1454_ = ((lean_object*)(l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__3));
v___f_1455_ = ((lean_object*)(l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__2));
v___f_1456_ = ((lean_object*)(l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__1));
v___f_1457_ = ((lean_object*)(l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__0));
v___x_1458_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3, &l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3);
v___x_1459_ = lean_obj_once(&l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__4, &l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__4_once, _init_l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__4);
v___x_1460_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1460_, 0, v___x_1459_);
lean_ctor_set(v___x_1460_, 1, v___x_1458_);
lean_ctor_set(v___x_1460_, 2, v___f_1457_);
lean_ctor_set(v___x_1460_, 3, v___f_1456_);
lean_ctor_set(v___x_1460_, 4, v___f_1455_);
lean_ctor_set(v___x_1460_, 5, v___f_1454_);
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg(lean_object* v_inst_1461_){
_start:
{
lean_object* v___f_1462_; lean_object* v___f_1463_; lean_object* v___f_1464_; lean_object* v___f_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; 
v___f_1462_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__0));
v___f_1463_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1463_, 0, v_inst_1461_);
v___f_1464_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__1));
v___f_1465_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__2));
v___x_1466_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3, &l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3);
v___x_1467_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__4, &l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__4_once, _init_l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__4);
v___x_1468_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__5));
v___x_1469_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1466_);
lean_ctor_set(v___x_1469_, 1, v___x_1467_);
lean_ctor_set(v___x_1469_, 2, v___f_1462_);
lean_ctor_set(v___x_1469_, 3, v___f_1463_);
lean_ctor_set(v___x_1469_, 4, v___f_1464_);
lean_ctor_set(v___x_1469_, 5, v___x_1468_);
lean_ctor_set(v___x_1469_, 6, v___f_1465_);
v___x_1470_ = lean_obj_once(&l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__5, &l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__5_once, _init_l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__5);
v___x_1471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1471_, 0, v___x_1469_);
lean_ctor_set(v___x_1471_, 1, v___x_1470_);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default(lean_object* v_00_u03b1_1472_, lean_object* v_00_u03b2_1473_, lean_object* v_00_u03c3_1474_, lean_object* v_inst_1475_){
_start:
{
lean_object* v___x_1476_; 
v___x_1476_ = l_Lean_instInhabitedScopedEnvExtension_default___redArg(v_inst_1475_);
return v___x_1476_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension___redArg(lean_object* v_inst_1477_){
_start:
{
lean_object* v___x_1478_; 
v___x_1478_ = l_Lean_instInhabitedScopedEnvExtension_default___redArg(v_inst_1477_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension(lean_object* v_a_1479_, lean_object* v_inst_1480_, lean_object* v_a_1481_, lean_object* v_a_1482_){
_start:
{
lean_object* v___x_1483_; 
v___x_1483_ = l_Lean_instInhabitedScopedEnvExtension_default___redArg(v_inst_1480_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_initFn_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; 
v___x_1487_ = ((lean_object*)(l___private_Lean_ScopedEnvExtension_0__Lean_initFn___closed__0_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2_));
v___x_1488_ = lean_st_mk_ref(v___x_1487_);
v___x_1489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1489_, 0, v___x_1488_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_initFn_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2____boxed(lean_object* v_a_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l___private_Lean_ScopedEnvExtension_0__Lean_initFn_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2_();
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0(lean_object* v_s_1495_){
_start:
{
lean_object* v_newEntries_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v_newEntries_1496_ = lean_ctor_get(v_s_1495_, 2);
v___x_1497_ = ((lean_object*)(l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___closed__1));
v___x_1498_ = l_List_lengthTR___redArg(v_newEntries_1496_);
v___x_1499_ = l_Nat_reprFast(v___x_1498_);
v___x_1500_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1499_);
v___x_1501_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1497_);
lean_ctor_set(v___x_1501_, 1, v___x_1500_);
return v___x_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___boxed(lean_object* v_s_1502_){
_start:
{
lean_object* v_res_1503_; 
v_res_1503_ = l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0(v_s_1502_);
lean_dec_ref(v_s_1502_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__1(lean_object* v_x_1504_){
_start:
{
lean_object* v___x_1505_; 
v___x_1505_ = ((lean_object*)(l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0));
return v___x_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__1___boxed(lean_object* v_x_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__1(v_x_1506_);
lean_dec_ref(v_x_1506_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg(lean_object* v_descr_1510_){
_start:
{
lean_object* v_name_1512_; lean_object* v___f_1513_; lean_object* v___f_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v_name_1512_ = lean_ctor_get(v_descr_1510_, 0);
v___f_1513_ = ((lean_object*)(l_Lean_registerScopedEnvExtensionUnsafe___redArg___closed__0));
v___f_1514_ = ((lean_object*)(l_Lean_registerScopedEnvExtensionUnsafe___redArg___closed__1));
lean_inc_ref_n(v_descr_1510_, 4);
v___x_1515_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_mkInitial___boxed), 5, 4);
lean_closure_set(v___x_1515_, 0, lean_box(0));
lean_closure_set(v___x_1515_, 1, lean_box(0));
lean_closure_set(v___x_1515_, 2, lean_box(0));
lean_closure_set(v___x_1515_, 3, v_descr_1510_);
v___x_1516_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_addImportedFn___boxed), 7, 4);
lean_closure_set(v___x_1516_, 0, lean_box(0));
lean_closure_set(v___x_1516_, 1, lean_box(0));
lean_closure_set(v___x_1516_, 2, lean_box(0));
lean_closure_set(v___x_1516_, 3, v_descr_1510_);
v___x_1517_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_addEntryFn), 6, 4);
lean_closure_set(v___x_1517_, 0, lean_box(0));
lean_closure_set(v___x_1517_, 1, lean_box(0));
lean_closure_set(v___x_1517_, 2, lean_box(0));
lean_closure_set(v___x_1517_, 3, v_descr_1510_);
v___x_1518_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_exportEntriesFn), 6, 4);
lean_closure_set(v___x_1518_, 0, lean_box(0));
lean_closure_set(v___x_1518_, 1, lean_box(0));
lean_closure_set(v___x_1518_, 2, lean_box(0));
lean_closure_set(v___x_1518_, 3, v_descr_1510_);
v___x_1519_ = lean_box(2);
v___x_1520_ = lean_box(0);
lean_inc(v_name_1512_);
v___x_1521_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1521_, 0, v_name_1512_);
lean_ctor_set(v___x_1521_, 1, v___x_1515_);
lean_ctor_set(v___x_1521_, 2, v___x_1516_);
lean_ctor_set(v___x_1521_, 3, v___x_1517_);
lean_ctor_set(v___x_1521_, 4, v___x_1518_);
lean_ctor_set(v___x_1521_, 5, v___f_1513_);
lean_ctor_set(v___x_1521_, 6, v___x_1519_);
lean_ctor_set(v___x_1521_, 7, v___x_1520_);
v___x_1522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1521_);
lean_ctor_set(v___x_1522_, 1, v___f_1514_);
v___x_1523_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_1522_);
if (lean_obj_tag(v___x_1523_) == 0)
{
lean_object* v_a_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1537_; 
v_a_1524_ = lean_ctor_get(v___x_1523_, 0);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1523_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1526_ = v___x_1523_;
v_isShared_1527_ = v_isSharedCheck_1537_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_a_1524_);
lean_dec(v___x_1523_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1537_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1535_; 
v___x_1528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1528_, 0, v_descr_1510_);
lean_ctor_set(v___x_1528_, 1, v_a_1524_);
v___x_1529_ = l_Lean_scopedEnvExtensionsRef;
v___x_1530_ = lean_st_ref_take(v___x_1529_);
v___x_1531_ = l_unsafeCast___redArg(v___x_1528_);
v___x_1532_ = lean_array_push(v___x_1530_, v___x_1531_);
v___x_1533_ = lean_st_ref_put(v___x_1529_, v___x_1532_);
if (v_isShared_1527_ == 0)
{
lean_ctor_set(v___x_1526_, 0, v___x_1528_);
v___x_1535_ = v___x_1526_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v___x_1528_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
}
else
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1545_; 
lean_dec_ref(v_descr_1510_);
v_a_1538_ = lean_ctor_get(v___x_1523_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1523_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1540_ = v___x_1523_;
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___x_1523_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1543_; 
if (v_isShared_1541_ == 0)
{
v___x_1543_ = v___x_1540_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_a_1538_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
return v___x_1543_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___boxed(lean_object* v_descr_1546_, lean_object* v_a_1547_){
_start:
{
lean_object* v_res_1548_; 
v_res_1548_ = l_Lean_registerScopedEnvExtensionUnsafe___redArg(v_descr_1546_);
return v_res_1548_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe(lean_object* v_00_u03b1_1549_, lean_object* v_00_u03b2_1550_, lean_object* v_00_u03c3_1551_, lean_object* v_descr_1552_){
_start:
{
lean_object* v___x_1554_; 
v___x_1554_ = l_Lean_registerScopedEnvExtensionUnsafe___redArg(v_descr_1552_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___boxed(lean_object* v_00_u03b1_1555_, lean_object* v_00_u03b2_1556_, lean_object* v_00_u03c3_1557_, lean_object* v_descr_1558_, lean_object* v_a_1559_){
_start:
{
lean_object* v_res_1560_; 
v_res_1560_ = l_Lean_registerScopedEnvExtensionUnsafe(v_00_u03b1_1555_, v_00_u03b2_1556_, v_00_u03c3_1557_, v_descr_1558_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_pushScope___redArg___lam__0(lean_object* v_s_1561_){
_start:
{
lean_object* v_stateStack_1562_; 
v_stateStack_1562_ = lean_ctor_get(v_s_1561_, 0);
if (lean_obj_tag(v_stateStack_1562_) == 0)
{
return v_s_1561_;
}
else
{
lean_object* v_head_1563_; lean_object* v_scopedEntries_1564_; lean_object* v_newEntries_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1583_; 
lean_inc_ref(v_stateStack_1562_);
v_head_1563_ = lean_ctor_get(v_stateStack_1562_, 0);
lean_inc(v_head_1563_);
v_scopedEntries_1564_ = lean_ctor_get(v_s_1561_, 1);
v_newEntries_1565_ = lean_ctor_get(v_s_1561_, 2);
v_isSharedCheck_1583_ = !lean_is_exclusive(v_s_1561_);
if (v_isSharedCheck_1583_ == 0)
{
lean_object* v_unused_1584_; 
v_unused_1584_ = lean_ctor_get(v_s_1561_, 0);
lean_dec(v_unused_1584_);
v___x_1567_ = v_s_1561_;
v_isShared_1568_ = v_isSharedCheck_1583_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_newEntries_1565_);
lean_inc(v_scopedEntries_1564_);
lean_dec(v_s_1561_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1583_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v_state_1569_; lean_object* v_activeScopes_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1582_; 
v_state_1569_ = lean_ctor_get(v_head_1563_, 0);
v_activeScopes_1570_ = lean_ctor_get(v_head_1563_, 1);
v_isSharedCheck_1582_ = !lean_is_exclusive(v_head_1563_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1572_ = v_head_1563_;
v_isShared_1573_ = v_isSharedCheck_1582_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_activeScopes_1570_);
lean_inc(v_state_1569_);
lean_dec(v_head_1563_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1582_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
uint8_t v___x_1574_; lean_object* v___x_1576_; 
v___x_1574_ = 1;
if (v_isShared_1573_ == 0)
{
v___x_1576_ = v___x_1572_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v_state_1569_);
lean_ctor_set(v_reuseFailAlloc_1581_, 1, v_activeScopes_1570_);
v___x_1576_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
lean_object* v___x_1577_; lean_object* v___x_1579_; 
lean_ctor_set_uint8(v___x_1576_, sizeof(void*)*2, v___x_1574_);
v___x_1577_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1576_);
lean_ctor_set(v___x_1577_, 1, v_stateStack_1562_);
if (v_isShared_1568_ == 0)
{
lean_ctor_set(v___x_1567_, 0, v___x_1577_);
v___x_1579_ = v___x_1567_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v___x_1577_);
lean_ctor_set(v_reuseFailAlloc_1580_, 1, v_scopedEntries_1564_);
lean_ctor_set(v_reuseFailAlloc_1580_, 2, v_newEntries_1565_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_pushScope___redArg(lean_object* v_ext_1586_, lean_object* v_env_1587_){
_start:
{
lean_object* v_ext_1588_; lean_object* v___f_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; 
v_ext_1588_ = lean_ctor_get(v_ext_1586_, 1);
lean_inc_ref(v_ext_1588_);
lean_dec_ref(v_ext_1586_);
v___f_1589_ = ((lean_object*)(l_Lean_ScopedEnvExtension_pushScope___redArg___closed__0));
v___x_1590_ = lean_box(1);
v___x_1591_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3, &l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3);
v___x_1592_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v_ext_1588_, v_env_1587_, v___f_1589_, v___x_1590_, v___x_1591_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_pushScope(lean_object* v_00_u03b1_1593_, lean_object* v_00_u03b2_1594_, lean_object* v_00_u03c3_1595_, lean_object* v_ext_1596_, lean_object* v_env_1597_){
_start:
{
lean_object* v___x_1598_; 
v___x_1598_ = l_Lean_ScopedEnvExtension_pushScope___redArg(v_ext_1596_, v_env_1597_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_popScope___redArg___lam__0(lean_object* v_s_1599_){
_start:
{
lean_object* v_stateStack_1600_; 
v_stateStack_1600_ = lean_ctor_get(v_s_1599_, 0);
if (lean_obj_tag(v_stateStack_1600_) == 1)
{
lean_object* v_tail_1601_; 
v_tail_1601_ = lean_ctor_get(v_stateStack_1600_, 1);
if (lean_obj_tag(v_tail_1601_) == 1)
{
lean_object* v_scopedEntries_1602_; lean_object* v_newEntries_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1610_; 
lean_inc_ref(v_tail_1601_);
v_scopedEntries_1602_ = lean_ctor_get(v_s_1599_, 1);
v_newEntries_1603_ = lean_ctor_get(v_s_1599_, 2);
v_isSharedCheck_1610_ = !lean_is_exclusive(v_s_1599_);
if (v_isSharedCheck_1610_ == 0)
{
lean_object* v_unused_1611_; 
v_unused_1611_ = lean_ctor_get(v_s_1599_, 0);
lean_dec(v_unused_1611_);
v___x_1605_ = v_s_1599_;
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_newEntries_1603_);
lean_inc(v_scopedEntries_1602_);
lean_dec(v_s_1599_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v___x_1608_; 
if (v_isShared_1606_ == 0)
{
lean_ctor_set(v___x_1605_, 0, v_tail_1601_);
v___x_1608_ = v___x_1605_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v_tail_1601_);
lean_ctor_set(v_reuseFailAlloc_1609_, 1, v_scopedEntries_1602_);
lean_ctor_set(v_reuseFailAlloc_1609_, 2, v_newEntries_1603_);
v___x_1608_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
return v___x_1608_;
}
}
}
else
{
return v_s_1599_;
}
}
else
{
return v_s_1599_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_popScope___redArg(lean_object* v_ext_1613_, lean_object* v_env_1614_){
_start:
{
lean_object* v_ext_1615_; lean_object* v___f_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; 
v_ext_1615_ = lean_ctor_get(v_ext_1613_, 1);
lean_inc_ref(v_ext_1615_);
lean_dec_ref(v_ext_1613_);
v___f_1616_ = ((lean_object*)(l_Lean_ScopedEnvExtension_popScope___redArg___closed__0));
v___x_1617_ = lean_box(1);
v___x_1618_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3, &l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3);
v___x_1619_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v_ext_1615_, v_env_1614_, v___f_1616_, v___x_1617_, v___x_1618_);
return v___x_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_popScope(lean_object* v_00_u03b1_1620_, lean_object* v_00_u03b2_1621_, lean_object* v_00_u03c3_1622_, lean_object* v_ext_1623_, lean_object* v_env_1624_){
_start:
{
lean_object* v___x_1625_; 
v___x_1625_ = l_Lean_ScopedEnvExtension_popScope___redArg(v_ext_1623_, v_env_1624_);
return v___x_1625_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___redArg(lean_object* v_a_1626_, lean_object* v_a_1627_){
_start:
{
lean_object* v_zero_1628_; uint8_t v_isZero_1629_; 
v_zero_1628_ = lean_unsigned_to_nat(0u);
v_isZero_1629_ = lean_nat_dec_eq(v_a_1626_, v_zero_1628_);
if (v_isZero_1629_ == 1)
{
return v_a_1627_;
}
else
{
if (lean_obj_tag(v_a_1627_) == 0)
{
return v_a_1627_;
}
else
{
lean_object* v_head_1630_; lean_object* v_tail_1631_; lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1650_; 
v_head_1630_ = lean_ctor_get(v_a_1627_, 0);
v_tail_1631_ = lean_ctor_get(v_a_1627_, 1);
v_isSharedCheck_1650_ = !lean_is_exclusive(v_a_1627_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1633_ = v_a_1627_;
v_isShared_1634_ = v_isSharedCheck_1650_;
goto v_resetjp_1632_;
}
else
{
lean_inc(v_tail_1631_);
lean_inc(v_head_1630_);
lean_dec(v_a_1627_);
v___x_1633_ = lean_box(0);
v_isShared_1634_ = v_isSharedCheck_1650_;
goto v_resetjp_1632_;
}
v_resetjp_1632_:
{
lean_object* v_state_1635_; lean_object* v_activeScopes_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1649_; 
v_state_1635_ = lean_ctor_get(v_head_1630_, 0);
v_activeScopes_1636_ = lean_ctor_get(v_head_1630_, 1);
v_isSharedCheck_1649_ = !lean_is_exclusive(v_head_1630_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1638_ = v_head_1630_;
v_isShared_1639_ = v_isSharedCheck_1649_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_activeScopes_1636_);
lean_inc(v_state_1635_);
lean_dec(v_head_1630_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1649_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v_one_1640_; lean_object* v_n_1641_; lean_object* v___x_1643_; 
v_one_1640_ = lean_unsigned_to_nat(1u);
v_n_1641_ = lean_nat_sub(v_a_1626_, v_one_1640_);
if (v_isShared_1639_ == 0)
{
v___x_1643_ = v___x_1638_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v_state_1635_);
lean_ctor_set(v_reuseFailAlloc_1648_, 1, v_activeScopes_1636_);
v___x_1643_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
lean_object* v___x_1644_; lean_object* v___x_1646_; 
lean_ctor_set_uint8(v___x_1643_, sizeof(void*)*2, v_isZero_1629_);
v___x_1644_ = l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___redArg(v_n_1641_, v_tail_1631_);
lean_dec(v_n_1641_);
if (v_isShared_1634_ == 0)
{
lean_ctor_set(v___x_1633_, 1, v___x_1644_);
lean_ctor_set(v___x_1633_, 0, v___x_1643_);
v___x_1646_ = v___x_1633_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v___x_1643_);
lean_ctor_set(v_reuseFailAlloc_1647_, 1, v___x_1644_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___redArg___boxed(lean_object* v_a_1651_, lean_object* v_a_1652_){
_start:
{
lean_object* v_res_1653_; 
v_res_1653_ = l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___redArg(v_a_1651_, v_a_1652_);
lean_dec(v_a_1651_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go(lean_object* v_00_u03c3_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_){
_start:
{
lean_object* v___x_1657_; 
v___x_1657_ = l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___redArg(v_a_1655_, v_a_1656_);
return v___x_1657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___boxed(lean_object* v_00_u03c3_1658_, lean_object* v_a_1659_, lean_object* v_a_1660_){
_start:
{
lean_object* v_res_1661_; 
v_res_1661_ = l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go(v_00_u03c3_1658_, v_a_1659_, v_a_1660_);
lean_dec(v_a_1659_);
return v_res_1661_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg___lam__0(lean_object* v_depth_1662_, lean_object* v_s_1663_){
_start:
{
lean_object* v_stateStack_1664_; lean_object* v_scopedEntries_1665_; lean_object* v_newEntries_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1674_; 
v_stateStack_1664_ = lean_ctor_get(v_s_1663_, 0);
v_scopedEntries_1665_ = lean_ctor_get(v_s_1663_, 1);
v_newEntries_1666_ = lean_ctor_get(v_s_1663_, 2);
v_isSharedCheck_1674_ = !lean_is_exclusive(v_s_1663_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1668_ = v_s_1663_;
v_isShared_1669_ = v_isSharedCheck_1674_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_newEntries_1666_);
lean_inc(v_scopedEntries_1665_);
lean_inc(v_stateStack_1664_);
lean_dec(v_s_1663_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1674_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1670_; lean_object* v___x_1672_; 
v___x_1670_ = l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___redArg(v_depth_1662_, v_stateStack_1664_);
if (v_isShared_1669_ == 0)
{
lean_ctor_set(v___x_1668_, 0, v___x_1670_);
v___x_1672_ = v___x_1668_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v___x_1670_);
lean_ctor_set(v_reuseFailAlloc_1673_, 1, v_scopedEntries_1665_);
lean_ctor_set(v_reuseFailAlloc_1673_, 2, v_newEntries_1666_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
return v___x_1672_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg___lam__0___boxed(lean_object* v_depth_1675_, lean_object* v_s_1676_){
_start:
{
lean_object* v_res_1677_; 
v_res_1677_ = l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg___lam__0(v_depth_1675_, v_s_1676_);
lean_dec(v_depth_1675_);
return v_res_1677_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg(lean_object* v_ext_1678_, lean_object* v_env_1679_, lean_object* v_depth_1680_){
_start:
{
lean_object* v_ext_1681_; lean_object* v___f_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; 
v_ext_1681_ = lean_ctor_get(v_ext_1678_, 1);
lean_inc_ref(v_ext_1681_);
lean_dec_ref(v_ext_1678_);
v___f_1682_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1682_, 0, v_depth_1680_);
v___x_1683_ = lean_box(1);
v___x_1684_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3, &l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3);
v___x_1685_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v_ext_1681_, v_env_1679_, v___f_1682_, v___x_1683_, v___x_1684_);
return v___x_1685_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_setDelimitsLocal(lean_object* v_00_u03b1_1686_, lean_object* v_00_u03b2_1687_, lean_object* v_00_u03c3_1688_, lean_object* v_ext_1689_, lean_object* v_env_1690_, lean_object* v_depth_1691_){
_start:
{
lean_object* v___x_1692_; 
v___x_1692_ = l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg(v_ext_1689_, v_env_1690_, v_depth_1691_);
return v___x_1692_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addEntry___redArg(lean_object* v_ext_1693_, lean_object* v_env_1694_, lean_object* v_b_1695_){
_start:
{
lean_object* v_ext_1696_; lean_object* v_toEnvExtension_1697_; lean_object* v_asyncMode_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; 
v_ext_1696_ = lean_ctor_get(v_ext_1693_, 1);
lean_inc_ref(v_ext_1696_);
lean_dec_ref(v_ext_1693_);
v_toEnvExtension_1697_ = lean_ctor_get(v_ext_1696_, 0);
v_asyncMode_1698_ = lean_ctor_get(v_toEnvExtension_1697_, 2);
lean_inc(v_asyncMode_1698_);
v___x_1699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1699_, 0, v_b_1695_);
v___x_1700_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3, &l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3);
v___x_1701_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_1696_, v_env_1694_, v___x_1699_, v_asyncMode_1698_, v___x_1700_);
lean_dec(v_asyncMode_1698_);
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addEntry(lean_object* v_00_u03b1_1702_, lean_object* v_00_u03b2_1703_, lean_object* v_00_u03c3_1704_, lean_object* v_ext_1705_, lean_object* v_env_1706_, lean_object* v_b_1707_){
_start:
{
lean_object* v___x_1708_; 
v___x_1708_ = l_Lean_ScopedEnvExtension_addEntry___redArg(v_ext_1705_, v_env_1706_, v_b_1707_);
return v___x_1708_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addScopedEntry___redArg(lean_object* v_ext_1709_, lean_object* v_env_1710_, lean_object* v_namespaceName_1711_, lean_object* v_b_1712_){
_start:
{
lean_object* v_ext_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1724_; 
v_ext_1713_ = lean_ctor_get(v_ext_1709_, 1);
v_isSharedCheck_1724_ = !lean_is_exclusive(v_ext_1709_);
if (v_isSharedCheck_1724_ == 0)
{
lean_object* v_unused_1725_; 
v_unused_1725_ = lean_ctor_get(v_ext_1709_, 0);
lean_dec(v_unused_1725_);
v___x_1715_ = v_ext_1709_;
v_isShared_1716_ = v_isSharedCheck_1724_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_ext_1713_);
lean_dec(v_ext_1709_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1724_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v_toEnvExtension_1717_; lean_object* v_asyncMode_1718_; lean_object* v___x_1720_; 
v_toEnvExtension_1717_ = lean_ctor_get(v_ext_1713_, 0);
v_asyncMode_1718_ = lean_ctor_get(v_toEnvExtension_1717_, 2);
lean_inc(v_asyncMode_1718_);
if (v_isShared_1716_ == 0)
{
lean_ctor_set_tag(v___x_1715_, 1);
lean_ctor_set(v___x_1715_, 1, v_b_1712_);
lean_ctor_set(v___x_1715_, 0, v_namespaceName_1711_);
v___x_1720_ = v___x_1715_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_namespaceName_1711_);
lean_ctor_set(v_reuseFailAlloc_1723_, 1, v_b_1712_);
v___x_1720_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___x_1721_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3, &l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3);
v___x_1722_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_1713_, v_env_1710_, v___x_1720_, v_asyncMode_1718_, v___x_1721_);
lean_dec(v_asyncMode_1718_);
return v___x_1722_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addScopedEntry(lean_object* v_00_u03b1_1726_, lean_object* v_00_u03b2_1727_, lean_object* v_00_u03c3_1728_, lean_object* v_ext_1729_, lean_object* v_env_1730_, lean_object* v_namespaceName_1731_, lean_object* v_b_1732_){
_start:
{
lean_object* v___x_1733_; 
v___x_1733_ = l_Lean_ScopedEnvExtension_addScopedEntry___redArg(v_ext_1729_, v_env_1730_, v_namespaceName_1731_, v_b_1732_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l_Lean_stateStackModify___redArg(lean_object* v_ext_1734_, lean_object* v_states_1735_, lean_object* v_b_1736_){
_start:
{
if (lean_obj_tag(v_states_1735_) == 0)
{
lean_dec(v_b_1736_);
lean_dec_ref(v_ext_1734_);
return v_states_1735_;
}
else
{
lean_object* v_descr_1737_; lean_object* v_head_1738_; lean_object* v_tail_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1762_; 
v_descr_1737_ = lean_ctor_get(v_ext_1734_, 0);
v_head_1738_ = lean_ctor_get(v_states_1735_, 0);
v_tail_1739_ = lean_ctor_get(v_states_1735_, 1);
v_isSharedCheck_1762_ = !lean_is_exclusive(v_states_1735_);
if (v_isSharedCheck_1762_ == 0)
{
v___x_1741_ = v_states_1735_;
v_isShared_1742_ = v_isSharedCheck_1762_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_tail_1739_);
lean_inc(v_head_1738_);
lean_dec(v_states_1735_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1762_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v_addEntry_1743_; lean_object* v_state_1744_; lean_object* v_activeScopes_1745_; uint8_t v_delimitsLocal_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1761_; 
v_addEntry_1743_ = lean_ctor_get(v_descr_1737_, 4);
v_state_1744_ = lean_ctor_get(v_head_1738_, 0);
v_activeScopes_1745_ = lean_ctor_get(v_head_1738_, 1);
v_delimitsLocal_1746_ = lean_ctor_get_uint8(v_head_1738_, sizeof(void*)*2);
v_isSharedCheck_1761_ = !lean_is_exclusive(v_head_1738_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1748_ = v_head_1738_;
v_isShared_1749_ = v_isSharedCheck_1761_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_activeScopes_1745_);
lean_inc(v_state_1744_);
lean_dec(v_head_1738_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1761_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1750_; lean_object* v_top_1752_; 
lean_inc(v_addEntry_1743_);
lean_inc(v_b_1736_);
v___x_1750_ = lean_apply_2(v_addEntry_1743_, v_state_1744_, v_b_1736_);
if (v_isShared_1749_ == 0)
{
lean_ctor_set(v___x_1748_, 0, v___x_1750_);
v_top_1752_ = v___x_1748_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v___x_1750_);
lean_ctor_set(v_reuseFailAlloc_1760_, 1, v_activeScopes_1745_);
lean_ctor_set_uint8(v_reuseFailAlloc_1760_, sizeof(void*)*2, v_delimitsLocal_1746_);
v_top_1752_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
if (v_delimitsLocal_1746_ == 0)
{
lean_object* v___x_1753_; lean_object* v___x_1755_; 
v___x_1753_ = l_Lean_stateStackModify___redArg(v_ext_1734_, v_tail_1739_, v_b_1736_);
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 1, v___x_1753_);
lean_ctor_set(v___x_1741_, 0, v_top_1752_);
v___x_1755_ = v___x_1741_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_top_1752_);
lean_ctor_set(v_reuseFailAlloc_1756_, 1, v___x_1753_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
else
{
lean_object* v___x_1758_; 
lean_dec(v_b_1736_);
lean_dec_ref(v_ext_1734_);
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 0, v_top_1752_);
v___x_1758_ = v___x_1741_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v_top_1752_);
lean_ctor_set(v_reuseFailAlloc_1759_, 1, v_tail_1739_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_stateStackModify(lean_object* v_00_u03b1_1763_, lean_object* v_00_u03b2_1764_, lean_object* v_00_u03c3_1765_, lean_object* v_ext_1766_, lean_object* v_states_1767_, lean_object* v_b_1768_){
_start:
{
lean_object* v___x_1769_; 
v___x_1769_ = l_Lean_stateStackModify___redArg(v_ext_1766_, v_states_1767_, v_b_1768_);
return v___x_1769_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addLocalEntry___redArg___lam__0(lean_object* v_ext_1770_, lean_object* v_b_1771_, lean_object* v_s_1772_){
_start:
{
lean_object* v_stateStack_1773_; lean_object* v_scopedEntries_1774_; lean_object* v_newEntries_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1783_; 
v_stateStack_1773_ = lean_ctor_get(v_s_1772_, 0);
v_scopedEntries_1774_ = lean_ctor_get(v_s_1772_, 1);
v_newEntries_1775_ = lean_ctor_get(v_s_1772_, 2);
v_isSharedCheck_1783_ = !lean_is_exclusive(v_s_1772_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1777_ = v_s_1772_;
v_isShared_1778_ = v_isSharedCheck_1783_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_newEntries_1775_);
lean_inc(v_scopedEntries_1774_);
lean_inc(v_stateStack_1773_);
lean_dec(v_s_1772_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1783_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v___x_1779_; lean_object* v___x_1781_; 
v___x_1779_ = l_Lean_stateStackModify___redArg(v_ext_1770_, v_stateStack_1773_, v_b_1771_);
if (v_isShared_1778_ == 0)
{
lean_ctor_set(v___x_1777_, 0, v___x_1779_);
v___x_1781_ = v___x_1777_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v___x_1779_);
lean_ctor_set(v_reuseFailAlloc_1782_, 1, v_scopedEntries_1774_);
lean_ctor_set(v_reuseFailAlloc_1782_, 2, v_newEntries_1775_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addLocalEntry___redArg(lean_object* v_ext_1784_, lean_object* v_env_1785_, lean_object* v_b_1786_){
_start:
{
lean_object* v_ext_1787_; lean_object* v___f_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
v_ext_1787_ = lean_ctor_get(v_ext_1784_, 1);
lean_inc_ref(v_ext_1787_);
v___f_1788_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_addLocalEntry___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1788_, 0, v_ext_1784_);
lean_closure_set(v___f_1788_, 1, v_b_1786_);
v___x_1789_ = lean_box(1);
v___x_1790_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3, &l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3);
v___x_1791_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v_ext_1787_, v_env_1785_, v___f_1788_, v___x_1789_, v___x_1790_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addLocalEntry(lean_object* v_00_u03b1_1792_, lean_object* v_00_u03b2_1793_, lean_object* v_00_u03c3_1794_, lean_object* v_ext_1795_, lean_object* v_env_1796_, lean_object* v_b_1797_){
_start:
{
lean_object* v___x_1798_; 
v___x_1798_ = l_Lean_ScopedEnvExtension_addLocalEntry___redArg(v_ext_1795_, v_env_1796_, v_b_1797_);
return v___x_1798_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object* v_env_1799_, lean_object* v_ext_1800_, lean_object* v_b_1801_, uint8_t v_kind_1802_, lean_object* v_namespaceName_1803_){
_start:
{
switch(v_kind_1802_)
{
case 0:
{
lean_object* v___x_1804_; 
lean_dec(v_namespaceName_1803_);
v___x_1804_ = l_Lean_ScopedEnvExtension_addEntry___redArg(v_ext_1800_, v_env_1799_, v_b_1801_);
return v___x_1804_;
}
case 1:
{
lean_object* v___x_1805_; 
lean_dec(v_namespaceName_1803_);
v___x_1805_ = l_Lean_ScopedEnvExtension_addLocalEntry___redArg(v_ext_1800_, v_env_1799_, v_b_1801_);
return v___x_1805_;
}
default: 
{
lean_object* v___x_1806_; 
v___x_1806_ = l_Lean_ScopedEnvExtension_addScopedEntry___redArg(v_ext_1800_, v_env_1799_, v_namespaceName_1803_, v_b_1801_);
return v___x_1806_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addCore___redArg___boxed(lean_object* v_env_1807_, lean_object* v_ext_1808_, lean_object* v_b_1809_, lean_object* v_kind_1810_, lean_object* v_namespaceName_1811_){
_start:
{
uint8_t v_kind_boxed_1812_; lean_object* v_res_1813_; 
v_kind_boxed_1812_ = lean_unbox(v_kind_1810_);
v_res_1813_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_1807_, v_ext_1808_, v_b_1809_, v_kind_boxed_1812_, v_namespaceName_1811_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addCore(lean_object* v_00_u03b1_1814_, lean_object* v_00_u03b2_1815_, lean_object* v_00_u03c3_1816_, lean_object* v_env_1817_, lean_object* v_ext_1818_, lean_object* v_b_1819_, uint8_t v_kind_1820_, lean_object* v_namespaceName_1821_){
_start:
{
lean_object* v___x_1822_; 
v___x_1822_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_1817_, v_ext_1818_, v_b_1819_, v_kind_1820_, v_namespaceName_1821_);
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addCore___boxed(lean_object* v_00_u03b1_1823_, lean_object* v_00_u03b2_1824_, lean_object* v_00_u03c3_1825_, lean_object* v_env_1826_, lean_object* v_ext_1827_, lean_object* v_b_1828_, lean_object* v_kind_1829_, lean_object* v_namespaceName_1830_){
_start:
{
uint8_t v_kind_boxed_1831_; lean_object* v_res_1832_; 
v_kind_boxed_1831_ = lean_unbox(v_kind_1829_);
v_res_1832_ = l_Lean_ScopedEnvExtension_addCore(v_00_u03b1_1823_, v_00_u03b2_1824_, v_00_u03c3_1825_, v_env_1826_, v_ext_1827_, v_b_1828_, v_kind_boxed_1831_, v_namespaceName_1830_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___lam__0(lean_object* v_ext_1833_, lean_object* v_b_1834_, uint8_t v_kind_1835_, lean_object* v_ns_1836_, lean_object* v_x_1837_){
_start:
{
lean_object* v___x_1838_; 
v___x_1838_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_x_1837_, v_ext_1833_, v_b_1834_, v_kind_1835_, v_ns_1836_);
return v___x_1838_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___lam__0___boxed(lean_object* v_ext_1839_, lean_object* v_b_1840_, lean_object* v_kind_1841_, lean_object* v_ns_1842_, lean_object* v_x_1843_){
_start:
{
uint8_t v_kind_boxed_1844_; lean_object* v_res_1845_; 
v_kind_boxed_1844_ = lean_unbox(v_kind_1841_);
v_res_1845_ = l_Lean_ScopedEnvExtension_add___redArg___lam__0(v_ext_1839_, v_b_1840_, v_kind_boxed_1844_, v_ns_1842_, v_x_1843_);
return v_res_1845_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___lam__1(lean_object* v_inst_1846_, lean_object* v_ext_1847_, lean_object* v_b_1848_, uint8_t v_kind_1849_, lean_object* v_ns_1850_){
_start:
{
lean_object* v_modifyEnv_1851_; lean_object* v___x_1852_; lean_object* v___f_1853_; lean_object* v___x_1854_; 
v_modifyEnv_1851_ = lean_ctor_get(v_inst_1846_, 1);
lean_inc(v_modifyEnv_1851_);
lean_dec_ref(v_inst_1846_);
v___x_1852_ = lean_box(v_kind_1849_);
v___f_1853_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_add___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1853_, 0, v_ext_1847_);
lean_closure_set(v___f_1853_, 1, v_b_1848_);
lean_closure_set(v___f_1853_, 2, v___x_1852_);
lean_closure_set(v___f_1853_, 3, v_ns_1850_);
v___x_1854_ = lean_apply_1(v_modifyEnv_1851_, v___f_1853_);
return v___x_1854_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___lam__1___boxed(lean_object* v_inst_1855_, lean_object* v_ext_1856_, lean_object* v_b_1857_, lean_object* v_kind_1858_, lean_object* v_ns_1859_){
_start:
{
uint8_t v_kind_boxed_1860_; lean_object* v_res_1861_; 
v_kind_boxed_1860_ = lean_unbox(v_kind_1858_);
v_res_1861_ = l_Lean_ScopedEnvExtension_add___redArg___lam__1(v_inst_1855_, v_ext_1856_, v_b_1857_, v_kind_boxed_1860_, v_ns_1859_);
return v_res_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg(lean_object* v_inst_1862_, lean_object* v_inst_1863_, lean_object* v_inst_1864_, lean_object* v_ext_1865_, lean_object* v_b_1866_, uint8_t v_kind_1867_){
_start:
{
lean_object* v_toBind_1868_; lean_object* v_getCurrNamespace_1869_; lean_object* v___x_1870_; lean_object* v___f_1871_; lean_object* v___x_1872_; 
v_toBind_1868_ = lean_ctor_get(v_inst_1862_, 1);
lean_inc(v_toBind_1868_);
lean_dec_ref(v_inst_1862_);
v_getCurrNamespace_1869_ = lean_ctor_get(v_inst_1863_, 0);
lean_inc(v_getCurrNamespace_1869_);
lean_dec_ref(v_inst_1863_);
v___x_1870_ = lean_box(v_kind_1867_);
v___f_1871_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_add___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_1871_, 0, v_inst_1864_);
lean_closure_set(v___f_1871_, 1, v_ext_1865_);
lean_closure_set(v___f_1871_, 2, v_b_1866_);
lean_closure_set(v___f_1871_, 3, v___x_1870_);
v___x_1872_ = lean_apply_4(v_toBind_1868_, lean_box(0), lean_box(0), v_getCurrNamespace_1869_, v___f_1871_);
return v___x_1872_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___boxed(lean_object* v_inst_1873_, lean_object* v_inst_1874_, lean_object* v_inst_1875_, lean_object* v_ext_1876_, lean_object* v_b_1877_, lean_object* v_kind_1878_){
_start:
{
uint8_t v_kind_boxed_1879_; lean_object* v_res_1880_; 
v_kind_boxed_1879_ = lean_unbox(v_kind_1878_);
v_res_1880_ = l_Lean_ScopedEnvExtension_add___redArg(v_inst_1873_, v_inst_1874_, v_inst_1875_, v_ext_1876_, v_b_1877_, v_kind_boxed_1879_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add(lean_object* v_m_1881_, lean_object* v_00_u03b1_1882_, lean_object* v_00_u03b2_1883_, lean_object* v_00_u03c3_1884_, lean_object* v_inst_1885_, lean_object* v_inst_1886_, lean_object* v_inst_1887_, lean_object* v_ext_1888_, lean_object* v_b_1889_, uint8_t v_kind_1890_){
_start:
{
lean_object* v___x_1891_; 
v___x_1891_ = l_Lean_ScopedEnvExtension_add___redArg(v_inst_1885_, v_inst_1886_, v_inst_1887_, v_ext_1888_, v_b_1889_, v_kind_1890_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___boxed(lean_object* v_m_1892_, lean_object* v_00_u03b1_1893_, lean_object* v_00_u03b2_1894_, lean_object* v_00_u03c3_1895_, lean_object* v_inst_1896_, lean_object* v_inst_1897_, lean_object* v_inst_1898_, lean_object* v_ext_1899_, lean_object* v_b_1900_, lean_object* v_kind_1901_){
_start:
{
uint8_t v_kind_boxed_1902_; lean_object* v_res_1903_; 
v_kind_boxed_1902_ = lean_unbox(v_kind_1901_);
v_res_1903_ = l_Lean_ScopedEnvExtension_add(v_m_1892_, v_00_u03b1_1893_, v_00_u03b2_1894_, v_00_u03c3_1895_, v_inst_1896_, v_inst_1897_, v_inst_1898_, v_ext_1899_, v_b_1900_, v_kind_boxed_1902_);
return v_res_1903_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_getState___redArg___closed__3(void){
_start:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1907_ = ((lean_object*)(l_Lean_ScopedEnvExtension_getState___redArg___closed__2));
v___x_1908_ = lean_unsigned_to_nat(16u);
v___x_1909_ = lean_unsigned_to_nat(209u);
v___x_1910_ = ((lean_object*)(l_Lean_ScopedEnvExtension_getState___redArg___closed__1));
v___x_1911_ = ((lean_object*)(l_Lean_ScopedEnvExtension_getState___redArg___closed__0));
v___x_1912_ = l_mkPanicMessageWithDecl(v___x_1911_, v___x_1910_, v___x_1909_, v___x_1908_, v___x_1907_);
return v___x_1912_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object* v_inst_1913_, lean_object* v_ext_1914_, lean_object* v_env_1915_, lean_object* v_asyncMode_1916_){
_start:
{
lean_object* v_ext_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v_stateStack_1921_; 
v_ext_1917_ = lean_ctor_get(v_ext_1914_, 1);
v___x_1918_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0);
v___x_1919_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3, &l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3);
v___x_1920_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1918_, v_ext_1917_, v_env_1915_, v_asyncMode_1916_, v___x_1919_);
v_stateStack_1921_ = lean_ctor_get(v___x_1920_, 0);
lean_inc(v_stateStack_1921_);
lean_dec(v___x_1920_);
if (lean_obj_tag(v_stateStack_1921_) == 1)
{
lean_object* v_head_1922_; lean_object* v_state_1923_; 
v_head_1922_ = lean_ctor_get(v_stateStack_1921_, 0);
lean_inc(v_head_1922_);
lean_dec_ref_known(v_stateStack_1921_, 2);
v_state_1923_ = lean_ctor_get(v_head_1922_, 0);
lean_inc(v_state_1923_);
lean_dec(v_head_1922_);
return v_state_1923_;
}
else
{
lean_object* v___x_1924_; lean_object* v___x_1925_; 
lean_dec(v_stateStack_1921_);
v___x_1924_ = lean_obj_once(&l_Lean_ScopedEnvExtension_getState___redArg___closed__3, &l_Lean_ScopedEnvExtension_getState___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_getState___redArg___closed__3);
v___x_1925_ = l_panic___redArg(v_inst_1913_, v___x_1924_);
return v___x_1925_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_getState___redArg___boxed(lean_object* v_inst_1926_, lean_object* v_ext_1927_, lean_object* v_env_1928_, lean_object* v_asyncMode_1929_){
_start:
{
lean_object* v_res_1930_; 
v_res_1930_ = l_Lean_ScopedEnvExtension_getState___redArg(v_inst_1926_, v_ext_1927_, v_env_1928_, v_asyncMode_1929_);
lean_dec(v_asyncMode_1929_);
lean_dec_ref(v_ext_1927_);
lean_dec(v_inst_1926_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_getState(lean_object* v_00_u03c3_1931_, lean_object* v_00_u03b1_1932_, lean_object* v_00_u03b2_1933_, lean_object* v_inst_1934_, lean_object* v_ext_1935_, lean_object* v_env_1936_, lean_object* v_asyncMode_1937_){
_start:
{
lean_object* v___x_1938_; 
v___x_1938_ = l_Lean_ScopedEnvExtension_getState___redArg(v_inst_1934_, v_ext_1935_, v_env_1936_, v_asyncMode_1937_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_getState___boxed(lean_object* v_00_u03c3_1939_, lean_object* v_00_u03b1_1940_, lean_object* v_00_u03b2_1941_, lean_object* v_inst_1942_, lean_object* v_ext_1943_, lean_object* v_env_1944_, lean_object* v_asyncMode_1945_){
_start:
{
lean_object* v_res_1946_; 
v_res_1946_ = l_Lean_ScopedEnvExtension_getState(v_00_u03c3_1939_, v_00_u03b1_1940_, v_00_u03b2_1941_, v_inst_1942_, v_ext_1943_, v_env_1944_, v_asyncMode_1945_);
lean_dec(v_asyncMode_1945_);
lean_dec_ref(v_ext_1943_);
lean_dec(v_inst_1942_);
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___redArg(lean_object* v_ext_1947_, lean_object* v_as_1948_, size_t v_sz_1949_, size_t v_i_1950_, lean_object* v_b_1951_){
_start:
{
uint8_t v___x_1952_; 
v___x_1952_ = lean_usize_dec_lt(v_i_1950_, v_sz_1949_);
if (v___x_1952_ == 0)
{
lean_dec_ref(v_ext_1947_);
return v_b_1951_;
}
else
{
lean_object* v_descr_1953_; lean_object* v_snd_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1968_; 
v_descr_1953_ = lean_ctor_get(v_ext_1947_, 0);
v_snd_1954_ = lean_ctor_get(v_b_1951_, 1);
v_isSharedCheck_1968_ = !lean_is_exclusive(v_b_1951_);
if (v_isSharedCheck_1968_ == 0)
{
lean_object* v_unused_1969_; 
v_unused_1969_ = lean_ctor_get(v_b_1951_, 0);
lean_dec(v_unused_1969_);
v___x_1956_ = v_b_1951_;
v_isShared_1957_ = v_isSharedCheck_1968_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_snd_1954_);
lean_dec(v_b_1951_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1968_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v_addEntry_1958_; lean_object* v___x_1959_; lean_object* v_a_1960_; lean_object* v_state_1961_; lean_object* v___x_1963_; 
v_addEntry_1958_ = lean_ctor_get(v_descr_1953_, 4);
v___x_1959_ = lean_box(0);
v_a_1960_ = lean_array_uget_borrowed(v_as_1948_, v_i_1950_);
lean_inc(v_addEntry_1958_);
lean_inc(v_a_1960_);
v_state_1961_ = lean_apply_2(v_addEntry_1958_, v_snd_1954_, v_a_1960_);
if (v_isShared_1957_ == 0)
{
lean_ctor_set(v___x_1956_, 1, v_state_1961_);
lean_ctor_set(v___x_1956_, 0, v___x_1959_);
v___x_1963_ = v___x_1956_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v___x_1959_);
lean_ctor_set(v_reuseFailAlloc_1967_, 1, v_state_1961_);
v___x_1963_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
size_t v___x_1964_; size_t v___x_1965_; 
v___x_1964_ = ((size_t)1ULL);
v___x_1965_ = lean_usize_add(v_i_1950_, v___x_1964_);
v_i_1950_ = v___x_1965_;
v_b_1951_ = v___x_1963_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object* v_ext_1970_, lean_object* v_as_1971_, lean_object* v_sz_1972_, lean_object* v_i_1973_, lean_object* v_b_1974_){
_start:
{
size_t v_sz_boxed_1975_; size_t v_i_boxed_1976_; lean_object* v_res_1977_; 
v_sz_boxed_1975_ = lean_unbox_usize(v_sz_1972_);
lean_dec(v_sz_1972_);
v_i_boxed_1976_ = lean_unbox_usize(v_i_1973_);
lean_dec(v_i_1973_);
v_res_1977_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___redArg(v_ext_1970_, v_as_1971_, v_sz_boxed_1975_, v_i_boxed_1976_, v_b_1974_);
lean_dec_ref(v_as_1971_);
return v_res_1977_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___redArg(lean_object* v_ext_1978_, lean_object* v_as_1979_, size_t v_sz_1980_, size_t v_i_1981_, lean_object* v_b_1982_){
_start:
{
uint8_t v___x_1983_; 
v___x_1983_ = lean_usize_dec_lt(v_i_1981_, v_sz_1980_);
if (v___x_1983_ == 0)
{
lean_dec_ref(v_ext_1978_);
return v_b_1982_;
}
else
{
lean_object* v_descr_1984_; lean_object* v_snd_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1999_; 
v_descr_1984_ = lean_ctor_get(v_ext_1978_, 0);
v_snd_1985_ = lean_ctor_get(v_b_1982_, 1);
v_isSharedCheck_1999_ = !lean_is_exclusive(v_b_1982_);
if (v_isSharedCheck_1999_ == 0)
{
lean_object* v_unused_2000_; 
v_unused_2000_ = lean_ctor_get(v_b_1982_, 0);
lean_dec(v_unused_2000_);
v___x_1987_ = v_b_1982_;
v_isShared_1988_ = v_isSharedCheck_1999_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_snd_1985_);
lean_dec(v_b_1982_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1999_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v_addEntry_1989_; lean_object* v___x_1990_; lean_object* v_a_1991_; lean_object* v_state_1992_; lean_object* v___x_1994_; 
v_addEntry_1989_ = lean_ctor_get(v_descr_1984_, 4);
v___x_1990_ = lean_box(0);
v_a_1991_ = lean_array_uget_borrowed(v_as_1979_, v_i_1981_);
lean_inc(v_addEntry_1989_);
lean_inc(v_a_1991_);
v_state_1992_ = lean_apply_2(v_addEntry_1989_, v_snd_1985_, v_a_1991_);
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 1, v_state_1992_);
lean_ctor_set(v___x_1987_, 0, v___x_1990_);
v___x_1994_ = v___x_1987_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v___x_1990_);
lean_ctor_set(v_reuseFailAlloc_1998_, 1, v_state_1992_);
v___x_1994_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
size_t v___x_1995_; size_t v___x_1996_; lean_object* v___x_1997_; 
v___x_1995_ = ((size_t)1ULL);
v___x_1996_ = lean_usize_add(v_i_1981_, v___x_1995_);
v___x_1997_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___redArg(v_ext_1978_, v_as_1979_, v_sz_1980_, v___x_1996_, v___x_1994_);
return v___x_1997_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_ext_2001_, lean_object* v_as_2002_, lean_object* v_sz_2003_, lean_object* v_i_2004_, lean_object* v_b_2005_){
_start:
{
size_t v_sz_boxed_2006_; size_t v_i_boxed_2007_; lean_object* v_res_2008_; 
v_sz_boxed_2006_ = lean_unbox_usize(v_sz_2003_);
lean_dec(v_sz_2003_);
v_i_boxed_2007_ = lean_unbox_usize(v_i_2004_);
lean_dec(v_i_2004_);
v_res_2008_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___redArg(v_ext_2001_, v_as_2002_, v_sz_boxed_2006_, v_i_boxed_2007_, v_b_2005_);
lean_dec_ref(v_as_2002_);
return v_res_2008_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___redArg(lean_object* v_init_2009_, lean_object* v_ext_2010_, lean_object* v_n_2011_, lean_object* v_b_2012_){
_start:
{
if (lean_obj_tag(v_n_2011_) == 0)
{
lean_object* v_cs_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; size_t v_sz_2016_; size_t v___x_2017_; lean_object* v___x_2018_; lean_object* v_fst_2019_; 
v_cs_2013_ = lean_ctor_get(v_n_2011_, 0);
v___x_2014_ = lean_box(0);
v___x_2015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2015_, 0, v___x_2014_);
lean_ctor_set(v___x_2015_, 1, v_b_2012_);
v_sz_2016_ = lean_array_size(v_cs_2013_);
v___x_2017_ = ((size_t)0ULL);
v___x_2018_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___redArg(v_init_2009_, v_ext_2010_, v_cs_2013_, v_sz_2016_, v___x_2017_, v___x_2015_);
v_fst_2019_ = lean_ctor_get(v___x_2018_, 0);
lean_inc(v_fst_2019_);
if (lean_obj_tag(v_fst_2019_) == 0)
{
lean_object* v_snd_2020_; lean_object* v___x_2021_; 
v_snd_2020_ = lean_ctor_get(v___x_2018_, 1);
lean_inc(v_snd_2020_);
lean_dec_ref(v___x_2018_);
v___x_2021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2021_, 0, v_snd_2020_);
return v___x_2021_;
}
else
{
lean_object* v_val_2022_; 
lean_dec_ref(v___x_2018_);
v_val_2022_ = lean_ctor_get(v_fst_2019_, 0);
lean_inc(v_val_2022_);
lean_dec_ref_known(v_fst_2019_, 1);
return v_val_2022_;
}
}
else
{
lean_object* v_vs_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; size_t v_sz_2026_; size_t v___x_2027_; lean_object* v___x_2028_; lean_object* v_fst_2029_; 
v_vs_2023_ = lean_ctor_get(v_n_2011_, 0);
v___x_2024_ = lean_box(0);
v___x_2025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2024_);
lean_ctor_set(v___x_2025_, 1, v_b_2012_);
v_sz_2026_ = lean_array_size(v_vs_2023_);
v___x_2027_ = ((size_t)0ULL);
v___x_2028_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___redArg(v_ext_2010_, v_vs_2023_, v_sz_2026_, v___x_2027_, v___x_2025_);
v_fst_2029_ = lean_ctor_get(v___x_2028_, 0);
lean_inc(v_fst_2029_);
if (lean_obj_tag(v_fst_2029_) == 0)
{
lean_object* v_snd_2030_; lean_object* v___x_2031_; 
v_snd_2030_ = lean_ctor_get(v___x_2028_, 1);
lean_inc(v_snd_2030_);
lean_dec_ref(v___x_2028_);
v___x_2031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2031_, 0, v_snd_2030_);
return v___x_2031_;
}
else
{
lean_object* v_val_2032_; 
lean_dec_ref(v___x_2028_);
v_val_2032_ = lean_ctor_get(v_fst_2029_, 0);
lean_inc(v_val_2032_);
lean_dec_ref_known(v_fst_2029_, 1);
return v_val_2032_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___redArg(lean_object* v_init_2033_, lean_object* v_ext_2034_, lean_object* v_as_2035_, size_t v_sz_2036_, size_t v_i_2037_, lean_object* v_b_2038_){
_start:
{
uint8_t v___x_2039_; 
v___x_2039_ = lean_usize_dec_lt(v_i_2037_, v_sz_2036_);
if (v___x_2039_ == 0)
{
lean_dec_ref(v_ext_2034_);
return v_b_2038_;
}
else
{
lean_object* v_snd_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2058_; 
v_snd_2040_ = lean_ctor_get(v_b_2038_, 1);
v_isSharedCheck_2058_ = !lean_is_exclusive(v_b_2038_);
if (v_isSharedCheck_2058_ == 0)
{
lean_object* v_unused_2059_; 
v_unused_2059_ = lean_ctor_get(v_b_2038_, 0);
lean_dec(v_unused_2059_);
v___x_2042_ = v_b_2038_;
v_isShared_2043_ = v_isSharedCheck_2058_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_snd_2040_);
lean_dec(v_b_2038_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2058_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
lean_object* v_a_2044_; lean_object* v___x_2045_; 
v_a_2044_ = lean_array_uget_borrowed(v_as_2035_, v_i_2037_);
lean_inc(v_snd_2040_);
lean_inc_ref(v_ext_2034_);
v___x_2045_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___redArg(v_init_2033_, v_ext_2034_, v_a_2044_, v_snd_2040_);
if (lean_obj_tag(v___x_2045_) == 0)
{
lean_object* v___x_2046_; lean_object* v___x_2048_; 
lean_dec_ref(v_ext_2034_);
v___x_2046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2046_, 0, v___x_2045_);
if (v_isShared_2043_ == 0)
{
lean_ctor_set(v___x_2042_, 0, v___x_2046_);
v___x_2048_ = v___x_2042_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v___x_2046_);
lean_ctor_set(v_reuseFailAlloc_2049_, 1, v_snd_2040_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
else
{
lean_object* v_a_2050_; lean_object* v___x_2051_; lean_object* v___x_2053_; 
lean_dec(v_snd_2040_);
v_a_2050_ = lean_ctor_get(v___x_2045_, 0);
lean_inc(v_a_2050_);
lean_dec_ref_known(v___x_2045_, 1);
v___x_2051_ = lean_box(0);
if (v_isShared_2043_ == 0)
{
lean_ctor_set(v___x_2042_, 1, v_a_2050_);
lean_ctor_set(v___x_2042_, 0, v___x_2051_);
v___x_2053_ = v___x_2042_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v___x_2051_);
lean_ctor_set(v_reuseFailAlloc_2057_, 1, v_a_2050_);
v___x_2053_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
size_t v___x_2054_; size_t v___x_2055_; 
v___x_2054_ = ((size_t)1ULL);
v___x_2055_ = lean_usize_add(v_i_2037_, v___x_2054_);
v_i_2037_ = v___x_2055_;
v_b_2038_ = v___x_2053_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_init_2060_, lean_object* v_ext_2061_, lean_object* v_as_2062_, lean_object* v_sz_2063_, lean_object* v_i_2064_, lean_object* v_b_2065_){
_start:
{
size_t v_sz_boxed_2066_; size_t v_i_boxed_2067_; lean_object* v_res_2068_; 
v_sz_boxed_2066_ = lean_unbox_usize(v_sz_2063_);
lean_dec(v_sz_2063_);
v_i_boxed_2067_ = lean_unbox_usize(v_i_2064_);
lean_dec(v_i_2064_);
v_res_2068_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___redArg(v_init_2060_, v_ext_2061_, v_as_2062_, v_sz_boxed_2066_, v_i_boxed_2067_, v_b_2065_);
lean_dec_ref(v_as_2062_);
lean_dec(v_init_2060_);
return v_res_2068_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___redArg___boxed(lean_object* v_init_2069_, lean_object* v_ext_2070_, lean_object* v_n_2071_, lean_object* v_b_2072_){
_start:
{
lean_object* v_res_2073_; 
v_res_2073_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___redArg(v_init_2069_, v_ext_2070_, v_n_2071_, v_b_2072_);
lean_dec_ref(v_n_2071_);
lean_dec(v_init_2069_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___redArg(lean_object* v_ext_2074_, lean_object* v_as_2075_, size_t v_sz_2076_, size_t v_i_2077_, lean_object* v_b_2078_){
_start:
{
uint8_t v___x_2079_; 
v___x_2079_ = lean_usize_dec_lt(v_i_2077_, v_sz_2076_);
if (v___x_2079_ == 0)
{
lean_dec_ref(v_ext_2074_);
return v_b_2078_;
}
else
{
lean_object* v_descr_2080_; lean_object* v_snd_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2095_; 
v_descr_2080_ = lean_ctor_get(v_ext_2074_, 0);
v_snd_2081_ = lean_ctor_get(v_b_2078_, 1);
v_isSharedCheck_2095_ = !lean_is_exclusive(v_b_2078_);
if (v_isSharedCheck_2095_ == 0)
{
lean_object* v_unused_2096_; 
v_unused_2096_ = lean_ctor_get(v_b_2078_, 0);
lean_dec(v_unused_2096_);
v___x_2083_ = v_b_2078_;
v_isShared_2084_ = v_isSharedCheck_2095_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_snd_2081_);
lean_dec(v_b_2078_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2095_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v_addEntry_2085_; lean_object* v___x_2086_; lean_object* v_a_2087_; lean_object* v_state_2088_; lean_object* v___x_2090_; 
v_addEntry_2085_ = lean_ctor_get(v_descr_2080_, 4);
v___x_2086_ = lean_box(0);
v_a_2087_ = lean_array_uget_borrowed(v_as_2075_, v_i_2077_);
lean_inc(v_addEntry_2085_);
lean_inc(v_a_2087_);
v_state_2088_ = lean_apply_2(v_addEntry_2085_, v_snd_2081_, v_a_2087_);
if (v_isShared_2084_ == 0)
{
lean_ctor_set(v___x_2083_, 1, v_state_2088_);
lean_ctor_set(v___x_2083_, 0, v___x_2086_);
v___x_2090_ = v___x_2083_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v___x_2086_);
lean_ctor_set(v_reuseFailAlloc_2094_, 1, v_state_2088_);
v___x_2090_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
size_t v___x_2091_; size_t v___x_2092_; 
v___x_2091_ = ((size_t)1ULL);
v___x_2092_ = lean_usize_add(v_i_2077_, v___x_2091_);
v_i_2077_ = v___x_2092_;
v_b_2078_ = v___x_2090_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ext_2097_, lean_object* v_as_2098_, lean_object* v_sz_2099_, lean_object* v_i_2100_, lean_object* v_b_2101_){
_start:
{
size_t v_sz_boxed_2102_; size_t v_i_boxed_2103_; lean_object* v_res_2104_; 
v_sz_boxed_2102_ = lean_unbox_usize(v_sz_2099_);
lean_dec(v_sz_2099_);
v_i_boxed_2103_ = lean_unbox_usize(v_i_2100_);
lean_dec(v_i_2100_);
v_res_2104_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___redArg(v_ext_2097_, v_as_2098_, v_sz_boxed_2102_, v_i_boxed_2103_, v_b_2101_);
lean_dec_ref(v_as_2098_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___redArg(lean_object* v_ext_2105_, lean_object* v_as_2106_, size_t v_sz_2107_, size_t v_i_2108_, lean_object* v_b_2109_){
_start:
{
uint8_t v___x_2110_; 
v___x_2110_ = lean_usize_dec_lt(v_i_2108_, v_sz_2107_);
if (v___x_2110_ == 0)
{
lean_dec_ref(v_ext_2105_);
return v_b_2109_;
}
else
{
lean_object* v_descr_2111_; lean_object* v_snd_2112_; lean_object* v___x_2114_; uint8_t v_isShared_2115_; uint8_t v_isSharedCheck_2126_; 
v_descr_2111_ = lean_ctor_get(v_ext_2105_, 0);
v_snd_2112_ = lean_ctor_get(v_b_2109_, 1);
v_isSharedCheck_2126_ = !lean_is_exclusive(v_b_2109_);
if (v_isSharedCheck_2126_ == 0)
{
lean_object* v_unused_2127_; 
v_unused_2127_ = lean_ctor_get(v_b_2109_, 0);
lean_dec(v_unused_2127_);
v___x_2114_ = v_b_2109_;
v_isShared_2115_ = v_isSharedCheck_2126_;
goto v_resetjp_2113_;
}
else
{
lean_inc(v_snd_2112_);
lean_dec(v_b_2109_);
v___x_2114_ = lean_box(0);
v_isShared_2115_ = v_isSharedCheck_2126_;
goto v_resetjp_2113_;
}
v_resetjp_2113_:
{
lean_object* v_addEntry_2116_; lean_object* v___x_2117_; lean_object* v_a_2118_; lean_object* v_state_2119_; lean_object* v___x_2121_; 
v_addEntry_2116_ = lean_ctor_get(v_descr_2111_, 4);
v___x_2117_ = lean_box(0);
v_a_2118_ = lean_array_uget_borrowed(v_as_2106_, v_i_2108_);
lean_inc(v_addEntry_2116_);
lean_inc(v_a_2118_);
v_state_2119_ = lean_apply_2(v_addEntry_2116_, v_snd_2112_, v_a_2118_);
if (v_isShared_2115_ == 0)
{
lean_ctor_set(v___x_2114_, 1, v_state_2119_);
lean_ctor_set(v___x_2114_, 0, v___x_2117_);
v___x_2121_ = v___x_2114_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v___x_2117_);
lean_ctor_set(v_reuseFailAlloc_2125_, 1, v_state_2119_);
v___x_2121_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
size_t v___x_2122_; size_t v___x_2123_; lean_object* v___x_2124_; 
v___x_2122_ = ((size_t)1ULL);
v___x_2123_ = lean_usize_add(v_i_2108_, v___x_2122_);
v___x_2124_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___redArg(v_ext_2105_, v_as_2106_, v_sz_2107_, v___x_2123_, v___x_2121_);
return v___x_2124_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___redArg___boxed(lean_object* v_ext_2128_, lean_object* v_as_2129_, lean_object* v_sz_2130_, lean_object* v_i_2131_, lean_object* v_b_2132_){
_start:
{
size_t v_sz_boxed_2133_; size_t v_i_boxed_2134_; lean_object* v_res_2135_; 
v_sz_boxed_2133_ = lean_unbox_usize(v_sz_2130_);
lean_dec(v_sz_2130_);
v_i_boxed_2134_ = lean_unbox_usize(v_i_2131_);
lean_dec(v_i_2131_);
v_res_2135_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___redArg(v_ext_2128_, v_as_2129_, v_sz_boxed_2133_, v_i_boxed_2134_, v_b_2132_);
lean_dec_ref(v_as_2129_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___redArg(lean_object* v_ext_2136_, lean_object* v_t_2137_, lean_object* v_init_2138_){
_start:
{
lean_object* v_root_2139_; lean_object* v_tail_2140_; lean_object* v___x_2141_; 
v_root_2139_ = lean_ctor_get(v_t_2137_, 0);
v_tail_2140_ = lean_ctor_get(v_t_2137_, 1);
lean_inc_ref(v_ext_2136_);
lean_inc(v_init_2138_);
v___x_2141_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___redArg(v_init_2138_, v_ext_2136_, v_root_2139_, v_init_2138_);
lean_dec(v_init_2138_);
if (lean_obj_tag(v___x_2141_) == 0)
{
lean_object* v_a_2142_; 
lean_dec_ref(v_ext_2136_);
v_a_2142_ = lean_ctor_get(v___x_2141_, 0);
lean_inc(v_a_2142_);
lean_dec_ref_known(v___x_2141_, 1);
return v_a_2142_;
}
else
{
lean_object* v_a_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; size_t v_sz_2146_; size_t v___x_2147_; lean_object* v___x_2148_; lean_object* v_fst_2149_; 
v_a_2143_ = lean_ctor_get(v___x_2141_, 0);
lean_inc(v_a_2143_);
lean_dec_ref_known(v___x_2141_, 1);
v___x_2144_ = lean_box(0);
v___x_2145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2144_);
lean_ctor_set(v___x_2145_, 1, v_a_2143_);
v_sz_2146_ = lean_array_size(v_tail_2140_);
v___x_2147_ = ((size_t)0ULL);
v___x_2148_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___redArg(v_ext_2136_, v_tail_2140_, v_sz_2146_, v___x_2147_, v___x_2145_);
v_fst_2149_ = lean_ctor_get(v___x_2148_, 0);
lean_inc(v_fst_2149_);
if (lean_obj_tag(v_fst_2149_) == 0)
{
lean_object* v_snd_2150_; 
v_snd_2150_ = lean_ctor_get(v___x_2148_, 1);
lean_inc(v_snd_2150_);
lean_dec_ref(v___x_2148_);
return v_snd_2150_;
}
else
{
lean_object* v_val_2151_; 
lean_dec_ref(v___x_2148_);
v_val_2151_ = lean_ctor_get(v_fst_2149_, 0);
lean_inc(v_val_2151_);
lean_dec_ref_known(v_fst_2149_, 1);
return v_val_2151_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___redArg___boxed(lean_object* v_ext_2152_, lean_object* v_t_2153_, lean_object* v_init_2154_){
_start:
{
lean_object* v_res_2155_; 
v_res_2155_ = l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___redArg(v_ext_2152_, v_t_2153_, v_init_2154_);
lean_dec_ref(v_t_2153_);
return v_res_2155_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_activateScoped___redArg___lam__0(lean_object* v_namespaceName_2156_, lean_object* v_ext_2157_, lean_object* v_s_2158_){
_start:
{
lean_object* v_stateStack_2159_; 
v_stateStack_2159_ = lean_ctor_get(v_s_2158_, 0);
lean_inc(v_stateStack_2159_);
if (lean_obj_tag(v_stateStack_2159_) == 1)
{
lean_object* v_scopedEntries_2160_; lean_object* v_newEntries_2161_; lean_object* v_head_2162_; lean_object* v_tail_2163_; lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2192_; 
v_scopedEntries_2160_ = lean_ctor_get(v_s_2158_, 1);
v_newEntries_2161_ = lean_ctor_get(v_s_2158_, 2);
v_head_2162_ = lean_ctor_get(v_stateStack_2159_, 0);
v_tail_2163_ = lean_ctor_get(v_stateStack_2159_, 1);
v_isSharedCheck_2192_ = !lean_is_exclusive(v_stateStack_2159_);
if (v_isSharedCheck_2192_ == 0)
{
v___x_2165_ = v_stateStack_2159_;
v_isShared_2166_ = v_isSharedCheck_2192_;
goto v_resetjp_2164_;
}
else
{
lean_inc(v_tail_2163_);
lean_inc(v_head_2162_);
lean_dec(v_stateStack_2159_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2192_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
lean_object* v___y_2168_; lean_object* v_state_2173_; lean_object* v_activeScopes_2174_; uint8_t v_delimitsLocal_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2191_; 
v_state_2173_ = lean_ctor_get(v_head_2162_, 0);
v_activeScopes_2174_ = lean_ctor_get(v_head_2162_, 1);
v_delimitsLocal_2175_ = lean_ctor_get_uint8(v_head_2162_, sizeof(void*)*2);
v_isSharedCheck_2191_ = !lean_is_exclusive(v_head_2162_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2177_ = v_head_2162_;
v_isShared_2178_ = v_isSharedCheck_2191_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_activeScopes_2174_);
lean_inc(v_state_2173_);
lean_dec(v_head_2162_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2191_;
goto v_resetjp_2176_;
}
v___jp_2167_:
{
lean_object* v___x_2170_; 
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 0, v___y_2168_);
v___x_2170_ = v___x_2165_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v___y_2168_);
lean_ctor_set(v_reuseFailAlloc_2172_, 1, v_tail_2163_);
v___x_2170_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
lean_object* v___x_2171_; 
v___x_2171_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2171_, 0, v___x_2170_);
lean_ctor_set(v___x_2171_, 1, v_scopedEntries_2160_);
lean_ctor_set(v___x_2171_, 2, v_newEntries_2161_);
return v___x_2171_;
}
}
v_resetjp_2176_:
{
uint8_t v___x_2179_; 
v___x_2179_ = l_Lean_NameSet_contains(v_activeScopes_2174_, v_namespaceName_2156_);
if (v___x_2179_ == 0)
{
lean_object* v_activeScopes_2180_; lean_object* v___x_2181_; 
lean_inc(v_newEntries_2161_);
lean_inc_ref(v_scopedEntries_2160_);
lean_dec_ref(v_s_2158_);
lean_inc(v_namespaceName_2156_);
v_activeScopes_2180_ = l_Lean_NameSet_insert(v_activeScopes_2174_, v_namespaceName_2156_);
v___x_2181_ = l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___redArg(v_scopedEntries_2160_, v_namespaceName_2156_);
lean_dec(v_namespaceName_2156_);
if (lean_obj_tag(v___x_2181_) == 0)
{
lean_object* v___x_2183_; 
lean_dec_ref(v_ext_2157_);
if (v_isShared_2178_ == 0)
{
lean_ctor_set(v___x_2177_, 1, v_activeScopes_2180_);
v___x_2183_ = v___x_2177_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v_state_2173_);
lean_ctor_set(v_reuseFailAlloc_2184_, 1, v_activeScopes_2180_);
lean_ctor_set_uint8(v_reuseFailAlloc_2184_, sizeof(void*)*2, v_delimitsLocal_2175_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
v___y_2168_ = v___x_2183_;
goto v___jp_2167_;
}
}
else
{
lean_object* v_val_2185_; uint8_t v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2189_; 
v_val_2185_ = lean_ctor_get(v___x_2181_, 0);
lean_inc(v_val_2185_);
lean_dec_ref_known(v___x_2181_, 1);
v___x_2186_ = 1;
v___x_2187_ = l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___redArg(v_ext_2157_, v_val_2185_, v_state_2173_);
lean_dec(v_val_2185_);
if (v_isShared_2178_ == 0)
{
lean_ctor_set(v___x_2177_, 1, v_activeScopes_2180_);
lean_ctor_set(v___x_2177_, 0, v___x_2187_);
v___x_2189_ = v___x_2177_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v___x_2187_);
lean_ctor_set(v_reuseFailAlloc_2190_, 1, v_activeScopes_2180_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
lean_ctor_set_uint8(v___x_2189_, sizeof(void*)*2, v___x_2186_);
v___y_2168_ = v___x_2189_;
goto v___jp_2167_;
}
}
}
else
{
lean_del_object(v___x_2177_);
lean_dec(v_activeScopes_2174_);
lean_dec(v_state_2173_);
lean_del_object(v___x_2165_);
lean_dec(v_tail_2163_);
lean_dec_ref(v_ext_2157_);
lean_dec(v_namespaceName_2156_);
return v_s_2158_;
}
}
}
}
else
{
lean_dec(v_stateStack_2159_);
lean_dec_ref(v_ext_2157_);
lean_dec(v_namespaceName_2156_);
return v_s_2158_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_activateScoped___redArg(lean_object* v_ext_2193_, lean_object* v_env_2194_, lean_object* v_namespaceName_2195_){
_start:
{
lean_object* v_ext_2196_; lean_object* v___f_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v_ext_2196_ = lean_ctor_get(v_ext_2193_, 1);
lean_inc_ref(v_ext_2196_);
v___f_2197_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_activateScoped___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2197_, 0, v_namespaceName_2195_);
lean_closure_set(v___f_2197_, 1, v_ext_2193_);
v___x_2198_ = lean_box(1);
v___x_2199_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3, &l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3);
v___x_2200_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v_ext_2196_, v_env_2194_, v___f_2197_, v___x_2198_, v___x_2199_);
return v___x_2200_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_activateScoped(lean_object* v_00_u03b1_2201_, lean_object* v_00_u03b2_2202_, lean_object* v_00_u03c3_2203_, lean_object* v_ext_2204_, lean_object* v_env_2205_, lean_object* v_namespaceName_2206_){
_start:
{
lean_object* v___x_2207_; 
v___x_2207_ = l_Lean_ScopedEnvExtension_activateScoped___redArg(v_ext_2204_, v_env_2205_, v_namespaceName_2206_);
return v___x_2207_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0(lean_object* v_00_u03b2_2208_, lean_object* v_00_u03c3_2209_, lean_object* v_00_u03b1_2210_, lean_object* v_ext_2211_, lean_object* v_t_2212_, lean_object* v_init_2213_){
_start:
{
lean_object* v___x_2214_; 
v___x_2214_ = l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___redArg(v_ext_2211_, v_t_2212_, v_init_2213_);
return v___x_2214_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___boxed(lean_object* v_00_u03b2_2215_, lean_object* v_00_u03c3_2216_, lean_object* v_00_u03b1_2217_, lean_object* v_ext_2218_, lean_object* v_t_2219_, lean_object* v_init_2220_){
_start:
{
lean_object* v_res_2221_; 
v_res_2221_ = l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0(v_00_u03b2_2215_, v_00_u03c3_2216_, v_00_u03b1_2217_, v_ext_2218_, v_t_2219_, v_init_2220_);
lean_dec_ref(v_t_2219_);
return v_res_2221_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0(lean_object* v_00_u03b2_2222_, lean_object* v_00_u03c3_2223_, lean_object* v_init_2224_, lean_object* v_00_u03b1_2225_, lean_object* v_ext_2226_, lean_object* v_n_2227_, lean_object* v_b_2228_){
_start:
{
lean_object* v___x_2229_; 
v___x_2229_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___redArg(v_init_2224_, v_ext_2226_, v_n_2227_, v_b_2228_);
return v___x_2229_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2230_, lean_object* v_00_u03c3_2231_, lean_object* v_init_2232_, lean_object* v_00_u03b1_2233_, lean_object* v_ext_2234_, lean_object* v_n_2235_, lean_object* v_b_2236_){
_start:
{
lean_object* v_res_2237_; 
v_res_2237_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0(v_00_u03b2_2230_, v_00_u03c3_2231_, v_init_2232_, v_00_u03b1_2233_, v_ext_2234_, v_n_2235_, v_b_2236_);
lean_dec_ref(v_n_2235_);
lean_dec(v_init_2232_);
return v_res_2237_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1(lean_object* v_00_u03b2_2238_, lean_object* v_00_u03c3_2239_, lean_object* v_00_u03b1_2240_, lean_object* v_ext_2241_, lean_object* v_as_2242_, size_t v_sz_2243_, size_t v_i_2244_, lean_object* v_b_2245_){
_start:
{
lean_object* v___x_2246_; 
v___x_2246_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___redArg(v_ext_2241_, v_as_2242_, v_sz_2243_, v_i_2244_, v_b_2245_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2247_, lean_object* v_00_u03c3_2248_, lean_object* v_00_u03b1_2249_, lean_object* v_ext_2250_, lean_object* v_as_2251_, lean_object* v_sz_2252_, lean_object* v_i_2253_, lean_object* v_b_2254_){
_start:
{
size_t v_sz_boxed_2255_; size_t v_i_boxed_2256_; lean_object* v_res_2257_; 
v_sz_boxed_2255_ = lean_unbox_usize(v_sz_2252_);
lean_dec(v_sz_2252_);
v_i_boxed_2256_ = lean_unbox_usize(v_i_2253_);
lean_dec(v_i_2253_);
v_res_2257_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1(v_00_u03b2_2247_, v_00_u03c3_2248_, v_00_u03b1_2249_, v_ext_2250_, v_as_2251_, v_sz_boxed_2255_, v_i_boxed_2256_, v_b_2254_);
lean_dec_ref(v_as_2251_);
return v_res_2257_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2258_, lean_object* v_00_u03c3_2259_, lean_object* v_init_2260_, lean_object* v_00_u03b1_2261_, lean_object* v_ext_2262_, lean_object* v_as_2263_, size_t v_sz_2264_, size_t v_i_2265_, lean_object* v_b_2266_){
_start:
{
lean_object* v___x_2267_; 
v___x_2267_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___redArg(v_init_2260_, v_ext_2262_, v_as_2263_, v_sz_2264_, v_i_2265_, v_b_2266_);
return v___x_2267_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2268_, lean_object* v_00_u03c3_2269_, lean_object* v_init_2270_, lean_object* v_00_u03b1_2271_, lean_object* v_ext_2272_, lean_object* v_as_2273_, lean_object* v_sz_2274_, lean_object* v_i_2275_, lean_object* v_b_2276_){
_start:
{
size_t v_sz_boxed_2277_; size_t v_i_boxed_2278_; lean_object* v_res_2279_; 
v_sz_boxed_2277_ = lean_unbox_usize(v_sz_2274_);
lean_dec(v_sz_2274_);
v_i_boxed_2278_ = lean_unbox_usize(v_i_2275_);
lean_dec(v_i_2275_);
v_res_2279_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1(v_00_u03b2_2268_, v_00_u03c3_2269_, v_init_2270_, v_00_u03b1_2271_, v_ext_2272_, v_as_2273_, v_sz_boxed_2277_, v_i_boxed_2278_, v_b_2276_);
lean_dec_ref(v_as_2273_);
lean_dec(v_init_2270_);
return v_res_2279_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2280_, lean_object* v_00_u03c3_2281_, lean_object* v_00_u03b1_2282_, lean_object* v_ext_2283_, lean_object* v_as_2284_, size_t v_sz_2285_, size_t v_i_2286_, lean_object* v_b_2287_){
_start:
{
lean_object* v___x_2288_; 
v___x_2288_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___redArg(v_ext_2283_, v_as_2284_, v_sz_2285_, v_i_2286_, v_b_2287_);
return v___x_2288_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2289_, lean_object* v_00_u03c3_2290_, lean_object* v_00_u03b1_2291_, lean_object* v_ext_2292_, lean_object* v_as_2293_, lean_object* v_sz_2294_, lean_object* v_i_2295_, lean_object* v_b_2296_){
_start:
{
size_t v_sz_boxed_2297_; size_t v_i_boxed_2298_; lean_object* v_res_2299_; 
v_sz_boxed_2297_ = lean_unbox_usize(v_sz_2294_);
lean_dec(v_sz_2294_);
v_i_boxed_2298_ = lean_unbox_usize(v_i_2295_);
lean_dec(v_i_2295_);
v_res_2299_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2(v_00_u03b2_2289_, v_00_u03c3_2290_, v_00_u03b1_2291_, v_ext_2292_, v_as_2293_, v_sz_boxed_2297_, v_i_boxed_2298_, v_b_2296_);
lean_dec_ref(v_as_2293_);
return v_res_2299_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_2300_, lean_object* v_00_u03c3_2301_, lean_object* v_00_u03b1_2302_, lean_object* v_ext_2303_, lean_object* v_as_2304_, size_t v_sz_2305_, size_t v_i_2306_, lean_object* v_b_2307_){
_start:
{
lean_object* v___x_2308_; 
v___x_2308_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___redArg(v_ext_2303_, v_as_2304_, v_sz_2305_, v_i_2306_, v_b_2307_);
return v___x_2308_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_2309_, lean_object* v_00_u03c3_2310_, lean_object* v_00_u03b1_2311_, lean_object* v_ext_2312_, lean_object* v_as_2313_, lean_object* v_sz_2314_, lean_object* v_i_2315_, lean_object* v_b_2316_){
_start:
{
size_t v_sz_boxed_2317_; size_t v_i_boxed_2318_; lean_object* v_res_2319_; 
v_sz_boxed_2317_ = lean_unbox_usize(v_sz_2314_);
lean_dec(v_sz_2314_);
v_i_boxed_2318_ = lean_unbox_usize(v_i_2315_);
lean_dec(v_i_2315_);
v_res_2319_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4(v_00_u03b2_2309_, v_00_u03c3_2310_, v_00_u03b1_2311_, v_ext_2312_, v_as_2313_, v_sz_boxed_2317_, v_i_boxed_2318_, v_b_2316_);
lean_dec_ref(v_as_2313_);
return v_res_2319_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3(lean_object* v_00_u03b2_2320_, lean_object* v_00_u03c3_2321_, lean_object* v_00_u03b1_2322_, lean_object* v_ext_2323_, lean_object* v_as_2324_, size_t v_sz_2325_, size_t v_i_2326_, lean_object* v_b_2327_){
_start:
{
lean_object* v___x_2328_; 
v___x_2328_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___redArg(v_ext_2323_, v_as_2324_, v_sz_2325_, v_i_2326_, v_b_2327_);
return v___x_2328_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_00_u03b2_2329_, lean_object* v_00_u03c3_2330_, lean_object* v_00_u03b1_2331_, lean_object* v_ext_2332_, lean_object* v_as_2333_, lean_object* v_sz_2334_, lean_object* v_i_2335_, lean_object* v_b_2336_){
_start:
{
size_t v_sz_boxed_2337_; size_t v_i_boxed_2338_; lean_object* v_res_2339_; 
v_sz_boxed_2337_ = lean_unbox_usize(v_sz_2334_);
lean_dec(v_sz_2334_);
v_i_boxed_2338_ = lean_unbox_usize(v_i_2335_);
lean_dec(v_i_2335_);
v_res_2339_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3(v_00_u03b2_2329_, v_00_u03c3_2330_, v_00_u03b1_2331_, v_ext_2332_, v_as_2333_, v_sz_boxed_2337_, v_i_boxed_2338_, v_b_2336_);
lean_dec_ref(v_as_2333_);
return v_res_2339_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg___lam__0(lean_object* v_f_2340_, lean_object* v_s_2341_){
_start:
{
lean_object* v_stateStack_2342_; 
v_stateStack_2342_ = lean_ctor_get(v_s_2341_, 0);
lean_inc(v_stateStack_2342_);
if (lean_obj_tag(v_stateStack_2342_) == 1)
{
lean_object* v_head_2343_; lean_object* v_scopedEntries_2344_; lean_object* v_newEntries_2345_; lean_object* v___x_2347_; uint8_t v_isShared_2348_; uint8_t v_isSharedCheck_2372_; 
v_head_2343_ = lean_ctor_get(v_stateStack_2342_, 0);
lean_inc(v_head_2343_);
v_scopedEntries_2344_ = lean_ctor_get(v_s_2341_, 1);
v_newEntries_2345_ = lean_ctor_get(v_s_2341_, 2);
v_isSharedCheck_2372_ = !lean_is_exclusive(v_s_2341_);
if (v_isSharedCheck_2372_ == 0)
{
lean_object* v_unused_2373_; 
v_unused_2373_ = lean_ctor_get(v_s_2341_, 0);
lean_dec(v_unused_2373_);
v___x_2347_ = v_s_2341_;
v_isShared_2348_ = v_isSharedCheck_2372_;
goto v_resetjp_2346_;
}
else
{
lean_inc(v_newEntries_2345_);
lean_inc(v_scopedEntries_2344_);
lean_dec(v_s_2341_);
v___x_2347_ = lean_box(0);
v_isShared_2348_ = v_isSharedCheck_2372_;
goto v_resetjp_2346_;
}
v_resetjp_2346_:
{
lean_object* v_tail_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2370_; 
v_tail_2349_ = lean_ctor_get(v_stateStack_2342_, 1);
v_isSharedCheck_2370_ = !lean_is_exclusive(v_stateStack_2342_);
if (v_isSharedCheck_2370_ == 0)
{
lean_object* v_unused_2371_; 
v_unused_2371_ = lean_ctor_get(v_stateStack_2342_, 0);
lean_dec(v_unused_2371_);
v___x_2351_ = v_stateStack_2342_;
v_isShared_2352_ = v_isSharedCheck_2370_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_tail_2349_);
lean_dec(v_stateStack_2342_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2370_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v_state_2353_; lean_object* v_activeScopes_2354_; uint8_t v_delimitsLocal_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2369_; 
v_state_2353_ = lean_ctor_get(v_head_2343_, 0);
v_activeScopes_2354_ = lean_ctor_get(v_head_2343_, 1);
v_delimitsLocal_2355_ = lean_ctor_get_uint8(v_head_2343_, sizeof(void*)*2);
v_isSharedCheck_2369_ = !lean_is_exclusive(v_head_2343_);
if (v_isSharedCheck_2369_ == 0)
{
v___x_2357_ = v_head_2343_;
v_isShared_2358_ = v_isSharedCheck_2369_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_activeScopes_2354_);
lean_inc(v_state_2353_);
lean_dec(v_head_2343_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2369_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v___x_2359_; lean_object* v___x_2361_; 
v___x_2359_ = lean_apply_1(v_f_2340_, v_state_2353_);
if (v_isShared_2358_ == 0)
{
lean_ctor_set(v___x_2357_, 0, v___x_2359_);
v___x_2361_ = v___x_2357_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v___x_2359_);
lean_ctor_set(v_reuseFailAlloc_2368_, 1, v_activeScopes_2354_);
lean_ctor_set_uint8(v_reuseFailAlloc_2368_, sizeof(void*)*2, v_delimitsLocal_2355_);
v___x_2361_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
lean_object* v___x_2363_; 
if (v_isShared_2352_ == 0)
{
lean_ctor_set(v___x_2351_, 0, v___x_2361_);
v___x_2363_ = v___x_2351_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v___x_2361_);
lean_ctor_set(v_reuseFailAlloc_2367_, 1, v_tail_2349_);
v___x_2363_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
lean_object* v___x_2365_; 
if (v_isShared_2348_ == 0)
{
lean_ctor_set(v___x_2347_, 0, v___x_2363_);
v___x_2365_ = v___x_2347_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v___x_2363_);
lean_ctor_set(v_reuseFailAlloc_2366_, 1, v_scopedEntries_2344_);
lean_ctor_set(v_reuseFailAlloc_2366_, 2, v_newEntries_2345_);
v___x_2365_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
return v___x_2365_;
}
}
}
}
}
}
}
else
{
lean_dec(v_stateStack_2342_);
lean_dec(v_f_2340_);
return v_s_2341_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg(lean_object* v_ext_2374_, lean_object* v_env_2375_, lean_object* v_f_2376_){
_start:
{
lean_object* v_ext_2377_; lean_object* v_toEnvExtension_2378_; lean_object* v_asyncMode_2379_; lean_object* v___f_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; 
v_ext_2377_ = lean_ctor_get(v_ext_2374_, 1);
lean_inc_ref(v_ext_2377_);
lean_dec_ref(v_ext_2374_);
v_toEnvExtension_2378_ = lean_ctor_get(v_ext_2377_, 0);
v_asyncMode_2379_ = lean_ctor_get(v_toEnvExtension_2378_, 2);
lean_inc(v_asyncMode_2379_);
v___f_2380_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_modifyState___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2380_, 0, v_f_2376_);
v___x_2381_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3, &l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3);
v___x_2382_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v_ext_2377_, v_env_2375_, v___f_2380_, v_asyncMode_2379_, v___x_2381_);
lean_dec(v_asyncMode_2379_);
return v___x_2382_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_modifyState(lean_object* v_00_u03b1_2383_, lean_object* v_00_u03b2_2384_, lean_object* v_00_u03c3_2385_, lean_object* v_ext_2386_, lean_object* v_env_2387_, lean_object* v_f_2388_){
_start:
{
lean_object* v___x_2389_; 
v___x_2389_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_2386_, v_env_2387_, v_f_2388_);
return v___x_2389_;
}
}
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg___lam__0(lean_object* v_toPure_2390_, lean_object* v_____s_2391_){
_start:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; 
v___x_2392_ = lean_box(0);
v___x_2393_ = lean_apply_2(v_toPure_2390_, lean_box(0), v___x_2392_);
return v___x_2393_;
}
}
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg___lam__1(lean_object* v___x_2394_, lean_object* v_toPure_2395_, lean_object* v_r_2396_){
_start:
{
lean_object* v___x_2397_; lean_object* v___x_2398_; 
v___x_2397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2397_, 0, v___x_2394_);
v___x_2398_ = lean_apply_2(v_toPure_2395_, lean_box(0), v___x_2397_);
return v___x_2398_;
}
}
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg___lam__2(lean_object* v_inst_2399_, lean_object* v_toBind_2400_, lean_object* v___f_2401_, lean_object* v_a_2402_, lean_object* v_x_2403_, lean_object* v___y_2404_){
_start:
{
lean_object* v_modifyEnv_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; 
v_modifyEnv_2405_ = lean_ctor_get(v_inst_2399_, 1);
lean_inc(v_modifyEnv_2405_);
lean_dec_ref(v_inst_2399_);
v___x_2406_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_pushScope), 5, 4);
lean_closure_set(v___x_2406_, 0, lean_box(0));
lean_closure_set(v___x_2406_, 1, lean_box(0));
lean_closure_set(v___x_2406_, 2, lean_box(0));
lean_closure_set(v___x_2406_, 3, v_a_2402_);
v___x_2407_ = lean_apply_1(v_modifyEnv_2405_, v___x_2406_);
v___x_2408_ = lean_apply_4(v_toBind_2400_, lean_box(0), lean_box(0), v___x_2407_, v___f_2401_);
return v___x_2408_;
}
}
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg___lam__3(lean_object* v_toPure_2409_, lean_object* v_inst_2410_, lean_object* v_toBind_2411_, lean_object* v_inst_2412_, lean_object* v___f_2413_, lean_object* v_____do__lift_2414_){
_start:
{
lean_object* v___x_2415_; lean_object* v___f_2416_; lean_object* v___f_2417_; size_t v_sz_2418_; size_t v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2415_ = lean_box(0);
v___f_2416_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2416_, 0, v___x_2415_);
lean_closure_set(v___f_2416_, 1, v_toPure_2409_);
lean_inc(v_toBind_2411_);
v___f_2417_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__2), 6, 3);
lean_closure_set(v___f_2417_, 0, v_inst_2410_);
lean_closure_set(v___f_2417_, 1, v_toBind_2411_);
lean_closure_set(v___f_2417_, 2, v___f_2416_);
v_sz_2418_ = lean_array_size(v_____do__lift_2414_);
v___x_2419_ = ((size_t)0ULL);
v___x_2420_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2412_, v_____do__lift_2414_, v___f_2417_, v_sz_2418_, v___x_2419_, v___x_2415_);
v___x_2421_ = lean_apply_4(v_toBind_2411_, lean_box(0), lean_box(0), v___x_2420_, v___f_2413_);
return v___x_2421_;
}
}
static lean_object* _init_l_Lean_pushScope___redArg___closed__0(void){
_start:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; 
v___x_2422_ = l_Lean_scopedEnvExtensionsRef;
v___x_2423_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2423_, 0, lean_box(0));
lean_closure_set(v___x_2423_, 1, lean_box(0));
lean_closure_set(v___x_2423_, 2, v___x_2422_);
return v___x_2423_;
}
}
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg(lean_object* v_inst_2424_, lean_object* v_inst_2425_, lean_object* v_inst_2426_){
_start:
{
lean_object* v_toApplicative_2427_; lean_object* v_toBind_2428_; lean_object* v_toPure_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___f_2432_; lean_object* v___f_2433_; lean_object* v___x_2434_; 
v_toApplicative_2427_ = lean_ctor_get(v_inst_2424_, 0);
v_toBind_2428_ = lean_ctor_get(v_inst_2424_, 1);
lean_inc_n(v_toBind_2428_, 2);
v_toPure_2429_ = lean_ctor_get(v_toApplicative_2427_, 1);
lean_inc_n(v_toPure_2429_, 2);
v___x_2430_ = lean_obj_once(&l_Lean_pushScope___redArg___closed__0, &l_Lean_pushScope___redArg___closed__0_once, _init_l_Lean_pushScope___redArg___closed__0);
v___x_2431_ = lean_apply_2(v_inst_2426_, lean_box(0), v___x_2430_);
v___f_2432_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2432_, 0, v_toPure_2429_);
v___f_2433_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__3), 6, 5);
lean_closure_set(v___f_2433_, 0, v_toPure_2429_);
lean_closure_set(v___f_2433_, 1, v_inst_2425_);
lean_closure_set(v___f_2433_, 2, v_toBind_2428_);
lean_closure_set(v___f_2433_, 3, v_inst_2424_);
lean_closure_set(v___f_2433_, 4, v___f_2432_);
v___x_2434_ = lean_apply_4(v_toBind_2428_, lean_box(0), lean_box(0), v___x_2431_, v___f_2433_);
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l_Lean_pushScope(lean_object* v_m_2435_, lean_object* v_inst_2436_, lean_object* v_inst_2437_, lean_object* v_inst_2438_){
_start:
{
lean_object* v___x_2439_; 
v___x_2439_ = l_Lean_pushScope___redArg(v_inst_2436_, v_inst_2437_, v_inst_2438_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_popScope___redArg___lam__2(lean_object* v_inst_2440_, lean_object* v_toBind_2441_, lean_object* v___f_2442_, lean_object* v_a_2443_, lean_object* v_x_2444_, lean_object* v___y_2445_){
_start:
{
lean_object* v_modifyEnv_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
v_modifyEnv_2446_ = lean_ctor_get(v_inst_2440_, 1);
lean_inc(v_modifyEnv_2446_);
lean_dec_ref(v_inst_2440_);
v___x_2447_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_popScope), 5, 4);
lean_closure_set(v___x_2447_, 0, lean_box(0));
lean_closure_set(v___x_2447_, 1, lean_box(0));
lean_closure_set(v___x_2447_, 2, lean_box(0));
lean_closure_set(v___x_2447_, 3, v_a_2443_);
v___x_2448_ = lean_apply_1(v_modifyEnv_2446_, v___x_2447_);
v___x_2449_ = lean_apply_4(v_toBind_2441_, lean_box(0), lean_box(0), v___x_2448_, v___f_2442_);
return v___x_2449_;
}
}
LEAN_EXPORT lean_object* l_Lean_popScope___redArg___lam__0(lean_object* v_toPure_2450_, lean_object* v_inst_2451_, lean_object* v_toBind_2452_, lean_object* v_inst_2453_, lean_object* v___f_2454_, lean_object* v_____do__lift_2455_){
_start:
{
lean_object* v___x_2456_; lean_object* v___f_2457_; lean_object* v___f_2458_; size_t v_sz_2459_; size_t v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2456_ = lean_box(0);
v___f_2457_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2457_, 0, v___x_2456_);
lean_closure_set(v___f_2457_, 1, v_toPure_2450_);
lean_inc(v_toBind_2452_);
v___f_2458_ = lean_alloc_closure((void*)(l_Lean_popScope___redArg___lam__2), 6, 3);
lean_closure_set(v___f_2458_, 0, v_inst_2451_);
lean_closure_set(v___f_2458_, 1, v_toBind_2452_);
lean_closure_set(v___f_2458_, 2, v___f_2457_);
v_sz_2459_ = lean_array_size(v_____do__lift_2455_);
v___x_2460_ = ((size_t)0ULL);
v___x_2461_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2453_, v_____do__lift_2455_, v___f_2458_, v_sz_2459_, v___x_2460_, v___x_2456_);
v___x_2462_ = lean_apply_4(v_toBind_2452_, lean_box(0), lean_box(0), v___x_2461_, v___f_2454_);
return v___x_2462_;
}
}
LEAN_EXPORT lean_object* l_Lean_popScope___redArg(lean_object* v_inst_2463_, lean_object* v_inst_2464_, lean_object* v_inst_2465_){
_start:
{
lean_object* v_toApplicative_2466_; lean_object* v_toBind_2467_; lean_object* v_toPure_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___f_2471_; lean_object* v___f_2472_; lean_object* v___x_2473_; 
v_toApplicative_2466_ = lean_ctor_get(v_inst_2463_, 0);
v_toBind_2467_ = lean_ctor_get(v_inst_2463_, 1);
lean_inc_n(v_toBind_2467_, 2);
v_toPure_2468_ = lean_ctor_get(v_toApplicative_2466_, 1);
lean_inc_n(v_toPure_2468_, 2);
v___x_2469_ = lean_obj_once(&l_Lean_pushScope___redArg___closed__0, &l_Lean_pushScope___redArg___closed__0_once, _init_l_Lean_pushScope___redArg___closed__0);
v___x_2470_ = lean_apply_2(v_inst_2465_, lean_box(0), v___x_2469_);
v___f_2471_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2471_, 0, v_toPure_2468_);
v___f_2472_ = lean_alloc_closure((void*)(l_Lean_popScope___redArg___lam__0), 6, 5);
lean_closure_set(v___f_2472_, 0, v_toPure_2468_);
lean_closure_set(v___f_2472_, 1, v_inst_2464_);
lean_closure_set(v___f_2472_, 2, v_toBind_2467_);
lean_closure_set(v___f_2472_, 3, v_inst_2463_);
lean_closure_set(v___f_2472_, 4, v___f_2471_);
v___x_2473_ = lean_apply_4(v_toBind_2467_, lean_box(0), lean_box(0), v___x_2470_, v___f_2472_);
return v___x_2473_;
}
}
LEAN_EXPORT lean_object* l_Lean_popScope(lean_object* v_m_2474_, lean_object* v_inst_2475_, lean_object* v_inst_2476_, lean_object* v_inst_2477_){
_start:
{
lean_object* v___x_2478_; 
v___x_2478_ = l_Lean_popScope___redArg(v_inst_2475_, v_inst_2476_, v_inst_2477_);
return v___x_2478_;
}
}
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal___redArg___lam__2(lean_object* v_a_2479_, lean_object* v_depth_2480_, lean_object* v_x_2481_){
_start:
{
lean_object* v___x_2482_; 
v___x_2482_ = l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg(v_a_2479_, v_x_2481_, v_depth_2480_);
return v___x_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal___redArg___lam__0(lean_object* v_inst_2483_, lean_object* v_depth_2484_, lean_object* v_toBind_2485_, lean_object* v___f_2486_, lean_object* v_a_2487_, lean_object* v_x_2488_, lean_object* v___y_2489_){
_start:
{
lean_object* v_modifyEnv_2490_; lean_object* v___f_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; 
v_modifyEnv_2490_ = lean_ctor_get(v_inst_2483_, 1);
lean_inc(v_modifyEnv_2490_);
lean_dec_ref(v_inst_2483_);
v___f_2491_ = lean_alloc_closure((void*)(l_Lean_setDelimitsLocal___redArg___lam__2), 3, 2);
lean_closure_set(v___f_2491_, 0, v_a_2487_);
lean_closure_set(v___f_2491_, 1, v_depth_2484_);
v___x_2492_ = lean_apply_1(v_modifyEnv_2490_, v___f_2491_);
v___x_2493_ = lean_apply_4(v_toBind_2485_, lean_box(0), lean_box(0), v___x_2492_, v___f_2486_);
return v___x_2493_;
}
}
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal___redArg___lam__1(lean_object* v_toPure_2494_, lean_object* v_inst_2495_, lean_object* v_depth_2496_, lean_object* v_toBind_2497_, lean_object* v_inst_2498_, lean_object* v___f_2499_, lean_object* v_____do__lift_2500_){
_start:
{
lean_object* v___x_2501_; lean_object* v___f_2502_; lean_object* v___f_2503_; size_t v_sz_2504_; size_t v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; 
v___x_2501_ = lean_box(0);
v___f_2502_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2502_, 0, v___x_2501_);
lean_closure_set(v___f_2502_, 1, v_toPure_2494_);
lean_inc(v_toBind_2497_);
v___f_2503_ = lean_alloc_closure((void*)(l_Lean_setDelimitsLocal___redArg___lam__0), 7, 4);
lean_closure_set(v___f_2503_, 0, v_inst_2495_);
lean_closure_set(v___f_2503_, 1, v_depth_2496_);
lean_closure_set(v___f_2503_, 2, v_toBind_2497_);
lean_closure_set(v___f_2503_, 3, v___f_2502_);
v_sz_2504_ = lean_array_size(v_____do__lift_2500_);
v___x_2505_ = ((size_t)0ULL);
v___x_2506_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2498_, v_____do__lift_2500_, v___f_2503_, v_sz_2504_, v___x_2505_, v___x_2501_);
v___x_2507_ = lean_apply_4(v_toBind_2497_, lean_box(0), lean_box(0), v___x_2506_, v___f_2499_);
return v___x_2507_;
}
}
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal___redArg(lean_object* v_inst_2508_, lean_object* v_inst_2509_, lean_object* v_inst_2510_, lean_object* v_depth_2511_){
_start:
{
lean_object* v_toApplicative_2512_; lean_object* v_toBind_2513_; lean_object* v_toPure_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___f_2517_; lean_object* v___f_2518_; lean_object* v___x_2519_; 
v_toApplicative_2512_ = lean_ctor_get(v_inst_2508_, 0);
v_toBind_2513_ = lean_ctor_get(v_inst_2508_, 1);
lean_inc_n(v_toBind_2513_, 2);
v_toPure_2514_ = lean_ctor_get(v_toApplicative_2512_, 1);
lean_inc_n(v_toPure_2514_, 2);
v___x_2515_ = lean_obj_once(&l_Lean_pushScope___redArg___closed__0, &l_Lean_pushScope___redArg___closed__0_once, _init_l_Lean_pushScope___redArg___closed__0);
v___x_2516_ = lean_apply_2(v_inst_2510_, lean_box(0), v___x_2515_);
v___f_2517_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2517_, 0, v_toPure_2514_);
v___f_2518_ = lean_alloc_closure((void*)(l_Lean_setDelimitsLocal___redArg___lam__1), 7, 6);
lean_closure_set(v___f_2518_, 0, v_toPure_2514_);
lean_closure_set(v___f_2518_, 1, v_inst_2509_);
lean_closure_set(v___f_2518_, 2, v_depth_2511_);
lean_closure_set(v___f_2518_, 3, v_toBind_2513_);
lean_closure_set(v___f_2518_, 4, v_inst_2508_);
lean_closure_set(v___f_2518_, 5, v___f_2517_);
v___x_2519_ = lean_apply_4(v_toBind_2513_, lean_box(0), lean_box(0), v___x_2516_, v___f_2518_);
return v___x_2519_;
}
}
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal(lean_object* v_m_2520_, lean_object* v_inst_2521_, lean_object* v_inst_2522_, lean_object* v_inst_2523_, lean_object* v_depth_2524_){
_start:
{
lean_object* v___x_2525_; 
v___x_2525_ = l_Lean_setDelimitsLocal___redArg(v_inst_2521_, v_inst_2522_, v_inst_2523_, v_depth_2524_);
return v___x_2525_;
}
}
LEAN_EXPORT lean_object* l_Lean_activateScoped___redArg___lam__2(lean_object* v_a_2526_, lean_object* v_namespaceName_2527_, lean_object* v_x_2528_){
_start:
{
lean_object* v___x_2529_; 
v___x_2529_ = l_Lean_ScopedEnvExtension_activateScoped___redArg(v_a_2526_, v_x_2528_, v_namespaceName_2527_);
return v___x_2529_;
}
}
LEAN_EXPORT lean_object* l_Lean_activateScoped___redArg___lam__0(lean_object* v_inst_2530_, lean_object* v_namespaceName_2531_, lean_object* v_toBind_2532_, lean_object* v___f_2533_, lean_object* v_a_2534_, lean_object* v_x_2535_, lean_object* v___y_2536_){
_start:
{
lean_object* v_modifyEnv_2537_; lean_object* v___f_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; 
v_modifyEnv_2537_ = lean_ctor_get(v_inst_2530_, 1);
lean_inc(v_modifyEnv_2537_);
lean_dec_ref(v_inst_2530_);
v___f_2538_ = lean_alloc_closure((void*)(l_Lean_activateScoped___redArg___lam__2), 3, 2);
lean_closure_set(v___f_2538_, 0, v_a_2534_);
lean_closure_set(v___f_2538_, 1, v_namespaceName_2531_);
v___x_2539_ = lean_apply_1(v_modifyEnv_2537_, v___f_2538_);
v___x_2540_ = lean_apply_4(v_toBind_2532_, lean_box(0), lean_box(0), v___x_2539_, v___f_2533_);
return v___x_2540_;
}
}
LEAN_EXPORT lean_object* l_Lean_activateScoped___redArg___lam__1(lean_object* v_toPure_2541_, lean_object* v_inst_2542_, lean_object* v_namespaceName_2543_, lean_object* v_toBind_2544_, lean_object* v_inst_2545_, lean_object* v___f_2546_, lean_object* v_____do__lift_2547_){
_start:
{
lean_object* v___x_2548_; lean_object* v___f_2549_; lean_object* v___f_2550_; size_t v_sz_2551_; size_t v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; 
v___x_2548_ = lean_box(0);
v___f_2549_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2549_, 0, v___x_2548_);
lean_closure_set(v___f_2549_, 1, v_toPure_2541_);
lean_inc(v_toBind_2544_);
v___f_2550_ = lean_alloc_closure((void*)(l_Lean_activateScoped___redArg___lam__0), 7, 4);
lean_closure_set(v___f_2550_, 0, v_inst_2542_);
lean_closure_set(v___f_2550_, 1, v_namespaceName_2543_);
lean_closure_set(v___f_2550_, 2, v_toBind_2544_);
lean_closure_set(v___f_2550_, 3, v___f_2549_);
v_sz_2551_ = lean_array_size(v_____do__lift_2547_);
v___x_2552_ = ((size_t)0ULL);
v___x_2553_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2545_, v_____do__lift_2547_, v___f_2550_, v_sz_2551_, v___x_2552_, v___x_2548_);
v___x_2554_ = lean_apply_4(v_toBind_2544_, lean_box(0), lean_box(0), v___x_2553_, v___f_2546_);
return v___x_2554_;
}
}
LEAN_EXPORT lean_object* l_Lean_activateScoped___redArg(lean_object* v_inst_2555_, lean_object* v_inst_2556_, lean_object* v_inst_2557_, lean_object* v_namespaceName_2558_){
_start:
{
lean_object* v_toApplicative_2559_; lean_object* v_toBind_2560_; lean_object* v_toPure_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___f_2564_; lean_object* v___f_2565_; lean_object* v___x_2566_; 
v_toApplicative_2559_ = lean_ctor_get(v_inst_2555_, 0);
v_toBind_2560_ = lean_ctor_get(v_inst_2555_, 1);
lean_inc_n(v_toBind_2560_, 2);
v_toPure_2561_ = lean_ctor_get(v_toApplicative_2559_, 1);
lean_inc_n(v_toPure_2561_, 2);
v___x_2562_ = lean_obj_once(&l_Lean_pushScope___redArg___closed__0, &l_Lean_pushScope___redArg___closed__0_once, _init_l_Lean_pushScope___redArg___closed__0);
v___x_2563_ = lean_apply_2(v_inst_2557_, lean_box(0), v___x_2562_);
v___f_2564_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2564_, 0, v_toPure_2561_);
v___f_2565_ = lean_alloc_closure((void*)(l_Lean_activateScoped___redArg___lam__1), 7, 6);
lean_closure_set(v___f_2565_, 0, v_toPure_2561_);
lean_closure_set(v___f_2565_, 1, v_inst_2556_);
lean_closure_set(v___f_2565_, 2, v_namespaceName_2558_);
lean_closure_set(v___f_2565_, 3, v_toBind_2560_);
lean_closure_set(v___f_2565_, 4, v_inst_2555_);
lean_closure_set(v___f_2565_, 5, v___f_2564_);
v___x_2566_ = lean_apply_4(v_toBind_2560_, lean_box(0), lean_box(0), v___x_2563_, v___f_2565_);
return v___x_2566_;
}
}
LEAN_EXPORT lean_object* l_Lean_activateScoped(lean_object* v_m_2567_, lean_object* v_inst_2568_, lean_object* v_inst_2569_, lean_object* v_inst_2570_, lean_object* v_namespaceName_2571_){
_start:
{
lean_object* v___x_2572_; 
v___x_2572_ = l_Lean_activateScoped___redArg(v_inst_2568_, v_inst_2569_, v_inst_2570_, v_namespaceName_2571_);
return v___x_2572_;
}
}
static lean_object* _init_l_Lean_SimpleScopedEnvExtension_Descr_name___autoParam(void){
_start:
{
lean_object* v___x_2573_; 
v___x_2573_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28);
return v___x_2573_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__0(lean_object* v___y_2574_){
_start:
{
lean_inc(v___y_2574_);
return v___y_2574_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__0___boxed(lean_object* v___y_2575_){
_start:
{
lean_object* v_res_2576_; 
v_res_2576_ = l_Lean_registerSimpleScopedEnvExtension___redArg___lam__0(v___y_2575_);
lean_dec(v___y_2575_);
return v_res_2576_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__1(lean_object* v_x_2577_, lean_object* v_a_2578_, lean_object* v___y_2579_){
_start:
{
lean_object* v___x_2581_; 
v___x_2581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2581_, 0, v_a_2578_);
return v___x_2581_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__1___boxed(lean_object* v_x_2582_, lean_object* v_a_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_){
_start:
{
lean_object* v_res_2586_; 
v_res_2586_ = l_Lean_registerSimpleScopedEnvExtension___redArg___lam__1(v_x_2582_, v_a_2583_, v___y_2584_);
lean_dec_ref(v___y_2584_);
lean_dec(v_x_2582_);
return v_res_2586_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__2(lean_object* v_initial_2587_){
_start:
{
lean_object* v___x_2589_; 
v___x_2589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2589_, 0, v_initial_2587_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__2___boxed(lean_object* v_initial_2590_, lean_object* v___y_2591_){
_start:
{
lean_object* v_res_2592_; 
v_res_2592_ = l_Lean_registerSimpleScopedEnvExtension___redArg___lam__2(v_initial_2590_);
return v_res_2592_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object* v_descr_2595_){
_start:
{
lean_object* v_name_2597_; lean_object* v_addEntry_2598_; lean_object* v_initial_2599_; lean_object* v_finalizeImport_2600_; lean_object* v_exportEntry_x3f_2601_; lean_object* v___f_2602_; lean_object* v___f_2603_; lean_object* v___f_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; 
v_name_2597_ = lean_ctor_get(v_descr_2595_, 0);
lean_inc(v_name_2597_);
v_addEntry_2598_ = lean_ctor_get(v_descr_2595_, 1);
lean_inc(v_addEntry_2598_);
v_initial_2599_ = lean_ctor_get(v_descr_2595_, 2);
lean_inc(v_initial_2599_);
v_finalizeImport_2600_ = lean_ctor_get(v_descr_2595_, 3);
lean_inc(v_finalizeImport_2600_);
v_exportEntry_x3f_2601_ = lean_ctor_get(v_descr_2595_, 4);
lean_inc_ref(v_exportEntry_x3f_2601_);
lean_dec_ref(v_descr_2595_);
v___f_2602_ = ((lean_object*)(l_Lean_registerSimpleScopedEnvExtension___redArg___closed__0));
v___f_2603_ = ((lean_object*)(l_Lean_registerSimpleScopedEnvExtension___redArg___closed__1));
v___f_2604_ = lean_alloc_closure((void*)(l_Lean_registerSimpleScopedEnvExtension___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_2604_, 0, v_initial_2599_);
v___x_2605_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_2605_, 0, v_name_2597_);
lean_ctor_set(v___x_2605_, 1, v___f_2604_);
lean_ctor_set(v___x_2605_, 2, v___f_2603_);
lean_ctor_set(v___x_2605_, 3, v___f_2602_);
lean_ctor_set(v___x_2605_, 4, v_addEntry_2598_);
lean_ctor_set(v___x_2605_, 5, v_finalizeImport_2600_);
lean_ctor_set(v___x_2605_, 6, v_exportEntry_x3f_2601_);
v___x_2606_ = l_Lean_registerScopedEnvExtensionUnsafe___redArg(v___x_2605_);
return v___x_2606_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___boxed(lean_object* v_descr_2607_, lean_object* v_a_2608_){
_start:
{
lean_object* v_res_2609_; 
v_res_2609_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v_descr_2607_);
return v_res_2609_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension(lean_object* v_00_u03b1_2610_, lean_object* v_00_u03c3_2611_, lean_object* v_descr_2612_){
_start:
{
lean_object* v___x_2614_; 
v___x_2614_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v_descr_2612_);
return v___x_2614_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___boxed(lean_object* v_00_u03b1_2615_, lean_object* v_00_u03c3_2616_, lean_object* v_descr_2617_, lean_object* v_a_2618_){
_start:
{
lean_object* v_res_2619_; 
v_res_2619_ = l_Lean_registerSimpleScopedEnvExtension(v_00_u03b1_2615_, v_00_u03c3_2616_, v_descr_2617_);
return v_res_2619_;
}
}
lean_object* runtime_initialize_Lean_Attributes(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ScopedEnvExtension(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Attributes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ScopedEnvExtension_0__Lean_initFn_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_scopedEnvExtensionsRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_scopedEnvExtensionsRef);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ScopedEnvExtension(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_ScopedEnvExtension_Descr_name___autoParam = _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam();
lean_mark_persistent(l_Lean_ScopedEnvExtension_Descr_name___autoParam);
l_Lean_SimpleScopedEnvExtension_Descr_name___autoParam = _init_l_Lean_SimpleScopedEnvExtension_Descr_name___autoParam();
lean_mark_persistent(l_Lean_SimpleScopedEnvExtension_Descr_name___autoParam);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Attributes(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ScopedEnvExtension(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Attributes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ScopedEnvExtension(builtin);
}
#ifdef __cplusplus
}
#endif

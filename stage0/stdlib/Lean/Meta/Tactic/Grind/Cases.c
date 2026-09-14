// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Cases
// Imports: public import Lean.Meta.Tactic.Cases public import Lean.Meta.Tactic.Grind.Extension
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_NameSet_ofList(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedName;
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_mkCasesOnName(lean_object*);
lean_object* l_Lean_Meta_mkRecursorInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_RecursorInfo_numIndices(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* lean_local_ctx_num_indices(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_mkRecursorAppPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_setKind(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_RecursorInfo_numMinors(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assertExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Meta_generalizeIndices_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isInductivePredicate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedCasesEntry_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedCasesEntry_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedCasesEntry_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedCasesEntry_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedCasesEntry_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedCasesEntry;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Exists"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__2_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__4_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__6_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__8_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Empty"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__10_value),LEAN_SCALAR_PTR_LITERAL(145, 208, 51, 224, 197, 14, 63, 134)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__9_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__12_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__7_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__13_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__14_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__5_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__14_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__3_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__15_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__16_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__1_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__16_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__17_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__18;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isBuiltinEagerCases(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isBuiltinEagerCases___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_CasesTypes_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_erase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_erase___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_find_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_find_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_CasesTypes_isEagerSplit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_isEagerSplit___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_CasesTypes_isSplit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_isSplit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive_x3f___at___00Lean_Meta_Grind_isCasesAttrCandidate_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive_x3f___at___00Lean_Meta_Grind_isCasesAttrCandidate_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive_x3f___at___00Lean_Meta_Grind_isCasesAttrCandidate_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive_x3f___at___00Lean_Meta_Grind_isCasesAttrCandidate_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_validateCasesAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "invalid `[grind cases]`, `"};
static const lean_object* l_Lean_Meta_Grind_validateCasesAttr___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_validateCasesAttr___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_validateCasesAttr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_validateCasesAttr___closed__1;
static const lean_string_object l_Lean_Meta_Grind_validateCasesAttr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "` is not an inductive datatype or an alias for one"};
static const lean_object* l_Lean_Meta_Grind_validateCasesAttr___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_validateCasesAttr___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_validateCasesAttr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_validateCasesAttr___closed__3;
static const lean_string_object l_Lean_Meta_Grind_validateCasesAttr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "invalid `[grind cases eager]`, `"};
static const lean_object* l_Lean_Meta_Grind_validateCasesAttr___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_validateCasesAttr___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_validateCasesAttr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_validateCasesAttr___closed__5;
static const lean_string_object l_Lean_Meta_Grind_validateCasesAttr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "` is not a non-recursive inductive datatype or an alias for one"};
static const lean_object* l_Lean_Meta_Grind_validateCasesAttr___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_validateCasesAttr___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_validateCasesAttr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_validateCasesAttr___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateCasesAttr(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateCasesAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_eraseDecl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_eraseDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__1;
static const lean_string_object l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "` is marked as a built-in case-split for `grind` and cannot be erased"};
static const lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_isSimpleFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_isSimpleFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "cases"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(168, 230, 231, 67, 23, 65, 31, 221)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "(non-recursive) inductive type expected at "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_cases_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_cases_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_cases_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_cases_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_cases_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_cases_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__10_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__10___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__11___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "unexpected recursor type"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__0_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__1_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__2;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__3;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_cases_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_cases_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Grind_cases___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Grind_cases___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_cases___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_cases___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_cases___lam__0___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_cases___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_cases___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_cases___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Meta_Grind_cases___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_cases___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_cases___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_cases___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Meta_Grind_cases___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_cases___lam__1___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_cases___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Meta_Grind_cases___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_cases___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_cases___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_cases___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Meta_Grind_cases___lam__1___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_cases___lam__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__11(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__10_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedCasesEntry_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_unsafeCast___redArg(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedCasesEntry_default___closed__1(void){
_start:
{
uint8_t v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = 0;
v___x_4_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedCasesEntry_default___closed__0, &l_Lean_Meta_Grind_instInhabitedCasesEntry_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedCasesEntry_default___closed__0);
v___x_5_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5_, 0, v___x_4_);
lean_ctor_set_uint8(v___x_5_, sizeof(void*)*1, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedCasesEntry_default(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedCasesEntry_default___closed__1, &l_Lean_Meta_Grind_instInhabitedCasesEntry_default___closed__1_once, _init_l_Lean_Meta_Grind_instInhabitedCasesEntry_default___closed__1);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedCasesEntry(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l_Lean_Meta_Grind_instInhabitedCasesEntry_default;
return v___x_7_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__18(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__17));
v___x_45_ = l_Lean_NameSet_ofList(v___x_44_);
return v___x_45_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__18, &l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__18_once, _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__18);
return v___x_46_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isBuiltinEagerCases(lean_object* v_declName_47_){
_start:
{
lean_object* v___x_48_; uint8_t v___x_49_; 
v___x_48_ = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases;
v___x_49_ = l_Lean_NameSet_contains(v___x_48_, v_declName_47_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isBuiltinEagerCases___boxed(lean_object* v_declName_50_){
_start:
{
uint8_t v_res_51_; lean_object* v_r_52_; 
v_res_51_ = l_Lean_Meta_Grind_isBuiltinEagerCases(v_declName_50_);
lean_dec(v_declName_50_);
v_r_52_ = lean_box(v_res_51_);
return v_r_52_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_53_, lean_object* v_i_54_, lean_object* v_k_55_){
_start:
{
lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_56_ = lean_array_get_size(v_keys_53_);
v___x_57_ = lean_nat_dec_lt(v_i_54_, v___x_56_);
if (v___x_57_ == 0)
{
lean_dec(v_i_54_);
return v___x_57_;
}
else
{
lean_object* v_k_x27_58_; uint8_t v___x_59_; 
v_k_x27_58_ = lean_array_fget_borrowed(v_keys_53_, v_i_54_);
v___x_59_ = lean_name_eq(v_k_55_, v_k_x27_58_);
if (v___x_59_ == 0)
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_unsigned_to_nat(1u);
v___x_61_ = lean_nat_add(v_i_54_, v___x_60_);
lean_dec(v_i_54_);
v_i_54_ = v___x_61_;
goto _start;
}
else
{
lean_dec(v_i_54_);
return v___x_57_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_63_, lean_object* v_i_64_, lean_object* v_k_65_){
_start:
{
uint8_t v_res_66_; lean_object* v_r_67_; 
v_res_66_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0_spec__1___redArg(v_keys_63_, v_i_64_, v_k_65_);
lean_dec(v_k_65_);
lean_dec_ref(v_keys_63_);
v_r_67_ = lean_box(v_res_66_);
return v_r_67_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0___redArg(lean_object* v_x_68_, size_t v_x_69_, lean_object* v_x_70_){
_start:
{
if (lean_obj_tag(v_x_68_) == 0)
{
lean_object* v_es_71_; lean_object* v___x_72_; size_t v___x_73_; size_t v___x_74_; lean_object* v_j_75_; lean_object* v___x_76_; 
v_es_71_ = lean_ctor_get(v_x_68_, 0);
v___x_72_ = lean_box(2);
v___x_73_ = ((size_t)31ULL);
v___x_74_ = lean_usize_land(v_x_69_, v___x_73_);
v_j_75_ = lean_usize_to_nat(v___x_74_);
v___x_76_ = lean_array_get_borrowed(v___x_72_, v_es_71_, v_j_75_);
lean_dec(v_j_75_);
switch(lean_obj_tag(v___x_76_))
{
case 0:
{
lean_object* v_key_77_; uint8_t v___x_78_; 
v_key_77_ = lean_ctor_get(v___x_76_, 0);
v___x_78_ = lean_name_eq(v_x_70_, v_key_77_);
return v___x_78_;
}
case 1:
{
lean_object* v_node_79_; size_t v___x_80_; size_t v___x_81_; 
v_node_79_ = lean_ctor_get(v___x_76_, 0);
v___x_80_ = ((size_t)5ULL);
v___x_81_ = lean_usize_shift_right(v_x_69_, v___x_80_);
v_x_68_ = v_node_79_;
v_x_69_ = v___x_81_;
goto _start;
}
default: 
{
uint8_t v___x_83_; 
v___x_83_ = 0;
return v___x_83_;
}
}
}
else
{
lean_object* v_ks_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v_ks_84_ = lean_ctor_get(v_x_68_, 0);
v___x_85_ = lean_unsigned_to_nat(0u);
v___x_86_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0_spec__1___redArg(v_ks_84_, v___x_85_, v_x_70_);
return v___x_86_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0___redArg___boxed(lean_object* v_x_87_, lean_object* v_x_88_, lean_object* v_x_89_){
_start:
{
size_t v_x_123__boxed_90_; uint8_t v_res_91_; lean_object* v_r_92_; 
v_x_123__boxed_90_ = lean_unbox_usize(v_x_88_);
lean_dec(v_x_88_);
v_res_91_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0___redArg(v_x_87_, v_x_123__boxed_90_, v_x_89_);
lean_dec(v_x_89_);
lean_dec_ref(v_x_87_);
v_r_92_ = lean_box(v_res_91_);
return v_r_92_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0___redArg(lean_object* v_x_93_, lean_object* v_x_94_){
_start:
{
uint64_t v___y_96_; lean_object* v___x_99_; 
v___x_99_ = l_unsafeCast___redArg(v_x_94_);
if (lean_obj_tag(v___x_99_) == 0)
{
uint64_t v___x_100_; 
v___x_100_ = 1723ULL;
v___y_96_ = v___x_100_;
goto v___jp_95_;
}
else
{
uint64_t v_hash_101_; 
v_hash_101_ = lean_ctor_get_uint64(v___x_99_, sizeof(void*)*2);
lean_dec(v___x_99_);
v___y_96_ = v_hash_101_;
goto v___jp_95_;
}
v___jp_95_:
{
size_t v___x_97_; uint8_t v___x_98_; 
v___x_97_ = lean_uint64_to_usize(v___y_96_);
v___x_98_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0___redArg(v_x_93_, v___x_97_, v_x_94_);
return v___x_98_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0___redArg___boxed(lean_object* v_x_102_, lean_object* v_x_103_){
_start:
{
uint8_t v_res_104_; lean_object* v_r_105_; 
v_res_104_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0___redArg(v_x_102_, v_x_103_);
lean_dec(v_x_103_);
lean_dec_ref(v_x_102_);
v_r_105_ = lean_box(v_res_104_);
return v_r_105_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_CasesTypes_contains(lean_object* v_s_106_, lean_object* v_declName_107_){
_start:
{
uint8_t v___x_108_; 
v___x_108_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0___redArg(v_s_106_, v_declName_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_contains___boxed(lean_object* v_s_109_, lean_object* v_declName_110_){
_start:
{
uint8_t v_res_111_; lean_object* v_r_112_; 
v_res_111_ = l_Lean_Meta_Grind_CasesTypes_contains(v_s_109_, v_declName_110_);
lean_dec(v_declName_110_);
lean_dec_ref(v_s_109_);
v_r_112_ = lean_box(v_res_111_);
return v_r_112_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0(lean_object* v_00_u03b2_113_, lean_object* v_x_114_, lean_object* v_x_115_){
_start:
{
uint8_t v___x_116_; 
v___x_116_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0___redArg(v_x_114_, v_x_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0___boxed(lean_object* v_00_u03b2_117_, lean_object* v_x_118_, lean_object* v_x_119_){
_start:
{
uint8_t v_res_120_; lean_object* v_r_121_; 
v_res_120_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0(v_00_u03b2_117_, v_x_118_, v_x_119_);
lean_dec(v_x_119_);
lean_dec_ref(v_x_118_);
v_r_121_ = lean_box(v_res_120_);
return v_r_121_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0(lean_object* v_00_u03b2_122_, lean_object* v_x_123_, size_t v_x_124_, lean_object* v_x_125_){
_start:
{
uint8_t v___x_126_; 
v___x_126_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0___redArg(v_x_123_, v_x_124_, v_x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0___boxed(lean_object* v_00_u03b2_127_, lean_object* v_x_128_, lean_object* v_x_129_, lean_object* v_x_130_){
_start:
{
size_t v_x_192__boxed_131_; uint8_t v_res_132_; lean_object* v_r_133_; 
v_x_192__boxed_131_ = lean_unbox_usize(v_x_129_);
lean_dec(v_x_129_);
v_res_132_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0(v_00_u03b2_127_, v_x_128_, v_x_192__boxed_131_, v_x_130_);
lean_dec(v_x_130_);
lean_dec_ref(v_x_128_);
v_r_133_ = lean_box(v_res_132_);
return v_r_133_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_134_, lean_object* v_keys_135_, lean_object* v_vals_136_, lean_object* v_heq_137_, lean_object* v_i_138_, lean_object* v_k_139_){
_start:
{
uint8_t v___x_140_; 
v___x_140_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0_spec__1___redArg(v_keys_135_, v_i_138_, v_k_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_141_, lean_object* v_keys_142_, lean_object* v_vals_143_, lean_object* v_heq_144_, lean_object* v_i_145_, lean_object* v_k_146_){
_start:
{
uint8_t v_res_147_; lean_object* v_r_148_; 
v_res_147_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0_spec__0_spec__1(v_00_u03b2_141_, v_keys_142_, v_vals_143_, v_heq_144_, v_i_145_, v_k_146_);
lean_dec(v_k_146_);
lean_dec_ref(v_vals_143_);
lean_dec_ref(v_keys_142_);
v_r_148_ = lean_box(v_res_147_);
return v_r_148_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0_spec__1_spec__2(lean_object* v_xs_149_, lean_object* v_v_150_, lean_object* v_i_151_){
_start:
{
lean_object* v___x_152_; uint8_t v___x_153_; 
v___x_152_ = lean_array_get_size(v_xs_149_);
v___x_153_ = lean_nat_dec_lt(v_i_151_, v___x_152_);
if (v___x_153_ == 0)
{
lean_object* v___x_154_; 
lean_dec(v_i_151_);
v___x_154_ = lean_box(0);
return v___x_154_;
}
else
{
lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_155_ = lean_array_fget_borrowed(v_xs_149_, v_i_151_);
v___x_156_ = lean_name_eq(v___x_155_, v_v_150_);
if (v___x_156_ == 0)
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = lean_unsigned_to_nat(1u);
v___x_158_ = lean_nat_add(v_i_151_, v___x_157_);
lean_dec(v_i_151_);
v_i_151_ = v___x_158_;
goto _start;
}
else
{
lean_object* v___x_160_; 
v___x_160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_160_, 0, v_i_151_);
return v___x_160_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_xs_161_, lean_object* v_v_162_, lean_object* v_i_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0_spec__1_spec__2(v_xs_161_, v_v_162_, v_i_163_);
lean_dec(v_v_162_);
lean_dec_ref(v_xs_161_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0_spec__1(lean_object* v_xs_165_, lean_object* v_v_166_){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_167_ = lean_unsigned_to_nat(0u);
v___x_168_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0_spec__1_spec__2(v_xs_165_, v_v_166_, v___x_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0_spec__1___boxed(lean_object* v_xs_169_, lean_object* v_v_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0_spec__1(v_xs_169_, v_v_170_);
lean_dec(v_v_170_);
lean_dec_ref(v_xs_169_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0___redArg(lean_object* v_x_172_, size_t v_x_173_, lean_object* v_x_174_){
_start:
{
if (lean_obj_tag(v_x_172_) == 0)
{
lean_object* v_es_175_; lean_object* v___x_176_; size_t v___x_177_; size_t v___x_178_; lean_object* v_j_179_; lean_object* v_entry_180_; 
v_es_175_ = lean_ctor_get(v_x_172_, 0);
v___x_176_ = lean_box(2);
v___x_177_ = ((size_t)31ULL);
v___x_178_ = lean_usize_land(v_x_173_, v___x_177_);
v_j_179_ = lean_usize_to_nat(v___x_178_);
v_entry_180_ = lean_array_get(v___x_176_, v_es_175_, v_j_179_);
switch(lean_obj_tag(v_entry_180_))
{
case 0:
{
lean_object* v_key_181_; uint8_t v___x_182_; 
v_key_181_ = lean_ctor_get(v_entry_180_, 0);
lean_inc(v_key_181_);
lean_dec_ref_known(v_entry_180_, 2);
v___x_182_ = lean_name_eq(v_x_174_, v_key_181_);
lean_dec(v_key_181_);
if (v___x_182_ == 0)
{
lean_dec(v_j_179_);
return v_x_172_;
}
else
{
lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_190_; 
lean_inc_ref(v_es_175_);
v_isSharedCheck_190_ = !lean_is_exclusive(v_x_172_);
if (v_isSharedCheck_190_ == 0)
{
lean_object* v_unused_191_; 
v_unused_191_ = lean_ctor_get(v_x_172_, 0);
lean_dec(v_unused_191_);
v___x_184_ = v_x_172_;
v_isShared_185_ = v_isSharedCheck_190_;
goto v_resetjp_183_;
}
else
{
lean_dec(v_x_172_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_190_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_186_; lean_object* v___x_188_; 
v___x_186_ = lean_array_set(v_es_175_, v_j_179_, v___x_176_);
lean_dec(v_j_179_);
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 0, v___x_186_);
v___x_188_ = v___x_184_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v___x_186_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
case 1:
{
lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_226_; 
lean_inc_ref(v_es_175_);
v_isSharedCheck_226_ = !lean_is_exclusive(v_x_172_);
if (v_isSharedCheck_226_ == 0)
{
lean_object* v_unused_227_; 
v_unused_227_ = lean_ctor_get(v_x_172_, 0);
lean_dec(v_unused_227_);
v___x_193_ = v_x_172_;
v_isShared_194_ = v_isSharedCheck_226_;
goto v_resetjp_192_;
}
else
{
lean_dec(v_x_172_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_226_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v_node_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_225_; 
v_node_195_ = lean_ctor_get(v_entry_180_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v_entry_180_);
if (v_isSharedCheck_225_ == 0)
{
v___x_197_ = v_entry_180_;
v_isShared_198_ = v_isSharedCheck_225_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_node_195_);
lean_dec(v_entry_180_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_225_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
size_t v___x_199_; lean_object* v_entries_200_; size_t v___x_201_; lean_object* v_newNode_202_; lean_object* v___x_203_; 
v___x_199_ = ((size_t)5ULL);
v_entries_200_ = lean_array_set(v_es_175_, v_j_179_, v___x_176_);
v___x_201_ = lean_usize_shift_right(v_x_173_, v___x_199_);
v_newNode_202_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0___redArg(v_node_195_, v___x_201_, v_x_174_);
lean_inc_ref(v_newNode_202_);
v___x_203_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_202_);
if (lean_obj_tag(v___x_203_) == 0)
{
lean_object* v___x_205_; 
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 0, v_newNode_202_);
v___x_205_ = v___x_197_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v_newNode_202_);
v___x_205_ = v_reuseFailAlloc_210_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
lean_object* v___x_206_; lean_object* v___x_208_; 
v___x_206_ = lean_array_set(v_entries_200_, v_j_179_, v___x_205_);
lean_dec(v_j_179_);
if (v_isShared_194_ == 0)
{
lean_ctor_set(v___x_193_, 0, v___x_206_);
v___x_208_ = v___x_193_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v___x_206_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
else
{
lean_object* v_val_211_; lean_object* v_fst_212_; lean_object* v_snd_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_224_; 
lean_dec_ref(v_newNode_202_);
lean_del_object(v___x_197_);
v_val_211_ = lean_ctor_get(v___x_203_, 0);
lean_inc(v_val_211_);
lean_dec_ref_known(v___x_203_, 1);
v_fst_212_ = lean_ctor_get(v_val_211_, 0);
v_snd_213_ = lean_ctor_get(v_val_211_, 1);
v_isSharedCheck_224_ = !lean_is_exclusive(v_val_211_);
if (v_isSharedCheck_224_ == 0)
{
v___x_215_ = v_val_211_;
v_isShared_216_ = v_isSharedCheck_224_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_snd_213_);
lean_inc(v_fst_212_);
lean_dec(v_val_211_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_224_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_218_; 
if (v_isShared_216_ == 0)
{
v___x_218_ = v___x_215_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_fst_212_);
lean_ctor_set(v_reuseFailAlloc_223_, 1, v_snd_213_);
v___x_218_ = v_reuseFailAlloc_223_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
lean_object* v___x_219_; lean_object* v___x_221_; 
v___x_219_ = lean_array_set(v_entries_200_, v_j_179_, v___x_218_);
lean_dec(v_j_179_);
if (v_isShared_194_ == 0)
{
lean_ctor_set(v___x_193_, 0, v___x_219_);
v___x_221_ = v___x_193_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v___x_219_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_179_);
return v_x_172_;
}
}
}
else
{
lean_object* v_ks_228_; lean_object* v_vs_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_243_; 
v_ks_228_ = lean_ctor_get(v_x_172_, 0);
v_vs_229_ = lean_ctor_get(v_x_172_, 1);
v_isSharedCheck_243_ = !lean_is_exclusive(v_x_172_);
if (v_isSharedCheck_243_ == 0)
{
v___x_231_ = v_x_172_;
v_isShared_232_ = v_isSharedCheck_243_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_vs_229_);
lean_inc(v_ks_228_);
lean_dec(v_x_172_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_243_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_233_; 
v___x_233_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0_spec__1(v_ks_228_, v_x_174_);
if (lean_obj_tag(v___x_233_) == 0)
{
lean_object* v___x_235_; 
if (v_isShared_232_ == 0)
{
v___x_235_ = v___x_231_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_ks_228_);
lean_ctor_set(v_reuseFailAlloc_236_, 1, v_vs_229_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
else
{
lean_object* v_val_237_; lean_object* v_keys_x27_238_; lean_object* v_vals_x27_239_; lean_object* v___x_241_; 
v_val_237_ = lean_ctor_get(v___x_233_, 0);
lean_inc_n(v_val_237_, 2);
lean_dec_ref_known(v___x_233_, 1);
v_keys_x27_238_ = l_Array_eraseIdx___redArg(v_ks_228_, v_val_237_);
v_vals_x27_239_ = l_Array_eraseIdx___redArg(v_vs_229_, v_val_237_);
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 1, v_vals_x27_239_);
lean_ctor_set(v___x_231_, 0, v_keys_x27_238_);
v___x_241_ = v___x_231_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_keys_x27_238_);
lean_ctor_set(v_reuseFailAlloc_242_, 1, v_vals_x27_239_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0___redArg___boxed(lean_object* v_x_244_, lean_object* v_x_245_, lean_object* v_x_246_){
_start:
{
size_t v_x_179__boxed_247_; lean_object* v_res_248_; 
v_x_179__boxed_247_ = lean_unbox_usize(v_x_245_);
lean_dec(v_x_245_);
v_res_248_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0___redArg(v_x_244_, v_x_179__boxed_247_, v_x_246_);
lean_dec(v_x_246_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0___redArg(lean_object* v_x_249_, lean_object* v_x_250_){
_start:
{
uint64_t v___y_252_; lean_object* v___x_255_; 
v___x_255_ = l_unsafeCast___redArg(v_x_250_);
if (lean_obj_tag(v___x_255_) == 0)
{
uint64_t v___x_256_; 
v___x_256_ = 1723ULL;
v___y_252_ = v___x_256_;
goto v___jp_251_;
}
else
{
uint64_t v_hash_257_; 
v_hash_257_ = lean_ctor_get_uint64(v___x_255_, sizeof(void*)*2);
lean_dec(v___x_255_);
v___y_252_ = v_hash_257_;
goto v___jp_251_;
}
v___jp_251_:
{
size_t v_h_253_; lean_object* v___x_254_; 
v_h_253_ = lean_uint64_to_usize(v___y_252_);
v___x_254_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0___redArg(v_x_249_, v_h_253_, v_x_250_);
return v___x_254_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0___redArg___boxed(lean_object* v_x_258_, lean_object* v_x_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0___redArg(v_x_258_, v_x_259_);
lean_dec(v_x_259_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_erase(lean_object* v_s_261_, lean_object* v_declName_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0___redArg(v_s_261_, v_declName_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_erase___boxed(lean_object* v_s_264_, lean_object* v_declName_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lean_Meta_Grind_CasesTypes_erase(v_s_264_, v_declName_265_);
lean_dec(v_declName_265_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0(lean_object* v_00_u03b2_267_, lean_object* v_x_268_, lean_object* v_x_269_){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0___redArg(v_x_268_, v_x_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0___boxed(lean_object* v_00_u03b2_271_, lean_object* v_x_272_, lean_object* v_x_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0(v_00_u03b2_271_, v_x_272_, v_x_273_);
lean_dec(v_x_273_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0(lean_object* v_00_u03b2_275_, lean_object* v_x_276_, size_t v_x_277_, lean_object* v_x_278_){
_start:
{
lean_object* v___x_279_; 
v___x_279_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0___redArg(v_x_276_, v_x_277_, v_x_278_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0___boxed(lean_object* v_00_u03b2_280_, lean_object* v_x_281_, lean_object* v_x_282_, lean_object* v_x_283_){
_start:
{
size_t v_x_341__boxed_284_; lean_object* v_res_285_; 
v_x_341__boxed_284_ = lean_unbox_usize(v_x_282_);
lean_dec(v_x_282_);
v_res_285_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0_spec__0(v_00_u03b2_280_, v_x_281_, v_x_341__boxed_284_, v_x_283_);
lean_dec(v_x_283_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_286_, lean_object* v_vals_287_, lean_object* v_i_288_, lean_object* v_k_289_){
_start:
{
lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_290_ = lean_array_get_size(v_keys_286_);
v___x_291_ = lean_nat_dec_lt(v_i_288_, v___x_290_);
if (v___x_291_ == 0)
{
lean_object* v___x_292_; 
lean_dec(v_i_288_);
v___x_292_ = lean_box(0);
return v___x_292_;
}
else
{
lean_object* v_k_x27_293_; uint8_t v___x_294_; 
v_k_x27_293_ = lean_array_fget_borrowed(v_keys_286_, v_i_288_);
v___x_294_ = lean_name_eq(v_k_289_, v_k_x27_293_);
if (v___x_294_ == 0)
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = lean_unsigned_to_nat(1u);
v___x_296_ = lean_nat_add(v_i_288_, v___x_295_);
lean_dec(v_i_288_);
v_i_288_ = v___x_296_;
goto _start;
}
else
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = lean_array_fget_borrowed(v_vals_287_, v_i_288_);
lean_dec(v_i_288_);
lean_inc(v___x_298_);
v___x_299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
return v___x_299_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_300_, lean_object* v_vals_301_, lean_object* v_i_302_, lean_object* v_k_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_300_, v_vals_301_, v_i_302_, v_k_303_);
lean_dec(v_k_303_);
lean_dec_ref(v_vals_301_);
lean_dec_ref(v_keys_300_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0___redArg(lean_object* v_x_305_, size_t v_x_306_, lean_object* v_x_307_){
_start:
{
if (lean_obj_tag(v_x_305_) == 0)
{
lean_object* v_es_308_; lean_object* v___x_309_; size_t v___x_310_; size_t v___x_311_; lean_object* v_j_312_; lean_object* v___x_313_; 
v_es_308_ = lean_ctor_get(v_x_305_, 0);
v___x_309_ = lean_box(2);
v___x_310_ = ((size_t)31ULL);
v___x_311_ = lean_usize_land(v_x_306_, v___x_310_);
v_j_312_ = lean_usize_to_nat(v___x_311_);
v___x_313_ = lean_array_get_borrowed(v___x_309_, v_es_308_, v_j_312_);
lean_dec(v_j_312_);
switch(lean_obj_tag(v___x_313_))
{
case 0:
{
lean_object* v_key_314_; lean_object* v_val_315_; uint8_t v___x_316_; 
v_key_314_ = lean_ctor_get(v___x_313_, 0);
v_val_315_ = lean_ctor_get(v___x_313_, 1);
v___x_316_ = lean_name_eq(v_x_307_, v_key_314_);
if (v___x_316_ == 0)
{
lean_object* v___x_317_; 
v___x_317_ = lean_box(0);
return v___x_317_;
}
else
{
lean_object* v___x_318_; 
lean_inc(v_val_315_);
v___x_318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_318_, 0, v_val_315_);
return v___x_318_;
}
}
case 1:
{
lean_object* v_node_319_; size_t v___x_320_; size_t v___x_321_; 
v_node_319_ = lean_ctor_get(v___x_313_, 0);
v___x_320_ = ((size_t)5ULL);
v___x_321_ = lean_usize_shift_right(v_x_306_, v___x_320_);
v_x_305_ = v_node_319_;
v_x_306_ = v___x_321_;
goto _start;
}
default: 
{
lean_object* v___x_323_; 
v___x_323_ = lean_box(0);
return v___x_323_;
}
}
}
else
{
lean_object* v_ks_324_; lean_object* v_vs_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v_ks_324_ = lean_ctor_get(v_x_305_, 0);
v_vs_325_ = lean_ctor_get(v_x_305_, 1);
v___x_326_ = lean_unsigned_to_nat(0u);
v___x_327_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0_spec__1___redArg(v_ks_324_, v_vs_325_, v___x_326_, v_x_307_);
return v___x_327_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_328_, lean_object* v_x_329_, lean_object* v_x_330_){
_start:
{
size_t v_x_139__boxed_331_; lean_object* v_res_332_; 
v_x_139__boxed_331_ = lean_unbox_usize(v_x_329_);
lean_dec(v_x_329_);
v_res_332_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0___redArg(v_x_328_, v_x_139__boxed_331_, v_x_330_);
lean_dec(v_x_330_);
lean_dec_ref(v_x_328_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0___redArg(lean_object* v_x_333_, lean_object* v_x_334_){
_start:
{
uint64_t v___y_336_; lean_object* v___x_339_; 
v___x_339_ = l_unsafeCast___redArg(v_x_334_);
if (lean_obj_tag(v___x_339_) == 0)
{
uint64_t v___x_340_; 
v___x_340_ = 1723ULL;
v___y_336_ = v___x_340_;
goto v___jp_335_;
}
else
{
uint64_t v_hash_341_; 
v_hash_341_ = lean_ctor_get_uint64(v___x_339_, sizeof(void*)*2);
lean_dec(v___x_339_);
v___y_336_ = v_hash_341_;
goto v___jp_335_;
}
v___jp_335_:
{
size_t v___x_337_; lean_object* v___x_338_; 
v___x_337_ = lean_uint64_to_usize(v___y_336_);
v___x_338_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0___redArg(v_x_333_, v___x_337_, v_x_334_);
return v___x_338_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0___redArg___boxed(lean_object* v_x_342_, lean_object* v_x_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0___redArg(v_x_342_, v_x_343_);
lean_dec(v_x_343_);
lean_dec_ref(v_x_342_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_find_x3f(lean_object* v_s_345_, lean_object* v_declName_346_){
_start:
{
lean_object* v___x_347_; 
v___x_347_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0___redArg(v_s_345_, v_declName_346_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_find_x3f___boxed(lean_object* v_s_348_, lean_object* v_declName_349_){
_start:
{
lean_object* v_res_350_; 
v_res_350_ = l_Lean_Meta_Grind_CasesTypes_find_x3f(v_s_348_, v_declName_349_);
lean_dec(v_declName_349_);
lean_dec_ref(v_s_348_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0(lean_object* v_00_u03b2_351_, lean_object* v_x_352_, lean_object* v_x_353_){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0___redArg(v_x_352_, v_x_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0___boxed(lean_object* v_00_u03b2_355_, lean_object* v_x_356_, lean_object* v_x_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0(v_00_u03b2_355_, v_x_356_, v_x_357_);
lean_dec(v_x_357_);
lean_dec_ref(v_x_356_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0(lean_object* v_00_u03b2_359_, lean_object* v_x_360_, size_t v_x_361_, lean_object* v_x_362_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0___redArg(v_x_360_, v_x_361_, v_x_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_364_, lean_object* v_x_365_, lean_object* v_x_366_, lean_object* v_x_367_){
_start:
{
size_t v_x_214__boxed_368_; lean_object* v_res_369_; 
v_x_214__boxed_368_ = lean_unbox_usize(v_x_366_);
lean_dec(v_x_366_);
v_res_369_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0(v_00_u03b2_364_, v_x_365_, v_x_214__boxed_368_, v_x_367_);
lean_dec(v_x_367_);
lean_dec_ref(v_x_365_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_370_, lean_object* v_keys_371_, lean_object* v_vals_372_, lean_object* v_heq_373_, lean_object* v_i_374_, lean_object* v_k_375_){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_371_, v_vals_372_, v_i_374_, v_k_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_377_, lean_object* v_keys_378_, lean_object* v_vals_379_, lean_object* v_heq_380_, lean_object* v_i_381_, lean_object* v_k_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0_spec__0_spec__1(v_00_u03b2_377_, v_keys_378_, v_vals_379_, v_heq_380_, v_i_381_, v_k_382_);
lean_dec(v_k_382_);
lean_dec_ref(v_vals_379_);
lean_dec_ref(v_keys_378_);
return v_res_383_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_CasesTypes_isEagerSplit(lean_object* v_s_384_, lean_object* v_declName_385_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0___redArg(v_s_384_, v_declName_385_);
if (lean_obj_tag(v___x_386_) == 0)
{
uint8_t v___x_387_; 
v___x_387_ = l_Lean_Meta_Grind_isBuiltinEagerCases(v_declName_385_);
return v___x_387_;
}
else
{
lean_object* v_val_388_; uint8_t v___x_389_; 
v_val_388_ = lean_ctor_get(v___x_386_, 0);
lean_inc(v_val_388_);
lean_dec_ref_known(v___x_386_, 1);
v___x_389_ = lean_unbox(v_val_388_);
if (v___x_389_ == 0)
{
uint8_t v___x_390_; 
lean_dec(v_val_388_);
v___x_390_ = l_Lean_Meta_Grind_isBuiltinEagerCases(v_declName_385_);
return v___x_390_;
}
else
{
uint8_t v___x_391_; 
v___x_391_ = lean_unbox(v_val_388_);
lean_dec(v_val_388_);
return v___x_391_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_isEagerSplit___boxed(lean_object* v_s_392_, lean_object* v_declName_393_){
_start:
{
uint8_t v_res_394_; lean_object* v_r_395_; 
v_res_394_ = l_Lean_Meta_Grind_CasesTypes_isEagerSplit(v_s_392_, v_declName_393_);
lean_dec(v_declName_393_);
lean_dec_ref(v_s_392_);
v_r_395_ = lean_box(v_res_394_);
return v_r_395_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_CasesTypes_isSplit(lean_object* v_s_396_, lean_object* v_declName_397_){
_start:
{
lean_object* v___x_398_; 
v___x_398_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_CasesTypes_find_x3f_spec__0___redArg(v_s_396_, v_declName_397_);
if (lean_obj_tag(v___x_398_) == 0)
{
uint8_t v___x_399_; 
v___x_399_ = l_Lean_Meta_Grind_isBuiltinEagerCases(v_declName_397_);
return v___x_399_;
}
else
{
uint8_t v___x_400_; 
lean_dec_ref_known(v___x_398_, 1);
v___x_400_ = 1;
return v___x_400_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_isSplit___boxed(lean_object* v_s_401_, lean_object* v_declName_402_){
_start:
{
uint8_t v_res_403_; lean_object* v_r_404_; 
v_res_403_ = l_Lean_Meta_Grind_CasesTypes_isSplit(v_s_401_, v_declName_402_);
lean_dec(v_declName_402_);
lean_dec_ref(v_s_401_);
v_r_404_ = lean_box(v_res_403_);
return v_r_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive_x3f___at___00Lean_Meta_Grind_isCasesAttrCandidate_x3f_spec__0___redArg(lean_object* v_declName_405_, lean_object* v___y_406_){
_start:
{
lean_object* v___x_408_; lean_object* v_env_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_408_ = lean_st_ref_get(v___y_406_);
v_env_409_ = lean_ctor_get(v___x_408_, 0);
lean_inc_ref(v_env_409_);
lean_dec(v___x_408_);
v___x_410_ = l_Lean_isInductiveCore_x3f(v_env_409_, v_declName_405_);
v___x_411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive_x3f___at___00Lean_Meta_Grind_isCasesAttrCandidate_x3f_spec__0___redArg___boxed(lean_object* v_declName_412_, lean_object* v___y_413_, lean_object* v___y_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Lean_isInductive_x3f___at___00Lean_Meta_Grind_isCasesAttrCandidate_x3f_spec__0___redArg(v_declName_412_, v___y_413_);
lean_dec(v___y_413_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive_x3f___at___00Lean_Meta_Grind_isCasesAttrCandidate_x3f_spec__0(lean_object* v_declName_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = l_Lean_isInductive_x3f___at___00Lean_Meta_Grind_isCasesAttrCandidate_x3f_spec__0___redArg(v_declName_416_, v___y_418_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive_x3f___at___00Lean_Meta_Grind_isCasesAttrCandidate_x3f_spec__0___boxed(lean_object* v_declName_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Lean_isInductive_x3f___at___00Lean_Meta_Grind_isCasesAttrCandidate_x3f_spec__0(v_declName_421_, v___y_422_, v___y_423_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(lean_object* v_declName_426_, uint8_t v_eager_427_, lean_object* v_a_428_, lean_object* v_a_429_){
_start:
{
lean_object* v___x_431_; lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_453_; 
lean_inc(v_declName_426_);
v___x_431_ = l_Lean_isInductive_x3f___at___00Lean_Meta_Grind_isCasesAttrCandidate_x3f_spec__0___redArg(v_declName_426_, v_a_429_);
v_a_432_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_453_ == 0)
{
v___x_434_ = v___x_431_;
v_isShared_435_ = v_isSharedCheck_453_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_431_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_453_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
if (lean_obj_tag(v_a_432_) == 1)
{
lean_object* v_val_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_450_; 
v_val_441_ = lean_ctor_get(v_a_432_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v_a_432_);
if (v_isSharedCheck_450_ == 0)
{
v___x_443_ = v_a_432_;
v_isShared_444_ = v_isSharedCheck_450_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_val_441_);
lean_dec(v_a_432_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_450_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
uint8_t v_isRec_445_; 
v_isRec_445_ = lean_ctor_get_uint8(v_val_441_, sizeof(void*)*6);
lean_dec(v_val_441_);
if (v_isRec_445_ == 0)
{
lean_del_object(v___x_443_);
goto v___jp_436_;
}
else
{
if (v_eager_427_ == 0)
{
lean_del_object(v___x_443_);
goto v___jp_436_;
}
else
{
lean_object* v___x_446_; lean_object* v___x_448_; 
lean_del_object(v___x_434_);
lean_dec(v_declName_426_);
v___x_446_ = lean_box(0);
if (v_isShared_444_ == 0)
{
lean_ctor_set_tag(v___x_443_, 0);
lean_ctor_set(v___x_443_, 0, v___x_446_);
v___x_448_ = v___x_443_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_446_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
}
else
{
lean_object* v___x_451_; lean_object* v___x_452_; 
lean_del_object(v___x_434_);
lean_dec(v_a_432_);
lean_dec(v_declName_426_);
v___x_451_ = lean_box(0);
v___x_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_452_, 0, v___x_451_);
return v___x_452_;
}
v___jp_436_:
{
lean_object* v___x_437_; lean_object* v___x_439_; 
v___x_437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_437_, 0, v_declName_426_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 0, v___x_437_);
v___x_439_ = v___x_434_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v___x_437_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate_x3f___boxed(lean_object* v_declName_454_, lean_object* v_eager_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_){
_start:
{
uint8_t v_eager_boxed_459_; lean_object* v_res_460_; 
v_eager_boxed_459_ = lean_unbox(v_eager_455_);
v_res_460_ = l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(v_declName_454_, v_eager_boxed_459_, v_a_456_, v_a_457_);
lean_dec(v_a_457_);
lean_dec_ref(v_a_456_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate(lean_object* v_declName_461_, uint8_t v_eager_462_, lean_object* v_a_463_, lean_object* v_a_464_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(v_declName_461_, v_eager_462_, v_a_463_, v_a_464_);
if (lean_obj_tag(v___x_466_) == 0)
{
lean_object* v_a_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_481_; 
v_a_467_ = lean_ctor_get(v___x_466_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_481_ == 0)
{
v___x_469_ = v___x_466_;
v_isShared_470_ = v_isSharedCheck_481_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_a_467_);
lean_dec(v___x_466_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_481_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
if (lean_obj_tag(v_a_467_) == 0)
{
uint8_t v___x_471_; lean_object* v___x_472_; lean_object* v___x_474_; 
v___x_471_ = 0;
v___x_472_ = lean_box(v___x_471_);
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 0, v___x_472_);
v___x_474_ = v___x_469_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v___x_472_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
else
{
uint8_t v___x_476_; lean_object* v___x_477_; lean_object* v___x_479_; 
lean_dec_ref_known(v_a_467_, 1);
v___x_476_ = 1;
v___x_477_ = lean_box(v___x_476_);
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 0, v___x_477_);
v___x_479_ = v___x_469_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v___x_477_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
}
else
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_489_; 
v_a_482_ = lean_ctor_get(v___x_466_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_489_ == 0)
{
v___x_484_ = v___x_466_;
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v___x_466_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
if (v_isShared_485_ == 0)
{
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_a_482_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate___boxed(lean_object* v_declName_490_, lean_object* v_eager_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_){
_start:
{
uint8_t v_eager_boxed_495_; lean_object* v_res_496_; 
v_eager_boxed_495_ = lean_unbox(v_eager_491_);
v_res_496_ = l_Lean_Meta_Grind_isCasesAttrCandidate(v_declName_490_, v_eager_boxed_495_, v_a_492_, v_a_493_);
lean_dec(v_a_493_);
lean_dec_ref(v_a_492_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(lean_object* v_declName_497_, uint8_t v_eager_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(v_declName_497_, v_eager_498_, v_a_501_, v_a_502_);
if (lean_obj_tag(v___x_504_) == 0)
{
lean_object* v_a_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_515_; 
v_a_505_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_515_ == 0)
{
v___x_507_ = v___x_504_;
v_isShared_508_ = v_isSharedCheck_515_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_a_505_);
lean_dec(v___x_504_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_515_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
if (lean_obj_tag(v_a_505_) == 1)
{
lean_object* v_val_509_; lean_object* v___x_510_; 
lean_del_object(v___x_507_);
v_val_509_ = lean_ctor_get(v_a_505_, 0);
lean_inc(v_val_509_);
lean_dec_ref_known(v_a_505_, 1);
v___x_510_ = l_Lean_Meta_isInductivePredicate_x3f(v_val_509_, v_a_499_, v_a_500_, v_a_501_, v_a_502_);
return v___x_510_;
}
else
{
lean_object* v___x_511_; lean_object* v___x_513_; 
lean_dec(v_a_505_);
v___x_511_ = lean_box(0);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 0, v___x_511_);
v___x_513_ = v___x_507_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v___x_511_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
}
else
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
v_a_516_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v___x_504_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_504_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_516_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f___boxed(lean_object* v_declName_524_, lean_object* v_eager_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_){
_start:
{
uint8_t v_eager_boxed_531_; lean_object* v_res_532_; 
v_eager_boxed_531_ = lean_unbox(v_eager_525_);
v_res_532_ = l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(v_declName_524_, v_eager_boxed_531_, v_a_526_, v_a_527_, v_a_528_, v_a_529_);
lean_dec(v_a_529_);
lean_dec_ref(v_a_528_);
lean_dec(v_a_527_);
lean_dec_ref(v_a_526_);
return v_res_532_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_533_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_534_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__0);
v___x_535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_535_, 0, v___x_534_);
return v___x_535_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_536_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__1);
v___x_537_ = lean_unsigned_to_nat(0u);
v___x_538_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_538_, 0, v___x_537_);
lean_ctor_set(v___x_538_, 1, v___x_537_);
lean_ctor_set(v___x_538_, 2, v___x_537_);
lean_ctor_set(v___x_538_, 3, v___x_537_);
lean_ctor_set(v___x_538_, 4, v___x_536_);
lean_ctor_set(v___x_538_, 5, v___x_536_);
lean_ctor_set(v___x_538_, 6, v___x_536_);
lean_ctor_set(v___x_538_, 7, v___x_536_);
lean_ctor_set(v___x_538_, 8, v___x_536_);
lean_ctor_set(v___x_538_, 9, v___x_536_);
lean_ctor_set(v___x_538_, 10, v___x_536_);
return v___x_538_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_539_ = lean_unsigned_to_nat(32u);
v___x_540_ = lean_mk_empty_array_with_capacity(v___x_539_);
v___x_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
return v___x_541_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_542_ = ((size_t)5ULL);
v___x_543_ = lean_unsigned_to_nat(0u);
v___x_544_ = lean_unsigned_to_nat(32u);
v___x_545_ = lean_mk_empty_array_with_capacity(v___x_544_);
v___x_546_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__3);
v___x_547_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_547_, 0, v___x_546_);
lean_ctor_set(v___x_547_, 1, v___x_545_);
lean_ctor_set(v___x_547_, 2, v___x_543_);
lean_ctor_set(v___x_547_, 3, v___x_543_);
lean_ctor_set_usize(v___x_547_, 4, v___x_542_);
return v___x_547_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_548_ = lean_box(1);
v___x_549_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__4);
v___x_550_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__1);
v___x_551_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
lean_ctor_set(v___x_551_, 1, v___x_549_);
lean_ctor_set(v___x_551_, 2, v___x_548_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0(lean_object* v_msgData_552_, lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
lean_object* v___x_556_; lean_object* v_toCold_557_; lean_object* v_env_558_; lean_object* v_options_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_556_ = lean_st_ref_get(v___y_554_);
v_toCold_557_ = lean_ctor_get(v___y_553_, 0);
v_env_558_ = lean_ctor_get(v___x_556_, 0);
lean_inc_ref(v_env_558_);
lean_dec(v___x_556_);
v_options_559_ = lean_ctor_get(v_toCold_557_, 2);
v___x_560_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__2);
v___x_561_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_559_);
v___x_562_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_562_, 0, v_env_558_);
lean_ctor_set(v___x_562_, 1, v___x_560_);
lean_ctor_set(v___x_562_, 2, v___x_561_);
lean_ctor_set(v___x_562_, 3, v_options_559_);
v___x_563_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
lean_ctor_set(v___x_563_, 1, v_msgData_552_);
v___x_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___boxed(lean_object* v_msgData_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0(v_msgData_565_, v___y_566_, v___y_567_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0___redArg(lean_object* v_msg_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v_ref_574_; lean_object* v___x_575_; lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_584_; 
v_ref_574_ = lean_ctor_get(v___y_571_, 2);
v___x_575_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0(v_msg_570_, v___y_571_, v___y_572_);
v_a_576_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_584_ == 0)
{
v___x_578_ = v___x_575_;
v_isShared_579_ = v_isSharedCheck_584_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_575_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_584_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_580_; lean_object* v___x_582_; 
lean_inc(v_ref_574_);
v___x_580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_580_, 0, v_ref_574_);
lean_ctor_set(v___x_580_, 1, v_a_576_);
if (v_isShared_579_ == 0)
{
lean_ctor_set_tag(v___x_578_, 1);
lean_ctor_set(v___x_578_, 0, v___x_580_);
v___x_582_ = v___x_578_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v___x_580_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0___redArg___boxed(lean_object* v_msg_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0___redArg(v_msg_585_, v___y_586_, v___y_587_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
return v_res_589_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_validateCasesAttr___closed__1(void){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = ((lean_object*)(l_Lean_Meta_Grind_validateCasesAttr___closed__0));
v___x_592_ = l_Lean_stringToMessageData(v___x_591_);
return v___x_592_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_validateCasesAttr___closed__3(void){
_start:
{
lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_594_ = ((lean_object*)(l_Lean_Meta_Grind_validateCasesAttr___closed__2));
v___x_595_ = l_Lean_stringToMessageData(v___x_594_);
return v___x_595_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_validateCasesAttr___closed__5(void){
_start:
{
lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_597_ = ((lean_object*)(l_Lean_Meta_Grind_validateCasesAttr___closed__4));
v___x_598_ = l_Lean_stringToMessageData(v___x_597_);
return v___x_598_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_validateCasesAttr___closed__7(void){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_600_ = ((lean_object*)(l_Lean_Meta_Grind_validateCasesAttr___closed__6));
v___x_601_ = l_Lean_stringToMessageData(v___x_600_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateCasesAttr(lean_object* v_declName_602_, uint8_t v_eager_603_, lean_object* v_a_604_, lean_object* v_a_605_){
_start:
{
lean_object* v___x_607_; 
lean_inc(v_declName_602_);
v___x_607_ = l_Lean_Meta_Grind_isCasesAttrCandidate(v_declName_602_, v_eager_603_, v_a_604_, v_a_605_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_630_; 
v_a_608_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_630_ == 0)
{
v___x_610_ = v___x_607_;
v_isShared_611_ = v_isSharedCheck_630_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v___x_607_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_630_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
uint8_t v___x_612_; 
v___x_612_ = lean_unbox(v_a_608_);
if (v___x_612_ == 0)
{
lean_del_object(v___x_610_);
if (v_eager_603_ == 0)
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
lean_dec(v_a_608_);
v___x_613_ = lean_obj_once(&l_Lean_Meta_Grind_validateCasesAttr___closed__1, &l_Lean_Meta_Grind_validateCasesAttr___closed__1_once, _init_l_Lean_Meta_Grind_validateCasesAttr___closed__1);
v___x_614_ = l_Lean_MessageData_ofConstName(v_declName_602_, v_eager_603_);
v___x_615_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_615_, 0, v___x_613_);
lean_ctor_set(v___x_615_, 1, v___x_614_);
v___x_616_ = lean_obj_once(&l_Lean_Meta_Grind_validateCasesAttr___closed__3, &l_Lean_Meta_Grind_validateCasesAttr___closed__3_once, _init_l_Lean_Meta_Grind_validateCasesAttr___closed__3);
v___x_617_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_617_, 0, v___x_615_);
lean_ctor_set(v___x_617_, 1, v___x_616_);
v___x_618_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0___redArg(v___x_617_, v_a_604_, v_a_605_);
return v___x_618_;
}
else
{
lean_object* v___x_619_; uint8_t v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_619_ = lean_obj_once(&l_Lean_Meta_Grind_validateCasesAttr___closed__5, &l_Lean_Meta_Grind_validateCasesAttr___closed__5_once, _init_l_Lean_Meta_Grind_validateCasesAttr___closed__5);
v___x_620_ = lean_unbox(v_a_608_);
lean_dec(v_a_608_);
v___x_621_ = l_Lean_MessageData_ofConstName(v_declName_602_, v___x_620_);
v___x_622_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_622_, 0, v___x_619_);
lean_ctor_set(v___x_622_, 1, v___x_621_);
v___x_623_ = lean_obj_once(&l_Lean_Meta_Grind_validateCasesAttr___closed__7, &l_Lean_Meta_Grind_validateCasesAttr___closed__7_once, _init_l_Lean_Meta_Grind_validateCasesAttr___closed__7);
v___x_624_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_624_, 0, v___x_622_);
lean_ctor_set(v___x_624_, 1, v___x_623_);
v___x_625_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0___redArg(v___x_624_, v_a_604_, v_a_605_);
return v___x_625_;
}
}
else
{
lean_object* v___x_626_; lean_object* v___x_628_; 
lean_dec(v_a_608_);
lean_dec(v_declName_602_);
v___x_626_ = lean_box(0);
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 0, v___x_626_);
v___x_628_ = v___x_610_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v___x_626_);
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
else
{
lean_object* v_a_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_638_; 
lean_dec(v_declName_602_);
v_a_631_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_638_ == 0)
{
v___x_633_ = v___x_607_;
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_a_631_);
lean_dec(v___x_607_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_636_; 
if (v_isShared_634_ == 0)
{
v___x_636_ = v___x_633_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_a_631_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateCasesAttr___boxed(lean_object* v_declName_639_, lean_object* v_eager_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_){
_start:
{
uint8_t v_eager_boxed_644_; lean_object* v_res_645_; 
v_eager_boxed_644_ = lean_unbox(v_eager_640_);
v_res_645_ = l_Lean_Meta_Grind_validateCasesAttr(v_declName_639_, v_eager_boxed_644_, v_a_641_, v_a_642_);
lean_dec(v_a_642_);
lean_dec_ref(v_a_641_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0(lean_object* v_00_u03b1_646_, lean_object* v_msg_647_, lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
lean_object* v___x_651_; 
v___x_651_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0___redArg(v_msg_647_, v___y_648_, v___y_649_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0___boxed(lean_object* v_00_u03b1_652_, lean_object* v_msg_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0(v_00_u03b1_652_, v_msg_653_, v___y_654_, v___y_655_);
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_eraseDecl(lean_object* v_s_658_, lean_object* v_declName_659_, lean_object* v_a_660_, lean_object* v_a_661_){
_start:
{
uint8_t v___x_663_; 
v___x_663_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_CasesTypes_contains_spec__0___redArg(v_s_658_, v_declName_659_);
if (v___x_663_ == 0)
{
lean_object* v___x_664_; 
lean_dec_ref(v_s_658_);
v___x_664_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_659_, v_a_660_, v_a_661_);
return v___x_664_;
}
else
{
lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_665_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_CasesTypes_erase_spec__0___redArg(v_s_658_, v_declName_659_);
lean_dec(v_declName_659_);
v___x_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_666_, 0, v___x_665_);
return v___x_666_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_eraseDecl___boxed(lean_object* v_s_667_, lean_object* v_declName_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Lean_Meta_Grind_CasesTypes_eraseDecl(v_s_667_, v_declName_668_, v_a_669_, v_a_670_);
lean_dec(v_a_670_);
lean_dec_ref(v_a_669_);
return v_res_672_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__1(void){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = ((lean_object*)(l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__0));
v___x_675_ = l_Lean_stringToMessageData(v___x_674_);
return v___x_675_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__3(void){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = ((lean_object*)(l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__2));
v___x_678_ = l_Lean_stringToMessageData(v___x_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases(lean_object* v_declName_679_, lean_object* v_a_680_, lean_object* v_a_681_){
_start:
{
uint8_t v___x_683_; 
v___x_683_ = l_Lean_Meta_Grind_isBuiltinEagerCases(v_declName_679_);
if (v___x_683_ == 0)
{
lean_object* v___x_684_; lean_object* v___x_685_; 
lean_dec(v_declName_679_);
v___x_684_ = lean_box(0);
v___x_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_685_, 0, v___x_684_);
return v___x_685_;
}
else
{
lean_object* v___x_686_; uint8_t v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_686_ = lean_obj_once(&l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__1, &l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__1_once, _init_l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__1);
v___x_687_ = 0;
v___x_688_ = l_Lean_MessageData_ofConstName(v_declName_679_, v___x_687_);
v___x_689_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_686_);
lean_ctor_set(v___x_689_, 1, v___x_688_);
v___x_690_ = lean_obj_once(&l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__3, &l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__3_once, _init_l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__3);
v___x_691_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_691_, 0, v___x_689_);
lean_ctor_set(v___x_691_, 1, v___x_690_);
v___x_692_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0___redArg(v___x_691_, v_a_680_, v_a_681_);
return v___x_692_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases___boxed(lean_object* v_declName_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l_Lean_Meta_Grind_ensureNotBuiltinCases(v_declName_693_, v_a_694_, v_a_695_);
lean_dec(v_a_695_);
lean_dec_ref(v_a_694_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_isSimpleFVar(lean_object* v_e_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_){
_start:
{
if (lean_obj_tag(v_e_698_) == 1)
{
lean_object* v_fvarId_704_; lean_object* v___x_705_; 
v_fvarId_704_ = lean_ctor_get(v_e_698_, 0);
lean_inc(v_fvarId_704_);
lean_dec_ref_known(v_e_698_, 1);
v___x_705_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_704_, v_a_699_, v_a_701_, v_a_702_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v_a_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_722_; 
v_a_706_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_722_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_722_ == 0)
{
v___x_708_ = v___x_705_;
v_isShared_709_ = v_isSharedCheck_722_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_a_706_);
lean_dec(v___x_705_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_722_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v_lctx_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; uint8_t v___x_715_; 
v_lctx_710_ = lean_ctor_get(v_a_699_, 2);
v___x_711_ = l_Lean_LocalDecl_index(v_a_706_);
lean_inc_ref(v_lctx_710_);
v___x_712_ = lean_local_ctx_num_indices(v_lctx_710_);
v___x_713_ = lean_unsigned_to_nat(1u);
v___x_714_ = lean_nat_sub(v___x_712_, v___x_713_);
lean_dec(v___x_712_);
v___x_715_ = lean_nat_dec_eq(v___x_711_, v___x_714_);
lean_dec(v___x_714_);
lean_dec(v___x_711_);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; lean_object* v___x_717_; 
lean_del_object(v___x_708_);
v___x_716_ = l_Lean_LocalDecl_type(v_a_706_);
lean_dec(v_a_706_);
v___x_717_ = l_Lean_Meta_isProp(v___x_716_, v_a_699_, v_a_700_, v_a_701_, v_a_702_);
return v___x_717_;
}
else
{
lean_object* v___x_718_; lean_object* v___x_720_; 
lean_dec(v_a_706_);
v___x_718_ = lean_box(v___x_715_);
if (v_isShared_709_ == 0)
{
lean_ctor_set(v___x_708_, 0, v___x_718_);
v___x_720_ = v___x_708_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v___x_718_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
return v___x_720_;
}
}
}
}
else
{
lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_730_; 
v_a_723_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_730_ == 0)
{
v___x_725_ = v___x_705_;
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v___x_705_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_728_; 
if (v_isShared_726_ == 0)
{
v___x_728_ = v___x_725_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_723_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
}
else
{
uint8_t v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
lean_dec_ref(v_e_698_);
v___x_731_ = 0;
v___x_732_ = lean_box(v___x_731_);
v___x_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_733_, 0, v___x_732_);
return v___x_733_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_isSimpleFVar___boxed(lean_object* v_e_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_isSimpleFVar(v_e_734_, v_a_735_, v_a_736_, v_a_737_, v_a_738_);
lean_dec(v_a_738_);
lean_dec_ref(v_a_737_);
lean_dec(v_a_736_);
lean_dec_ref(v_a_735_);
return v_res_740_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__4(void){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_747_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__3));
v___x_748_ = l_Lean_stringToMessageData(v___x_747_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg(lean_object* v_mvarId_749_, lean_object* v_e_750_, lean_object* v_type_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v___x_757_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__2));
v___x_758_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__4, &l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__4);
v___x_759_ = l_Lean_MessageData_ofExpr(v_e_750_);
v___x_760_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_760_, 0, v___x_758_);
lean_ctor_set(v___x_760_, 1, v___x_759_);
v___x_761_ = l_Lean_indentExpr(v_type_751_);
v___x_762_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_760_);
lean_ctor_set(v___x_762_, 1, v___x_761_);
v___x_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_763_, 0, v___x_762_);
v___x_764_ = l_Lean_Meta_throwTacticEx___redArg(v___x_757_, v_mvarId_749_, v___x_763_, v_a_752_, v_a_753_, v_a_754_, v_a_755_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___boxed(lean_object* v_mvarId_765_, lean_object* v_e_766_, lean_object* v_type_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg(v_mvarId_765_, v_e_766_, v_type_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_);
lean_dec(v_a_771_);
lean_dec_ref(v_a_770_);
lean_dec(v_a_769_);
lean_dec_ref(v_a_768_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected(lean_object* v_mvarId_774_, lean_object* v_e_775_, lean_object* v_00_u03b1_776_, lean_object* v_type_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_){
_start:
{
lean_object* v___x_783_; 
v___x_783_ = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg(v_mvarId_774_, v_e_775_, v_type_777_, v_a_778_, v_a_779_, v_a_780_, v_a_781_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___boxed(lean_object* v_mvarId_784_, lean_object* v_e_785_, lean_object* v_00_u03b1_786_, lean_object* v_type_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected(v_mvarId_784_, v_e_785_, v_00_u03b1_786_, v_type_787_, v_a_788_, v_a_789_, v_a_790_, v_a_791_);
lean_dec(v_a_791_);
lean_dec_ref(v_a_790_);
lean_dec(v_a_789_);
lean_dec_ref(v_a_788_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_cases_spec__5___redArg(lean_object* v_mvarId_794_, lean_object* v_x_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_){
_start:
{
lean_object* v___x_801_; 
v___x_801_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_794_, v_x_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_);
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v_a_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_809_; 
v_a_802_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_809_ == 0)
{
v___x_804_ = v___x_801_;
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_a_802_);
lean_dec(v___x_801_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_807_; 
if (v_isShared_805_ == 0)
{
v___x_807_ = v___x_804_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_a_802_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
else
{
lean_object* v_a_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_817_; 
v_a_810_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_817_ == 0)
{
v___x_812_ = v___x_801_;
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_a_810_);
lean_dec(v___x_801_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_815_; 
if (v_isShared_813_ == 0)
{
v___x_815_ = v___x_812_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_a_810_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_cases_spec__5___redArg___boxed(lean_object* v_mvarId_818_, lean_object* v_x_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_cases_spec__5___redArg(v_mvarId_818_, v_x_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_);
lean_dec(v___y_823_);
lean_dec_ref(v___y_822_);
lean_dec(v___y_821_);
lean_dec_ref(v___y_820_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_cases_spec__5(lean_object* v_00_u03b1_826_, lean_object* v_mvarId_827_, lean_object* v_x_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_){
_start:
{
lean_object* v___x_834_; 
v___x_834_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_cases_spec__5___redArg(v_mvarId_827_, v_x_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_cases_spec__5___boxed(lean_object* v_00_u03b1_835_, lean_object* v_mvarId_836_, lean_object* v_x_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_){
_start:
{
lean_object* v_res_843_; 
v_res_843_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_cases_spec__5(v_00_u03b1_835_, v_mvarId_836_, v_x_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_);
lean_dec(v___y_841_);
lean_dec_ref(v___y_840_);
lean_dec(v___y_839_);
lean_dec_ref(v___y_838_);
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_cases_spec__4(lean_object* v_as_844_, size_t v_i_845_, size_t v_stop_846_, lean_object* v_b_847_){
_start:
{
uint8_t v___x_848_; 
v___x_848_ = lean_usize_dec_eq(v_i_845_, v_stop_846_);
if (v___x_848_ == 0)
{
uint8_t v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; size_t v___x_852_; size_t v___x_853_; 
v___x_849_ = 1;
v___x_850_ = lean_array_uget_borrowed(v_as_844_, v_i_845_);
lean_inc(v___x_850_);
v___x_851_ = l_Lean_LocalContext_setKind(v_b_847_, v___x_850_, v___x_849_);
v___x_852_ = ((size_t)1ULL);
v___x_853_ = lean_usize_add(v_i_845_, v___x_852_);
v_i_845_ = v___x_853_;
v_b_847_ = v___x_851_;
goto _start;
}
else
{
return v_b_847_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_cases_spec__4___boxed(lean_object* v_as_855_, lean_object* v_i_856_, lean_object* v_stop_857_, lean_object* v_b_858_){
_start:
{
size_t v_i_boxed_859_; size_t v_stop_boxed_860_; lean_object* v_res_861_; 
v_i_boxed_859_ = lean_unbox_usize(v_i_856_);
lean_dec(v_i_856_);
v_stop_boxed_860_ = lean_unbox_usize(v_stop_857_);
lean_dec(v_stop_857_);
v_res_861_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_cases_spec__4(v_as_855_, v_i_boxed_859_, v_stop_boxed_860_, v_b_858_);
lean_dec_ref(v_as_855_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__10_spec__13___redArg(lean_object* v_x_862_, lean_object* v_x_863_, lean_object* v_x_864_, lean_object* v_x_865_){
_start:
{
lean_object* v_ks_866_; lean_object* v_vs_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_891_; 
v_ks_866_ = lean_ctor_get(v_x_862_, 0);
v_vs_867_ = lean_ctor_get(v_x_862_, 1);
v_isSharedCheck_891_ = !lean_is_exclusive(v_x_862_);
if (v_isSharedCheck_891_ == 0)
{
v___x_869_ = v_x_862_;
v_isShared_870_ = v_isSharedCheck_891_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_vs_867_);
lean_inc(v_ks_866_);
lean_dec(v_x_862_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_891_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_871_; uint8_t v___x_872_; 
v___x_871_ = lean_array_get_size(v_ks_866_);
v___x_872_ = lean_nat_dec_lt(v_x_863_, v___x_871_);
if (v___x_872_ == 0)
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_876_; 
lean_dec(v_x_863_);
v___x_873_ = lean_array_push(v_ks_866_, v_x_864_);
v___x_874_ = lean_array_push(v_vs_867_, v_x_865_);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 1, v___x_874_);
lean_ctor_set(v___x_869_, 0, v___x_873_);
v___x_876_ = v___x_869_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v___x_873_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v___x_874_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
else
{
lean_object* v_k_x27_878_; uint8_t v___x_879_; 
v_k_x27_878_ = lean_array_fget_borrowed(v_ks_866_, v_x_863_);
v___x_879_ = l_Lean_instBEqMVarId_beq(v_x_864_, v_k_x27_878_);
if (v___x_879_ == 0)
{
lean_object* v___x_881_; 
if (v_isShared_870_ == 0)
{
v___x_881_ = v___x_869_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_ks_866_);
lean_ctor_set(v_reuseFailAlloc_885_, 1, v_vs_867_);
v___x_881_ = v_reuseFailAlloc_885_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = lean_unsigned_to_nat(1u);
v___x_883_ = lean_nat_add(v_x_863_, v___x_882_);
lean_dec(v_x_863_);
v_x_862_ = v___x_881_;
v_x_863_ = v___x_883_;
goto _start;
}
}
else
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_889_; 
v___x_886_ = lean_array_fset(v_ks_866_, v_x_863_, v_x_864_);
v___x_887_ = lean_array_fset(v_vs_867_, v_x_863_, v_x_865_);
lean_dec(v_x_863_);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 1, v___x_887_);
lean_ctor_set(v___x_869_, 0, v___x_886_);
v___x_889_ = v___x_869_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v___x_886_);
lean_ctor_set(v_reuseFailAlloc_890_, 1, v___x_887_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__10___redArg(lean_object* v_n_892_, lean_object* v_k_893_, lean_object* v_v_894_){
_start:
{
lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_895_ = lean_unsigned_to_nat(0u);
v___x_896_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__10_spec__13___redArg(v_n_892_, v___x_895_, v_k_893_, v_v_894_);
return v___x_896_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_897_ = lean_box(0);
v___x_898_ = l_unsafeCast___redArg(v___x_897_);
return v___x_898_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_899_; 
v___x_899_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg(lean_object* v_x_900_, size_t v_x_901_, size_t v_x_902_, lean_object* v_x_903_, lean_object* v_x_904_){
_start:
{
if (lean_obj_tag(v_x_900_) == 0)
{
lean_object* v_es_905_; size_t v___x_906_; size_t v___x_907_; lean_object* v_j_908_; lean_object* v___x_909_; uint8_t v___x_910_; 
v_es_905_ = lean_ctor_get(v_x_900_, 0);
v___x_906_ = ((size_t)31ULL);
v___x_907_ = lean_usize_land(v_x_901_, v___x_906_);
v_j_908_ = lean_usize_to_nat(v___x_907_);
v___x_909_ = lean_array_get_size(v_es_905_);
v___x_910_ = lean_nat_dec_lt(v_j_908_, v___x_909_);
if (v___x_910_ == 0)
{
lean_dec(v_j_908_);
lean_dec(v_x_904_);
lean_dec(v_x_903_);
return v_x_900_;
}
else
{
lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_949_; 
lean_inc_ref(v_es_905_);
v_isSharedCheck_949_ = !lean_is_exclusive(v_x_900_);
if (v_isSharedCheck_949_ == 0)
{
lean_object* v_unused_950_; 
v_unused_950_ = lean_ctor_get(v_x_900_, 0);
lean_dec(v_unused_950_);
v___x_912_ = v_x_900_;
v_isShared_913_ = v_isSharedCheck_949_;
goto v_resetjp_911_;
}
else
{
lean_dec(v_x_900_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_949_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v_v_914_; lean_object* v___x_915_; lean_object* v_xs_x27_916_; lean_object* v___y_918_; 
v_v_914_ = lean_array_fget(v_es_905_, v_j_908_);
v___x_915_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg___closed__0);
v_xs_x27_916_ = lean_array_fset(v_es_905_, v_j_908_, v___x_915_);
switch(lean_obj_tag(v_v_914_))
{
case 0:
{
lean_object* v_key_923_; lean_object* v_val_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_934_; 
v_key_923_ = lean_ctor_get(v_v_914_, 0);
v_val_924_ = lean_ctor_get(v_v_914_, 1);
v_isSharedCheck_934_ = !lean_is_exclusive(v_v_914_);
if (v_isSharedCheck_934_ == 0)
{
v___x_926_ = v_v_914_;
v_isShared_927_ = v_isSharedCheck_934_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_val_924_);
lean_inc(v_key_923_);
lean_dec(v_v_914_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_934_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
uint8_t v___x_928_; 
v___x_928_ = l_Lean_instBEqMVarId_beq(v_x_903_, v_key_923_);
if (v___x_928_ == 0)
{
lean_object* v___x_929_; lean_object* v___x_930_; 
lean_del_object(v___x_926_);
v___x_929_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_923_, v_val_924_, v_x_903_, v_x_904_);
v___x_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_930_, 0, v___x_929_);
v___y_918_ = v___x_930_;
goto v___jp_917_;
}
else
{
lean_object* v___x_932_; 
lean_dec(v_val_924_);
lean_dec(v_key_923_);
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 1, v_x_904_);
lean_ctor_set(v___x_926_, 0, v_x_903_);
v___x_932_ = v___x_926_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v_x_903_);
lean_ctor_set(v_reuseFailAlloc_933_, 1, v_x_904_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
v___y_918_ = v___x_932_;
goto v___jp_917_;
}
}
}
}
case 1:
{
lean_object* v_node_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_947_; 
v_node_935_ = lean_ctor_get(v_v_914_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v_v_914_);
if (v_isSharedCheck_947_ == 0)
{
v___x_937_ = v_v_914_;
v_isShared_938_ = v_isSharedCheck_947_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_node_935_);
lean_dec(v_v_914_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_947_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
size_t v___x_939_; size_t v___x_940_; size_t v___x_941_; size_t v___x_942_; lean_object* v___x_943_; lean_object* v___x_945_; 
v___x_939_ = ((size_t)5ULL);
v___x_940_ = lean_usize_shift_right(v_x_901_, v___x_939_);
v___x_941_ = ((size_t)1ULL);
v___x_942_ = lean_usize_add(v_x_902_, v___x_941_);
v___x_943_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg(v_node_935_, v___x_940_, v___x_942_, v_x_903_, v_x_904_);
if (v_isShared_938_ == 0)
{
lean_ctor_set(v___x_937_, 0, v___x_943_);
v___x_945_ = v___x_937_;
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
v___y_918_ = v___x_945_;
goto v___jp_917_;
}
}
}
default: 
{
lean_object* v___x_948_; 
v___x_948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_948_, 0, v_x_903_);
lean_ctor_set(v___x_948_, 1, v_x_904_);
v___y_918_ = v___x_948_;
goto v___jp_917_;
}
}
v___jp_917_:
{
lean_object* v___x_919_; lean_object* v___x_921_; 
v___x_919_ = lean_array_fset(v_xs_x27_916_, v_j_908_, v___y_918_);
lean_dec(v_j_908_);
if (v_isShared_913_ == 0)
{
lean_ctor_set(v___x_912_, 0, v___x_919_);
v___x_921_ = v___x_912_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v___x_919_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
}
else
{
lean_object* v_ks_951_; lean_object* v_vs_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_970_; 
v_ks_951_ = lean_ctor_get(v_x_900_, 0);
v_vs_952_ = lean_ctor_get(v_x_900_, 1);
v_isSharedCheck_970_ = !lean_is_exclusive(v_x_900_);
if (v_isSharedCheck_970_ == 0)
{
v___x_954_ = v_x_900_;
v_isShared_955_ = v_isSharedCheck_970_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_vs_952_);
lean_inc(v_ks_951_);
lean_dec(v_x_900_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_970_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_957_; 
if (v_isShared_955_ == 0)
{
v___x_957_ = v___x_954_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_ks_951_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v_vs_952_);
v___x_957_ = v_reuseFailAlloc_969_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
lean_object* v_newNode_958_; size_t v___x_959_; uint8_t v___x_960_; 
v_newNode_958_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__10___redArg(v___x_957_, v_x_903_, v_x_904_);
v___x_959_ = ((size_t)7ULL);
v___x_960_ = lean_usize_dec_le(v___x_959_, v_x_902_);
if (v___x_960_ == 0)
{
lean_object* v___x_961_; lean_object* v___x_962_; uint8_t v___x_963_; 
v___x_961_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_958_);
v___x_962_ = lean_unsigned_to_nat(4u);
v___x_963_ = lean_nat_dec_lt(v___x_961_, v___x_962_);
lean_dec(v___x_961_);
if (v___x_963_ == 0)
{
lean_object* v_ks_964_; lean_object* v_vs_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v_ks_964_ = lean_ctor_get(v_newNode_958_, 0);
lean_inc_ref(v_ks_964_);
v_vs_965_ = lean_ctor_get(v_newNode_958_, 1);
lean_inc_ref(v_vs_965_);
lean_dec_ref(v_newNode_958_);
v___x_966_ = lean_unsigned_to_nat(0u);
v___x_967_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg___closed__1);
v___x_968_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__11___redArg(v_x_902_, v_ks_964_, v_vs_965_, v___x_966_, v___x_967_);
lean_dec_ref(v_vs_965_);
lean_dec_ref(v_ks_964_);
return v___x_968_;
}
else
{
return v_newNode_958_;
}
}
else
{
return v_newNode_958_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__11___redArg(size_t v_depth_971_, lean_object* v_keys_972_, lean_object* v_vals_973_, lean_object* v_i_974_, lean_object* v_entries_975_){
_start:
{
lean_object* v___x_976_; uint8_t v___x_977_; 
v___x_976_ = lean_array_get_size(v_keys_972_);
v___x_977_ = lean_nat_dec_lt(v_i_974_, v___x_976_);
if (v___x_977_ == 0)
{
lean_dec(v_i_974_);
return v_entries_975_;
}
else
{
lean_object* v_k_978_; lean_object* v_v_979_; uint64_t v___x_980_; size_t v_h_981_; size_t v___x_982_; lean_object* v___x_983_; size_t v___x_984_; size_t v___x_985_; size_t v___x_986_; size_t v_h_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v_k_978_ = lean_array_fget_borrowed(v_keys_972_, v_i_974_);
v_v_979_ = lean_array_fget_borrowed(v_vals_973_, v_i_974_);
v___x_980_ = l_Lean_instHashableMVarId_hash(v_k_978_);
v_h_981_ = lean_uint64_to_usize(v___x_980_);
v___x_982_ = ((size_t)5ULL);
v___x_983_ = lean_unsigned_to_nat(1u);
v___x_984_ = ((size_t)1ULL);
v___x_985_ = lean_usize_sub(v_depth_971_, v___x_984_);
v___x_986_ = lean_usize_mul(v___x_982_, v___x_985_);
v_h_987_ = lean_usize_shift_right(v_h_981_, v___x_986_);
v___x_988_ = lean_nat_add(v_i_974_, v___x_983_);
lean_dec(v_i_974_);
lean_inc(v_v_979_);
lean_inc(v_k_978_);
v___x_989_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg(v_entries_975_, v_h_987_, v_depth_971_, v_k_978_, v_v_979_);
v_i_974_ = v___x_988_;
v_entries_975_ = v___x_989_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__11___redArg___boxed(lean_object* v_depth_991_, lean_object* v_keys_992_, lean_object* v_vals_993_, lean_object* v_i_994_, lean_object* v_entries_995_){
_start:
{
size_t v_depth_boxed_996_; lean_object* v_res_997_; 
v_depth_boxed_996_ = lean_unbox_usize(v_depth_991_);
lean_dec(v_depth_991_);
v_res_997_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__11___redArg(v_depth_boxed_996_, v_keys_992_, v_vals_993_, v_i_994_, v_entries_995_);
lean_dec_ref(v_vals_993_);
lean_dec_ref(v_keys_992_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_x_998_, lean_object* v_x_999_, lean_object* v_x_1000_, lean_object* v_x_1001_, lean_object* v_x_1002_){
_start:
{
size_t v_x_11795__boxed_1003_; size_t v_x_11796__boxed_1004_; lean_object* v_res_1005_; 
v_x_11795__boxed_1003_ = lean_unbox_usize(v_x_999_);
lean_dec(v_x_999_);
v_x_11796__boxed_1004_ = lean_unbox_usize(v_x_1000_);
lean_dec(v_x_1000_);
v_res_1005_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg(v_x_998_, v_x_11795__boxed_1003_, v_x_11796__boxed_1004_, v_x_1001_, v_x_1002_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2___redArg(lean_object* v_x_1006_, lean_object* v_x_1007_, lean_object* v_x_1008_){
_start:
{
uint64_t v___x_1009_; size_t v___x_1010_; size_t v___x_1011_; lean_object* v___x_1012_; 
v___x_1009_ = l_Lean_instHashableMVarId_hash(v_x_1007_);
v___x_1010_ = lean_uint64_to_usize(v___x_1009_);
v___x_1011_ = ((size_t)1ULL);
v___x_1012_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg(v_x_1006_, v___x_1010_, v___x_1011_, v_x_1007_, v_x_1008_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1___redArg(lean_object* v_mvarId_1013_, lean_object* v_val_1014_, lean_object* v___y_1015_){
_start:
{
lean_object* v___x_1017_; lean_object* v_mctx_1018_; lean_object* v_cache_1019_; lean_object* v_zetaDeltaFVarIds_1020_; lean_object* v_postponed_1021_; lean_object* v_diag_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1051_; 
v___x_1017_ = lean_st_ref_take(v___y_1015_);
v_mctx_1018_ = lean_ctor_get(v___x_1017_, 0);
v_cache_1019_ = lean_ctor_get(v___x_1017_, 1);
v_zetaDeltaFVarIds_1020_ = lean_ctor_get(v___x_1017_, 2);
v_postponed_1021_ = lean_ctor_get(v___x_1017_, 3);
v_diag_1022_ = lean_ctor_get(v___x_1017_, 4);
v_isSharedCheck_1051_ = !lean_is_exclusive(v___x_1017_);
if (v_isSharedCheck_1051_ == 0)
{
v___x_1024_ = v___x_1017_;
v_isShared_1025_ = v_isSharedCheck_1051_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_diag_1022_);
lean_inc(v_postponed_1021_);
lean_inc(v_zetaDeltaFVarIds_1020_);
lean_inc(v_cache_1019_);
lean_inc(v_mctx_1018_);
lean_dec(v___x_1017_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1051_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v_depth_1026_; lean_object* v_levelAssignDepth_1027_; lean_object* v_lmvarCounter_1028_; lean_object* v_mvarCounter_1029_; lean_object* v_lDecls_1030_; lean_object* v_decls_1031_; lean_object* v_userNames_1032_; lean_object* v_lAssignment_1033_; lean_object* v_eAssignment_1034_; lean_object* v_dAssignment_1035_; lean_object* v_instanceTypedMVars_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1050_; 
v_depth_1026_ = lean_ctor_get(v_mctx_1018_, 0);
v_levelAssignDepth_1027_ = lean_ctor_get(v_mctx_1018_, 1);
v_lmvarCounter_1028_ = lean_ctor_get(v_mctx_1018_, 2);
v_mvarCounter_1029_ = lean_ctor_get(v_mctx_1018_, 3);
v_lDecls_1030_ = lean_ctor_get(v_mctx_1018_, 4);
v_decls_1031_ = lean_ctor_get(v_mctx_1018_, 5);
v_userNames_1032_ = lean_ctor_get(v_mctx_1018_, 6);
v_lAssignment_1033_ = lean_ctor_get(v_mctx_1018_, 7);
v_eAssignment_1034_ = lean_ctor_get(v_mctx_1018_, 8);
v_dAssignment_1035_ = lean_ctor_get(v_mctx_1018_, 9);
v_instanceTypedMVars_1036_ = lean_ctor_get(v_mctx_1018_, 10);
v_isSharedCheck_1050_ = !lean_is_exclusive(v_mctx_1018_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1038_ = v_mctx_1018_;
v_isShared_1039_ = v_isSharedCheck_1050_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_instanceTypedMVars_1036_);
lean_inc(v_dAssignment_1035_);
lean_inc(v_eAssignment_1034_);
lean_inc(v_lAssignment_1033_);
lean_inc(v_userNames_1032_);
lean_inc(v_decls_1031_);
lean_inc(v_lDecls_1030_);
lean_inc(v_mvarCounter_1029_);
lean_inc(v_lmvarCounter_1028_);
lean_inc(v_levelAssignDepth_1027_);
lean_inc(v_depth_1026_);
lean_dec(v_mctx_1018_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1050_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1043_; 
v___x_1040_ = lean_box(0);
v___x_1041_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2___redArg(v_eAssignment_1034_, v_mvarId_1013_, v_val_1014_);
if (v_isShared_1039_ == 0)
{
lean_ctor_set(v___x_1038_, 8, v___x_1041_);
v___x_1043_ = v___x_1038_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_depth_1026_);
lean_ctor_set(v_reuseFailAlloc_1049_, 1, v_levelAssignDepth_1027_);
lean_ctor_set(v_reuseFailAlloc_1049_, 2, v_lmvarCounter_1028_);
lean_ctor_set(v_reuseFailAlloc_1049_, 3, v_mvarCounter_1029_);
lean_ctor_set(v_reuseFailAlloc_1049_, 4, v_lDecls_1030_);
lean_ctor_set(v_reuseFailAlloc_1049_, 5, v_decls_1031_);
lean_ctor_set(v_reuseFailAlloc_1049_, 6, v_userNames_1032_);
lean_ctor_set(v_reuseFailAlloc_1049_, 7, v_lAssignment_1033_);
lean_ctor_set(v_reuseFailAlloc_1049_, 8, v___x_1041_);
lean_ctor_set(v_reuseFailAlloc_1049_, 9, v_dAssignment_1035_);
lean_ctor_set(v_reuseFailAlloc_1049_, 10, v_instanceTypedMVars_1036_);
v___x_1043_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
lean_object* v___x_1045_; 
if (v_isShared_1025_ == 0)
{
lean_ctor_set(v___x_1024_, 0, v___x_1043_);
v___x_1045_ = v___x_1024_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v___x_1043_);
lean_ctor_set(v_reuseFailAlloc_1048_, 1, v_cache_1019_);
lean_ctor_set(v_reuseFailAlloc_1048_, 2, v_zetaDeltaFVarIds_1020_);
lean_ctor_set(v_reuseFailAlloc_1048_, 3, v_postponed_1021_);
lean_ctor_set(v_reuseFailAlloc_1048_, 4, v_diag_1022_);
v___x_1045_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1046_ = lean_st_ref_put(v___y_1015_, v___x_1045_);
v___x_1047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1040_);
return v___x_1047_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1___redArg___boxed(lean_object* v_mvarId_1052_, lean_object* v_val_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_){
_start:
{
lean_object* v_res_1056_; 
v_res_1056_ = l_Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1___redArg(v_mvarId_1052_, v_val_1053_, v___y_1054_);
lean_dec(v___y_1054_);
return v_res_1056_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1060_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__1));
v___x_1061_ = l_Lean_MessageData_ofFormat(v___x_1060_);
return v___x_1061_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1062_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__2);
v___x_1063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg(lean_object* v_upperBound_1064_, lean_object* v___y_1065_, lean_object* v___x_1066_, lean_object* v___x_1067_, lean_object* v_a_1068_, lean_object* v_mvarId_1069_, lean_object* v_a_1070_, lean_object* v_b_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_){
_start:
{
uint8_t v___x_1077_; 
v___x_1077_ = lean_nat_dec_lt(v_a_1070_, v_upperBound_1064_);
if (v___x_1077_ == 0)
{
lean_object* v___x_1078_; 
lean_dec(v_a_1070_);
lean_dec(v_mvarId_1069_);
lean_dec(v_a_1068_);
lean_dec_ref(v___x_1066_);
lean_dec_ref(v___y_1065_);
v___x_1078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1078_, 0, v_b_1071_);
return v___x_1078_;
}
else
{
lean_object* v_snd_1079_; lean_object* v_snd_1080_; lean_object* v_fst_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1163_; 
v_snd_1079_ = lean_ctor_get(v_b_1071_, 1);
lean_inc(v_snd_1079_);
v_snd_1080_ = lean_ctor_get(v_snd_1079_, 1);
lean_inc(v_snd_1080_);
v_fst_1081_ = lean_ctor_get(v_b_1071_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v_b_1071_);
if (v_isSharedCheck_1163_ == 0)
{
lean_object* v_unused_1164_; 
v_unused_1164_ = lean_ctor_get(v_b_1071_, 1);
lean_dec(v_unused_1164_);
v___x_1083_ = v_b_1071_;
v_isShared_1084_ = v_isSharedCheck_1163_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_fst_1081_);
lean_dec(v_b_1071_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1163_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v_fst_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1161_; 
v_fst_1085_ = lean_ctor_get(v_snd_1079_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v_snd_1079_);
if (v_isSharedCheck_1161_ == 0)
{
lean_object* v_unused_1162_; 
v_unused_1162_ = lean_ctor_get(v_snd_1079_, 1);
lean_dec(v_unused_1162_);
v___x_1087_ = v_snd_1079_;
v_isShared_1088_ = v_isSharedCheck_1161_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_fst_1085_);
lean_dec(v_snd_1079_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1161_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v_fst_1089_; lean_object* v_snd_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1160_; 
v_fst_1089_ = lean_ctor_get(v_snd_1080_, 0);
v_snd_1090_ = lean_ctor_get(v_snd_1080_, 1);
v_isSharedCheck_1160_ = !lean_is_exclusive(v_snd_1080_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1092_ = v_snd_1080_;
v_isShared_1093_ = v_isSharedCheck_1160_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_snd_1090_);
lean_inc(v_fst_1089_);
lean_dec(v_snd_1080_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1160_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v_a_1097_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1094_ = lean_unsigned_to_nat(0u);
v___x_1095_ = lean_unsigned_to_nat(1u);
v___x_1100_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__2));
lean_inc(v___y_1075_);
lean_inc_ref(v___y_1074_);
lean_inc(v___y_1073_);
lean_inc_ref(v___y_1072_);
lean_inc(v_fst_1085_);
v___x_1101_ = lean_whnf(v_fst_1085_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_);
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_object* v_a_1102_; 
v_a_1102_ = lean_ctor_get(v___x_1101_, 0);
lean_inc(v_a_1102_);
lean_dec_ref_known(v___x_1101_, 1);
if (lean_obj_tag(v_a_1102_) == 7)
{
lean_object* v_binderType_1103_; lean_object* v_body_1104_; lean_object* v___y_1106_; uint8_t v___x_1131_; 
lean_dec(v_fst_1085_);
v_binderType_1103_ = lean_ctor_get(v_a_1102_, 1);
lean_inc_ref(v_binderType_1103_);
v_body_1104_ = lean_ctor_get(v_a_1102_, 2);
lean_inc_ref(v_body_1104_);
lean_dec_ref_known(v_a_1102_, 3);
v___x_1131_ = lean_nat_dec_lt(v___x_1095_, v___x_1067_);
if (v___x_1131_ == 0)
{
lean_inc(v_a_1068_);
v___y_1106_ = v_a_1068_;
goto v___jp_1105_;
}
else
{
lean_object* v___x_1132_; 
lean_inc(v_snd_1090_);
lean_inc(v_a_1068_);
v___x_1132_ = l_Lean_Name_num___override(v_a_1068_, v_snd_1090_);
v___y_1106_ = v___x_1132_;
goto v___jp_1105_;
}
v___jp_1105_:
{
uint8_t v___x_1107_; lean_object* v___x_1108_; 
v___x_1107_ = 2;
lean_inc_ref(v___x_1066_);
lean_inc_ref(v___y_1065_);
v___x_1108_ = l_Lean_Meta_mkFreshExprMVarAt(v___y_1065_, v___x_1066_, v_binderType_1103_, v___x_1107_, v___y_1106_, v___x_1094_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_);
if (lean_obj_tag(v___x_1108_) == 0)
{
lean_object* v_a_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1115_; 
v_a_1109_ = lean_ctor_get(v___x_1108_, 0);
lean_inc_n(v_a_1109_, 2);
lean_dec_ref_known(v___x_1108_, 1);
v___x_1110_ = l_Lean_Expr_app___override(v_fst_1081_, v_a_1109_);
v___x_1111_ = l_Lean_Expr_mvarId_x21(v_a_1109_);
lean_dec(v_a_1109_);
v___x_1112_ = lean_array_push(v_fst_1089_, v___x_1111_);
v___x_1113_ = lean_nat_add(v_snd_1090_, v___x_1095_);
lean_dec(v_snd_1090_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 1, v___x_1113_);
lean_ctor_set(v___x_1092_, 0, v___x_1112_);
v___x_1115_ = v___x_1092_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v___x_1112_);
lean_ctor_set(v_reuseFailAlloc_1122_, 1, v___x_1113_);
v___x_1115_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
lean_object* v___x_1117_; 
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 1, v___x_1115_);
lean_ctor_set(v___x_1087_, 0, v_body_1104_);
v___x_1117_ = v___x_1087_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_body_1104_);
lean_ctor_set(v_reuseFailAlloc_1121_, 1, v___x_1115_);
v___x_1117_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
lean_object* v___x_1119_; 
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 1, v___x_1117_);
lean_ctor_set(v___x_1083_, 0, v___x_1110_);
v___x_1119_ = v___x_1083_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v___x_1110_);
lean_ctor_set(v_reuseFailAlloc_1120_, 1, v___x_1117_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
v_a_1097_ = v___x_1119_;
goto v___jp_1096_;
}
}
}
}
else
{
lean_object* v_a_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1130_; 
lean_dec_ref(v_body_1104_);
lean_del_object(v___x_1092_);
lean_dec(v_snd_1090_);
lean_dec(v_fst_1089_);
lean_del_object(v___x_1087_);
lean_del_object(v___x_1083_);
lean_dec(v_fst_1081_);
lean_dec(v_a_1070_);
lean_dec(v_mvarId_1069_);
lean_dec(v_a_1068_);
lean_dec_ref(v___x_1066_);
lean_dec_ref(v___y_1065_);
v_a_1123_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1125_ = v___x_1108_;
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_a_1123_);
lean_dec(v___x_1108_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1128_; 
if (v_isShared_1126_ == 0)
{
v___x_1128_ = v___x_1125_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v_a_1123_);
v___x_1128_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
return v___x_1128_;
}
}
}
}
}
else
{
lean_object* v___x_1133_; lean_object* v___x_1134_; 
lean_dec(v_a_1102_);
v___x_1133_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___closed__3);
lean_inc(v_mvarId_1069_);
v___x_1134_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1100_, v_mvarId_1069_, v___x_1133_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_);
if (lean_obj_tag(v___x_1134_) == 0)
{
lean_object* v___x_1136_; 
lean_dec_ref_known(v___x_1134_, 1);
if (v_isShared_1093_ == 0)
{
v___x_1136_ = v___x_1092_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_fst_1089_);
lean_ctor_set(v_reuseFailAlloc_1143_, 1, v_snd_1090_);
v___x_1136_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
lean_object* v___x_1138_; 
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 1, v___x_1136_);
v___x_1138_ = v___x_1087_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_fst_1085_);
lean_ctor_set(v_reuseFailAlloc_1142_, 1, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
lean_object* v___x_1140_; 
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 1, v___x_1138_);
v___x_1140_ = v___x_1083_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_fst_1081_);
lean_ctor_set(v_reuseFailAlloc_1141_, 1, v___x_1138_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
v_a_1097_ = v___x_1140_;
goto v___jp_1096_;
}
}
}
}
else
{
lean_object* v_a_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1151_; 
lean_del_object(v___x_1092_);
lean_dec(v_snd_1090_);
lean_dec(v_fst_1089_);
lean_del_object(v___x_1087_);
lean_dec(v_fst_1085_);
lean_del_object(v___x_1083_);
lean_dec(v_fst_1081_);
lean_dec(v_a_1070_);
lean_dec(v_mvarId_1069_);
lean_dec(v_a_1068_);
lean_dec_ref(v___x_1066_);
lean_dec_ref(v___y_1065_);
v_a_1144_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1151_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1146_ = v___x_1134_;
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_a_1144_);
lean_dec(v___x_1134_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v___x_1149_; 
if (v_isShared_1147_ == 0)
{
v___x_1149_ = v___x_1146_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v_a_1144_);
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
else
{
lean_object* v_a_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1159_; 
lean_del_object(v___x_1092_);
lean_dec(v_snd_1090_);
lean_dec(v_fst_1089_);
lean_del_object(v___x_1087_);
lean_dec(v_fst_1085_);
lean_del_object(v___x_1083_);
lean_dec(v_fst_1081_);
lean_dec(v_a_1070_);
lean_dec(v_mvarId_1069_);
lean_dec(v_a_1068_);
lean_dec_ref(v___x_1066_);
lean_dec_ref(v___y_1065_);
v_a_1152_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1154_ = v___x_1101_;
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_a_1152_);
lean_dec(v___x_1101_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1157_; 
if (v_isShared_1155_ == 0)
{
v___x_1157_ = v___x_1154_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_a_1152_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
}
v___jp_1096_:
{
lean_object* v___x_1098_; 
v___x_1098_ = lean_nat_add(v_a_1070_, v___x_1095_);
lean_dec(v_a_1070_);
v_a_1070_ = v___x_1098_;
v_b_1071_ = v_a_1097_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg___boxed(lean_object* v_upperBound_1165_, lean_object* v___y_1166_, lean_object* v___x_1167_, lean_object* v___x_1168_, lean_object* v_a_1169_, lean_object* v_mvarId_1170_, lean_object* v_a_1171_, lean_object* v_b_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg(v_upperBound_1165_, v___y_1166_, v___x_1167_, v___x_1168_, v_a_1169_, v_mvarId_1170_, v_a_1171_, v_b_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
lean_dec(v___x_1168_);
lean_dec(v_upperBound_1165_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_cases_spec__2(size_t v_sz_1179_, size_t v_i_1180_, lean_object* v_bs_1181_){
_start:
{
uint8_t v___x_1182_; 
v___x_1182_ = lean_usize_dec_lt(v_i_1180_, v_sz_1179_);
if (v___x_1182_ == 0)
{
lean_object* v___x_1183_; 
v___x_1183_ = l_unsafeCast___redArg(v_bs_1181_);
lean_dec_ref(v_bs_1181_);
return v___x_1183_;
}
else
{
lean_object* v_v_1184_; lean_object* v___x_1185_; lean_object* v_bs_x27_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; size_t v___x_1189_; size_t v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v_v_1184_ = lean_array_uget(v_bs_1181_, v_i_1180_);
v___x_1185_ = lean_unsigned_to_nat(0u);
v_bs_x27_1186_ = lean_array_uset(v_bs_1181_, v_i_1180_, v___x_1185_);
v___x_1187_ = l_unsafeCast___redArg(v_v_1184_);
lean_dec(v_v_1184_);
v___x_1188_ = l_Lean_mkFVar(v___x_1187_);
v___x_1189_ = ((size_t)1ULL);
v___x_1190_ = lean_usize_add(v_i_1180_, v___x_1189_);
v___x_1191_ = l_unsafeCast___redArg(v___x_1188_);
lean_dec_ref(v___x_1188_);
v___x_1192_ = lean_array_uset(v_bs_x27_1186_, v_i_1180_, v___x_1191_);
v_i_1180_ = v___x_1190_;
v_bs_1181_ = v___x_1192_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_cases_spec__2___boxed(lean_object* v_sz_1194_, lean_object* v_i_1195_, lean_object* v_bs_1196_){
_start:
{
size_t v_sz_boxed_1197_; size_t v_i_boxed_1198_; lean_object* v_res_1199_; 
v_sz_boxed_1197_ = lean_unbox_usize(v_sz_1194_);
lean_dec(v_sz_1194_);
v_i_boxed_1198_ = lean_unbox_usize(v_i_1195_);
lean_dec(v_i_1195_);
v_res_1199_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_cases_spec__2(v_sz_boxed_1197_, v_i_boxed_1198_, v_bs_1196_);
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lam__0(lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_mvarId_1207_, lean_object* v_fvarId_1208_, lean_object* v_indices_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_){
_start:
{
size_t v_sz_1215_; size_t v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; 
v_sz_1215_ = lean_array_size(v_indices_1209_);
v___x_1216_ = ((size_t)0ULL);
v___x_1217_ = l_unsafeCast___redArg(v_indices_1209_);
v___x_1218_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_cases_spec__2(v_sz_1215_, v___x_1216_, v___x_1217_);
v___x_1219_ = l_unsafeCast___redArg(v___x_1218_);
lean_dec_ref(v___x_1218_);
v___x_1220_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg___closed__2));
lean_inc(v___x_1219_);
lean_inc_ref(v_a_1205_);
lean_inc(v_fvarId_1208_);
lean_inc(v_mvarId_1207_);
v___x_1221_ = l_Lean_Meta_mkRecursorAppPrefix(v_mvarId_1207_, v___x_1220_, v_fvarId_1208_, v_a_1205_, v___x_1219_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_);
if (lean_obj_tag(v___x_1221_) == 0)
{
lean_object* v_a_1222_; lean_object* v_lctx_1223_; lean_object* v_localInstances_1224_; uint8_t v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___y_1229_; lean_object* v___x_1271_; uint8_t v___x_1272_; 
v_a_1222_ = lean_ctor_get(v___x_1221_, 0);
lean_inc(v_a_1222_);
lean_dec_ref_known(v___x_1221_, 1);
v_lctx_1223_ = lean_ctor_get(v___y_1210_, 2);
v_localInstances_1224_ = lean_ctor_get(v___y_1210_, 3);
v___x_1225_ = 1;
lean_inc(v_fvarId_1208_);
lean_inc_ref(v_lctx_1223_);
v___x_1226_ = l_Lean_LocalContext_setKind(v_lctx_1223_, v_fvarId_1208_, v___x_1225_);
v___x_1227_ = lean_unsigned_to_nat(0u);
v___x_1271_ = lean_array_get_size(v_indices_1209_);
v___x_1272_ = lean_nat_dec_lt(v___x_1227_, v___x_1271_);
if (v___x_1272_ == 0)
{
v___y_1229_ = v___x_1226_;
goto v___jp_1228_;
}
else
{
uint8_t v___x_1273_; 
v___x_1273_ = lean_nat_dec_le(v___x_1271_, v___x_1271_);
if (v___x_1273_ == 0)
{
if (v___x_1272_ == 0)
{
v___y_1229_ = v___x_1226_;
goto v___jp_1228_;
}
else
{
size_t v___x_1274_; lean_object* v___x_1275_; 
v___x_1274_ = lean_usize_of_nat(v___x_1271_);
v___x_1275_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_cases_spec__4(v_indices_1209_, v___x_1216_, v___x_1274_, v___x_1226_);
v___y_1229_ = v___x_1275_;
goto v___jp_1228_;
}
}
else
{
size_t v___x_1276_; lean_object* v___x_1277_; 
v___x_1276_ = lean_usize_of_nat(v___x_1271_);
v___x_1277_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_cases_spec__4(v_indices_1209_, v___x_1216_, v___x_1276_, v___x_1226_);
v___y_1229_ = v___x_1277_;
goto v___jp_1228_;
}
}
v___jp_1228_:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1230_ = l_Lean_mkAppN(v_a_1222_, v___x_1219_);
lean_dec(v___x_1219_);
v___x_1231_ = l_Lean_mkFVar(v_fvarId_1208_);
v___x_1232_ = l_Lean_Expr_app___override(v___x_1230_, v___x_1231_);
lean_inc(v___y_1213_);
lean_inc_ref(v___y_1212_);
lean_inc(v___y_1211_);
lean_inc_ref(v___y_1210_);
lean_inc_ref(v___x_1232_);
v___x_1233_ = lean_infer_type(v___x_1232_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v_a_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v_a_1234_ = lean_ctor_get(v___x_1233_, 0);
lean_inc(v_a_1234_);
lean_dec_ref_known(v___x_1233_, 1);
v___x_1235_ = l_Lean_Meta_RecursorInfo_numMinors(v_a_1205_);
lean_dec_ref(v_a_1205_);
v___x_1236_ = ((lean_object*)(l_Lean_Meta_Grind_cases___lam__0___closed__1));
v___x_1237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1237_, 0, v_a_1234_);
lean_ctor_set(v___x_1237_, 1, v___x_1236_);
v___x_1238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1232_);
lean_ctor_set(v___x_1238_, 1, v___x_1237_);
lean_inc(v_mvarId_1207_);
lean_inc_ref(v_localInstances_1224_);
v___x_1239_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg(v___x_1235_, v___y_1229_, v_localInstances_1224_, v___x_1235_, v_a_1206_, v_mvarId_1207_, v___x_1227_, v___x_1238_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_);
lean_dec(v___x_1235_);
if (lean_obj_tag(v___x_1239_) == 0)
{
lean_object* v_a_1240_; lean_object* v_snd_1241_; lean_object* v_snd_1242_; lean_object* v_fst_1243_; lean_object* v_fst_1244_; lean_object* v___x_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1253_; 
v_a_1240_ = lean_ctor_get(v___x_1239_, 0);
lean_inc(v_a_1240_);
lean_dec_ref_known(v___x_1239_, 1);
v_snd_1241_ = lean_ctor_get(v_a_1240_, 1);
v_snd_1242_ = lean_ctor_get(v_snd_1241_, 1);
lean_inc(v_snd_1242_);
v_fst_1243_ = lean_ctor_get(v_a_1240_, 0);
lean_inc(v_fst_1243_);
lean_dec(v_a_1240_);
v_fst_1244_ = lean_ctor_get(v_snd_1242_, 0);
lean_inc(v_fst_1244_);
lean_dec(v_snd_1242_);
v___x_1245_ = l_Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1___redArg(v_mvarId_1207_, v_fst_1243_, v___y_1211_);
v_isSharedCheck_1253_ = !lean_is_exclusive(v___x_1245_);
if (v_isSharedCheck_1253_ == 0)
{
lean_object* v_unused_1254_; 
v_unused_1254_ = lean_ctor_get(v___x_1245_, 0);
lean_dec(v_unused_1254_);
v___x_1247_ = v___x_1245_;
v_isShared_1248_ = v_isSharedCheck_1253_;
goto v_resetjp_1246_;
}
else
{
lean_dec(v___x_1245_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1253_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___x_1249_; lean_object* v___x_1251_; 
v___x_1249_ = lean_array_to_list(v_fst_1244_);
if (v_isShared_1248_ == 0)
{
lean_ctor_set(v___x_1247_, 0, v___x_1249_);
v___x_1251_ = v___x_1247_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v___x_1249_);
v___x_1251_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
return v___x_1251_;
}
}
}
else
{
lean_object* v_a_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1262_; 
lean_dec(v_mvarId_1207_);
v_a_1255_ = lean_ctor_get(v___x_1239_, 0);
v_isSharedCheck_1262_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1257_ = v___x_1239_;
v_isShared_1258_ = v_isSharedCheck_1262_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_a_1255_);
lean_dec(v___x_1239_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1262_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v___x_1260_; 
if (v_isShared_1258_ == 0)
{
v___x_1260_ = v___x_1257_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v_a_1255_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
return v___x_1260_;
}
}
}
}
else
{
lean_object* v_a_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1270_; 
lean_dec_ref(v___x_1232_);
lean_dec_ref(v___y_1229_);
lean_dec(v_mvarId_1207_);
lean_dec(v_a_1206_);
lean_dec_ref(v_a_1205_);
v_a_1263_ = lean_ctor_get(v___x_1233_, 0);
v_isSharedCheck_1270_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1265_ = v___x_1233_;
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_a_1263_);
lean_dec(v___x_1233_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1268_; 
if (v_isShared_1266_ == 0)
{
v___x_1268_ = v___x_1265_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_a_1263_);
v___x_1268_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
return v___x_1268_;
}
}
}
}
}
else
{
lean_object* v_a_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1285_; 
lean_dec(v___x_1219_);
lean_dec(v_fvarId_1208_);
lean_dec(v_mvarId_1207_);
lean_dec(v_a_1206_);
lean_dec_ref(v_a_1205_);
v_a_1278_ = lean_ctor_get(v___x_1221_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1221_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1280_ = v___x_1221_;
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_a_1278_);
lean_dec(v___x_1221_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1283_; 
if (v_isShared_1281_ == 0)
{
v___x_1283_ = v___x_1280_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_a_1278_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lam__0___boxed(lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_mvarId_1288_, lean_object* v_fvarId_1289_, lean_object* v_indices_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_){
_start:
{
lean_object* v_res_1296_; 
v_res_1296_ = l_Lean_Meta_Grind_cases___lam__0(v_a_1286_, v_a_1287_, v_mvarId_1288_, v_fvarId_1289_, v_indices_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_);
lean_dec(v___y_1294_);
lean_dec_ref(v___y_1293_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
lean_dec_ref(v_indices_1290_);
return v_res_1296_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__1(void){
_start:
{
lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1298_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__0));
v___x_1299_ = l_Lean_stringToMessageData(v___x_1298_);
return v___x_1299_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__3(void){
_start:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1301_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__2));
v___x_1302_ = l_Lean_stringToMessageData(v___x_1301_);
return v___x_1302_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__5(void){
_start:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1304_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__4));
v___x_1305_ = l_Lean_stringToMessageData(v___x_1304_);
return v___x_1305_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__7(void){
_start:
{
lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1307_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__6));
v___x_1308_ = l_Lean_stringToMessageData(v___x_1307_);
return v___x_1308_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__9(void){
_start:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1310_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__8));
v___x_1311_ = l_Lean_stringToMessageData(v___x_1310_);
return v___x_1311_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__11(void){
_start:
{
lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1313_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__10));
v___x_1314_ = l_Lean_stringToMessageData(v___x_1313_);
return v___x_1314_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__13(void){
_start:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1316_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__12));
v___x_1317_ = l_Lean_stringToMessageData(v___x_1316_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg(lean_object* v_msg_1318_, lean_object* v_declHint_1319_, lean_object* v___y_1320_){
_start:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v_env_1324_; uint8_t v___x_1325_; 
v___x_1322_ = l_Lean_instInhabitedName;
v___x_1323_ = lean_st_ref_get(v___y_1320_);
v_env_1324_ = lean_ctor_get(v___x_1323_, 0);
lean_inc_ref(v_env_1324_);
lean_dec(v___x_1323_);
v___x_1325_ = l_Lean_Name_isAnonymous(v_declHint_1319_);
if (v___x_1325_ == 0)
{
uint8_t v_isExporting_1326_; 
v_isExporting_1326_ = lean_ctor_get_uint8(v_env_1324_, sizeof(void*)*8);
if (v_isExporting_1326_ == 0)
{
lean_object* v___x_1327_; 
lean_dec_ref(v_env_1324_);
lean_dec(v_declHint_1319_);
v___x_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1327_, 0, v_msg_1318_);
return v___x_1327_;
}
else
{
lean_object* v___x_1328_; uint8_t v___x_1329_; 
lean_inc_ref(v_env_1324_);
v___x_1328_ = l_Lean_Environment_setExporting(v_env_1324_, v___x_1325_);
lean_inc(v_declHint_1319_);
lean_inc_ref(v___x_1328_);
v___x_1329_ = l_Lean_Environment_contains(v___x_1328_, v_declHint_1319_, v_isExporting_1326_);
if (v___x_1329_ == 0)
{
lean_object* v___x_1330_; 
lean_dec_ref(v___x_1328_);
lean_dec_ref(v_env_1324_);
lean_dec(v_declHint_1319_);
v___x_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1330_, 0, v_msg_1318_);
return v___x_1330_;
}
else
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v_c_1336_; lean_object* v___x_1337_; 
v___x_1331_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__2);
v___x_1332_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateCasesAttr_spec__0_spec__0___closed__5);
v___x_1333_ = l_Lean_Options_empty;
v___x_1334_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1328_);
lean_ctor_set(v___x_1334_, 1, v___x_1331_);
lean_ctor_set(v___x_1334_, 2, v___x_1332_);
lean_ctor_set(v___x_1334_, 3, v___x_1333_);
lean_inc(v_declHint_1319_);
v___x_1335_ = l_Lean_MessageData_ofConstName(v_declHint_1319_, v___x_1325_);
v_c_1336_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1336_, 0, v___x_1334_);
lean_ctor_set(v_c_1336_, 1, v___x_1335_);
v___x_1337_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1324_, v_declHint_1319_);
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; 
lean_dec_ref(v_env_1324_);
lean_dec(v_declHint_1319_);
v___x_1338_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__1);
v___x_1339_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1338_);
lean_ctor_set(v___x_1339_, 1, v_c_1336_);
v___x_1340_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__3);
v___x_1341_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1339_);
lean_ctor_set(v___x_1341_, 1, v___x_1340_);
v___x_1342_ = l_Lean_MessageData_note(v___x_1341_);
v___x_1343_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1343_, 0, v_msg_1318_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
v___x_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1343_);
return v___x_1344_;
}
else
{
lean_object* v_val_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1379_; 
v_val_1345_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1347_ = v___x_1337_;
v_isShared_1348_ = v_isSharedCheck_1379_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_val_1345_);
lean_dec(v___x_1337_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1379_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v_mod_1351_; uint8_t v___x_1352_; 
v___x_1349_ = l_Lean_Environment_header(v_env_1324_);
lean_dec_ref(v_env_1324_);
v___x_1350_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1349_);
lean_dec_ref(v___x_1349_);
v_mod_1351_ = lean_array_get(v___x_1322_, v___x_1350_, v_val_1345_);
lean_dec(v_val_1345_);
lean_dec_ref(v___x_1350_);
v___x_1352_ = l_Lean_isPrivateName(v_declHint_1319_);
lean_dec(v_declHint_1319_);
if (v___x_1352_ == 0)
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1364_; 
v___x_1353_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__5);
v___x_1354_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1353_);
lean_ctor_set(v___x_1354_, 1, v_c_1336_);
v___x_1355_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__7);
v___x_1356_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1354_);
lean_ctor_set(v___x_1356_, 1, v___x_1355_);
v___x_1357_ = l_Lean_MessageData_ofName(v_mod_1351_);
v___x_1358_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1356_);
lean_ctor_set(v___x_1358_, 1, v___x_1357_);
v___x_1359_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__9);
v___x_1360_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1358_);
lean_ctor_set(v___x_1360_, 1, v___x_1359_);
v___x_1361_ = l_Lean_MessageData_note(v___x_1360_);
v___x_1362_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1362_, 0, v_msg_1318_);
lean_ctor_set(v___x_1362_, 1, v___x_1361_);
if (v_isShared_1348_ == 0)
{
lean_ctor_set_tag(v___x_1347_, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1362_);
v___x_1364_ = v___x_1347_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v___x_1362_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
return v___x_1364_;
}
}
else
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1377_; 
v___x_1366_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__1);
v___x_1367_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1366_);
lean_ctor_set(v___x_1367_, 1, v_c_1336_);
v___x_1368_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__11);
v___x_1369_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1367_);
lean_ctor_set(v___x_1369_, 1, v___x_1368_);
v___x_1370_ = l_Lean_MessageData_ofName(v_mod_1351_);
v___x_1371_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1371_, 0, v___x_1369_);
lean_ctor_set(v___x_1371_, 1, v___x_1370_);
v___x_1372_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___closed__13);
v___x_1373_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1373_, 0, v___x_1371_);
lean_ctor_set(v___x_1373_, 1, v___x_1372_);
v___x_1374_ = l_Lean_MessageData_note(v___x_1373_);
v___x_1375_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1375_, 0, v_msg_1318_);
lean_ctor_set(v___x_1375_, 1, v___x_1374_);
if (v_isShared_1348_ == 0)
{
lean_ctor_set_tag(v___x_1347_, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1375_);
v___x_1377_ = v___x_1347_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v___x_1375_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1380_; 
lean_dec_ref(v_env_1324_);
lean_dec(v_declHint_1319_);
v___x_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1380_, 0, v_msg_1318_);
return v___x_1380_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg___boxed(lean_object* v_msg_1381_, lean_object* v_declHint_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_){
_start:
{
lean_object* v_res_1385_; 
v_res_1385_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg(v_msg_1381_, v_declHint_1382_, v___y_1383_);
lean_dec(v___y_1383_);
return v_res_1385_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9(lean_object* v_msg_1386_, lean_object* v_declHint_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_){
_start:
{
lean_object* v___x_1393_; lean_object* v_a_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1403_; 
v___x_1393_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg(v_msg_1386_, v_declHint_1387_, v___y_1391_);
v_a_1394_ = lean_ctor_get(v___x_1393_, 0);
v_isSharedCheck_1403_ = !lean_is_exclusive(v___x_1393_);
if (v_isSharedCheck_1403_ == 0)
{
v___x_1396_ = v___x_1393_;
v_isShared_1397_ = v_isSharedCheck_1403_;
goto v_resetjp_1395_;
}
else
{
lean_inc(v_a_1394_);
lean_dec(v___x_1393_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1403_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1401_; 
v___x_1398_ = l_Lean_unknownIdentifierMessageTag;
v___x_1399_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1398_);
lean_ctor_set(v___x_1399_, 1, v_a_1394_);
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 0, v___x_1399_);
v___x_1401_ = v___x_1396_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v___x_1399_);
v___x_1401_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
return v___x_1401_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9___boxed(lean_object* v_msg_1404_, lean_object* v_declHint_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v_res_1411_; 
v_res_1411_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9(v_msg_1404_, v_declHint_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13_spec__16(lean_object* v_msgData_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_){
_start:
{
lean_object* v___x_1418_; lean_object* v_env_1419_; lean_object* v___x_1420_; lean_object* v_toCold_1421_; lean_object* v_mctx_1422_; lean_object* v_lctx_1423_; lean_object* v_options_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1418_ = lean_st_ref_get(v___y_1416_);
v_env_1419_ = lean_ctor_get(v___x_1418_, 0);
lean_inc_ref(v_env_1419_);
lean_dec(v___x_1418_);
v___x_1420_ = lean_st_ref_get(v___y_1414_);
v_toCold_1421_ = lean_ctor_get(v___y_1415_, 0);
v_mctx_1422_ = lean_ctor_get(v___x_1420_, 0);
lean_inc_ref(v_mctx_1422_);
lean_dec(v___x_1420_);
v_lctx_1423_ = lean_ctor_get(v___y_1413_, 2);
v_options_1424_ = lean_ctor_get(v_toCold_1421_, 2);
lean_inc_ref(v_options_1424_);
lean_inc_ref(v_lctx_1423_);
v___x_1425_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1425_, 0, v_env_1419_);
lean_ctor_set(v___x_1425_, 1, v_mctx_1422_);
lean_ctor_set(v___x_1425_, 2, v_lctx_1423_);
lean_ctor_set(v___x_1425_, 3, v_options_1424_);
v___x_1426_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1425_);
lean_ctor_set(v___x_1426_, 1, v_msgData_1412_);
v___x_1427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1426_);
return v___x_1427_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13_spec__16___boxed(lean_object* v_msgData_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_){
_start:
{
lean_object* v_res_1434_; 
v_res_1434_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13_spec__16(v_msgData_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
lean_dec(v___y_1432_);
lean_dec_ref(v___y_1431_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
return v_res_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13___redArg(lean_object* v_msg_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_){
_start:
{
lean_object* v_ref_1441_; lean_object* v___x_1442_; lean_object* v_a_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1451_; 
v_ref_1441_ = lean_ctor_get(v___y_1438_, 2);
v___x_1442_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13_spec__16(v_msg_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_);
v_a_1443_ = lean_ctor_get(v___x_1442_, 0);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1442_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1445_ = v___x_1442_;
v_isShared_1446_ = v_isSharedCheck_1451_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_a_1443_);
lean_dec(v___x_1442_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1451_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1447_; lean_object* v___x_1449_; 
lean_inc(v_ref_1441_);
v___x_1447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1447_, 0, v_ref_1441_);
lean_ctor_set(v___x_1447_, 1, v_a_1443_);
if (v_isShared_1446_ == 0)
{
lean_ctor_set_tag(v___x_1445_, 1);
lean_ctor_set(v___x_1445_, 0, v___x_1447_);
v___x_1449_ = v___x_1445_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v___x_1447_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
return v___x_1449_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13___redArg___boxed(lean_object* v_msg_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_){
_start:
{
lean_object* v_res_1458_; 
v_res_1458_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13___redArg(v_msg_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_);
lean_dec(v___y_1456_);
lean_dec_ref(v___y_1455_);
lean_dec(v___y_1454_);
lean_dec_ref(v___y_1453_);
return v_res_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10___redArg(lean_object* v_ref_1459_, lean_object* v_msg_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
lean_object* v_toCold_1466_; lean_object* v_currRecDepth_1467_; lean_object* v_ref_1468_; uint8_t v_diag_1469_; uint8_t v_suppressElabErrors_1470_; lean_object* v_ref_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v_toCold_1466_ = lean_ctor_get(v___y_1463_, 0);
v_currRecDepth_1467_ = lean_ctor_get(v___y_1463_, 1);
v_ref_1468_ = lean_ctor_get(v___y_1463_, 2);
v_diag_1469_ = lean_ctor_get_uint8(v___y_1463_, sizeof(void*)*3);
v_suppressElabErrors_1470_ = lean_ctor_get_uint8(v___y_1463_, sizeof(void*)*3 + 1);
v_ref_1471_ = l_Lean_replaceRef(v_ref_1459_, v_ref_1468_);
lean_inc(v_currRecDepth_1467_);
lean_inc_ref(v_toCold_1466_);
v___x_1472_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1472_, 0, v_toCold_1466_);
lean_ctor_set(v___x_1472_, 1, v_currRecDepth_1467_);
lean_ctor_set(v___x_1472_, 2, v_ref_1471_);
lean_ctor_set_uint8(v___x_1472_, sizeof(void*)*3, v_diag_1469_);
lean_ctor_set_uint8(v___x_1472_, sizeof(void*)*3 + 1, v_suppressElabErrors_1470_);
v___x_1473_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13___redArg(v_msg_1460_, v___y_1461_, v___y_1462_, v___x_1472_, v___y_1464_);
lean_dec_ref_known(v___x_1472_, 3);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10___redArg___boxed(lean_object* v_ref_1474_, lean_object* v_msg_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10___redArg(v_ref_1474_, v_msg_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
lean_dec(v___y_1479_);
lean_dec_ref(v___y_1478_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
lean_dec(v_ref_1474_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7___redArg(lean_object* v_ref_1482_, lean_object* v_msg_1483_, lean_object* v_declHint_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_){
_start:
{
lean_object* v___x_1490_; lean_object* v_a_1491_; lean_object* v___x_1492_; 
v___x_1490_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9(v_msg_1483_, v_declHint_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
v_a_1491_ = lean_ctor_get(v___x_1490_, 0);
lean_inc(v_a_1491_);
lean_dec_ref(v___x_1490_);
v___x_1492_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10___redArg(v_ref_1482_, v_a_1491_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
return v___x_1492_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7___redArg___boxed(lean_object* v_ref_1493_, lean_object* v_msg_1494_, lean_object* v_declHint_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7___redArg(v_ref_1493_, v_msg_1494_, v_declHint_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
lean_dec(v___y_1499_);
lean_dec_ref(v___y_1498_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
lean_dec(v_ref_1493_);
return v_res_1501_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1503_; lean_object* v___x_1504_; 
v___x_1503_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_1504_ = l_Lean_stringToMessageData(v___x_1503_);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___redArg(lean_object* v_ref_1505_, lean_object* v_constName_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v___x_1512_; uint8_t v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; 
v___x_1512_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_1513_ = 0;
lean_inc(v_constName_1506_);
v___x_1514_ = l_Lean_MessageData_ofConstName(v_constName_1506_, v___x_1513_);
v___x_1515_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1515_, 0, v___x_1512_);
lean_ctor_set(v___x_1515_, 1, v___x_1514_);
v___x_1516_ = lean_obj_once(&l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__1, &l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__1_once, _init_l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__1);
v___x_1517_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1515_);
lean_ctor_set(v___x_1517_, 1, v___x_1516_);
v___x_1518_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7___redArg(v_ref_1505_, v___x_1517_, v_constName_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_);
return v___x_1518_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_ref_1519_, lean_object* v_constName_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___redArg(v_ref_1519_, v_constName_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_);
lean_dec(v___y_1524_);
lean_dec_ref(v___y_1523_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
lean_dec(v_ref_1519_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0___redArg(lean_object* v_constName_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_){
_start:
{
lean_object* v_ref_1533_; lean_object* v___x_1534_; 
v_ref_1533_ = lean_ctor_get(v___y_1530_, 2);
v___x_1534_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___redArg(v_ref_1533_, v_constName_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_);
return v___x_1534_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_){
_start:
{
lean_object* v_res_1541_; 
v_res_1541_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0___redArg(v_constName_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
lean_dec(v___y_1537_);
lean_dec_ref(v___y_1536_);
return v_res_1541_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0(lean_object* v_constName_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_){
_start:
{
lean_object* v___x_1548_; lean_object* v_env_1549_; uint8_t v___x_1550_; lean_object* v___x_1551_; 
v___x_1548_ = lean_st_ref_get(v___y_1546_);
v_env_1549_ = lean_ctor_get(v___x_1548_, 0);
lean_inc_ref(v_env_1549_);
lean_dec(v___x_1548_);
v___x_1550_ = 0;
lean_inc(v_constName_1542_);
v___x_1551_ = l_Lean_Environment_find_x3f(v_env_1549_, v_constName_1542_, v___x_1550_);
if (lean_obj_tag(v___x_1551_) == 0)
{
lean_object* v___x_1552_; 
v___x_1552_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0___redArg(v_constName_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_);
return v___x_1552_;
}
else
{
lean_object* v_val_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1560_; 
lean_dec(v_constName_1542_);
v_val_1553_ = lean_ctor_get(v___x_1551_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1551_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1555_ = v___x_1551_;
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_val_1553_);
lean_dec(v___x_1551_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1558_; 
if (v_isShared_1556_ == 0)
{
lean_ctor_set_tag(v___x_1555_, 0);
v___x_1558_ = v___x_1555_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v_val_1553_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0___boxed(lean_object* v_constName_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0(v_constName_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lam__1(lean_object* v_mvarId_1574_, lean_object* v_e_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_){
_start:
{
lean_object* v___x_1581_; 
lean_inc(v_mvarId_1574_);
v___x_1581_ = l_Lean_MVarId_getTag(v_mvarId_1574_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; lean_object* v___x_1583_; 
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
lean_inc(v_a_1582_);
lean_dec_ref_known(v___x_1581_, 1);
lean_inc(v___y_1579_);
lean_inc_ref(v___y_1578_);
lean_inc(v___y_1577_);
lean_inc_ref(v___y_1576_);
lean_inc_ref(v_e_1575_);
v___x_1583_ = lean_infer_type(v_e_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
if (lean_obj_tag(v___x_1583_) == 0)
{
lean_object* v_a_1584_; lean_object* v___x_1585_; 
v_a_1584_ = lean_ctor_get(v___x_1583_, 0);
lean_inc(v_a_1584_);
lean_dec_ref_known(v___x_1583_, 1);
lean_inc(v___y_1579_);
lean_inc_ref(v___y_1578_);
lean_inc(v___y_1577_);
lean_inc_ref(v___y_1576_);
v___x_1585_ = lean_whnf(v_a_1584_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_object* v_a_1586_; lean_object* v___x_1587_; 
v_a_1586_ = lean_ctor_get(v___x_1585_, 0);
lean_inc(v_a_1586_);
lean_dec_ref_known(v___x_1585_, 1);
v___x_1587_ = l_Lean_Expr_getAppFn(v_a_1586_);
if (lean_obj_tag(v___x_1587_) == 4)
{
lean_object* v_declName_1588_; lean_object* v___x_1589_; 
v_declName_1588_ = lean_ctor_get(v___x_1587_, 0);
lean_inc_n(v_declName_1588_, 2);
lean_dec_ref_known(v___x_1587_, 2);
v___x_1589_ = l_Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0(v_declName_1588_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
if (lean_obj_tag(v___x_1589_) == 0)
{
lean_object* v_a_1590_; 
v_a_1590_ = lean_ctor_get(v___x_1589_, 0);
lean_inc(v_a_1590_);
lean_dec_ref_known(v___x_1589_, 1);
if (lean_obj_tag(v_a_1590_) == 5)
{
lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
lean_dec_ref_known(v_a_1590_, 1);
v___x_1591_ = l_Lean_mkCasesOnName(v_declName_1588_);
v___x_1592_ = lean_box(0);
v___x_1593_ = l_Lean_Meta_mkRecursorInfo(v___x_1591_, v___x_1592_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
if (lean_obj_tag(v___x_1593_) == 0)
{
lean_object* v_a_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; uint8_t v___x_1597_; 
v_a_1594_ = lean_ctor_get(v___x_1593_, 0);
lean_inc(v_a_1594_);
lean_dec_ref_known(v___x_1593_, 1);
v___x_1595_ = lean_unsigned_to_nat(0u);
v___x_1596_ = l_Lean_Meta_RecursorInfo_numIndices(v_a_1594_);
v___x_1597_ = lean_nat_dec_lt(v___x_1595_, v___x_1596_);
lean_dec(v___x_1596_);
if (v___x_1597_ == 0)
{
lean_object* v___x_1598_; 
lean_inc_ref(v_e_1575_);
v___x_1598_ = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_isSimpleFVar(v_e_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
if (lean_obj_tag(v___x_1598_) == 0)
{
lean_object* v_a_1599_; lean_object* v_mvarId_1601_; lean_object* v___y_1602_; lean_object* v___y_1603_; lean_object* v___y_1604_; lean_object* v___y_1605_; uint8_t v___x_1622_; 
v_a_1599_ = lean_ctor_get(v___x_1598_, 0);
lean_inc(v_a_1599_);
lean_dec_ref_known(v___x_1598_, 1);
v___x_1622_ = lean_unbox(v_a_1599_);
if (v___x_1622_ == 0)
{
lean_object* v___x_1623_; 
lean_inc_ref(v_e_1575_);
v___x_1623_ = l_Lean_Meta_isProof(v_e_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; uint8_t v___x_1625_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_a_1624_);
lean_dec_ref_known(v___x_1623_, 1);
v___x_1625_ = lean_unbox(v_a_1624_);
lean_dec(v_a_1624_);
if (v___x_1625_ == 0)
{
lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1626_ = ((lean_object*)(l_Lean_Meta_Grind_cases___lam__1___closed__1));
v___x_1627_ = l_Lean_Core_mkFreshUserName(v___x_1626_, v___y_1578_, v___y_1579_);
if (lean_obj_tag(v___x_1627_) == 0)
{
lean_object* v_a_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; 
v_a_1628_ = lean_ctor_get(v___x_1627_, 0);
lean_inc(v_a_1628_);
lean_dec_ref_known(v___x_1627_, 1);
v___x_1629_ = ((lean_object*)(l_Lean_Meta_Grind_cases___lam__1___closed__3));
v___x_1630_ = l_Lean_MVarId_assertExt(v_mvarId_1574_, v_a_1628_, v_a_1586_, v_e_1575_, v___x_1629_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
if (lean_obj_tag(v___x_1630_) == 0)
{
lean_object* v_a_1631_; 
v_a_1631_ = lean_ctor_get(v___x_1630_, 0);
lean_inc(v_a_1631_);
lean_dec_ref_known(v___x_1630_, 1);
v_mvarId_1601_ = v_a_1631_;
v___y_1602_ = v___y_1576_;
v___y_1603_ = v___y_1577_;
v___y_1604_ = v___y_1578_;
v___y_1605_ = v___y_1579_;
goto v___jp_1600_;
}
else
{
lean_object* v_a_1632_; lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1639_; 
lean_dec(v_a_1599_);
lean_dec(v_a_1594_);
lean_dec(v_a_1582_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
v_a_1632_ = lean_ctor_get(v___x_1630_, 0);
v_isSharedCheck_1639_ = !lean_is_exclusive(v___x_1630_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1634_ = v___x_1630_;
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
else
{
lean_inc(v_a_1632_);
lean_dec(v___x_1630_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v___x_1637_; 
if (v_isShared_1635_ == 0)
{
v___x_1637_ = v___x_1634_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v_a_1632_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
return v___x_1637_;
}
}
}
}
else
{
lean_object* v_a_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1647_; 
lean_dec(v_a_1599_);
lean_dec(v_a_1594_);
lean_dec(v_a_1586_);
lean_dec(v_a_1582_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec_ref(v_e_1575_);
lean_dec(v_mvarId_1574_);
v_a_1640_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1642_ = v___x_1627_;
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_a_1640_);
lean_dec(v___x_1627_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1645_; 
if (v_isShared_1643_ == 0)
{
v___x_1645_ = v___x_1642_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_a_1640_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
}
else
{
lean_object* v___x_1648_; lean_object* v___x_1649_; 
v___x_1648_ = ((lean_object*)(l_Lean_Meta_Grind_cases___lam__1___closed__1));
v___x_1649_ = l_Lean_Core_mkFreshUserName(v___x_1648_, v___y_1578_, v___y_1579_);
if (lean_obj_tag(v___x_1649_) == 0)
{
lean_object* v_a_1650_; lean_object* v___x_1651_; 
v_a_1650_ = lean_ctor_get(v___x_1649_, 0);
lean_inc(v_a_1650_);
lean_dec_ref_known(v___x_1649_, 1);
v___x_1651_ = l_Lean_MVarId_assert(v_mvarId_1574_, v_a_1650_, v_a_1586_, v_e_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
if (lean_obj_tag(v___x_1651_) == 0)
{
lean_object* v_a_1652_; 
v_a_1652_ = lean_ctor_get(v___x_1651_, 0);
lean_inc(v_a_1652_);
lean_dec_ref_known(v___x_1651_, 1);
v_mvarId_1601_ = v_a_1652_;
v___y_1602_ = v___y_1576_;
v___y_1603_ = v___y_1577_;
v___y_1604_ = v___y_1578_;
v___y_1605_ = v___y_1579_;
goto v___jp_1600_;
}
else
{
lean_object* v_a_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1660_; 
lean_dec(v_a_1599_);
lean_dec(v_a_1594_);
lean_dec(v_a_1582_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
v_a_1653_ = lean_ctor_get(v___x_1651_, 0);
v_isSharedCheck_1660_ = !lean_is_exclusive(v___x_1651_);
if (v_isSharedCheck_1660_ == 0)
{
v___x_1655_ = v___x_1651_;
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_a_1653_);
lean_dec(v___x_1651_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
lean_object* v___x_1658_; 
if (v_isShared_1656_ == 0)
{
v___x_1658_ = v___x_1655_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_a_1653_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
}
else
{
lean_object* v_a_1661_; lean_object* v___x_1663_; uint8_t v_isShared_1664_; uint8_t v_isSharedCheck_1668_; 
lean_dec(v_a_1599_);
lean_dec(v_a_1594_);
lean_dec(v_a_1586_);
lean_dec(v_a_1582_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec_ref(v_e_1575_);
lean_dec(v_mvarId_1574_);
v_a_1661_ = lean_ctor_get(v___x_1649_, 0);
v_isSharedCheck_1668_ = !lean_is_exclusive(v___x_1649_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1663_ = v___x_1649_;
v_isShared_1664_ = v_isSharedCheck_1668_;
goto v_resetjp_1662_;
}
else
{
lean_inc(v_a_1661_);
lean_dec(v___x_1649_);
v___x_1663_ = lean_box(0);
v_isShared_1664_ = v_isSharedCheck_1668_;
goto v_resetjp_1662_;
}
v_resetjp_1662_:
{
lean_object* v___x_1666_; 
if (v_isShared_1664_ == 0)
{
v___x_1666_ = v___x_1663_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v_a_1661_);
v___x_1666_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
return v___x_1666_;
}
}
}
}
}
else
{
lean_object* v_a_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1676_; 
lean_dec(v_a_1599_);
lean_dec(v_a_1594_);
lean_dec(v_a_1586_);
lean_dec(v_a_1582_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec_ref(v_e_1575_);
lean_dec(v_mvarId_1574_);
v_a_1669_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1676_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1676_ == 0)
{
v___x_1671_ = v___x_1623_;
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_a_1669_);
lean_dec(v___x_1623_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1674_; 
if (v_isShared_1672_ == 0)
{
v___x_1674_ = v___x_1671_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v_a_1669_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
return v___x_1674_;
}
}
}
}
else
{
lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; 
lean_dec(v_a_1599_);
lean_dec(v_a_1586_);
v___x_1677_ = l_Lean_Expr_fvarId_x21(v_e_1575_);
lean_dec_ref(v_e_1575_);
v___x_1678_ = ((lean_object*)(l_Lean_Meta_Grind_cases___lam__0___closed__0));
v___x_1679_ = l_Lean_Meta_Grind_cases___lam__0(v_a_1594_, v_a_1582_, v_mvarId_1574_, v___x_1677_, v___x_1678_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
return v___x_1679_;
}
v___jp_1600_:
{
uint8_t v___x_1606_; lean_object* v___x_1607_; 
v___x_1606_ = lean_unbox(v_a_1599_);
lean_dec(v_a_1599_);
v___x_1607_ = l_Lean_Meta_intro1Core(v_mvarId_1601_, v___x_1606_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; lean_object* v_fst_1609_; lean_object* v_snd_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1608_);
lean_dec_ref_known(v___x_1607_, 1);
v_fst_1609_ = lean_ctor_get(v_a_1608_, 0);
lean_inc(v_fst_1609_);
v_snd_1610_ = lean_ctor_get(v_a_1608_, 1);
lean_inc_n(v_snd_1610_, 2);
lean_dec(v_a_1608_);
v___x_1611_ = ((lean_object*)(l_Lean_Meta_Grind_cases___lam__0___closed__0));
v___x_1612_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_cases___lam__0___boxed), 10, 5);
lean_closure_set(v___x_1612_, 0, v_a_1594_);
lean_closure_set(v___x_1612_, 1, v_a_1582_);
lean_closure_set(v___x_1612_, 2, v_snd_1610_);
lean_closure_set(v___x_1612_, 3, v_fst_1609_);
lean_closure_set(v___x_1612_, 4, v___x_1611_);
v___x_1613_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_cases_spec__5___redArg(v_snd_1610_, v___x_1612_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec(v___y_1603_);
lean_dec_ref(v___y_1602_);
return v___x_1613_;
}
else
{
lean_object* v_a_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1621_; 
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec(v___y_1603_);
lean_dec_ref(v___y_1602_);
lean_dec(v_a_1594_);
lean_dec(v_a_1582_);
v_a_1614_ = lean_ctor_get(v___x_1607_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1616_ = v___x_1607_;
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_a_1614_);
lean_dec(v___x_1607_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___x_1619_; 
if (v_isShared_1617_ == 0)
{
v___x_1619_ = v___x_1616_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v_a_1614_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
return v___x_1619_;
}
}
}
}
}
else
{
lean_object* v_a_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1687_; 
lean_dec(v_a_1594_);
lean_dec(v_a_1586_);
lean_dec(v_a_1582_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec_ref(v_e_1575_);
lean_dec(v_mvarId_1574_);
v_a_1680_ = lean_ctor_get(v___x_1598_, 0);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1682_ = v___x_1598_;
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_a_1680_);
lean_dec(v___x_1598_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v___x_1685_; 
if (v_isShared_1683_ == 0)
{
v___x_1685_ = v___x_1682_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v_a_1680_);
v___x_1685_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
return v___x_1685_;
}
}
}
}
else
{
lean_object* v___x_1688_; 
lean_dec(v_a_1586_);
v___x_1688_ = l_Lean_Meta_generalizeIndices_x27(v_mvarId_1574_, v_e_1575_, v___x_1592_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
if (lean_obj_tag(v___x_1688_) == 0)
{
lean_object* v_a_1689_; lean_object* v_mvarId_1690_; lean_object* v_indicesFVarIds_1691_; lean_object* v_fvarId_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
v_a_1689_ = lean_ctor_get(v___x_1688_, 0);
lean_inc(v_a_1689_);
lean_dec_ref_known(v___x_1688_, 1);
v_mvarId_1690_ = lean_ctor_get(v_a_1689_, 0);
lean_inc_n(v_mvarId_1690_, 2);
v_indicesFVarIds_1691_ = lean_ctor_get(v_a_1689_, 1);
lean_inc_ref(v_indicesFVarIds_1691_);
v_fvarId_1692_ = lean_ctor_get(v_a_1689_, 2);
lean_inc(v_fvarId_1692_);
lean_dec(v_a_1689_);
v___x_1693_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_cases___lam__0___boxed), 10, 5);
lean_closure_set(v___x_1693_, 0, v_a_1594_);
lean_closure_set(v___x_1693_, 1, v_a_1582_);
lean_closure_set(v___x_1693_, 2, v_mvarId_1690_);
lean_closure_set(v___x_1693_, 3, v_fvarId_1692_);
lean_closure_set(v___x_1693_, 4, v_indicesFVarIds_1691_);
v___x_1694_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_cases_spec__5___redArg(v_mvarId_1690_, v___x_1693_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
return v___x_1694_;
}
else
{
lean_object* v_a_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1702_; 
lean_dec(v_a_1594_);
lean_dec(v_a_1582_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
v_a_1695_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1702_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1702_ == 0)
{
v___x_1697_ = v___x_1688_;
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_a_1695_);
lean_dec(v___x_1688_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v___x_1700_; 
if (v_isShared_1698_ == 0)
{
v___x_1700_ = v___x_1697_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v_a_1695_);
v___x_1700_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
return v___x_1700_;
}
}
}
}
}
else
{
lean_object* v_a_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1710_; 
lean_dec(v_a_1586_);
lean_dec(v_a_1582_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec_ref(v_e_1575_);
lean_dec(v_mvarId_1574_);
v_a_1703_ = lean_ctor_get(v___x_1593_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1593_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1705_ = v___x_1593_;
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_a_1703_);
lean_dec(v___x_1593_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1708_; 
if (v_isShared_1706_ == 0)
{
v___x_1708_ = v___x_1705_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v_a_1703_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
return v___x_1708_;
}
}
}
}
else
{
lean_object* v___x_1711_; 
lean_dec(v_a_1590_);
lean_dec(v_declName_1588_);
lean_dec(v_a_1582_);
v___x_1711_ = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg(v_mvarId_1574_, v_e_1575_, v_a_1586_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
return v___x_1711_;
}
}
else
{
lean_object* v_a_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1719_; 
lean_dec(v_declName_1588_);
lean_dec(v_a_1586_);
lean_dec(v_a_1582_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec_ref(v_e_1575_);
lean_dec(v_mvarId_1574_);
v_a_1712_ = lean_ctor_get(v___x_1589_, 0);
v_isSharedCheck_1719_ = !lean_is_exclusive(v___x_1589_);
if (v_isSharedCheck_1719_ == 0)
{
v___x_1714_ = v___x_1589_;
v_isShared_1715_ = v_isSharedCheck_1719_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_a_1712_);
lean_dec(v___x_1589_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1719_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1717_; 
if (v_isShared_1715_ == 0)
{
v___x_1717_ = v___x_1714_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v_a_1712_);
v___x_1717_ = v_reuseFailAlloc_1718_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
return v___x_1717_;
}
}
}
}
else
{
lean_object* v___x_1720_; 
lean_dec_ref(v___x_1587_);
lean_dec(v_a_1582_);
v___x_1720_ = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_cases_throwInductiveExpected___redArg(v_mvarId_1574_, v_e_1575_, v_a_1586_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
return v___x_1720_;
}
}
else
{
lean_object* v_a_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1728_; 
lean_dec(v_a_1582_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec_ref(v_e_1575_);
lean_dec(v_mvarId_1574_);
v_a_1721_ = lean_ctor_get(v___x_1585_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1585_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1723_ = v___x_1585_;
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_a_1721_);
lean_dec(v___x_1585_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v___x_1726_; 
if (v_isShared_1724_ == 0)
{
v___x_1726_ = v___x_1723_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_a_1721_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
return v___x_1726_;
}
}
}
}
else
{
lean_object* v_a_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1736_; 
lean_dec(v_a_1582_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec_ref(v_e_1575_);
lean_dec(v_mvarId_1574_);
v_a_1729_ = lean_ctor_get(v___x_1583_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1583_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1731_ = v___x_1583_;
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_a_1729_);
lean_dec(v___x_1583_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1734_; 
if (v_isShared_1732_ == 0)
{
v___x_1734_ = v___x_1731_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_a_1729_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
return v___x_1734_;
}
}
}
}
else
{
lean_object* v_a_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1744_; 
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec_ref(v_e_1575_);
lean_dec(v_mvarId_1574_);
v_a_1737_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1744_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1739_ = v___x_1581_;
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_a_1737_);
lean_dec(v___x_1581_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___x_1742_; 
if (v_isShared_1740_ == 0)
{
v___x_1742_ = v___x_1739_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_a_1737_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
return v___x_1742_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lam__1___boxed(lean_object* v_mvarId_1745_, lean_object* v_e_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_){
_start:
{
lean_object* v_res_1752_; 
v_res_1752_ = l_Lean_Meta_Grind_cases___lam__1(v_mvarId_1745_, v_e_1746_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_);
return v_res_1752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases(lean_object* v_mvarId_1753_, lean_object* v_e_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_){
_start:
{
lean_object* v___f_1760_; lean_object* v___x_1761_; 
lean_inc(v_mvarId_1753_);
v___f_1760_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_cases___lam__1___boxed), 7, 2);
lean_closure_set(v___f_1760_, 0, v_mvarId_1753_);
lean_closure_set(v___f_1760_, 1, v_e_1754_);
v___x_1761_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_cases_spec__5___redArg(v_mvarId_1753_, v___f_1760_, v_a_1755_, v_a_1756_, v_a_1757_, v_a_1758_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___boxed(lean_object* v_mvarId_1762_, lean_object* v_e_1763_, lean_object* v_a_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l_Lean_Meta_Grind_cases(v_mvarId_1762_, v_e_1763_, v_a_1764_, v_a_1765_, v_a_1766_, v_a_1767_);
lean_dec(v_a_1767_);
lean_dec_ref(v_a_1766_);
lean_dec(v_a_1765_);
lean_dec_ref(v_a_1764_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1(lean_object* v_mvarId_1770_, lean_object* v_val_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_){
_start:
{
lean_object* v___x_1777_; 
v___x_1777_ = l_Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1___redArg(v_mvarId_1770_, v_val_1771_, v___y_1773_);
return v___x_1777_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1___boxed(lean_object* v_mvarId_1778_, lean_object* v_val_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_){
_start:
{
lean_object* v_res_1785_; 
v_res_1785_ = l_Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1(v_mvarId_1778_, v_val_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_);
lean_dec(v___y_1783_);
lean_dec_ref(v___y_1782_);
lean_dec(v___y_1781_);
lean_dec_ref(v___y_1780_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3(lean_object* v_upperBound_1786_, lean_object* v___y_1787_, lean_object* v___x_1788_, lean_object* v___x_1789_, lean_object* v_a_1790_, lean_object* v_mvarId_1791_, lean_object* v_inst_1792_, lean_object* v_R_1793_, lean_object* v_a_1794_, lean_object* v_b_1795_, lean_object* v_c_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_){
_start:
{
lean_object* v___x_1802_; 
v___x_1802_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___redArg(v_upperBound_1786_, v___y_1787_, v___x_1788_, v___x_1789_, v_a_1790_, v_mvarId_1791_, v_a_1794_, v_b_1795_, v___y_1797_, v___y_1798_, v___y_1799_, v___y_1800_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3___boxed(lean_object* v_upperBound_1803_, lean_object* v___y_1804_, lean_object* v___x_1805_, lean_object* v___x_1806_, lean_object* v_a_1807_, lean_object* v_mvarId_1808_, lean_object* v_inst_1809_, lean_object* v_R_1810_, lean_object* v_a_1811_, lean_object* v_b_1812_, lean_object* v_c_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_){
_start:
{
lean_object* v_res_1819_; 
v_res_1819_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_cases_spec__3(v_upperBound_1803_, v___y_1804_, v___x_1805_, v___x_1806_, v_a_1807_, v_mvarId_1808_, v_inst_1809_, v_R_1810_, v_a_1811_, v_b_1812_, v_c_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
lean_dec(v___y_1817_);
lean_dec_ref(v___y_1816_);
lean_dec(v___y_1815_);
lean_dec_ref(v___y_1814_);
lean_dec(v___x_1806_);
lean_dec(v_upperBound_1803_);
return v_res_1819_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0(lean_object* v_00_u03b1_1820_, lean_object* v_constName_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_){
_start:
{
lean_object* v___x_1827_; 
v___x_1827_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0___redArg(v_constName_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_);
return v___x_1827_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1828_, lean_object* v_constName_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_){
_start:
{
lean_object* v_res_1835_; 
v_res_1835_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0(v_00_u03b1_1828_, v_constName_1829_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_);
lean_dec(v___y_1833_);
lean_dec_ref(v___y_1832_);
lean_dec(v___y_1831_);
lean_dec_ref(v___y_1830_);
return v_res_1835_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2(lean_object* v_00_u03b2_1836_, lean_object* v_x_1837_, lean_object* v_x_1838_, lean_object* v_x_1839_){
_start:
{
lean_object* v___x_1840_; 
v___x_1840_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2___redArg(v_x_1837_, v_x_1838_, v_x_1839_);
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_1841_, lean_object* v_ref_1842_, lean_object* v_constName_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_){
_start:
{
lean_object* v___x_1849_; 
v___x_1849_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___redArg(v_ref_1842_, v_constName_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_);
return v___x_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_1850_, lean_object* v_ref_1851_, lean_object* v_constName_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_){
_start:
{
lean_object* v_res_1858_; 
v_res_1858_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2(v_00_u03b1_1850_, v_ref_1851_, v_constName_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_);
lean_dec(v___y_1856_);
lean_dec_ref(v___y_1855_);
lean_dec(v___y_1854_);
lean_dec_ref(v___y_1853_);
lean_dec(v_ref_1851_);
return v_res_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_1859_, lean_object* v_x_1860_, size_t v_x_1861_, size_t v_x_1862_, lean_object* v_x_1863_, lean_object* v_x_1864_){
_start:
{
lean_object* v___x_1865_; 
v___x_1865_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___redArg(v_x_1860_, v_x_1861_, v_x_1862_, v_x_1863_, v_x_1864_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_1866_, lean_object* v_x_1867_, lean_object* v_x_1868_, lean_object* v_x_1869_, lean_object* v_x_1870_, lean_object* v_x_1871_){
_start:
{
size_t v_x_13332__boxed_1872_; size_t v_x_13333__boxed_1873_; lean_object* v_res_1874_; 
v_x_13332__boxed_1872_ = lean_unbox_usize(v_x_1868_);
lean_dec(v_x_1868_);
v_x_13333__boxed_1873_ = lean_unbox_usize(v_x_1869_);
lean_dec(v_x_1869_);
v_res_1874_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5(v_00_u03b2_1866_, v_x_1867_, v_x_13332__boxed_1872_, v_x_13333__boxed_1873_, v_x_1870_, v_x_1871_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7(lean_object* v_00_u03b1_1875_, lean_object* v_ref_1876_, lean_object* v_msg_1877_, lean_object* v_declHint_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_){
_start:
{
lean_object* v___x_1884_; 
v___x_1884_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7___redArg(v_ref_1876_, v_msg_1877_, v_declHint_1878_, v___y_1879_, v___y_1880_, v___y_1881_, v___y_1882_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7___boxed(lean_object* v_00_u03b1_1885_, lean_object* v_ref_1886_, lean_object* v_msg_1887_, lean_object* v_declHint_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_){
_start:
{
lean_object* v_res_1894_; 
v_res_1894_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7(v_00_u03b1_1885_, v_ref_1886_, v_msg_1887_, v_declHint_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_);
lean_dec(v___y_1892_);
lean_dec_ref(v___y_1891_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1889_);
lean_dec(v_ref_1886_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__10(lean_object* v_00_u03b2_1895_, lean_object* v_n_1896_, lean_object* v_k_1897_, lean_object* v_v_1898_){
_start:
{
lean_object* v___x_1899_; 
v___x_1899_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__10___redArg(v_n_1896_, v_k_1897_, v_v_1898_);
return v___x_1899_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__11(lean_object* v_00_u03b2_1900_, size_t v_depth_1901_, lean_object* v_keys_1902_, lean_object* v_vals_1903_, lean_object* v_heq_1904_, lean_object* v_i_1905_, lean_object* v_entries_1906_){
_start:
{
lean_object* v___x_1907_; 
v___x_1907_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__11___redArg(v_depth_1901_, v_keys_1902_, v_vals_1903_, v_i_1905_, v_entries_1906_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__11___boxed(lean_object* v_00_u03b2_1908_, lean_object* v_depth_1909_, lean_object* v_keys_1910_, lean_object* v_vals_1911_, lean_object* v_heq_1912_, lean_object* v_i_1913_, lean_object* v_entries_1914_){
_start:
{
size_t v_depth_boxed_1915_; lean_object* v_res_1916_; 
v_depth_boxed_1915_ = lean_unbox_usize(v_depth_1909_);
lean_dec(v_depth_1909_);
v_res_1916_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__11(v_00_u03b2_1908_, v_depth_boxed_1915_, v_keys_1910_, v_vals_1911_, v_heq_1912_, v_i_1913_, v_entries_1914_);
lean_dec_ref(v_vals_1911_);
lean_dec_ref(v_keys_1910_);
return v_res_1916_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11(lean_object* v_msg_1917_, lean_object* v_declHint_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_){
_start:
{
lean_object* v___x_1924_; 
v___x_1924_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___redArg(v_msg_1917_, v_declHint_1918_, v___y_1922_);
return v___x_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11___boxed(lean_object* v_msg_1925_, lean_object* v_declHint_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__9_spec__11(v_msg_1925_, v_declHint_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_);
lean_dec(v___y_1930_);
lean_dec_ref(v___y_1929_);
lean_dec(v___y_1928_);
lean_dec_ref(v___y_1927_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10(lean_object* v_00_u03b1_1933_, lean_object* v_ref_1934_, lean_object* v_msg_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_){
_start:
{
lean_object* v___x_1941_; 
v___x_1941_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10___redArg(v_ref_1934_, v_msg_1935_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_);
return v___x_1941_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10___boxed(lean_object* v_00_u03b1_1942_, lean_object* v_ref_1943_, lean_object* v_msg_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_){
_start:
{
lean_object* v_res_1950_; 
v_res_1950_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10(v_00_u03b1_1942_, v_ref_1943_, v_msg_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_);
lean_dec(v___y_1948_);
lean_dec_ref(v___y_1947_);
lean_dec(v___y_1946_);
lean_dec_ref(v___y_1945_);
lean_dec(v_ref_1943_);
return v_res_1950_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__10_spec__13(lean_object* v_00_u03b2_1951_, lean_object* v_x_1952_, lean_object* v_x_1953_, lean_object* v_x_1954_, lean_object* v_x_1955_){
_start:
{
lean_object* v___x_1956_; 
v___x_1956_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_cases_spec__1_spec__2_spec__5_spec__10_spec__13___redArg(v_x_1952_, v_x_1953_, v_x_1954_, v_x_1955_);
return v___x_1956_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13(lean_object* v_00_u03b1_1957_, lean_object* v_msg_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_){
_start:
{
lean_object* v___x_1964_; 
v___x_1964_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13___redArg(v_msg_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_);
return v___x_1964_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13___boxed(lean_object* v_00_u03b1_1965_, lean_object* v_msg_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_){
_start:
{
lean_object* v_res_1972_; 
v_res_1972_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_cases_spec__0_spec__0_spec__2_spec__7_spec__10_spec__13(v_00_u03b1_1965_, v_msg_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
lean_dec(v___y_1968_);
lean_dec_ref(v___y_1967_);
return v_res_1972_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Extension(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Cases(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Grind_instInhabitedCasesEntry_default = _init_l_Lean_Meta_Grind_instInhabitedCasesEntry_default();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedCasesEntry_default);
l_Lean_Meta_Grind_instInhabitedCasesEntry = _init_l_Lean_Meta_Grind_instInhabitedCasesEntry();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedCasesEntry);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Cases(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Extension(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Cases(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Cases(builtin);
}
#ifdef __cplusplus
}
#endif

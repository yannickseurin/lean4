// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Attr
// Imports: public import Lean.Meta.Tactic.Grind.Injective public import Lean.Meta.Tactic.Grind.Cases public import Lean.Meta.Tactic.Grind.ExtAttr public import Lean.Meta.Tactic.Simp.Attr public import Lean.Meta.Tactic.Grind.Homo import Lean.Meta.Sym.Simp.Attr import Lean.ExtraModUses
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
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_instInhabitedExtensionState_default;
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
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
uint8_t l_Lean_Meta_Grind_Theorems_contains___redArg(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Theorems_eraseDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_ExtTheorems_eraseDecl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_CasesTypes_eraseDecl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkExtension(lean_object*);
lean_object* l_Lean_Meta_mkSimpExt(lean_object*);
lean_object* l_Lean_Meta_addDeclToUnfold(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGlobalSymbolPriorities___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_Extension_addEMatchAttr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_validateCasesAttr(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isInductivePredicate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Extension_addEMatchAttrAndSuggest(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_validateExtAttr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addSymbolPriorityAttr(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Extension_addInjectiveAttr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addSimpTheorem(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addHomoAttr(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addHomoPredAttr(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* lean_name_append_after(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_CasesTypes_isSplit(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "normExt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(1, 117, 24, 11, 244, 218, 170, 88)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normExt;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ematch_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ematch_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_cases_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_cases_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_intro_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_intro_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_infer_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_infer_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ext_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ext_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_symbol_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_symbol_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_inj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_inj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_funCC_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_funCC_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_norm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_norm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_unfold_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_unfold_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homoPred_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homoPred_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindMod"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 252, 83, 80, 136, 168, 19, 119)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "unexpected `grind` theorem kind: `"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_getAttrKindCore___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__5;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_getAttrKindCore___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__7;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "grindEq"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__8_value),LEAN_SCALAR_PTR_LITERAL(179, 34, 219, 24, 240, 38, 65, 204)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__9_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindDef"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__10_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__10_value),LEAN_SCALAR_PTR_LITERAL(66, 218, 12, 28, 39, 29, 4, 77)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__11_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindFwd"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__12_value),LEAN_SCALAR_PTR_LITERAL(121, 161, 177, 116, 112, 162, 92, 47)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__13_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindBwd"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__14_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__14_value),LEAN_SCALAR_PTR_LITERAL(114, 163, 57, 243, 160, 41, 114, 23)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__15_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindEqRhs"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__16_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__16_value),LEAN_SCALAR_PTR_LITERAL(222, 187, 148, 221, 105, 213, 199, 68)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__17_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "grindEqBoth"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__18_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__18_value),LEAN_SCALAR_PTR_LITERAL(79, 230, 133, 190, 186, 228, 109, 128)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__19 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__19_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindEqBwd"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__20 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__20_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__20_value),LEAN_SCALAR_PTR_LITERAL(250, 57, 23, 180, 238, 116, 90, 53)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__21 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__21_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "grindLR"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__22 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__22_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__22_value),LEAN_SCALAR_PTR_LITERAL(152, 111, 188, 78, 132, 212, 97, 164)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__23 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__23_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "grindRL"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__24 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__24_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__24_value),LEAN_SCALAR_PTR_LITERAL(84, 112, 237, 169, 105, 148, 42, 205)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__25 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__25_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindUsr"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__26 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__26_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__26_value),LEAN_SCALAR_PTR_LITERAL(204, 58, 160, 148, 192, 167, 114, 18)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__27 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__27_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindGen"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__28 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__28_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__28_value),LEAN_SCALAR_PTR_LITERAL(186, 203, 120, 147, 97, 215, 208, 134)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__29 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__29_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindCases"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__30 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__30_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__30_value),LEAN_SCALAR_PTR_LITERAL(85, 142, 28, 230, 49, 50, 229, 162)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__31 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__31_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "grindCasesEager"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__32 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__32_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__32_value),LEAN_SCALAR_PTR_LITERAL(75, 210, 92, 40, 190, 183, 142, 70)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__33 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__33_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindIntro"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__34 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__34_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__34_value),LEAN_SCALAR_PTR_LITERAL(142, 126, 114, 89, 237, 253, 56, 138)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__35 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__35_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindExt"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__36 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__36_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__36_value),LEAN_SCALAR_PTR_LITERAL(147, 193, 153, 166, 243, 149, 163, 253)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__37 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__37_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindInj"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__38 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__38_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__38_value),LEAN_SCALAR_PTR_LITERAL(223, 225, 41, 9, 21, 5, 145, 193)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__39 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__39_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindFunCC"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__40 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__40_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__40_value),LEAN_SCALAR_PTR_LITERAL(217, 20, 186, 134, 249, 79, 78, 43)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__41 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__41_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "grindNorm"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__42 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__42_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__42_value),LEAN_SCALAR_PTR_LITERAL(166, 126, 146, 239, 104, 253, 29, 148)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__43 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__43_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "grindUnfold"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__44 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__44_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__44_value),LEAN_SCALAR_PTR_LITERAL(214, 181, 37, 92, 122, 232, 164, 219)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__45 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__45_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindHom"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__46 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__46_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__46_value),LEAN_SCALAR_PTR_LITERAL(14, 226, 234, 13, 148, 139, 225, 180)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__47 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__47_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "grindHomPred"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__48 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__48_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__49_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__49_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__49_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__48_value),LEAN_SCALAR_PTR_LITERAL(1, 153, 163, 64, 153, 27, 218, 140)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__49 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__49_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindSym"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__50 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__50_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__51_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__51_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__51_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__51_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__51_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__50_value),LEAN_SCALAR_PTR_LITERAL(104, 204, 11, 169, 55, 109, 254, 23)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__51 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__51_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "priority expected"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__52 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__52_value;
static lean_once_cell_t l_Lean_Meta_Grind_getAttrKindCore___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__53;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__54 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__54_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simpPost"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__55 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__55_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__56_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__56_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__56_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__54_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__56_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__55_value),LEAN_SCALAR_PTR_LITERAL(38, 218, 35, 149, 208, 200, 230, 161)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__56 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__56_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "simpPre"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__57 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__57_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__54_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__57_value),LEAN_SCALAR_PTR_LITERAL(197, 59, 48, 6, 36, 81, 149, 152)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__58 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__58_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__59 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__59_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__60 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__60_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__61 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__61_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__62 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__62_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__63 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__63_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__64 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__64_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__64_value)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__65 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__65_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindFromOpt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindFromOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "the modifier `usr` is only relevant in parameters for `grind only`"};
static const lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__54_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__54_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__54_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 115, .m_capacity = 115, .m_length = 114, .m_data = "\?]` is a helper attribute for displaying inferred patterns, if you want to remove the attribute, consider using `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "]` instead"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 8}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "cannot mark declaration to be unfolded by `grind`"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "invalid `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " intro]`, `"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "` is not an inductive predicate"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "symbol priorities must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "normalizer must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "declaration to unfold must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "homomorphism rules must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__16_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__17;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "homomorphism predicates must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__18_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__19;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__3_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__5;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__9_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__9_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__10_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__12_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__16_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__18_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__19_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "When applied to an equational theorem, `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " =]`, `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " =_]`, or `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = " _=_]`will mark the theorem for use in heuristic instantiations by the `"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 136, .m_capacity = 136, .m_length = 135, .m_data = "` tactic,\n      using respectively the left-hand side, the right-hand side, or both sides of the theorem.When applied to a function, `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 112, .m_capacity = 112, .m_length = 111, .m_data = " =]` automatically annotates the equational theorems associated with that function.When applied to a theorem `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 183, .m_capacity = 183, .m_length = 180, .m_data = " ←]` will instantiate the theorem whenever it encounters the conclusion of the theorem\n      (that is, it will use the theorem for backwards reasoning).When applied to a theorem `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 190, .m_capacity = 190, .m_length = 187, .m_data = " →]` will instantiate the theorem whenever it encounters sufficiently many of the propositional hypotheses\n      (that is, it will use the theorem for forwards reasoning).The attribute `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "]` by itself will effectively try `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 68, .m_data = " ←]` (if the conclusion is sufficient for instantiation) and then `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 165, .m_capacity = 165, .m_length = 162, .m_data = " →]`.The `grind` tactic utilizes annotated theorems to add instances of matching patterns into the local context during proof search.For example, if a theorem `@["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 179, .m_capacity = 179, .m_length = 178, .m_data = " =] theorem foo_idempotent : foo (foo x) = foo x` is annotated,`grind` will add an instance of this theorem to the local context whenever it encounters the pattern `foo (foo x)`."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "The `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "]` attribute is used to annotate declarations."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "\?]` attribute is identical to the `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "]` attribute, but displays inferred pattern information."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__15_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "!]` attribute is used to annotate declarations, but selecting minimal indexable subterms."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__16_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "!\?]` attribute is identical to the `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__17_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "!]` attribute, but displays inferred pattern information."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__19_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "!"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__20_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "!\?"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__21_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_extensionMapRef;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getExtension_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getExtension_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr___auto__1;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__36_value),LEAN_SCALAR_PTR_LITERAL(160, 1, 171, 211, 177, 132, 129, 49)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_grindExt;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lia"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(12, 161, 226, 116, 111, 153, 146, 212)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "liaExt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(148, 224, 62, 90, 13, 174, 224, 246)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_liaExt;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_));
v___x_12_ = l_Lean_Meta_mkSimpExt(v___x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2____boxed(lean_object* v_a_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_();
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorIdx(lean_object* v_x_15_){
_start:
{
switch(lean_obj_tag(v_x_15_))
{
case 0:
{
lean_object* v___x_16_; 
v___x_16_ = lean_unsigned_to_nat(0u);
return v___x_16_;
}
case 1:
{
lean_object* v___x_17_; 
v___x_17_ = lean_unsigned_to_nat(1u);
return v___x_17_;
}
case 2:
{
lean_object* v___x_18_; 
v___x_18_ = lean_unsigned_to_nat(2u);
return v___x_18_;
}
case 3:
{
lean_object* v___x_19_; 
v___x_19_ = lean_unsigned_to_nat(3u);
return v___x_19_;
}
case 4:
{
lean_object* v___x_20_; 
v___x_20_ = lean_unsigned_to_nat(4u);
return v___x_20_;
}
case 5:
{
lean_object* v___x_21_; 
v___x_21_ = lean_unsigned_to_nat(5u);
return v___x_21_;
}
case 6:
{
lean_object* v___x_22_; 
v___x_22_ = lean_unsigned_to_nat(6u);
return v___x_22_;
}
case 7:
{
lean_object* v___x_23_; 
v___x_23_ = lean_unsigned_to_nat(7u);
return v___x_23_;
}
case 8:
{
lean_object* v___x_24_; 
v___x_24_ = lean_unsigned_to_nat(8u);
return v___x_24_;
}
case 9:
{
lean_object* v___x_25_; 
v___x_25_ = lean_unsigned_to_nat(9u);
return v___x_25_;
}
case 10:
{
lean_object* v___x_26_; 
v___x_26_ = lean_unsigned_to_nat(10u);
return v___x_26_;
}
default: 
{
lean_object* v___x_27_; 
v___x_27_ = lean_unsigned_to_nat(11u);
return v___x_27_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorIdx___boxed(lean_object* v_x_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_Meta_Grind_AttrKind_ctorIdx(v_x_28_);
lean_dec(v_x_28_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(lean_object* v_t_30_, lean_object* v_k_31_){
_start:
{
switch(lean_obj_tag(v_t_30_))
{
case 0:
{
lean_object* v_k_32_; lean_object* v___x_33_; 
v_k_32_ = lean_ctor_get(v_t_30_, 0);
lean_inc(v_k_32_);
lean_dec_ref_known(v_t_30_, 1);
v___x_33_ = lean_apply_1(v_k_31_, v_k_32_);
return v___x_33_;
}
case 1:
{
uint8_t v_eager_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v_eager_34_ = lean_ctor_get_uint8(v_t_30_, 0);
lean_dec_ref_known(v_t_30_, 0);
v___x_35_ = lean_box(v_eager_34_);
v___x_36_ = lean_apply_1(v_k_31_, v___x_35_);
return v___x_36_;
}
case 5:
{
lean_object* v_prio_37_; lean_object* v___x_38_; 
v_prio_37_ = lean_ctor_get(v_t_30_, 0);
lean_inc(v_prio_37_);
lean_dec_ref_known(v_t_30_, 1);
v___x_38_ = lean_apply_1(v_k_31_, v_prio_37_);
return v___x_38_;
}
case 8:
{
uint8_t v_post_39_; uint8_t v_inv_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v_post_39_ = lean_ctor_get_uint8(v_t_30_, 0);
v_inv_40_ = lean_ctor_get_uint8(v_t_30_, 1);
lean_dec_ref_known(v_t_30_, 0);
v___x_41_ = lean_box(v_post_39_);
v___x_42_ = lean_box(v_inv_40_);
v___x_43_ = lean_apply_2(v_k_31_, v___x_41_, v___x_42_);
return v___x_43_;
}
default: 
{
lean_dec(v_t_30_);
return v_k_31_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim(lean_object* v_motive_44_, lean_object* v_ctorIdx_45_, lean_object* v_t_46_, lean_object* v_h_47_, lean_object* v_k_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_46_, v_k_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim___boxed(lean_object* v_motive_50_, lean_object* v_ctorIdx_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_k_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lean_Meta_Grind_AttrKind_ctorElim(v_motive_50_, v_ctorIdx_51_, v_t_52_, v_h_53_, v_k_54_);
lean_dec(v_ctorIdx_51_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ematch_elim___redArg(lean_object* v_t_56_, lean_object* v_ematch_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_56_, v_ematch_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ematch_elim(lean_object* v_motive_59_, lean_object* v_t_60_, lean_object* v_h_61_, lean_object* v_ematch_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_60_, v_ematch_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_cases_elim___redArg(lean_object* v_t_64_, lean_object* v_cases_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_64_, v_cases_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_cases_elim(lean_object* v_motive_67_, lean_object* v_t_68_, lean_object* v_h_69_, lean_object* v_cases_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_68_, v_cases_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_intro_elim___redArg(lean_object* v_t_72_, lean_object* v_intro_73_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_72_, v_intro_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_intro_elim(lean_object* v_motive_75_, lean_object* v_t_76_, lean_object* v_h_77_, lean_object* v_intro_78_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_76_, v_intro_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_infer_elim___redArg(lean_object* v_t_80_, lean_object* v_infer_81_){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_80_, v_infer_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_infer_elim(lean_object* v_motive_83_, lean_object* v_t_84_, lean_object* v_h_85_, lean_object* v_infer_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_84_, v_infer_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ext_elim___redArg(lean_object* v_t_88_, lean_object* v_ext_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_88_, v_ext_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ext_elim(lean_object* v_motive_91_, lean_object* v_t_92_, lean_object* v_h_93_, lean_object* v_ext_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_92_, v_ext_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_symbol_elim___redArg(lean_object* v_t_96_, lean_object* v_symbol_97_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_96_, v_symbol_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_symbol_elim(lean_object* v_motive_99_, lean_object* v_t_100_, lean_object* v_h_101_, lean_object* v_symbol_102_){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_100_, v_symbol_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_inj_elim___redArg(lean_object* v_t_104_, lean_object* v_inj_105_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_104_, v_inj_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_inj_elim(lean_object* v_motive_107_, lean_object* v_t_108_, lean_object* v_h_109_, lean_object* v_inj_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_108_, v_inj_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_funCC_elim___redArg(lean_object* v_t_112_, lean_object* v_funCC_113_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_112_, v_funCC_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_funCC_elim(lean_object* v_motive_115_, lean_object* v_t_116_, lean_object* v_h_117_, lean_object* v_funCC_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_116_, v_funCC_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_norm_elim___redArg(lean_object* v_t_120_, lean_object* v_norm_121_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_120_, v_norm_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_norm_elim(lean_object* v_motive_123_, lean_object* v_t_124_, lean_object* v_h_125_, lean_object* v_norm_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_124_, v_norm_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_unfold_elim___redArg(lean_object* v_t_128_, lean_object* v_unfold_129_){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_128_, v_unfold_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_unfold_elim(lean_object* v_motive_131_, lean_object* v_t_132_, lean_object* v_h_133_, lean_object* v_unfold_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_132_, v_unfold_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homo_elim___redArg(lean_object* v_t_136_, lean_object* v_homo_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_136_, v_homo_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homo_elim(lean_object* v_motive_139_, lean_object* v_t_140_, lean_object* v_h_141_, lean_object* v_homo_142_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_140_, v_homo_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homoPred_elim___redArg(lean_object* v_t_144_, lean_object* v_homoPred_145_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_144_, v_homoPred_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homoPred_elim(lean_object* v_motive_147_, lean_object* v_t_148_, lean_object* v_h_149_, lean_object* v_homoPred_150_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_148_, v_homoPred_150_);
return v___x_151_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_152_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0);
v___x_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
return v___x_154_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_155_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1);
v___x_156_ = lean_unsigned_to_nat(0u);
v___x_157_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
lean_ctor_set(v___x_157_, 1, v___x_156_);
lean_ctor_set(v___x_157_, 2, v___x_156_);
lean_ctor_set(v___x_157_, 3, v___x_156_);
lean_ctor_set(v___x_157_, 4, v___x_155_);
lean_ctor_set(v___x_157_, 5, v___x_155_);
lean_ctor_set(v___x_157_, 6, v___x_155_);
lean_ctor_set(v___x_157_, 7, v___x_155_);
lean_ctor_set(v___x_157_, 8, v___x_155_);
lean_ctor_set(v___x_157_, 9, v___x_155_);
lean_ctor_set(v___x_157_, 10, v___x_155_);
return v___x_157_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_158_ = lean_unsigned_to_nat(32u);
v___x_159_ = lean_mk_empty_array_with_capacity(v___x_158_);
v___x_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
return v___x_160_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_161_ = ((size_t)5ULL);
v___x_162_ = lean_unsigned_to_nat(0u);
v___x_163_ = lean_unsigned_to_nat(32u);
v___x_164_ = lean_mk_empty_array_with_capacity(v___x_163_);
v___x_165_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3);
v___x_166_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_166_, 0, v___x_165_);
lean_ctor_set(v___x_166_, 1, v___x_164_);
lean_ctor_set(v___x_166_, 2, v___x_162_);
lean_ctor_set(v___x_166_, 3, v___x_162_);
lean_ctor_set_usize(v___x_166_, 4, v___x_161_);
return v___x_166_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_167_ = lean_box(1);
v___x_168_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4);
v___x_169_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1);
v___x_170_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
lean_ctor_set(v___x_170_, 1, v___x_168_);
lean_ctor_set(v___x_170_, 2, v___x_167_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(lean_object* v_msgData_171_, lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
lean_object* v___x_175_; lean_object* v_toCold_176_; lean_object* v_env_177_; lean_object* v_options_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_175_ = lean_st_ref_get(v___y_173_);
v_toCold_176_ = lean_ctor_get(v___y_172_, 0);
v_env_177_ = lean_ctor_get(v___x_175_, 0);
lean_inc_ref(v_env_177_);
lean_dec(v___x_175_);
v_options_178_ = lean_ctor_get(v_toCold_176_, 2);
v___x_179_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2);
v___x_180_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_178_);
v___x_181_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_181_, 0, v_env_177_);
lean_ctor_set(v___x_181_, 1, v___x_179_);
lean_ctor_set(v___x_181_, 2, v___x_180_);
lean_ctor_set(v___x_181_, 3, v_options_178_);
v___x_182_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
lean_ctor_set(v___x_182_, 1, v_msgData_171_);
v___x_183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___boxed(lean_object* v_msgData_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(v_msgData_184_, v___y_185_, v___y_186_);
lean_dec(v___y_186_);
lean_dec_ref(v___y_185_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(lean_object* v_msg_189_, lean_object* v___y_190_, lean_object* v___y_191_){
_start:
{
lean_object* v_ref_193_; lean_object* v___x_194_; lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_203_; 
v_ref_193_ = lean_ctor_get(v___y_190_, 2);
v___x_194_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(v_msg_189_, v___y_190_, v___y_191_);
v_a_195_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_203_ == 0)
{
v___x_197_ = v___x_194_;
v_isShared_198_ = v_isSharedCheck_203_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_194_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_203_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_199_; lean_object* v___x_201_; 
lean_inc(v_ref_193_);
v___x_199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_199_, 0, v_ref_193_);
lean_ctor_set(v___x_199_, 1, v_a_195_);
if (v_isShared_198_ == 0)
{
lean_ctor_set_tag(v___x_197_, 1);
lean_ctor_set(v___x_197_, 0, v___x_199_);
v___x_201_ = v___x_197_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v___x_199_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg___boxed(lean_object* v_msg_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v_msg_204_, v___y_205_, v___y_206_);
lean_dec(v___y_206_);
lean_dec_ref(v___y_205_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(lean_object* v_ref_209_, lean_object* v_msg_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
lean_object* v_toCold_214_; lean_object* v_currRecDepth_215_; lean_object* v_ref_216_; uint8_t v_diag_217_; uint8_t v_suppressElabErrors_218_; lean_object* v_ref_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v_toCold_214_ = lean_ctor_get(v___y_211_, 0);
v_currRecDepth_215_ = lean_ctor_get(v___y_211_, 1);
v_ref_216_ = lean_ctor_get(v___y_211_, 2);
v_diag_217_ = lean_ctor_get_uint8(v___y_211_, sizeof(void*)*3);
v_suppressElabErrors_218_ = lean_ctor_get_uint8(v___y_211_, sizeof(void*)*3 + 1);
v_ref_219_ = l_Lean_replaceRef(v_ref_209_, v_ref_216_);
lean_inc(v_currRecDepth_215_);
lean_inc_ref(v_toCold_214_);
v___x_220_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_220_, 0, v_toCold_214_);
lean_ctor_set(v___x_220_, 1, v_currRecDepth_215_);
lean_ctor_set(v___x_220_, 2, v_ref_219_);
lean_ctor_set_uint8(v___x_220_, sizeof(void*)*3, v_diag_217_);
lean_ctor_set_uint8(v___x_220_, sizeof(void*)*3 + 1, v_suppressElabErrors_218_);
v___x_221_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v_msg_210_, v___x_220_, v___y_212_);
lean_dec_ref_known(v___x_220_, 3);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg___boxed(lean_object* v_ref_222_, lean_object* v_msg_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(v_ref_222_, v_msg_223_, v___y_224_, v___y_225_);
lean_dec(v___y_225_);
lean_dec_ref(v___y_224_);
lean_dec(v_ref_222_);
return v_res_227_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5(void){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_237_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__4));
v___x_238_ = l_Lean_stringToMessageData(v___x_237_);
return v___x_238_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__6));
v___x_241_ = l_Lean_stringToMessageData(v___x_240_);
return v___x_241_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_getAttrKindCore___closed__53(void){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__52));
v___x_376_ = l_Lean_stringToMessageData(v___x_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindCore(lean_object* v_stx_404_, lean_object* v_a_405_, lean_object* v_a_406_){
_start:
{
lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_408_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__3));
lean_inc(v_stx_404_);
v___x_409_ = l_Lean_Syntax_isOfKind(v_stx_404_, v___x_408_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_410_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_411_ = l_Lean_MessageData_ofSyntax(v_stx_404_);
v___x_412_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_410_);
lean_ctor_set(v___x_412_, 1, v___x_411_);
v___x_413_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_414_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_414_, 0, v___x_412_);
lean_ctor_set(v___x_414_, 1, v___x_413_);
v___x_415_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_414_, v_a_405_, v_a_406_);
return v___x_415_;
}
else
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; uint8_t v___x_419_; 
v___x_416_ = lean_unsigned_to_nat(0u);
v___x_417_ = l_Lean_Syntax_getArg(v_stx_404_, v___x_416_);
v___x_418_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__9));
lean_inc(v___x_417_);
v___x_419_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_418_);
if (v___x_419_ == 0)
{
lean_object* v___x_420_; uint8_t v___x_421_; 
v___x_420_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__11));
lean_inc(v___x_417_);
v___x_421_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_420_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_422_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__13));
lean_inc(v___x_417_);
v___x_423_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_422_);
if (v___x_423_ == 0)
{
lean_object* v___x_424_; uint8_t v___x_425_; 
v___x_424_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__15));
lean_inc(v___x_417_);
v___x_425_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_424_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_426_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__17));
lean_inc(v___x_417_);
v___x_427_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; uint8_t v___x_429_; 
v___x_428_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__19));
lean_inc(v___x_417_);
v___x_429_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_428_);
if (v___x_429_ == 0)
{
lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_430_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__21));
lean_inc(v___x_417_);
v___x_431_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_430_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; uint8_t v___x_433_; 
v___x_432_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__23));
lean_inc(v___x_417_);
v___x_433_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_432_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; uint8_t v___x_435_; 
v___x_434_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__25));
lean_inc(v___x_417_);
v___x_435_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_434_);
if (v___x_435_ == 0)
{
lean_object* v___x_436_; uint8_t v___x_437_; 
v___x_436_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__27));
lean_inc(v___x_417_);
v___x_437_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_436_);
if (v___x_437_ == 0)
{
lean_object* v___x_438_; uint8_t v___x_439_; 
v___x_438_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
lean_inc(v___x_417_);
v___x_439_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_438_);
if (v___x_439_ == 0)
{
lean_object* v___x_440_; uint8_t v___x_441_; 
v___x_440_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__31));
lean_inc(v___x_417_);
v___x_441_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_440_);
if (v___x_441_ == 0)
{
lean_object* v___x_442_; uint8_t v___x_443_; 
v___x_442_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__33));
lean_inc(v___x_417_);
v___x_443_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_442_);
if (v___x_443_ == 0)
{
lean_object* v___x_444_; uint8_t v___x_445_; 
v___x_444_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__35));
lean_inc(v___x_417_);
v___x_445_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_444_);
if (v___x_445_ == 0)
{
lean_object* v___x_446_; uint8_t v___x_447_; 
v___x_446_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__37));
lean_inc(v___x_417_);
v___x_447_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_446_);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; uint8_t v___x_449_; 
v___x_448_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__39));
lean_inc(v___x_417_);
v___x_449_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_448_);
if (v___x_449_ == 0)
{
lean_object* v___x_450_; uint8_t v___x_451_; 
v___x_450_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__41));
lean_inc(v___x_417_);
v___x_451_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_450_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; uint8_t v___x_453_; 
v___x_452_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__43));
lean_inc(v___x_417_);
v___x_453_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_452_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; uint8_t v___x_455_; 
v___x_454_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__45));
lean_inc(v___x_417_);
v___x_455_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_454_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_456_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__47));
lean_inc(v___x_417_);
v___x_457_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_456_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; uint8_t v___x_459_; 
v___x_458_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__49));
lean_inc(v___x_417_);
v___x_459_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_458_);
if (v___x_459_ == 0)
{
lean_object* v___x_460_; uint8_t v___x_461_; 
v___x_460_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__51));
lean_inc(v___x_417_);
v___x_461_ = l_Lean_Syntax_isOfKind(v___x_417_, v___x_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
lean_dec(v___x_417_);
v___x_462_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_463_ = l_Lean_MessageData_ofSyntax(v_stx_404_);
v___x_464_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_464_, 0, v___x_462_);
lean_ctor_set(v___x_464_, 1, v___x_463_);
v___x_465_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_466_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_466_, 0, v___x_464_);
lean_ctor_set(v___x_466_, 1, v___x_465_);
v___x_467_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_466_, v_a_405_, v_a_406_);
return v___x_467_;
}
else
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
lean_dec(v_stx_404_);
v___x_468_ = lean_unsigned_to_nat(1u);
v___x_469_ = l_Lean_Syntax_getArg(v___x_417_, v___x_468_);
lean_dec(v___x_417_);
v___x_470_ = l_Lean_Syntax_isNatLit_x3f(v___x_469_);
if (lean_obj_tag(v___x_470_) == 1)
{
lean_object* v_val_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_479_; 
lean_dec(v___x_469_);
v_val_471_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_479_ == 0)
{
v___x_473_ = v___x_470_;
v_isShared_474_ = v_isSharedCheck_479_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_val_471_);
lean_dec(v___x_470_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_479_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_476_; 
if (v_isShared_474_ == 0)
{
lean_ctor_set_tag(v___x_473_, 5);
v___x_476_ = v___x_473_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_val_471_);
v___x_476_ = v_reuseFailAlloc_478_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
lean_object* v___x_477_; 
v___x_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_477_, 0, v___x_476_);
return v___x_477_;
}
}
}
else
{
lean_object* v___x_480_; lean_object* v___x_481_; 
lean_dec(v___x_470_);
v___x_480_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__53, &l_Lean_Meta_Grind_getAttrKindCore___closed__53_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__53);
v___x_481_ = l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(v___x_469_, v___x_480_, v_a_405_, v_a_406_);
lean_dec(v___x_469_);
return v___x_481_;
}
}
}
else
{
lean_object* v___x_482_; lean_object* v___x_483_; 
lean_dec(v___x_417_);
lean_dec(v_stx_404_);
v___x_482_ = lean_box(11);
v___x_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
return v___x_483_;
}
}
else
{
lean_object* v___x_484_; lean_object* v___x_485_; 
lean_dec(v___x_417_);
lean_dec(v_stx_404_);
v___x_484_ = lean_box(10);
v___x_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_485_, 0, v___x_484_);
return v___x_485_;
}
}
else
{
lean_object* v___x_486_; lean_object* v___x_487_; 
lean_dec(v___x_417_);
lean_dec(v_stx_404_);
v___x_486_ = lean_box(9);
v___x_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
return v___x_487_;
}
}
else
{
lean_object* v___x_488_; lean_object* v___x_489_; uint8_t v___x_490_; 
v___x_488_ = lean_unsigned_to_nat(1u);
v___x_489_ = l_Lean_Syntax_getArg(v___x_417_, v___x_488_);
lean_inc(v___x_489_);
v___x_490_ = l_Lean_Syntax_matchesNull(v___x_489_, v___x_416_);
if (v___x_490_ == 0)
{
uint8_t v___x_491_; 
lean_inc(v___x_489_);
v___x_491_ = l_Lean_Syntax_matchesNull(v___x_489_, v___x_488_);
if (v___x_491_ == 0)
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
lean_dec(v___x_489_);
lean_dec(v___x_417_);
v___x_492_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_493_ = l_Lean_MessageData_ofSyntax(v_stx_404_);
v___x_494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_494_, 0, v___x_492_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
v___x_495_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_496_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_496_, 0, v___x_494_);
lean_ctor_set(v___x_496_, 1, v___x_495_);
v___x_497_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_496_, v_a_405_, v_a_406_);
return v___x_497_;
}
else
{
lean_object* v___x_498_; lean_object* v___x_499_; uint8_t v___x_500_; 
v___x_498_ = l_Lean_Syntax_getArg(v___x_489_, v___x_416_);
lean_dec(v___x_489_);
v___x_499_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__56));
lean_inc(v___x_498_);
v___x_500_ = l_Lean_Syntax_isOfKind(v___x_498_, v___x_499_);
if (v___x_500_ == 0)
{
lean_object* v___x_501_; uint8_t v___x_502_; 
v___x_501_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__58));
v___x_502_ = l_Lean_Syntax_isOfKind(v___x_498_, v___x_501_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
lean_dec(v___x_417_);
v___x_503_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_504_ = l_Lean_MessageData_ofSyntax(v_stx_404_);
v___x_505_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_505_, 0, v___x_503_);
lean_ctor_set(v___x_505_, 1, v___x_504_);
v___x_506_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_507_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_507_, 0, v___x_505_);
lean_ctor_set(v___x_507_, 1, v___x_506_);
v___x_508_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_507_, v_a_405_, v_a_406_);
return v___x_508_;
}
else
{
lean_object* v___x_509_; lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_509_ = lean_unsigned_to_nat(2u);
v___x_510_ = l_Lean_Syntax_getArg(v___x_417_, v___x_509_);
lean_dec(v___x_417_);
lean_inc(v___x_510_);
v___x_511_ = l_Lean_Syntax_matchesNull(v___x_510_, v___x_416_);
if (v___x_511_ == 0)
{
uint8_t v___x_512_; 
v___x_512_ = l_Lean_Syntax_matchesNull(v___x_510_, v___x_488_);
if (v___x_512_ == 0)
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_513_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_514_ = l_Lean_MessageData_ofSyntax(v_stx_404_);
v___x_515_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_515_, 0, v___x_513_);
lean_ctor_set(v___x_515_, 1, v___x_514_);
v___x_516_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_517_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_515_);
lean_ctor_set(v___x_517_, 1, v___x_516_);
v___x_518_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_517_, v_a_405_, v_a_406_);
return v___x_518_;
}
else
{
lean_object* v___x_519_; lean_object* v___x_520_; 
lean_dec(v_stx_404_);
v___x_519_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_519_, 0, v___x_511_);
lean_ctor_set_uint8(v___x_519_, 1, v___x_409_);
v___x_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_520_, 0, v___x_519_);
return v___x_520_;
}
}
else
{
lean_object* v___x_521_; lean_object* v___x_522_; 
lean_dec(v___x_510_);
lean_dec(v_stx_404_);
v___x_521_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_521_, 0, v___x_500_);
lean_ctor_set_uint8(v___x_521_, 1, v___x_500_);
v___x_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_522_, 0, v___x_521_);
return v___x_522_;
}
}
}
else
{
lean_object* v___x_523_; lean_object* v___x_524_; uint8_t v___x_525_; 
lean_dec(v___x_498_);
v___x_523_ = lean_unsigned_to_nat(2u);
v___x_524_ = l_Lean_Syntax_getArg(v___x_417_, v___x_523_);
lean_dec(v___x_417_);
lean_inc(v___x_524_);
v___x_525_ = l_Lean_Syntax_matchesNull(v___x_524_, v___x_416_);
if (v___x_525_ == 0)
{
uint8_t v___x_526_; 
v___x_526_ = l_Lean_Syntax_matchesNull(v___x_524_, v___x_488_);
if (v___x_526_ == 0)
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_527_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_528_ = l_Lean_MessageData_ofSyntax(v_stx_404_);
v___x_529_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_529_, 0, v___x_527_);
lean_ctor_set(v___x_529_, 1, v___x_528_);
v___x_530_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_531_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_531_, 0, v___x_529_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
v___x_532_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_531_, v_a_405_, v_a_406_);
return v___x_532_;
}
else
{
lean_object* v___x_533_; lean_object* v___x_534_; 
lean_dec(v_stx_404_);
v___x_533_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_533_, 0, v___x_409_);
lean_ctor_set_uint8(v___x_533_, 1, v___x_409_);
v___x_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
return v___x_534_;
}
}
else
{
lean_object* v___x_535_; lean_object* v___x_536_; 
lean_dec(v___x_524_);
lean_dec(v_stx_404_);
v___x_535_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_535_, 0, v___x_409_);
lean_ctor_set_uint8(v___x_535_, 1, v___x_490_);
v___x_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
return v___x_536_;
}
}
}
}
else
{
lean_object* v___x_537_; lean_object* v___x_538_; uint8_t v___x_539_; 
lean_dec(v___x_489_);
v___x_537_ = lean_unsigned_to_nat(2u);
v___x_538_ = l_Lean_Syntax_getArg(v___x_417_, v___x_537_);
lean_dec(v___x_417_);
lean_inc(v___x_538_);
v___x_539_ = l_Lean_Syntax_matchesNull(v___x_538_, v___x_416_);
if (v___x_539_ == 0)
{
uint8_t v___x_540_; 
v___x_540_ = l_Lean_Syntax_matchesNull(v___x_538_, v___x_488_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_541_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_542_ = l_Lean_MessageData_ofSyntax(v_stx_404_);
v___x_543_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_543_, 0, v___x_541_);
lean_ctor_set(v___x_543_, 1, v___x_542_);
v___x_544_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_545_, 0, v___x_543_);
lean_ctor_set(v___x_545_, 1, v___x_544_);
v___x_546_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_545_, v_a_405_, v_a_406_);
return v___x_546_;
}
else
{
lean_object* v___x_547_; lean_object* v___x_548_; 
lean_dec(v_stx_404_);
v___x_547_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_547_, 0, v___x_409_);
lean_ctor_set_uint8(v___x_547_, 1, v___x_409_);
v___x_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
return v___x_548_;
}
}
else
{
lean_object* v___x_549_; lean_object* v___x_550_; 
lean_dec(v___x_538_);
lean_dec(v_stx_404_);
v___x_549_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_549_, 0, v___x_409_);
lean_ctor_set_uint8(v___x_549_, 1, v___x_451_);
v___x_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
return v___x_550_;
}
}
}
}
else
{
lean_object* v___x_551_; lean_object* v___x_552_; 
lean_dec(v___x_417_);
lean_dec(v_stx_404_);
v___x_551_ = lean_box(7);
v___x_552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_552_, 0, v___x_551_);
return v___x_552_;
}
}
else
{
lean_object* v___x_553_; lean_object* v___x_554_; 
lean_dec(v___x_417_);
lean_dec(v_stx_404_);
v___x_553_ = lean_box(6);
v___x_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_554_, 0, v___x_553_);
return v___x_554_;
}
}
else
{
lean_object* v___x_555_; lean_object* v___x_556_; 
lean_dec(v___x_417_);
lean_dec(v_stx_404_);
v___x_555_ = lean_box(4);
v___x_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_556_, 0, v___x_555_);
return v___x_556_;
}
}
else
{
lean_object* v___x_557_; lean_object* v___x_558_; 
lean_dec(v___x_417_);
lean_dec(v_stx_404_);
v___x_557_ = lean_box(2);
v___x_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
return v___x_558_;
}
}
else
{
lean_object* v___x_559_; lean_object* v___x_560_; 
lean_dec(v___x_417_);
lean_dec(v_stx_404_);
v___x_559_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_559_, 0, v___x_409_);
v___x_560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_560_, 0, v___x_559_);
return v___x_560_;
}
}
else
{
lean_object* v___x_561_; lean_object* v___x_562_; 
lean_dec(v___x_417_);
lean_dec(v_stx_404_);
v___x_561_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_561_, 0, v___x_439_);
v___x_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
return v___x_562_;
}
}
else
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
lean_dec(v___x_417_);
lean_dec(v_stx_404_);
v___x_563_ = lean_alloc_ctor(8, 0, 1);
lean_ctor_set_uint8(v___x_563_, 0, v___x_409_);
v___x_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
v___x_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
return v___x_565_;
}
}
else
{
lean_object* v___x_566_; lean_object* v___x_567_; 
lean_dec(v___x_417_);
lean_dec(v_stx_404_);
v___x_566_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__59));
v___x_567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
return v___x_567_;
}
}
else
{
lean_object* v___x_568_; lean_object* v___x_569_; 
lean_dec(v___x_417_);
lean_dec(v_stx_404_);
v___x_568_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__60));
v___x_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
return v___x_569_;
}
}
else
{
lean_object* v___x_570_; lean_object* v___x_571_; 
lean_dec(v___x_417_);
lean_dec(v_stx_404_);
v___x_570_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__61));
v___x_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_571_, 0, v___x_570_);
return v___x_571_;
}
}
else
{
lean_object* v___x_572_; lean_object* v___x_573_; 
lean_dec(v___x_417_);
lean_dec(v_stx_404_);
v___x_572_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__62));
v___x_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
return v___x_573_;
}
}
else
{
lean_object* v___x_574_; lean_object* v___x_575_; uint8_t v___x_576_; 
v___x_574_ = lean_unsigned_to_nat(3u);
v___x_575_ = l_Lean_Syntax_getArg(v___x_417_, v___x_574_);
lean_dec(v___x_417_);
lean_inc(v___x_575_);
v___x_576_ = l_Lean_Syntax_matchesNull(v___x_575_, v___x_416_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_577_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_575_);
v___x_578_ = l_Lean_Syntax_matchesNull(v___x_575_, v___x_577_);
if (v___x_578_ == 0)
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
lean_dec(v___x_575_);
v___x_579_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_580_ = l_Lean_MessageData_ofSyntax(v_stx_404_);
v___x_581_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_579_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_581_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_583_, v_a_405_, v_a_406_);
return v___x_584_;
}
else
{
lean_object* v___x_585_; lean_object* v___x_586_; uint8_t v___x_587_; 
v___x_585_ = l_Lean_Syntax_getArg(v___x_575_, v___x_416_);
lean_dec(v___x_575_);
v___x_586_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
v___x_587_ = l_Lean_Syntax_isOfKind(v___x_585_, v___x_586_);
if (v___x_587_ == 0)
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_588_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_589_ = l_Lean_MessageData_ofSyntax(v_stx_404_);
v___x_590_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_590_, 0, v___x_588_);
lean_ctor_set(v___x_590_, 1, v___x_589_);
v___x_591_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_592_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_590_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
v___x_593_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_592_, v_a_405_, v_a_406_);
return v___x_593_;
}
else
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
lean_dec(v_stx_404_);
v___x_594_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_594_, 0, v___x_409_);
v___x_595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
v___x_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
return v___x_596_;
}
}
}
else
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
lean_dec(v___x_575_);
lean_dec(v_stx_404_);
v___x_597_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_597_, 0, v___x_427_);
v___x_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_598_, 0, v___x_597_);
v___x_599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_599_, 0, v___x_598_);
return v___x_599_;
}
}
}
else
{
lean_object* v___x_600_; lean_object* v___x_601_; uint8_t v___x_602_; 
v___x_600_ = lean_unsigned_to_nat(2u);
v___x_601_ = l_Lean_Syntax_getArg(v___x_417_, v___x_600_);
lean_dec(v___x_417_);
lean_inc(v___x_601_);
v___x_602_ = l_Lean_Syntax_matchesNull(v___x_601_, v___x_416_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; uint8_t v___x_604_; 
v___x_603_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_601_);
v___x_604_ = l_Lean_Syntax_matchesNull(v___x_601_, v___x_603_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
lean_dec(v___x_601_);
v___x_605_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_606_ = l_Lean_MessageData_ofSyntax(v_stx_404_);
v___x_607_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_607_, 0, v___x_605_);
lean_ctor_set(v___x_607_, 1, v___x_606_);
v___x_608_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_609_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_609_, 0, v___x_607_);
lean_ctor_set(v___x_609_, 1, v___x_608_);
v___x_610_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_609_, v_a_405_, v_a_406_);
return v___x_610_;
}
else
{
lean_object* v___x_611_; lean_object* v___x_612_; uint8_t v___x_613_; 
v___x_611_ = l_Lean_Syntax_getArg(v___x_601_, v___x_416_);
lean_dec(v___x_601_);
v___x_612_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
v___x_613_ = l_Lean_Syntax_isOfKind(v___x_611_, v___x_612_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_614_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_615_ = l_Lean_MessageData_ofSyntax(v_stx_404_);
v___x_616_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_616_, 0, v___x_614_);
lean_ctor_set(v___x_616_, 1, v___x_615_);
v___x_617_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_618_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_616_);
lean_ctor_set(v___x_618_, 1, v___x_617_);
v___x_619_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_618_, v_a_405_, v_a_406_);
return v___x_619_;
}
else
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
lean_dec(v_stx_404_);
v___x_620_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_620_, 0, v___x_409_);
v___x_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
v___x_622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_622_, 0, v___x_621_);
return v___x_622_;
}
}
}
else
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
lean_dec(v___x_601_);
lean_dec(v_stx_404_);
v___x_623_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_623_, 0, v___x_425_);
v___x_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
v___x_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_625_, 0, v___x_624_);
return v___x_625_;
}
}
}
else
{
lean_object* v___x_626_; lean_object* v___x_627_; uint8_t v___x_628_; 
v___x_626_ = lean_unsigned_to_nat(1u);
v___x_627_ = l_Lean_Syntax_getArg(v___x_417_, v___x_626_);
lean_dec(v___x_417_);
lean_inc(v___x_627_);
v___x_628_ = l_Lean_Syntax_matchesNull(v___x_627_, v___x_416_);
if (v___x_628_ == 0)
{
uint8_t v___x_629_; 
lean_inc(v___x_627_);
v___x_629_ = l_Lean_Syntax_matchesNull(v___x_627_, v___x_626_);
if (v___x_629_ == 0)
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
lean_dec(v___x_627_);
v___x_630_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_631_ = l_Lean_MessageData_ofSyntax(v_stx_404_);
v___x_632_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_632_, 0, v___x_630_);
lean_ctor_set(v___x_632_, 1, v___x_631_);
v___x_633_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_634_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_634_, 0, v___x_632_);
lean_ctor_set(v___x_634_, 1, v___x_633_);
v___x_635_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_634_, v_a_405_, v_a_406_);
return v___x_635_;
}
else
{
lean_object* v___x_636_; lean_object* v___x_637_; uint8_t v___x_638_; 
v___x_636_ = l_Lean_Syntax_getArg(v___x_627_, v___x_416_);
lean_dec(v___x_627_);
v___x_637_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
v___x_638_ = l_Lean_Syntax_isOfKind(v___x_636_, v___x_637_);
if (v___x_638_ == 0)
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_639_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_640_ = l_Lean_MessageData_ofSyntax(v_stx_404_);
v___x_641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_639_);
lean_ctor_set(v___x_641_, 1, v___x_640_);
v___x_642_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_641_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
v___x_644_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_643_, v_a_405_, v_a_406_);
return v___x_644_;
}
else
{
lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
lean_dec(v_stx_404_);
v___x_645_ = lean_alloc_ctor(5, 0, 1);
lean_ctor_set_uint8(v___x_645_, 0, v___x_409_);
v___x_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
v___x_647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_647_, 0, v___x_646_);
return v___x_647_;
}
}
}
else
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
lean_dec(v___x_627_);
lean_dec(v_stx_404_);
v___x_648_ = lean_alloc_ctor(5, 0, 1);
lean_ctor_set_uint8(v___x_648_, 0, v___x_423_);
v___x_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_649_, 0, v___x_648_);
v___x_650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_650_, 0, v___x_649_);
return v___x_650_;
}
}
}
else
{
lean_object* v___x_651_; lean_object* v___x_652_; 
lean_dec(v___x_417_);
lean_dec(v_stx_404_);
v___x_651_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__63));
v___x_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
return v___x_652_;
}
}
else
{
lean_object* v___x_653_; lean_object* v___x_654_; uint8_t v___x_655_; 
v___x_653_ = lean_unsigned_to_nat(1u);
v___x_654_ = l_Lean_Syntax_getArg(v___x_417_, v___x_653_);
lean_dec(v___x_417_);
lean_inc(v___x_654_);
v___x_655_ = l_Lean_Syntax_matchesNull(v___x_654_, v___x_416_);
if (v___x_655_ == 0)
{
uint8_t v___x_656_; 
lean_inc(v___x_654_);
v___x_656_ = l_Lean_Syntax_matchesNull(v___x_654_, v___x_653_);
if (v___x_656_ == 0)
{
lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
lean_dec(v___x_654_);
v___x_657_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_658_ = l_Lean_MessageData_ofSyntax(v_stx_404_);
v___x_659_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_659_, 0, v___x_657_);
lean_ctor_set(v___x_659_, 1, v___x_658_);
v___x_660_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_661_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_661_, 0, v___x_659_);
lean_ctor_set(v___x_661_, 1, v___x_660_);
v___x_662_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_661_, v_a_405_, v_a_406_);
return v___x_662_;
}
else
{
lean_object* v___x_663_; lean_object* v___x_664_; uint8_t v___x_665_; 
v___x_663_ = l_Lean_Syntax_getArg(v___x_654_, v___x_416_);
lean_dec(v___x_654_);
v___x_664_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
v___x_665_ = l_Lean_Syntax_isOfKind(v___x_663_, v___x_664_);
if (v___x_665_ == 0)
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_666_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_667_ = l_Lean_MessageData_ofSyntax(v_stx_404_);
v___x_668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_666_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
v___x_669_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_668_);
lean_ctor_set(v___x_670_, 1, v___x_669_);
v___x_671_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_670_, v_a_405_, v_a_406_);
return v___x_671_;
}
else
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
lean_dec(v_stx_404_);
v___x_672_ = lean_alloc_ctor(8, 0, 1);
lean_ctor_set_uint8(v___x_672_, 0, v___x_409_);
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
v___x_674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_674_, 0, v___x_673_);
return v___x_674_;
}
}
}
else
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
lean_dec(v___x_654_);
lean_dec(v_stx_404_);
v___x_675_ = lean_alloc_ctor(8, 0, 1);
lean_ctor_set_uint8(v___x_675_, 0, v___x_419_);
v___x_676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_676_, 0, v___x_675_);
v___x_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_677_, 0, v___x_676_);
return v___x_677_;
}
}
}
else
{
lean_object* v___x_678_; lean_object* v___x_679_; uint8_t v___x_680_; 
v___x_678_ = lean_unsigned_to_nat(1u);
v___x_679_ = l_Lean_Syntax_getArg(v___x_417_, v___x_678_);
lean_dec(v___x_417_);
lean_inc(v___x_679_);
v___x_680_ = l_Lean_Syntax_matchesNull(v___x_679_, v___x_416_);
if (v___x_680_ == 0)
{
uint8_t v___x_681_; 
lean_inc(v___x_679_);
v___x_681_ = l_Lean_Syntax_matchesNull(v___x_679_, v___x_678_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
lean_dec(v___x_679_);
v___x_682_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_683_ = l_Lean_MessageData_ofSyntax(v_stx_404_);
v___x_684_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_684_, 0, v___x_682_);
lean_ctor_set(v___x_684_, 1, v___x_683_);
v___x_685_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_686_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_686_, 0, v___x_684_);
lean_ctor_set(v___x_686_, 1, v___x_685_);
v___x_687_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_686_, v_a_405_, v_a_406_);
return v___x_687_;
}
else
{
lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v___x_688_ = l_Lean_Syntax_getArg(v___x_679_, v___x_416_);
lean_dec(v___x_679_);
v___x_689_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
v___x_690_ = l_Lean_Syntax_isOfKind(v___x_688_, v___x_689_);
if (v___x_690_ == 0)
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_691_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_692_ = l_Lean_MessageData_ofSyntax(v_stx_404_);
v___x_693_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_693_, 0, v___x_691_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
v___x_694_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_695_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_695_, 0, v___x_693_);
lean_ctor_set(v___x_695_, 1, v___x_694_);
v___x_696_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_695_, v_a_405_, v_a_406_);
return v___x_696_;
}
else
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
lean_dec(v_stx_404_);
v___x_697_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_697_, 0, v___x_409_);
v___x_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
v___x_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
return v___x_699_;
}
}
}
else
{
lean_object* v___x_700_; lean_object* v___x_701_; 
lean_dec(v___x_679_);
lean_dec(v_stx_404_);
v___x_700_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__65));
v___x_701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_701_, 0, v___x_700_);
return v___x_701_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindCore___boxed(lean_object* v_stx_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l_Lean_Meta_Grind_getAttrKindCore(v_stx_702_, v_a_703_, v_a_704_);
lean_dec(v_a_704_);
lean_dec_ref(v_a_703_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0(lean_object* v_00_u03b1_707_, lean_object* v_msg_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
lean_object* v___x_712_; 
v___x_712_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v_msg_708_, v___y_709_, v___y_710_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___boxed(lean_object* v_00_u03b1_713_, lean_object* v_msg_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0(v_00_u03b1_713_, v_msg_714_, v___y_715_, v___y_716_);
lean_dec(v___y_716_);
lean_dec_ref(v___y_715_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1(lean_object* v_00_u03b1_719_, lean_object* v_ref_720_, lean_object* v_msg_721_, lean_object* v___y_722_, lean_object* v___y_723_){
_start:
{
lean_object* v___x_725_; 
v___x_725_ = l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(v_ref_720_, v_msg_721_, v___y_722_, v___y_723_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___boxed(lean_object* v_00_u03b1_726_, lean_object* v_ref_727_, lean_object* v_msg_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1(v_00_u03b1_726_, v_ref_727_, v_msg_728_, v___y_729_, v___y_730_);
lean_dec(v___y_730_);
lean_dec_ref(v___y_729_);
lean_dec(v_ref_727_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindFromOpt(lean_object* v_stx_733_, lean_object* v_a_734_, lean_object* v_a_735_){
_start:
{
lean_object* v___x_737_; lean_object* v___x_738_; uint8_t v___x_739_; 
v___x_737_ = lean_unsigned_to_nat(1u);
v___x_738_ = l_Lean_Syntax_getArg(v_stx_733_, v___x_737_);
v___x_739_ = l_Lean_Syntax_isNone(v___x_738_);
if (v___x_739_ == 0)
{
lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_740_ = lean_unsigned_to_nat(0u);
v___x_741_ = l_Lean_Syntax_getArg(v___x_738_, v___x_740_);
lean_dec(v___x_738_);
v___x_742_ = l_Lean_Meta_Grind_getAttrKindCore(v___x_741_, v_a_734_, v_a_735_);
return v___x_742_;
}
else
{
lean_object* v___x_743_; lean_object* v___x_744_; 
lean_dec(v___x_738_);
v___x_743_ = lean_box(3);
v___x_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_744_, 0, v___x_743_);
return v___x_744_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindFromOpt___boxed(lean_object* v_stx_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l_Lean_Meta_Grind_getAttrKindFromOpt(v_stx_745_, v_a_746_, v_a_747_);
lean_dec(v_a_747_);
lean_dec_ref(v_a_746_);
lean_dec(v_stx_745_);
return v_res_749_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1(void){
_start:
{
lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_751_ = ((lean_object*)(l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__0));
v___x_752_ = l_Lean_stringToMessageData(v___x_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(lean_object* v_a_753_, lean_object* v_a_754_){
_start:
{
lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_756_ = lean_obj_once(&l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1, &l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1_once, _init_l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1);
v___x_757_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_756_, v_a_753_, v_a_754_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___boxed(lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(v_a_758_, v_a_759_);
lean_dec(v_a_759_);
lean_dec_ref(v_a_758_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier(lean_object* v_00_u03b1_762_, lean_object* v_a_763_, lean_object* v_a_764_){
_start:
{
lean_object* v___x_766_; 
v___x_766_ = l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(v_a_763_, v_a_764_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___boxed(lean_object* v_00_u03b1_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_Lean_Meta_Grind_throwInvalidUsrModifier(v_00_u03b1_767_, v_a_768_, v_a_769_);
lean_dec(v_a_769_);
lean_dec_ref(v_a_768_);
return v_res_771_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_772_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0);
v___x_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_773_, 0, v___x_772_);
return v___x_773_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0);
v___x_775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_775_, 0, v___x_774_);
lean_ctor_set(v___x_775_, 1, v___x_774_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(lean_object* v_ext_776_, lean_object* v_b_777_, uint8_t v_kind_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
lean_object* v_toCold_782_; lean_object* v_currNamespace_783_; lean_object* v___x_784_; lean_object* v_env_785_; lean_object* v_nextMacroScope_786_; lean_object* v_ngen_787_; lean_object* v_auxDeclNGen_788_; lean_object* v_traceState_789_; lean_object* v_messages_790_; lean_object* v_infoState_791_; lean_object* v_snapshotTasks_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_804_; 
v_toCold_782_ = lean_ctor_get(v___y_779_, 0);
v_currNamespace_783_ = lean_ctor_get(v_toCold_782_, 4);
v___x_784_ = lean_st_ref_take(v___y_780_);
v_env_785_ = lean_ctor_get(v___x_784_, 0);
v_nextMacroScope_786_ = lean_ctor_get(v___x_784_, 1);
v_ngen_787_ = lean_ctor_get(v___x_784_, 2);
v_auxDeclNGen_788_ = lean_ctor_get(v___x_784_, 3);
v_traceState_789_ = lean_ctor_get(v___x_784_, 4);
v_messages_790_ = lean_ctor_get(v___x_784_, 6);
v_infoState_791_ = lean_ctor_get(v___x_784_, 7);
v_snapshotTasks_792_ = lean_ctor_get(v___x_784_, 8);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_804_ == 0)
{
lean_object* v_unused_805_; 
v_unused_805_ = lean_ctor_get(v___x_784_, 5);
lean_dec(v_unused_805_);
v___x_794_ = v___x_784_;
v_isShared_795_ = v_isSharedCheck_804_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_snapshotTasks_792_);
lean_inc(v_infoState_791_);
lean_inc(v_messages_790_);
lean_inc(v_traceState_789_);
lean_inc(v_auxDeclNGen_788_);
lean_inc(v_ngen_787_);
lean_inc(v_nextMacroScope_786_);
lean_inc(v_env_785_);
lean_dec(v___x_784_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_804_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_800_; 
v___x_796_ = lean_box(0);
lean_inc(v_currNamespace_783_);
v___x_797_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_785_, v_ext_776_, v_b_777_, v_kind_778_, v_currNamespace_783_);
v___x_798_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 5, v___x_798_);
lean_ctor_set(v___x_794_, 0, v___x_797_);
v___x_800_ = v___x_794_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v___x_797_);
lean_ctor_set(v_reuseFailAlloc_803_, 1, v_nextMacroScope_786_);
lean_ctor_set(v_reuseFailAlloc_803_, 2, v_ngen_787_);
lean_ctor_set(v_reuseFailAlloc_803_, 3, v_auxDeclNGen_788_);
lean_ctor_set(v_reuseFailAlloc_803_, 4, v_traceState_789_);
lean_ctor_set(v_reuseFailAlloc_803_, 5, v___x_798_);
lean_ctor_set(v_reuseFailAlloc_803_, 6, v_messages_790_);
lean_ctor_set(v_reuseFailAlloc_803_, 7, v_infoState_791_);
lean_ctor_set(v_reuseFailAlloc_803_, 8, v_snapshotTasks_792_);
v___x_800_ = v_reuseFailAlloc_803_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = lean_st_ref_put(v___y_780_, v___x_800_);
v___x_802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_802_, 0, v___x_796_);
return v___x_802_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___boxed(lean_object* v_ext_806_, lean_object* v_b_807_, lean_object* v_kind_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
uint8_t v_kind_boxed_812_; lean_object* v_res_813_; 
v_kind_boxed_812_ = lean_unbox(v_kind_808_);
v_res_813_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_806_, v_b_807_, v_kind_boxed_812_, v___y_809_, v___y_810_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0(lean_object* v_00_u03b1_814_, lean_object* v_00_u03b2_815_, lean_object* v_00_u03c3_816_, lean_object* v_ext_817_, lean_object* v_b_818_, uint8_t v_kind_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
lean_object* v___x_823_; 
v___x_823_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_817_, v_b_818_, v_kind_819_, v___y_820_, v___y_821_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___boxed(lean_object* v_00_u03b1_824_, lean_object* v_00_u03b2_825_, lean_object* v_00_u03c3_826_, lean_object* v_ext_827_, lean_object* v_b_828_, lean_object* v_kind_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_){
_start:
{
uint8_t v_kind_boxed_833_; lean_object* v_res_834_; 
v_kind_boxed_833_ = lean_unbox(v_kind_829_);
v_res_834_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0(v_00_u03b1_824_, v_00_u03b2_825_, v_00_u03c3_826_, v_ext_827_, v_b_828_, v_kind_boxed_833_, v___y_830_, v___y_831_);
lean_dec(v___y_831_);
lean_dec_ref(v___y_830_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(lean_object* v_ext_835_, lean_object* v_declName_836_, uint8_t v_eager_837_, uint8_t v_attrKind_838_, lean_object* v_a_839_, lean_object* v_a_840_){
_start:
{
lean_object* v___x_842_; 
lean_inc(v_declName_836_);
v___x_842_ = l_Lean_Meta_Grind_validateCasesAttr(v_declName_836_, v_eager_837_, v_a_839_, v_a_840_);
if (lean_obj_tag(v___x_842_) == 0)
{
lean_object* v___x_843_; lean_object* v___x_844_; 
lean_dec_ref_known(v___x_842_, 1);
v___x_843_ = lean_alloc_ctor(2, 1, 1);
lean_ctor_set(v___x_843_, 0, v_declName_836_);
lean_ctor_set_uint8(v___x_843_, sizeof(void*)*1, v_eager_837_);
v___x_844_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_835_, v___x_843_, v_attrKind_838_, v_a_839_, v_a_840_);
return v___x_844_;
}
else
{
lean_dec(v_declName_836_);
lean_dec_ref(v_ext_835_);
return v___x_842_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr___boxed(lean_object* v_ext_845_, lean_object* v_declName_846_, lean_object* v_eager_847_, lean_object* v_attrKind_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_){
_start:
{
uint8_t v_eager_boxed_852_; uint8_t v_attrKind_boxed_853_; lean_object* v_res_854_; 
v_eager_boxed_852_ = lean_unbox(v_eager_847_);
v_attrKind_boxed_853_ = lean_unbox(v_attrKind_848_);
v_res_854_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(v_ext_845_, v_declName_846_, v_eager_boxed_852_, v_attrKind_boxed_853_, v_a_849_, v_a_850_);
lean_dec(v_a_850_);
lean_dec_ref(v_a_849_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr(lean_object* v_ext_855_, lean_object* v_declName_856_, uint8_t v_attrKind_857_, lean_object* v_a_858_, lean_object* v_a_859_){
_start:
{
lean_object* v___x_861_; 
lean_inc(v_declName_856_);
v___x_861_ = l_Lean_Meta_Grind_validateExtAttr(v_declName_856_, v_a_858_, v_a_859_);
if (lean_obj_tag(v___x_861_) == 0)
{
lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_869_; 
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_869_ == 0)
{
lean_object* v_unused_870_; 
v_unused_870_ = lean_ctor_get(v___x_861_, 0);
lean_dec(v_unused_870_);
v___x_863_ = v___x_861_;
v_isShared_864_ = v_isSharedCheck_869_;
goto v_resetjp_862_;
}
else
{
lean_dec(v___x_861_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_869_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_866_; 
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 0, v_declName_856_);
v___x_866_ = v___x_863_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v_declName_856_);
v___x_866_ = v_reuseFailAlloc_868_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
lean_object* v___x_867_; 
v___x_867_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_855_, v___x_866_, v_attrKind_857_, v_a_858_, v_a_859_);
return v___x_867_;
}
}
}
else
{
lean_dec(v_declName_856_);
lean_dec_ref(v_ext_855_);
return v___x_861_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr___boxed(lean_object* v_ext_871_, lean_object* v_declName_872_, lean_object* v_attrKind_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_){
_start:
{
uint8_t v_attrKind_boxed_877_; lean_object* v_res_878_; 
v_attrKind_boxed_877_ = lean_unbox(v_attrKind_873_);
v_res_878_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr(v_ext_871_, v_declName_872_, v_attrKind_boxed_877_, v_a_874_, v_a_875_);
lean_dec(v_a_875_);
lean_dec_ref(v_a_874_);
return v_res_878_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr(lean_object* v_ext_879_, lean_object* v_declName_880_, uint8_t v_attrKind_881_, lean_object* v_a_882_, lean_object* v_a_883_){
_start:
{
lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_885_, 0, v_declName_880_);
v___x_886_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_879_, v___x_885_, v_attrKind_881_, v_a_882_, v_a_883_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr___boxed(lean_object* v_ext_887_, lean_object* v_declName_888_, lean_object* v_attrKind_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_){
_start:
{
uint8_t v_attrKind_boxed_893_; lean_object* v_res_894_; 
v_attrKind_boxed_893_ = lean_unbox(v_attrKind_889_);
v_res_894_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr(v_ext_887_, v_declName_888_, v_attrKind_boxed_893_, v_a_890_, v_a_891_);
lean_dec(v_a_891_);
lean_dec_ref(v_a_890_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___lam__0(lean_object* v_a_895_, lean_object* v_s_896_){
_start:
{
lean_object* v_casesTypes_897_; lean_object* v_funCC_898_; lean_object* v_ematch_899_; lean_object* v_inj_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_907_; 
v_casesTypes_897_ = lean_ctor_get(v_s_896_, 0);
v_funCC_898_ = lean_ctor_get(v_s_896_, 2);
v_ematch_899_ = lean_ctor_get(v_s_896_, 3);
v_inj_900_ = lean_ctor_get(v_s_896_, 4);
v_isSharedCheck_907_ = !lean_is_exclusive(v_s_896_);
if (v_isSharedCheck_907_ == 0)
{
lean_object* v_unused_908_; 
v_unused_908_ = lean_ctor_get(v_s_896_, 1);
lean_dec(v_unused_908_);
v___x_902_ = v_s_896_;
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_inj_900_);
lean_inc(v_ematch_899_);
lean_inc(v_funCC_898_);
lean_inc(v_casesTypes_897_);
lean_dec(v_s_896_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v___x_905_; 
if (v_isShared_903_ == 0)
{
lean_ctor_set(v___x_902_, 1, v_a_895_);
v___x_905_ = v___x_902_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_casesTypes_897_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_a_895_);
lean_ctor_set(v_reuseFailAlloc_906_, 2, v_funCC_898_);
lean_ctor_set(v_reuseFailAlloc_906_, 3, v_ematch_899_);
lean_ctor_set(v_reuseFailAlloc_906_, 4, v_inj_900_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr(lean_object* v_ext_909_, lean_object* v_declName_910_, lean_object* v_a_911_, lean_object* v_a_912_){
_start:
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v_ext_916_; lean_object* v_toEnvExtension_917_; lean_object* v_env_918_; lean_object* v_asyncMode_919_; lean_object* v___x_920_; lean_object* v_extThms_921_; lean_object* v___x_922_; 
v___x_914_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_915_ = lean_st_ref_get(v_a_912_);
v_ext_916_ = lean_ctor_get(v_ext_909_, 1);
v_toEnvExtension_917_ = lean_ctor_get(v_ext_916_, 0);
v_env_918_ = lean_ctor_get(v___x_915_, 0);
lean_inc_ref(v_env_918_);
lean_dec(v___x_915_);
v_asyncMode_919_ = lean_ctor_get(v_toEnvExtension_917_, 2);
v___x_920_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_914_, v_ext_909_, v_env_918_, v_asyncMode_919_);
v_extThms_921_ = lean_ctor_get(v___x_920_, 1);
lean_inc_ref(v_extThms_921_);
lean_dec(v___x_920_);
v___x_922_ = l_Lean_Meta_Grind_ExtTheorems_eraseDecl(v_extThms_921_, v_declName_910_, v_a_911_, v_a_912_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_952_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_952_ == 0)
{
v___x_925_ = v___x_922_;
v_isShared_926_ = v_isSharedCheck_952_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_922_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_952_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___f_927_; lean_object* v___x_928_; lean_object* v_env_929_; lean_object* v_nextMacroScope_930_; lean_object* v_ngen_931_; lean_object* v_auxDeclNGen_932_; lean_object* v_traceState_933_; lean_object* v_messages_934_; lean_object* v_infoState_935_; lean_object* v_snapshotTasks_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_950_; 
v___f_927_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___lam__0), 2, 1);
lean_closure_set(v___f_927_, 0, v_a_923_);
v___x_928_ = lean_st_ref_take(v_a_912_);
v_env_929_ = lean_ctor_get(v___x_928_, 0);
v_nextMacroScope_930_ = lean_ctor_get(v___x_928_, 1);
v_ngen_931_ = lean_ctor_get(v___x_928_, 2);
v_auxDeclNGen_932_ = lean_ctor_get(v___x_928_, 3);
v_traceState_933_ = lean_ctor_get(v___x_928_, 4);
v_messages_934_ = lean_ctor_get(v___x_928_, 6);
v_infoState_935_ = lean_ctor_get(v___x_928_, 7);
v_snapshotTasks_936_ = lean_ctor_get(v___x_928_, 8);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_950_ == 0)
{
lean_object* v_unused_951_; 
v_unused_951_ = lean_ctor_get(v___x_928_, 5);
lean_dec(v_unused_951_);
v___x_938_ = v___x_928_;
v_isShared_939_ = v_isSharedCheck_950_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_snapshotTasks_936_);
lean_inc(v_infoState_935_);
lean_inc(v_messages_934_);
lean_inc(v_traceState_933_);
lean_inc(v_auxDeclNGen_932_);
lean_inc(v_ngen_931_);
lean_inc(v_nextMacroScope_930_);
lean_inc(v_env_929_);
lean_dec(v___x_928_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_950_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_944_; 
v___x_940_ = lean_box(0);
v___x_941_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_909_, v_env_929_, v___f_927_);
v___x_942_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 5, v___x_942_);
lean_ctor_set(v___x_938_, 0, v___x_941_);
v___x_944_ = v___x_938_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v___x_941_);
lean_ctor_set(v_reuseFailAlloc_949_, 1, v_nextMacroScope_930_);
lean_ctor_set(v_reuseFailAlloc_949_, 2, v_ngen_931_);
lean_ctor_set(v_reuseFailAlloc_949_, 3, v_auxDeclNGen_932_);
lean_ctor_set(v_reuseFailAlloc_949_, 4, v_traceState_933_);
lean_ctor_set(v_reuseFailAlloc_949_, 5, v___x_942_);
lean_ctor_set(v_reuseFailAlloc_949_, 6, v_messages_934_);
lean_ctor_set(v_reuseFailAlloc_949_, 7, v_infoState_935_);
lean_ctor_set(v_reuseFailAlloc_949_, 8, v_snapshotTasks_936_);
v___x_944_ = v_reuseFailAlloc_949_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
lean_object* v___x_945_; lean_object* v___x_947_; 
v___x_945_ = lean_st_ref_put(v_a_912_, v___x_944_);
if (v_isShared_926_ == 0)
{
lean_ctor_set(v___x_925_, 0, v___x_940_);
v___x_947_ = v___x_925_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v___x_940_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
}
else
{
lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_960_; 
lean_dec_ref(v_ext_909_);
v_a_953_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_960_ == 0)
{
v___x_955_ = v___x_922_;
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v___x_922_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_958_; 
if (v_isShared_956_ == 0)
{
v___x_958_ = v___x_955_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_a_953_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___boxed(lean_object* v_ext_961_, lean_object* v_declName_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr(v_ext_961_, v_declName_962_, v_a_963_, v_a_964_);
lean_dec(v_a_964_);
lean_dec_ref(v_a_963_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___lam__0(lean_object* v_a_967_, lean_object* v_s_968_){
_start:
{
lean_object* v_extThms_969_; lean_object* v_funCC_970_; lean_object* v_ematch_971_; lean_object* v_inj_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
v_extThms_969_ = lean_ctor_get(v_s_968_, 1);
v_funCC_970_ = lean_ctor_get(v_s_968_, 2);
v_ematch_971_ = lean_ctor_get(v_s_968_, 3);
v_inj_972_ = lean_ctor_get(v_s_968_, 4);
v_isSharedCheck_979_ = !lean_is_exclusive(v_s_968_);
if (v_isSharedCheck_979_ == 0)
{
lean_object* v_unused_980_; 
v_unused_980_ = lean_ctor_get(v_s_968_, 0);
lean_dec(v_unused_980_);
v___x_974_ = v_s_968_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_inj_972_);
lean_inc(v_ematch_971_);
lean_inc(v_funCC_970_);
lean_inc(v_extThms_969_);
lean_dec(v_s_968_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
lean_ctor_set(v___x_974_, 0, v_a_967_);
v___x_977_ = v___x_974_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_a_967_);
lean_ctor_set(v_reuseFailAlloc_978_, 1, v_extThms_969_);
lean_ctor_set(v_reuseFailAlloc_978_, 2, v_funCC_970_);
lean_ctor_set(v_reuseFailAlloc_978_, 3, v_ematch_971_);
lean_ctor_set(v_reuseFailAlloc_978_, 4, v_inj_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr(lean_object* v_ext_981_, lean_object* v_declName_982_, lean_object* v_a_983_, lean_object* v_a_984_){
_start:
{
lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_986_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
lean_inc(v_declName_982_);
v___x_987_ = l_Lean_Meta_Grind_ensureNotBuiltinCases(v_declName_982_, v_a_983_, v_a_984_);
if (lean_obj_tag(v___x_987_) == 0)
{
lean_object* v___x_988_; lean_object* v_ext_989_; lean_object* v_toEnvExtension_990_; lean_object* v_env_991_; lean_object* v_asyncMode_992_; lean_object* v___x_993_; lean_object* v_casesTypes_994_; lean_object* v___x_995_; 
lean_dec_ref_known(v___x_987_, 1);
v___x_988_ = lean_st_ref_get(v_a_984_);
v_ext_989_ = lean_ctor_get(v_ext_981_, 1);
v_toEnvExtension_990_ = lean_ctor_get(v_ext_989_, 0);
v_env_991_ = lean_ctor_get(v___x_988_, 0);
lean_inc_ref(v_env_991_);
lean_dec(v___x_988_);
v_asyncMode_992_ = lean_ctor_get(v_toEnvExtension_990_, 2);
v___x_993_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_986_, v_ext_981_, v_env_991_, v_asyncMode_992_);
v_casesTypes_994_ = lean_ctor_get(v___x_993_, 0);
lean_inc_ref(v_casesTypes_994_);
lean_dec(v___x_993_);
v___x_995_ = l_Lean_Meta_Grind_CasesTypes_eraseDecl(v_casesTypes_994_, v_declName_982_, v_a_983_, v_a_984_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1025_; 
v_a_996_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_998_ = v___x_995_;
v_isShared_999_ = v_isSharedCheck_1025_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_dec(v___x_995_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1025_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___f_1000_; lean_object* v___x_1001_; lean_object* v_env_1002_; lean_object* v_nextMacroScope_1003_; lean_object* v_ngen_1004_; lean_object* v_auxDeclNGen_1005_; lean_object* v_traceState_1006_; lean_object* v_messages_1007_; lean_object* v_infoState_1008_; lean_object* v_snapshotTasks_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1023_; 
v___f_1000_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___lam__0), 2, 1);
lean_closure_set(v___f_1000_, 0, v_a_996_);
v___x_1001_ = lean_st_ref_take(v_a_984_);
v_env_1002_ = lean_ctor_get(v___x_1001_, 0);
v_nextMacroScope_1003_ = lean_ctor_get(v___x_1001_, 1);
v_ngen_1004_ = lean_ctor_get(v___x_1001_, 2);
v_auxDeclNGen_1005_ = lean_ctor_get(v___x_1001_, 3);
v_traceState_1006_ = lean_ctor_get(v___x_1001_, 4);
v_messages_1007_ = lean_ctor_get(v___x_1001_, 6);
v_infoState_1008_ = lean_ctor_get(v___x_1001_, 7);
v_snapshotTasks_1009_ = lean_ctor_get(v___x_1001_, 8);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1023_ == 0)
{
lean_object* v_unused_1024_; 
v_unused_1024_ = lean_ctor_get(v___x_1001_, 5);
lean_dec(v_unused_1024_);
v___x_1011_ = v___x_1001_;
v_isShared_1012_ = v_isSharedCheck_1023_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_snapshotTasks_1009_);
lean_inc(v_infoState_1008_);
lean_inc(v_messages_1007_);
lean_inc(v_traceState_1006_);
lean_inc(v_auxDeclNGen_1005_);
lean_inc(v_ngen_1004_);
lean_inc(v_nextMacroScope_1003_);
lean_inc(v_env_1002_);
lean_dec(v___x_1001_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1023_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1017_; 
v___x_1013_ = lean_box(0);
v___x_1014_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_981_, v_env_1002_, v___f_1000_);
v___x_1015_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
if (v_isShared_1012_ == 0)
{
lean_ctor_set(v___x_1011_, 5, v___x_1015_);
lean_ctor_set(v___x_1011_, 0, v___x_1014_);
v___x_1017_ = v___x_1011_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v___x_1014_);
lean_ctor_set(v_reuseFailAlloc_1022_, 1, v_nextMacroScope_1003_);
lean_ctor_set(v_reuseFailAlloc_1022_, 2, v_ngen_1004_);
lean_ctor_set(v_reuseFailAlloc_1022_, 3, v_auxDeclNGen_1005_);
lean_ctor_set(v_reuseFailAlloc_1022_, 4, v_traceState_1006_);
lean_ctor_set(v_reuseFailAlloc_1022_, 5, v___x_1015_);
lean_ctor_set(v_reuseFailAlloc_1022_, 6, v_messages_1007_);
lean_ctor_set(v_reuseFailAlloc_1022_, 7, v_infoState_1008_);
lean_ctor_set(v_reuseFailAlloc_1022_, 8, v_snapshotTasks_1009_);
v___x_1017_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
lean_object* v___x_1018_; lean_object* v___x_1020_; 
v___x_1018_ = lean_st_ref_put(v_a_984_, v___x_1017_);
if (v_isShared_999_ == 0)
{
lean_ctor_set(v___x_998_, 0, v___x_1013_);
v___x_1020_ = v___x_998_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v___x_1013_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
}
}
else
{
lean_object* v_a_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1033_; 
lean_dec_ref(v_ext_981_);
v_a_1026_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1028_ = v___x_995_;
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___x_995_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1031_; 
if (v_isShared_1029_ == 0)
{
v___x_1031_ = v___x_1028_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_a_1026_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
}
}
else
{
lean_dec(v_declName_982_);
lean_dec_ref(v_ext_981_);
return v___x_987_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___boxed(lean_object* v_ext_1034_, lean_object* v_declName_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr(v_ext_1034_, v_declName_1035_, v_a_1036_, v_a_1037_);
lean_dec(v_a_1037_);
lean_dec_ref(v_a_1036_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___lam__0(lean_object* v___x_1040_, lean_object* v_s_1041_){
_start:
{
lean_object* v_casesTypes_1042_; lean_object* v_extThms_1043_; lean_object* v_ematch_1044_; lean_object* v_inj_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1052_; 
v_casesTypes_1042_ = lean_ctor_get(v_s_1041_, 0);
v_extThms_1043_ = lean_ctor_get(v_s_1041_, 1);
v_ematch_1044_ = lean_ctor_get(v_s_1041_, 3);
v_inj_1045_ = lean_ctor_get(v_s_1041_, 4);
v_isSharedCheck_1052_ = !lean_is_exclusive(v_s_1041_);
if (v_isSharedCheck_1052_ == 0)
{
lean_object* v_unused_1053_; 
v_unused_1053_ = lean_ctor_get(v_s_1041_, 2);
lean_dec(v_unused_1053_);
v___x_1047_ = v_s_1041_;
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_inj_1045_);
lean_inc(v_ematch_1044_);
lean_inc(v_extThms_1043_);
lean_inc(v_casesTypes_1042_);
lean_dec(v_s_1041_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1050_; 
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 2, v___x_1040_);
v___x_1050_ = v___x_1047_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_casesTypes_1042_);
lean_ctor_set(v_reuseFailAlloc_1051_, 1, v_extThms_1043_);
lean_ctor_set(v_reuseFailAlloc_1051_, 2, v___x_1040_);
lean_ctor_set(v_reuseFailAlloc_1051_, 3, v_ematch_1044_);
lean_ctor_set(v_reuseFailAlloc_1051_, 4, v_inj_1045_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(lean_object* v_k_1054_, lean_object* v_t_1055_){
_start:
{
if (lean_obj_tag(v_t_1055_) == 0)
{
lean_object* v_k_1056_; lean_object* v_v_1057_; lean_object* v_l_1058_; lean_object* v_r_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1713_; 
v_k_1056_ = lean_ctor_get(v_t_1055_, 1);
v_v_1057_ = lean_ctor_get(v_t_1055_, 2);
v_l_1058_ = lean_ctor_get(v_t_1055_, 3);
v_r_1059_ = lean_ctor_get(v_t_1055_, 4);
v_isSharedCheck_1713_ = !lean_is_exclusive(v_t_1055_);
if (v_isSharedCheck_1713_ == 0)
{
lean_object* v_unused_1714_; 
v_unused_1714_ = lean_ctor_get(v_t_1055_, 0);
lean_dec(v_unused_1714_);
v___x_1061_ = v_t_1055_;
v_isShared_1062_ = v_isSharedCheck_1713_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_r_1059_);
lean_inc(v_l_1058_);
lean_inc(v_v_1057_);
lean_inc(v_k_1056_);
lean_dec(v_t_1055_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1713_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
uint8_t v___x_1063_; 
v___x_1063_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1054_, v_k_1056_);
switch(v___x_1063_)
{
case 0:
{
lean_object* v_impl_1064_; lean_object* v___x_1065_; 
v_impl_1064_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_k_1054_, v_l_1058_);
v___x_1065_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_1064_) == 0)
{
if (lean_obj_tag(v_r_1059_) == 0)
{
lean_object* v_size_1066_; lean_object* v_size_1067_; lean_object* v_k_1068_; lean_object* v_v_1069_; lean_object* v_l_1070_; lean_object* v_r_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; uint8_t v___x_1074_; 
v_size_1066_ = lean_ctor_get(v_impl_1064_, 0);
lean_inc(v_size_1066_);
v_size_1067_ = lean_ctor_get(v_r_1059_, 0);
v_k_1068_ = lean_ctor_get(v_r_1059_, 1);
v_v_1069_ = lean_ctor_get(v_r_1059_, 2);
v_l_1070_ = lean_ctor_get(v_r_1059_, 3);
lean_inc(v_l_1070_);
v_r_1071_ = lean_ctor_get(v_r_1059_, 4);
v___x_1072_ = lean_unsigned_to_nat(3u);
v___x_1073_ = lean_nat_mul(v___x_1072_, v_size_1066_);
v___x_1074_ = lean_nat_dec_lt(v___x_1073_, v_size_1067_);
lean_dec(v___x_1073_);
if (v___x_1074_ == 0)
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1078_; 
lean_dec(v_l_1070_);
v___x_1075_ = lean_nat_add(v___x_1065_, v_size_1066_);
lean_dec(v_size_1066_);
v___x_1076_ = lean_nat_add(v___x_1075_, v_size_1067_);
lean_dec(v___x_1075_);
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 3, v_impl_1064_);
lean_ctor_set(v___x_1061_, 0, v___x_1076_);
v___x_1078_ = v___x_1061_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v___x_1076_);
lean_ctor_set(v_reuseFailAlloc_1079_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1079_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1079_, 3, v_impl_1064_);
lean_ctor_set(v_reuseFailAlloc_1079_, 4, v_r_1059_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
else
{
lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1143_; 
lean_inc(v_r_1071_);
lean_inc(v_v_1069_);
lean_inc(v_k_1068_);
lean_inc(v_size_1067_);
v_isSharedCheck_1143_ = !lean_is_exclusive(v_r_1059_);
if (v_isSharedCheck_1143_ == 0)
{
lean_object* v_unused_1144_; lean_object* v_unused_1145_; lean_object* v_unused_1146_; lean_object* v_unused_1147_; lean_object* v_unused_1148_; 
v_unused_1144_ = lean_ctor_get(v_r_1059_, 4);
lean_dec(v_unused_1144_);
v_unused_1145_ = lean_ctor_get(v_r_1059_, 3);
lean_dec(v_unused_1145_);
v_unused_1146_ = lean_ctor_get(v_r_1059_, 2);
lean_dec(v_unused_1146_);
v_unused_1147_ = lean_ctor_get(v_r_1059_, 1);
lean_dec(v_unused_1147_);
v_unused_1148_ = lean_ctor_get(v_r_1059_, 0);
lean_dec(v_unused_1148_);
v___x_1081_ = v_r_1059_;
v_isShared_1082_ = v_isSharedCheck_1143_;
goto v_resetjp_1080_;
}
else
{
lean_dec(v_r_1059_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1143_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v_size_1083_; lean_object* v_k_1084_; lean_object* v_v_1085_; lean_object* v_l_1086_; lean_object* v_r_1087_; lean_object* v_size_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; uint8_t v___x_1091_; 
v_size_1083_ = lean_ctor_get(v_l_1070_, 0);
v_k_1084_ = lean_ctor_get(v_l_1070_, 1);
v_v_1085_ = lean_ctor_get(v_l_1070_, 2);
v_l_1086_ = lean_ctor_get(v_l_1070_, 3);
v_r_1087_ = lean_ctor_get(v_l_1070_, 4);
v_size_1088_ = lean_ctor_get(v_r_1071_, 0);
v___x_1089_ = lean_unsigned_to_nat(2u);
v___x_1090_ = lean_nat_mul(v___x_1089_, v_size_1088_);
v___x_1091_ = lean_nat_dec_lt(v_size_1083_, v___x_1090_);
lean_dec(v___x_1090_);
if (v___x_1091_ == 0)
{
lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1119_; 
lean_inc(v_r_1087_);
lean_inc(v_l_1086_);
lean_inc(v_v_1085_);
lean_inc(v_k_1084_);
v_isSharedCheck_1119_ = !lean_is_exclusive(v_l_1070_);
if (v_isSharedCheck_1119_ == 0)
{
lean_object* v_unused_1120_; lean_object* v_unused_1121_; lean_object* v_unused_1122_; lean_object* v_unused_1123_; lean_object* v_unused_1124_; 
v_unused_1120_ = lean_ctor_get(v_l_1070_, 4);
lean_dec(v_unused_1120_);
v_unused_1121_ = lean_ctor_get(v_l_1070_, 3);
lean_dec(v_unused_1121_);
v_unused_1122_ = lean_ctor_get(v_l_1070_, 2);
lean_dec(v_unused_1122_);
v_unused_1123_ = lean_ctor_get(v_l_1070_, 1);
lean_dec(v_unused_1123_);
v_unused_1124_ = lean_ctor_get(v_l_1070_, 0);
lean_dec(v_unused_1124_);
v___x_1093_ = v_l_1070_;
v_isShared_1094_ = v_isSharedCheck_1119_;
goto v_resetjp_1092_;
}
else
{
lean_dec(v_l_1070_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1119_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___y_1098_; lean_object* v___y_1099_; lean_object* v___y_1100_; lean_object* v___y_1109_; 
v___x_1095_ = lean_nat_add(v___x_1065_, v_size_1066_);
lean_dec(v_size_1066_);
v___x_1096_ = lean_nat_add(v___x_1095_, v_size_1067_);
lean_dec(v_size_1067_);
if (lean_obj_tag(v_l_1086_) == 0)
{
lean_object* v_size_1117_; 
v_size_1117_ = lean_ctor_get(v_l_1086_, 0);
lean_inc(v_size_1117_);
v___y_1109_ = v_size_1117_;
goto v___jp_1108_;
}
else
{
lean_object* v___x_1118_; 
v___x_1118_ = lean_unsigned_to_nat(0u);
v___y_1109_ = v___x_1118_;
goto v___jp_1108_;
}
v___jp_1097_:
{
lean_object* v___x_1101_; lean_object* v___x_1103_; 
v___x_1101_ = lean_nat_add(v___y_1099_, v___y_1100_);
lean_dec(v___y_1100_);
lean_dec(v___y_1099_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 4, v_r_1071_);
lean_ctor_set(v___x_1093_, 3, v_r_1087_);
lean_ctor_set(v___x_1093_, 2, v_v_1069_);
lean_ctor_set(v___x_1093_, 1, v_k_1068_);
lean_ctor_set(v___x_1093_, 0, v___x_1101_);
v___x_1103_ = v___x_1093_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1101_);
lean_ctor_set(v_reuseFailAlloc_1107_, 1, v_k_1068_);
lean_ctor_set(v_reuseFailAlloc_1107_, 2, v_v_1069_);
lean_ctor_set(v_reuseFailAlloc_1107_, 3, v_r_1087_);
lean_ctor_set(v_reuseFailAlloc_1107_, 4, v_r_1071_);
v___x_1103_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
lean_object* v___x_1105_; 
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 4, v___x_1103_);
lean_ctor_set(v___x_1081_, 3, v___y_1098_);
lean_ctor_set(v___x_1081_, 2, v_v_1085_);
lean_ctor_set(v___x_1081_, 1, v_k_1084_);
lean_ctor_set(v___x_1081_, 0, v___x_1096_);
v___x_1105_ = v___x_1081_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v___x_1096_);
lean_ctor_set(v_reuseFailAlloc_1106_, 1, v_k_1084_);
lean_ctor_set(v_reuseFailAlloc_1106_, 2, v_v_1085_);
lean_ctor_set(v_reuseFailAlloc_1106_, 3, v___y_1098_);
lean_ctor_set(v_reuseFailAlloc_1106_, 4, v___x_1103_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
v___jp_1108_:
{
lean_object* v___x_1110_; lean_object* v___x_1112_; 
v___x_1110_ = lean_nat_add(v___x_1095_, v___y_1109_);
lean_dec(v___y_1109_);
lean_dec(v___x_1095_);
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 4, v_l_1086_);
lean_ctor_set(v___x_1061_, 3, v_impl_1064_);
lean_ctor_set(v___x_1061_, 0, v___x_1110_);
v___x_1112_ = v___x_1061_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1110_);
lean_ctor_set(v_reuseFailAlloc_1116_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1116_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1116_, 3, v_impl_1064_);
lean_ctor_set(v_reuseFailAlloc_1116_, 4, v_l_1086_);
v___x_1112_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
lean_object* v___x_1113_; 
v___x_1113_ = lean_nat_add(v___x_1065_, v_size_1088_);
if (lean_obj_tag(v_r_1087_) == 0)
{
lean_object* v_size_1114_; 
v_size_1114_ = lean_ctor_get(v_r_1087_, 0);
lean_inc(v_size_1114_);
v___y_1098_ = v___x_1112_;
v___y_1099_ = v___x_1113_;
v___y_1100_ = v_size_1114_;
goto v___jp_1097_;
}
else
{
lean_object* v___x_1115_; 
v___x_1115_ = lean_unsigned_to_nat(0u);
v___y_1098_ = v___x_1112_;
v___y_1099_ = v___x_1113_;
v___y_1100_ = v___x_1115_;
goto v___jp_1097_;
}
}
}
}
}
else
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1129_; 
lean_del_object(v___x_1061_);
v___x_1125_ = lean_nat_add(v___x_1065_, v_size_1066_);
lean_dec(v_size_1066_);
v___x_1126_ = lean_nat_add(v___x_1125_, v_size_1067_);
lean_dec(v_size_1067_);
v___x_1127_ = lean_nat_add(v___x_1125_, v_size_1083_);
lean_dec(v___x_1125_);
lean_inc_ref(v_impl_1064_);
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 4, v_l_1070_);
lean_ctor_set(v___x_1081_, 3, v_impl_1064_);
lean_ctor_set(v___x_1081_, 2, v_v_1057_);
lean_ctor_set(v___x_1081_, 1, v_k_1056_);
lean_ctor_set(v___x_1081_, 0, v___x_1127_);
v___x_1129_ = v___x_1081_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v___x_1127_);
lean_ctor_set(v_reuseFailAlloc_1142_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1142_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1142_, 3, v_impl_1064_);
lean_ctor_set(v_reuseFailAlloc_1142_, 4, v_l_1070_);
v___x_1129_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
v_isSharedCheck_1136_ = !lean_is_exclusive(v_impl_1064_);
if (v_isSharedCheck_1136_ == 0)
{
lean_object* v_unused_1137_; lean_object* v_unused_1138_; lean_object* v_unused_1139_; lean_object* v_unused_1140_; lean_object* v_unused_1141_; 
v_unused_1137_ = lean_ctor_get(v_impl_1064_, 4);
lean_dec(v_unused_1137_);
v_unused_1138_ = lean_ctor_get(v_impl_1064_, 3);
lean_dec(v_unused_1138_);
v_unused_1139_ = lean_ctor_get(v_impl_1064_, 2);
lean_dec(v_unused_1139_);
v_unused_1140_ = lean_ctor_get(v_impl_1064_, 1);
lean_dec(v_unused_1140_);
v_unused_1141_ = lean_ctor_get(v_impl_1064_, 0);
lean_dec(v_unused_1141_);
v___x_1131_ = v_impl_1064_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_dec(v_impl_1064_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
lean_ctor_set(v___x_1131_, 4, v_r_1071_);
lean_ctor_set(v___x_1131_, 3, v___x_1129_);
lean_ctor_set(v___x_1131_, 2, v_v_1069_);
lean_ctor_set(v___x_1131_, 1, v_k_1068_);
lean_ctor_set(v___x_1131_, 0, v___x_1126_);
v___x_1134_ = v___x_1131_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_1126_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v_k_1068_);
lean_ctor_set(v_reuseFailAlloc_1135_, 2, v_v_1069_);
lean_ctor_set(v_reuseFailAlloc_1135_, 3, v___x_1129_);
lean_ctor_set(v_reuseFailAlloc_1135_, 4, v_r_1071_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_1149_; lean_object* v___x_1150_; lean_object* v___x_1152_; 
v_size_1149_ = lean_ctor_get(v_impl_1064_, 0);
lean_inc(v_size_1149_);
v___x_1150_ = lean_nat_add(v___x_1065_, v_size_1149_);
lean_dec(v_size_1149_);
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 3, v_impl_1064_);
lean_ctor_set(v___x_1061_, 0, v___x_1150_);
v___x_1152_ = v___x_1061_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v___x_1150_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1153_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1153_, 3, v_impl_1064_);
lean_ctor_set(v_reuseFailAlloc_1153_, 4, v_r_1059_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
}
else
{
if (lean_obj_tag(v_r_1059_) == 0)
{
lean_object* v_l_1154_; 
v_l_1154_ = lean_ctor_get(v_r_1059_, 3);
lean_inc(v_l_1154_);
if (lean_obj_tag(v_l_1154_) == 0)
{
lean_object* v_r_1155_; 
v_r_1155_ = lean_ctor_get(v_r_1059_, 4);
lean_inc(v_r_1155_);
if (lean_obj_tag(v_r_1155_) == 0)
{
lean_object* v_size_1156_; lean_object* v_k_1157_; lean_object* v_v_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1171_; 
v_size_1156_ = lean_ctor_get(v_r_1059_, 0);
v_k_1157_ = lean_ctor_get(v_r_1059_, 1);
v_v_1158_ = lean_ctor_get(v_r_1059_, 2);
v_isSharedCheck_1171_ = !lean_is_exclusive(v_r_1059_);
if (v_isSharedCheck_1171_ == 0)
{
lean_object* v_unused_1172_; lean_object* v_unused_1173_; 
v_unused_1172_ = lean_ctor_get(v_r_1059_, 4);
lean_dec(v_unused_1172_);
v_unused_1173_ = lean_ctor_get(v_r_1059_, 3);
lean_dec(v_unused_1173_);
v___x_1160_ = v_r_1059_;
v_isShared_1161_ = v_isSharedCheck_1171_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_v_1158_);
lean_inc(v_k_1157_);
lean_inc(v_size_1156_);
lean_dec(v_r_1059_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1171_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v_size_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1166_; 
v_size_1162_ = lean_ctor_get(v_l_1154_, 0);
v___x_1163_ = lean_nat_add(v___x_1065_, v_size_1156_);
lean_dec(v_size_1156_);
v___x_1164_ = lean_nat_add(v___x_1065_, v_size_1162_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 4, v_l_1154_);
lean_ctor_set(v___x_1160_, 3, v_impl_1064_);
lean_ctor_set(v___x_1160_, 2, v_v_1057_);
lean_ctor_set(v___x_1160_, 1, v_k_1056_);
lean_ctor_set(v___x_1160_, 0, v___x_1164_);
v___x_1166_ = v___x_1160_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v___x_1164_);
lean_ctor_set(v_reuseFailAlloc_1170_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1170_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1170_, 3, v_impl_1064_);
lean_ctor_set(v_reuseFailAlloc_1170_, 4, v_l_1154_);
v___x_1166_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
lean_object* v___x_1168_; 
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 4, v_r_1155_);
lean_ctor_set(v___x_1061_, 3, v___x_1166_);
lean_ctor_set(v___x_1061_, 2, v_v_1158_);
lean_ctor_set(v___x_1061_, 1, v_k_1157_);
lean_ctor_set(v___x_1061_, 0, v___x_1163_);
v___x_1168_ = v___x_1061_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v___x_1163_);
lean_ctor_set(v_reuseFailAlloc_1169_, 1, v_k_1157_);
lean_ctor_set(v_reuseFailAlloc_1169_, 2, v_v_1158_);
lean_ctor_set(v_reuseFailAlloc_1169_, 3, v___x_1166_);
lean_ctor_set(v_reuseFailAlloc_1169_, 4, v_r_1155_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
}
}
else
{
lean_object* v_k_1174_; lean_object* v_v_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1198_; 
v_k_1174_ = lean_ctor_get(v_r_1059_, 1);
v_v_1175_ = lean_ctor_get(v_r_1059_, 2);
v_isSharedCheck_1198_ = !lean_is_exclusive(v_r_1059_);
if (v_isSharedCheck_1198_ == 0)
{
lean_object* v_unused_1199_; lean_object* v_unused_1200_; lean_object* v_unused_1201_; 
v_unused_1199_ = lean_ctor_get(v_r_1059_, 4);
lean_dec(v_unused_1199_);
v_unused_1200_ = lean_ctor_get(v_r_1059_, 3);
lean_dec(v_unused_1200_);
v_unused_1201_ = lean_ctor_get(v_r_1059_, 0);
lean_dec(v_unused_1201_);
v___x_1177_ = v_r_1059_;
v_isShared_1178_ = v_isSharedCheck_1198_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_v_1175_);
lean_inc(v_k_1174_);
lean_dec(v_r_1059_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1198_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v_k_1179_; lean_object* v_v_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1194_; 
v_k_1179_ = lean_ctor_get(v_l_1154_, 1);
v_v_1180_ = lean_ctor_get(v_l_1154_, 2);
v_isSharedCheck_1194_ = !lean_is_exclusive(v_l_1154_);
if (v_isSharedCheck_1194_ == 0)
{
lean_object* v_unused_1195_; lean_object* v_unused_1196_; lean_object* v_unused_1197_; 
v_unused_1195_ = lean_ctor_get(v_l_1154_, 4);
lean_dec(v_unused_1195_);
v_unused_1196_ = lean_ctor_get(v_l_1154_, 3);
lean_dec(v_unused_1196_);
v_unused_1197_ = lean_ctor_get(v_l_1154_, 0);
lean_dec(v_unused_1197_);
v___x_1182_ = v_l_1154_;
v_isShared_1183_ = v_isSharedCheck_1194_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_v_1180_);
lean_inc(v_k_1179_);
lean_dec(v_l_1154_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1194_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1184_; lean_object* v___x_1186_; 
v___x_1184_ = lean_unsigned_to_nat(3u);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 4, v_r_1155_);
lean_ctor_set(v___x_1182_, 3, v_r_1155_);
lean_ctor_set(v___x_1182_, 2, v_v_1057_);
lean_ctor_set(v___x_1182_, 1, v_k_1056_);
lean_ctor_set(v___x_1182_, 0, v___x_1065_);
v___x_1186_ = v___x_1182_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v___x_1065_);
lean_ctor_set(v_reuseFailAlloc_1193_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1193_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1193_, 3, v_r_1155_);
lean_ctor_set(v_reuseFailAlloc_1193_, 4, v_r_1155_);
v___x_1186_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
lean_object* v___x_1188_; 
if (v_isShared_1178_ == 0)
{
lean_ctor_set(v___x_1177_, 3, v_r_1155_);
lean_ctor_set(v___x_1177_, 0, v___x_1065_);
v___x_1188_ = v___x_1177_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v___x_1065_);
lean_ctor_set(v_reuseFailAlloc_1192_, 1, v_k_1174_);
lean_ctor_set(v_reuseFailAlloc_1192_, 2, v_v_1175_);
lean_ctor_set(v_reuseFailAlloc_1192_, 3, v_r_1155_);
lean_ctor_set(v_reuseFailAlloc_1192_, 4, v_r_1155_);
v___x_1188_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
lean_object* v___x_1190_; 
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 4, v___x_1188_);
lean_ctor_set(v___x_1061_, 3, v___x_1186_);
lean_ctor_set(v___x_1061_, 2, v_v_1180_);
lean_ctor_set(v___x_1061_, 1, v_k_1179_);
lean_ctor_set(v___x_1061_, 0, v___x_1184_);
v___x_1190_ = v___x_1061_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v___x_1184_);
lean_ctor_set(v_reuseFailAlloc_1191_, 1, v_k_1179_);
lean_ctor_set(v_reuseFailAlloc_1191_, 2, v_v_1180_);
lean_ctor_set(v_reuseFailAlloc_1191_, 3, v___x_1186_);
lean_ctor_set(v_reuseFailAlloc_1191_, 4, v___x_1188_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_1202_; 
v_r_1202_ = lean_ctor_get(v_r_1059_, 4);
lean_inc(v_r_1202_);
if (lean_obj_tag(v_r_1202_) == 0)
{
lean_object* v_k_1203_; lean_object* v_v_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1215_; 
v_k_1203_ = lean_ctor_get(v_r_1059_, 1);
v_v_1204_ = lean_ctor_get(v_r_1059_, 2);
v_isSharedCheck_1215_ = !lean_is_exclusive(v_r_1059_);
if (v_isSharedCheck_1215_ == 0)
{
lean_object* v_unused_1216_; lean_object* v_unused_1217_; lean_object* v_unused_1218_; 
v_unused_1216_ = lean_ctor_get(v_r_1059_, 4);
lean_dec(v_unused_1216_);
v_unused_1217_ = lean_ctor_get(v_r_1059_, 3);
lean_dec(v_unused_1217_);
v_unused_1218_ = lean_ctor_get(v_r_1059_, 0);
lean_dec(v_unused_1218_);
v___x_1206_ = v_r_1059_;
v_isShared_1207_ = v_isSharedCheck_1215_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_v_1204_);
lean_inc(v_k_1203_);
lean_dec(v_r_1059_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1215_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1208_; lean_object* v___x_1210_; 
v___x_1208_ = lean_unsigned_to_nat(3u);
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 4, v_l_1154_);
lean_ctor_set(v___x_1206_, 2, v_v_1057_);
lean_ctor_set(v___x_1206_, 1, v_k_1056_);
lean_ctor_set(v___x_1206_, 0, v___x_1065_);
v___x_1210_ = v___x_1206_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v___x_1065_);
lean_ctor_set(v_reuseFailAlloc_1214_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1214_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1214_, 3, v_l_1154_);
lean_ctor_set(v_reuseFailAlloc_1214_, 4, v_l_1154_);
v___x_1210_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
lean_object* v___x_1212_; 
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 4, v_r_1202_);
lean_ctor_set(v___x_1061_, 3, v___x_1210_);
lean_ctor_set(v___x_1061_, 2, v_v_1204_);
lean_ctor_set(v___x_1061_, 1, v_k_1203_);
lean_ctor_set(v___x_1061_, 0, v___x_1208_);
v___x_1212_ = v___x_1061_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v___x_1208_);
lean_ctor_set(v_reuseFailAlloc_1213_, 1, v_k_1203_);
lean_ctor_set(v_reuseFailAlloc_1213_, 2, v_v_1204_);
lean_ctor_set(v_reuseFailAlloc_1213_, 3, v___x_1210_);
lean_ctor_set(v_reuseFailAlloc_1213_, 4, v_r_1202_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
return v___x_1212_;
}
}
}
}
else
{
lean_object* v_size_1219_; lean_object* v_k_1220_; lean_object* v_v_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1232_; 
v_size_1219_ = lean_ctor_get(v_r_1059_, 0);
v_k_1220_ = lean_ctor_get(v_r_1059_, 1);
v_v_1221_ = lean_ctor_get(v_r_1059_, 2);
v_isSharedCheck_1232_ = !lean_is_exclusive(v_r_1059_);
if (v_isSharedCheck_1232_ == 0)
{
lean_object* v_unused_1233_; lean_object* v_unused_1234_; 
v_unused_1233_ = lean_ctor_get(v_r_1059_, 4);
lean_dec(v_unused_1233_);
v_unused_1234_ = lean_ctor_get(v_r_1059_, 3);
lean_dec(v_unused_1234_);
v___x_1223_ = v_r_1059_;
v_isShared_1224_ = v_isSharedCheck_1232_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_v_1221_);
lean_inc(v_k_1220_);
lean_inc(v_size_1219_);
lean_dec(v_r_1059_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1232_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1226_; 
if (v_isShared_1224_ == 0)
{
lean_ctor_set(v___x_1223_, 3, v_r_1202_);
v___x_1226_ = v___x_1223_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_size_1219_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v_k_1220_);
lean_ctor_set(v_reuseFailAlloc_1231_, 2, v_v_1221_);
lean_ctor_set(v_reuseFailAlloc_1231_, 3, v_r_1202_);
lean_ctor_set(v_reuseFailAlloc_1231_, 4, v_r_1202_);
v___x_1226_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
lean_object* v___x_1227_; lean_object* v___x_1229_; 
v___x_1227_ = lean_unsigned_to_nat(2u);
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 4, v___x_1226_);
lean_ctor_set(v___x_1061_, 3, v_r_1202_);
lean_ctor_set(v___x_1061_, 0, v___x_1227_);
v___x_1229_ = v___x_1061_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v___x_1227_);
lean_ctor_set(v_reuseFailAlloc_1230_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1230_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1230_, 3, v_r_1202_);
lean_ctor_set(v_reuseFailAlloc_1230_, 4, v___x_1226_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
}
}
}
}
else
{
lean_object* v___x_1236_; 
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 3, v_r_1059_);
lean_ctor_set(v___x_1061_, 0, v___x_1065_);
v___x_1236_ = v___x_1061_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v___x_1065_);
lean_ctor_set(v_reuseFailAlloc_1237_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1237_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1237_, 3, v_r_1059_);
lean_ctor_set(v_reuseFailAlloc_1237_, 4, v_r_1059_);
v___x_1236_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
return v___x_1236_;
}
}
}
}
case 1:
{
lean_del_object(v___x_1061_);
lean_dec(v_v_1057_);
lean_dec(v_k_1056_);
if (lean_obj_tag(v_l_1058_) == 0)
{
if (lean_obj_tag(v_r_1059_) == 0)
{
lean_object* v_size_1238_; lean_object* v_k_1239_; lean_object* v_v_1240_; lean_object* v_l_1241_; lean_object* v_r_1242_; lean_object* v_size_1243_; lean_object* v_k_1244_; lean_object* v_v_1245_; lean_object* v_l_1246_; lean_object* v_r_1247_; lean_object* v___x_1248_; uint8_t v___x_1249_; 
v_size_1238_ = lean_ctor_get(v_l_1058_, 0);
v_k_1239_ = lean_ctor_get(v_l_1058_, 1);
v_v_1240_ = lean_ctor_get(v_l_1058_, 2);
v_l_1241_ = lean_ctor_get(v_l_1058_, 3);
v_r_1242_ = lean_ctor_get(v_l_1058_, 4);
lean_inc(v_r_1242_);
v_size_1243_ = lean_ctor_get(v_r_1059_, 0);
v_k_1244_ = lean_ctor_get(v_r_1059_, 1);
v_v_1245_ = lean_ctor_get(v_r_1059_, 2);
v_l_1246_ = lean_ctor_get(v_r_1059_, 3);
lean_inc(v_l_1246_);
v_r_1247_ = lean_ctor_get(v_r_1059_, 4);
v___x_1248_ = lean_unsigned_to_nat(1u);
v___x_1249_ = lean_nat_dec_lt(v_size_1238_, v_size_1243_);
if (v___x_1249_ == 0)
{
lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1385_; 
lean_inc(v_l_1241_);
lean_inc(v_v_1240_);
lean_inc(v_k_1239_);
v_isSharedCheck_1385_ = !lean_is_exclusive(v_l_1058_);
if (v_isSharedCheck_1385_ == 0)
{
lean_object* v_unused_1386_; lean_object* v_unused_1387_; lean_object* v_unused_1388_; lean_object* v_unused_1389_; lean_object* v_unused_1390_; 
v_unused_1386_ = lean_ctor_get(v_l_1058_, 4);
lean_dec(v_unused_1386_);
v_unused_1387_ = lean_ctor_get(v_l_1058_, 3);
lean_dec(v_unused_1387_);
v_unused_1388_ = lean_ctor_get(v_l_1058_, 2);
lean_dec(v_unused_1388_);
v_unused_1389_ = lean_ctor_get(v_l_1058_, 1);
lean_dec(v_unused_1389_);
v_unused_1390_ = lean_ctor_get(v_l_1058_, 0);
lean_dec(v_unused_1390_);
v___x_1251_ = v_l_1058_;
v_isShared_1252_ = v_isSharedCheck_1385_;
goto v_resetjp_1250_;
}
else
{
lean_dec(v_l_1058_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1385_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___x_1253_; lean_object* v_tree_1254_; 
v___x_1253_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_1239_, v_v_1240_, v_l_1241_, v_r_1242_);
v_tree_1254_ = lean_ctor_get(v___x_1253_, 2);
lean_inc(v_tree_1254_);
if (lean_obj_tag(v_tree_1254_) == 0)
{
lean_object* v_k_1255_; lean_object* v_v_1256_; lean_object* v_size_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; uint8_t v___x_1260_; 
v_k_1255_ = lean_ctor_get(v___x_1253_, 0);
lean_inc(v_k_1255_);
v_v_1256_ = lean_ctor_get(v___x_1253_, 1);
lean_inc(v_v_1256_);
lean_dec_ref(v___x_1253_);
v_size_1257_ = lean_ctor_get(v_tree_1254_, 0);
v___x_1258_ = lean_unsigned_to_nat(3u);
v___x_1259_ = lean_nat_mul(v___x_1258_, v_size_1257_);
v___x_1260_ = lean_nat_dec_lt(v___x_1259_, v_size_1243_);
lean_dec(v___x_1259_);
if (v___x_1260_ == 0)
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1264_; 
lean_dec(v_l_1246_);
v___x_1261_ = lean_nat_add(v___x_1248_, v_size_1257_);
v___x_1262_ = lean_nat_add(v___x_1261_, v_size_1243_);
lean_dec(v___x_1261_);
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 4, v_r_1059_);
lean_ctor_set(v___x_1251_, 3, v_tree_1254_);
lean_ctor_set(v___x_1251_, 2, v_v_1256_);
lean_ctor_set(v___x_1251_, 1, v_k_1255_);
lean_ctor_set(v___x_1251_, 0, v___x_1262_);
v___x_1264_ = v___x_1251_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v___x_1262_);
lean_ctor_set(v_reuseFailAlloc_1265_, 1, v_k_1255_);
lean_ctor_set(v_reuseFailAlloc_1265_, 2, v_v_1256_);
lean_ctor_set(v_reuseFailAlloc_1265_, 3, v_tree_1254_);
lean_ctor_set(v_reuseFailAlloc_1265_, 4, v_r_1059_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
else
{
lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1320_; 
lean_inc(v_r_1247_);
lean_inc(v_v_1245_);
lean_inc(v_k_1244_);
lean_inc(v_size_1243_);
v_isSharedCheck_1320_ = !lean_is_exclusive(v_r_1059_);
if (v_isSharedCheck_1320_ == 0)
{
lean_object* v_unused_1321_; lean_object* v_unused_1322_; lean_object* v_unused_1323_; lean_object* v_unused_1324_; lean_object* v_unused_1325_; 
v_unused_1321_ = lean_ctor_get(v_r_1059_, 4);
lean_dec(v_unused_1321_);
v_unused_1322_ = lean_ctor_get(v_r_1059_, 3);
lean_dec(v_unused_1322_);
v_unused_1323_ = lean_ctor_get(v_r_1059_, 2);
lean_dec(v_unused_1323_);
v_unused_1324_ = lean_ctor_get(v_r_1059_, 1);
lean_dec(v_unused_1324_);
v_unused_1325_ = lean_ctor_get(v_r_1059_, 0);
lean_dec(v_unused_1325_);
v___x_1267_ = v_r_1059_;
v_isShared_1268_ = v_isSharedCheck_1320_;
goto v_resetjp_1266_;
}
else
{
lean_dec(v_r_1059_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1320_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v_size_1269_; lean_object* v_k_1270_; lean_object* v_v_1271_; lean_object* v_l_1272_; lean_object* v_r_1273_; lean_object* v_size_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; uint8_t v___x_1277_; 
v_size_1269_ = lean_ctor_get(v_l_1246_, 0);
v_k_1270_ = lean_ctor_get(v_l_1246_, 1);
v_v_1271_ = lean_ctor_get(v_l_1246_, 2);
v_l_1272_ = lean_ctor_get(v_l_1246_, 3);
v_r_1273_ = lean_ctor_get(v_l_1246_, 4);
v_size_1274_ = lean_ctor_get(v_r_1247_, 0);
v___x_1275_ = lean_unsigned_to_nat(2u);
v___x_1276_ = lean_nat_mul(v___x_1275_, v_size_1274_);
v___x_1277_ = lean_nat_dec_lt(v_size_1269_, v___x_1276_);
lean_dec(v___x_1276_);
if (v___x_1277_ == 0)
{
lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1305_; 
lean_inc(v_r_1273_);
lean_inc(v_l_1272_);
lean_inc(v_v_1271_);
lean_inc(v_k_1270_);
v_isSharedCheck_1305_ = !lean_is_exclusive(v_l_1246_);
if (v_isSharedCheck_1305_ == 0)
{
lean_object* v_unused_1306_; lean_object* v_unused_1307_; lean_object* v_unused_1308_; lean_object* v_unused_1309_; lean_object* v_unused_1310_; 
v_unused_1306_ = lean_ctor_get(v_l_1246_, 4);
lean_dec(v_unused_1306_);
v_unused_1307_ = lean_ctor_get(v_l_1246_, 3);
lean_dec(v_unused_1307_);
v_unused_1308_ = lean_ctor_get(v_l_1246_, 2);
lean_dec(v_unused_1308_);
v_unused_1309_ = lean_ctor_get(v_l_1246_, 1);
lean_dec(v_unused_1309_);
v_unused_1310_ = lean_ctor_get(v_l_1246_, 0);
lean_dec(v_unused_1310_);
v___x_1279_ = v_l_1246_;
v_isShared_1280_ = v_isSharedCheck_1305_;
goto v_resetjp_1278_;
}
else
{
lean_dec(v_l_1246_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1305_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___y_1284_; lean_object* v___y_1285_; lean_object* v___y_1286_; lean_object* v___y_1295_; 
v___x_1281_ = lean_nat_add(v___x_1248_, v_size_1257_);
v___x_1282_ = lean_nat_add(v___x_1281_, v_size_1243_);
lean_dec(v_size_1243_);
if (lean_obj_tag(v_l_1272_) == 0)
{
lean_object* v_size_1303_; 
v_size_1303_ = lean_ctor_get(v_l_1272_, 0);
lean_inc(v_size_1303_);
v___y_1295_ = v_size_1303_;
goto v___jp_1294_;
}
else
{
lean_object* v___x_1304_; 
v___x_1304_ = lean_unsigned_to_nat(0u);
v___y_1295_ = v___x_1304_;
goto v___jp_1294_;
}
v___jp_1283_:
{
lean_object* v___x_1287_; lean_object* v___x_1289_; 
v___x_1287_ = lean_nat_add(v___y_1285_, v___y_1286_);
lean_dec(v___y_1286_);
lean_dec(v___y_1285_);
if (v_isShared_1280_ == 0)
{
lean_ctor_set(v___x_1279_, 4, v_r_1247_);
lean_ctor_set(v___x_1279_, 3, v_r_1273_);
lean_ctor_set(v___x_1279_, 2, v_v_1245_);
lean_ctor_set(v___x_1279_, 1, v_k_1244_);
lean_ctor_set(v___x_1279_, 0, v___x_1287_);
v___x_1289_ = v___x_1279_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v___x_1287_);
lean_ctor_set(v_reuseFailAlloc_1293_, 1, v_k_1244_);
lean_ctor_set(v_reuseFailAlloc_1293_, 2, v_v_1245_);
lean_ctor_set(v_reuseFailAlloc_1293_, 3, v_r_1273_);
lean_ctor_set(v_reuseFailAlloc_1293_, 4, v_r_1247_);
v___x_1289_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
lean_object* v___x_1291_; 
if (v_isShared_1268_ == 0)
{
lean_ctor_set(v___x_1267_, 4, v___x_1289_);
lean_ctor_set(v___x_1267_, 3, v___y_1284_);
lean_ctor_set(v___x_1267_, 2, v_v_1271_);
lean_ctor_set(v___x_1267_, 1, v_k_1270_);
lean_ctor_set(v___x_1267_, 0, v___x_1282_);
v___x_1291_ = v___x_1267_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v___x_1282_);
lean_ctor_set(v_reuseFailAlloc_1292_, 1, v_k_1270_);
lean_ctor_set(v_reuseFailAlloc_1292_, 2, v_v_1271_);
lean_ctor_set(v_reuseFailAlloc_1292_, 3, v___y_1284_);
lean_ctor_set(v_reuseFailAlloc_1292_, 4, v___x_1289_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
v___jp_1294_:
{
lean_object* v___x_1296_; lean_object* v___x_1298_; 
v___x_1296_ = lean_nat_add(v___x_1281_, v___y_1295_);
lean_dec(v___y_1295_);
lean_dec(v___x_1281_);
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 4, v_l_1272_);
lean_ctor_set(v___x_1251_, 3, v_tree_1254_);
lean_ctor_set(v___x_1251_, 2, v_v_1256_);
lean_ctor_set(v___x_1251_, 1, v_k_1255_);
lean_ctor_set(v___x_1251_, 0, v___x_1296_);
v___x_1298_ = v___x_1251_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v___x_1296_);
lean_ctor_set(v_reuseFailAlloc_1302_, 1, v_k_1255_);
lean_ctor_set(v_reuseFailAlloc_1302_, 2, v_v_1256_);
lean_ctor_set(v_reuseFailAlloc_1302_, 3, v_tree_1254_);
lean_ctor_set(v_reuseFailAlloc_1302_, 4, v_l_1272_);
v___x_1298_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
lean_object* v___x_1299_; 
v___x_1299_ = lean_nat_add(v___x_1248_, v_size_1274_);
if (lean_obj_tag(v_r_1273_) == 0)
{
lean_object* v_size_1300_; 
v_size_1300_ = lean_ctor_get(v_r_1273_, 0);
lean_inc(v_size_1300_);
v___y_1284_ = v___x_1298_;
v___y_1285_ = v___x_1299_;
v___y_1286_ = v_size_1300_;
goto v___jp_1283_;
}
else
{
lean_object* v___x_1301_; 
v___x_1301_ = lean_unsigned_to_nat(0u);
v___y_1284_ = v___x_1298_;
v___y_1285_ = v___x_1299_;
v___y_1286_ = v___x_1301_;
goto v___jp_1283_;
}
}
}
}
}
else
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1315_; 
v___x_1311_ = lean_nat_add(v___x_1248_, v_size_1257_);
v___x_1312_ = lean_nat_add(v___x_1311_, v_size_1243_);
lean_dec(v_size_1243_);
v___x_1313_ = lean_nat_add(v___x_1311_, v_size_1269_);
lean_dec(v___x_1311_);
if (v_isShared_1268_ == 0)
{
lean_ctor_set(v___x_1267_, 4, v_l_1246_);
lean_ctor_set(v___x_1267_, 3, v_tree_1254_);
lean_ctor_set(v___x_1267_, 2, v_v_1256_);
lean_ctor_set(v___x_1267_, 1, v_k_1255_);
lean_ctor_set(v___x_1267_, 0, v___x_1313_);
v___x_1315_ = v___x_1267_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v___x_1313_);
lean_ctor_set(v_reuseFailAlloc_1319_, 1, v_k_1255_);
lean_ctor_set(v_reuseFailAlloc_1319_, 2, v_v_1256_);
lean_ctor_set(v_reuseFailAlloc_1319_, 3, v_tree_1254_);
lean_ctor_set(v_reuseFailAlloc_1319_, 4, v_l_1246_);
v___x_1315_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
lean_object* v___x_1317_; 
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 4, v_r_1247_);
lean_ctor_set(v___x_1251_, 3, v___x_1315_);
lean_ctor_set(v___x_1251_, 2, v_v_1245_);
lean_ctor_set(v___x_1251_, 1, v_k_1244_);
lean_ctor_set(v___x_1251_, 0, v___x_1312_);
v___x_1317_ = v___x_1251_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v___x_1312_);
lean_ctor_set(v_reuseFailAlloc_1318_, 1, v_k_1244_);
lean_ctor_set(v_reuseFailAlloc_1318_, 2, v_v_1245_);
lean_ctor_set(v_reuseFailAlloc_1318_, 3, v___x_1315_);
lean_ctor_set(v_reuseFailAlloc_1318_, 4, v_r_1247_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
}
}
}
else
{
lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1379_; 
lean_inc(v_r_1247_);
lean_inc(v_v_1245_);
lean_inc(v_k_1244_);
lean_inc(v_size_1243_);
v_isSharedCheck_1379_ = !lean_is_exclusive(v_r_1059_);
if (v_isSharedCheck_1379_ == 0)
{
lean_object* v_unused_1380_; lean_object* v_unused_1381_; lean_object* v_unused_1382_; lean_object* v_unused_1383_; lean_object* v_unused_1384_; 
v_unused_1380_ = lean_ctor_get(v_r_1059_, 4);
lean_dec(v_unused_1380_);
v_unused_1381_ = lean_ctor_get(v_r_1059_, 3);
lean_dec(v_unused_1381_);
v_unused_1382_ = lean_ctor_get(v_r_1059_, 2);
lean_dec(v_unused_1382_);
v_unused_1383_ = lean_ctor_get(v_r_1059_, 1);
lean_dec(v_unused_1383_);
v_unused_1384_ = lean_ctor_get(v_r_1059_, 0);
lean_dec(v_unused_1384_);
v___x_1327_ = v_r_1059_;
v_isShared_1328_ = v_isSharedCheck_1379_;
goto v_resetjp_1326_;
}
else
{
lean_dec(v_r_1059_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1379_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
if (lean_obj_tag(v_l_1246_) == 0)
{
if (lean_obj_tag(v_r_1247_) == 0)
{
lean_object* v_k_1329_; lean_object* v_v_1330_; lean_object* v_size_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1335_; 
v_k_1329_ = lean_ctor_get(v___x_1253_, 0);
lean_inc(v_k_1329_);
v_v_1330_ = lean_ctor_get(v___x_1253_, 1);
lean_inc(v_v_1330_);
lean_dec_ref(v___x_1253_);
v_size_1331_ = lean_ctor_get(v_l_1246_, 0);
v___x_1332_ = lean_nat_add(v___x_1248_, v_size_1243_);
lean_dec(v_size_1243_);
v___x_1333_ = lean_nat_add(v___x_1248_, v_size_1331_);
if (v_isShared_1328_ == 0)
{
lean_ctor_set(v___x_1327_, 4, v_l_1246_);
lean_ctor_set(v___x_1327_, 3, v_tree_1254_);
lean_ctor_set(v___x_1327_, 2, v_v_1330_);
lean_ctor_set(v___x_1327_, 1, v_k_1329_);
lean_ctor_set(v___x_1327_, 0, v___x_1333_);
v___x_1335_ = v___x_1327_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v___x_1333_);
lean_ctor_set(v_reuseFailAlloc_1339_, 1, v_k_1329_);
lean_ctor_set(v_reuseFailAlloc_1339_, 2, v_v_1330_);
lean_ctor_set(v_reuseFailAlloc_1339_, 3, v_tree_1254_);
lean_ctor_set(v_reuseFailAlloc_1339_, 4, v_l_1246_);
v___x_1335_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
lean_object* v___x_1337_; 
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 4, v_r_1247_);
lean_ctor_set(v___x_1251_, 3, v___x_1335_);
lean_ctor_set(v___x_1251_, 2, v_v_1245_);
lean_ctor_set(v___x_1251_, 1, v_k_1244_);
lean_ctor_set(v___x_1251_, 0, v___x_1332_);
v___x_1337_ = v___x_1251_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v___x_1332_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v_k_1244_);
lean_ctor_set(v_reuseFailAlloc_1338_, 2, v_v_1245_);
lean_ctor_set(v_reuseFailAlloc_1338_, 3, v___x_1335_);
lean_ctor_set(v_reuseFailAlloc_1338_, 4, v_r_1247_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
else
{
lean_object* v_k_1340_; lean_object* v_v_1341_; lean_object* v_k_1342_; lean_object* v_v_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1357_; 
lean_dec(v_size_1243_);
v_k_1340_ = lean_ctor_get(v___x_1253_, 0);
lean_inc(v_k_1340_);
v_v_1341_ = lean_ctor_get(v___x_1253_, 1);
lean_inc(v_v_1341_);
lean_dec_ref(v___x_1253_);
v_k_1342_ = lean_ctor_get(v_l_1246_, 1);
v_v_1343_ = lean_ctor_get(v_l_1246_, 2);
v_isSharedCheck_1357_ = !lean_is_exclusive(v_l_1246_);
if (v_isSharedCheck_1357_ == 0)
{
lean_object* v_unused_1358_; lean_object* v_unused_1359_; lean_object* v_unused_1360_; 
v_unused_1358_ = lean_ctor_get(v_l_1246_, 4);
lean_dec(v_unused_1358_);
v_unused_1359_ = lean_ctor_get(v_l_1246_, 3);
lean_dec(v_unused_1359_);
v_unused_1360_ = lean_ctor_get(v_l_1246_, 0);
lean_dec(v_unused_1360_);
v___x_1345_ = v_l_1246_;
v_isShared_1346_ = v_isSharedCheck_1357_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_v_1343_);
lean_inc(v_k_1342_);
lean_dec(v_l_1246_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1357_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1347_; lean_object* v___x_1349_; 
v___x_1347_ = lean_unsigned_to_nat(3u);
if (v_isShared_1346_ == 0)
{
lean_ctor_set(v___x_1345_, 4, v_r_1247_);
lean_ctor_set(v___x_1345_, 3, v_r_1247_);
lean_ctor_set(v___x_1345_, 2, v_v_1341_);
lean_ctor_set(v___x_1345_, 1, v_k_1340_);
lean_ctor_set(v___x_1345_, 0, v___x_1248_);
v___x_1349_ = v___x_1345_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v___x_1248_);
lean_ctor_set(v_reuseFailAlloc_1356_, 1, v_k_1340_);
lean_ctor_set(v_reuseFailAlloc_1356_, 2, v_v_1341_);
lean_ctor_set(v_reuseFailAlloc_1356_, 3, v_r_1247_);
lean_ctor_set(v_reuseFailAlloc_1356_, 4, v_r_1247_);
v___x_1349_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
lean_object* v___x_1351_; 
if (v_isShared_1328_ == 0)
{
lean_ctor_set(v___x_1327_, 3, v_r_1247_);
lean_ctor_set(v___x_1327_, 0, v___x_1248_);
v___x_1351_ = v___x_1327_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v___x_1248_);
lean_ctor_set(v_reuseFailAlloc_1355_, 1, v_k_1244_);
lean_ctor_set(v_reuseFailAlloc_1355_, 2, v_v_1245_);
lean_ctor_set(v_reuseFailAlloc_1355_, 3, v_r_1247_);
lean_ctor_set(v_reuseFailAlloc_1355_, 4, v_r_1247_);
v___x_1351_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
lean_object* v___x_1353_; 
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 4, v___x_1351_);
lean_ctor_set(v___x_1251_, 3, v___x_1349_);
lean_ctor_set(v___x_1251_, 2, v_v_1343_);
lean_ctor_set(v___x_1251_, 1, v_k_1342_);
lean_ctor_set(v___x_1251_, 0, v___x_1347_);
v___x_1353_ = v___x_1251_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v___x_1347_);
lean_ctor_set(v_reuseFailAlloc_1354_, 1, v_k_1342_);
lean_ctor_set(v_reuseFailAlloc_1354_, 2, v_v_1343_);
lean_ctor_set(v_reuseFailAlloc_1354_, 3, v___x_1349_);
lean_ctor_set(v_reuseFailAlloc_1354_, 4, v___x_1351_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_1247_) == 0)
{
lean_object* v_k_1361_; lean_object* v_v_1362_; lean_object* v___x_1363_; lean_object* v___x_1365_; 
lean_dec(v_size_1243_);
v_k_1361_ = lean_ctor_get(v___x_1253_, 0);
lean_inc(v_k_1361_);
v_v_1362_ = lean_ctor_get(v___x_1253_, 1);
lean_inc(v_v_1362_);
lean_dec_ref(v___x_1253_);
v___x_1363_ = lean_unsigned_to_nat(3u);
if (v_isShared_1328_ == 0)
{
lean_ctor_set(v___x_1327_, 4, v_l_1246_);
lean_ctor_set(v___x_1327_, 2, v_v_1362_);
lean_ctor_set(v___x_1327_, 1, v_k_1361_);
lean_ctor_set(v___x_1327_, 0, v___x_1248_);
v___x_1365_ = v___x_1327_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v___x_1248_);
lean_ctor_set(v_reuseFailAlloc_1369_, 1, v_k_1361_);
lean_ctor_set(v_reuseFailAlloc_1369_, 2, v_v_1362_);
lean_ctor_set(v_reuseFailAlloc_1369_, 3, v_l_1246_);
lean_ctor_set(v_reuseFailAlloc_1369_, 4, v_l_1246_);
v___x_1365_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
lean_object* v___x_1367_; 
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 4, v_r_1247_);
lean_ctor_set(v___x_1251_, 3, v___x_1365_);
lean_ctor_set(v___x_1251_, 2, v_v_1245_);
lean_ctor_set(v___x_1251_, 1, v_k_1244_);
lean_ctor_set(v___x_1251_, 0, v___x_1363_);
v___x_1367_ = v___x_1251_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v___x_1363_);
lean_ctor_set(v_reuseFailAlloc_1368_, 1, v_k_1244_);
lean_ctor_set(v_reuseFailAlloc_1368_, 2, v_v_1245_);
lean_ctor_set(v_reuseFailAlloc_1368_, 3, v___x_1365_);
lean_ctor_set(v_reuseFailAlloc_1368_, 4, v_r_1247_);
v___x_1367_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
return v___x_1367_;
}
}
}
else
{
lean_object* v_k_1370_; lean_object* v_v_1371_; lean_object* v___x_1373_; 
v_k_1370_ = lean_ctor_get(v___x_1253_, 0);
lean_inc(v_k_1370_);
v_v_1371_ = lean_ctor_get(v___x_1253_, 1);
lean_inc(v_v_1371_);
lean_dec_ref(v___x_1253_);
if (v_isShared_1328_ == 0)
{
lean_ctor_set(v___x_1327_, 3, v_r_1247_);
v___x_1373_ = v___x_1327_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_size_1243_);
lean_ctor_set(v_reuseFailAlloc_1378_, 1, v_k_1244_);
lean_ctor_set(v_reuseFailAlloc_1378_, 2, v_v_1245_);
lean_ctor_set(v_reuseFailAlloc_1378_, 3, v_r_1247_);
lean_ctor_set(v_reuseFailAlloc_1378_, 4, v_r_1247_);
v___x_1373_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
lean_object* v___x_1374_; lean_object* v___x_1376_; 
v___x_1374_ = lean_unsigned_to_nat(2u);
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 4, v___x_1373_);
lean_ctor_set(v___x_1251_, 3, v_r_1247_);
lean_ctor_set(v___x_1251_, 2, v_v_1371_);
lean_ctor_set(v___x_1251_, 1, v_k_1370_);
lean_ctor_set(v___x_1251_, 0, v___x_1374_);
v___x_1376_ = v___x_1251_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v___x_1374_);
lean_ctor_set(v_reuseFailAlloc_1377_, 1, v_k_1370_);
lean_ctor_set(v_reuseFailAlloc_1377_, 2, v_v_1371_);
lean_ctor_set(v_reuseFailAlloc_1377_, 3, v_r_1247_);
lean_ctor_set(v_reuseFailAlloc_1377_, 4, v___x_1373_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1543_; 
lean_inc(v_r_1247_);
lean_inc(v_v_1245_);
lean_inc(v_k_1244_);
v_isSharedCheck_1543_ = !lean_is_exclusive(v_r_1059_);
if (v_isSharedCheck_1543_ == 0)
{
lean_object* v_unused_1544_; lean_object* v_unused_1545_; lean_object* v_unused_1546_; lean_object* v_unused_1547_; lean_object* v_unused_1548_; 
v_unused_1544_ = lean_ctor_get(v_r_1059_, 4);
lean_dec(v_unused_1544_);
v_unused_1545_ = lean_ctor_get(v_r_1059_, 3);
lean_dec(v_unused_1545_);
v_unused_1546_ = lean_ctor_get(v_r_1059_, 2);
lean_dec(v_unused_1546_);
v_unused_1547_ = lean_ctor_get(v_r_1059_, 1);
lean_dec(v_unused_1547_);
v_unused_1548_ = lean_ctor_get(v_r_1059_, 0);
lean_dec(v_unused_1548_);
v___x_1392_ = v_r_1059_;
v_isShared_1393_ = v_isSharedCheck_1543_;
goto v_resetjp_1391_;
}
else
{
lean_dec(v_r_1059_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1543_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1394_; lean_object* v_tree_1395_; 
v___x_1394_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_1244_, v_v_1245_, v_l_1246_, v_r_1247_);
v_tree_1395_ = lean_ctor_get(v___x_1394_, 2);
lean_inc(v_tree_1395_);
if (lean_obj_tag(v_tree_1395_) == 0)
{
lean_object* v_k_1396_; lean_object* v_v_1397_; lean_object* v_size_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; uint8_t v___x_1401_; 
v_k_1396_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_k_1396_);
v_v_1397_ = lean_ctor_get(v___x_1394_, 1);
lean_inc(v_v_1397_);
lean_dec_ref(v___x_1394_);
v_size_1398_ = lean_ctor_get(v_tree_1395_, 0);
v___x_1399_ = lean_unsigned_to_nat(3u);
v___x_1400_ = lean_nat_mul(v___x_1399_, v_size_1398_);
v___x_1401_ = lean_nat_dec_lt(v___x_1400_, v_size_1238_);
lean_dec(v___x_1400_);
if (v___x_1401_ == 0)
{
lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1405_; 
lean_dec(v_r_1242_);
v___x_1402_ = lean_nat_add(v___x_1248_, v_size_1238_);
v___x_1403_ = lean_nat_add(v___x_1402_, v_size_1398_);
lean_dec(v___x_1402_);
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 4, v_tree_1395_);
lean_ctor_set(v___x_1392_, 3, v_l_1058_);
lean_ctor_set(v___x_1392_, 2, v_v_1397_);
lean_ctor_set(v___x_1392_, 1, v_k_1396_);
lean_ctor_set(v___x_1392_, 0, v___x_1403_);
v___x_1405_ = v___x_1392_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v___x_1403_);
lean_ctor_set(v_reuseFailAlloc_1406_, 1, v_k_1396_);
lean_ctor_set(v_reuseFailAlloc_1406_, 2, v_v_1397_);
lean_ctor_set(v_reuseFailAlloc_1406_, 3, v_l_1058_);
lean_ctor_set(v_reuseFailAlloc_1406_, 4, v_tree_1395_);
v___x_1405_ = v_reuseFailAlloc_1406_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
return v___x_1405_;
}
}
else
{
lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1472_; 
lean_inc(v_l_1241_);
lean_inc(v_v_1240_);
lean_inc(v_k_1239_);
lean_inc(v_size_1238_);
v_isSharedCheck_1472_ = !lean_is_exclusive(v_l_1058_);
if (v_isSharedCheck_1472_ == 0)
{
lean_object* v_unused_1473_; lean_object* v_unused_1474_; lean_object* v_unused_1475_; lean_object* v_unused_1476_; lean_object* v_unused_1477_; 
v_unused_1473_ = lean_ctor_get(v_l_1058_, 4);
lean_dec(v_unused_1473_);
v_unused_1474_ = lean_ctor_get(v_l_1058_, 3);
lean_dec(v_unused_1474_);
v_unused_1475_ = lean_ctor_get(v_l_1058_, 2);
lean_dec(v_unused_1475_);
v_unused_1476_ = lean_ctor_get(v_l_1058_, 1);
lean_dec(v_unused_1476_);
v_unused_1477_ = lean_ctor_get(v_l_1058_, 0);
lean_dec(v_unused_1477_);
v___x_1408_ = v_l_1058_;
v_isShared_1409_ = v_isSharedCheck_1472_;
goto v_resetjp_1407_;
}
else
{
lean_dec(v_l_1058_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1472_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v_size_1410_; lean_object* v_size_1411_; lean_object* v_k_1412_; lean_object* v_v_1413_; lean_object* v_l_1414_; lean_object* v_r_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; uint8_t v___x_1418_; 
v_size_1410_ = lean_ctor_get(v_l_1241_, 0);
v_size_1411_ = lean_ctor_get(v_r_1242_, 0);
v_k_1412_ = lean_ctor_get(v_r_1242_, 1);
v_v_1413_ = lean_ctor_get(v_r_1242_, 2);
v_l_1414_ = lean_ctor_get(v_r_1242_, 3);
v_r_1415_ = lean_ctor_get(v_r_1242_, 4);
v___x_1416_ = lean_unsigned_to_nat(2u);
v___x_1417_ = lean_nat_mul(v___x_1416_, v_size_1410_);
v___x_1418_ = lean_nat_dec_lt(v_size_1411_, v___x_1417_);
lean_dec(v___x_1417_);
if (v___x_1418_ == 0)
{
lean_object* v___x_1420_; uint8_t v_isShared_1421_; uint8_t v_isSharedCheck_1456_; 
lean_inc(v_r_1415_);
lean_inc(v_l_1414_);
lean_inc(v_v_1413_);
lean_inc(v_k_1412_);
lean_del_object(v___x_1408_);
v_isSharedCheck_1456_ = !lean_is_exclusive(v_r_1242_);
if (v_isSharedCheck_1456_ == 0)
{
lean_object* v_unused_1457_; lean_object* v_unused_1458_; lean_object* v_unused_1459_; lean_object* v_unused_1460_; lean_object* v_unused_1461_; 
v_unused_1457_ = lean_ctor_get(v_r_1242_, 4);
lean_dec(v_unused_1457_);
v_unused_1458_ = lean_ctor_get(v_r_1242_, 3);
lean_dec(v_unused_1458_);
v_unused_1459_ = lean_ctor_get(v_r_1242_, 2);
lean_dec(v_unused_1459_);
v_unused_1460_ = lean_ctor_get(v_r_1242_, 1);
lean_dec(v_unused_1460_);
v_unused_1461_ = lean_ctor_get(v_r_1242_, 0);
lean_dec(v_unused_1461_);
v___x_1420_ = v_r_1242_;
v_isShared_1421_ = v_isSharedCheck_1456_;
goto v_resetjp_1419_;
}
else
{
lean_dec(v_r_1242_);
v___x_1420_ = lean_box(0);
v_isShared_1421_ = v_isSharedCheck_1456_;
goto v_resetjp_1419_;
}
v_resetjp_1419_:
{
lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___y_1425_; lean_object* v___y_1426_; lean_object* v___y_1427_; lean_object* v___x_1444_; lean_object* v___y_1446_; 
v___x_1422_ = lean_nat_add(v___x_1248_, v_size_1238_);
lean_dec(v_size_1238_);
v___x_1423_ = lean_nat_add(v___x_1422_, v_size_1398_);
lean_dec(v___x_1422_);
v___x_1444_ = lean_nat_add(v___x_1248_, v_size_1410_);
if (lean_obj_tag(v_l_1414_) == 0)
{
lean_object* v_size_1454_; 
v_size_1454_ = lean_ctor_get(v_l_1414_, 0);
lean_inc(v_size_1454_);
v___y_1446_ = v_size_1454_;
goto v___jp_1445_;
}
else
{
lean_object* v___x_1455_; 
v___x_1455_ = lean_unsigned_to_nat(0u);
v___y_1446_ = v___x_1455_;
goto v___jp_1445_;
}
v___jp_1424_:
{
lean_object* v___x_1428_; lean_object* v___x_1430_; 
v___x_1428_ = lean_nat_add(v___y_1426_, v___y_1427_);
lean_dec(v___y_1427_);
lean_dec(v___y_1426_);
lean_inc_ref(v_tree_1395_);
if (v_isShared_1421_ == 0)
{
lean_ctor_set(v___x_1420_, 4, v_tree_1395_);
lean_ctor_set(v___x_1420_, 3, v_r_1415_);
lean_ctor_set(v___x_1420_, 2, v_v_1397_);
lean_ctor_set(v___x_1420_, 1, v_k_1396_);
lean_ctor_set(v___x_1420_, 0, v___x_1428_);
v___x_1430_ = v___x_1420_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v___x_1428_);
lean_ctor_set(v_reuseFailAlloc_1443_, 1, v_k_1396_);
lean_ctor_set(v_reuseFailAlloc_1443_, 2, v_v_1397_);
lean_ctor_set(v_reuseFailAlloc_1443_, 3, v_r_1415_);
lean_ctor_set(v_reuseFailAlloc_1443_, 4, v_tree_1395_);
v___x_1430_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1437_; 
v_isSharedCheck_1437_ = !lean_is_exclusive(v_tree_1395_);
if (v_isSharedCheck_1437_ == 0)
{
lean_object* v_unused_1438_; lean_object* v_unused_1439_; lean_object* v_unused_1440_; lean_object* v_unused_1441_; lean_object* v_unused_1442_; 
v_unused_1438_ = lean_ctor_get(v_tree_1395_, 4);
lean_dec(v_unused_1438_);
v_unused_1439_ = lean_ctor_get(v_tree_1395_, 3);
lean_dec(v_unused_1439_);
v_unused_1440_ = lean_ctor_get(v_tree_1395_, 2);
lean_dec(v_unused_1440_);
v_unused_1441_ = lean_ctor_get(v_tree_1395_, 1);
lean_dec(v_unused_1441_);
v_unused_1442_ = lean_ctor_get(v_tree_1395_, 0);
lean_dec(v_unused_1442_);
v___x_1432_ = v_tree_1395_;
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
else
{
lean_dec(v_tree_1395_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1435_; 
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 4, v___x_1430_);
lean_ctor_set(v___x_1432_, 3, v___y_1425_);
lean_ctor_set(v___x_1432_, 2, v_v_1413_);
lean_ctor_set(v___x_1432_, 1, v_k_1412_);
lean_ctor_set(v___x_1432_, 0, v___x_1423_);
v___x_1435_ = v___x_1432_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v___x_1423_);
lean_ctor_set(v_reuseFailAlloc_1436_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1436_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1436_, 3, v___y_1425_);
lean_ctor_set(v_reuseFailAlloc_1436_, 4, v___x_1430_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
}
v___jp_1445_:
{
lean_object* v___x_1447_; lean_object* v___x_1449_; 
v___x_1447_ = lean_nat_add(v___x_1444_, v___y_1446_);
lean_dec(v___y_1446_);
lean_dec(v___x_1444_);
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 4, v_l_1414_);
lean_ctor_set(v___x_1392_, 3, v_l_1241_);
lean_ctor_set(v___x_1392_, 2, v_v_1240_);
lean_ctor_set(v___x_1392_, 1, v_k_1239_);
lean_ctor_set(v___x_1392_, 0, v___x_1447_);
v___x_1449_ = v___x_1392_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v___x_1447_);
lean_ctor_set(v_reuseFailAlloc_1453_, 1, v_k_1239_);
lean_ctor_set(v_reuseFailAlloc_1453_, 2, v_v_1240_);
lean_ctor_set(v_reuseFailAlloc_1453_, 3, v_l_1241_);
lean_ctor_set(v_reuseFailAlloc_1453_, 4, v_l_1414_);
v___x_1449_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
lean_object* v___x_1450_; 
v___x_1450_ = lean_nat_add(v___x_1248_, v_size_1398_);
if (lean_obj_tag(v_r_1415_) == 0)
{
lean_object* v_size_1451_; 
v_size_1451_ = lean_ctor_get(v_r_1415_, 0);
lean_inc(v_size_1451_);
v___y_1425_ = v___x_1449_;
v___y_1426_ = v___x_1450_;
v___y_1427_ = v_size_1451_;
goto v___jp_1424_;
}
else
{
lean_object* v___x_1452_; 
v___x_1452_ = lean_unsigned_to_nat(0u);
v___y_1425_ = v___x_1449_;
v___y_1426_ = v___x_1450_;
v___y_1427_ = v___x_1452_;
goto v___jp_1424_;
}
}
}
}
}
else
{
lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1467_; 
v___x_1462_ = lean_nat_add(v___x_1248_, v_size_1238_);
lean_dec(v_size_1238_);
v___x_1463_ = lean_nat_add(v___x_1462_, v_size_1398_);
lean_dec(v___x_1462_);
v___x_1464_ = lean_nat_add(v___x_1248_, v_size_1398_);
v___x_1465_ = lean_nat_add(v___x_1464_, v_size_1411_);
lean_dec(v___x_1464_);
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 4, v_tree_1395_);
lean_ctor_set(v___x_1392_, 3, v_r_1242_);
lean_ctor_set(v___x_1392_, 2, v_v_1397_);
lean_ctor_set(v___x_1392_, 1, v_k_1396_);
lean_ctor_set(v___x_1392_, 0, v___x_1465_);
v___x_1467_ = v___x_1392_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v___x_1465_);
lean_ctor_set(v_reuseFailAlloc_1471_, 1, v_k_1396_);
lean_ctor_set(v_reuseFailAlloc_1471_, 2, v_v_1397_);
lean_ctor_set(v_reuseFailAlloc_1471_, 3, v_r_1242_);
lean_ctor_set(v_reuseFailAlloc_1471_, 4, v_tree_1395_);
v___x_1467_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
lean_object* v___x_1469_; 
if (v_isShared_1409_ == 0)
{
lean_ctor_set(v___x_1408_, 4, v___x_1467_);
lean_ctor_set(v___x_1408_, 0, v___x_1463_);
v___x_1469_ = v___x_1408_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v___x_1463_);
lean_ctor_set(v_reuseFailAlloc_1470_, 1, v_k_1239_);
lean_ctor_set(v_reuseFailAlloc_1470_, 2, v_v_1240_);
lean_ctor_set(v_reuseFailAlloc_1470_, 3, v_l_1241_);
lean_ctor_set(v_reuseFailAlloc_1470_, 4, v___x_1467_);
v___x_1469_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
return v___x_1469_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_1241_) == 0)
{
lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1501_; 
lean_inc_ref(v_l_1241_);
lean_inc(v_v_1240_);
lean_inc(v_k_1239_);
lean_inc(v_size_1238_);
v_isSharedCheck_1501_ = !lean_is_exclusive(v_l_1058_);
if (v_isSharedCheck_1501_ == 0)
{
lean_object* v_unused_1502_; lean_object* v_unused_1503_; lean_object* v_unused_1504_; lean_object* v_unused_1505_; lean_object* v_unused_1506_; 
v_unused_1502_ = lean_ctor_get(v_l_1058_, 4);
lean_dec(v_unused_1502_);
v_unused_1503_ = lean_ctor_get(v_l_1058_, 3);
lean_dec(v_unused_1503_);
v_unused_1504_ = lean_ctor_get(v_l_1058_, 2);
lean_dec(v_unused_1504_);
v_unused_1505_ = lean_ctor_get(v_l_1058_, 1);
lean_dec(v_unused_1505_);
v_unused_1506_ = lean_ctor_get(v_l_1058_, 0);
lean_dec(v_unused_1506_);
v___x_1479_ = v_l_1058_;
v_isShared_1480_ = v_isSharedCheck_1501_;
goto v_resetjp_1478_;
}
else
{
lean_dec(v_l_1058_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1501_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
if (lean_obj_tag(v_r_1242_) == 0)
{
lean_object* v_k_1481_; lean_object* v_v_1482_; lean_object* v_size_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1487_; 
v_k_1481_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_k_1481_);
v_v_1482_ = lean_ctor_get(v___x_1394_, 1);
lean_inc(v_v_1482_);
lean_dec_ref(v___x_1394_);
v_size_1483_ = lean_ctor_get(v_r_1242_, 0);
v___x_1484_ = lean_nat_add(v___x_1248_, v_size_1238_);
lean_dec(v_size_1238_);
v___x_1485_ = lean_nat_add(v___x_1248_, v_size_1483_);
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 4, v_tree_1395_);
lean_ctor_set(v___x_1392_, 3, v_r_1242_);
lean_ctor_set(v___x_1392_, 2, v_v_1482_);
lean_ctor_set(v___x_1392_, 1, v_k_1481_);
lean_ctor_set(v___x_1392_, 0, v___x_1485_);
v___x_1487_ = v___x_1392_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v___x_1485_);
lean_ctor_set(v_reuseFailAlloc_1491_, 1, v_k_1481_);
lean_ctor_set(v_reuseFailAlloc_1491_, 2, v_v_1482_);
lean_ctor_set(v_reuseFailAlloc_1491_, 3, v_r_1242_);
lean_ctor_set(v_reuseFailAlloc_1491_, 4, v_tree_1395_);
v___x_1487_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
lean_object* v___x_1489_; 
if (v_isShared_1480_ == 0)
{
lean_ctor_set(v___x_1479_, 4, v___x_1487_);
lean_ctor_set(v___x_1479_, 0, v___x_1484_);
v___x_1489_ = v___x_1479_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v___x_1484_);
lean_ctor_set(v_reuseFailAlloc_1490_, 1, v_k_1239_);
lean_ctor_set(v_reuseFailAlloc_1490_, 2, v_v_1240_);
lean_ctor_set(v_reuseFailAlloc_1490_, 3, v_l_1241_);
lean_ctor_set(v_reuseFailAlloc_1490_, 4, v___x_1487_);
v___x_1489_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
return v___x_1489_;
}
}
}
else
{
lean_object* v_k_1492_; lean_object* v_v_1493_; lean_object* v___x_1494_; lean_object* v___x_1496_; 
lean_dec(v_size_1238_);
v_k_1492_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_k_1492_);
v_v_1493_ = lean_ctor_get(v___x_1394_, 1);
lean_inc(v_v_1493_);
lean_dec_ref(v___x_1394_);
v___x_1494_ = lean_unsigned_to_nat(3u);
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 4, v_r_1242_);
lean_ctor_set(v___x_1392_, 3, v_r_1242_);
lean_ctor_set(v___x_1392_, 2, v_v_1493_);
lean_ctor_set(v___x_1392_, 1, v_k_1492_);
lean_ctor_set(v___x_1392_, 0, v___x_1248_);
v___x_1496_ = v___x_1392_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v___x_1248_);
lean_ctor_set(v_reuseFailAlloc_1500_, 1, v_k_1492_);
lean_ctor_set(v_reuseFailAlloc_1500_, 2, v_v_1493_);
lean_ctor_set(v_reuseFailAlloc_1500_, 3, v_r_1242_);
lean_ctor_set(v_reuseFailAlloc_1500_, 4, v_r_1242_);
v___x_1496_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
lean_object* v___x_1498_; 
if (v_isShared_1480_ == 0)
{
lean_ctor_set(v___x_1479_, 4, v___x_1496_);
lean_ctor_set(v___x_1479_, 0, v___x_1494_);
v___x_1498_ = v___x_1479_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v___x_1494_);
lean_ctor_set(v_reuseFailAlloc_1499_, 1, v_k_1239_);
lean_ctor_set(v_reuseFailAlloc_1499_, 2, v_v_1240_);
lean_ctor_set(v_reuseFailAlloc_1499_, 3, v_l_1241_);
lean_ctor_set(v_reuseFailAlloc_1499_, 4, v___x_1496_);
v___x_1498_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
return v___x_1498_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_1242_) == 0)
{
lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1531_; 
lean_inc(v_l_1241_);
lean_inc(v_v_1240_);
lean_inc(v_k_1239_);
v_isSharedCheck_1531_ = !lean_is_exclusive(v_l_1058_);
if (v_isSharedCheck_1531_ == 0)
{
lean_object* v_unused_1532_; lean_object* v_unused_1533_; lean_object* v_unused_1534_; lean_object* v_unused_1535_; lean_object* v_unused_1536_; 
v_unused_1532_ = lean_ctor_get(v_l_1058_, 4);
lean_dec(v_unused_1532_);
v_unused_1533_ = lean_ctor_get(v_l_1058_, 3);
lean_dec(v_unused_1533_);
v_unused_1534_ = lean_ctor_get(v_l_1058_, 2);
lean_dec(v_unused_1534_);
v_unused_1535_ = lean_ctor_get(v_l_1058_, 1);
lean_dec(v_unused_1535_);
v_unused_1536_ = lean_ctor_get(v_l_1058_, 0);
lean_dec(v_unused_1536_);
v___x_1508_ = v_l_1058_;
v_isShared_1509_ = v_isSharedCheck_1531_;
goto v_resetjp_1507_;
}
else
{
lean_dec(v_l_1058_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1531_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
lean_object* v_k_1510_; lean_object* v_v_1511_; lean_object* v_k_1512_; lean_object* v_v_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1527_; 
v_k_1510_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_k_1510_);
v_v_1511_ = lean_ctor_get(v___x_1394_, 1);
lean_inc(v_v_1511_);
lean_dec_ref(v___x_1394_);
v_k_1512_ = lean_ctor_get(v_r_1242_, 1);
v_v_1513_ = lean_ctor_get(v_r_1242_, 2);
v_isSharedCheck_1527_ = !lean_is_exclusive(v_r_1242_);
if (v_isSharedCheck_1527_ == 0)
{
lean_object* v_unused_1528_; lean_object* v_unused_1529_; lean_object* v_unused_1530_; 
v_unused_1528_ = lean_ctor_get(v_r_1242_, 4);
lean_dec(v_unused_1528_);
v_unused_1529_ = lean_ctor_get(v_r_1242_, 3);
lean_dec(v_unused_1529_);
v_unused_1530_ = lean_ctor_get(v_r_1242_, 0);
lean_dec(v_unused_1530_);
v___x_1515_ = v_r_1242_;
v_isShared_1516_ = v_isSharedCheck_1527_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_v_1513_);
lean_inc(v_k_1512_);
lean_dec(v_r_1242_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1527_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1517_; lean_object* v___x_1519_; 
v___x_1517_ = lean_unsigned_to_nat(3u);
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 4, v_l_1241_);
lean_ctor_set(v___x_1515_, 3, v_l_1241_);
lean_ctor_set(v___x_1515_, 2, v_v_1240_);
lean_ctor_set(v___x_1515_, 1, v_k_1239_);
lean_ctor_set(v___x_1515_, 0, v___x_1248_);
v___x_1519_ = v___x_1515_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v___x_1248_);
lean_ctor_set(v_reuseFailAlloc_1526_, 1, v_k_1239_);
lean_ctor_set(v_reuseFailAlloc_1526_, 2, v_v_1240_);
lean_ctor_set(v_reuseFailAlloc_1526_, 3, v_l_1241_);
lean_ctor_set(v_reuseFailAlloc_1526_, 4, v_l_1241_);
v___x_1519_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
lean_object* v___x_1521_; 
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 4, v_l_1241_);
lean_ctor_set(v___x_1392_, 3, v_l_1241_);
lean_ctor_set(v___x_1392_, 2, v_v_1511_);
lean_ctor_set(v___x_1392_, 1, v_k_1510_);
lean_ctor_set(v___x_1392_, 0, v___x_1248_);
v___x_1521_ = v___x_1392_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v___x_1248_);
lean_ctor_set(v_reuseFailAlloc_1525_, 1, v_k_1510_);
lean_ctor_set(v_reuseFailAlloc_1525_, 2, v_v_1511_);
lean_ctor_set(v_reuseFailAlloc_1525_, 3, v_l_1241_);
lean_ctor_set(v_reuseFailAlloc_1525_, 4, v_l_1241_);
v___x_1521_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
lean_object* v___x_1523_; 
if (v_isShared_1509_ == 0)
{
lean_ctor_set(v___x_1508_, 4, v___x_1521_);
lean_ctor_set(v___x_1508_, 3, v___x_1519_);
lean_ctor_set(v___x_1508_, 2, v_v_1513_);
lean_ctor_set(v___x_1508_, 1, v_k_1512_);
lean_ctor_set(v___x_1508_, 0, v___x_1517_);
v___x_1523_ = v___x_1508_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v___x_1517_);
lean_ctor_set(v_reuseFailAlloc_1524_, 1, v_k_1512_);
lean_ctor_set(v_reuseFailAlloc_1524_, 2, v_v_1513_);
lean_ctor_set(v_reuseFailAlloc_1524_, 3, v___x_1519_);
lean_ctor_set(v_reuseFailAlloc_1524_, 4, v___x_1521_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
}
}
}
}
else
{
lean_object* v_k_1537_; lean_object* v_v_1538_; lean_object* v___x_1539_; lean_object* v___x_1541_; 
v_k_1537_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_k_1537_);
v_v_1538_ = lean_ctor_get(v___x_1394_, 1);
lean_inc(v_v_1538_);
lean_dec_ref(v___x_1394_);
v___x_1539_ = lean_unsigned_to_nat(2u);
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 4, v_r_1242_);
lean_ctor_set(v___x_1392_, 3, v_l_1058_);
lean_ctor_set(v___x_1392_, 2, v_v_1538_);
lean_ctor_set(v___x_1392_, 1, v_k_1537_);
lean_ctor_set(v___x_1392_, 0, v___x_1539_);
v___x_1541_ = v___x_1392_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v___x_1539_);
lean_ctor_set(v_reuseFailAlloc_1542_, 1, v_k_1537_);
lean_ctor_set(v_reuseFailAlloc_1542_, 2, v_v_1538_);
lean_ctor_set(v_reuseFailAlloc_1542_, 3, v_l_1058_);
lean_ctor_set(v_reuseFailAlloc_1542_, 4, v_r_1242_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
}
}
}
}
}
else
{
return v_l_1058_;
}
}
else
{
return v_r_1059_;
}
}
default: 
{
lean_object* v_impl_1549_; lean_object* v___x_1550_; 
v_impl_1549_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_k_1054_, v_r_1059_);
v___x_1550_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_1549_) == 0)
{
if (lean_obj_tag(v_l_1058_) == 0)
{
lean_object* v_size_1551_; lean_object* v_size_1552_; lean_object* v_k_1553_; lean_object* v_v_1554_; lean_object* v_l_1555_; lean_object* v_r_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; uint8_t v___x_1559_; 
v_size_1551_ = lean_ctor_get(v_impl_1549_, 0);
lean_inc(v_size_1551_);
v_size_1552_ = lean_ctor_get(v_l_1058_, 0);
v_k_1553_ = lean_ctor_get(v_l_1058_, 1);
v_v_1554_ = lean_ctor_get(v_l_1058_, 2);
v_l_1555_ = lean_ctor_get(v_l_1058_, 3);
v_r_1556_ = lean_ctor_get(v_l_1058_, 4);
lean_inc(v_r_1556_);
v___x_1557_ = lean_unsigned_to_nat(3u);
v___x_1558_ = lean_nat_mul(v___x_1557_, v_size_1551_);
v___x_1559_ = lean_nat_dec_lt(v___x_1558_, v_size_1552_);
lean_dec(v___x_1558_);
if (v___x_1559_ == 0)
{
lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1563_; 
lean_dec(v_r_1556_);
v___x_1560_ = lean_nat_add(v___x_1550_, v_size_1552_);
v___x_1561_ = lean_nat_add(v___x_1560_, v_size_1551_);
lean_dec(v_size_1551_);
lean_dec(v___x_1560_);
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 4, v_impl_1549_);
lean_ctor_set(v___x_1061_, 0, v___x_1561_);
v___x_1563_ = v___x_1061_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v___x_1561_);
lean_ctor_set(v_reuseFailAlloc_1564_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1564_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1564_, 3, v_l_1058_);
lean_ctor_set(v_reuseFailAlloc_1564_, 4, v_impl_1549_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
else
{
lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1630_; 
lean_inc(v_l_1555_);
lean_inc(v_v_1554_);
lean_inc(v_k_1553_);
lean_inc(v_size_1552_);
v_isSharedCheck_1630_ = !lean_is_exclusive(v_l_1058_);
if (v_isSharedCheck_1630_ == 0)
{
lean_object* v_unused_1631_; lean_object* v_unused_1632_; lean_object* v_unused_1633_; lean_object* v_unused_1634_; lean_object* v_unused_1635_; 
v_unused_1631_ = lean_ctor_get(v_l_1058_, 4);
lean_dec(v_unused_1631_);
v_unused_1632_ = lean_ctor_get(v_l_1058_, 3);
lean_dec(v_unused_1632_);
v_unused_1633_ = lean_ctor_get(v_l_1058_, 2);
lean_dec(v_unused_1633_);
v_unused_1634_ = lean_ctor_get(v_l_1058_, 1);
lean_dec(v_unused_1634_);
v_unused_1635_ = lean_ctor_get(v_l_1058_, 0);
lean_dec(v_unused_1635_);
v___x_1566_ = v_l_1058_;
v_isShared_1567_ = v_isSharedCheck_1630_;
goto v_resetjp_1565_;
}
else
{
lean_dec(v_l_1058_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1630_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v_size_1568_; lean_object* v_size_1569_; lean_object* v_k_1570_; lean_object* v_v_1571_; lean_object* v_l_1572_; lean_object* v_r_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; uint8_t v___x_1576_; 
v_size_1568_ = lean_ctor_get(v_l_1555_, 0);
v_size_1569_ = lean_ctor_get(v_r_1556_, 0);
v_k_1570_ = lean_ctor_get(v_r_1556_, 1);
v_v_1571_ = lean_ctor_get(v_r_1556_, 2);
v_l_1572_ = lean_ctor_get(v_r_1556_, 3);
v_r_1573_ = lean_ctor_get(v_r_1556_, 4);
v___x_1574_ = lean_unsigned_to_nat(2u);
v___x_1575_ = lean_nat_mul(v___x_1574_, v_size_1568_);
v___x_1576_ = lean_nat_dec_lt(v_size_1569_, v___x_1575_);
lean_dec(v___x_1575_);
if (v___x_1576_ == 0)
{
lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1605_; 
lean_inc(v_r_1573_);
lean_inc(v_l_1572_);
lean_inc(v_v_1571_);
lean_inc(v_k_1570_);
v_isSharedCheck_1605_ = !lean_is_exclusive(v_r_1556_);
if (v_isSharedCheck_1605_ == 0)
{
lean_object* v_unused_1606_; lean_object* v_unused_1607_; lean_object* v_unused_1608_; lean_object* v_unused_1609_; lean_object* v_unused_1610_; 
v_unused_1606_ = lean_ctor_get(v_r_1556_, 4);
lean_dec(v_unused_1606_);
v_unused_1607_ = lean_ctor_get(v_r_1556_, 3);
lean_dec(v_unused_1607_);
v_unused_1608_ = lean_ctor_get(v_r_1556_, 2);
lean_dec(v_unused_1608_);
v_unused_1609_ = lean_ctor_get(v_r_1556_, 1);
lean_dec(v_unused_1609_);
v_unused_1610_ = lean_ctor_get(v_r_1556_, 0);
lean_dec(v_unused_1610_);
v___x_1578_ = v_r_1556_;
v_isShared_1579_ = v_isSharedCheck_1605_;
goto v_resetjp_1577_;
}
else
{
lean_dec(v_r_1556_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1605_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___y_1583_; lean_object* v___y_1584_; lean_object* v___y_1585_; lean_object* v___x_1593_; lean_object* v___y_1595_; 
v___x_1580_ = lean_nat_add(v___x_1550_, v_size_1552_);
lean_dec(v_size_1552_);
v___x_1581_ = lean_nat_add(v___x_1580_, v_size_1551_);
lean_dec(v___x_1580_);
v___x_1593_ = lean_nat_add(v___x_1550_, v_size_1568_);
if (lean_obj_tag(v_l_1572_) == 0)
{
lean_object* v_size_1603_; 
v_size_1603_ = lean_ctor_get(v_l_1572_, 0);
lean_inc(v_size_1603_);
v___y_1595_ = v_size_1603_;
goto v___jp_1594_;
}
else
{
lean_object* v___x_1604_; 
v___x_1604_ = lean_unsigned_to_nat(0u);
v___y_1595_ = v___x_1604_;
goto v___jp_1594_;
}
v___jp_1582_:
{
lean_object* v___x_1586_; lean_object* v___x_1588_; 
v___x_1586_ = lean_nat_add(v___y_1584_, v___y_1585_);
lean_dec(v___y_1585_);
lean_dec(v___y_1584_);
if (v_isShared_1579_ == 0)
{
lean_ctor_set(v___x_1578_, 4, v_impl_1549_);
lean_ctor_set(v___x_1578_, 3, v_r_1573_);
lean_ctor_set(v___x_1578_, 2, v_v_1057_);
lean_ctor_set(v___x_1578_, 1, v_k_1056_);
lean_ctor_set(v___x_1578_, 0, v___x_1586_);
v___x_1588_ = v___x_1578_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v___x_1586_);
lean_ctor_set(v_reuseFailAlloc_1592_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1592_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1592_, 3, v_r_1573_);
lean_ctor_set(v_reuseFailAlloc_1592_, 4, v_impl_1549_);
v___x_1588_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
lean_object* v___x_1590_; 
if (v_isShared_1567_ == 0)
{
lean_ctor_set(v___x_1566_, 4, v___x_1588_);
lean_ctor_set(v___x_1566_, 3, v___y_1583_);
lean_ctor_set(v___x_1566_, 2, v_v_1571_);
lean_ctor_set(v___x_1566_, 1, v_k_1570_);
lean_ctor_set(v___x_1566_, 0, v___x_1581_);
v___x_1590_ = v___x_1566_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v___x_1581_);
lean_ctor_set(v_reuseFailAlloc_1591_, 1, v_k_1570_);
lean_ctor_set(v_reuseFailAlloc_1591_, 2, v_v_1571_);
lean_ctor_set(v_reuseFailAlloc_1591_, 3, v___y_1583_);
lean_ctor_set(v_reuseFailAlloc_1591_, 4, v___x_1588_);
v___x_1590_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
return v___x_1590_;
}
}
}
v___jp_1594_:
{
lean_object* v___x_1596_; lean_object* v___x_1598_; 
v___x_1596_ = lean_nat_add(v___x_1593_, v___y_1595_);
lean_dec(v___y_1595_);
lean_dec(v___x_1593_);
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 4, v_l_1572_);
lean_ctor_set(v___x_1061_, 3, v_l_1555_);
lean_ctor_set(v___x_1061_, 2, v_v_1554_);
lean_ctor_set(v___x_1061_, 1, v_k_1553_);
lean_ctor_set(v___x_1061_, 0, v___x_1596_);
v___x_1598_ = v___x_1061_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v___x_1596_);
lean_ctor_set(v_reuseFailAlloc_1602_, 1, v_k_1553_);
lean_ctor_set(v_reuseFailAlloc_1602_, 2, v_v_1554_);
lean_ctor_set(v_reuseFailAlloc_1602_, 3, v_l_1555_);
lean_ctor_set(v_reuseFailAlloc_1602_, 4, v_l_1572_);
v___x_1598_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
lean_object* v___x_1599_; 
v___x_1599_ = lean_nat_add(v___x_1550_, v_size_1551_);
lean_dec(v_size_1551_);
if (lean_obj_tag(v_r_1573_) == 0)
{
lean_object* v_size_1600_; 
v_size_1600_ = lean_ctor_get(v_r_1573_, 0);
lean_inc(v_size_1600_);
v___y_1583_ = v___x_1598_;
v___y_1584_ = v___x_1599_;
v___y_1585_ = v_size_1600_;
goto v___jp_1582_;
}
else
{
lean_object* v___x_1601_; 
v___x_1601_ = lean_unsigned_to_nat(0u);
v___y_1583_ = v___x_1598_;
v___y_1584_ = v___x_1599_;
v___y_1585_ = v___x_1601_;
goto v___jp_1582_;
}
}
}
}
}
else
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1616_; 
lean_del_object(v___x_1061_);
v___x_1611_ = lean_nat_add(v___x_1550_, v_size_1552_);
lean_dec(v_size_1552_);
v___x_1612_ = lean_nat_add(v___x_1611_, v_size_1551_);
lean_dec(v___x_1611_);
v___x_1613_ = lean_nat_add(v___x_1550_, v_size_1551_);
lean_dec(v_size_1551_);
v___x_1614_ = lean_nat_add(v___x_1613_, v_size_1569_);
lean_dec(v___x_1613_);
lean_inc_ref(v_impl_1549_);
if (v_isShared_1567_ == 0)
{
lean_ctor_set(v___x_1566_, 4, v_impl_1549_);
lean_ctor_set(v___x_1566_, 3, v_r_1556_);
lean_ctor_set(v___x_1566_, 2, v_v_1057_);
lean_ctor_set(v___x_1566_, 1, v_k_1056_);
lean_ctor_set(v___x_1566_, 0, v___x_1614_);
v___x_1616_ = v___x_1566_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v___x_1614_);
lean_ctor_set(v_reuseFailAlloc_1629_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1629_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1629_, 3, v_r_1556_);
lean_ctor_set(v_reuseFailAlloc_1629_, 4, v_impl_1549_);
v___x_1616_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1623_; 
v_isSharedCheck_1623_ = !lean_is_exclusive(v_impl_1549_);
if (v_isSharedCheck_1623_ == 0)
{
lean_object* v_unused_1624_; lean_object* v_unused_1625_; lean_object* v_unused_1626_; lean_object* v_unused_1627_; lean_object* v_unused_1628_; 
v_unused_1624_ = lean_ctor_get(v_impl_1549_, 4);
lean_dec(v_unused_1624_);
v_unused_1625_ = lean_ctor_get(v_impl_1549_, 3);
lean_dec(v_unused_1625_);
v_unused_1626_ = lean_ctor_get(v_impl_1549_, 2);
lean_dec(v_unused_1626_);
v_unused_1627_ = lean_ctor_get(v_impl_1549_, 1);
lean_dec(v_unused_1627_);
v_unused_1628_ = lean_ctor_get(v_impl_1549_, 0);
lean_dec(v_unused_1628_);
v___x_1618_ = v_impl_1549_;
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
else
{
lean_dec(v_impl_1549_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1621_; 
if (v_isShared_1619_ == 0)
{
lean_ctor_set(v___x_1618_, 4, v___x_1616_);
lean_ctor_set(v___x_1618_, 3, v_l_1555_);
lean_ctor_set(v___x_1618_, 2, v_v_1554_);
lean_ctor_set(v___x_1618_, 1, v_k_1553_);
lean_ctor_set(v___x_1618_, 0, v___x_1612_);
v___x_1621_ = v___x_1618_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v___x_1612_);
lean_ctor_set(v_reuseFailAlloc_1622_, 1, v_k_1553_);
lean_ctor_set(v_reuseFailAlloc_1622_, 2, v_v_1554_);
lean_ctor_set(v_reuseFailAlloc_1622_, 3, v_l_1555_);
lean_ctor_set(v_reuseFailAlloc_1622_, 4, v___x_1616_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_1636_; lean_object* v___x_1637_; lean_object* v___x_1639_; 
v_size_1636_ = lean_ctor_get(v_impl_1549_, 0);
lean_inc(v_size_1636_);
v___x_1637_ = lean_nat_add(v___x_1550_, v_size_1636_);
lean_dec(v_size_1636_);
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 4, v_impl_1549_);
lean_ctor_set(v___x_1061_, 0, v___x_1637_);
v___x_1639_ = v___x_1061_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v___x_1637_);
lean_ctor_set(v_reuseFailAlloc_1640_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1640_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1640_, 3, v_l_1058_);
lean_ctor_set(v_reuseFailAlloc_1640_, 4, v_impl_1549_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
return v___x_1639_;
}
}
}
else
{
if (lean_obj_tag(v_l_1058_) == 0)
{
lean_object* v_l_1641_; 
v_l_1641_ = lean_ctor_get(v_l_1058_, 3);
if (lean_obj_tag(v_l_1641_) == 0)
{
lean_object* v_r_1642_; 
lean_inc_ref(v_l_1641_);
v_r_1642_ = lean_ctor_get(v_l_1058_, 4);
lean_inc(v_r_1642_);
if (lean_obj_tag(v_r_1642_) == 0)
{
lean_object* v_size_1643_; lean_object* v_k_1644_; lean_object* v_v_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1658_; 
v_size_1643_ = lean_ctor_get(v_l_1058_, 0);
v_k_1644_ = lean_ctor_get(v_l_1058_, 1);
v_v_1645_ = lean_ctor_get(v_l_1058_, 2);
v_isSharedCheck_1658_ = !lean_is_exclusive(v_l_1058_);
if (v_isSharedCheck_1658_ == 0)
{
lean_object* v_unused_1659_; lean_object* v_unused_1660_; 
v_unused_1659_ = lean_ctor_get(v_l_1058_, 4);
lean_dec(v_unused_1659_);
v_unused_1660_ = lean_ctor_get(v_l_1058_, 3);
lean_dec(v_unused_1660_);
v___x_1647_ = v_l_1058_;
v_isShared_1648_ = v_isSharedCheck_1658_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_v_1645_);
lean_inc(v_k_1644_);
lean_inc(v_size_1643_);
lean_dec(v_l_1058_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1658_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v_size_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1653_; 
v_size_1649_ = lean_ctor_get(v_r_1642_, 0);
v___x_1650_ = lean_nat_add(v___x_1550_, v_size_1643_);
lean_dec(v_size_1643_);
v___x_1651_ = lean_nat_add(v___x_1550_, v_size_1649_);
if (v_isShared_1648_ == 0)
{
lean_ctor_set(v___x_1647_, 4, v_impl_1549_);
lean_ctor_set(v___x_1647_, 3, v_r_1642_);
lean_ctor_set(v___x_1647_, 2, v_v_1057_);
lean_ctor_set(v___x_1647_, 1, v_k_1056_);
lean_ctor_set(v___x_1647_, 0, v___x_1651_);
v___x_1653_ = v___x_1647_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v___x_1651_);
lean_ctor_set(v_reuseFailAlloc_1657_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1657_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1657_, 3, v_r_1642_);
lean_ctor_set(v_reuseFailAlloc_1657_, 4, v_impl_1549_);
v___x_1653_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
lean_object* v___x_1655_; 
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 4, v___x_1653_);
lean_ctor_set(v___x_1061_, 3, v_l_1641_);
lean_ctor_set(v___x_1061_, 2, v_v_1645_);
lean_ctor_set(v___x_1061_, 1, v_k_1644_);
lean_ctor_set(v___x_1061_, 0, v___x_1650_);
v___x_1655_ = v___x_1061_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v___x_1650_);
lean_ctor_set(v_reuseFailAlloc_1656_, 1, v_k_1644_);
lean_ctor_set(v_reuseFailAlloc_1656_, 2, v_v_1645_);
lean_ctor_set(v_reuseFailAlloc_1656_, 3, v_l_1641_);
lean_ctor_set(v_reuseFailAlloc_1656_, 4, v___x_1653_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
return v___x_1655_;
}
}
}
}
else
{
lean_object* v_k_1661_; lean_object* v_v_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1673_; 
v_k_1661_ = lean_ctor_get(v_l_1058_, 1);
v_v_1662_ = lean_ctor_get(v_l_1058_, 2);
v_isSharedCheck_1673_ = !lean_is_exclusive(v_l_1058_);
if (v_isSharedCheck_1673_ == 0)
{
lean_object* v_unused_1674_; lean_object* v_unused_1675_; lean_object* v_unused_1676_; 
v_unused_1674_ = lean_ctor_get(v_l_1058_, 4);
lean_dec(v_unused_1674_);
v_unused_1675_ = lean_ctor_get(v_l_1058_, 3);
lean_dec(v_unused_1675_);
v_unused_1676_ = lean_ctor_get(v_l_1058_, 0);
lean_dec(v_unused_1676_);
v___x_1664_ = v_l_1058_;
v_isShared_1665_ = v_isSharedCheck_1673_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_v_1662_);
lean_inc(v_k_1661_);
lean_dec(v_l_1058_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1673_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1666_; lean_object* v___x_1668_; 
v___x_1666_ = lean_unsigned_to_nat(3u);
if (v_isShared_1665_ == 0)
{
lean_ctor_set(v___x_1664_, 3, v_r_1642_);
lean_ctor_set(v___x_1664_, 2, v_v_1057_);
lean_ctor_set(v___x_1664_, 1, v_k_1056_);
lean_ctor_set(v___x_1664_, 0, v___x_1550_);
v___x_1668_ = v___x_1664_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v___x_1550_);
lean_ctor_set(v_reuseFailAlloc_1672_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1672_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1672_, 3, v_r_1642_);
lean_ctor_set(v_reuseFailAlloc_1672_, 4, v_r_1642_);
v___x_1668_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
lean_object* v___x_1670_; 
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 4, v___x_1668_);
lean_ctor_set(v___x_1061_, 3, v_l_1641_);
lean_ctor_set(v___x_1061_, 2, v_v_1662_);
lean_ctor_set(v___x_1061_, 1, v_k_1661_);
lean_ctor_set(v___x_1061_, 0, v___x_1666_);
v___x_1670_ = v___x_1061_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v___x_1666_);
lean_ctor_set(v_reuseFailAlloc_1671_, 1, v_k_1661_);
lean_ctor_set(v_reuseFailAlloc_1671_, 2, v_v_1662_);
lean_ctor_set(v_reuseFailAlloc_1671_, 3, v_l_1641_);
lean_ctor_set(v_reuseFailAlloc_1671_, 4, v___x_1668_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
}
}
}
}
}
else
{
lean_object* v_r_1677_; 
v_r_1677_ = lean_ctor_get(v_l_1058_, 4);
lean_inc(v_r_1677_);
if (lean_obj_tag(v_r_1677_) == 0)
{
lean_object* v_k_1678_; lean_object* v_v_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1702_; 
lean_inc(v_l_1641_);
v_k_1678_ = lean_ctor_get(v_l_1058_, 1);
v_v_1679_ = lean_ctor_get(v_l_1058_, 2);
v_isSharedCheck_1702_ = !lean_is_exclusive(v_l_1058_);
if (v_isSharedCheck_1702_ == 0)
{
lean_object* v_unused_1703_; lean_object* v_unused_1704_; lean_object* v_unused_1705_; 
v_unused_1703_ = lean_ctor_get(v_l_1058_, 4);
lean_dec(v_unused_1703_);
v_unused_1704_ = lean_ctor_get(v_l_1058_, 3);
lean_dec(v_unused_1704_);
v_unused_1705_ = lean_ctor_get(v_l_1058_, 0);
lean_dec(v_unused_1705_);
v___x_1681_ = v_l_1058_;
v_isShared_1682_ = v_isSharedCheck_1702_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_v_1679_);
lean_inc(v_k_1678_);
lean_dec(v_l_1058_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1702_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v_k_1683_; lean_object* v_v_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1698_; 
v_k_1683_ = lean_ctor_get(v_r_1677_, 1);
v_v_1684_ = lean_ctor_get(v_r_1677_, 2);
v_isSharedCheck_1698_ = !lean_is_exclusive(v_r_1677_);
if (v_isSharedCheck_1698_ == 0)
{
lean_object* v_unused_1699_; lean_object* v_unused_1700_; lean_object* v_unused_1701_; 
v_unused_1699_ = lean_ctor_get(v_r_1677_, 4);
lean_dec(v_unused_1699_);
v_unused_1700_ = lean_ctor_get(v_r_1677_, 3);
lean_dec(v_unused_1700_);
v_unused_1701_ = lean_ctor_get(v_r_1677_, 0);
lean_dec(v_unused_1701_);
v___x_1686_ = v_r_1677_;
v_isShared_1687_ = v_isSharedCheck_1698_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_v_1684_);
lean_inc(v_k_1683_);
lean_dec(v_r_1677_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1698_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v___x_1688_; lean_object* v___x_1690_; 
v___x_1688_ = lean_unsigned_to_nat(3u);
if (v_isShared_1687_ == 0)
{
lean_ctor_set(v___x_1686_, 4, v_l_1641_);
lean_ctor_set(v___x_1686_, 3, v_l_1641_);
lean_ctor_set(v___x_1686_, 2, v_v_1679_);
lean_ctor_set(v___x_1686_, 1, v_k_1678_);
lean_ctor_set(v___x_1686_, 0, v___x_1550_);
v___x_1690_ = v___x_1686_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v___x_1550_);
lean_ctor_set(v_reuseFailAlloc_1697_, 1, v_k_1678_);
lean_ctor_set(v_reuseFailAlloc_1697_, 2, v_v_1679_);
lean_ctor_set(v_reuseFailAlloc_1697_, 3, v_l_1641_);
lean_ctor_set(v_reuseFailAlloc_1697_, 4, v_l_1641_);
v___x_1690_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
lean_object* v___x_1692_; 
if (v_isShared_1682_ == 0)
{
lean_ctor_set(v___x_1681_, 4, v_l_1641_);
lean_ctor_set(v___x_1681_, 2, v_v_1057_);
lean_ctor_set(v___x_1681_, 1, v_k_1056_);
lean_ctor_set(v___x_1681_, 0, v___x_1550_);
v___x_1692_ = v___x_1681_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v___x_1550_);
lean_ctor_set(v_reuseFailAlloc_1696_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1696_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1696_, 3, v_l_1641_);
lean_ctor_set(v_reuseFailAlloc_1696_, 4, v_l_1641_);
v___x_1692_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
lean_object* v___x_1694_; 
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 4, v___x_1692_);
lean_ctor_set(v___x_1061_, 3, v___x_1690_);
lean_ctor_set(v___x_1061_, 2, v_v_1684_);
lean_ctor_set(v___x_1061_, 1, v_k_1683_);
lean_ctor_set(v___x_1061_, 0, v___x_1688_);
v___x_1694_ = v___x_1061_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v___x_1688_);
lean_ctor_set(v_reuseFailAlloc_1695_, 1, v_k_1683_);
lean_ctor_set(v_reuseFailAlloc_1695_, 2, v_v_1684_);
lean_ctor_set(v_reuseFailAlloc_1695_, 3, v___x_1690_);
lean_ctor_set(v_reuseFailAlloc_1695_, 4, v___x_1692_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
}
}
}
}
else
{
lean_object* v___x_1706_; lean_object* v___x_1708_; 
v___x_1706_ = lean_unsigned_to_nat(2u);
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 4, v_r_1677_);
lean_ctor_set(v___x_1061_, 0, v___x_1706_);
v___x_1708_ = v___x_1061_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v___x_1706_);
lean_ctor_set(v_reuseFailAlloc_1709_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1709_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1709_, 3, v_l_1058_);
lean_ctor_set(v_reuseFailAlloc_1709_, 4, v_r_1677_);
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
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 4, v_l_1058_);
lean_ctor_set(v___x_1061_, 0, v___x_1550_);
v___x_1711_ = v___x_1061_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v___x_1550_);
lean_ctor_set(v_reuseFailAlloc_1712_, 1, v_k_1056_);
lean_ctor_set(v_reuseFailAlloc_1712_, 2, v_v_1057_);
lean_ctor_set(v_reuseFailAlloc_1712_, 3, v_l_1058_);
lean_ctor_set(v_reuseFailAlloc_1712_, 4, v_l_1058_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
return v___x_1711_;
}
}
}
}
}
}
}
else
{
return v_t_1055_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg___boxed(lean_object* v_k_1715_, lean_object* v_t_1716_){
_start:
{
lean_object* v_res_1717_; 
v_res_1717_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_k_1715_, v_t_1716_);
lean_dec(v_k_1715_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr(lean_object* v_ext_1718_, lean_object* v_declName_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_){
_start:
{
lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v_ext_1725_; lean_object* v_toEnvExtension_1726_; lean_object* v_env_1727_; lean_object* v_asyncMode_1728_; lean_object* v___x_1729_; lean_object* v___y_1731_; lean_object* v_funCC_1757_; uint8_t v___x_1758_; 
v___x_1723_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_1724_ = lean_st_ref_get(v_a_1721_);
v_ext_1725_ = lean_ctor_get(v_ext_1718_, 1);
v_toEnvExtension_1726_ = lean_ctor_get(v_ext_1725_, 0);
v_env_1727_ = lean_ctor_get(v___x_1724_, 0);
lean_inc_ref(v_env_1727_);
lean_dec(v___x_1724_);
v_asyncMode_1728_ = lean_ctor_get(v_toEnvExtension_1726_, 2);
v___x_1729_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1723_, v_ext_1718_, v_env_1727_, v_asyncMode_1728_);
v_funCC_1757_ = lean_ctor_get(v___x_1729_, 2);
lean_inc(v_funCC_1757_);
v___x_1758_ = l_Lean_NameSet_contains(v_funCC_1757_, v_declName_1719_);
lean_dec(v_funCC_1757_);
if (v___x_1758_ == 0)
{
lean_object* v___x_1759_; 
lean_inc(v_declName_1719_);
v___x_1759_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_1719_, v_a_1720_, v_a_1721_);
if (lean_obj_tag(v___x_1759_) == 0)
{
lean_dec_ref_known(v___x_1759_, 1);
v___y_1731_ = v_a_1721_;
goto v___jp_1730_;
}
else
{
lean_dec(v___x_1729_);
lean_dec(v_declName_1719_);
lean_dec_ref(v_ext_1718_);
return v___x_1759_;
}
}
else
{
v___y_1731_ = v_a_1721_;
goto v___jp_1730_;
}
v___jp_1730_:
{
lean_object* v_funCC_1732_; lean_object* v___x_1733_; lean_object* v___f_1734_; lean_object* v___x_1735_; lean_object* v_env_1736_; lean_object* v_nextMacroScope_1737_; lean_object* v_ngen_1738_; lean_object* v_auxDeclNGen_1739_; lean_object* v_traceState_1740_; lean_object* v_messages_1741_; lean_object* v_infoState_1742_; lean_object* v_snapshotTasks_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1755_; 
v_funCC_1732_ = lean_ctor_get(v___x_1729_, 2);
lean_inc(v_funCC_1732_);
lean_dec(v___x_1729_);
v___x_1733_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_declName_1719_, v_funCC_1732_);
lean_dec(v_declName_1719_);
v___f_1734_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___lam__0), 2, 1);
lean_closure_set(v___f_1734_, 0, v___x_1733_);
v___x_1735_ = lean_st_ref_take(v___y_1731_);
v_env_1736_ = lean_ctor_get(v___x_1735_, 0);
v_nextMacroScope_1737_ = lean_ctor_get(v___x_1735_, 1);
v_ngen_1738_ = lean_ctor_get(v___x_1735_, 2);
v_auxDeclNGen_1739_ = lean_ctor_get(v___x_1735_, 3);
v_traceState_1740_ = lean_ctor_get(v___x_1735_, 4);
v_messages_1741_ = lean_ctor_get(v___x_1735_, 6);
v_infoState_1742_ = lean_ctor_get(v___x_1735_, 7);
v_snapshotTasks_1743_ = lean_ctor_get(v___x_1735_, 8);
v_isSharedCheck_1755_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1755_ == 0)
{
lean_object* v_unused_1756_; 
v_unused_1756_ = lean_ctor_get(v___x_1735_, 5);
lean_dec(v_unused_1756_);
v___x_1745_ = v___x_1735_;
v_isShared_1746_ = v_isSharedCheck_1755_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_snapshotTasks_1743_);
lean_inc(v_infoState_1742_);
lean_inc(v_messages_1741_);
lean_inc(v_traceState_1740_);
lean_inc(v_auxDeclNGen_1739_);
lean_inc(v_ngen_1738_);
lean_inc(v_nextMacroScope_1737_);
lean_inc(v_env_1736_);
lean_dec(v___x_1735_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1755_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1751_; 
v___x_1747_ = lean_box(0);
v___x_1748_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_1718_, v_env_1736_, v___f_1734_);
v___x_1749_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
if (v_isShared_1746_ == 0)
{
lean_ctor_set(v___x_1745_, 5, v___x_1749_);
lean_ctor_set(v___x_1745_, 0, v___x_1748_);
v___x_1751_ = v___x_1745_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v___x_1748_);
lean_ctor_set(v_reuseFailAlloc_1754_, 1, v_nextMacroScope_1737_);
lean_ctor_set(v_reuseFailAlloc_1754_, 2, v_ngen_1738_);
lean_ctor_set(v_reuseFailAlloc_1754_, 3, v_auxDeclNGen_1739_);
lean_ctor_set(v_reuseFailAlloc_1754_, 4, v_traceState_1740_);
lean_ctor_set(v_reuseFailAlloc_1754_, 5, v___x_1749_);
lean_ctor_set(v_reuseFailAlloc_1754_, 6, v_messages_1741_);
lean_ctor_set(v_reuseFailAlloc_1754_, 7, v_infoState_1742_);
lean_ctor_set(v_reuseFailAlloc_1754_, 8, v_snapshotTasks_1743_);
v___x_1751_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
lean_object* v___x_1752_; lean_object* v___x_1753_; 
v___x_1752_ = lean_st_ref_put(v___y_1731_, v___x_1751_);
v___x_1753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1747_);
return v___x_1753_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___boxed(lean_object* v_ext_1760_, lean_object* v_declName_1761_, lean_object* v_a_1762_, lean_object* v_a_1763_, lean_object* v_a_1764_){
_start:
{
lean_object* v_res_1765_; 
v_res_1765_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr(v_ext_1760_, v_declName_1761_, v_a_1762_, v_a_1763_);
lean_dec(v_a_1763_);
lean_dec_ref(v_a_1762_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0(lean_object* v_00_u03b2_1766_, lean_object* v_k_1767_, lean_object* v_t_1768_, lean_object* v_h_1769_){
_start:
{
lean_object* v___x_1770_; 
v___x_1770_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_k_1767_, v_t_1768_);
return v___x_1770_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___boxed(lean_object* v_00_u03b2_1771_, lean_object* v_k_1772_, lean_object* v_t_1773_, lean_object* v_h_1774_){
_start:
{
lean_object* v_res_1775_; 
v_res_1775_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0(v_00_u03b2_1771_, v_k_1772_, v_t_1773_, v_h_1774_);
lean_dec(v_k_1772_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___lam__0(lean_object* v_a_1776_, lean_object* v_s_1777_){
_start:
{
lean_object* v_casesTypes_1778_; lean_object* v_extThms_1779_; lean_object* v_funCC_1780_; lean_object* v_inj_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1788_; 
v_casesTypes_1778_ = lean_ctor_get(v_s_1777_, 0);
v_extThms_1779_ = lean_ctor_get(v_s_1777_, 1);
v_funCC_1780_ = lean_ctor_get(v_s_1777_, 2);
v_inj_1781_ = lean_ctor_get(v_s_1777_, 4);
v_isSharedCheck_1788_ = !lean_is_exclusive(v_s_1777_);
if (v_isSharedCheck_1788_ == 0)
{
lean_object* v_unused_1789_; 
v_unused_1789_ = lean_ctor_get(v_s_1777_, 3);
lean_dec(v_unused_1789_);
v___x_1783_ = v_s_1777_;
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_inj_1781_);
lean_inc(v_funCC_1780_);
lean_inc(v_extThms_1779_);
lean_inc(v_casesTypes_1778_);
lean_dec(v_s_1777_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1786_; 
if (v_isShared_1784_ == 0)
{
lean_ctor_set(v___x_1783_, 3, v_a_1776_);
v___x_1786_ = v___x_1783_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_casesTypes_1778_);
lean_ctor_set(v_reuseFailAlloc_1787_, 1, v_extThms_1779_);
lean_ctor_set(v_reuseFailAlloc_1787_, 2, v_funCC_1780_);
lean_ctor_set(v_reuseFailAlloc_1787_, 3, v_a_1776_);
lean_ctor_set(v_reuseFailAlloc_1787_, 4, v_inj_1781_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0(void){
_start:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; 
v___x_1790_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0);
v___x_1791_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1791_, 0, v___x_1790_);
lean_ctor_set(v___x_1791_, 1, v___x_1790_);
lean_ctor_set(v___x_1791_, 2, v___x_1790_);
lean_ctor_set(v___x_1791_, 3, v___x_1790_);
lean_ctor_set(v___x_1791_, 4, v___x_1790_);
lean_ctor_set(v___x_1791_, 5, v___x_1790_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr(lean_object* v_ext_1792_, lean_object* v_declName_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_){
_start:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v_ext_1801_; lean_object* v_toEnvExtension_1802_; lean_object* v_env_1803_; lean_object* v_asyncMode_1804_; lean_object* v___x_1805_; lean_object* v_ematch_1806_; lean_object* v___x_1807_; 
v___x_1799_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_1800_ = lean_st_ref_get(v_a_1797_);
v_ext_1801_ = lean_ctor_get(v_ext_1792_, 1);
v_toEnvExtension_1802_ = lean_ctor_get(v_ext_1801_, 0);
v_env_1803_ = lean_ctor_get(v___x_1800_, 0);
lean_inc_ref(v_env_1803_);
lean_dec(v___x_1800_);
v_asyncMode_1804_ = lean_ctor_get(v_toEnvExtension_1802_, 2);
v___x_1805_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1799_, v_ext_1792_, v_env_1803_, v_asyncMode_1804_);
v_ematch_1806_ = lean_ctor_get(v___x_1805_, 3);
lean_inc_ref(v_ematch_1806_);
lean_dec(v___x_1805_);
v___x_1807_ = l_Lean_Meta_Grind_Theorems_eraseDecl___redArg(v_ematch_1806_, v_declName_1793_, v_a_1794_, v_a_1795_, v_a_1796_, v_a_1797_);
if (lean_obj_tag(v___x_1807_) == 0)
{
lean_object* v_a_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1852_; 
v_a_1808_ = lean_ctor_get(v___x_1807_, 0);
v_isSharedCheck_1852_ = !lean_is_exclusive(v___x_1807_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1810_ = v___x_1807_;
v_isShared_1811_ = v_isSharedCheck_1852_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_a_1808_);
lean_dec(v___x_1807_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1852_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v___f_1812_; lean_object* v___x_1813_; lean_object* v_env_1814_; lean_object* v_nextMacroScope_1815_; lean_object* v_ngen_1816_; lean_object* v_auxDeclNGen_1817_; lean_object* v_traceState_1818_; lean_object* v_messages_1819_; lean_object* v_infoState_1820_; lean_object* v_snapshotTasks_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1850_; 
v___f_1812_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___lam__0), 2, 1);
lean_closure_set(v___f_1812_, 0, v_a_1808_);
v___x_1813_ = lean_st_ref_take(v_a_1797_);
v_env_1814_ = lean_ctor_get(v___x_1813_, 0);
v_nextMacroScope_1815_ = lean_ctor_get(v___x_1813_, 1);
v_ngen_1816_ = lean_ctor_get(v___x_1813_, 2);
v_auxDeclNGen_1817_ = lean_ctor_get(v___x_1813_, 3);
v_traceState_1818_ = lean_ctor_get(v___x_1813_, 4);
v_messages_1819_ = lean_ctor_get(v___x_1813_, 6);
v_infoState_1820_ = lean_ctor_get(v___x_1813_, 7);
v_snapshotTasks_1821_ = lean_ctor_get(v___x_1813_, 8);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1813_);
if (v_isSharedCheck_1850_ == 0)
{
lean_object* v_unused_1851_; 
v_unused_1851_ = lean_ctor_get(v___x_1813_, 5);
lean_dec(v_unused_1851_);
v___x_1823_ = v___x_1813_;
v_isShared_1824_ = v_isSharedCheck_1850_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_snapshotTasks_1821_);
lean_inc(v_infoState_1820_);
lean_inc(v_messages_1819_);
lean_inc(v_traceState_1818_);
lean_inc(v_auxDeclNGen_1817_);
lean_inc(v_ngen_1816_);
lean_inc(v_nextMacroScope_1815_);
lean_inc(v_env_1814_);
lean_dec(v___x_1813_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1850_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1828_; 
v___x_1825_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_1792_, v_env_1814_, v___f_1812_);
v___x_1826_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
if (v_isShared_1824_ == 0)
{
lean_ctor_set(v___x_1823_, 5, v___x_1826_);
lean_ctor_set(v___x_1823_, 0, v___x_1825_);
v___x_1828_ = v___x_1823_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v___x_1825_);
lean_ctor_set(v_reuseFailAlloc_1849_, 1, v_nextMacroScope_1815_);
lean_ctor_set(v_reuseFailAlloc_1849_, 2, v_ngen_1816_);
lean_ctor_set(v_reuseFailAlloc_1849_, 3, v_auxDeclNGen_1817_);
lean_ctor_set(v_reuseFailAlloc_1849_, 4, v_traceState_1818_);
lean_ctor_set(v_reuseFailAlloc_1849_, 5, v___x_1826_);
lean_ctor_set(v_reuseFailAlloc_1849_, 6, v_messages_1819_);
lean_ctor_set(v_reuseFailAlloc_1849_, 7, v_infoState_1820_);
lean_ctor_set(v_reuseFailAlloc_1849_, 8, v_snapshotTasks_1821_);
v___x_1828_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v_mctx_1831_; lean_object* v_zetaDeltaFVarIds_1832_; lean_object* v_postponed_1833_; lean_object* v_diag_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1847_; 
v___x_1829_ = lean_st_ref_put(v_a_1797_, v___x_1828_);
v___x_1830_ = lean_st_ref_take(v_a_1795_);
v_mctx_1831_ = lean_ctor_get(v___x_1830_, 0);
v_zetaDeltaFVarIds_1832_ = lean_ctor_get(v___x_1830_, 2);
v_postponed_1833_ = lean_ctor_get(v___x_1830_, 3);
v_diag_1834_ = lean_ctor_get(v___x_1830_, 4);
v_isSharedCheck_1847_ = !lean_is_exclusive(v___x_1830_);
if (v_isSharedCheck_1847_ == 0)
{
lean_object* v_unused_1848_; 
v_unused_1848_ = lean_ctor_get(v___x_1830_, 1);
lean_dec(v_unused_1848_);
v___x_1836_ = v___x_1830_;
v_isShared_1837_ = v_isSharedCheck_1847_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_diag_1834_);
lean_inc(v_postponed_1833_);
lean_inc(v_zetaDeltaFVarIds_1832_);
lean_inc(v_mctx_1831_);
lean_dec(v___x_1830_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1847_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1841_; 
v___x_1838_ = lean_box(0);
v___x_1839_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0);
if (v_isShared_1837_ == 0)
{
lean_ctor_set(v___x_1836_, 1, v___x_1839_);
v___x_1841_ = v___x_1836_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_mctx_1831_);
lean_ctor_set(v_reuseFailAlloc_1846_, 1, v___x_1839_);
lean_ctor_set(v_reuseFailAlloc_1846_, 2, v_zetaDeltaFVarIds_1832_);
lean_ctor_set(v_reuseFailAlloc_1846_, 3, v_postponed_1833_);
lean_ctor_set(v_reuseFailAlloc_1846_, 4, v_diag_1834_);
v___x_1841_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
lean_object* v___x_1842_; lean_object* v___x_1844_; 
v___x_1842_ = lean_st_ref_put(v_a_1795_, v___x_1841_);
if (v_isShared_1811_ == 0)
{
lean_ctor_set(v___x_1810_, 0, v___x_1838_);
v___x_1844_ = v___x_1810_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v___x_1838_);
v___x_1844_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
return v___x_1844_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1860_; 
lean_dec_ref(v_ext_1792_);
v_a_1853_ = lean_ctor_get(v___x_1807_, 0);
v_isSharedCheck_1860_ = !lean_is_exclusive(v___x_1807_);
if (v_isSharedCheck_1860_ == 0)
{
v___x_1855_ = v___x_1807_;
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_a_1853_);
lean_dec(v___x_1807_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1858_; 
if (v_isShared_1856_ == 0)
{
v___x_1858_ = v___x_1855_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v_a_1853_);
v___x_1858_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
return v___x_1858_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___boxed(lean_object* v_ext_1861_, lean_object* v_declName_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_){
_start:
{
lean_object* v_res_1868_; 
v_res_1868_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr(v_ext_1861_, v_declName_1862_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_);
lean_dec(v_a_1866_);
lean_dec_ref(v_a_1865_);
lean_dec(v_a_1864_);
lean_dec_ref(v_a_1863_);
return v_res_1868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___lam__0(lean_object* v_a_1869_, lean_object* v_s_1870_){
_start:
{
lean_object* v_casesTypes_1871_; lean_object* v_extThms_1872_; lean_object* v_funCC_1873_; lean_object* v_ematch_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1881_; 
v_casesTypes_1871_ = lean_ctor_get(v_s_1870_, 0);
v_extThms_1872_ = lean_ctor_get(v_s_1870_, 1);
v_funCC_1873_ = lean_ctor_get(v_s_1870_, 2);
v_ematch_1874_ = lean_ctor_get(v_s_1870_, 3);
v_isSharedCheck_1881_ = !lean_is_exclusive(v_s_1870_);
if (v_isSharedCheck_1881_ == 0)
{
lean_object* v_unused_1882_; 
v_unused_1882_ = lean_ctor_get(v_s_1870_, 4);
lean_dec(v_unused_1882_);
v___x_1876_ = v_s_1870_;
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_ematch_1874_);
lean_inc(v_funCC_1873_);
lean_inc(v_extThms_1872_);
lean_inc(v_casesTypes_1871_);
lean_dec(v_s_1870_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1879_; 
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 4, v_a_1869_);
v___x_1879_ = v___x_1876_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_casesTypes_1871_);
lean_ctor_set(v_reuseFailAlloc_1880_, 1, v_extThms_1872_);
lean_ctor_set(v_reuseFailAlloc_1880_, 2, v_funCC_1873_);
lean_ctor_set(v_reuseFailAlloc_1880_, 3, v_ematch_1874_);
lean_ctor_set(v_reuseFailAlloc_1880_, 4, v_a_1869_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr(lean_object* v_ext_1883_, lean_object* v_declName_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_, lean_object* v_a_1887_, lean_object* v_a_1888_){
_start:
{
lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v_ext_1892_; lean_object* v_toEnvExtension_1893_; lean_object* v_env_1894_; lean_object* v_asyncMode_1895_; lean_object* v___x_1896_; lean_object* v_inj_1897_; lean_object* v___x_1898_; 
v___x_1890_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_1891_ = lean_st_ref_get(v_a_1888_);
v_ext_1892_ = lean_ctor_get(v_ext_1883_, 1);
v_toEnvExtension_1893_ = lean_ctor_get(v_ext_1892_, 0);
v_env_1894_ = lean_ctor_get(v___x_1891_, 0);
lean_inc_ref(v_env_1894_);
lean_dec(v___x_1891_);
v_asyncMode_1895_ = lean_ctor_get(v_toEnvExtension_1893_, 2);
v___x_1896_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1890_, v_ext_1883_, v_env_1894_, v_asyncMode_1895_);
v_inj_1897_ = lean_ctor_get(v___x_1896_, 4);
lean_inc_ref(v_inj_1897_);
lean_dec(v___x_1896_);
v___x_1898_ = l_Lean_Meta_Grind_Theorems_eraseDecl___redArg(v_inj_1897_, v_declName_1884_, v_a_1885_, v_a_1886_, v_a_1887_, v_a_1888_);
if (lean_obj_tag(v___x_1898_) == 0)
{
lean_object* v_a_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1943_; 
v_a_1899_ = lean_ctor_get(v___x_1898_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1898_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1901_ = v___x_1898_;
v_isShared_1902_ = v_isSharedCheck_1943_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_a_1899_);
lean_dec(v___x_1898_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1943_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___f_1903_; lean_object* v___x_1904_; lean_object* v_env_1905_; lean_object* v_nextMacroScope_1906_; lean_object* v_ngen_1907_; lean_object* v_auxDeclNGen_1908_; lean_object* v_traceState_1909_; lean_object* v_messages_1910_; lean_object* v_infoState_1911_; lean_object* v_snapshotTasks_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1941_; 
v___f_1903_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___lam__0), 2, 1);
lean_closure_set(v___f_1903_, 0, v_a_1899_);
v___x_1904_ = lean_st_ref_take(v_a_1888_);
v_env_1905_ = lean_ctor_get(v___x_1904_, 0);
v_nextMacroScope_1906_ = lean_ctor_get(v___x_1904_, 1);
v_ngen_1907_ = lean_ctor_get(v___x_1904_, 2);
v_auxDeclNGen_1908_ = lean_ctor_get(v___x_1904_, 3);
v_traceState_1909_ = lean_ctor_get(v___x_1904_, 4);
v_messages_1910_ = lean_ctor_get(v___x_1904_, 6);
v_infoState_1911_ = lean_ctor_get(v___x_1904_, 7);
v_snapshotTasks_1912_ = lean_ctor_get(v___x_1904_, 8);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1904_);
if (v_isSharedCheck_1941_ == 0)
{
lean_object* v_unused_1942_; 
v_unused_1942_ = lean_ctor_get(v___x_1904_, 5);
lean_dec(v_unused_1942_);
v___x_1914_ = v___x_1904_;
v_isShared_1915_ = v_isSharedCheck_1941_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_snapshotTasks_1912_);
lean_inc(v_infoState_1911_);
lean_inc(v_messages_1910_);
lean_inc(v_traceState_1909_);
lean_inc(v_auxDeclNGen_1908_);
lean_inc(v_ngen_1907_);
lean_inc(v_nextMacroScope_1906_);
lean_inc(v_env_1905_);
lean_dec(v___x_1904_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1941_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1919_; 
v___x_1916_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_1883_, v_env_1905_, v___f_1903_);
v___x_1917_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
if (v_isShared_1915_ == 0)
{
lean_ctor_set(v___x_1914_, 5, v___x_1917_);
lean_ctor_set(v___x_1914_, 0, v___x_1916_);
v___x_1919_ = v___x_1914_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___x_1916_);
lean_ctor_set(v_reuseFailAlloc_1940_, 1, v_nextMacroScope_1906_);
lean_ctor_set(v_reuseFailAlloc_1940_, 2, v_ngen_1907_);
lean_ctor_set(v_reuseFailAlloc_1940_, 3, v_auxDeclNGen_1908_);
lean_ctor_set(v_reuseFailAlloc_1940_, 4, v_traceState_1909_);
lean_ctor_set(v_reuseFailAlloc_1940_, 5, v___x_1917_);
lean_ctor_set(v_reuseFailAlloc_1940_, 6, v_messages_1910_);
lean_ctor_set(v_reuseFailAlloc_1940_, 7, v_infoState_1911_);
lean_ctor_set(v_reuseFailAlloc_1940_, 8, v_snapshotTasks_1912_);
v___x_1919_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v_mctx_1922_; lean_object* v_zetaDeltaFVarIds_1923_; lean_object* v_postponed_1924_; lean_object* v_diag_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1938_; 
v___x_1920_ = lean_st_ref_put(v_a_1888_, v___x_1919_);
v___x_1921_ = lean_st_ref_take(v_a_1886_);
v_mctx_1922_ = lean_ctor_get(v___x_1921_, 0);
v_zetaDeltaFVarIds_1923_ = lean_ctor_get(v___x_1921_, 2);
v_postponed_1924_ = lean_ctor_get(v___x_1921_, 3);
v_diag_1925_ = lean_ctor_get(v___x_1921_, 4);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1921_);
if (v_isSharedCheck_1938_ == 0)
{
lean_object* v_unused_1939_; 
v_unused_1939_ = lean_ctor_get(v___x_1921_, 1);
lean_dec(v_unused_1939_);
v___x_1927_ = v___x_1921_;
v_isShared_1928_ = v_isSharedCheck_1938_;
goto v_resetjp_1926_;
}
else
{
lean_inc(v_diag_1925_);
lean_inc(v_postponed_1924_);
lean_inc(v_zetaDeltaFVarIds_1923_);
lean_inc(v_mctx_1922_);
lean_dec(v___x_1921_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1938_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1932_; 
v___x_1929_ = lean_box(0);
v___x_1930_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0);
if (v_isShared_1928_ == 0)
{
lean_ctor_set(v___x_1927_, 1, v___x_1930_);
v___x_1932_ = v___x_1927_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v_mctx_1922_);
lean_ctor_set(v_reuseFailAlloc_1937_, 1, v___x_1930_);
lean_ctor_set(v_reuseFailAlloc_1937_, 2, v_zetaDeltaFVarIds_1923_);
lean_ctor_set(v_reuseFailAlloc_1937_, 3, v_postponed_1924_);
lean_ctor_set(v_reuseFailAlloc_1937_, 4, v_diag_1925_);
v___x_1932_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
lean_object* v___x_1933_; lean_object* v___x_1935_; 
v___x_1933_ = lean_st_ref_put(v_a_1886_, v___x_1932_);
if (v_isShared_1902_ == 0)
{
lean_ctor_set(v___x_1901_, 0, v___x_1929_);
v___x_1935_ = v___x_1901_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v___x_1929_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1951_; 
lean_dec_ref(v_ext_1883_);
v_a_1944_ = lean_ctor_get(v___x_1898_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1898_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1946_ = v___x_1898_;
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_a_1944_);
lean_dec(v___x_1898_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1949_; 
if (v_isShared_1947_ == 0)
{
v___x_1949_ = v___x_1946_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_a_1944_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___boxed(lean_object* v_ext_1952_, lean_object* v_declName_1953_, lean_object* v_a_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_){
_start:
{
lean_object* v_res_1959_; 
v_res_1959_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr(v_ext_1952_, v_declName_1953_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_);
lean_dec(v_a_1957_);
lean_dec_ref(v_a_1956_);
lean_dec(v_a_1955_);
lean_dec_ref(v_a_1954_);
return v_res_1959_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1960_, lean_object* v_i_1961_, lean_object* v_k_1962_){
_start:
{
lean_object* v___x_1963_; uint8_t v___x_1964_; 
v___x_1963_ = lean_array_get_size(v_keys_1960_);
v___x_1964_ = lean_nat_dec_lt(v_i_1961_, v___x_1963_);
if (v___x_1964_ == 0)
{
lean_dec(v_i_1961_);
return v___x_1964_;
}
else
{
lean_object* v_k_x27_1965_; uint8_t v___x_1966_; 
v_k_x27_1965_ = lean_array_fget_borrowed(v_keys_1960_, v_i_1961_);
v___x_1966_ = lean_name_eq(v_k_1962_, v_k_x27_1965_);
if (v___x_1966_ == 0)
{
lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1967_ = lean_unsigned_to_nat(1u);
v___x_1968_ = lean_nat_add(v_i_1961_, v___x_1967_);
lean_dec(v_i_1961_);
v_i_1961_ = v___x_1968_;
goto _start;
}
else
{
lean_dec(v_i_1961_);
return v___x_1964_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1970_, lean_object* v_i_1971_, lean_object* v_k_1972_){
_start:
{
uint8_t v_res_1973_; lean_object* v_r_1974_; 
v_res_1973_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(v_keys_1970_, v_i_1971_, v_k_1972_);
lean_dec(v_k_1972_);
lean_dec_ref(v_keys_1970_);
v_r_1974_ = lean_box(v_res_1973_);
return v_r_1974_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(lean_object* v_x_1975_, size_t v_x_1976_, lean_object* v_x_1977_){
_start:
{
if (lean_obj_tag(v_x_1975_) == 0)
{
lean_object* v_es_1978_; lean_object* v___x_1979_; size_t v___x_1980_; size_t v___x_1981_; lean_object* v_j_1982_; lean_object* v___x_1983_; 
v_es_1978_ = lean_ctor_get(v_x_1975_, 0);
v___x_1979_ = lean_box(2);
v___x_1980_ = ((size_t)31ULL);
v___x_1981_ = lean_usize_land(v_x_1976_, v___x_1980_);
v_j_1982_ = lean_usize_to_nat(v___x_1981_);
v___x_1983_ = lean_array_get_borrowed(v___x_1979_, v_es_1978_, v_j_1982_);
lean_dec(v_j_1982_);
switch(lean_obj_tag(v___x_1983_))
{
case 0:
{
lean_object* v_key_1984_; uint8_t v___x_1985_; 
v_key_1984_ = lean_ctor_get(v___x_1983_, 0);
v___x_1985_ = lean_name_eq(v_x_1977_, v_key_1984_);
return v___x_1985_;
}
case 1:
{
lean_object* v_node_1986_; size_t v___x_1987_; size_t v___x_1988_; 
v_node_1986_ = lean_ctor_get(v___x_1983_, 0);
v___x_1987_ = ((size_t)5ULL);
v___x_1988_ = lean_usize_shift_right(v_x_1976_, v___x_1987_);
v_x_1975_ = v_node_1986_;
v_x_1976_ = v___x_1988_;
goto _start;
}
default: 
{
uint8_t v___x_1990_; 
v___x_1990_ = 0;
return v___x_1990_;
}
}
}
else
{
lean_object* v_ks_1991_; lean_object* v___x_1992_; uint8_t v___x_1993_; 
v_ks_1991_ = lean_ctor_get(v_x_1975_, 0);
v___x_1992_ = lean_unsigned_to_nat(0u);
v___x_1993_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(v_ks_1991_, v___x_1992_, v_x_1977_);
return v___x_1993_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___boxed(lean_object* v_x_1994_, lean_object* v_x_1995_, lean_object* v_x_1996_){
_start:
{
size_t v_x_328__boxed_1997_; uint8_t v_res_1998_; lean_object* v_r_1999_; 
v_x_328__boxed_1997_ = lean_unbox_usize(v_x_1995_);
lean_dec(v_x_1995_);
v_res_1998_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(v_x_1994_, v_x_328__boxed_1997_, v_x_1996_);
lean_dec(v_x_1996_);
lean_dec_ref(v_x_1994_);
v_r_1999_ = lean_box(v_res_1998_);
return v_r_1999_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(lean_object* v_x_2000_, lean_object* v_x_2001_){
_start:
{
uint64_t v___y_2003_; lean_object* v___x_2006_; 
v___x_2006_ = l_unsafeCast___redArg(v_x_2001_);
if (lean_obj_tag(v___x_2006_) == 0)
{
uint64_t v___x_2007_; 
v___x_2007_ = 1723ULL;
v___y_2003_ = v___x_2007_;
goto v___jp_2002_;
}
else
{
uint64_t v_hash_2008_; 
v_hash_2008_ = lean_ctor_get_uint64(v___x_2006_, sizeof(void*)*2);
lean_dec(v___x_2006_);
v___y_2003_ = v_hash_2008_;
goto v___jp_2002_;
}
v___jp_2002_:
{
size_t v___x_2004_; uint8_t v___x_2005_; 
v___x_2004_ = lean_uint64_to_usize(v___y_2003_);
v___x_2005_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(v_x_2000_, v___x_2004_, v_x_2001_);
return v___x_2005_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___boxed(lean_object* v_x_2009_, lean_object* v_x_2010_){
_start:
{
uint8_t v_res_2011_; lean_object* v_r_2012_; 
v_res_2011_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(v_x_2009_, v_x_2010_);
lean_dec(v_x_2010_);
lean_dec_ref(v_x_2009_);
v_r_2012_ = lean_box(v_res_2011_);
return v_r_2012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(lean_object* v_ext_2013_, lean_object* v_declName_2014_, lean_object* v_a_2015_){
_start:
{
lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v_ext_2019_; lean_object* v_toEnvExtension_2020_; lean_object* v_env_2021_; lean_object* v_asyncMode_2022_; lean_object* v___x_2023_; lean_object* v_extThms_2024_; uint8_t v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; 
v___x_2017_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_2018_ = lean_st_ref_get(v_a_2015_);
v_ext_2019_ = lean_ctor_get(v_ext_2013_, 1);
v_toEnvExtension_2020_ = lean_ctor_get(v_ext_2019_, 0);
v_env_2021_ = lean_ctor_get(v___x_2018_, 0);
lean_inc_ref(v_env_2021_);
lean_dec(v___x_2018_);
v_asyncMode_2022_ = lean_ctor_get(v_toEnvExtension_2020_, 2);
v___x_2023_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2017_, v_ext_2013_, v_env_2021_, v_asyncMode_2022_);
v_extThms_2024_ = lean_ctor_get(v___x_2023_, 1);
lean_inc_ref(v_extThms_2024_);
lean_dec(v___x_2023_);
v___x_2025_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(v_extThms_2024_, v_declName_2014_);
lean_dec_ref(v_extThms_2024_);
v___x_2026_ = lean_box(v___x_2025_);
v___x_2027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2026_);
return v___x_2027_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg___boxed(lean_object* v_ext_2028_, lean_object* v_declName_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(v_ext_2028_, v_declName_2029_, v_a_2030_);
lean_dec(v_a_2030_);
lean_dec(v_declName_2029_);
lean_dec_ref(v_ext_2028_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem(lean_object* v_ext_2033_, lean_object* v_declName_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_){
_start:
{
lean_object* v___x_2038_; 
v___x_2038_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(v_ext_2033_, v_declName_2034_, v_a_2036_);
return v___x_2038_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___boxed(lean_object* v_ext_2039_, lean_object* v_declName_2040_, lean_object* v_a_2041_, lean_object* v_a_2042_, lean_object* v_a_2043_){
_start:
{
lean_object* v_res_2044_; 
v_res_2044_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem(v_ext_2039_, v_declName_2040_, v_a_2041_, v_a_2042_);
lean_dec(v_a_2042_);
lean_dec_ref(v_a_2041_);
lean_dec(v_declName_2040_);
lean_dec_ref(v_ext_2039_);
return v_res_2044_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0(lean_object* v_00_u03b2_2045_, lean_object* v_x_2046_, lean_object* v_x_2047_){
_start:
{
uint8_t v___x_2048_; 
v___x_2048_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(v_x_2046_, v_x_2047_);
return v___x_2048_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___boxed(lean_object* v_00_u03b2_2049_, lean_object* v_x_2050_, lean_object* v_x_2051_){
_start:
{
uint8_t v_res_2052_; lean_object* v_r_2053_; 
v_res_2052_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0(v_00_u03b2_2049_, v_x_2050_, v_x_2051_);
lean_dec(v_x_2051_);
lean_dec_ref(v_x_2050_);
v_r_2053_ = lean_box(v_res_2052_);
return v_r_2053_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0(lean_object* v_00_u03b2_2054_, lean_object* v_x_2055_, size_t v_x_2056_, lean_object* v_x_2057_){
_start:
{
uint8_t v___x_2058_; 
v___x_2058_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(v_x_2055_, v_x_2056_, v_x_2057_);
return v___x_2058_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2059_, lean_object* v_x_2060_, lean_object* v_x_2061_, lean_object* v_x_2062_){
_start:
{
size_t v_x_415__boxed_2063_; uint8_t v_res_2064_; lean_object* v_r_2065_; 
v_x_415__boxed_2063_ = lean_unbox_usize(v_x_2061_);
lean_dec(v_x_2061_);
v_res_2064_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0(v_00_u03b2_2059_, v_x_2060_, v_x_415__boxed_2063_, v_x_2062_);
lean_dec(v_x_2062_);
lean_dec_ref(v_x_2060_);
v_r_2065_ = lean_box(v_res_2064_);
return v_r_2065_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2066_, lean_object* v_keys_2067_, lean_object* v_vals_2068_, lean_object* v_heq_2069_, lean_object* v_i_2070_, lean_object* v_k_2071_){
_start:
{
uint8_t v___x_2072_; 
v___x_2072_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(v_keys_2067_, v_i_2070_, v_k_2071_);
return v___x_2072_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2073_, lean_object* v_keys_2074_, lean_object* v_vals_2075_, lean_object* v_heq_2076_, lean_object* v_i_2077_, lean_object* v_k_2078_){
_start:
{
uint8_t v_res_2079_; lean_object* v_r_2080_; 
v_res_2079_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1(v_00_u03b2_2073_, v_keys_2074_, v_vals_2075_, v_heq_2076_, v_i_2077_, v_k_2078_);
lean_dec(v_k_2078_);
lean_dec_ref(v_vals_2075_);
lean_dec_ref(v_keys_2074_);
v_r_2080_ = lean_box(v_res_2079_);
return v_r_2080_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(lean_object* v_ext_2081_, lean_object* v_declName_2082_, lean_object* v_a_2083_){
_start:
{
lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v_ext_2087_; lean_object* v_toEnvExtension_2088_; lean_object* v_env_2089_; lean_object* v_asyncMode_2090_; lean_object* v___x_2091_; lean_object* v_inj_2092_; lean_object* v___x_2093_; uint8_t v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
v___x_2085_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_2086_ = lean_st_ref_get(v_a_2083_);
v_ext_2087_ = lean_ctor_get(v_ext_2081_, 1);
v_toEnvExtension_2088_ = lean_ctor_get(v_ext_2087_, 0);
v_env_2089_ = lean_ctor_get(v___x_2086_, 0);
lean_inc_ref(v_env_2089_);
lean_dec(v___x_2086_);
v_asyncMode_2090_ = lean_ctor_get(v_toEnvExtension_2088_, 2);
v___x_2091_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2085_, v_ext_2081_, v_env_2089_, v_asyncMode_2090_);
v_inj_2092_ = lean_ctor_get(v___x_2091_, 4);
lean_inc_ref(v_inj_2092_);
lean_dec(v___x_2091_);
v___x_2093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2093_, 0, v_declName_2082_);
v___x_2094_ = l_Lean_Meta_Grind_Theorems_contains___redArg(v_inj_2092_, v___x_2093_);
lean_dec_ref_known(v___x_2093_, 1);
lean_dec_ref(v_inj_2092_);
v___x_2095_ = lean_box(v___x_2094_);
v___x_2096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2095_);
return v___x_2096_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg___boxed(lean_object* v_ext_2097_, lean_object* v_declName_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_){
_start:
{
lean_object* v_res_2101_; 
v_res_2101_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(v_ext_2097_, v_declName_2098_, v_a_2099_);
lean_dec(v_a_2099_);
lean_dec_ref(v_ext_2097_);
return v_res_2101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem(lean_object* v_ext_2102_, lean_object* v_declName_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_){
_start:
{
lean_object* v___x_2107_; 
v___x_2107_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(v_ext_2102_, v_declName_2103_, v_a_2105_);
return v___x_2107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___boxed(lean_object* v_ext_2108_, lean_object* v_declName_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_){
_start:
{
lean_object* v_res_2113_; 
v_res_2113_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem(v_ext_2108_, v_declName_2109_, v_a_2110_, v_a_2111_);
lean_dec(v_a_2111_);
lean_dec_ref(v_a_2110_);
lean_dec_ref(v_ext_2108_);
return v_res_2113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(lean_object* v_ext_2114_, lean_object* v_declName_2115_, lean_object* v_a_2116_){
_start:
{
lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v_ext_2120_; lean_object* v_toEnvExtension_2121_; lean_object* v_env_2122_; lean_object* v_asyncMode_2123_; lean_object* v___x_2124_; lean_object* v_funCC_2125_; uint8_t v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2118_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_2119_ = lean_st_ref_get(v_a_2116_);
v_ext_2120_ = lean_ctor_get(v_ext_2114_, 1);
v_toEnvExtension_2121_ = lean_ctor_get(v_ext_2120_, 0);
v_env_2122_ = lean_ctor_get(v___x_2119_, 0);
lean_inc_ref(v_env_2122_);
lean_dec(v___x_2119_);
v_asyncMode_2123_ = lean_ctor_get(v_toEnvExtension_2121_, 2);
v___x_2124_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2118_, v_ext_2114_, v_env_2122_, v_asyncMode_2123_);
v_funCC_2125_ = lean_ctor_get(v___x_2124_, 2);
lean_inc(v_funCC_2125_);
lean_dec(v___x_2124_);
v___x_2126_ = l_Lean_NameSet_contains(v_funCC_2125_, v_declName_2115_);
lean_dec(v_funCC_2125_);
v___x_2127_ = lean_box(v___x_2126_);
v___x_2128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2128_, 0, v___x_2127_);
return v___x_2128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg___boxed(lean_object* v_ext_2129_, lean_object* v_declName_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_){
_start:
{
lean_object* v_res_2133_; 
v_res_2133_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(v_ext_2129_, v_declName_2130_, v_a_2131_);
lean_dec(v_a_2131_);
lean_dec(v_declName_2130_);
lean_dec_ref(v_ext_2129_);
return v_res_2133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr(lean_object* v_ext_2134_, lean_object* v_declName_2135_, lean_object* v_a_2136_, lean_object* v_a_2137_){
_start:
{
lean_object* v___x_2139_; 
v___x_2139_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(v_ext_2134_, v_declName_2135_, v_a_2137_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___boxed(lean_object* v_ext_2140_, lean_object* v_declName_2141_, lean_object* v_a_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_){
_start:
{
lean_object* v_res_2145_; 
v_res_2145_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr(v_ext_2140_, v_declName_2141_, v_a_2142_, v_a_2143_);
lean_dec(v_a_2143_);
lean_dec_ref(v_a_2142_);
lean_dec(v_declName_2141_);
lean_dec_ref(v_ext_2140_);
return v_res_2145_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9(void){
_start:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; 
v___x_2169_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7));
v___x_2170_ = l_Lean_mkAtom(v___x_2169_);
return v___x_2170_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10(void){
_start:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; 
v___x_2171_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9);
v___x_2172_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_2173_ = lean_array_push(v___x_2172_, v___x_2171_);
return v___x_2173_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15(void){
_start:
{
lean_object* v___x_2182_; lean_object* v___x_2183_; 
v___x_2182_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__14));
v___x_2183_ = l_Lean_mkAtom(v___x_2182_);
return v___x_2183_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16(void){
_start:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; 
v___x_2184_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15);
v___x_2185_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_2186_ = lean_array_push(v___x_2185_, v___x_2184_);
return v___x_2186_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17(void){
_start:
{
lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; 
v___x_2187_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16);
v___x_2188_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13));
v___x_2189_ = lean_box(2);
v___x_2190_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2190_, 0, v___x_2189_);
lean_ctor_set(v___x_2190_, 1, v___x_2188_);
lean_ctor_set(v___x_2190_, 2, v___x_2187_);
return v___x_2190_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18(void){
_start:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; 
v___x_2191_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17);
v___x_2192_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10);
v___x_2193_ = lean_array_push(v___x_2192_, v___x_2191_);
return v___x_2193_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19(void){
_start:
{
lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2194_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18);
v___x_2195_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8));
v___x_2196_ = lean_box(2);
v___x_2197_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2196_);
lean_ctor_set(v___x_2197_, 1, v___x_2195_);
lean_ctor_set(v___x_2197_, 2, v___x_2194_);
return v___x_2197_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20(void){
_start:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v___x_2198_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19);
v___x_2199_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_2200_ = lean_array_push(v___x_2199_, v___x_2198_);
return v___x_2200_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21(void){
_start:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2201_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20);
v___x_2202_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__6));
v___x_2203_ = lean_box(2);
v___x_2204_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2204_, 0, v___x_2203_);
lean_ctor_set(v___x_2204_, 1, v___x_2202_);
lean_ctor_set(v___x_2204_, 2, v___x_2201_);
return v___x_2204_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22(void){
_start:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2205_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21);
v___x_2206_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_2207_ = lean_array_push(v___x_2206_, v___x_2205_);
return v___x_2207_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23(void){
_start:
{
lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; 
v___x_2208_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22);
v___x_2209_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4));
v___x_2210_ = lean_box(2);
v___x_2211_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2211_, 0, v___x_2210_);
lean_ctor_set(v___x_2211_, 1, v___x_2209_);
lean_ctor_set(v___x_2211_, 2, v___x_2208_);
return v___x_2211_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24(void){
_start:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; 
v___x_2212_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23);
v___x_2213_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_2214_ = lean_array_push(v___x_2213_, v___x_2212_);
return v___x_2214_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25(void){
_start:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; 
v___x_2215_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24);
v___x_2216_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1));
v___x_2217_ = lean_box(2);
v___x_2218_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2217_);
lean_ctor_set(v___x_2218_, 1, v___x_2216_);
lean_ctor_set(v___x_2218_, 2, v___x_2215_);
return v___x_2218_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1(void){
_start:
{
lean_object* v___x_2219_; 
v___x_2219_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25);
return v___x_2219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0(lean_object* v_declName_2220_, lean_object* v_ext_2221_, lean_object* v_____r_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_){
_start:
{
uint8_t v___x_2228_; lean_object* v___x_2229_; 
v___x_2228_ = 0;
lean_inc(v_declName_2220_);
v___x_2229_ = l_Lean_Meta_Grind_isCasesAttrCandidate(v_declName_2220_, v___x_2228_, v___y_2225_, v___y_2226_);
if (lean_obj_tag(v___x_2229_) == 0)
{
lean_object* v_a_2230_; uint8_t v___x_2231_; 
v_a_2230_ = lean_ctor_get(v___x_2229_, 0);
lean_inc(v_a_2230_);
lean_dec_ref_known(v___x_2229_, 1);
v___x_2231_ = lean_unbox(v_a_2230_);
lean_dec(v_a_2230_);
if (v___x_2231_ == 0)
{
lean_object* v___x_2232_; lean_object* v_a_2233_; uint8_t v___x_2234_; 
v___x_2232_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(v_ext_2221_, v_declName_2220_, v___y_2226_);
v_a_2233_ = lean_ctor_get(v___x_2232_, 0);
lean_inc(v_a_2233_);
lean_dec_ref(v___x_2232_);
v___x_2234_ = lean_unbox(v_a_2233_);
lean_dec(v_a_2233_);
if (v___x_2234_ == 0)
{
lean_object* v___x_2235_; lean_object* v_a_2236_; uint8_t v___x_2237_; 
lean_inc(v_declName_2220_);
v___x_2235_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(v_ext_2221_, v_declName_2220_, v___y_2226_);
v_a_2236_ = lean_ctor_get(v___x_2235_, 0);
lean_inc(v_a_2236_);
lean_dec_ref(v___x_2235_);
v___x_2237_ = lean_unbox(v_a_2236_);
lean_dec(v_a_2236_);
if (v___x_2237_ == 0)
{
lean_object* v___x_2238_; lean_object* v_a_2239_; uint8_t v___x_2240_; 
v___x_2238_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(v_ext_2221_, v_declName_2220_, v___y_2226_);
v_a_2239_ = lean_ctor_get(v___x_2238_, 0);
lean_inc(v_a_2239_);
lean_dec_ref(v___x_2238_);
v___x_2240_ = lean_unbox(v_a_2239_);
lean_dec(v_a_2239_);
if (v___x_2240_ == 0)
{
lean_object* v___x_2241_; 
v___x_2241_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr(v_ext_2221_, v_declName_2220_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
return v___x_2241_;
}
else
{
lean_object* v___x_2242_; 
v___x_2242_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr(v_ext_2221_, v_declName_2220_, v___y_2225_, v___y_2226_);
return v___x_2242_;
}
}
else
{
lean_object* v___x_2243_; 
v___x_2243_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr(v_ext_2221_, v_declName_2220_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
return v___x_2243_;
}
}
else
{
lean_object* v___x_2244_; 
v___x_2244_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr(v_ext_2221_, v_declName_2220_, v___y_2225_, v___y_2226_);
return v___x_2244_;
}
}
else
{
lean_object* v___x_2245_; 
v___x_2245_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr(v_ext_2221_, v_declName_2220_, v___y_2225_, v___y_2226_);
return v___x_2245_;
}
}
else
{
lean_object* v_a_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2253_; 
lean_dec_ref(v_ext_2221_);
lean_dec(v_declName_2220_);
v_a_2246_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2253_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2253_ == 0)
{
v___x_2248_ = v___x_2229_;
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_a_2246_);
lean_dec(v___x_2229_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v___x_2251_; 
if (v_isShared_2249_ == 0)
{
v___x_2251_ = v___x_2248_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v_a_2246_);
v___x_2251_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
return v___x_2251_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0___boxed(lean_object* v_declName_2254_, lean_object* v_ext_2255_, lean_object* v_____r_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_){
_start:
{
lean_object* v_res_2262_; 
v_res_2262_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0(v_declName_2254_, v_ext_2255_, v_____r_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
lean_dec(v___y_2260_);
lean_dec_ref(v___y_2259_);
lean_dec(v___y_2258_);
lean_dec_ref(v___y_2257_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0(lean_object* v_msgData_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_){
_start:
{
lean_object* v___x_2269_; lean_object* v_env_2270_; lean_object* v___x_2271_; lean_object* v_toCold_2272_; lean_object* v_mctx_2273_; lean_object* v_lctx_2274_; lean_object* v_options_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2269_ = lean_st_ref_get(v___y_2267_);
v_env_2270_ = lean_ctor_get(v___x_2269_, 0);
lean_inc_ref(v_env_2270_);
lean_dec(v___x_2269_);
v___x_2271_ = lean_st_ref_get(v___y_2265_);
v_toCold_2272_ = lean_ctor_get(v___y_2266_, 0);
v_mctx_2273_ = lean_ctor_get(v___x_2271_, 0);
lean_inc_ref(v_mctx_2273_);
lean_dec(v___x_2271_);
v_lctx_2274_ = lean_ctor_get(v___y_2264_, 2);
v_options_2275_ = lean_ctor_get(v_toCold_2272_, 2);
lean_inc_ref(v_options_2275_);
lean_inc_ref(v_lctx_2274_);
v___x_2276_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2276_, 0, v_env_2270_);
lean_ctor_set(v___x_2276_, 1, v_mctx_2273_);
lean_ctor_set(v___x_2276_, 2, v_lctx_2274_);
lean_ctor_set(v___x_2276_, 3, v_options_2275_);
v___x_2277_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2277_, 0, v___x_2276_);
lean_ctor_set(v___x_2277_, 1, v_msgData_2263_);
v___x_2278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2277_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0___boxed(lean_object* v_msgData_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_){
_start:
{
lean_object* v_res_2285_; 
v_res_2285_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0(v_msgData_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
return v_res_2285_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(lean_object* v_msg_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_){
_start:
{
lean_object* v_ref_2292_; lean_object* v___x_2293_; lean_object* v_a_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2302_; 
v_ref_2292_ = lean_ctor_get(v___y_2289_, 2);
v___x_2293_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0(v_msg_2286_, v___y_2287_, v___y_2288_, v___y_2289_, v___y_2290_);
v_a_2294_ = lean_ctor_get(v___x_2293_, 0);
v_isSharedCheck_2302_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2302_ == 0)
{
v___x_2296_ = v___x_2293_;
v_isShared_2297_ = v_isSharedCheck_2302_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_a_2294_);
lean_dec(v___x_2293_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2302_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
lean_object* v___x_2298_; lean_object* v___x_2300_; 
lean_inc(v_ref_2292_);
v___x_2298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2298_, 0, v_ref_2292_);
lean_ctor_set(v___x_2298_, 1, v_a_2294_);
if (v_isShared_2297_ == 0)
{
lean_ctor_set_tag(v___x_2296_, 1);
lean_ctor_set(v___x_2296_, 0, v___x_2298_);
v___x_2300_ = v___x_2296_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2301_; 
v_reuseFailAlloc_2301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2301_, 0, v___x_2298_);
v___x_2300_ = v_reuseFailAlloc_2301_;
goto v_reusejp_2299_;
}
v_reusejp_2299_:
{
return v___x_2300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg___boxed(lean_object* v_msg_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_){
_start:
{
lean_object* v_res_2309_; 
v_res_2309_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v_msg_2303_, v___y_2304_, v___y_2305_, v___y_2306_, v___y_2307_);
lean_dec(v___y_2307_);
lean_dec_ref(v___y_2306_);
lean_dec(v___y_2305_);
lean_dec_ref(v___y_2304_);
return v_res_2309_;
}
}
static uint64_t _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2316_; uint64_t v___x_2317_; 
v___x_2316_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0));
v___x_2317_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2316_);
return v___x_2317_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2(void){
_start:
{
uint64_t v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2318_ = lean_uint64_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1);
v___x_2319_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0));
v___x_2320_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2320_, 0, v___x_2319_);
lean_ctor_set_uint64(v___x_2320_, sizeof(void*)*1, v___x_2318_);
return v___x_2320_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2321_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0);
v___x_2322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2322_, 0, v___x_2321_);
return v___x_2322_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4(void){
_start:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2323_ = lean_box(1);
v___x_2324_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4);
v___x_2325_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3);
v___x_2326_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2326_, 0, v___x_2325_);
lean_ctor_set(v___x_2326_, 1, v___x_2324_);
lean_ctor_set(v___x_2326_, 2, v___x_2323_);
return v___x_2326_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6(void){
_start:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2329_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3);
v___x_2330_ = lean_unsigned_to_nat(0u);
v___x_2331_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2331_, 0, v___x_2330_);
lean_ctor_set(v___x_2331_, 1, v___x_2330_);
lean_ctor_set(v___x_2331_, 2, v___x_2330_);
lean_ctor_set(v___x_2331_, 3, v___x_2330_);
lean_ctor_set(v___x_2331_, 4, v___x_2329_);
lean_ctor_set(v___x_2331_, 5, v___x_2329_);
lean_ctor_set(v___x_2331_, 6, v___x_2329_);
lean_ctor_set(v___x_2331_, 7, v___x_2329_);
lean_ctor_set(v___x_2331_, 8, v___x_2329_);
lean_ctor_set(v___x_2331_, 9, v___x_2329_);
lean_ctor_set(v___x_2331_, 10, v___x_2329_);
return v___x_2331_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7(void){
_start:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; 
v___x_2332_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3);
v___x_2333_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2332_);
lean_ctor_set(v___x_2333_, 1, v___x_2332_);
lean_ctor_set(v___x_2333_, 2, v___x_2332_);
lean_ctor_set(v___x_2333_, 3, v___x_2332_);
lean_ctor_set(v___x_2333_, 4, v___x_2332_);
lean_ctor_set(v___x_2333_, 5, v___x_2332_);
return v___x_2333_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8(void){
_start:
{
lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2334_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3);
v___x_2335_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2334_);
lean_ctor_set(v___x_2335_, 1, v___x_2334_);
lean_ctor_set(v___x_2335_, 2, v___x_2334_);
lean_ctor_set(v___x_2335_, 3, v___x_2334_);
lean_ctor_set(v___x_2335_, 4, v___x_2334_);
return v___x_2335_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10(void){
_start:
{
lean_object* v___x_2337_; lean_object* v___x_2338_; 
v___x_2337_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9));
v___x_2338_ = l_Lean_stringToMessageData(v___x_2337_);
return v___x_2338_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12(void){
_start:
{
lean_object* v___x_2340_; lean_object* v___x_2341_; 
v___x_2340_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11));
v___x_2341_ = l_Lean_stringToMessageData(v___x_2340_);
return v___x_2341_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14(void){
_start:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2343_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13));
v___x_2344_ = l_Lean_stringToMessageData(v___x_2343_);
return v___x_2344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1(lean_object* v_ext_2345_, lean_object* v___x_2346_, uint8_t v_showInfo_2347_, lean_object* v_attrName_2348_, lean_object* v_declName_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_){
_start:
{
uint8_t v___x_2353_; uint8_t v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___y_2368_; 
v___x_2353_ = 1;
v___x_2354_ = 0;
v___x_2355_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2);
v___x_2356_ = lean_unsigned_to_nat(0u);
v___x_2357_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4);
v___x_2358_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4);
v___x_2359_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5));
v___x_2360_ = lean_box(0);
lean_inc(v___x_2346_);
v___x_2361_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2361_, 0, v___x_2355_);
lean_ctor_set(v___x_2361_, 1, v___x_2346_);
lean_ctor_set(v___x_2361_, 2, v___x_2358_);
lean_ctor_set(v___x_2361_, 3, v___x_2359_);
lean_ctor_set(v___x_2361_, 4, v___x_2360_);
lean_ctor_set(v___x_2361_, 5, v___x_2356_);
lean_ctor_set(v___x_2361_, 6, v___x_2360_);
lean_ctor_set_uint8(v___x_2361_, sizeof(void*)*7, v___x_2354_);
lean_ctor_set_uint8(v___x_2361_, sizeof(void*)*7 + 1, v___x_2354_);
lean_ctor_set_uint8(v___x_2361_, sizeof(void*)*7 + 2, v___x_2354_);
lean_ctor_set_uint8(v___x_2361_, sizeof(void*)*7 + 3, v___x_2353_);
v___x_2362_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6);
v___x_2363_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7);
v___x_2364_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8);
v___x_2365_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2365_, 0, v___x_2362_);
lean_ctor_set(v___x_2365_, 1, v___x_2363_);
lean_ctor_set(v___x_2365_, 2, v___x_2346_);
lean_ctor_set(v___x_2365_, 3, v___x_2357_);
lean_ctor_set(v___x_2365_, 4, v___x_2364_);
v___x_2366_ = lean_st_mk_ref(v___x_2365_);
if (v_showInfo_2347_ == 0)
{
lean_object* v___x_2378_; lean_object* v___x_2379_; 
lean_dec(v_attrName_2348_);
v___x_2378_ = lean_box(0);
v___x_2379_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0(v_declName_2349_, v_ext_2345_, v___x_2378_, v___x_2361_, v___x_2366_, v___y_2350_, v___y_2351_);
lean_dec_ref_known(v___x_2361_, 7);
v___y_2368_ = v___x_2379_;
goto v___jp_2367_;
}
else
{
lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; 
lean_dec(v_declName_2349_);
lean_dec_ref(v_ext_2345_);
v___x_2380_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10);
v___x_2381_ = l_Lean_MessageData_ofName(v_attrName_2348_);
lean_inc_ref(v___x_2381_);
v___x_2382_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2382_, 0, v___x_2380_);
lean_ctor_set(v___x_2382_, 1, v___x_2381_);
v___x_2383_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12);
v___x_2384_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2384_, 0, v___x_2382_);
lean_ctor_set(v___x_2384_, 1, v___x_2383_);
v___x_2385_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2385_, 0, v___x_2384_);
lean_ctor_set(v___x_2385_, 1, v___x_2381_);
v___x_2386_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14);
v___x_2387_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2387_, 0, v___x_2385_);
lean_ctor_set(v___x_2387_, 1, v___x_2386_);
v___x_2388_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2387_, v___x_2361_, v___x_2366_, v___y_2350_, v___y_2351_);
lean_dec_ref_known(v___x_2361_, 7);
v___y_2368_ = v___x_2388_;
goto v___jp_2367_;
}
v___jp_2367_:
{
if (lean_obj_tag(v___y_2368_) == 0)
{
lean_object* v_a_2369_; lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2377_; 
v_a_2369_ = lean_ctor_get(v___y_2368_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___y_2368_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2371_ = v___y_2368_;
v_isShared_2372_ = v_isSharedCheck_2377_;
goto v_resetjp_2370_;
}
else
{
lean_inc(v_a_2369_);
lean_dec(v___y_2368_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2377_;
goto v_resetjp_2370_;
}
v_resetjp_2370_:
{
lean_object* v___x_2373_; lean_object* v___x_2375_; 
v___x_2373_ = lean_st_ref_get(v___x_2366_);
lean_dec(v___x_2366_);
lean_dec(v___x_2373_);
if (v_isShared_2372_ == 0)
{
v___x_2375_ = v___x_2371_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2369_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
else
{
lean_dec(v___x_2366_);
return v___y_2368_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___boxed(lean_object* v_ext_2389_, lean_object* v___x_2390_, lean_object* v_showInfo_2391_, lean_object* v_attrName_2392_, lean_object* v_declName_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_){
_start:
{
uint8_t v_showInfo_boxed_2397_; lean_object* v_res_2398_; 
v_showInfo_boxed_2397_ = lean_unbox(v_showInfo_2391_);
v_res_2398_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1(v_ext_2389_, v___x_2390_, v_showInfo_boxed_2397_, v_attrName_2392_, v_declName_2393_, v___y_2394_, v___y_2395_);
lean_dec(v___y_2395_);
lean_dec_ref(v___y_2394_);
return v_res_2398_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(lean_object* v_ext_2401_, uint8_t v_attrKind_2402_, uint8_t v_showInfo_2403_, uint8_t v_minIndexable_2404_, lean_object* v_as_x27_2405_, lean_object* v_b_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_){
_start:
{
if (lean_obj_tag(v_as_x27_2405_) == 0)
{
lean_object* v___x_2412_; 
lean_dec_ref(v_ext_2401_);
v___x_2412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2412_, 0, v_b_2406_);
return v___x_2412_;
}
else
{
lean_object* v_head_2413_; lean_object* v_tail_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; 
v_head_2413_ = lean_ctor_get(v_as_x27_2405_, 0);
v_tail_2414_ = lean_ctor_get(v_as_x27_2405_, 1);
v___x_2415_ = lean_box(0);
v___x_2416_ = l_Lean_Meta_Grind_getGlobalSymbolPriorities___redArg(v___y_2410_);
if (lean_obj_tag(v___x_2416_) == 0)
{
lean_object* v_a_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; 
v_a_2417_ = lean_ctor_get(v___x_2416_, 0);
lean_inc(v_a_2417_);
lean_dec_ref_known(v___x_2416_, 1);
v___x_2418_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___closed__0));
lean_inc(v_head_2413_);
lean_inc_ref(v_ext_2401_);
v___x_2419_ = l_Lean_Meta_Grind_Extension_addEMatchAttr(v_ext_2401_, v_head_2413_, v_attrKind_2402_, v___x_2418_, v_a_2417_, v_showInfo_2403_, v_minIndexable_2404_, v___y_2407_, v___y_2408_, v___y_2409_, v___y_2410_);
if (lean_obj_tag(v___x_2419_) == 0)
{
lean_dec_ref_known(v___x_2419_, 1);
v_as_x27_2405_ = v_tail_2414_;
v_b_2406_ = v___x_2415_;
goto _start;
}
else
{
lean_dec_ref(v_ext_2401_);
return v___x_2419_;
}
}
else
{
lean_object* v_a_2421_; lean_object* v___x_2423_; uint8_t v_isShared_2424_; uint8_t v_isSharedCheck_2428_; 
lean_dec_ref(v_ext_2401_);
v_a_2421_ = lean_ctor_get(v___x_2416_, 0);
v_isSharedCheck_2428_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2428_ == 0)
{
v___x_2423_ = v___x_2416_;
v_isShared_2424_ = v_isSharedCheck_2428_;
goto v_resetjp_2422_;
}
else
{
lean_inc(v_a_2421_);
lean_dec(v___x_2416_);
v___x_2423_ = lean_box(0);
v_isShared_2424_ = v_isSharedCheck_2428_;
goto v_resetjp_2422_;
}
v_resetjp_2422_:
{
lean_object* v___x_2426_; 
if (v_isShared_2424_ == 0)
{
v___x_2426_ = v___x_2423_;
goto v_reusejp_2425_;
}
else
{
lean_object* v_reuseFailAlloc_2427_; 
v_reuseFailAlloc_2427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2427_, 0, v_a_2421_);
v___x_2426_ = v_reuseFailAlloc_2427_;
goto v_reusejp_2425_;
}
v_reusejp_2425_:
{
return v___x_2426_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___boxed(lean_object* v_ext_2429_, lean_object* v_attrKind_2430_, lean_object* v_showInfo_2431_, lean_object* v_minIndexable_2432_, lean_object* v_as_x27_2433_, lean_object* v_b_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_){
_start:
{
uint8_t v_attrKind_boxed_2440_; uint8_t v_showInfo_boxed_2441_; uint8_t v_minIndexable_boxed_2442_; lean_object* v_res_2443_; 
v_attrKind_boxed_2440_ = lean_unbox(v_attrKind_2430_);
v_showInfo_boxed_2441_ = lean_unbox(v_showInfo_2431_);
v_minIndexable_boxed_2442_ = lean_unbox(v_minIndexable_2432_);
v_res_2443_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(v_ext_2429_, v_attrKind_boxed_2440_, v_showInfo_boxed_2441_, v_minIndexable_boxed_2442_, v_as_x27_2433_, v_b_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_);
lean_dec(v___y_2438_);
lean_dec_ref(v___y_2437_);
lean_dec(v___y_2436_);
lean_dec_ref(v___y_2435_);
lean_dec(v_as_x27_2433_);
return v_res_2443_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1(void){
_start:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; 
v___x_2445_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__0));
v___x_2446_ = l_Lean_stringToMessageData(v___x_2445_);
return v___x_2446_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3(void){
_start:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2448_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__2));
v___x_2449_ = l_Lean_stringToMessageData(v___x_2448_);
return v___x_2449_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5(void){
_start:
{
lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2451_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__4));
v___x_2452_ = l_Lean_stringToMessageData(v___x_2451_);
return v___x_2452_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7(void){
_start:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2454_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__6));
v___x_2455_ = l_Lean_stringToMessageData(v___x_2454_);
return v___x_2455_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11(void){
_start:
{
lean_object* v___x_2460_; lean_object* v___x_2461_; 
v___x_2460_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10));
v___x_2461_ = l_Lean_stringToMessageData(v___x_2460_);
return v___x_2461_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13(void){
_start:
{
lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___x_2463_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12));
v___x_2464_ = l_Lean_stringToMessageData(v___x_2463_);
return v___x_2464_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15(void){
_start:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; 
v___x_2466_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14));
v___x_2467_ = l_Lean_stringToMessageData(v___x_2466_);
return v___x_2467_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__17(void){
_start:
{
lean_object* v___x_2469_; lean_object* v___x_2470_; 
v___x_2469_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__16));
v___x_2470_ = l_Lean_stringToMessageData(v___x_2469_);
return v___x_2470_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__19(void){
_start:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2472_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__18));
v___x_2473_ = l_Lean_stringToMessageData(v___x_2472_);
return v___x_2473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2(lean_object* v_declName_2474_, uint8_t v___x_2475_, uint8_t v_attrKind_2476_, lean_object* v_stx_2477_, lean_object* v_ext_2478_, uint8_t v_showInfo_2479_, uint8_t v_minIndexable_2480_, lean_object* v_attrName_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_){
_start:
{
lean_object* v___x_2511_; 
v___x_2511_ = l_Lean_Meta_Grind_getAttrKindFromOpt(v_stx_2477_, v___y_2484_, v___y_2485_);
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_a_2512_; 
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
lean_inc(v_a_2512_);
lean_dec_ref_known(v___x_2511_, 1);
switch(lean_obj_tag(v_a_2512_))
{
case 0:
{
lean_object* v_k_2513_; 
lean_dec(v_attrName_2481_);
lean_dec(v_stx_2477_);
v_k_2513_ = lean_ctor_get(v_a_2512_, 0);
lean_inc(v_k_2513_);
lean_dec_ref_known(v_a_2512_, 1);
if (lean_obj_tag(v_k_2513_) == 9)
{
lean_object* v___x_2514_; 
lean_dec_ref(v_ext_2478_);
lean_dec(v_declName_2474_);
v___x_2514_ = l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(v___y_2484_, v___y_2485_);
return v___x_2514_;
}
else
{
lean_object* v___x_2515_; 
v___x_2515_ = l_Lean_Meta_Grind_getGlobalSymbolPriorities___redArg(v___y_2485_);
if (lean_obj_tag(v___x_2515_) == 0)
{
lean_object* v_a_2516_; lean_object* v___x_2517_; 
v_a_2516_ = lean_ctor_get(v___x_2515_, 0);
lean_inc(v_a_2516_);
lean_dec_ref_known(v___x_2515_, 1);
v___x_2517_ = l_Lean_Meta_Grind_Extension_addEMatchAttr(v_ext_2478_, v_declName_2474_, v_attrKind_2476_, v_k_2513_, v_a_2516_, v_showInfo_2479_, v_minIndexable_2480_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
return v___x_2517_;
}
else
{
lean_object* v_a_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2525_; 
lean_dec(v_k_2513_);
lean_dec_ref(v_ext_2478_);
lean_dec(v_declName_2474_);
v_a_2518_ = lean_ctor_get(v___x_2515_, 0);
v_isSharedCheck_2525_ = !lean_is_exclusive(v___x_2515_);
if (v_isSharedCheck_2525_ == 0)
{
v___x_2520_ = v___x_2515_;
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_a_2518_);
lean_dec(v___x_2515_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v___x_2523_; 
if (v_isShared_2521_ == 0)
{
v___x_2523_ = v___x_2520_;
goto v_reusejp_2522_;
}
else
{
lean_object* v_reuseFailAlloc_2524_; 
v_reuseFailAlloc_2524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2524_, 0, v_a_2518_);
v___x_2523_ = v_reuseFailAlloc_2524_;
goto v_reusejp_2522_;
}
v_reusejp_2522_:
{
return v___x_2523_;
}
}
}
}
}
case 1:
{
uint8_t v_eager_2526_; lean_object* v___x_2527_; 
lean_dec(v_attrName_2481_);
lean_dec(v_stx_2477_);
v_eager_2526_ = lean_ctor_get_uint8(v_a_2512_, 0);
lean_dec_ref_known(v_a_2512_, 0);
v___x_2527_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(v_ext_2478_, v_declName_2474_, v_eager_2526_, v_attrKind_2476_, v___y_2484_, v___y_2485_);
return v___x_2527_;
}
case 2:
{
lean_object* v___x_2528_; 
lean_dec(v_stx_2477_);
lean_inc(v_declName_2474_);
v___x_2528_ = l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(v_declName_2474_, v___x_2475_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
if (lean_obj_tag(v___x_2528_) == 0)
{
lean_object* v_a_2529_; 
v_a_2529_ = lean_ctor_get(v___x_2528_, 0);
lean_inc(v_a_2529_);
lean_dec_ref_known(v___x_2528_, 1);
if (lean_obj_tag(v_a_2529_) == 1)
{
lean_object* v_val_2530_; lean_object* v_ctors_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; 
lean_dec(v_attrName_2481_);
lean_dec(v_declName_2474_);
v_val_2530_ = lean_ctor_get(v_a_2529_, 0);
lean_inc(v_val_2530_);
lean_dec_ref_known(v_a_2529_, 1);
v_ctors_2531_ = lean_ctor_get(v_val_2530_, 4);
lean_inc(v_ctors_2531_);
lean_dec(v_val_2530_);
v___x_2532_ = lean_box(0);
v___x_2533_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(v_ext_2478_, v_attrKind_2476_, v_showInfo_2479_, v_minIndexable_2480_, v_ctors_2531_, v___x_2532_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
lean_dec(v_ctors_2531_);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2540_; 
v_isSharedCheck_2540_ = !lean_is_exclusive(v___x_2533_);
if (v_isSharedCheck_2540_ == 0)
{
lean_object* v_unused_2541_; 
v_unused_2541_ = lean_ctor_get(v___x_2533_, 0);
lean_dec(v_unused_2541_);
v___x_2535_ = v___x_2533_;
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
else
{
lean_dec(v___x_2533_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2538_; 
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 0, v___x_2532_);
v___x_2538_ = v___x_2535_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v___x_2532_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
}
else
{
return v___x_2533_;
}
}
else
{
lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; 
lean_dec(v_a_2529_);
lean_dec_ref(v_ext_2478_);
v___x_2542_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3);
v___x_2543_ = l_Lean_MessageData_ofName(v_attrName_2481_);
v___x_2544_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2542_);
lean_ctor_set(v___x_2544_, 1, v___x_2543_);
v___x_2545_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5);
v___x_2546_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2544_);
lean_ctor_set(v___x_2546_, 1, v___x_2545_);
v___x_2547_ = l_Lean_MessageData_ofConstName(v_declName_2474_, v___x_2475_);
v___x_2548_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2548_, 0, v___x_2546_);
lean_ctor_set(v___x_2548_, 1, v___x_2547_);
v___x_2549_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7);
v___x_2550_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2550_, 0, v___x_2548_);
lean_ctor_set(v___x_2550_, 1, v___x_2549_);
v___x_2551_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2550_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
return v___x_2551_;
}
}
else
{
lean_object* v_a_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2559_; 
lean_dec(v_attrName_2481_);
lean_dec_ref(v_ext_2478_);
lean_dec(v_declName_2474_);
v_a_2552_ = lean_ctor_get(v___x_2528_, 0);
v_isSharedCheck_2559_ = !lean_is_exclusive(v___x_2528_);
if (v_isSharedCheck_2559_ == 0)
{
v___x_2554_ = v___x_2528_;
v_isShared_2555_ = v_isSharedCheck_2559_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_a_2552_);
lean_dec(v___x_2528_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2559_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v___x_2557_; 
if (v_isShared_2555_ == 0)
{
v___x_2557_ = v___x_2554_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v_a_2552_);
v___x_2557_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
return v___x_2557_;
}
}
}
}
case 3:
{
lean_object* v___x_2560_; 
lean_dec(v_attrName_2481_);
lean_inc(v_declName_2474_);
v___x_2560_ = l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(v_declName_2474_, v___x_2475_, v___y_2484_, v___y_2485_);
if (lean_obj_tag(v___x_2560_) == 0)
{
lean_object* v_a_2561_; 
v_a_2561_ = lean_ctor_get(v___x_2560_, 0);
lean_inc(v_a_2561_);
lean_dec_ref_known(v___x_2560_, 1);
if (lean_obj_tag(v_a_2561_) == 1)
{
lean_object* v_val_2562_; lean_object* v___x_2563_; 
lean_dec(v_stx_2477_);
lean_dec(v_declName_2474_);
v_val_2562_ = lean_ctor_get(v_a_2561_, 0);
lean_inc_n(v_val_2562_, 2);
lean_dec_ref_known(v_a_2561_, 1);
lean_inc_ref(v_ext_2478_);
v___x_2563_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(v_ext_2478_, v_val_2562_, v___x_2475_, v_attrKind_2476_, v___y_2484_, v___y_2485_);
if (lean_obj_tag(v___x_2563_) == 0)
{
lean_object* v___x_2564_; 
lean_dec_ref_known(v___x_2563_, 1);
v___x_2564_ = l_Lean_Meta_isInductivePredicate_x3f(v_val_2562_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
if (lean_obj_tag(v___x_2564_) == 0)
{
lean_object* v_a_2565_; lean_object* v___x_2567_; uint8_t v_isShared_2568_; uint8_t v_isSharedCheck_2585_; 
v_a_2565_ = lean_ctor_get(v___x_2564_, 0);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2564_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2567_ = v___x_2564_;
v_isShared_2568_ = v_isSharedCheck_2585_;
goto v_resetjp_2566_;
}
else
{
lean_inc(v_a_2565_);
lean_dec(v___x_2564_);
v___x_2567_ = lean_box(0);
v_isShared_2568_ = v_isSharedCheck_2585_;
goto v_resetjp_2566_;
}
v_resetjp_2566_:
{
if (lean_obj_tag(v_a_2565_) == 1)
{
lean_object* v_val_2569_; lean_object* v_ctors_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
lean_del_object(v___x_2567_);
v_val_2569_ = lean_ctor_get(v_a_2565_, 0);
lean_inc(v_val_2569_);
lean_dec_ref_known(v_a_2565_, 1);
v_ctors_2570_ = lean_ctor_get(v_val_2569_, 4);
lean_inc(v_ctors_2570_);
lean_dec(v_val_2569_);
v___x_2571_ = lean_box(0);
v___x_2572_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(v_ext_2478_, v_attrKind_2476_, v_showInfo_2479_, v_minIndexable_2480_, v_ctors_2570_, v___x_2571_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
lean_dec(v_ctors_2570_);
if (lean_obj_tag(v___x_2572_) == 0)
{
lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2579_; 
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2572_);
if (v_isSharedCheck_2579_ == 0)
{
lean_object* v_unused_2580_; 
v_unused_2580_ = lean_ctor_get(v___x_2572_, 0);
lean_dec(v_unused_2580_);
v___x_2574_ = v___x_2572_;
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
else
{
lean_dec(v___x_2572_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___x_2577_; 
if (v_isShared_2575_ == 0)
{
lean_ctor_set(v___x_2574_, 0, v___x_2571_);
v___x_2577_ = v___x_2574_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v___x_2571_);
v___x_2577_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
return v___x_2577_;
}
}
}
else
{
return v___x_2572_;
}
}
else
{
lean_object* v___x_2581_; lean_object* v___x_2583_; 
lean_dec(v_a_2565_);
lean_dec_ref(v_ext_2478_);
v___x_2581_ = lean_box(0);
if (v_isShared_2568_ == 0)
{
lean_ctor_set(v___x_2567_, 0, v___x_2581_);
v___x_2583_ = v___x_2567_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v___x_2581_);
v___x_2583_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
return v___x_2583_;
}
}
}
}
else
{
lean_object* v_a_2586_; lean_object* v___x_2588_; uint8_t v_isShared_2589_; uint8_t v_isSharedCheck_2593_; 
lean_dec_ref(v_ext_2478_);
v_a_2586_ = lean_ctor_get(v___x_2564_, 0);
v_isSharedCheck_2593_ = !lean_is_exclusive(v___x_2564_);
if (v_isSharedCheck_2593_ == 0)
{
v___x_2588_ = v___x_2564_;
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
else
{
lean_inc(v_a_2586_);
lean_dec(v___x_2564_);
v___x_2588_ = lean_box(0);
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
v_resetjp_2587_:
{
lean_object* v___x_2591_; 
if (v_isShared_2589_ == 0)
{
v___x_2591_ = v___x_2588_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v_a_2586_);
v___x_2591_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
return v___x_2591_;
}
}
}
}
else
{
lean_dec(v_val_2562_);
lean_dec_ref(v_ext_2478_);
return v___x_2563_;
}
}
else
{
lean_object* v___x_2594_; 
lean_dec(v_a_2561_);
v___x_2594_ = l_Lean_Meta_Grind_getGlobalSymbolPriorities___redArg(v___y_2485_);
if (lean_obj_tag(v___x_2594_) == 0)
{
lean_object* v_a_2595_; lean_object* v___x_2596_; 
v_a_2595_ = lean_ctor_get(v___x_2594_, 0);
lean_inc(v_a_2595_);
lean_dec_ref_known(v___x_2594_, 1);
v___x_2596_ = l_Lean_Meta_Grind_Extension_addEMatchAttrAndSuggest(v_ext_2478_, v_stx_2477_, v_declName_2474_, v_attrKind_2476_, v_a_2595_, v_minIndexable_2480_, v_showInfo_2479_, v___x_2475_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
return v___x_2596_;
}
else
{
lean_object* v_a_2597_; lean_object* v___x_2599_; uint8_t v_isShared_2600_; uint8_t v_isSharedCheck_2604_; 
lean_dec_ref(v_ext_2478_);
lean_dec(v_stx_2477_);
lean_dec(v_declName_2474_);
v_a_2597_ = lean_ctor_get(v___x_2594_, 0);
v_isSharedCheck_2604_ = !lean_is_exclusive(v___x_2594_);
if (v_isSharedCheck_2604_ == 0)
{
v___x_2599_ = v___x_2594_;
v_isShared_2600_ = v_isSharedCheck_2604_;
goto v_resetjp_2598_;
}
else
{
lean_inc(v_a_2597_);
lean_dec(v___x_2594_);
v___x_2599_ = lean_box(0);
v_isShared_2600_ = v_isSharedCheck_2604_;
goto v_resetjp_2598_;
}
v_resetjp_2598_:
{
lean_object* v___x_2602_; 
if (v_isShared_2600_ == 0)
{
v___x_2602_ = v___x_2599_;
goto v_reusejp_2601_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v_a_2597_);
v___x_2602_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2601_;
}
v_reusejp_2601_:
{
return v___x_2602_;
}
}
}
}
}
else
{
lean_object* v_a_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2612_; 
lean_dec_ref(v_ext_2478_);
lean_dec(v_stx_2477_);
lean_dec(v_declName_2474_);
v_a_2605_ = lean_ctor_get(v___x_2560_, 0);
v_isSharedCheck_2612_ = !lean_is_exclusive(v___x_2560_);
if (v_isSharedCheck_2612_ == 0)
{
v___x_2607_ = v___x_2560_;
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_a_2605_);
lean_dec(v___x_2560_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v___x_2610_; 
if (v_isShared_2608_ == 0)
{
v___x_2610_ = v___x_2607_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v_a_2605_);
v___x_2610_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
return v___x_2610_;
}
}
}
}
case 4:
{
lean_object* v___x_2613_; 
lean_dec(v_attrName_2481_);
lean_dec(v_stx_2477_);
v___x_2613_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr(v_ext_2478_, v_declName_2474_, v_attrKind_2476_, v___y_2484_, v___y_2485_);
return v___x_2613_;
}
case 5:
{
lean_object* v_prio_2614_; lean_object* v___x_2615_; uint8_t v___x_2616_; 
lean_dec_ref(v_ext_2478_);
lean_dec(v_stx_2477_);
v_prio_2614_ = lean_ctor_get(v_a_2512_, 0);
lean_inc(v_prio_2614_);
lean_dec_ref_known(v_a_2512_, 1);
v___x_2615_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9));
v___x_2616_ = lean_name_eq(v_attrName_2481_, v___x_2615_);
lean_dec(v_attrName_2481_);
if (v___x_2616_ == 0)
{
lean_object* v___x_2617_; lean_object* v___x_2618_; 
lean_dec(v_prio_2614_);
lean_dec(v_declName_2474_);
v___x_2617_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11);
v___x_2618_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2617_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
return v___x_2618_;
}
else
{
lean_object* v___x_2619_; 
v___x_2619_ = l_Lean_Meta_Grind_addSymbolPriorityAttr(v_declName_2474_, v_attrKind_2476_, v_prio_2614_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
return v___x_2619_;
}
}
case 6:
{
lean_object* v___x_2620_; 
lean_dec(v_attrName_2481_);
lean_dec(v_stx_2477_);
v___x_2620_ = l_Lean_Meta_Grind_Extension_addInjectiveAttr(v_ext_2478_, v_declName_2474_, v_attrKind_2476_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
return v___x_2620_;
}
case 7:
{
lean_object* v___x_2621_; 
lean_dec(v_attrName_2481_);
lean_dec(v_stx_2477_);
v___x_2621_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr(v_ext_2478_, v_declName_2474_, v_attrKind_2476_, v___y_2484_, v___y_2485_);
return v___x_2621_;
}
case 8:
{
uint8_t v_post_2622_; uint8_t v_inv_2623_; lean_object* v___y_2625_; lean_object* v___y_2626_; lean_object* v___y_2627_; lean_object* v___y_2628_; lean_object* v___x_2632_; uint8_t v___x_2633_; 
lean_dec_ref(v_ext_2478_);
lean_dec(v_stx_2477_);
v_post_2622_ = lean_ctor_get_uint8(v_a_2512_, 0);
v_inv_2623_ = lean_ctor_get_uint8(v_a_2512_, 1);
lean_dec_ref_known(v_a_2512_, 0);
v___x_2632_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9));
v___x_2633_ = lean_name_eq(v_attrName_2481_, v___x_2632_);
lean_dec(v_attrName_2481_);
if (v___x_2633_ == 0)
{
lean_object* v___x_2634_; lean_object* v___x_2635_; 
lean_dec(v_declName_2474_);
v___x_2634_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13);
v___x_2635_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2634_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
return v___x_2635_;
}
else
{
v___y_2625_ = v___y_2482_;
v___y_2626_ = v___y_2483_;
v___y_2627_ = v___y_2484_;
v___y_2628_ = v___y_2485_;
goto v___jp_2624_;
}
v___jp_2624_:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
v___x_2629_ = l_Lean_Meta_Grind_normExt;
v___x_2630_ = lean_unsigned_to_nat(1000u);
v___x_2631_ = l_Lean_Meta_addSimpTheorem(v___x_2629_, v_declName_2474_, v_post_2622_, v_inv_2623_, v_attrKind_2476_, v___x_2630_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_);
return v___x_2631_;
}
}
case 9:
{
lean_object* v___x_2636_; uint8_t v___x_2637_; 
lean_dec_ref(v_ext_2478_);
lean_dec(v_stx_2477_);
v___x_2636_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9));
v___x_2637_ = lean_name_eq(v_attrName_2481_, v___x_2636_);
lean_dec(v_attrName_2481_);
if (v___x_2637_ == 0)
{
lean_object* v___x_2638_; lean_object* v___x_2639_; 
lean_dec(v_declName_2474_);
v___x_2638_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15);
v___x_2639_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2638_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
return v___x_2639_;
}
else
{
goto v___jp_2487_;
}
}
case 10:
{
lean_object* v___x_2640_; uint8_t v___x_2641_; 
lean_dec_ref(v_ext_2478_);
lean_dec(v_stx_2477_);
v___x_2640_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9));
v___x_2641_ = lean_name_eq(v_attrName_2481_, v___x_2640_);
lean_dec(v_attrName_2481_);
if (v___x_2641_ == 0)
{
lean_object* v___x_2642_; lean_object* v___x_2643_; 
lean_dec(v_declName_2474_);
v___x_2642_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__17, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__17_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__17);
v___x_2643_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2642_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
return v___x_2643_;
}
else
{
lean_object* v___x_2644_; 
v___x_2644_ = l_Lean_Meta_Grind_addHomoAttr(v_declName_2474_, v_attrKind_2476_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
return v___x_2644_;
}
}
default: 
{
lean_object* v___x_2645_; uint8_t v___x_2646_; 
lean_dec_ref(v_ext_2478_);
lean_dec(v_stx_2477_);
v___x_2645_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9));
v___x_2646_ = lean_name_eq(v_attrName_2481_, v___x_2645_);
lean_dec(v_attrName_2481_);
if (v___x_2646_ == 0)
{
lean_object* v___x_2647_; lean_object* v___x_2648_; 
lean_dec(v_declName_2474_);
v___x_2647_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__19, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__19_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__19);
v___x_2648_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2647_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
return v___x_2648_;
}
else
{
lean_object* v___x_2649_; 
v___x_2649_ = l_Lean_Meta_Grind_addHomoPredAttr(v_declName_2474_, v_attrKind_2476_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
return v___x_2649_;
}
}
}
}
else
{
lean_object* v_a_2650_; lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2657_; 
lean_dec(v_attrName_2481_);
lean_dec_ref(v_ext_2478_);
lean_dec(v_stx_2477_);
lean_dec(v_declName_2474_);
v_a_2650_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2657_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2657_ == 0)
{
v___x_2652_ = v___x_2511_;
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
else
{
lean_inc(v_a_2650_);
lean_dec(v___x_2511_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v___x_2655_; 
if (v_isShared_2653_ == 0)
{
v___x_2655_ = v___x_2652_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v_a_2650_);
v___x_2655_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
return v___x_2655_;
}
}
}
v___jp_2487_:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2488_ = l_Lean_Meta_Grind_normExt;
v___x_2489_ = lean_unsigned_to_nat(1000u);
v___x_2490_ = l_Lean_Meta_addDeclToUnfold(v___x_2488_, v_declName_2474_, v___x_2475_, v___x_2475_, v___x_2489_, v_attrKind_2476_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
if (lean_obj_tag(v___x_2490_) == 0)
{
lean_object* v_a_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2502_; 
v_a_2491_ = lean_ctor_get(v___x_2490_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___x_2490_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2493_ = v___x_2490_;
v_isShared_2494_ = v_isSharedCheck_2502_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_a_2491_);
lean_dec(v___x_2490_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2502_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
uint8_t v___x_2495_; 
v___x_2495_ = lean_unbox(v_a_2491_);
lean_dec(v_a_2491_);
if (v___x_2495_ == 0)
{
lean_object* v___x_2496_; lean_object* v___x_2497_; 
lean_del_object(v___x_2493_);
v___x_2496_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1);
v___x_2497_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2496_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
return v___x_2497_;
}
else
{
lean_object* v___x_2498_; lean_object* v___x_2500_; 
v___x_2498_ = lean_box(0);
if (v_isShared_2494_ == 0)
{
lean_ctor_set(v___x_2493_, 0, v___x_2498_);
v___x_2500_ = v___x_2493_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v___x_2498_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
}
}
else
{
lean_object* v_a_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2510_; 
v_a_2503_ = lean_ctor_get(v___x_2490_, 0);
v_isSharedCheck_2510_ = !lean_is_exclusive(v___x_2490_);
if (v_isSharedCheck_2510_ == 0)
{
v___x_2505_ = v___x_2490_;
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_a_2503_);
lean_dec(v___x_2490_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v___x_2508_; 
if (v_isShared_2506_ == 0)
{
v___x_2508_ = v___x_2505_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v_a_2503_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
return v___x_2508_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___boxed(lean_object* v_declName_2658_, lean_object* v___x_2659_, lean_object* v_attrKind_2660_, lean_object* v_stx_2661_, lean_object* v_ext_2662_, lean_object* v_showInfo_2663_, lean_object* v_minIndexable_2664_, lean_object* v_attrName_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_){
_start:
{
uint8_t v___x_15107__boxed_2671_; uint8_t v_attrKind_boxed_2672_; uint8_t v_showInfo_boxed_2673_; uint8_t v_minIndexable_boxed_2674_; lean_object* v_res_2675_; 
v___x_15107__boxed_2671_ = lean_unbox(v___x_2659_);
v_attrKind_boxed_2672_ = lean_unbox(v_attrKind_2660_);
v_showInfo_boxed_2673_ = lean_unbox(v_showInfo_2663_);
v_minIndexable_boxed_2674_ = lean_unbox(v_minIndexable_2664_);
v_res_2675_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2(v_declName_2658_, v___x_15107__boxed_2671_, v_attrKind_boxed_2672_, v_stx_2661_, v_ext_2662_, v_showInfo_boxed_2673_, v_minIndexable_boxed_2674_, v_attrName_2665_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v___y_2667_);
lean_dec_ref(v___y_2666_);
return v_res_2675_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__0(void){
_start:
{
lean_object* v___x_2676_; double v___x_2677_; 
v___x_2676_ = lean_unsigned_to_nat(0u);
v___x_2677_ = lean_float_of_nat(v___x_2676_);
return v___x_2677_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5(lean_object* v_cls_2681_, lean_object* v_msg_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_){
_start:
{
lean_object* v_ref_2688_; lean_object* v___x_2689_; lean_object* v_a_2690_; lean_object* v___x_2692_; uint8_t v_isShared_2693_; uint8_t v_isSharedCheck_2734_; 
v_ref_2688_ = lean_ctor_get(v___y_2685_, 2);
v___x_2689_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0(v_msg_2682_, v___y_2683_, v___y_2684_, v___y_2685_, v___y_2686_);
v_a_2690_ = lean_ctor_get(v___x_2689_, 0);
v_isSharedCheck_2734_ = !lean_is_exclusive(v___x_2689_);
if (v_isSharedCheck_2734_ == 0)
{
v___x_2692_ = v___x_2689_;
v_isShared_2693_ = v_isSharedCheck_2734_;
goto v_resetjp_2691_;
}
else
{
lean_inc(v_a_2690_);
lean_dec(v___x_2689_);
v___x_2692_ = lean_box(0);
v_isShared_2693_ = v_isSharedCheck_2734_;
goto v_resetjp_2691_;
}
v_resetjp_2691_:
{
lean_object* v___x_2694_; lean_object* v_traceState_2695_; lean_object* v_env_2696_; lean_object* v_nextMacroScope_2697_; lean_object* v_ngen_2698_; lean_object* v_auxDeclNGen_2699_; lean_object* v_cache_2700_; lean_object* v_messages_2701_; lean_object* v_infoState_2702_; lean_object* v_snapshotTasks_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2733_; 
v___x_2694_ = lean_st_ref_take(v___y_2686_);
v_traceState_2695_ = lean_ctor_get(v___x_2694_, 4);
v_env_2696_ = lean_ctor_get(v___x_2694_, 0);
v_nextMacroScope_2697_ = lean_ctor_get(v___x_2694_, 1);
v_ngen_2698_ = lean_ctor_get(v___x_2694_, 2);
v_auxDeclNGen_2699_ = lean_ctor_get(v___x_2694_, 3);
v_cache_2700_ = lean_ctor_get(v___x_2694_, 5);
v_messages_2701_ = lean_ctor_get(v___x_2694_, 6);
v_infoState_2702_ = lean_ctor_get(v___x_2694_, 7);
v_snapshotTasks_2703_ = lean_ctor_get(v___x_2694_, 8);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2705_ = v___x_2694_;
v_isShared_2706_ = v_isSharedCheck_2733_;
goto v_resetjp_2704_;
}
else
{
lean_inc(v_snapshotTasks_2703_);
lean_inc(v_infoState_2702_);
lean_inc(v_messages_2701_);
lean_inc(v_cache_2700_);
lean_inc(v_traceState_2695_);
lean_inc(v_auxDeclNGen_2699_);
lean_inc(v_ngen_2698_);
lean_inc(v_nextMacroScope_2697_);
lean_inc(v_env_2696_);
lean_dec(v___x_2694_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2733_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
uint64_t v_tid_2707_; lean_object* v_traces_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2732_; 
v_tid_2707_ = lean_ctor_get_uint64(v_traceState_2695_, sizeof(void*)*1);
v_traces_2708_ = lean_ctor_get(v_traceState_2695_, 0);
v_isSharedCheck_2732_ = !lean_is_exclusive(v_traceState_2695_);
if (v_isSharedCheck_2732_ == 0)
{
v___x_2710_ = v_traceState_2695_;
v_isShared_2711_ = v_isSharedCheck_2732_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_traces_2708_);
lean_dec(v_traceState_2695_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2732_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2712_; lean_object* v___x_2713_; double v___x_2714_; uint8_t v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2723_; 
v___x_2712_ = lean_box(0);
v___x_2713_ = lean_box(0);
v___x_2714_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__0);
v___x_2715_ = 0;
v___x_2716_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__1));
v___x_2717_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2717_, 0, v_cls_2681_);
lean_ctor_set(v___x_2717_, 1, v___x_2713_);
lean_ctor_set(v___x_2717_, 2, v___x_2716_);
lean_ctor_set_float(v___x_2717_, sizeof(void*)*3, v___x_2714_);
lean_ctor_set_float(v___x_2717_, sizeof(void*)*3 + 8, v___x_2714_);
lean_ctor_set_uint8(v___x_2717_, sizeof(void*)*3 + 16, v___x_2715_);
v___x_2718_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__2));
v___x_2719_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2719_, 0, v___x_2717_);
lean_ctor_set(v___x_2719_, 1, v_a_2690_);
lean_ctor_set(v___x_2719_, 2, v___x_2718_);
lean_inc(v_ref_2688_);
v___x_2720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2720_, 0, v_ref_2688_);
lean_ctor_set(v___x_2720_, 1, v___x_2719_);
v___x_2721_ = l_Lean_PersistentArray_push___redArg(v_traces_2708_, v___x_2720_);
if (v_isShared_2711_ == 0)
{
lean_ctor_set(v___x_2710_, 0, v___x_2721_);
v___x_2723_ = v___x_2710_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v___x_2721_);
lean_ctor_set_uint64(v_reuseFailAlloc_2731_, sizeof(void*)*1, v_tid_2707_);
v___x_2723_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
lean_object* v___x_2725_; 
if (v_isShared_2706_ == 0)
{
lean_ctor_set(v___x_2705_, 4, v___x_2723_);
v___x_2725_ = v___x_2705_;
goto v_reusejp_2724_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v_env_2696_);
lean_ctor_set(v_reuseFailAlloc_2730_, 1, v_nextMacroScope_2697_);
lean_ctor_set(v_reuseFailAlloc_2730_, 2, v_ngen_2698_);
lean_ctor_set(v_reuseFailAlloc_2730_, 3, v_auxDeclNGen_2699_);
lean_ctor_set(v_reuseFailAlloc_2730_, 4, v___x_2723_);
lean_ctor_set(v_reuseFailAlloc_2730_, 5, v_cache_2700_);
lean_ctor_set(v_reuseFailAlloc_2730_, 6, v_messages_2701_);
lean_ctor_set(v_reuseFailAlloc_2730_, 7, v_infoState_2702_);
lean_ctor_set(v_reuseFailAlloc_2730_, 8, v_snapshotTasks_2703_);
v___x_2725_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2724_;
}
v_reusejp_2724_:
{
lean_object* v___x_2726_; lean_object* v___x_2728_; 
v___x_2726_ = lean_st_ref_put(v___y_2686_, v___x_2725_);
if (v_isShared_2693_ == 0)
{
lean_ctor_set(v___x_2692_, 0, v___x_2712_);
v___x_2728_ = v___x_2692_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v___x_2712_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___boxed(lean_object* v_cls_2735_, lean_object* v_msg_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_){
_start:
{
lean_object* v_res_2742_; 
v_res_2742_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5(v_cls_2735_, v_msg_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_);
lean_dec(v___y_2740_);
lean_dec_ref(v___y_2739_);
lean_dec(v___y_2738_);
lean_dec_ref(v___y_2737_);
return v_res_2742_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___redArg(lean_object* v_keys_2743_, lean_object* v_i_2744_, lean_object* v_k_2745_){
_start:
{
lean_object* v___x_2746_; uint8_t v___x_2747_; 
v___x_2746_ = lean_array_get_size(v_keys_2743_);
v___x_2747_ = lean_nat_dec_lt(v_i_2744_, v___x_2746_);
if (v___x_2747_ == 0)
{
lean_dec(v_i_2744_);
return v___x_2747_;
}
else
{
lean_object* v_k_x27_2748_; uint8_t v___x_2749_; 
v_k_x27_2748_ = lean_array_fget_borrowed(v_keys_2743_, v_i_2744_);
v___x_2749_ = l_Lean_instBEqExtraModUse_beq(v_k_2745_, v_k_x27_2748_);
if (v___x_2749_ == 0)
{
lean_object* v___x_2750_; lean_object* v___x_2751_; 
v___x_2750_ = lean_unsigned_to_nat(1u);
v___x_2751_ = lean_nat_add(v_i_2744_, v___x_2750_);
lean_dec(v_i_2744_);
v_i_2744_ = v___x_2751_;
goto _start;
}
else
{
lean_dec(v_i_2744_);
return v___x_2747_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___redArg___boxed(lean_object* v_keys_2753_, lean_object* v_i_2754_, lean_object* v_k_2755_){
_start:
{
uint8_t v_res_2756_; lean_object* v_r_2757_; 
v_res_2756_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___redArg(v_keys_2753_, v_i_2754_, v_k_2755_);
lean_dec_ref(v_k_2755_);
lean_dec_ref(v_keys_2753_);
v_r_2757_ = lean_box(v_res_2756_);
return v_r_2757_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg(lean_object* v_x_2758_, size_t v_x_2759_, lean_object* v_x_2760_){
_start:
{
if (lean_obj_tag(v_x_2758_) == 0)
{
lean_object* v_es_2761_; lean_object* v___x_2762_; size_t v___x_2763_; size_t v___x_2764_; lean_object* v_j_2765_; lean_object* v___x_2766_; 
v_es_2761_ = lean_ctor_get(v_x_2758_, 0);
v___x_2762_ = lean_box(2);
v___x_2763_ = ((size_t)31ULL);
v___x_2764_ = lean_usize_land(v_x_2759_, v___x_2763_);
v_j_2765_ = lean_usize_to_nat(v___x_2764_);
v___x_2766_ = lean_array_get_borrowed(v___x_2762_, v_es_2761_, v_j_2765_);
lean_dec(v_j_2765_);
switch(lean_obj_tag(v___x_2766_))
{
case 0:
{
lean_object* v_key_2767_; uint8_t v___x_2768_; 
v_key_2767_ = lean_ctor_get(v___x_2766_, 0);
v___x_2768_ = l_Lean_instBEqExtraModUse_beq(v_x_2760_, v_key_2767_);
return v___x_2768_;
}
case 1:
{
lean_object* v_node_2769_; size_t v___x_2770_; size_t v___x_2771_; 
v_node_2769_ = lean_ctor_get(v___x_2766_, 0);
v___x_2770_ = ((size_t)5ULL);
v___x_2771_ = lean_usize_shift_right(v_x_2759_, v___x_2770_);
v_x_2758_ = v_node_2769_;
v_x_2759_ = v___x_2771_;
goto _start;
}
default: 
{
uint8_t v___x_2773_; 
v___x_2773_ = 0;
return v___x_2773_;
}
}
}
else
{
lean_object* v_ks_2774_; lean_object* v___x_2775_; uint8_t v___x_2776_; 
v_ks_2774_ = lean_ctor_get(v_x_2758_, 0);
v___x_2775_ = lean_unsigned_to_nat(0u);
v___x_2776_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___redArg(v_ks_2774_, v___x_2775_, v_x_2760_);
return v___x_2776_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg___boxed(lean_object* v_x_2777_, lean_object* v_x_2778_, lean_object* v_x_2779_){
_start:
{
size_t v_x_15623__boxed_2780_; uint8_t v_res_2781_; lean_object* v_r_2782_; 
v_x_15623__boxed_2780_ = lean_unbox_usize(v_x_2778_);
lean_dec(v_x_2778_);
v_res_2781_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg(v_x_2777_, v_x_15623__boxed_2780_, v_x_2779_);
lean_dec_ref(v_x_2779_);
lean_dec_ref(v_x_2777_);
v_r_2782_ = lean_box(v_res_2781_);
return v_r_2782_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(lean_object* v_x_2783_, lean_object* v_x_2784_){
_start:
{
uint64_t v___x_2785_; size_t v___x_2786_; uint8_t v___x_2787_; 
v___x_2785_ = l_Lean_instHashableExtraModUse_hash(v_x_2784_);
v___x_2786_ = lean_uint64_to_usize(v___x_2785_);
v___x_2787_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg(v_x_2783_, v___x_2786_, v_x_2784_);
return v___x_2787_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_x_2788_, lean_object* v_x_2789_){
_start:
{
uint8_t v_res_2790_; lean_object* v_r_2791_; 
v_res_2790_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(v_x_2788_, v_x_2789_);
lean_dec_ref(v_x_2789_);
lean_dec_ref(v_x_2788_);
v_r_2791_ = lean_box(v_res_2790_);
return v_r_2791_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2792_; 
v___x_2792_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_2792_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2793_; lean_object* v___x_2794_; 
v___x_2793_ = lean_box(0);
v___x_2794_ = l_unsafeCast___redArg(v___x_2793_);
return v___x_2794_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__5(void){
_start:
{
lean_object* v___x_2799_; lean_object* v___x_2800_; 
v___x_2799_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4));
v___x_2800_ = l_Lean_stringToMessageData(v___x_2799_);
return v___x_2800_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7(void){
_start:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2802_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6));
v___x_2803_ = l_Lean_stringToMessageData(v___x_2802_);
return v___x_2803_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8(void){
_start:
{
lean_object* v___x_2804_; lean_object* v___x_2805_; 
v___x_2804_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__1));
v___x_2805_ = l_Lean_stringToMessageData(v___x_2804_);
return v___x_2805_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11(void){
_start:
{
lean_object* v_cls_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; 
v_cls_2809_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__3));
v___x_2810_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__10));
v___x_2811_ = l_Lean_Name_append(v___x_2810_, v_cls_2809_);
return v___x_2811_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13(void){
_start:
{
lean_object* v___x_2813_; lean_object* v___x_2814_; 
v___x_2813_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__12));
v___x_2814_ = l_Lean_stringToMessageData(v___x_2813_);
return v___x_2814_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15(void){
_start:
{
lean_object* v___x_2816_; lean_object* v___x_2817_; 
v___x_2816_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14));
v___x_2817_ = l_Lean_stringToMessageData(v___x_2816_);
return v___x_2817_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(lean_object* v_mod_2822_, uint8_t v_isMeta_2823_, lean_object* v_hint_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_){
_start:
{
lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v_env_2832_; uint8_t v_isExporting_2833_; lean_object* v_entry_2834_; lean_object* v___x_2835_; lean_object* v_env_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___y_2841_; lean_object* v___y_2842_; lean_object* v___x_2882_; uint8_t v___x_2883_; 
v___x_2830_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0);
v___x_2831_ = lean_st_ref_get(v___y_2828_);
v_env_2832_ = lean_ctor_get(v___x_2831_, 0);
lean_inc_ref(v_env_2832_);
lean_dec(v___x_2831_);
v_isExporting_2833_ = lean_ctor_get_uint8(v_env_2832_, sizeof(void*)*8);
lean_dec_ref(v_env_2832_);
lean_inc(v_mod_2822_);
v_entry_2834_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_2834_, 0, v_mod_2822_);
lean_ctor_set_uint8(v_entry_2834_, sizeof(void*)*1, v_isExporting_2833_);
lean_ctor_set_uint8(v_entry_2834_, sizeof(void*)*1 + 1, v_isMeta_2823_);
v___x_2835_ = lean_st_ref_get(v___y_2828_);
v_env_2836_ = lean_ctor_get(v___x_2835_, 0);
lean_inc_ref(v_env_2836_);
lean_dec(v___x_2835_);
v___x_2837_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_2838_ = lean_box(1);
v___x_2839_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1);
v___x_2882_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2830_, v___x_2837_, v_env_2836_, v___x_2838_, v___x_2839_);
v___x_2883_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(v___x_2882_, v_entry_2834_);
lean_dec(v___x_2882_);
if (v___x_2883_ == 0)
{
lean_object* v_toCold_2884_; lean_object* v_options_2885_; uint8_t v_hasTrace_2886_; 
v_toCold_2884_ = lean_ctor_get(v___y_2827_, 0);
v_options_2885_ = lean_ctor_get(v_toCold_2884_, 2);
v_hasTrace_2886_ = lean_ctor_get_uint8(v_options_2885_, sizeof(void*)*1);
if (v_hasTrace_2886_ == 0)
{
lean_dec(v_hint_2824_);
lean_dec(v_mod_2822_);
v___y_2841_ = v___y_2826_;
v___y_2842_ = v___y_2828_;
goto v___jp_2840_;
}
else
{
lean_object* v_inheritedTraceOptions_2887_; lean_object* v_cls_2888_; lean_object* v___y_2890_; lean_object* v___y_2891_; lean_object* v___y_2895_; lean_object* v___y_2896_; lean_object* v___x_2908_; uint8_t v___x_2909_; 
v_inheritedTraceOptions_2887_ = lean_ctor_get(v_toCold_2884_, 11);
v_cls_2888_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__3));
v___x_2908_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11);
v___x_2909_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2887_, v_options_2885_, v___x_2908_);
if (v___x_2909_ == 0)
{
lean_dec(v_hint_2824_);
lean_dec(v_mod_2822_);
v___y_2841_ = v___y_2826_;
v___y_2842_ = v___y_2828_;
goto v___jp_2840_;
}
else
{
lean_object* v___x_2910_; lean_object* v___y_2912_; 
v___x_2910_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13);
if (v_isExporting_2833_ == 0)
{
lean_object* v___x_2919_; 
v___x_2919_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__18));
v___y_2912_ = v___x_2919_;
goto v___jp_2911_;
}
else
{
lean_object* v___x_2920_; 
v___x_2920_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__19));
v___y_2912_ = v___x_2920_;
goto v___jp_2911_;
}
v___jp_2911_:
{
lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; 
lean_inc_ref(v___y_2912_);
v___x_2913_ = l_Lean_stringToMessageData(v___y_2912_);
v___x_2914_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2910_);
lean_ctor_set(v___x_2914_, 1, v___x_2913_);
v___x_2915_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15);
v___x_2916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2916_, 0, v___x_2914_);
lean_ctor_set(v___x_2916_, 1, v___x_2915_);
if (v_isMeta_2823_ == 0)
{
lean_object* v___x_2917_; 
v___x_2917_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__16));
v___y_2895_ = v___x_2916_;
v___y_2896_ = v___x_2917_;
goto v___jp_2894_;
}
else
{
lean_object* v___x_2918_; 
v___x_2918_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__17));
v___y_2895_ = v___x_2916_;
v___y_2896_ = v___x_2918_;
goto v___jp_2894_;
}
}
}
v___jp_2889_:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; 
v___x_2892_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2892_, 0, v___y_2890_);
lean_ctor_set(v___x_2892_, 1, v___y_2891_);
v___x_2893_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5(v_cls_2888_, v___x_2892_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_);
if (lean_obj_tag(v___x_2893_) == 0)
{
lean_dec_ref_known(v___x_2893_, 1);
v___y_2841_ = v___y_2826_;
v___y_2842_ = v___y_2828_;
goto v___jp_2840_;
}
else
{
lean_dec_ref_known(v_entry_2834_, 1);
return v___x_2893_;
}
}
v___jp_2894_:
{
lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; uint8_t v___x_2903_; 
lean_inc_ref(v___y_2896_);
v___x_2897_ = l_Lean_stringToMessageData(v___y_2896_);
v___x_2898_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2898_, 0, v___y_2895_);
lean_ctor_set(v___x_2898_, 1, v___x_2897_);
v___x_2899_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__5);
v___x_2900_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2900_, 0, v___x_2898_);
lean_ctor_set(v___x_2900_, 1, v___x_2899_);
v___x_2901_ = l_Lean_MessageData_ofName(v_mod_2822_);
v___x_2902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2902_, 0, v___x_2900_);
lean_ctor_set(v___x_2902_, 1, v___x_2901_);
v___x_2903_ = l_Lean_Name_isAnonymous(v_hint_2824_);
if (v___x_2903_ == 0)
{
lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; 
v___x_2904_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7);
v___x_2905_ = l_Lean_MessageData_ofName(v_hint_2824_);
v___x_2906_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2906_, 0, v___x_2904_);
lean_ctor_set(v___x_2906_, 1, v___x_2905_);
v___y_2890_ = v___x_2902_;
v___y_2891_ = v___x_2906_;
goto v___jp_2889_;
}
else
{
lean_object* v___x_2907_; 
lean_dec(v_hint_2824_);
v___x_2907_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8);
v___y_2890_ = v___x_2902_;
v___y_2891_ = v___x_2907_;
goto v___jp_2889_;
}
}
}
}
else
{
lean_object* v___x_2921_; lean_object* v___x_2922_; 
lean_dec_ref_known(v_entry_2834_, 1);
lean_dec(v_hint_2824_);
lean_dec(v_mod_2822_);
v___x_2921_ = lean_box(0);
v___x_2922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2922_, 0, v___x_2921_);
return v___x_2922_;
}
v___jp_2840_:
{
lean_object* v___x_2843_; lean_object* v_toEnvExtension_2844_; lean_object* v_env_2845_; lean_object* v_nextMacroScope_2846_; lean_object* v_ngen_2847_; lean_object* v_auxDeclNGen_2848_; lean_object* v_traceState_2849_; lean_object* v_messages_2850_; lean_object* v_infoState_2851_; lean_object* v_snapshotTasks_2852_; lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2880_; 
v___x_2843_ = lean_st_ref_take(v___y_2842_);
v_toEnvExtension_2844_ = lean_ctor_get(v___x_2837_, 0);
v_env_2845_ = lean_ctor_get(v___x_2843_, 0);
v_nextMacroScope_2846_ = lean_ctor_get(v___x_2843_, 1);
v_ngen_2847_ = lean_ctor_get(v___x_2843_, 2);
v_auxDeclNGen_2848_ = lean_ctor_get(v___x_2843_, 3);
v_traceState_2849_ = lean_ctor_get(v___x_2843_, 4);
v_messages_2850_ = lean_ctor_get(v___x_2843_, 6);
v_infoState_2851_ = lean_ctor_get(v___x_2843_, 7);
v_snapshotTasks_2852_ = lean_ctor_get(v___x_2843_, 8);
v_isSharedCheck_2880_ = !lean_is_exclusive(v___x_2843_);
if (v_isSharedCheck_2880_ == 0)
{
lean_object* v_unused_2881_; 
v_unused_2881_ = lean_ctor_get(v___x_2843_, 5);
lean_dec(v_unused_2881_);
v___x_2854_ = v___x_2843_;
v_isShared_2855_ = v_isSharedCheck_2880_;
goto v_resetjp_2853_;
}
else
{
lean_inc(v_snapshotTasks_2852_);
lean_inc(v_infoState_2851_);
lean_inc(v_messages_2850_);
lean_inc(v_traceState_2849_);
lean_inc(v_auxDeclNGen_2848_);
lean_inc(v_ngen_2847_);
lean_inc(v_nextMacroScope_2846_);
lean_inc(v_env_2845_);
lean_dec(v___x_2843_);
v___x_2854_ = lean_box(0);
v_isShared_2855_ = v_isSharedCheck_2880_;
goto v_resetjp_2853_;
}
v_resetjp_2853_:
{
lean_object* v_asyncMode_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2860_; 
v_asyncMode_2856_ = lean_ctor_get(v_toEnvExtension_2844_, 2);
v___x_2857_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2837_, v_env_2845_, v_entry_2834_, v_asyncMode_2856_, v___x_2839_);
v___x_2858_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
if (v_isShared_2855_ == 0)
{
lean_ctor_set(v___x_2854_, 5, v___x_2858_);
lean_ctor_set(v___x_2854_, 0, v___x_2857_);
v___x_2860_ = v___x_2854_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v___x_2857_);
lean_ctor_set(v_reuseFailAlloc_2879_, 1, v_nextMacroScope_2846_);
lean_ctor_set(v_reuseFailAlloc_2879_, 2, v_ngen_2847_);
lean_ctor_set(v_reuseFailAlloc_2879_, 3, v_auxDeclNGen_2848_);
lean_ctor_set(v_reuseFailAlloc_2879_, 4, v_traceState_2849_);
lean_ctor_set(v_reuseFailAlloc_2879_, 5, v___x_2858_);
lean_ctor_set(v_reuseFailAlloc_2879_, 6, v_messages_2850_);
lean_ctor_set(v_reuseFailAlloc_2879_, 7, v_infoState_2851_);
lean_ctor_set(v_reuseFailAlloc_2879_, 8, v_snapshotTasks_2852_);
v___x_2860_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v_mctx_2863_; lean_object* v_zetaDeltaFVarIds_2864_; lean_object* v_postponed_2865_; lean_object* v_diag_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2877_; 
v___x_2861_ = lean_st_ref_put(v___y_2842_, v___x_2860_);
v___x_2862_ = lean_st_ref_take(v___y_2841_);
v_mctx_2863_ = lean_ctor_get(v___x_2862_, 0);
v_zetaDeltaFVarIds_2864_ = lean_ctor_get(v___x_2862_, 2);
v_postponed_2865_ = lean_ctor_get(v___x_2862_, 3);
v_diag_2866_ = lean_ctor_get(v___x_2862_, 4);
v_isSharedCheck_2877_ = !lean_is_exclusive(v___x_2862_);
if (v_isSharedCheck_2877_ == 0)
{
lean_object* v_unused_2878_; 
v_unused_2878_ = lean_ctor_get(v___x_2862_, 1);
lean_dec(v_unused_2878_);
v___x_2868_ = v___x_2862_;
v_isShared_2869_ = v_isSharedCheck_2877_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_diag_2866_);
lean_inc(v_postponed_2865_);
lean_inc(v_zetaDeltaFVarIds_2864_);
lean_inc(v_mctx_2863_);
lean_dec(v___x_2862_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2877_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2873_; 
v___x_2870_ = lean_box(0);
v___x_2871_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0);
if (v_isShared_2869_ == 0)
{
lean_ctor_set(v___x_2868_, 1, v___x_2871_);
v___x_2873_ = v___x_2868_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2876_; 
v_reuseFailAlloc_2876_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2876_, 0, v_mctx_2863_);
lean_ctor_set(v_reuseFailAlloc_2876_, 1, v___x_2871_);
lean_ctor_set(v_reuseFailAlloc_2876_, 2, v_zetaDeltaFVarIds_2864_);
lean_ctor_set(v_reuseFailAlloc_2876_, 3, v_postponed_2865_);
lean_ctor_set(v_reuseFailAlloc_2876_, 4, v_diag_2866_);
v___x_2873_ = v_reuseFailAlloc_2876_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
lean_object* v___x_2874_; lean_object* v___x_2875_; 
v___x_2874_ = lean_st_ref_put(v___y_2841_, v___x_2873_);
v___x_2875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2875_, 0, v___x_2870_);
return v___x_2875_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___boxed(lean_object* v_mod_2923_, lean_object* v_isMeta_2924_, lean_object* v_hint_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_){
_start:
{
uint8_t v_isMeta_boxed_2931_; lean_object* v_res_2932_; 
v_isMeta_boxed_2931_ = lean_unbox(v_isMeta_2924_);
v_res_2932_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(v_mod_2923_, v_isMeta_boxed_2931_, v_hint_2925_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_);
lean_dec(v___y_2929_);
lean_dec_ref(v___y_2928_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
return v_res_2932_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__8___redArg(lean_object* v_a_2933_, lean_object* v_x_2934_){
_start:
{
if (lean_obj_tag(v_x_2934_) == 0)
{
lean_object* v___x_2935_; 
v___x_2935_ = lean_box(0);
return v___x_2935_;
}
else
{
lean_object* v_key_2936_; lean_object* v_value_2937_; lean_object* v_tail_2938_; uint8_t v___x_2939_; 
v_key_2936_ = lean_ctor_get(v_x_2934_, 0);
v_value_2937_ = lean_ctor_get(v_x_2934_, 1);
v_tail_2938_ = lean_ctor_get(v_x_2934_, 2);
v___x_2939_ = lean_name_eq(v_key_2936_, v_a_2933_);
if (v___x_2939_ == 0)
{
v_x_2934_ = v_tail_2938_;
goto _start;
}
else
{
lean_object* v___x_2941_; 
lean_inc(v_value_2937_);
v___x_2941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2941_, 0, v_value_2937_);
return v___x_2941_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__8___redArg___boxed(lean_object* v_a_2942_, lean_object* v_x_2943_){
_start:
{
lean_object* v_res_2944_; 
v_res_2944_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__8___redArg(v_a_2942_, v_x_2943_);
lean_dec(v_x_2943_);
lean_dec(v_a_2942_);
return v_res_2944_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(lean_object* v_m_2945_, lean_object* v_a_2946_){
_start:
{
lean_object* v_buckets_2947_; lean_object* v___x_2948_; uint64_t v___y_2950_; lean_object* v___x_2964_; 
v_buckets_2947_ = lean_ctor_get(v_m_2945_, 1);
v___x_2948_ = lean_array_get_size(v_buckets_2947_);
v___x_2964_ = l_unsafeCast___redArg(v_a_2946_);
if (lean_obj_tag(v___x_2964_) == 0)
{
uint64_t v___x_2965_; 
v___x_2965_ = 1723ULL;
v___y_2950_ = v___x_2965_;
goto v___jp_2949_;
}
else
{
uint64_t v_hash_2966_; 
v_hash_2966_ = lean_ctor_get_uint64(v___x_2964_, sizeof(void*)*2);
lean_dec(v___x_2964_);
v___y_2950_ = v_hash_2966_;
goto v___jp_2949_;
}
v___jp_2949_:
{
uint64_t v___x_2951_; uint64_t v___x_2952_; uint64_t v_fold_2953_; uint64_t v___x_2954_; uint64_t v___x_2955_; uint64_t v___x_2956_; size_t v___x_2957_; size_t v___x_2958_; size_t v___x_2959_; size_t v___x_2960_; size_t v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; 
v___x_2951_ = 32ULL;
v___x_2952_ = lean_uint64_shift_right(v___y_2950_, v___x_2951_);
v_fold_2953_ = lean_uint64_xor(v___y_2950_, v___x_2952_);
v___x_2954_ = 16ULL;
v___x_2955_ = lean_uint64_shift_right(v_fold_2953_, v___x_2954_);
v___x_2956_ = lean_uint64_xor(v_fold_2953_, v___x_2955_);
v___x_2957_ = lean_uint64_to_usize(v___x_2956_);
v___x_2958_ = lean_usize_of_nat(v___x_2948_);
v___x_2959_ = ((size_t)1ULL);
v___x_2960_ = lean_usize_sub(v___x_2958_, v___x_2959_);
v___x_2961_ = lean_usize_land(v___x_2957_, v___x_2960_);
v___x_2962_ = lean_array_uget_borrowed(v_buckets_2947_, v___x_2961_);
v___x_2963_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__8___redArg(v_a_2946_, v___x_2962_);
return v___x_2963_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg___boxed(lean_object* v_m_2967_, lean_object* v_a_2968_){
_start:
{
lean_object* v_res_2969_; 
v_res_2969_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(v_m_2967_, v_a_2968_);
lean_dec(v_a_2968_);
lean_dec_ref(v_m_2967_);
return v_res_2969_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4(lean_object* v___x_2970_, lean_object* v_declName_2971_, lean_object* v_as_2972_, size_t v_sz_2973_, size_t v_i_2974_, lean_object* v_b_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_){
_start:
{
uint8_t v___x_2981_; 
v___x_2981_ = lean_usize_dec_lt(v_i_2974_, v_sz_2973_);
if (v___x_2981_ == 0)
{
lean_object* v___x_2982_; 
lean_dec(v_declName_2971_);
v___x_2982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2982_, 0, v_b_2975_);
return v___x_2982_;
}
else
{
lean_object* v___x_2983_; lean_object* v_modules_2984_; lean_object* v___x_2985_; lean_object* v_a_2986_; lean_object* v___x_2987_; lean_object* v_toImport_2988_; lean_object* v_module_2989_; lean_object* v___x_2990_; uint8_t v___x_2991_; lean_object* v___x_2992_; 
v___x_2983_ = l_Lean_Environment_header(v___x_2970_);
v_modules_2984_ = lean_ctor_get(v___x_2983_, 3);
lean_inc_ref(v_modules_2984_);
lean_dec_ref(v___x_2983_);
v___x_2985_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_2986_ = lean_array_uget_borrowed(v_as_2972_, v_i_2974_);
v___x_2987_ = lean_array_get(v___x_2985_, v_modules_2984_, v_a_2986_);
lean_dec_ref(v_modules_2984_);
v_toImport_2988_ = lean_ctor_get(v___x_2987_, 0);
lean_inc_ref(v_toImport_2988_);
lean_dec(v___x_2987_);
v_module_2989_ = lean_ctor_get(v_toImport_2988_, 0);
lean_inc(v_module_2989_);
lean_dec_ref(v_toImport_2988_);
v___x_2990_ = lean_box(0);
v___x_2991_ = 0;
lean_inc(v_declName_2971_);
v___x_2992_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(v_module_2989_, v___x_2991_, v_declName_2971_, v___y_2976_, v___y_2977_, v___y_2978_, v___y_2979_);
if (lean_obj_tag(v___x_2992_) == 0)
{
size_t v___x_2993_; size_t v___x_2994_; 
lean_dec_ref_known(v___x_2992_, 1);
v___x_2993_ = ((size_t)1ULL);
v___x_2994_ = lean_usize_add(v_i_2974_, v___x_2993_);
v_i_2974_ = v___x_2994_;
v_b_2975_ = v___x_2990_;
goto _start;
}
else
{
lean_dec(v_declName_2971_);
return v___x_2992_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4___boxed(lean_object* v___x_2996_, lean_object* v_declName_2997_, lean_object* v_as_2998_, lean_object* v_sz_2999_, lean_object* v_i_3000_, lean_object* v_b_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_){
_start:
{
size_t v_sz_boxed_3007_; size_t v_i_boxed_3008_; lean_object* v_res_3009_; 
v_sz_boxed_3007_ = lean_unbox_usize(v_sz_2999_);
lean_dec(v_sz_2999_);
v_i_boxed_3008_ = lean_unbox_usize(v_i_3000_);
lean_dec(v_i_3000_);
v_res_3009_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4(v___x_2996_, v_declName_2997_, v_as_2998_, v_sz_boxed_3007_, v_i_boxed_3008_, v_b_3001_, v___y_3002_, v___y_3003_, v___y_3004_, v___y_3005_);
lean_dec(v___y_3005_);
lean_dec_ref(v___y_3004_);
lean_dec(v___y_3003_);
lean_dec_ref(v___y_3002_);
lean_dec_ref(v_as_2998_);
lean_dec_ref(v___x_2996_);
return v_res_3009_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0(void){
_start:
{
lean_object* v___x_3010_; 
v___x_3010_ = l_Std_HashMap_instInhabited___redArg();
return v___x_3010_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2(lean_object* v_declName_3013_, uint8_t v_isMeta_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_){
_start:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v_env_3025_; lean_object* v___y_3027_; lean_object* v___x_3040_; 
v___x_3020_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0);
v___x_3021_ = lean_st_ref_get(v___y_3018_);
v_env_3025_ = lean_ctor_get(v___x_3021_, 0);
lean_inc_ref(v_env_3025_);
lean_dec(v___x_3021_);
v___x_3040_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3025_, v_declName_3013_);
if (lean_obj_tag(v___x_3040_) == 0)
{
lean_dec_ref(v_env_3025_);
lean_dec(v_declName_3013_);
goto v___jp_3022_;
}
else
{
lean_object* v_val_3041_; lean_object* v___x_3042_; lean_object* v_modules_3043_; lean_object* v___x_3044_; uint8_t v___x_3045_; 
v_val_3041_ = lean_ctor_get(v___x_3040_, 0);
lean_inc(v_val_3041_);
lean_dec_ref_known(v___x_3040_, 1);
v___x_3042_ = l_Lean_Environment_header(v_env_3025_);
v_modules_3043_ = lean_ctor_get(v___x_3042_, 3);
lean_inc_ref(v_modules_3043_);
lean_dec_ref(v___x_3042_);
v___x_3044_ = lean_array_get_size(v_modules_3043_);
v___x_3045_ = lean_nat_dec_lt(v_val_3041_, v___x_3044_);
if (v___x_3045_ == 0)
{
lean_dec_ref(v_modules_3043_);
lean_dec(v_val_3041_);
lean_dec_ref(v_env_3025_);
lean_dec(v_declName_3013_);
goto v___jp_3022_;
}
else
{
lean_object* v___x_3046_; lean_object* v___x_3047_; uint8_t v___y_3049_; 
v___x_3046_ = lean_array_fget(v_modules_3043_, v_val_3041_);
lean_dec(v_val_3041_);
lean_dec_ref(v_modules_3043_);
v___x_3047_ = lean_st_ref_get(v___y_3018_);
if (v_isMeta_3014_ == 0)
{
lean_dec(v___x_3047_);
v___y_3049_ = v_isMeta_3014_;
goto v___jp_3048_;
}
else
{
lean_object* v_env_3060_; uint8_t v___x_3061_; 
v_env_3060_ = lean_ctor_get(v___x_3047_, 0);
lean_inc_ref(v_env_3060_);
lean_dec(v___x_3047_);
lean_inc(v_declName_3013_);
v___x_3061_ = l_Lean_isMarkedMeta(v_env_3060_, v_declName_3013_);
if (v___x_3061_ == 0)
{
v___y_3049_ = v_isMeta_3014_;
goto v___jp_3048_;
}
else
{
uint8_t v___x_3062_; 
v___x_3062_ = 0;
v___y_3049_ = v___x_3062_;
goto v___jp_3048_;
}
}
v___jp_3048_:
{
lean_object* v_toImport_3050_; lean_object* v_module_3051_; lean_object* v___x_3052_; 
v_toImport_3050_ = lean_ctor_get(v___x_3046_, 0);
lean_inc_ref(v_toImport_3050_);
lean_dec(v___x_3046_);
v_module_3051_ = lean_ctor_get(v_toImport_3050_, 0);
lean_inc(v_module_3051_);
lean_dec_ref(v_toImport_3050_);
lean_inc(v_declName_3013_);
v___x_3052_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(v_module_3051_, v___y_3049_, v_declName_3013_, v___y_3015_, v___y_3016_, v___y_3017_, v___y_3018_);
if (lean_obj_tag(v___x_3052_) == 0)
{
lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; 
lean_dec_ref_known(v___x_3052_, 1);
v___x_3053_ = l_Lean_indirectModUseExt;
v___x_3054_ = lean_box(1);
v___x_3055_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1);
lean_inc_ref(v_env_3025_);
v___x_3056_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3020_, v___x_3053_, v_env_3025_, v___x_3054_, v___x_3055_);
v___x_3057_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(v___x_3056_, v_declName_3013_);
lean_dec(v___x_3056_);
if (lean_obj_tag(v___x_3057_) == 0)
{
lean_object* v___x_3058_; 
v___x_3058_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1));
v___y_3027_ = v___x_3058_;
goto v___jp_3026_;
}
else
{
lean_object* v_val_3059_; 
v_val_3059_ = lean_ctor_get(v___x_3057_, 0);
lean_inc(v_val_3059_);
lean_dec_ref_known(v___x_3057_, 1);
v___y_3027_ = v_val_3059_;
goto v___jp_3026_;
}
}
else
{
lean_dec_ref(v_env_3025_);
lean_dec(v_declName_3013_);
return v___x_3052_;
}
}
}
}
v___jp_3022_:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; 
v___x_3023_ = lean_box(0);
v___x_3024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3024_, 0, v___x_3023_);
return v___x_3024_;
}
v___jp_3026_:
{
lean_object* v___x_3028_; size_t v_sz_3029_; size_t v___x_3030_; lean_object* v___x_3031_; 
v___x_3028_ = lean_box(0);
v_sz_3029_ = lean_array_size(v___y_3027_);
v___x_3030_ = ((size_t)0ULL);
v___x_3031_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4(v_env_3025_, v_declName_3013_, v___y_3027_, v_sz_3029_, v___x_3030_, v___x_3028_, v___y_3015_, v___y_3016_, v___y_3017_, v___y_3018_);
lean_dec_ref(v___y_3027_);
lean_dec_ref(v_env_3025_);
if (lean_obj_tag(v___x_3031_) == 0)
{
lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3038_; 
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_3031_);
if (v_isSharedCheck_3038_ == 0)
{
lean_object* v_unused_3039_; 
v_unused_3039_ = lean_ctor_get(v___x_3031_, 0);
lean_dec(v_unused_3039_);
v___x_3033_ = v___x_3031_;
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
else
{
lean_dec(v___x_3031_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v___x_3036_; 
if (v_isShared_3034_ == 0)
{
lean_ctor_set(v___x_3033_, 0, v___x_3028_);
v___x_3036_ = v___x_3033_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v___x_3028_);
v___x_3036_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
return v___x_3036_;
}
}
}
else
{
return v___x_3031_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___boxed(lean_object* v_declName_3063_, lean_object* v_isMeta_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_){
_start:
{
uint8_t v_isMeta_boxed_3070_; lean_object* v_res_3071_; 
v_isMeta_boxed_3070_ = lean_unbox(v_isMeta_3064_);
v_res_3071_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2(v_declName_3063_, v_isMeta_boxed_3070_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_);
lean_dec(v___y_3068_);
lean_dec_ref(v___y_3067_);
lean_dec(v___y_3066_);
lean_dec_ref(v___y_3065_);
return v_res_3071_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0(lean_object* v___y_3072_, uint8_t v_isExporting_3073_, lean_object* v___x_3074_, lean_object* v___y_3075_, lean_object* v___x_3076_, lean_object* v_a_x3f_3077_){
_start:
{
lean_object* v___x_3079_; lean_object* v_env_3080_; lean_object* v_nextMacroScope_3081_; lean_object* v_ngen_3082_; lean_object* v_auxDeclNGen_3083_; lean_object* v_traceState_3084_; lean_object* v_messages_3085_; lean_object* v_infoState_3086_; lean_object* v_snapshotTasks_3087_; lean_object* v___x_3089_; uint8_t v_isShared_3090_; uint8_t v_isSharedCheck_3112_; 
v___x_3079_ = lean_st_ref_take(v___y_3072_);
v_env_3080_ = lean_ctor_get(v___x_3079_, 0);
v_nextMacroScope_3081_ = lean_ctor_get(v___x_3079_, 1);
v_ngen_3082_ = lean_ctor_get(v___x_3079_, 2);
v_auxDeclNGen_3083_ = lean_ctor_get(v___x_3079_, 3);
v_traceState_3084_ = lean_ctor_get(v___x_3079_, 4);
v_messages_3085_ = lean_ctor_get(v___x_3079_, 6);
v_infoState_3086_ = lean_ctor_get(v___x_3079_, 7);
v_snapshotTasks_3087_ = lean_ctor_get(v___x_3079_, 8);
v_isSharedCheck_3112_ = !lean_is_exclusive(v___x_3079_);
if (v_isSharedCheck_3112_ == 0)
{
lean_object* v_unused_3113_; 
v_unused_3113_ = lean_ctor_get(v___x_3079_, 5);
lean_dec(v_unused_3113_);
v___x_3089_ = v___x_3079_;
v_isShared_3090_ = v_isSharedCheck_3112_;
goto v_resetjp_3088_;
}
else
{
lean_inc(v_snapshotTasks_3087_);
lean_inc(v_infoState_3086_);
lean_inc(v_messages_3085_);
lean_inc(v_traceState_3084_);
lean_inc(v_auxDeclNGen_3083_);
lean_inc(v_ngen_3082_);
lean_inc(v_nextMacroScope_3081_);
lean_inc(v_env_3080_);
lean_dec(v___x_3079_);
v___x_3089_ = lean_box(0);
v_isShared_3090_ = v_isSharedCheck_3112_;
goto v_resetjp_3088_;
}
v_resetjp_3088_:
{
lean_object* v___x_3091_; lean_object* v___x_3093_; 
v___x_3091_ = l_Lean_Environment_setExporting(v_env_3080_, v_isExporting_3073_);
if (v_isShared_3090_ == 0)
{
lean_ctor_set(v___x_3089_, 5, v___x_3074_);
lean_ctor_set(v___x_3089_, 0, v___x_3091_);
v___x_3093_ = v___x_3089_;
goto v_reusejp_3092_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v___x_3091_);
lean_ctor_set(v_reuseFailAlloc_3111_, 1, v_nextMacroScope_3081_);
lean_ctor_set(v_reuseFailAlloc_3111_, 2, v_ngen_3082_);
lean_ctor_set(v_reuseFailAlloc_3111_, 3, v_auxDeclNGen_3083_);
lean_ctor_set(v_reuseFailAlloc_3111_, 4, v_traceState_3084_);
lean_ctor_set(v_reuseFailAlloc_3111_, 5, v___x_3074_);
lean_ctor_set(v_reuseFailAlloc_3111_, 6, v_messages_3085_);
lean_ctor_set(v_reuseFailAlloc_3111_, 7, v_infoState_3086_);
lean_ctor_set(v_reuseFailAlloc_3111_, 8, v_snapshotTasks_3087_);
v___x_3093_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3092_;
}
v_reusejp_3092_:
{
lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v_mctx_3096_; lean_object* v_zetaDeltaFVarIds_3097_; lean_object* v_postponed_3098_; lean_object* v_diag_3099_; lean_object* v___x_3101_; uint8_t v_isShared_3102_; uint8_t v_isSharedCheck_3109_; 
v___x_3094_ = lean_st_ref_put(v___y_3072_, v___x_3093_);
v___x_3095_ = lean_st_ref_take(v___y_3075_);
v_mctx_3096_ = lean_ctor_get(v___x_3095_, 0);
v_zetaDeltaFVarIds_3097_ = lean_ctor_get(v___x_3095_, 2);
v_postponed_3098_ = lean_ctor_get(v___x_3095_, 3);
v_diag_3099_ = lean_ctor_get(v___x_3095_, 4);
v_isSharedCheck_3109_ = !lean_is_exclusive(v___x_3095_);
if (v_isSharedCheck_3109_ == 0)
{
lean_object* v_unused_3110_; 
v_unused_3110_ = lean_ctor_get(v___x_3095_, 1);
lean_dec(v_unused_3110_);
v___x_3101_ = v___x_3095_;
v_isShared_3102_ = v_isSharedCheck_3109_;
goto v_resetjp_3100_;
}
else
{
lean_inc(v_diag_3099_);
lean_inc(v_postponed_3098_);
lean_inc(v_zetaDeltaFVarIds_3097_);
lean_inc(v_mctx_3096_);
lean_dec(v___x_3095_);
v___x_3101_ = lean_box(0);
v_isShared_3102_ = v_isSharedCheck_3109_;
goto v_resetjp_3100_;
}
v_resetjp_3100_:
{
lean_object* v___x_3103_; lean_object* v___x_3105_; 
v___x_3103_ = lean_box(0);
if (v_isShared_3102_ == 0)
{
lean_ctor_set(v___x_3101_, 1, v___x_3076_);
v___x_3105_ = v___x_3101_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v_mctx_3096_);
lean_ctor_set(v_reuseFailAlloc_3108_, 1, v___x_3076_);
lean_ctor_set(v_reuseFailAlloc_3108_, 2, v_zetaDeltaFVarIds_3097_);
lean_ctor_set(v_reuseFailAlloc_3108_, 3, v_postponed_3098_);
lean_ctor_set(v_reuseFailAlloc_3108_, 4, v_diag_3099_);
v___x_3105_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
lean_object* v___x_3106_; lean_object* v___x_3107_; 
v___x_3106_ = lean_st_ref_put(v___y_3075_, v___x_3105_);
v___x_3107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3103_);
return v___x_3107_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0___boxed(lean_object* v___y_3114_, lean_object* v_isExporting_3115_, lean_object* v___x_3116_, lean_object* v___y_3117_, lean_object* v___x_3118_, lean_object* v_a_x3f_3119_, lean_object* v___y_3120_){
_start:
{
uint8_t v_isExporting_boxed_3121_; lean_object* v_res_3122_; 
v_isExporting_boxed_3121_ = lean_unbox(v_isExporting_3115_);
v_res_3122_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0(v___y_3114_, v_isExporting_boxed_3121_, v___x_3116_, v___y_3117_, v___x_3118_, v_a_x3f_3119_);
lean_dec(v_a_x3f_3119_);
lean_dec(v___y_3117_);
lean_dec(v___y_3114_);
return v_res_3122_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg(lean_object* v_x_3123_, uint8_t v_isExporting_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_){
_start:
{
lean_object* v___x_3130_; lean_object* v_env_3131_; lean_object* v___x_3132_; uint8_t v_isModule_3133_; 
v___x_3130_ = lean_st_ref_get(v___y_3128_);
v_env_3131_ = lean_ctor_get(v___x_3130_, 0);
lean_inc_ref(v_env_3131_);
lean_dec(v___x_3130_);
v___x_3132_ = l_Lean_Environment_header(v_env_3131_);
v_isModule_3133_ = lean_ctor_get_uint8(v___x_3132_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_3132_);
if (v_isModule_3133_ == 0)
{
lean_object* v___x_3134_; 
lean_dec_ref(v_env_3131_);
lean_inc(v___y_3128_);
lean_inc_ref(v___y_3127_);
lean_inc(v___y_3126_);
lean_inc_ref(v___y_3125_);
v___x_3134_ = lean_apply_5(v_x_3123_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_, lean_box(0));
return v___x_3134_;
}
else
{
uint8_t v_isExporting_3135_; 
v_isExporting_3135_ = lean_ctor_get_uint8(v_env_3131_, sizeof(void*)*8);
lean_dec_ref(v_env_3131_);
if (v_isExporting_3124_ == 0)
{
if (v_isExporting_3135_ == 0)
{
lean_object* v___x_3201_; 
lean_inc(v___y_3128_);
lean_inc_ref(v___y_3127_);
lean_inc(v___y_3126_);
lean_inc_ref(v___y_3125_);
v___x_3201_ = lean_apply_5(v_x_3123_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_, lean_box(0));
return v___x_3201_;
}
else
{
goto v___jp_3136_;
}
}
else
{
if (v_isExporting_3135_ == 0)
{
goto v___jp_3136_;
}
else
{
lean_object* v___x_3202_; 
lean_inc(v___y_3128_);
lean_inc_ref(v___y_3127_);
lean_inc(v___y_3126_);
lean_inc_ref(v___y_3125_);
v___x_3202_ = lean_apply_5(v_x_3123_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_, lean_box(0));
return v___x_3202_;
}
}
v___jp_3136_:
{
lean_object* v___x_3137_; lean_object* v_env_3138_; lean_object* v_nextMacroScope_3139_; lean_object* v_ngen_3140_; lean_object* v_auxDeclNGen_3141_; lean_object* v_traceState_3142_; lean_object* v_messages_3143_; lean_object* v_infoState_3144_; lean_object* v_snapshotTasks_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3199_; 
v___x_3137_ = lean_st_ref_take(v___y_3128_);
v_env_3138_ = lean_ctor_get(v___x_3137_, 0);
v_nextMacroScope_3139_ = lean_ctor_get(v___x_3137_, 1);
v_ngen_3140_ = lean_ctor_get(v___x_3137_, 2);
v_auxDeclNGen_3141_ = lean_ctor_get(v___x_3137_, 3);
v_traceState_3142_ = lean_ctor_get(v___x_3137_, 4);
v_messages_3143_ = lean_ctor_get(v___x_3137_, 6);
v_infoState_3144_ = lean_ctor_get(v___x_3137_, 7);
v_snapshotTasks_3145_ = lean_ctor_get(v___x_3137_, 8);
v_isSharedCheck_3199_ = !lean_is_exclusive(v___x_3137_);
if (v_isSharedCheck_3199_ == 0)
{
lean_object* v_unused_3200_; 
v_unused_3200_ = lean_ctor_get(v___x_3137_, 5);
lean_dec(v_unused_3200_);
v___x_3147_ = v___x_3137_;
v_isShared_3148_ = v_isSharedCheck_3199_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_snapshotTasks_3145_);
lean_inc(v_infoState_3144_);
lean_inc(v_messages_3143_);
lean_inc(v_traceState_3142_);
lean_inc(v_auxDeclNGen_3141_);
lean_inc(v_ngen_3140_);
lean_inc(v_nextMacroScope_3139_);
lean_inc(v_env_3138_);
lean_dec(v___x_3137_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3199_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3152_; 
v___x_3149_ = l_Lean_Environment_setExporting(v_env_3138_, v_isExporting_3124_);
v___x_3150_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
if (v_isShared_3148_ == 0)
{
lean_ctor_set(v___x_3147_, 5, v___x_3150_);
lean_ctor_set(v___x_3147_, 0, v___x_3149_);
v___x_3152_ = v___x_3147_;
goto v_reusejp_3151_;
}
else
{
lean_object* v_reuseFailAlloc_3198_; 
v_reuseFailAlloc_3198_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3198_, 0, v___x_3149_);
lean_ctor_set(v_reuseFailAlloc_3198_, 1, v_nextMacroScope_3139_);
lean_ctor_set(v_reuseFailAlloc_3198_, 2, v_ngen_3140_);
lean_ctor_set(v_reuseFailAlloc_3198_, 3, v_auxDeclNGen_3141_);
lean_ctor_set(v_reuseFailAlloc_3198_, 4, v_traceState_3142_);
lean_ctor_set(v_reuseFailAlloc_3198_, 5, v___x_3150_);
lean_ctor_set(v_reuseFailAlloc_3198_, 6, v_messages_3143_);
lean_ctor_set(v_reuseFailAlloc_3198_, 7, v_infoState_3144_);
lean_ctor_set(v_reuseFailAlloc_3198_, 8, v_snapshotTasks_3145_);
v___x_3152_ = v_reuseFailAlloc_3198_;
goto v_reusejp_3151_;
}
v_reusejp_3151_:
{
lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v_mctx_3155_; lean_object* v_zetaDeltaFVarIds_3156_; lean_object* v_postponed_3157_; lean_object* v_diag_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3196_; 
v___x_3153_ = lean_st_ref_put(v___y_3128_, v___x_3152_);
v___x_3154_ = lean_st_ref_take(v___y_3126_);
v_mctx_3155_ = lean_ctor_get(v___x_3154_, 0);
v_zetaDeltaFVarIds_3156_ = lean_ctor_get(v___x_3154_, 2);
v_postponed_3157_ = lean_ctor_get(v___x_3154_, 3);
v_diag_3158_ = lean_ctor_get(v___x_3154_, 4);
v_isSharedCheck_3196_ = !lean_is_exclusive(v___x_3154_);
if (v_isSharedCheck_3196_ == 0)
{
lean_object* v_unused_3197_; 
v_unused_3197_ = lean_ctor_get(v___x_3154_, 1);
lean_dec(v_unused_3197_);
v___x_3160_ = v___x_3154_;
v_isShared_3161_ = v_isSharedCheck_3196_;
goto v_resetjp_3159_;
}
else
{
lean_inc(v_diag_3158_);
lean_inc(v_postponed_3157_);
lean_inc(v_zetaDeltaFVarIds_3156_);
lean_inc(v_mctx_3155_);
lean_dec(v___x_3154_);
v___x_3160_ = lean_box(0);
v_isShared_3161_ = v_isSharedCheck_3196_;
goto v_resetjp_3159_;
}
v_resetjp_3159_:
{
lean_object* v___x_3162_; lean_object* v___x_3164_; 
v___x_3162_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0);
if (v_isShared_3161_ == 0)
{
lean_ctor_set(v___x_3160_, 1, v___x_3162_);
v___x_3164_ = v___x_3160_;
goto v_reusejp_3163_;
}
else
{
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v_mctx_3155_);
lean_ctor_set(v_reuseFailAlloc_3195_, 1, v___x_3162_);
lean_ctor_set(v_reuseFailAlloc_3195_, 2, v_zetaDeltaFVarIds_3156_);
lean_ctor_set(v_reuseFailAlloc_3195_, 3, v_postponed_3157_);
lean_ctor_set(v_reuseFailAlloc_3195_, 4, v_diag_3158_);
v___x_3164_ = v_reuseFailAlloc_3195_;
goto v_reusejp_3163_;
}
v_reusejp_3163_:
{
lean_object* v___x_3165_; lean_object* v_r_3166_; 
v___x_3165_ = lean_st_ref_put(v___y_3126_, v___x_3164_);
lean_inc(v___y_3128_);
lean_inc_ref(v___y_3127_);
lean_inc(v___y_3126_);
lean_inc_ref(v___y_3125_);
v_r_3166_ = lean_apply_5(v_x_3123_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_, lean_box(0));
if (lean_obj_tag(v_r_3166_) == 0)
{
lean_object* v_a_3167_; lean_object* v___x_3169_; uint8_t v_isShared_3170_; uint8_t v_isSharedCheck_3183_; 
v_a_3167_ = lean_ctor_get(v_r_3166_, 0);
v_isSharedCheck_3183_ = !lean_is_exclusive(v_r_3166_);
if (v_isSharedCheck_3183_ == 0)
{
v___x_3169_ = v_r_3166_;
v_isShared_3170_ = v_isSharedCheck_3183_;
goto v_resetjp_3168_;
}
else
{
lean_inc(v_a_3167_);
lean_dec(v_r_3166_);
v___x_3169_ = lean_box(0);
v_isShared_3170_ = v_isSharedCheck_3183_;
goto v_resetjp_3168_;
}
v_resetjp_3168_:
{
lean_object* v___x_3172_; 
lean_inc(v_a_3167_);
if (v_isShared_3170_ == 0)
{
lean_ctor_set_tag(v___x_3169_, 1);
v___x_3172_ = v___x_3169_;
goto v_reusejp_3171_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v_a_3167_);
v___x_3172_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3171_;
}
v_reusejp_3171_:
{
lean_object* v___x_3173_; lean_object* v___x_3175_; uint8_t v_isShared_3176_; uint8_t v_isSharedCheck_3180_; 
v___x_3173_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0(v___y_3128_, v_isExporting_3135_, v___x_3150_, v___y_3126_, v___x_3162_, v___x_3172_);
lean_dec_ref(v___x_3172_);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3173_);
if (v_isSharedCheck_3180_ == 0)
{
lean_object* v_unused_3181_; 
v_unused_3181_ = lean_ctor_get(v___x_3173_, 0);
lean_dec(v_unused_3181_);
v___x_3175_ = v___x_3173_;
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
else
{
lean_dec(v___x_3173_);
v___x_3175_ = lean_box(0);
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
v_resetjp_3174_:
{
lean_object* v___x_3178_; 
if (v_isShared_3176_ == 0)
{
lean_ctor_set(v___x_3175_, 0, v_a_3167_);
v___x_3178_ = v___x_3175_;
goto v_reusejp_3177_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v_a_3167_);
v___x_3178_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3177_;
}
v_reusejp_3177_:
{
return v___x_3178_;
}
}
}
}
}
else
{
lean_object* v_a_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3188_; uint8_t v_isShared_3189_; uint8_t v_isSharedCheck_3193_; 
v_a_3184_ = lean_ctor_get(v_r_3166_, 0);
lean_inc(v_a_3184_);
lean_dec_ref_known(v_r_3166_, 1);
v___x_3185_ = lean_box(0);
v___x_3186_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0(v___y_3128_, v_isExporting_3135_, v___x_3150_, v___y_3126_, v___x_3162_, v___x_3185_);
v_isSharedCheck_3193_ = !lean_is_exclusive(v___x_3186_);
if (v_isSharedCheck_3193_ == 0)
{
lean_object* v_unused_3194_; 
v_unused_3194_ = lean_ctor_get(v___x_3186_, 0);
lean_dec(v_unused_3194_);
v___x_3188_ = v___x_3186_;
v_isShared_3189_ = v_isSharedCheck_3193_;
goto v_resetjp_3187_;
}
else
{
lean_dec(v___x_3186_);
v___x_3188_ = lean_box(0);
v_isShared_3189_ = v_isSharedCheck_3193_;
goto v_resetjp_3187_;
}
v_resetjp_3187_:
{
lean_object* v___x_3191_; 
if (v_isShared_3189_ == 0)
{
lean_ctor_set_tag(v___x_3188_, 1);
lean_ctor_set(v___x_3188_, 0, v_a_3184_);
v___x_3191_ = v___x_3188_;
goto v_reusejp_3190_;
}
else
{
lean_object* v_reuseFailAlloc_3192_; 
v_reuseFailAlloc_3192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3192_, 0, v_a_3184_);
v___x_3191_ = v_reuseFailAlloc_3192_;
goto v_reusejp_3190_;
}
v_reusejp_3190_:
{
return v___x_3191_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___boxed(lean_object* v_x_3203_, lean_object* v_isExporting_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_){
_start:
{
uint8_t v_isExporting_boxed_3210_; lean_object* v_res_3211_; 
v_isExporting_boxed_3210_ = lean_unbox(v_isExporting_3204_);
v_res_3211_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg(v_x_3203_, v_isExporting_boxed_3210_, v___y_3205_, v___y_3206_, v___y_3207_, v___y_3208_);
lean_dec(v___y_3208_);
lean_dec_ref(v___y_3207_);
lean_dec(v___y_3206_);
lean_dec_ref(v___y_3205_);
return v_res_3211_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(lean_object* v_x_3212_, uint8_t v_when_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_){
_start:
{
if (v_when_3213_ == 0)
{
lean_object* v___x_3219_; 
lean_inc(v___y_3217_);
lean_inc_ref(v___y_3216_);
lean_inc(v___y_3215_);
lean_inc_ref(v___y_3214_);
v___x_3219_ = lean_apply_5(v_x_3212_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_, lean_box(0));
return v___x_3219_;
}
else
{
uint8_t v___x_3220_; lean_object* v___x_3221_; 
v___x_3220_ = 0;
v___x_3221_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg(v_x_3212_, v___x_3220_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_);
return v___x_3221_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg___boxed(lean_object* v_x_3222_, lean_object* v_when_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_){
_start:
{
uint8_t v_when_boxed_3229_; lean_object* v_res_3230_; 
v_when_boxed_3229_ = lean_unbox(v_when_3223_);
v_res_3230_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(v_x_3222_, v_when_boxed_3229_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_);
lean_dec(v___y_3227_);
lean_dec_ref(v___y_3226_);
lean_dec(v___y_3225_);
lean_dec_ref(v___y_3224_);
return v_res_3230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3(lean_object* v_ext_3231_, uint8_t v_showInfo_3232_, uint8_t v_minIndexable_3233_, lean_object* v_attrName_3234_, lean_object* v___x_3235_, lean_object* v_declName_3236_, lean_object* v_stx_3237_, uint8_t v_attrKind_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_){
_start:
{
uint8_t v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___f_3247_; uint8_t v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___y_3264_; lean_object* v___x_3274_; 
v___x_3242_ = 0;
v___x_3243_ = lean_box(v___x_3242_);
v___x_3244_ = lean_box(v_attrKind_3238_);
v___x_3245_ = lean_box(v_showInfo_3232_);
v___x_3246_ = lean_box(v_minIndexable_3233_);
lean_inc(v_declName_3236_);
v___f_3247_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___boxed), 13, 8);
lean_closure_set(v___f_3247_, 0, v_declName_3236_);
lean_closure_set(v___f_3247_, 1, v___x_3243_);
lean_closure_set(v___f_3247_, 2, v___x_3244_);
lean_closure_set(v___f_3247_, 3, v_stx_3237_);
lean_closure_set(v___f_3247_, 4, v_ext_3231_);
lean_closure_set(v___f_3247_, 5, v___x_3245_);
lean_closure_set(v___f_3247_, 6, v___x_3246_);
lean_closure_set(v___f_3247_, 7, v_attrName_3234_);
v___x_3248_ = 1;
v___x_3249_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2);
v___x_3250_ = lean_unsigned_to_nat(32u);
v___x_3251_ = lean_mk_empty_array_with_capacity(v___x_3250_);
lean_dec_ref(v___x_3251_);
v___x_3252_ = lean_unsigned_to_nat(0u);
v___x_3253_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4);
v___x_3254_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4);
v___x_3255_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5));
v___x_3256_ = lean_box(0);
lean_inc(v___x_3235_);
v___x_3257_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3257_, 0, v___x_3249_);
lean_ctor_set(v___x_3257_, 1, v___x_3235_);
lean_ctor_set(v___x_3257_, 2, v___x_3254_);
lean_ctor_set(v___x_3257_, 3, v___x_3255_);
lean_ctor_set(v___x_3257_, 4, v___x_3256_);
lean_ctor_set(v___x_3257_, 5, v___x_3252_);
lean_ctor_set(v___x_3257_, 6, v___x_3256_);
lean_ctor_set_uint8(v___x_3257_, sizeof(void*)*7, v___x_3242_);
lean_ctor_set_uint8(v___x_3257_, sizeof(void*)*7 + 1, v___x_3242_);
lean_ctor_set_uint8(v___x_3257_, sizeof(void*)*7 + 2, v___x_3242_);
lean_ctor_set_uint8(v___x_3257_, sizeof(void*)*7 + 3, v___x_3248_);
v___x_3258_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6);
v___x_3259_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7);
v___x_3260_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8);
v___x_3261_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3261_, 0, v___x_3258_);
lean_ctor_set(v___x_3261_, 1, v___x_3259_);
lean_ctor_set(v___x_3261_, 2, v___x_3235_);
lean_ctor_set(v___x_3261_, 3, v___x_3253_);
lean_ctor_set(v___x_3261_, 4, v___x_3260_);
v___x_3262_ = lean_st_mk_ref(v___x_3261_);
v___x_3274_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2(v_declName_3236_, v___x_3242_, v___x_3257_, v___x_3262_, v___y_3239_, v___y_3240_);
if (lean_obj_tag(v___x_3274_) == 0)
{
lean_object* v___x_3275_; 
lean_dec_ref_known(v___x_3274_, 1);
v___x_3275_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(v___f_3247_, v___x_3248_, v___x_3257_, v___x_3262_, v___y_3239_, v___y_3240_);
lean_dec_ref_known(v___x_3257_, 7);
v___y_3264_ = v___x_3275_;
goto v___jp_3263_;
}
else
{
lean_dec_ref_known(v___x_3257_, 7);
lean_dec_ref(v___f_3247_);
v___y_3264_ = v___x_3274_;
goto v___jp_3263_;
}
v___jp_3263_:
{
if (lean_obj_tag(v___y_3264_) == 0)
{
lean_object* v_a_3265_; lean_object* v___x_3267_; uint8_t v_isShared_3268_; uint8_t v_isSharedCheck_3273_; 
v_a_3265_ = lean_ctor_get(v___y_3264_, 0);
v_isSharedCheck_3273_ = !lean_is_exclusive(v___y_3264_);
if (v_isSharedCheck_3273_ == 0)
{
v___x_3267_ = v___y_3264_;
v_isShared_3268_ = v_isSharedCheck_3273_;
goto v_resetjp_3266_;
}
else
{
lean_inc(v_a_3265_);
lean_dec(v___y_3264_);
v___x_3267_ = lean_box(0);
v_isShared_3268_ = v_isSharedCheck_3273_;
goto v_resetjp_3266_;
}
v_resetjp_3266_:
{
lean_object* v___x_3269_; lean_object* v___x_3271_; 
v___x_3269_ = lean_st_ref_get(v___x_3262_);
lean_dec(v___x_3262_);
lean_dec(v___x_3269_);
if (v_isShared_3268_ == 0)
{
v___x_3271_ = v___x_3267_;
goto v_reusejp_3270_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v_a_3265_);
v___x_3271_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3270_;
}
v_reusejp_3270_:
{
return v___x_3271_;
}
}
}
else
{
lean_dec(v___x_3262_);
return v___y_3264_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3___boxed(lean_object* v_ext_3276_, lean_object* v_showInfo_3277_, lean_object* v_minIndexable_3278_, lean_object* v_attrName_3279_, lean_object* v___x_3280_, lean_object* v_declName_3281_, lean_object* v_stx_3282_, lean_object* v_attrKind_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_){
_start:
{
uint8_t v_showInfo_boxed_3287_; uint8_t v_minIndexable_boxed_3288_; uint8_t v_attrKind_boxed_3289_; lean_object* v_res_3290_; 
v_showInfo_boxed_3287_ = lean_unbox(v_showInfo_3277_);
v_minIndexable_boxed_3288_ = lean_unbox(v_minIndexable_3278_);
v_attrKind_boxed_3289_ = lean_unbox(v_attrKind_3283_);
v_res_3290_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3(v_ext_3276_, v_showInfo_boxed_3287_, v_minIndexable_boxed_3288_, v_attrName_3279_, v___x_3280_, v_declName_3281_, v_stx_3282_, v_attrKind_boxed_3289_, v___y_3284_, v___y_3285_);
lean_dec(v___y_3285_);
lean_dec_ref(v___y_3284_);
return v_res_3290_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(lean_object* v_attrName_3313_, uint8_t v_minIndexable_3314_, uint8_t v_showInfo_3315_, lean_object* v_ext_3316_, lean_object* v_ref_3317_){
_start:
{
lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___f_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___f_3324_; lean_object* v___y_3326_; lean_object* v___y_3327_; lean_object* v___y_3370_; 
v___x_3319_ = lean_box(1);
v___x_3320_ = lean_box(v_showInfo_3315_);
lean_inc_n(v_attrName_3313_, 2);
lean_inc_ref(v_ext_3316_);
v___f_3321_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___boxed), 8, 4);
lean_closure_set(v___f_3321_, 0, v_ext_3316_);
lean_closure_set(v___f_3321_, 1, v___x_3319_);
lean_closure_set(v___f_3321_, 2, v___x_3320_);
lean_closure_set(v___f_3321_, 3, v_attrName_3313_);
v___x_3322_ = lean_box(v_showInfo_3315_);
v___x_3323_ = lean_box(v_minIndexable_3314_);
v___f_3324_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3___boxed), 11, 5);
lean_closure_set(v___f_3324_, 0, v_ext_3316_);
lean_closure_set(v___f_3324_, 1, v___x_3322_);
lean_closure_set(v___f_3324_, 2, v___x_3323_);
lean_closure_set(v___f_3324_, 3, v_attrName_3313_);
lean_closure_set(v___f_3324_, 4, v___x_3319_);
if (v_minIndexable_3314_ == 0)
{
if (v_showInfo_3315_ == 0)
{
lean_inc(v_attrName_3313_);
v___y_3370_ = v_attrName_3313_;
goto v___jp_3369_;
}
else
{
lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3398_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__19));
lean_inc(v_attrName_3313_);
v___x_3399_ = lean_name_append_after(v_attrName_3313_, v___x_3398_);
v___y_3370_ = v___x_3399_;
goto v___jp_3369_;
}
}
else
{
if (v_showInfo_3315_ == 0)
{
lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3400_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__20));
lean_inc(v_attrName_3313_);
v___x_3401_ = lean_name_append_after(v_attrName_3313_, v___x_3400_);
v___y_3370_ = v___x_3401_;
goto v___jp_3369_;
}
else
{
lean_object* v___x_3402_; lean_object* v___x_3403_; 
v___x_3402_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__21));
lean_inc(v_attrName_3313_);
v___x_3403_ = lean_name_append_after(v_attrName_3313_, v___x_3402_);
v___y_3370_ = v___x_3403_;
goto v___jp_3369_;
}
}
v___jp_3325_:
{
lean_object* v___x_3328_; uint8_t v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; uint8_t v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
v___x_3328_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__0));
v___x_3329_ = 1;
v___x_3330_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_3313_, v___x_3329_);
v___x_3331_ = lean_string_append(v___x_3328_, v___x_3330_);
v___x_3332_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__1));
v___x_3333_ = lean_string_append(v___x_3331_, v___x_3332_);
v___x_3334_ = lean_string_append(v___x_3333_, v___x_3330_);
v___x_3335_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__2));
v___x_3336_ = lean_string_append(v___x_3334_, v___x_3335_);
v___x_3337_ = lean_string_append(v___x_3336_, v___x_3330_);
v___x_3338_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__3));
v___x_3339_ = lean_string_append(v___x_3337_, v___x_3338_);
v___x_3340_ = lean_string_append(v___x_3339_, v___x_3330_);
v___x_3341_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__4));
v___x_3342_ = lean_string_append(v___x_3340_, v___x_3341_);
v___x_3343_ = lean_string_append(v___x_3342_, v___x_3330_);
v___x_3344_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__5));
v___x_3345_ = lean_string_append(v___x_3343_, v___x_3344_);
v___x_3346_ = lean_string_append(v___x_3345_, v___x_3330_);
v___x_3347_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__6));
v___x_3348_ = lean_string_append(v___x_3346_, v___x_3347_);
v___x_3349_ = lean_string_append(v___x_3348_, v___x_3330_);
v___x_3350_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__7));
v___x_3351_ = lean_string_append(v___x_3349_, v___x_3350_);
v___x_3352_ = lean_string_append(v___x_3351_, v___x_3330_);
v___x_3353_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__8));
v___x_3354_ = lean_string_append(v___x_3352_, v___x_3353_);
v___x_3355_ = lean_string_append(v___x_3354_, v___x_3330_);
v___x_3356_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__9));
v___x_3357_ = lean_string_append(v___x_3355_, v___x_3356_);
v___x_3358_ = lean_string_append(v___x_3357_, v___x_3330_);
v___x_3359_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__10));
v___x_3360_ = lean_string_append(v___x_3358_, v___x_3359_);
v___x_3361_ = lean_string_append(v___x_3360_, v___x_3330_);
lean_dec_ref(v___x_3330_);
v___x_3362_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__11));
v___x_3363_ = lean_string_append(v___x_3361_, v___x_3362_);
v___x_3364_ = lean_string_append(v___y_3327_, v___x_3363_);
lean_dec_ref(v___x_3363_);
v___x_3365_ = 1;
v___x_3366_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3366_, 0, v_ref_3317_);
lean_ctor_set(v___x_3366_, 1, v___y_3326_);
lean_ctor_set(v___x_3366_, 2, v___x_3364_);
lean_ctor_set_uint8(v___x_3366_, sizeof(void*)*3, v___x_3365_);
v___x_3367_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3367_, 0, v___x_3366_);
lean_ctor_set(v___x_3367_, 1, v___f_3324_);
lean_ctor_set(v___x_3367_, 2, v___f_3321_);
v___x_3368_ = l_Lean_registerBuiltinAttribute(v___x_3367_);
return v___x_3368_;
}
v___jp_3369_:
{
if (v_minIndexable_3314_ == 0)
{
if (v_showInfo_3315_ == 0)
{
lean_object* v___x_3371_; uint8_t v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; 
v___x_3371_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12));
v___x_3372_ = 1;
lean_inc(v_attrName_3313_);
v___x_3373_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_3313_, v___x_3372_);
v___x_3374_ = lean_string_append(v___x_3371_, v___x_3373_);
lean_dec_ref(v___x_3373_);
v___x_3375_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__13));
v___x_3376_ = lean_string_append(v___x_3374_, v___x_3375_);
v___y_3326_ = v___y_3370_;
v___y_3327_ = v___x_3376_;
goto v___jp_3325_;
}
else
{
lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v___x_3377_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12));
lean_inc(v_attrName_3313_);
v___x_3378_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_3313_, v_showInfo_3315_);
v___x_3379_ = lean_string_append(v___x_3377_, v___x_3378_);
v___x_3380_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__14));
v___x_3381_ = lean_string_append(v___x_3379_, v___x_3380_);
v___x_3382_ = lean_string_append(v___x_3381_, v___x_3378_);
lean_dec_ref(v___x_3378_);
v___x_3383_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__15));
v___x_3384_ = lean_string_append(v___x_3382_, v___x_3383_);
v___y_3326_ = v___y_3370_;
v___y_3327_ = v___x_3384_;
goto v___jp_3325_;
}
}
else
{
if (v_showInfo_3315_ == 0)
{
lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; 
v___x_3385_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12));
lean_inc(v_attrName_3313_);
v___x_3386_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_3313_, v_minIndexable_3314_);
v___x_3387_ = lean_string_append(v___x_3385_, v___x_3386_);
lean_dec_ref(v___x_3386_);
v___x_3388_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__16));
v___x_3389_ = lean_string_append(v___x_3387_, v___x_3388_);
v___y_3326_ = v___y_3370_;
v___y_3327_ = v___x_3389_;
goto v___jp_3325_;
}
else
{
lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; 
v___x_3390_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12));
lean_inc(v_attrName_3313_);
v___x_3391_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_3313_, v_showInfo_3315_);
v___x_3392_ = lean_string_append(v___x_3390_, v___x_3391_);
v___x_3393_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__17));
v___x_3394_ = lean_string_append(v___x_3392_, v___x_3393_);
v___x_3395_ = lean_string_append(v___x_3394_, v___x_3391_);
lean_dec_ref(v___x_3391_);
v___x_3396_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__18));
v___x_3397_ = lean_string_append(v___x_3395_, v___x_3396_);
v___y_3326_ = v___y_3370_;
v___y_3327_ = v___x_3397_;
goto v___jp_3325_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___boxed(lean_object* v_attrName_3404_, lean_object* v_minIndexable_3405_, lean_object* v_showInfo_3406_, lean_object* v_ext_3407_, lean_object* v_ref_3408_, lean_object* v_a_3409_){
_start:
{
uint8_t v_minIndexable_boxed_3410_; uint8_t v_showInfo_boxed_3411_; lean_object* v_res_3412_; 
v_minIndexable_boxed_3410_ = lean_unbox(v_minIndexable_3405_);
v_showInfo_boxed_3411_ = lean_unbox(v_showInfo_3406_);
v_res_3412_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_3404_, v_minIndexable_boxed_3410_, v_showInfo_boxed_3411_, v_ext_3407_, v_ref_3408_);
return v_res_3412_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0(lean_object* v_00_u03b1_3413_, lean_object* v_msg_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_){
_start:
{
lean_object* v___x_3420_; 
v___x_3420_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v_msg_3414_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_);
return v___x_3420_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___boxed(lean_object* v_00_u03b1_3421_, lean_object* v_msg_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_){
_start:
{
lean_object* v_res_3428_; 
v_res_3428_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0(v_00_u03b1_3421_, v_msg_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_);
lean_dec(v___y_3426_);
lean_dec_ref(v___y_3425_);
lean_dec(v___y_3424_);
lean_dec_ref(v___y_3423_);
return v_res_3428_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1(lean_object* v_ext_3429_, uint8_t v_attrKind_3430_, uint8_t v_showInfo_3431_, uint8_t v_minIndexable_3432_, lean_object* v_as_3433_, lean_object* v_as_x27_3434_, lean_object* v_b_3435_, lean_object* v_a_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_){
_start:
{
lean_object* v___x_3442_; 
v___x_3442_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(v_ext_3429_, v_attrKind_3430_, v_showInfo_3431_, v_minIndexable_3432_, v_as_x27_3434_, v_b_3435_, v___y_3437_, v___y_3438_, v___y_3439_, v___y_3440_);
return v___x_3442_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___boxed(lean_object* v_ext_3443_, lean_object* v_attrKind_3444_, lean_object* v_showInfo_3445_, lean_object* v_minIndexable_3446_, lean_object* v_as_3447_, lean_object* v_as_x27_3448_, lean_object* v_b_3449_, lean_object* v_a_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_){
_start:
{
uint8_t v_attrKind_boxed_3456_; uint8_t v_showInfo_boxed_3457_; uint8_t v_minIndexable_boxed_3458_; lean_object* v_res_3459_; 
v_attrKind_boxed_3456_ = lean_unbox(v_attrKind_3444_);
v_showInfo_boxed_3457_ = lean_unbox(v_showInfo_3445_);
v_minIndexable_boxed_3458_ = lean_unbox(v_minIndexable_3446_);
v_res_3459_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1(v_ext_3443_, v_attrKind_boxed_3456_, v_showInfo_boxed_3457_, v_minIndexable_boxed_3458_, v_as_3447_, v_as_x27_3448_, v_b_3449_, v_a_3450_, v___y_3451_, v___y_3452_, v___y_3453_, v___y_3454_);
lean_dec(v___y_3454_);
lean_dec_ref(v___y_3453_);
lean_dec(v___y_3452_);
lean_dec_ref(v___y_3451_);
lean_dec(v_as_x27_3448_);
lean_dec(v_as_3447_);
return v_res_3459_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7(lean_object* v_00_u03b1_3460_, lean_object* v_x_3461_, uint8_t v_isExporting_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_){
_start:
{
lean_object* v___x_3468_; 
v___x_3468_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg(v_x_3461_, v_isExporting_3462_, v___y_3463_, v___y_3464_, v___y_3465_, v___y_3466_);
return v___x_3468_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___boxed(lean_object* v_00_u03b1_3469_, lean_object* v_x_3470_, lean_object* v_isExporting_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_){
_start:
{
uint8_t v_isExporting_boxed_3477_; lean_object* v_res_3478_; 
v_isExporting_boxed_3477_ = lean_unbox(v_isExporting_3471_);
v_res_3478_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7(v_00_u03b1_3469_, v_x_3470_, v_isExporting_boxed_3477_, v___y_3472_, v___y_3473_, v___y_3474_, v___y_3475_);
lean_dec(v___y_3475_);
lean_dec_ref(v___y_3474_);
lean_dec(v___y_3473_);
lean_dec_ref(v___y_3472_);
return v_res_3478_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3(lean_object* v_00_u03b1_3479_, lean_object* v_x_3480_, uint8_t v_when_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_){
_start:
{
lean_object* v___x_3487_; 
v___x_3487_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(v_x_3480_, v_when_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_);
return v___x_3487_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___boxed(lean_object* v_00_u03b1_3488_, lean_object* v_x_3489_, lean_object* v_when_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_){
_start:
{
uint8_t v_when_boxed_3496_; lean_object* v_res_3497_; 
v_when_boxed_3496_ = lean_unbox(v_when_3490_);
v_res_3497_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3(v_00_u03b1_3488_, v_x_3489_, v_when_boxed_3496_, v___y_3491_, v___y_3492_, v___y_3493_, v___y_3494_);
lean_dec(v___y_3494_);
lean_dec_ref(v___y_3493_);
lean_dec(v___y_3492_);
lean_dec_ref(v___y_3491_);
return v_res_3497_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5(lean_object* v_00_u03b2_3498_, lean_object* v_m_3499_, lean_object* v_a_3500_){
_start:
{
lean_object* v___x_3501_; 
v___x_3501_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(v_m_3499_, v_a_3500_);
return v___x_3501_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___boxed(lean_object* v_00_u03b2_3502_, lean_object* v_m_3503_, lean_object* v_a_3504_){
_start:
{
lean_object* v_res_3505_; 
v_res_3505_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5(v_00_u03b2_3502_, v_m_3503_, v_a_3504_);
lean_dec(v_a_3504_);
lean_dec_ref(v_m_3503_);
return v_res_3505_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_3506_, lean_object* v_x_3507_, lean_object* v_x_3508_){
_start:
{
uint8_t v___x_3509_; 
v___x_3509_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(v_x_3507_, v_x_3508_);
return v___x_3509_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_3510_, lean_object* v_x_3511_, lean_object* v_x_3512_){
_start:
{
uint8_t v_res_3513_; lean_object* v_r_3514_; 
v_res_3513_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4(v_00_u03b2_3510_, v_x_3511_, v_x_3512_);
lean_dec_ref(v_x_3512_);
lean_dec_ref(v_x_3511_);
v_r_3514_ = lean_box(v_res_3513_);
return v_r_3514_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__8(lean_object* v_00_u03b2_3515_, lean_object* v_a_3516_, lean_object* v_x_3517_){
_start:
{
lean_object* v___x_3518_; 
v___x_3518_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__8___redArg(v_a_3516_, v_x_3517_);
return v___x_3518_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__8___boxed(lean_object* v_00_u03b2_3519_, lean_object* v_a_3520_, lean_object* v_x_3521_){
_start:
{
lean_object* v_res_3522_; 
v_res_3522_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__8(v_00_u03b2_3519_, v_a_3520_, v_x_3521_);
lean_dec(v_x_3521_);
lean_dec(v_a_3520_);
return v_res_3522_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7(lean_object* v_00_u03b2_3523_, lean_object* v_x_3524_, size_t v_x_3525_, lean_object* v_x_3526_){
_start:
{
uint8_t v___x_3527_; 
v___x_3527_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg(v_x_3524_, v_x_3525_, v_x_3526_);
return v___x_3527_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___boxed(lean_object* v_00_u03b2_3528_, lean_object* v_x_3529_, lean_object* v_x_3530_, lean_object* v_x_3531_){
_start:
{
size_t v_x_16860__boxed_3532_; uint8_t v_res_3533_; lean_object* v_r_3534_; 
v_x_16860__boxed_3532_ = lean_unbox_usize(v_x_3530_);
lean_dec(v_x_3530_);
v_res_3533_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7(v_00_u03b2_3528_, v_x_3529_, v_x_16860__boxed_3532_, v_x_3531_);
lean_dec_ref(v_x_3531_);
lean_dec_ref(v_x_3529_);
v_r_3534_ = lean_box(v_res_3533_);
return v_r_3534_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10(lean_object* v_00_u03b2_3535_, lean_object* v_keys_3536_, lean_object* v_vals_3537_, lean_object* v_heq_3538_, lean_object* v_i_3539_, lean_object* v_k_3540_){
_start:
{
uint8_t v___x_3541_; 
v___x_3541_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___redArg(v_keys_3536_, v_i_3539_, v_k_3540_);
return v___x_3541_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___boxed(lean_object* v_00_u03b2_3542_, lean_object* v_keys_3543_, lean_object* v_vals_3544_, lean_object* v_heq_3545_, lean_object* v_i_3546_, lean_object* v_k_3547_){
_start:
{
uint8_t v_res_3548_; lean_object* v_r_3549_; 
v_res_3548_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10(v_00_u03b2_3542_, v_keys_3543_, v_vals_3544_, v_heq_3545_, v_i_3546_, v_k_3547_);
lean_dec_ref(v_k_3547_);
lean_dec_ref(v_vals_3544_);
lean_dec_ref(v_keys_3543_);
v_r_3549_ = lean_box(v_res_3548_);
return v_r_3549_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; 
v___x_3550_ = lean_box(0);
v___x_3551_ = lean_unsigned_to_nat(16u);
v___x_3552_ = lean_mk_array(v___x_3551_, v___x_3550_);
return v___x_3552_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; 
v___x_3553_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_);
v___x_3554_ = lean_unsigned_to_nat(0u);
v___x_3555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3555_, 0, v___x_3554_);
lean_ctor_set(v___x_3555_, 1, v___x_3553_);
return v___x_3555_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; 
v___x_3557_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_);
v___x_3558_ = lean_st_mk_ref(v___x_3557_);
v___x_3559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3559_, 0, v___x_3558_);
return v___x_3559_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2____boxed(lean_object* v_a_3560_){
_start:
{
lean_object* v_res_3561_; 
v_res_3561_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_();
return v_res_3561_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1(lean_object* v_cls_3562_, lean_object* v_msg_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_){
_start:
{
lean_object* v_ref_3567_; lean_object* v___x_3568_; lean_object* v_a_3569_; lean_object* v___x_3571_; uint8_t v_isShared_3572_; uint8_t v_isSharedCheck_3613_; 
v_ref_3567_ = lean_ctor_get(v___y_3564_, 2);
v___x_3568_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(v_msg_3563_, v___y_3564_, v___y_3565_);
v_a_3569_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3613_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3613_ == 0)
{
v___x_3571_ = v___x_3568_;
v_isShared_3572_ = v_isSharedCheck_3613_;
goto v_resetjp_3570_;
}
else
{
lean_inc(v_a_3569_);
lean_dec(v___x_3568_);
v___x_3571_ = lean_box(0);
v_isShared_3572_ = v_isSharedCheck_3613_;
goto v_resetjp_3570_;
}
v_resetjp_3570_:
{
lean_object* v___x_3573_; lean_object* v_traceState_3574_; lean_object* v_env_3575_; lean_object* v_nextMacroScope_3576_; lean_object* v_ngen_3577_; lean_object* v_auxDeclNGen_3578_; lean_object* v_cache_3579_; lean_object* v_messages_3580_; lean_object* v_infoState_3581_; lean_object* v_snapshotTasks_3582_; lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3612_; 
v___x_3573_ = lean_st_ref_take(v___y_3565_);
v_traceState_3574_ = lean_ctor_get(v___x_3573_, 4);
v_env_3575_ = lean_ctor_get(v___x_3573_, 0);
v_nextMacroScope_3576_ = lean_ctor_get(v___x_3573_, 1);
v_ngen_3577_ = lean_ctor_get(v___x_3573_, 2);
v_auxDeclNGen_3578_ = lean_ctor_get(v___x_3573_, 3);
v_cache_3579_ = lean_ctor_get(v___x_3573_, 5);
v_messages_3580_ = lean_ctor_get(v___x_3573_, 6);
v_infoState_3581_ = lean_ctor_get(v___x_3573_, 7);
v_snapshotTasks_3582_ = lean_ctor_get(v___x_3573_, 8);
v_isSharedCheck_3612_ = !lean_is_exclusive(v___x_3573_);
if (v_isSharedCheck_3612_ == 0)
{
v___x_3584_ = v___x_3573_;
v_isShared_3585_ = v_isSharedCheck_3612_;
goto v_resetjp_3583_;
}
else
{
lean_inc(v_snapshotTasks_3582_);
lean_inc(v_infoState_3581_);
lean_inc(v_messages_3580_);
lean_inc(v_cache_3579_);
lean_inc(v_traceState_3574_);
lean_inc(v_auxDeclNGen_3578_);
lean_inc(v_ngen_3577_);
lean_inc(v_nextMacroScope_3576_);
lean_inc(v_env_3575_);
lean_dec(v___x_3573_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3612_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
uint64_t v_tid_3586_; lean_object* v_traces_3587_; lean_object* v___x_3589_; uint8_t v_isShared_3590_; uint8_t v_isSharedCheck_3611_; 
v_tid_3586_ = lean_ctor_get_uint64(v_traceState_3574_, sizeof(void*)*1);
v_traces_3587_ = lean_ctor_get(v_traceState_3574_, 0);
v_isSharedCheck_3611_ = !lean_is_exclusive(v_traceState_3574_);
if (v_isSharedCheck_3611_ == 0)
{
v___x_3589_ = v_traceState_3574_;
v_isShared_3590_ = v_isSharedCheck_3611_;
goto v_resetjp_3588_;
}
else
{
lean_inc(v_traces_3587_);
lean_dec(v_traceState_3574_);
v___x_3589_ = lean_box(0);
v_isShared_3590_ = v_isSharedCheck_3611_;
goto v_resetjp_3588_;
}
v_resetjp_3588_:
{
lean_object* v___x_3591_; lean_object* v___x_3592_; double v___x_3593_; uint8_t v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3602_; 
v___x_3591_ = lean_box(0);
v___x_3592_ = lean_box(0);
v___x_3593_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__0);
v___x_3594_ = 0;
v___x_3595_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__1));
v___x_3596_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3596_, 0, v_cls_3562_);
lean_ctor_set(v___x_3596_, 1, v___x_3592_);
lean_ctor_set(v___x_3596_, 2, v___x_3595_);
lean_ctor_set_float(v___x_3596_, sizeof(void*)*3, v___x_3593_);
lean_ctor_set_float(v___x_3596_, sizeof(void*)*3 + 8, v___x_3593_);
lean_ctor_set_uint8(v___x_3596_, sizeof(void*)*3 + 16, v___x_3594_);
v___x_3597_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___closed__2));
v___x_3598_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3598_, 0, v___x_3596_);
lean_ctor_set(v___x_3598_, 1, v_a_3569_);
lean_ctor_set(v___x_3598_, 2, v___x_3597_);
lean_inc(v_ref_3567_);
v___x_3599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3599_, 0, v_ref_3567_);
lean_ctor_set(v___x_3599_, 1, v___x_3598_);
v___x_3600_ = l_Lean_PersistentArray_push___redArg(v_traces_3587_, v___x_3599_);
if (v_isShared_3590_ == 0)
{
lean_ctor_set(v___x_3589_, 0, v___x_3600_);
v___x_3602_ = v___x_3589_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3610_; 
v_reuseFailAlloc_3610_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3610_, 0, v___x_3600_);
lean_ctor_set_uint64(v_reuseFailAlloc_3610_, sizeof(void*)*1, v_tid_3586_);
v___x_3602_ = v_reuseFailAlloc_3610_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
lean_object* v___x_3604_; 
if (v_isShared_3585_ == 0)
{
lean_ctor_set(v___x_3584_, 4, v___x_3602_);
v___x_3604_ = v___x_3584_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3609_; 
v_reuseFailAlloc_3609_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3609_, 0, v_env_3575_);
lean_ctor_set(v_reuseFailAlloc_3609_, 1, v_nextMacroScope_3576_);
lean_ctor_set(v_reuseFailAlloc_3609_, 2, v_ngen_3577_);
lean_ctor_set(v_reuseFailAlloc_3609_, 3, v_auxDeclNGen_3578_);
lean_ctor_set(v_reuseFailAlloc_3609_, 4, v___x_3602_);
lean_ctor_set(v_reuseFailAlloc_3609_, 5, v_cache_3579_);
lean_ctor_set(v_reuseFailAlloc_3609_, 6, v_messages_3580_);
lean_ctor_set(v_reuseFailAlloc_3609_, 7, v_infoState_3581_);
lean_ctor_set(v_reuseFailAlloc_3609_, 8, v_snapshotTasks_3582_);
v___x_3604_ = v_reuseFailAlloc_3609_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
lean_object* v___x_3605_; lean_object* v___x_3607_; 
v___x_3605_ = lean_st_ref_put(v___y_3565_, v___x_3604_);
if (v_isShared_3572_ == 0)
{
lean_ctor_set(v___x_3571_, 0, v___x_3591_);
v___x_3607_ = v___x_3571_;
goto v_reusejp_3606_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v___x_3591_);
v___x_3607_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3606_;
}
v_reusejp_3606_:
{
return v___x_3607_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_cls_3614_, lean_object* v_msg_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_){
_start:
{
lean_object* v_res_3619_; 
v_res_3619_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1(v_cls_3614_, v_msg_3615_, v___y_3616_, v___y_3617_);
lean_dec(v___y_3617_);
lean_dec_ref(v___y_3616_);
return v_res_3619_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(lean_object* v_mod_3620_, uint8_t v_isMeta_3621_, lean_object* v_hint_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_){
_start:
{
lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v_env_3628_; uint8_t v_isExporting_3629_; lean_object* v_entry_3630_; lean_object* v___x_3631_; lean_object* v_env_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___y_3637_; lean_object* v___x_3662_; uint8_t v___x_3663_; 
v___x_3626_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0);
v___x_3627_ = lean_st_ref_get(v___y_3624_);
v_env_3628_ = lean_ctor_get(v___x_3627_, 0);
lean_inc_ref(v_env_3628_);
lean_dec(v___x_3627_);
v_isExporting_3629_ = lean_ctor_get_uint8(v_env_3628_, sizeof(void*)*8);
lean_dec_ref(v_env_3628_);
lean_inc(v_mod_3620_);
v_entry_3630_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_3630_, 0, v_mod_3620_);
lean_ctor_set_uint8(v_entry_3630_, sizeof(void*)*1, v_isExporting_3629_);
lean_ctor_set_uint8(v_entry_3630_, sizeof(void*)*1 + 1, v_isMeta_3621_);
v___x_3631_ = lean_st_ref_get(v___y_3624_);
v_env_3632_ = lean_ctor_get(v___x_3631_, 0);
lean_inc_ref(v_env_3632_);
lean_dec(v___x_3631_);
v___x_3633_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_3634_ = lean_box(1);
v___x_3635_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1);
v___x_3662_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3626_, v___x_3633_, v_env_3632_, v___x_3634_, v___x_3635_);
v___x_3663_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(v___x_3662_, v_entry_3630_);
lean_dec(v___x_3662_);
if (v___x_3663_ == 0)
{
lean_object* v_toCold_3664_; lean_object* v_options_3665_; uint8_t v_hasTrace_3666_; 
v_toCold_3664_ = lean_ctor_get(v___y_3623_, 0);
v_options_3665_ = lean_ctor_get(v_toCold_3664_, 2);
v_hasTrace_3666_ = lean_ctor_get_uint8(v_options_3665_, sizeof(void*)*1);
if (v_hasTrace_3666_ == 0)
{
lean_dec(v_hint_3622_);
lean_dec(v_mod_3620_);
v___y_3637_ = v___y_3624_;
goto v___jp_3636_;
}
else
{
lean_object* v_inheritedTraceOptions_3667_; lean_object* v_cls_3668_; lean_object* v___y_3670_; lean_object* v___y_3671_; lean_object* v___y_3675_; lean_object* v___y_3676_; lean_object* v___x_3688_; uint8_t v___x_3689_; 
v_inheritedTraceOptions_3667_ = lean_ctor_get(v_toCold_3664_, 11);
v_cls_3668_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__3));
v___x_3688_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11);
v___x_3689_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3667_, v_options_3665_, v___x_3688_);
if (v___x_3689_ == 0)
{
lean_dec(v_hint_3622_);
lean_dec(v_mod_3620_);
v___y_3637_ = v___y_3624_;
goto v___jp_3636_;
}
else
{
lean_object* v___x_3690_; lean_object* v___y_3692_; 
v___x_3690_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13);
if (v_isExporting_3629_ == 0)
{
lean_object* v___x_3699_; 
v___x_3699_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__18));
v___y_3692_ = v___x_3699_;
goto v___jp_3691_;
}
else
{
lean_object* v___x_3700_; 
v___x_3700_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__19));
v___y_3692_ = v___x_3700_;
goto v___jp_3691_;
}
v___jp_3691_:
{
lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; 
lean_inc_ref(v___y_3692_);
v___x_3693_ = l_Lean_stringToMessageData(v___y_3692_);
v___x_3694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3694_, 0, v___x_3690_);
lean_ctor_set(v___x_3694_, 1, v___x_3693_);
v___x_3695_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15);
v___x_3696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3696_, 0, v___x_3694_);
lean_ctor_set(v___x_3696_, 1, v___x_3695_);
if (v_isMeta_3621_ == 0)
{
lean_object* v___x_3697_; 
v___x_3697_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__16));
v___y_3675_ = v___x_3696_;
v___y_3676_ = v___x_3697_;
goto v___jp_3674_;
}
else
{
lean_object* v___x_3698_; 
v___x_3698_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__17));
v___y_3675_ = v___x_3696_;
v___y_3676_ = v___x_3698_;
goto v___jp_3674_;
}
}
}
v___jp_3669_:
{
lean_object* v___x_3672_; lean_object* v___x_3673_; 
v___x_3672_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3672_, 0, v___y_3670_);
lean_ctor_set(v___x_3672_, 1, v___y_3671_);
v___x_3673_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1(v_cls_3668_, v___x_3672_, v___y_3623_, v___y_3624_);
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_dec_ref_known(v___x_3673_, 1);
v___y_3637_ = v___y_3624_;
goto v___jp_3636_;
}
else
{
lean_dec_ref_known(v_entry_3630_, 1);
return v___x_3673_;
}
}
v___jp_3674_:
{
lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; uint8_t v___x_3683_; 
lean_inc_ref(v___y_3676_);
v___x_3677_ = l_Lean_stringToMessageData(v___y_3676_);
v___x_3678_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3678_, 0, v___y_3675_);
lean_ctor_set(v___x_3678_, 1, v___x_3677_);
v___x_3679_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__5);
v___x_3680_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3680_, 0, v___x_3678_);
lean_ctor_set(v___x_3680_, 1, v___x_3679_);
v___x_3681_ = l_Lean_MessageData_ofName(v_mod_3620_);
v___x_3682_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3682_, 0, v___x_3680_);
lean_ctor_set(v___x_3682_, 1, v___x_3681_);
v___x_3683_ = l_Lean_Name_isAnonymous(v_hint_3622_);
if (v___x_3683_ == 0)
{
lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; 
v___x_3684_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7);
v___x_3685_ = l_Lean_MessageData_ofName(v_hint_3622_);
v___x_3686_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3686_, 0, v___x_3684_);
lean_ctor_set(v___x_3686_, 1, v___x_3685_);
v___y_3670_ = v___x_3682_;
v___y_3671_ = v___x_3686_;
goto v___jp_3669_;
}
else
{
lean_object* v___x_3687_; 
lean_dec(v_hint_3622_);
v___x_3687_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8);
v___y_3670_ = v___x_3682_;
v___y_3671_ = v___x_3687_;
goto v___jp_3669_;
}
}
}
}
else
{
lean_object* v___x_3701_; lean_object* v___x_3702_; 
lean_dec_ref_known(v_entry_3630_, 1);
lean_dec(v_hint_3622_);
lean_dec(v_mod_3620_);
v___x_3701_ = lean_box(0);
v___x_3702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3702_, 0, v___x_3701_);
return v___x_3702_;
}
v___jp_3636_:
{
lean_object* v___x_3638_; lean_object* v_toEnvExtension_3639_; lean_object* v_env_3640_; lean_object* v_nextMacroScope_3641_; lean_object* v_ngen_3642_; lean_object* v_auxDeclNGen_3643_; lean_object* v_traceState_3644_; lean_object* v_messages_3645_; lean_object* v_infoState_3646_; lean_object* v_snapshotTasks_3647_; lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3660_; 
v___x_3638_ = lean_st_ref_take(v___y_3637_);
v_toEnvExtension_3639_ = lean_ctor_get(v___x_3633_, 0);
v_env_3640_ = lean_ctor_get(v___x_3638_, 0);
v_nextMacroScope_3641_ = lean_ctor_get(v___x_3638_, 1);
v_ngen_3642_ = lean_ctor_get(v___x_3638_, 2);
v_auxDeclNGen_3643_ = lean_ctor_get(v___x_3638_, 3);
v_traceState_3644_ = lean_ctor_get(v___x_3638_, 4);
v_messages_3645_ = lean_ctor_get(v___x_3638_, 6);
v_infoState_3646_ = lean_ctor_get(v___x_3638_, 7);
v_snapshotTasks_3647_ = lean_ctor_get(v___x_3638_, 8);
v_isSharedCheck_3660_ = !lean_is_exclusive(v___x_3638_);
if (v_isSharedCheck_3660_ == 0)
{
lean_object* v_unused_3661_; 
v_unused_3661_ = lean_ctor_get(v___x_3638_, 5);
lean_dec(v_unused_3661_);
v___x_3649_ = v___x_3638_;
v_isShared_3650_ = v_isSharedCheck_3660_;
goto v_resetjp_3648_;
}
else
{
lean_inc(v_snapshotTasks_3647_);
lean_inc(v_infoState_3646_);
lean_inc(v_messages_3645_);
lean_inc(v_traceState_3644_);
lean_inc(v_auxDeclNGen_3643_);
lean_inc(v_ngen_3642_);
lean_inc(v_nextMacroScope_3641_);
lean_inc(v_env_3640_);
lean_dec(v___x_3638_);
v___x_3649_ = lean_box(0);
v_isShared_3650_ = v_isSharedCheck_3660_;
goto v_resetjp_3648_;
}
v_resetjp_3648_:
{
lean_object* v_asyncMode_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3656_; 
v_asyncMode_3651_ = lean_ctor_get(v_toEnvExtension_3639_, 2);
v___x_3652_ = lean_box(0);
v___x_3653_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_3633_, v_env_3640_, v_entry_3630_, v_asyncMode_3651_, v___x_3635_);
v___x_3654_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
if (v_isShared_3650_ == 0)
{
lean_ctor_set(v___x_3649_, 5, v___x_3654_);
lean_ctor_set(v___x_3649_, 0, v___x_3653_);
v___x_3656_ = v___x_3649_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3659_; 
v_reuseFailAlloc_3659_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3659_, 0, v___x_3653_);
lean_ctor_set(v_reuseFailAlloc_3659_, 1, v_nextMacroScope_3641_);
lean_ctor_set(v_reuseFailAlloc_3659_, 2, v_ngen_3642_);
lean_ctor_set(v_reuseFailAlloc_3659_, 3, v_auxDeclNGen_3643_);
lean_ctor_set(v_reuseFailAlloc_3659_, 4, v_traceState_3644_);
lean_ctor_set(v_reuseFailAlloc_3659_, 5, v___x_3654_);
lean_ctor_set(v_reuseFailAlloc_3659_, 6, v_messages_3645_);
lean_ctor_set(v_reuseFailAlloc_3659_, 7, v_infoState_3646_);
lean_ctor_set(v_reuseFailAlloc_3659_, 8, v_snapshotTasks_3647_);
v___x_3656_ = v_reuseFailAlloc_3659_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
lean_object* v___x_3657_; lean_object* v___x_3658_; 
v___x_3657_ = lean_st_ref_put(v___y_3637_, v___x_3656_);
v___x_3658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3658_, 0, v___x_3652_);
return v___x_3658_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0___boxed(lean_object* v_mod_3703_, lean_object* v_isMeta_3704_, lean_object* v_hint_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_){
_start:
{
uint8_t v_isMeta_boxed_3709_; lean_object* v_res_3710_; 
v_isMeta_boxed_3709_ = lean_unbox(v_isMeta_3704_);
v_res_3710_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(v_mod_3703_, v_isMeta_boxed_3709_, v_hint_3705_, v___y_3706_, v___y_3707_);
lean_dec(v___y_3707_);
lean_dec_ref(v___y_3706_);
return v_res_3710_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1(lean_object* v___x_3711_, lean_object* v_declName_3712_, lean_object* v_as_3713_, size_t v_sz_3714_, size_t v_i_3715_, lean_object* v_b_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_){
_start:
{
uint8_t v___x_3720_; 
v___x_3720_ = lean_usize_dec_lt(v_i_3715_, v_sz_3714_);
if (v___x_3720_ == 0)
{
lean_object* v___x_3721_; 
lean_dec(v_declName_3712_);
v___x_3721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3721_, 0, v_b_3716_);
return v___x_3721_;
}
else
{
lean_object* v___x_3722_; lean_object* v_modules_3723_; lean_object* v___x_3724_; lean_object* v_a_3725_; lean_object* v___x_3726_; lean_object* v_toImport_3727_; lean_object* v_module_3728_; lean_object* v___x_3729_; uint8_t v___x_3730_; lean_object* v___x_3731_; 
v___x_3722_ = l_Lean_Environment_header(v___x_3711_);
v_modules_3723_ = lean_ctor_get(v___x_3722_, 3);
lean_inc_ref(v_modules_3723_);
lean_dec_ref(v___x_3722_);
v___x_3724_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_3725_ = lean_array_uget_borrowed(v_as_3713_, v_i_3715_);
v___x_3726_ = lean_array_get(v___x_3724_, v_modules_3723_, v_a_3725_);
lean_dec_ref(v_modules_3723_);
v_toImport_3727_ = lean_ctor_get(v___x_3726_, 0);
lean_inc_ref(v_toImport_3727_);
lean_dec(v___x_3726_);
v_module_3728_ = lean_ctor_get(v_toImport_3727_, 0);
lean_inc(v_module_3728_);
lean_dec_ref(v_toImport_3727_);
v___x_3729_ = lean_box(0);
v___x_3730_ = 0;
lean_inc(v_declName_3712_);
v___x_3731_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(v_module_3728_, v___x_3730_, v_declName_3712_, v___y_3717_, v___y_3718_);
if (lean_obj_tag(v___x_3731_) == 0)
{
size_t v___x_3732_; size_t v___x_3733_; 
lean_dec_ref_known(v___x_3731_, 1);
v___x_3732_ = ((size_t)1ULL);
v___x_3733_ = lean_usize_add(v_i_3715_, v___x_3732_);
v_i_3715_ = v___x_3733_;
v_b_3716_ = v___x_3729_;
goto _start;
}
else
{
lean_dec(v_declName_3712_);
return v___x_3731_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1___boxed(lean_object* v___x_3735_, lean_object* v_declName_3736_, lean_object* v_as_3737_, lean_object* v_sz_3738_, lean_object* v_i_3739_, lean_object* v_b_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_){
_start:
{
size_t v_sz_boxed_3744_; size_t v_i_boxed_3745_; lean_object* v_res_3746_; 
v_sz_boxed_3744_ = lean_unbox_usize(v_sz_3738_);
lean_dec(v_sz_3738_);
v_i_boxed_3745_ = lean_unbox_usize(v_i_3739_);
lean_dec(v_i_3739_);
v_res_3746_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1(v___x_3735_, v_declName_3736_, v_as_3737_, v_sz_boxed_3744_, v_i_boxed_3745_, v_b_3740_, v___y_3741_, v___y_3742_);
lean_dec(v___y_3742_);
lean_dec_ref(v___y_3741_);
lean_dec_ref(v_as_3737_);
lean_dec_ref(v___x_3735_);
return v_res_3746_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0(lean_object* v_declName_3747_, uint8_t v_isMeta_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_){
_start:
{
lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v_env_3757_; lean_object* v___y_3759_; lean_object* v___x_3772_; 
v___x_3752_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0);
v___x_3753_ = lean_st_ref_get(v___y_3750_);
v_env_3757_ = lean_ctor_get(v___x_3753_, 0);
lean_inc_ref(v_env_3757_);
lean_dec(v___x_3753_);
v___x_3772_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3757_, v_declName_3747_);
if (lean_obj_tag(v___x_3772_) == 0)
{
lean_dec_ref(v_env_3757_);
lean_dec(v_declName_3747_);
goto v___jp_3754_;
}
else
{
lean_object* v_val_3773_; lean_object* v___x_3774_; lean_object* v_modules_3775_; lean_object* v___x_3776_; uint8_t v___x_3777_; 
v_val_3773_ = lean_ctor_get(v___x_3772_, 0);
lean_inc(v_val_3773_);
lean_dec_ref_known(v___x_3772_, 1);
v___x_3774_ = l_Lean_Environment_header(v_env_3757_);
v_modules_3775_ = lean_ctor_get(v___x_3774_, 3);
lean_inc_ref(v_modules_3775_);
lean_dec_ref(v___x_3774_);
v___x_3776_ = lean_array_get_size(v_modules_3775_);
v___x_3777_ = lean_nat_dec_lt(v_val_3773_, v___x_3776_);
if (v___x_3777_ == 0)
{
lean_dec_ref(v_modules_3775_);
lean_dec(v_val_3773_);
lean_dec_ref(v_env_3757_);
lean_dec(v_declName_3747_);
goto v___jp_3754_;
}
else
{
lean_object* v___x_3778_; lean_object* v___x_3779_; uint8_t v___y_3781_; 
v___x_3778_ = lean_array_fget(v_modules_3775_, v_val_3773_);
lean_dec(v_val_3773_);
lean_dec_ref(v_modules_3775_);
v___x_3779_ = lean_st_ref_get(v___y_3750_);
if (v_isMeta_3748_ == 0)
{
lean_dec(v___x_3779_);
v___y_3781_ = v_isMeta_3748_;
goto v___jp_3780_;
}
else
{
lean_object* v_env_3792_; uint8_t v___x_3793_; 
v_env_3792_ = lean_ctor_get(v___x_3779_, 0);
lean_inc_ref(v_env_3792_);
lean_dec(v___x_3779_);
lean_inc(v_declName_3747_);
v___x_3793_ = l_Lean_isMarkedMeta(v_env_3792_, v_declName_3747_);
if (v___x_3793_ == 0)
{
v___y_3781_ = v_isMeta_3748_;
goto v___jp_3780_;
}
else
{
uint8_t v___x_3794_; 
v___x_3794_ = 0;
v___y_3781_ = v___x_3794_;
goto v___jp_3780_;
}
}
v___jp_3780_:
{
lean_object* v_toImport_3782_; lean_object* v_module_3783_; lean_object* v___x_3784_; 
v_toImport_3782_ = lean_ctor_get(v___x_3778_, 0);
lean_inc_ref(v_toImport_3782_);
lean_dec(v___x_3778_);
v_module_3783_ = lean_ctor_get(v_toImport_3782_, 0);
lean_inc(v_module_3783_);
lean_dec_ref(v_toImport_3782_);
lean_inc(v_declName_3747_);
v___x_3784_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(v_module_3783_, v___y_3781_, v_declName_3747_, v___y_3749_, v___y_3750_);
if (lean_obj_tag(v___x_3784_) == 0)
{
lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; 
lean_dec_ref_known(v___x_3784_, 1);
v___x_3785_ = l_Lean_indirectModUseExt;
v___x_3786_ = lean_box(1);
v___x_3787_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1);
lean_inc_ref(v_env_3757_);
v___x_3788_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3752_, v___x_3785_, v_env_3757_, v___x_3786_, v___x_3787_);
v___x_3789_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(v___x_3788_, v_declName_3747_);
lean_dec(v___x_3788_);
if (lean_obj_tag(v___x_3789_) == 0)
{
lean_object* v___x_3790_; 
v___x_3790_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1));
v___y_3759_ = v___x_3790_;
goto v___jp_3758_;
}
else
{
lean_object* v_val_3791_; 
v_val_3791_ = lean_ctor_get(v___x_3789_, 0);
lean_inc(v_val_3791_);
lean_dec_ref_known(v___x_3789_, 1);
v___y_3759_ = v_val_3791_;
goto v___jp_3758_;
}
}
else
{
lean_dec_ref(v_env_3757_);
lean_dec(v_declName_3747_);
return v___x_3784_;
}
}
}
}
v___jp_3754_:
{
lean_object* v___x_3755_; lean_object* v___x_3756_; 
v___x_3755_ = lean_box(0);
v___x_3756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3756_, 0, v___x_3755_);
return v___x_3756_;
}
v___jp_3758_:
{
lean_object* v___x_3760_; size_t v_sz_3761_; size_t v___x_3762_; lean_object* v___x_3763_; 
v___x_3760_ = lean_box(0);
v_sz_3761_ = lean_array_size(v___y_3759_);
v___x_3762_ = ((size_t)0ULL);
v___x_3763_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1(v_env_3757_, v_declName_3747_, v___y_3759_, v_sz_3761_, v___x_3762_, v___x_3760_, v___y_3749_, v___y_3750_);
lean_dec_ref(v___y_3759_);
lean_dec_ref(v_env_3757_);
if (lean_obj_tag(v___x_3763_) == 0)
{
lean_object* v___x_3765_; uint8_t v_isShared_3766_; uint8_t v_isSharedCheck_3770_; 
v_isSharedCheck_3770_ = !lean_is_exclusive(v___x_3763_);
if (v_isSharedCheck_3770_ == 0)
{
lean_object* v_unused_3771_; 
v_unused_3771_ = lean_ctor_get(v___x_3763_, 0);
lean_dec(v_unused_3771_);
v___x_3765_ = v___x_3763_;
v_isShared_3766_ = v_isSharedCheck_3770_;
goto v_resetjp_3764_;
}
else
{
lean_dec(v___x_3763_);
v___x_3765_ = lean_box(0);
v_isShared_3766_ = v_isSharedCheck_3770_;
goto v_resetjp_3764_;
}
v_resetjp_3764_:
{
lean_object* v___x_3768_; 
if (v_isShared_3766_ == 0)
{
lean_ctor_set(v___x_3765_, 0, v___x_3760_);
v___x_3768_ = v___x_3765_;
goto v_reusejp_3767_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v___x_3760_);
v___x_3768_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3767_;
}
v_reusejp_3767_:
{
return v___x_3768_;
}
}
}
else
{
return v___x_3763_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0___boxed(lean_object* v_declName_3795_, lean_object* v_isMeta_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_){
_start:
{
uint8_t v_isMeta_boxed_3800_; lean_object* v_res_3801_; 
v_isMeta_boxed_3800_ = lean_unbox(v_isMeta_3796_);
v_res_3801_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0(v_declName_3795_, v_isMeta_boxed_3800_, v___y_3797_, v___y_3798_);
lean_dec(v___y_3798_);
lean_dec_ref(v___y_3797_);
return v_res_3801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getExtension_x3f(lean_object* v_attrName_3802_, lean_object* v_a_3803_, lean_object* v_a_3804_){
_start:
{
lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; 
v___x_3806_ = l_Lean_Meta_Grind_extensionMapRef;
v___x_3807_ = lean_st_ref_get(v___x_3806_);
v___x_3808_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(v___x_3807_, v_attrName_3802_);
lean_dec(v___x_3807_);
if (lean_obj_tag(v___x_3808_) == 1)
{
lean_object* v_val_3809_; lean_object* v_ext_3810_; lean_object* v_name_3811_; uint8_t v___x_3812_; lean_object* v___x_3813_; 
v_val_3809_ = lean_ctor_get(v___x_3808_, 0);
lean_inc(v_val_3809_);
v_ext_3810_ = lean_ctor_get(v_val_3809_, 1);
lean_inc_ref(v_ext_3810_);
lean_dec(v_val_3809_);
v_name_3811_ = lean_ctor_get(v_ext_3810_, 1);
lean_inc(v_name_3811_);
lean_dec_ref(v_ext_3810_);
v___x_3812_ = 1;
v___x_3813_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0(v_name_3811_, v___x_3812_, v_a_3803_, v_a_3804_);
if (lean_obj_tag(v___x_3813_) == 0)
{
lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_3820_; 
v_isSharedCheck_3820_ = !lean_is_exclusive(v___x_3813_);
if (v_isSharedCheck_3820_ == 0)
{
lean_object* v_unused_3821_; 
v_unused_3821_ = lean_ctor_get(v___x_3813_, 0);
lean_dec(v_unused_3821_);
v___x_3815_ = v___x_3813_;
v_isShared_3816_ = v_isSharedCheck_3820_;
goto v_resetjp_3814_;
}
else
{
lean_dec(v___x_3813_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_3820_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
lean_object* v___x_3818_; 
if (v_isShared_3816_ == 0)
{
lean_ctor_set(v___x_3815_, 0, v___x_3808_);
v___x_3818_ = v___x_3815_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v___x_3808_);
v___x_3818_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
return v___x_3818_;
}
}
}
else
{
lean_object* v_a_3822_; lean_object* v___x_3824_; uint8_t v_isShared_3825_; uint8_t v_isSharedCheck_3829_; 
lean_dec_ref_known(v___x_3808_, 1);
v_a_3822_ = lean_ctor_get(v___x_3813_, 0);
v_isSharedCheck_3829_ = !lean_is_exclusive(v___x_3813_);
if (v_isSharedCheck_3829_ == 0)
{
v___x_3824_ = v___x_3813_;
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
else
{
lean_inc(v_a_3822_);
lean_dec(v___x_3813_);
v___x_3824_ = lean_box(0);
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
v_resetjp_3823_:
{
lean_object* v___x_3827_; 
if (v_isShared_3825_ == 0)
{
v___x_3827_ = v___x_3824_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v_a_3822_);
v___x_3827_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
return v___x_3827_;
}
}
}
}
else
{
lean_object* v___x_3830_; 
v___x_3830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3830_, 0, v___x_3808_);
return v___x_3830_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getExtension_x3f___boxed(lean_object* v_attrName_3831_, lean_object* v_a_3832_, lean_object* v_a_3833_, lean_object* v_a_3834_){
_start:
{
lean_object* v_res_3835_; 
v_res_3835_ = l_Lean_Meta_Grind_getExtension_x3f(v_attrName_3831_, v_a_3832_, v_a_3833_);
lean_dec(v_a_3833_);
lean_dec_ref(v_a_3832_);
lean_dec(v_attrName_3831_);
return v_res_3835_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_registerAttr___auto__1(void){
_start:
{
lean_object* v___x_3836_; 
v___x_3836_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25);
return v___x_3836_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_3837_, lean_object* v_x_3838_){
_start:
{
if (lean_obj_tag(v_x_3838_) == 0)
{
return v_x_3837_;
}
else
{
lean_object* v_key_3839_; lean_object* v_value_3840_; lean_object* v_tail_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3868_; 
v_key_3839_ = lean_ctor_get(v_x_3838_, 0);
v_value_3840_ = lean_ctor_get(v_x_3838_, 1);
v_tail_3841_ = lean_ctor_get(v_x_3838_, 2);
v_isSharedCheck_3868_ = !lean_is_exclusive(v_x_3838_);
if (v_isSharedCheck_3868_ == 0)
{
v___x_3843_ = v_x_3838_;
v_isShared_3844_ = v_isSharedCheck_3868_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_tail_3841_);
lean_inc(v_value_3840_);
lean_inc(v_key_3839_);
lean_dec(v_x_3838_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3868_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___x_3845_; uint64_t v___y_3847_; lean_object* v___x_3865_; 
v___x_3845_ = lean_array_get_size(v_x_3837_);
v___x_3865_ = l_unsafeCast___redArg(v_key_3839_);
if (lean_obj_tag(v___x_3865_) == 0)
{
uint64_t v___x_3866_; 
v___x_3866_ = 1723ULL;
v___y_3847_ = v___x_3866_;
goto v___jp_3846_;
}
else
{
uint64_t v_hash_3867_; 
v_hash_3867_ = lean_ctor_get_uint64(v___x_3865_, sizeof(void*)*2);
lean_dec(v___x_3865_);
v___y_3847_ = v_hash_3867_;
goto v___jp_3846_;
}
v___jp_3846_:
{
uint64_t v___x_3848_; uint64_t v___x_3849_; uint64_t v_fold_3850_; uint64_t v___x_3851_; uint64_t v___x_3852_; uint64_t v___x_3853_; size_t v___x_3854_; size_t v___x_3855_; size_t v___x_3856_; size_t v___x_3857_; size_t v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3861_; 
v___x_3848_ = 32ULL;
v___x_3849_ = lean_uint64_shift_right(v___y_3847_, v___x_3848_);
v_fold_3850_ = lean_uint64_xor(v___y_3847_, v___x_3849_);
v___x_3851_ = 16ULL;
v___x_3852_ = lean_uint64_shift_right(v_fold_3850_, v___x_3851_);
v___x_3853_ = lean_uint64_xor(v_fold_3850_, v___x_3852_);
v___x_3854_ = lean_uint64_to_usize(v___x_3853_);
v___x_3855_ = lean_usize_of_nat(v___x_3845_);
v___x_3856_ = ((size_t)1ULL);
v___x_3857_ = lean_usize_sub(v___x_3855_, v___x_3856_);
v___x_3858_ = lean_usize_land(v___x_3854_, v___x_3857_);
v___x_3859_ = lean_array_uget_borrowed(v_x_3837_, v___x_3858_);
lean_inc(v___x_3859_);
if (v_isShared_3844_ == 0)
{
lean_ctor_set(v___x_3843_, 2, v___x_3859_);
v___x_3861_ = v___x_3843_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3864_; 
v_reuseFailAlloc_3864_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3864_, 0, v_key_3839_);
lean_ctor_set(v_reuseFailAlloc_3864_, 1, v_value_3840_);
lean_ctor_set(v_reuseFailAlloc_3864_, 2, v___x_3859_);
v___x_3861_ = v_reuseFailAlloc_3864_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
lean_object* v___x_3862_; 
v___x_3862_ = lean_array_uset(v_x_3837_, v___x_3858_, v___x_3861_);
v_x_3837_ = v___x_3862_;
v_x_3838_ = v_tail_3841_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2___redArg(lean_object* v_i_3869_, lean_object* v_source_3870_, lean_object* v_target_3871_){
_start:
{
lean_object* v___x_3872_; uint8_t v___x_3873_; 
v___x_3872_ = lean_array_get_size(v_source_3870_);
v___x_3873_ = lean_nat_dec_lt(v_i_3869_, v___x_3872_);
if (v___x_3873_ == 0)
{
lean_dec_ref(v_source_3870_);
lean_dec(v_i_3869_);
return v_target_3871_;
}
else
{
lean_object* v_es_3874_; lean_object* v___x_3875_; lean_object* v_source_3876_; lean_object* v_target_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; 
v_es_3874_ = lean_array_fget(v_source_3870_, v_i_3869_);
v___x_3875_ = lean_box(0);
v_source_3876_ = lean_array_fset(v_source_3870_, v_i_3869_, v___x_3875_);
v_target_3877_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3___redArg(v_target_3871_, v_es_3874_);
v___x_3878_ = lean_unsigned_to_nat(1u);
v___x_3879_ = lean_nat_add(v_i_3869_, v___x_3878_);
lean_dec(v_i_3869_);
v_i_3869_ = v___x_3879_;
v_source_3870_ = v_source_3876_;
v_target_3871_ = v_target_3877_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1___redArg(lean_object* v_data_3881_){
_start:
{
lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v_nbuckets_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; 
v___x_3882_ = lean_array_get_size(v_data_3881_);
v___x_3883_ = lean_unsigned_to_nat(2u);
v_nbuckets_3884_ = lean_nat_mul(v___x_3882_, v___x_3883_);
v___x_3885_ = lean_unsigned_to_nat(0u);
v___x_3886_ = lean_box(0);
v___x_3887_ = lean_mk_array(v_nbuckets_3884_, v___x_3886_);
v___x_3888_ = lean_array_propagate_mark(v_data_3881_, v___x_3887_);
v___x_3889_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2___redArg(v___x_3885_, v_data_3881_, v___x_3888_);
return v___x_3889_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(lean_object* v_a_3890_, lean_object* v_x_3891_){
_start:
{
if (lean_obj_tag(v_x_3891_) == 0)
{
uint8_t v___x_3892_; 
v___x_3892_ = 0;
return v___x_3892_;
}
else
{
lean_object* v_key_3893_; lean_object* v_tail_3894_; uint8_t v___x_3895_; 
v_key_3893_ = lean_ctor_get(v_x_3891_, 0);
v_tail_3894_ = lean_ctor_get(v_x_3891_, 2);
v___x_3895_ = lean_name_eq(v_key_3893_, v_a_3890_);
if (v___x_3895_ == 0)
{
v_x_3891_ = v_tail_3894_;
goto _start;
}
else
{
return v___x_3895_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg___boxed(lean_object* v_a_3897_, lean_object* v_x_3898_){
_start:
{
uint8_t v_res_3899_; lean_object* v_r_3900_; 
v_res_3899_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(v_a_3897_, v_x_3898_);
lean_dec(v_x_3898_);
lean_dec(v_a_3897_);
v_r_3900_ = lean_box(v_res_3899_);
return v_r_3900_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(lean_object* v_a_3901_, lean_object* v_b_3902_, lean_object* v_x_3903_){
_start:
{
if (lean_obj_tag(v_x_3903_) == 0)
{
lean_dec(v_b_3902_);
lean_dec(v_a_3901_);
return v_x_3903_;
}
else
{
lean_object* v_key_3904_; lean_object* v_value_3905_; lean_object* v_tail_3906_; lean_object* v___x_3908_; uint8_t v_isShared_3909_; uint8_t v_isSharedCheck_3918_; 
v_key_3904_ = lean_ctor_get(v_x_3903_, 0);
v_value_3905_ = lean_ctor_get(v_x_3903_, 1);
v_tail_3906_ = lean_ctor_get(v_x_3903_, 2);
v_isSharedCheck_3918_ = !lean_is_exclusive(v_x_3903_);
if (v_isSharedCheck_3918_ == 0)
{
v___x_3908_ = v_x_3903_;
v_isShared_3909_ = v_isSharedCheck_3918_;
goto v_resetjp_3907_;
}
else
{
lean_inc(v_tail_3906_);
lean_inc(v_value_3905_);
lean_inc(v_key_3904_);
lean_dec(v_x_3903_);
v___x_3908_ = lean_box(0);
v_isShared_3909_ = v_isSharedCheck_3918_;
goto v_resetjp_3907_;
}
v_resetjp_3907_:
{
uint8_t v___x_3910_; 
v___x_3910_ = lean_name_eq(v_key_3904_, v_a_3901_);
if (v___x_3910_ == 0)
{
lean_object* v___x_3911_; lean_object* v___x_3913_; 
v___x_3911_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(v_a_3901_, v_b_3902_, v_tail_3906_);
if (v_isShared_3909_ == 0)
{
lean_ctor_set(v___x_3908_, 2, v___x_3911_);
v___x_3913_ = v___x_3908_;
goto v_reusejp_3912_;
}
else
{
lean_object* v_reuseFailAlloc_3914_; 
v_reuseFailAlloc_3914_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3914_, 0, v_key_3904_);
lean_ctor_set(v_reuseFailAlloc_3914_, 1, v_value_3905_);
lean_ctor_set(v_reuseFailAlloc_3914_, 2, v___x_3911_);
v___x_3913_ = v_reuseFailAlloc_3914_;
goto v_reusejp_3912_;
}
v_reusejp_3912_:
{
return v___x_3913_;
}
}
else
{
lean_object* v___x_3916_; 
lean_dec(v_value_3905_);
lean_dec(v_key_3904_);
if (v_isShared_3909_ == 0)
{
lean_ctor_set(v___x_3908_, 1, v_b_3902_);
lean_ctor_set(v___x_3908_, 0, v_a_3901_);
v___x_3916_ = v___x_3908_;
goto v_reusejp_3915_;
}
else
{
lean_object* v_reuseFailAlloc_3917_; 
v_reuseFailAlloc_3917_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3917_, 0, v_a_3901_);
lean_ctor_set(v_reuseFailAlloc_3917_, 1, v_b_3902_);
lean_ctor_set(v_reuseFailAlloc_3917_, 2, v_tail_3906_);
v___x_3916_ = v_reuseFailAlloc_3917_;
goto v_reusejp_3915_;
}
v_reusejp_3915_:
{
return v___x_3916_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0___redArg(lean_object* v_m_3919_, lean_object* v_a_3920_, lean_object* v_b_3921_){
_start:
{
lean_object* v_size_3922_; lean_object* v_buckets_3923_; lean_object* v___x_3925_; uint8_t v_isShared_3926_; uint8_t v_isSharedCheck_3970_; 
v_size_3922_ = lean_ctor_get(v_m_3919_, 0);
v_buckets_3923_ = lean_ctor_get(v_m_3919_, 1);
v_isSharedCheck_3970_ = !lean_is_exclusive(v_m_3919_);
if (v_isSharedCheck_3970_ == 0)
{
v___x_3925_ = v_m_3919_;
v_isShared_3926_ = v_isSharedCheck_3970_;
goto v_resetjp_3924_;
}
else
{
lean_inc(v_buckets_3923_);
lean_inc(v_size_3922_);
lean_dec(v_m_3919_);
v___x_3925_ = lean_box(0);
v_isShared_3926_ = v_isSharedCheck_3970_;
goto v_resetjp_3924_;
}
v_resetjp_3924_:
{
lean_object* v___x_3927_; uint64_t v___y_3929_; lean_object* v___x_3967_; 
v___x_3927_ = lean_array_get_size(v_buckets_3923_);
v___x_3967_ = l_unsafeCast___redArg(v_a_3920_);
if (lean_obj_tag(v___x_3967_) == 0)
{
uint64_t v___x_3968_; 
v___x_3968_ = 1723ULL;
v___y_3929_ = v___x_3968_;
goto v___jp_3928_;
}
else
{
uint64_t v_hash_3969_; 
v_hash_3969_ = lean_ctor_get_uint64(v___x_3967_, sizeof(void*)*2);
lean_dec(v___x_3967_);
v___y_3929_ = v_hash_3969_;
goto v___jp_3928_;
}
v___jp_3928_:
{
uint64_t v___x_3930_; uint64_t v___x_3931_; uint64_t v_fold_3932_; uint64_t v___x_3933_; uint64_t v___x_3934_; uint64_t v___x_3935_; size_t v___x_3936_; size_t v___x_3937_; size_t v___x_3938_; size_t v___x_3939_; size_t v___x_3940_; lean_object* v_bkt_3941_; uint8_t v___x_3942_; 
v___x_3930_ = 32ULL;
v___x_3931_ = lean_uint64_shift_right(v___y_3929_, v___x_3930_);
v_fold_3932_ = lean_uint64_xor(v___y_3929_, v___x_3931_);
v___x_3933_ = 16ULL;
v___x_3934_ = lean_uint64_shift_right(v_fold_3932_, v___x_3933_);
v___x_3935_ = lean_uint64_xor(v_fold_3932_, v___x_3934_);
v___x_3936_ = lean_uint64_to_usize(v___x_3935_);
v___x_3937_ = lean_usize_of_nat(v___x_3927_);
v___x_3938_ = ((size_t)1ULL);
v___x_3939_ = lean_usize_sub(v___x_3937_, v___x_3938_);
v___x_3940_ = lean_usize_land(v___x_3936_, v___x_3939_);
v_bkt_3941_ = lean_array_uget_borrowed(v_buckets_3923_, v___x_3940_);
v___x_3942_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(v_a_3920_, v_bkt_3941_);
if (v___x_3942_ == 0)
{
lean_object* v___x_3943_; lean_object* v_size_x27_3944_; lean_object* v___x_3945_; lean_object* v_buckets_x27_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; uint8_t v___x_3952_; 
v___x_3943_ = lean_unsigned_to_nat(1u);
v_size_x27_3944_ = lean_nat_add(v_size_3922_, v___x_3943_);
lean_dec(v_size_3922_);
lean_inc(v_bkt_3941_);
v___x_3945_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3945_, 0, v_a_3920_);
lean_ctor_set(v___x_3945_, 1, v_b_3921_);
lean_ctor_set(v___x_3945_, 2, v_bkt_3941_);
v_buckets_x27_3946_ = lean_array_uset(v_buckets_3923_, v___x_3940_, v___x_3945_);
v___x_3947_ = lean_unsigned_to_nat(4u);
v___x_3948_ = lean_nat_mul(v_size_x27_3944_, v___x_3947_);
v___x_3949_ = lean_unsigned_to_nat(3u);
v___x_3950_ = lean_nat_div(v___x_3948_, v___x_3949_);
lean_dec(v___x_3948_);
v___x_3951_ = lean_array_get_size(v_buckets_x27_3946_);
v___x_3952_ = lean_nat_dec_le(v___x_3950_, v___x_3951_);
lean_dec(v___x_3950_);
if (v___x_3952_ == 0)
{
lean_object* v_val_3953_; lean_object* v___x_3955_; 
v_val_3953_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1___redArg(v_buckets_x27_3946_);
if (v_isShared_3926_ == 0)
{
lean_ctor_set(v___x_3925_, 1, v_val_3953_);
lean_ctor_set(v___x_3925_, 0, v_size_x27_3944_);
v___x_3955_ = v___x_3925_;
goto v_reusejp_3954_;
}
else
{
lean_object* v_reuseFailAlloc_3956_; 
v_reuseFailAlloc_3956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3956_, 0, v_size_x27_3944_);
lean_ctor_set(v_reuseFailAlloc_3956_, 1, v_val_3953_);
v___x_3955_ = v_reuseFailAlloc_3956_;
goto v_reusejp_3954_;
}
v_reusejp_3954_:
{
return v___x_3955_;
}
}
else
{
lean_object* v___x_3958_; 
if (v_isShared_3926_ == 0)
{
lean_ctor_set(v___x_3925_, 1, v_buckets_x27_3946_);
lean_ctor_set(v___x_3925_, 0, v_size_x27_3944_);
v___x_3958_ = v___x_3925_;
goto v_reusejp_3957_;
}
else
{
lean_object* v_reuseFailAlloc_3959_; 
v_reuseFailAlloc_3959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3959_, 0, v_size_x27_3944_);
lean_ctor_set(v_reuseFailAlloc_3959_, 1, v_buckets_x27_3946_);
v___x_3958_ = v_reuseFailAlloc_3959_;
goto v_reusejp_3957_;
}
v_reusejp_3957_:
{
return v___x_3958_;
}
}
}
else
{
lean_object* v___x_3960_; lean_object* v_buckets_x27_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3965_; 
lean_inc(v_bkt_3941_);
v___x_3960_ = lean_box(0);
v_buckets_x27_3961_ = lean_array_uset(v_buckets_3923_, v___x_3940_, v___x_3960_);
v___x_3962_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(v_a_3920_, v_b_3921_, v_bkt_3941_);
v___x_3963_ = lean_array_uset(v_buckets_x27_3961_, v___x_3940_, v___x_3962_);
if (v_isShared_3926_ == 0)
{
lean_ctor_set(v___x_3925_, 1, v___x_3963_);
v___x_3965_ = v___x_3925_;
goto v_reusejp_3964_;
}
else
{
lean_object* v_reuseFailAlloc_3966_; 
v_reuseFailAlloc_3966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3966_, 0, v_size_3922_);
lean_ctor_set(v_reuseFailAlloc_3966_, 1, v___x_3963_);
v___x_3965_ = v_reuseFailAlloc_3966_;
goto v_reusejp_3964_;
}
v_reusejp_3964_:
{
return v___x_3965_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr(lean_object* v_attrName_3971_, lean_object* v_ref_3972_){
_start:
{
lean_object* v___x_3974_; 
lean_inc(v_ref_3972_);
v___x_3974_ = l_Lean_Meta_Grind_mkExtension(v_ref_3972_);
if (lean_obj_tag(v___x_3974_) == 0)
{
lean_object* v_a_3975_; uint8_t v___x_3976_; uint8_t v___x_3977_; lean_object* v___x_3978_; 
v_a_3975_ = lean_ctor_get(v___x_3974_, 0);
lean_inc_n(v_a_3975_, 2);
lean_dec_ref_known(v___x_3974_, 1);
v___x_3976_ = 0;
v___x_3977_ = 1;
lean_inc(v_ref_3972_);
lean_inc(v_attrName_3971_);
v___x_3978_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_3971_, v___x_3976_, v___x_3977_, v_a_3975_, v_ref_3972_);
if (lean_obj_tag(v___x_3978_) == 0)
{
lean_object* v___x_3979_; 
lean_dec_ref_known(v___x_3978_, 1);
lean_inc(v_ref_3972_);
lean_inc(v_a_3975_);
lean_inc(v_attrName_3971_);
v___x_3979_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_3971_, v___x_3976_, v___x_3976_, v_a_3975_, v_ref_3972_);
if (lean_obj_tag(v___x_3979_) == 0)
{
lean_object* v___x_3980_; 
lean_dec_ref_known(v___x_3979_, 1);
lean_inc(v_ref_3972_);
lean_inc(v_a_3975_);
lean_inc(v_attrName_3971_);
v___x_3980_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_3971_, v___x_3977_, v___x_3977_, v_a_3975_, v_ref_3972_);
if (lean_obj_tag(v___x_3980_) == 0)
{
lean_object* v___x_3981_; 
lean_dec_ref_known(v___x_3980_, 1);
lean_inc(v_a_3975_);
lean_inc(v_attrName_3971_);
v___x_3981_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_3971_, v___x_3977_, v___x_3976_, v_a_3975_, v_ref_3972_);
if (lean_obj_tag(v___x_3981_) == 0)
{
lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_3992_; 
v_isSharedCheck_3992_ = !lean_is_exclusive(v___x_3981_);
if (v_isSharedCheck_3992_ == 0)
{
lean_object* v_unused_3993_; 
v_unused_3993_ = lean_ctor_get(v___x_3981_, 0);
lean_dec(v_unused_3993_);
v___x_3983_ = v___x_3981_;
v_isShared_3984_ = v_isSharedCheck_3992_;
goto v_resetjp_3982_;
}
else
{
lean_dec(v___x_3981_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_3992_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3990_; 
v___x_3985_ = l_Lean_Meta_Grind_extensionMapRef;
v___x_3986_ = lean_st_ref_take(v___x_3985_);
lean_inc(v_a_3975_);
v___x_3987_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0___redArg(v___x_3986_, v_attrName_3971_, v_a_3975_);
v___x_3988_ = lean_st_ref_put(v___x_3985_, v___x_3987_);
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 0, v_a_3975_);
v___x_3990_ = v___x_3983_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v_a_3975_);
v___x_3990_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
return v___x_3990_;
}
}
}
else
{
lean_object* v_a_3994_; lean_object* v___x_3996_; uint8_t v_isShared_3997_; uint8_t v_isSharedCheck_4001_; 
lean_dec(v_a_3975_);
lean_dec(v_attrName_3971_);
v_a_3994_ = lean_ctor_get(v___x_3981_, 0);
v_isSharedCheck_4001_ = !lean_is_exclusive(v___x_3981_);
if (v_isSharedCheck_4001_ == 0)
{
v___x_3996_ = v___x_3981_;
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
else
{
lean_inc(v_a_3994_);
lean_dec(v___x_3981_);
v___x_3996_ = lean_box(0);
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
v_resetjp_3995_:
{
lean_object* v___x_3999_; 
if (v_isShared_3997_ == 0)
{
v___x_3999_ = v___x_3996_;
goto v_reusejp_3998_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v_a_3994_);
v___x_3999_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3998_;
}
v_reusejp_3998_:
{
return v___x_3999_;
}
}
}
}
else
{
lean_object* v_a_4002_; lean_object* v___x_4004_; uint8_t v_isShared_4005_; uint8_t v_isSharedCheck_4009_; 
lean_dec(v_a_3975_);
lean_dec(v_ref_3972_);
lean_dec(v_attrName_3971_);
v_a_4002_ = lean_ctor_get(v___x_3980_, 0);
v_isSharedCheck_4009_ = !lean_is_exclusive(v___x_3980_);
if (v_isSharedCheck_4009_ == 0)
{
v___x_4004_ = v___x_3980_;
v_isShared_4005_ = v_isSharedCheck_4009_;
goto v_resetjp_4003_;
}
else
{
lean_inc(v_a_4002_);
lean_dec(v___x_3980_);
v___x_4004_ = lean_box(0);
v_isShared_4005_ = v_isSharedCheck_4009_;
goto v_resetjp_4003_;
}
v_resetjp_4003_:
{
lean_object* v___x_4007_; 
if (v_isShared_4005_ == 0)
{
v___x_4007_ = v___x_4004_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v_a_4002_);
v___x_4007_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
return v___x_4007_;
}
}
}
}
else
{
lean_object* v_a_4010_; lean_object* v___x_4012_; uint8_t v_isShared_4013_; uint8_t v_isSharedCheck_4017_; 
lean_dec(v_a_3975_);
lean_dec(v_ref_3972_);
lean_dec(v_attrName_3971_);
v_a_4010_ = lean_ctor_get(v___x_3979_, 0);
v_isSharedCheck_4017_ = !lean_is_exclusive(v___x_3979_);
if (v_isSharedCheck_4017_ == 0)
{
v___x_4012_ = v___x_3979_;
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
else
{
lean_inc(v_a_4010_);
lean_dec(v___x_3979_);
v___x_4012_ = lean_box(0);
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
v_resetjp_4011_:
{
lean_object* v___x_4015_; 
if (v_isShared_4013_ == 0)
{
v___x_4015_ = v___x_4012_;
goto v_reusejp_4014_;
}
else
{
lean_object* v_reuseFailAlloc_4016_; 
v_reuseFailAlloc_4016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4016_, 0, v_a_4010_);
v___x_4015_ = v_reuseFailAlloc_4016_;
goto v_reusejp_4014_;
}
v_reusejp_4014_:
{
return v___x_4015_;
}
}
}
}
else
{
lean_object* v_a_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4025_; 
lean_dec(v_a_3975_);
lean_dec(v_ref_3972_);
lean_dec(v_attrName_3971_);
v_a_4018_ = lean_ctor_get(v___x_3978_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v___x_3978_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4020_ = v___x_3978_;
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_a_4018_);
lean_dec(v___x_3978_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
lean_object* v___x_4023_; 
if (v_isShared_4021_ == 0)
{
v___x_4023_ = v___x_4020_;
goto v_reusejp_4022_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v_a_4018_);
v___x_4023_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4022_;
}
v_reusejp_4022_:
{
return v___x_4023_;
}
}
}
}
else
{
lean_dec(v_ref_3972_);
lean_dec(v_attrName_3971_);
return v___x_3974_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr___boxed(lean_object* v_attrName_4026_, lean_object* v_ref_4027_, lean_object* v_a_4028_){
_start:
{
lean_object* v_res_4029_; 
v_res_4029_ = l_Lean_Meta_Grind_registerAttr(v_attrName_4026_, v_ref_4027_);
return v_res_4029_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0(lean_object* v_00_u03b2_4030_, lean_object* v_m_4031_, lean_object* v_a_4032_, lean_object* v_b_4033_){
_start:
{
lean_object* v___x_4034_; 
v___x_4034_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0___redArg(v_m_4031_, v_a_4032_, v_b_4033_);
return v___x_4034_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0(lean_object* v_00_u03b2_4035_, lean_object* v_a_4036_, lean_object* v_x_4037_){
_start:
{
uint8_t v___x_4038_; 
v___x_4038_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(v_a_4036_, v_x_4037_);
return v___x_4038_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4039_, lean_object* v_a_4040_, lean_object* v_x_4041_){
_start:
{
uint8_t v_res_4042_; lean_object* v_r_4043_; 
v_res_4042_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0(v_00_u03b2_4039_, v_a_4040_, v_x_4041_);
lean_dec(v_x_4041_);
lean_dec(v_a_4040_);
v_r_4043_ = lean_box(v_res_4042_);
return v_r_4043_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1(lean_object* v_00_u03b2_4044_, lean_object* v_data_4045_){
_start:
{
lean_object* v___x_4046_; 
v___x_4046_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1___redArg(v_data_4045_);
return v___x_4046_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2(lean_object* v_00_u03b2_4047_, lean_object* v_a_4048_, lean_object* v_b_4049_, lean_object* v_x_4050_){
_start:
{
lean_object* v___x_4051_; 
v___x_4051_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(v_a_4048_, v_b_4049_, v_x_4050_);
return v___x_4051_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_4052_, lean_object* v_i_4053_, lean_object* v_source_4054_, lean_object* v_target_4055_){
_start:
{
lean_object* v___x_4056_; 
v___x_4056_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2___redArg(v_i_4053_, v_source_4054_, v_target_4055_);
return v___x_4056_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_4057_, lean_object* v_x_4058_, lean_object* v_x_4059_){
_start:
{
lean_object* v___x_4060_; 
v___x_4060_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3___redArg(v_x_4058_, v_x_4059_);
return v___x_4060_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; 
v___x_4067_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9));
v___x_4068_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_));
v___x_4069_ = l_Lean_Meta_Grind_registerAttr(v___x_4067_, v___x_4068_);
return v___x_4069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2____boxed(lean_object* v_a_4070_){
_start:
{
lean_object* v_res_4071_; 
v_res_4071_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_();
return v_res_4071_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; 
v___x_4082_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_));
v___x_4083_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_));
v___x_4084_ = l_Lean_Meta_Grind_registerAttr(v___x_4082_, v___x_4083_);
return v___x_4084_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2____boxed(lean_object* v_a_4085_){
_start:
{
lean_object* v_res_4086_; 
v_res_4086_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_();
return v_res_4086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___redArg(lean_object* v_declName_4087_, lean_object* v_a_4088_){
_start:
{
lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v_env_4092_; lean_object* v___x_4093_; lean_object* v_ext_4094_; lean_object* v_toEnvExtension_4095_; lean_object* v_asyncMode_4096_; lean_object* v___x_4097_; lean_object* v_casesTypes_4098_; uint8_t v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; 
v___x_4090_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_4091_ = lean_st_ref_get(v_a_4088_);
v_env_4092_ = lean_ctor_get(v___x_4091_, 0);
lean_inc_ref(v_env_4092_);
lean_dec(v___x_4091_);
v___x_4093_ = l_Lean_Meta_Grind_grindExt;
v_ext_4094_ = lean_ctor_get(v___x_4093_, 1);
v_toEnvExtension_4095_ = lean_ctor_get(v_ext_4094_, 0);
v_asyncMode_4096_ = lean_ctor_get(v_toEnvExtension_4095_, 2);
v___x_4097_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_4090_, v___x_4093_, v_env_4092_, v_asyncMode_4096_);
v_casesTypes_4098_ = lean_ctor_get(v___x_4097_, 0);
lean_inc_ref(v_casesTypes_4098_);
lean_dec(v___x_4097_);
v___x_4099_ = l_Lean_Meta_Grind_CasesTypes_isSplit(v_casesTypes_4098_, v_declName_4087_);
lean_dec_ref(v_casesTypes_4098_);
v___x_4100_ = lean_box(v___x_4099_);
v___x_4101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4101_, 0, v___x_4100_);
return v___x_4101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___redArg___boxed(lean_object* v_declName_4102_, lean_object* v_a_4103_, lean_object* v_a_4104_){
_start:
{
lean_object* v_res_4105_; 
v_res_4105_ = l_Lean_Meta_Grind_isGlobalSplit___redArg(v_declName_4102_, v_a_4103_);
lean_dec(v_a_4103_);
lean_dec(v_declName_4102_);
return v_res_4105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit(lean_object* v_declName_4106_, lean_object* v_a_4107_, lean_object* v_a_4108_){
_start:
{
lean_object* v___x_4110_; 
v___x_4110_ = l_Lean_Meta_Grind_isGlobalSplit___redArg(v_declName_4106_, v_a_4108_);
return v___x_4110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___boxed(lean_object* v_declName_4111_, lean_object* v_a_4112_, lean_object* v_a_4113_, lean_object* v_a_4114_){
_start:
{
lean_object* v_res_4115_; 
v_res_4115_ = l_Lean_Meta_Grind_isGlobalSplit(v_declName_4111_, v_a_4112_, v_a_4113_);
lean_dec(v_a_4113_);
lean_dec_ref(v_a_4112_);
lean_dec(v_declName_4111_);
return v_res_4115_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Injective(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Cases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_ExtAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Homo(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Attr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_ExtAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Homo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_normExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_normExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_extensionMapRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_extensionMapRef);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_grindExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_grindExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_liaExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_liaExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Attr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1 = _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1);
l_Lean_Meta_Grind_registerAttr___auto__1 = _init_l_Lean_Meta_Grind_registerAttr___auto__1();
lean_mark_persistent(l_Lean_Meta_Grind_registerAttr___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Injective(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Cases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_ExtAttr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Homo(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Attr(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Attr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_ExtAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Homo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Attr(builtin);
}
#ifdef __cplusplus
}
#endif

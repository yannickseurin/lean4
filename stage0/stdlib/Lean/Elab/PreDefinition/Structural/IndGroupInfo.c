// Lean compiler output
// Module: Lean.Elab.PreDefinition.Structural.IndGroupInfo
// Imports: public import Lean.Meta.InferType
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_zipWith___at___00List_zip_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Level_isEquiv(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_instReprLevel_repr(lean_object*, lean_object*);
lean_object* l_Lean_instReprExpr_repr(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_Lean_mkRecName(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_mkBRecOnName(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Structural_instBEqIndGroupInfo_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instBEqIndGroupInfo_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Structural_instBEqIndGroupInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Structural_instBEqIndGroupInfo_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_instBEqIndGroupInfo___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instBEqIndGroupInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_instBEqIndGroupInfo = (const lean_object*)&l_Lean_Elab_Structural_instBEqIndGroupInfo___closed__0_value;
static const lean_array_object l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInfo = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__1_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__0_value;
static const lean_string_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__3_value;
static const lean_string_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__4 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__4_value;
static lean_once_cell_t l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__5;
static lean_once_cell_t l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6;
static const lean_ctor_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__8_value;
static const lean_string_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__9 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__9_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__9_value)}};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__10 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__7;
static const lean_string_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numNested"};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__10;
static const lean_string_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__12;
static lean_once_cell_t l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__11_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__15 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Structural_instReprIndGroupInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Structural_instReprIndGroupInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_ofInductiveVal(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_numMotives(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_numMotives___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_brecOnName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_brecOnName___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__0_value)}};
static const lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInst_default = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInst = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__1_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__0 = (const lean_object*)&l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__1 = (const lean_object*)&l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__1_value;
static const lean_string_object l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__2 = (const lean_object*)&l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__3;
static lean_once_cell_t l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__4;
static const lean_ctor_object l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__5 = (const lean_object*)&l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg(lean_object*);
static const lean_string_object l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "toIndGroupInfo"};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__2_value),((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__4;
static const lean_string_object l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "levels"};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__7;
static const lean_string_object l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "params"};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Structural_instReprIndGroupInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Structural_instReprIndGroupInst_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_toMessageData(lean_object*);
static const lean_closure_object l_Lean_Elab_Structural_instToMessageDataIndGroupInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Structural_IndGroupInst_toMessageData, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_instToMessageDataIndGroupInst___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instToMessageDataIndGroupInst___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_instToMessageDataIndGroupInst = (const lean_object*)&l_Lean_Elab_Structural_instToMessageDataIndGroupInst___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_isDefEq___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_isDefEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_isDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_isDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_brecOn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_brecOn___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lean.Elab.PreDefinition.Structural.IndGroupInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Lean.Elab.Structural.IndGroupInst.nestedTypeFormers"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "assertion violation: xs.size > 0\n      "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__0 = (const lean_object*)&l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__1;
static const lean_string_object l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "` is not a recursor"};
static const lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__2 = (const lean_object*)&l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__3;
static const lean_string_object l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__4 = (const lean_object*)&l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__4_value;
static const lean_string_object l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Lean.isRec\?"};
static const lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__5 = (const lean_object*)&l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__5_value;
static const lean_string_object l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__6 = (const lean_object*)&l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "assertion violation: recInfo.numMotives = igi.numMotives\n  "};
static const lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__1;
static lean_once_cell_t l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__2;
static const lean_array_object l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___boxed__const__1 = (const lean_object*)&l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___redArg(lean_object* v_xs_1_, lean_object* v_ys_2_, lean_object* v_x_3_){
_start:
{
lean_object* v_zero_4_; uint8_t v_isZero_5_; 
v_zero_4_ = lean_unsigned_to_nat(0u);
v_isZero_5_ = lean_nat_dec_eq(v_x_3_, v_zero_4_);
if (v_isZero_5_ == 1)
{
lean_dec(v_x_3_);
return v_isZero_5_;
}
else
{
lean_object* v_one_6_; lean_object* v_n_7_; lean_object* v___x_8_; lean_object* v___x_9_; uint8_t v___x_10_; 
v_one_6_ = lean_unsigned_to_nat(1u);
v_n_7_ = lean_nat_sub(v_x_3_, v_one_6_);
lean_dec(v_x_3_);
v___x_8_ = lean_array_fget_borrowed(v_xs_1_, v_n_7_);
v___x_9_ = lean_array_fget_borrowed(v_ys_2_, v_n_7_);
v___x_10_ = lean_name_eq(v___x_8_, v___x_9_);
if (v___x_10_ == 0)
{
lean_dec(v_n_7_);
return v___x_10_;
}
else
{
v_x_3_ = v_n_7_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___redArg___boxed(lean_object* v_xs_12_, lean_object* v_ys_13_, lean_object* v_x_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___redArg(v_xs_12_, v_ys_13_, v_x_14_);
lean_dec_ref(v_ys_13_);
lean_dec_ref(v_xs_12_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Structural_instBEqIndGroupInfo_beq(lean_object* v_x_17_, lean_object* v_x_18_){
_start:
{
lean_object* v_all_19_; lean_object* v_numNested_20_; lean_object* v_all_21_; lean_object* v_numNested_22_; lean_object* v___x_23_; lean_object* v___x_24_; uint8_t v___x_25_; 
v_all_19_ = lean_ctor_get(v_x_17_, 0);
v_numNested_20_ = lean_ctor_get(v_x_17_, 1);
v_all_21_ = lean_ctor_get(v_x_18_, 0);
v_numNested_22_ = lean_ctor_get(v_x_18_, 1);
v___x_23_ = lean_array_get_size(v_all_19_);
v___x_24_ = lean_array_get_size(v_all_21_);
v___x_25_ = lean_nat_dec_eq(v___x_23_, v___x_24_);
if (v___x_25_ == 0)
{
return v___x_25_;
}
else
{
uint8_t v___x_26_; 
v___x_26_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___redArg(v_all_19_, v_all_21_, v___x_23_);
if (v___x_26_ == 0)
{
return v___x_26_;
}
else
{
uint8_t v___x_27_; 
v___x_27_ = lean_nat_dec_eq(v_numNested_20_, v_numNested_22_);
return v___x_27_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instBEqIndGroupInfo_beq___boxed(lean_object* v_x_28_, lean_object* v_x_29_){
_start:
{
uint8_t v_res_30_; lean_object* v_r_31_; 
v_res_30_ = l_Lean_Elab_Structural_instBEqIndGroupInfo_beq(v_x_28_, v_x_29_);
lean_dec_ref(v_x_29_);
lean_dec_ref(v_x_28_);
v_r_31_ = lean_box(v_res_30_);
return v_r_31_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0(lean_object* v_xs_32_, lean_object* v_ys_33_, lean_object* v_hsz_34_, lean_object* v_x_35_, lean_object* v_x_36_){
_start:
{
uint8_t v___x_37_; 
v___x_37_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___redArg(v_xs_32_, v_ys_33_, v_x_35_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___boxed(lean_object* v_xs_38_, lean_object* v_ys_39_, lean_object* v_hsz_40_, lean_object* v_x_41_, lean_object* v_x_42_){
_start:
{
uint8_t v_res_43_; lean_object* v_r_44_; 
v_res_43_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0(v_xs_38_, v_ys_39_, v_hsz_40_, v_x_41_, v_x_42_);
lean_dec_ref(v_ys_39_);
lean_dec_ref(v_xs_38_);
v_r_44_ = lean_box(v_res_43_);
return v_r_44_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__1(lean_object* v_a_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_nat_to_int(v_a_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0___lam__0(lean_object* v___y_56_){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_unsigned_to_nat(0u);
v___x_58_ = l_Lean_Name_reprPrec(v___y_56_, v___x_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0_spec__2_spec__3(lean_object* v_x_59_, lean_object* v_x_60_, lean_object* v_x_61_){
_start:
{
if (lean_obj_tag(v_x_61_) == 0)
{
lean_dec(v_x_59_);
return v_x_60_;
}
else
{
lean_object* v_head_62_; lean_object* v_tail_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_74_; 
v_head_62_ = lean_ctor_get(v_x_61_, 0);
v_tail_63_ = lean_ctor_get(v_x_61_, 1);
v_isSharedCheck_74_ = !lean_is_exclusive(v_x_61_);
if (v_isSharedCheck_74_ == 0)
{
v___x_65_ = v_x_61_;
v_isShared_66_ = v_isSharedCheck_74_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_tail_63_);
lean_inc(v_head_62_);
lean_dec(v_x_61_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_74_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_68_; 
lean_inc(v_x_59_);
if (v_isShared_66_ == 0)
{
lean_ctor_set_tag(v___x_65_, 5);
lean_ctor_set(v___x_65_, 1, v_x_59_);
lean_ctor_set(v___x_65_, 0, v_x_60_);
v___x_68_ = v___x_65_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_73_, 0, v_x_60_);
lean_ctor_set(v_reuseFailAlloc_73_, 1, v_x_59_);
v___x_68_ = v_reuseFailAlloc_73_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_69_ = lean_unsigned_to_nat(0u);
v___x_70_ = l_Lean_Name_reprPrec(v_head_62_, v___x_69_);
v___x_71_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_68_);
lean_ctor_set(v___x_71_, 1, v___x_70_);
v_x_60_ = v___x_71_;
v_x_61_ = v_tail_63_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0_spec__2(lean_object* v_x_75_, lean_object* v_x_76_, lean_object* v_x_77_){
_start:
{
if (lean_obj_tag(v_x_77_) == 0)
{
lean_dec(v_x_75_);
return v_x_76_;
}
else
{
lean_object* v_head_78_; lean_object* v_tail_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_90_; 
v_head_78_ = lean_ctor_get(v_x_77_, 0);
v_tail_79_ = lean_ctor_get(v_x_77_, 1);
v_isSharedCheck_90_ = !lean_is_exclusive(v_x_77_);
if (v_isSharedCheck_90_ == 0)
{
v___x_81_ = v_x_77_;
v_isShared_82_ = v_isSharedCheck_90_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_tail_79_);
lean_inc(v_head_78_);
lean_dec(v_x_77_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_90_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_84_; 
lean_inc(v_x_75_);
if (v_isShared_82_ == 0)
{
lean_ctor_set_tag(v___x_81_, 5);
lean_ctor_set(v___x_81_, 1, v_x_75_);
lean_ctor_set(v___x_81_, 0, v_x_76_);
v___x_84_ = v___x_81_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v_x_76_);
lean_ctor_set(v_reuseFailAlloc_89_, 1, v_x_75_);
v___x_84_ = v_reuseFailAlloc_89_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_85_ = lean_unsigned_to_nat(0u);
v___x_86_ = l_Lean_Name_reprPrec(v_head_78_, v___x_85_);
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_84_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0_spec__2_spec__3(v_x_75_, v___x_87_, v_tail_79_);
return v___x_88_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0(lean_object* v_x_91_, lean_object* v_x_92_){
_start:
{
if (lean_obj_tag(v_x_91_) == 0)
{
lean_object* v___x_93_; 
lean_dec(v_x_92_);
v___x_93_ = lean_box(0);
return v___x_93_;
}
else
{
lean_object* v_tail_94_; 
v_tail_94_ = lean_ctor_get(v_x_91_, 1);
if (lean_obj_tag(v_tail_94_) == 0)
{
lean_object* v_head_95_; lean_object* v___x_96_; 
lean_dec(v_x_92_);
v_head_95_ = lean_ctor_get(v_x_91_, 0);
lean_inc(v_head_95_);
lean_dec_ref_known(v_x_91_, 2);
v___x_96_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0___lam__0(v_head_95_);
return v___x_96_;
}
else
{
lean_object* v_head_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
lean_inc(v_tail_94_);
v_head_97_ = lean_ctor_get(v_x_91_, 0);
lean_inc(v_head_97_);
lean_dec_ref_known(v_x_91_, 2);
v___x_98_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0___lam__0(v_head_97_);
v___x_99_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0_spec__2(v_x_92_, v___x_98_, v_tail_94_);
return v___x_99_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__5(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_108_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__0));
v___x_109_ = lean_string_length(v___x_108_);
return v___x_109_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__5, &l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__5_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__5);
v___x_111_ = lean_nat_to_int(v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0(lean_object* v_xs_119_){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_120_ = lean_array_get_size(v_xs_119_);
v___x_121_ = lean_unsigned_to_nat(0u);
v___x_122_ = lean_nat_dec_eq(v___x_120_, v___x_121_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_123_ = lean_array_to_list(v_xs_119_);
v___x_124_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__3));
v___x_125_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0(v___x_123_, v___x_124_);
v___x_126_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6, &l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6);
v___x_127_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__7));
v___x_128_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
lean_ctor_set(v___x_128_, 1, v___x_125_);
v___x_129_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__8));
v___x_130_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_128_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
v___x_131_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_126_);
lean_ctor_set(v___x_131_, 1, v___x_130_);
v___x_132_ = l_Std_Format_fill(v___x_131_);
return v___x_132_;
}
else
{
lean_object* v___x_133_; 
lean_dec_ref(v_xs_119_);
v___x_133_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__10));
return v___x_133_;
}
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = lean_unsigned_to_nat(7u);
v___x_148_ = lean_nat_to_int(v___x_147_);
return v___x_148_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_152_ = lean_unsigned_to_nat(13u);
v___x_153_ = lean_nat_to_int(v___x_152_);
return v___x_153_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__0));
v___x_156_ = lean_string_length(v___x_155_);
return v___x_156_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = lean_obj_once(&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__12, &l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__12_once, _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__12);
v___x_158_ = lean_nat_to_int(v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg(lean_object* v_x_163_){
_start:
{
lean_object* v_all_164_; lean_object* v_numNested_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_199_; 
v_all_164_ = lean_ctor_get(v_x_163_, 0);
v_numNested_165_ = lean_ctor_get(v_x_163_, 1);
v_isSharedCheck_199_ = !lean_is_exclusive(v_x_163_);
if (v_isSharedCheck_199_ == 0)
{
v___x_167_ = v_x_163_;
v_isShared_168_ = v_isSharedCheck_199_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_numNested_165_);
lean_inc(v_all_164_);
lean_dec(v_x_163_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_199_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_174_; 
v___x_169_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__5));
v___x_170_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__6));
v___x_171_ = lean_obj_once(&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__7, &l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__7_once, _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__7);
v___x_172_ = l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0(v_all_164_);
if (v_isShared_168_ == 0)
{
lean_ctor_set_tag(v___x_167_, 4);
lean_ctor_set(v___x_167_, 1, v___x_172_);
lean_ctor_set(v___x_167_, 0, v___x_171_);
v___x_174_ = v___x_167_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_171_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v___x_172_);
v___x_174_ = v_reuseFailAlloc_198_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
uint8_t v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_175_ = 0;
v___x_176_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_176_, 0, v___x_174_);
lean_ctor_set_uint8(v___x_176_, sizeof(void*)*1, v___x_175_);
v___x_177_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_170_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
v___x_178_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__2));
v___x_179_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_177_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
v___x_180_ = lean_box(1);
v___x_181_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_179_);
lean_ctor_set(v___x_181_, 1, v___x_180_);
v___x_182_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__9));
v___x_183_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_183_, 0, v___x_181_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
v___x_184_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
lean_ctor_set(v___x_184_, 1, v___x_169_);
v___x_185_ = lean_obj_once(&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__10, &l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__10_once, _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__10);
v___x_186_ = l_Nat_reprFast(v_numNested_165_);
v___x_187_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
v___x_188_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_185_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
v___x_189_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_189_, 0, v___x_188_);
lean_ctor_set_uint8(v___x_189_, sizeof(void*)*1, v___x_175_);
v___x_190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_190_, 0, v___x_184_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
v___x_191_ = lean_obj_once(&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13, &l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13_once, _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13);
v___x_192_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__14));
v___x_193_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
lean_ctor_set(v___x_193_, 1, v___x_190_);
v___x_194_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__15));
v___x_195_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_193_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
v___x_196_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_191_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
v___x_197_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_197_, 0, v___x_196_);
lean_ctor_set_uint8(v___x_197_, sizeof(void*)*1, v___x_175_);
return v___x_197_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr(lean_object* v_x_200_, lean_object* v_prec_201_){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg(v_x_200_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___boxed(lean_object* v_x_203_, lean_object* v_prec_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_Elab_Structural_instReprIndGroupInfo_repr(v_x_203_, v_prec_204_);
lean_dec(v_prec_204_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_ofInductiveVal(lean_object* v_indInfo_208_){
_start:
{
lean_object* v_all_209_; lean_object* v_numNested_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v_all_209_ = lean_ctor_get(v_indInfo_208_, 3);
lean_inc(v_all_209_);
v_numNested_210_ = lean_ctor_get(v_indInfo_208_, 5);
lean_inc(v_numNested_210_);
lean_dec_ref(v_indInfo_208_);
v___x_211_ = lean_array_mk(v_all_209_);
v___x_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_211_);
lean_ctor_set(v___x_212_, 1, v_numNested_210_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_numMotives(lean_object* v_group_213_){
_start:
{
lean_object* v_all_214_; lean_object* v_numNested_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v_all_214_ = lean_ctor_get(v_group_213_, 0);
v_numNested_215_ = lean_ctor_get(v_group_213_, 1);
v___x_216_ = lean_array_get_size(v_all_214_);
v___x_217_ = lean_nat_add(v___x_216_, v_numNested_215_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_numMotives___boxed(lean_object* v_group_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_Elab_Structural_IndGroupInfo_numMotives(v_group_218_);
lean_dec_ref(v_group_218_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_brecOnName(lean_object* v_info_220_, lean_object* v_idx_221_){
_start:
{
lean_object* v_all_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v_all_222_ = lean_ctor_get(v_info_220_, 0);
v___x_223_ = lean_array_get_size(v_all_222_);
v___x_224_ = lean_nat_dec_lt(v_idx_221_, v___x_223_);
if (v___x_224_ == 0)
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v_j_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_225_ = lean_nat_sub(v_idx_221_, v___x_223_);
v___x_226_ = lean_unsigned_to_nat(1u);
v_j_227_ = lean_nat_add(v___x_225_, v___x_226_);
lean_dec(v___x_225_);
v___x_228_ = lean_unsigned_to_nat(0u);
v___x_229_ = l_Lean_Elab_Structural_IndGroupInfo_brecOnName(v_info_220_, v___x_228_);
v___x_230_ = lean_name_append_index_after(v___x_229_, v_j_227_);
return v___x_230_;
}
else
{
lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_231_ = lean_array_fget_borrowed(v_all_222_, v_idx_221_);
lean_inc(v___x_231_);
v___x_232_ = l_Lean_mkBRecOnName(v___x_231_);
return v___x_232_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_brecOnName___boxed(lean_object* v_info_233_, lean_object* v_idx_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Lean_Elab_Structural_IndGroupInfo_brecOnName(v_info_233_, v_idx_234_);
lean_dec(v_idx_234_);
lean_dec_ref(v_info_233_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2_spec__4_spec__6(lean_object* v_x_244_, lean_object* v_x_245_, lean_object* v_x_246_){
_start:
{
if (lean_obj_tag(v_x_246_) == 0)
{
lean_dec(v_x_244_);
return v_x_245_;
}
else
{
lean_object* v_head_247_; lean_object* v_tail_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_259_; 
v_head_247_ = lean_ctor_get(v_x_246_, 0);
v_tail_248_ = lean_ctor_get(v_x_246_, 1);
v_isSharedCheck_259_ = !lean_is_exclusive(v_x_246_);
if (v_isSharedCheck_259_ == 0)
{
v___x_250_ = v_x_246_;
v_isShared_251_ = v_isSharedCheck_259_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_tail_248_);
lean_inc(v_head_247_);
lean_dec(v_x_246_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_259_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_253_; 
lean_inc(v_x_244_);
if (v_isShared_251_ == 0)
{
lean_ctor_set_tag(v___x_250_, 5);
lean_ctor_set(v___x_250_, 1, v_x_244_);
lean_ctor_set(v___x_250_, 0, v_x_245_);
v___x_253_ = v___x_250_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_x_245_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v_x_244_);
v___x_253_ = v_reuseFailAlloc_258_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_254_ = lean_unsigned_to_nat(0u);
v___x_255_ = l_Lean_instReprExpr_repr(v_head_247_, v___x_254_);
v___x_256_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_253_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v_x_245_ = v___x_256_;
v_x_246_ = v_tail_248_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2_spec__4(lean_object* v_x_260_, lean_object* v_x_261_, lean_object* v_x_262_){
_start:
{
if (lean_obj_tag(v_x_262_) == 0)
{
lean_dec(v_x_260_);
return v_x_261_;
}
else
{
lean_object* v_head_263_; lean_object* v_tail_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_275_; 
v_head_263_ = lean_ctor_get(v_x_262_, 0);
v_tail_264_ = lean_ctor_get(v_x_262_, 1);
v_isSharedCheck_275_ = !lean_is_exclusive(v_x_262_);
if (v_isSharedCheck_275_ == 0)
{
v___x_266_ = v_x_262_;
v_isShared_267_ = v_isSharedCheck_275_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_tail_264_);
lean_inc(v_head_263_);
lean_dec(v_x_262_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_275_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
lean_inc(v_x_260_);
if (v_isShared_267_ == 0)
{
lean_ctor_set_tag(v___x_266_, 5);
lean_ctor_set(v___x_266_, 1, v_x_260_);
lean_ctor_set(v___x_266_, 0, v_x_261_);
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_x_261_);
lean_ctor_set(v_reuseFailAlloc_274_, 1, v_x_260_);
v___x_269_ = v_reuseFailAlloc_274_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_270_ = lean_unsigned_to_nat(0u);
v___x_271_ = l_Lean_instReprExpr_repr(v_head_263_, v___x_270_);
v___x_272_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_269_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2_spec__4_spec__6(v_x_260_, v___x_272_, v_tail_264_);
return v___x_273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2___lam__0(lean_object* v___y_276_){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_277_ = lean_unsigned_to_nat(0u);
v___x_278_ = l_Lean_instReprExpr_repr(v___y_276_, v___x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2(lean_object* v_x_279_, lean_object* v_x_280_){
_start:
{
if (lean_obj_tag(v_x_279_) == 0)
{
lean_object* v___x_281_; 
lean_dec(v_x_280_);
v___x_281_ = lean_box(0);
return v___x_281_;
}
else
{
lean_object* v_tail_282_; 
v_tail_282_ = lean_ctor_get(v_x_279_, 1);
if (lean_obj_tag(v_tail_282_) == 0)
{
lean_object* v_head_283_; lean_object* v___x_284_; 
lean_dec(v_x_280_);
v_head_283_ = lean_ctor_get(v_x_279_, 0);
lean_inc(v_head_283_);
lean_dec_ref_known(v_x_279_, 2);
v___x_284_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2___lam__0(v_head_283_);
return v___x_284_;
}
else
{
lean_object* v_head_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
lean_inc(v_tail_282_);
v_head_285_ = lean_ctor_get(v_x_279_, 0);
lean_inc(v_head_285_);
lean_dec_ref_known(v_x_279_, 2);
v___x_286_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2___lam__0(v_head_285_);
v___x_287_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2_spec__4(v_x_280_, v___x_286_, v_tail_282_);
return v___x_287_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1(lean_object* v_xs_288_){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_289_ = lean_array_get_size(v_xs_288_);
v___x_290_ = lean_unsigned_to_nat(0u);
v___x_291_ = lean_nat_dec_eq(v___x_289_, v___x_290_);
if (v___x_291_ == 0)
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_292_ = lean_array_to_list(v_xs_288_);
v___x_293_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__3));
v___x_294_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2(v___x_292_, v___x_293_);
v___x_295_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6, &l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6);
v___x_296_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__7));
v___x_297_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set(v___x_297_, 1, v___x_294_);
v___x_298_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__8));
v___x_299_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_297_);
lean_ctor_set(v___x_299_, 1, v___x_298_);
v___x_300_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_295_);
lean_ctor_set(v___x_300_, 1, v___x_299_);
v___x_301_ = l_Std_Format_fill(v___x_300_);
return v___x_301_;
}
else
{
lean_object* v___x_302_; 
lean_dec_ref(v_xs_288_);
v___x_302_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__10));
return v___x_302_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0_spec__1_spec__3(lean_object* v_x_303_, lean_object* v_x_304_, lean_object* v_x_305_){
_start:
{
if (lean_obj_tag(v_x_305_) == 0)
{
lean_dec(v_x_303_);
return v_x_304_;
}
else
{
lean_object* v_head_306_; lean_object* v_tail_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_318_; 
v_head_306_ = lean_ctor_get(v_x_305_, 0);
v_tail_307_ = lean_ctor_get(v_x_305_, 1);
v_isSharedCheck_318_ = !lean_is_exclusive(v_x_305_);
if (v_isSharedCheck_318_ == 0)
{
v___x_309_ = v_x_305_;
v_isShared_310_ = v_isSharedCheck_318_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_tail_307_);
lean_inc(v_head_306_);
lean_dec(v_x_305_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_318_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_312_; 
lean_inc(v_x_303_);
if (v_isShared_310_ == 0)
{
lean_ctor_set_tag(v___x_309_, 5);
lean_ctor_set(v___x_309_, 1, v_x_303_);
lean_ctor_set(v___x_309_, 0, v_x_304_);
v___x_312_ = v___x_309_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_x_304_);
lean_ctor_set(v_reuseFailAlloc_317_, 1, v_x_303_);
v___x_312_ = v_reuseFailAlloc_317_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_313_ = lean_unsigned_to_nat(0u);
v___x_314_ = l_Lean_instReprLevel_repr(v_head_306_, v___x_313_);
v___x_315_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_315_, 0, v___x_312_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
v_x_304_ = v___x_315_;
v_x_305_ = v_tail_307_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0_spec__1(lean_object* v_x_319_, lean_object* v_x_320_, lean_object* v_x_321_){
_start:
{
if (lean_obj_tag(v_x_321_) == 0)
{
lean_dec(v_x_319_);
return v_x_320_;
}
else
{
lean_object* v_head_322_; lean_object* v_tail_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_334_; 
v_head_322_ = lean_ctor_get(v_x_321_, 0);
v_tail_323_ = lean_ctor_get(v_x_321_, 1);
v_isSharedCheck_334_ = !lean_is_exclusive(v_x_321_);
if (v_isSharedCheck_334_ == 0)
{
v___x_325_ = v_x_321_;
v_isShared_326_ = v_isSharedCheck_334_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_tail_323_);
lean_inc(v_head_322_);
lean_dec(v_x_321_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_334_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
lean_inc(v_x_319_);
if (v_isShared_326_ == 0)
{
lean_ctor_set_tag(v___x_325_, 5);
lean_ctor_set(v___x_325_, 1, v_x_319_);
lean_ctor_set(v___x_325_, 0, v_x_320_);
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_x_320_);
lean_ctor_set(v_reuseFailAlloc_333_, 1, v_x_319_);
v___x_328_ = v_reuseFailAlloc_333_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_329_ = lean_unsigned_to_nat(0u);
v___x_330_ = l_Lean_instReprLevel_repr(v_head_322_, v___x_329_);
v___x_331_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_331_, 0, v___x_328_);
lean_ctor_set(v___x_331_, 1, v___x_330_);
v___x_332_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0_spec__1_spec__3(v_x_319_, v___x_331_, v_tail_323_);
return v___x_332_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0___lam__0(lean_object* v___y_335_){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = lean_unsigned_to_nat(0u);
v___x_337_ = l_Lean_instReprLevel_repr(v___y_335_, v___x_336_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0(lean_object* v_x_338_, lean_object* v_x_339_){
_start:
{
if (lean_obj_tag(v_x_338_) == 0)
{
lean_object* v___x_340_; 
lean_dec(v_x_339_);
v___x_340_ = lean_box(0);
return v___x_340_;
}
else
{
lean_object* v_tail_341_; 
v_tail_341_ = lean_ctor_get(v_x_338_, 1);
if (lean_obj_tag(v_tail_341_) == 0)
{
lean_object* v_head_342_; lean_object* v___x_343_; 
lean_dec(v_x_339_);
v_head_342_ = lean_ctor_get(v_x_338_, 0);
lean_inc(v_head_342_);
lean_dec_ref_known(v_x_338_, 2);
v___x_343_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0___lam__0(v_head_342_);
return v___x_343_;
}
else
{
lean_object* v_head_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
lean_inc(v_tail_341_);
v_head_344_ = lean_ctor_get(v_x_338_, 0);
lean_inc(v_head_344_);
lean_dec_ref_known(v_x_338_, 2);
v___x_345_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0___lam__0(v_head_344_);
v___x_346_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0_spec__1(v_x_339_, v___x_345_, v_tail_341_);
return v___x_346_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = ((lean_object*)(l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__2));
v___x_352_ = lean_string_length(v___x_351_);
return v___x_352_;
}
}
static lean_object* _init_l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_353_ = lean_obj_once(&l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__3, &l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__3_once, _init_l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__3);
v___x_354_ = lean_nat_to_int(v___x_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg(lean_object* v_a_357_){
_start:
{
if (lean_obj_tag(v_a_357_) == 0)
{
lean_object* v___x_358_; 
v___x_358_ = ((lean_object*)(l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__1));
return v___x_358_;
}
else
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; lean_object* v___x_368_; 
v___x_359_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__3));
v___x_360_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0(v_a_357_, v___x_359_);
v___x_361_ = lean_obj_once(&l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__4, &l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__4_once, _init_l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__4);
v___x_362_ = ((lean_object*)(l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__5));
v___x_363_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_363_, 0, v___x_362_);
lean_ctor_set(v___x_363_, 1, v___x_360_);
v___x_364_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__8));
v___x_365_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_363_);
lean_ctor_set(v___x_365_, 1, v___x_364_);
v___x_366_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_366_, 0, v___x_361_);
lean_ctor_set(v___x_366_, 1, v___x_365_);
v___x_367_ = 0;
v___x_368_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_368_, 0, v___x_366_);
lean_ctor_set_uint8(v___x_368_, sizeof(void*)*1, v___x_367_);
return v___x_368_;
}
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = lean_unsigned_to_nat(18u);
v___x_379_ = lean_nat_to_int(v___x_378_);
return v___x_379_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = lean_unsigned_to_nat(10u);
v___x_384_ = lean_nat_to_int(v___x_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg(lean_object* v_x_388_){
_start:
{
lean_object* v_toIndGroupInfo_389_; lean_object* v_levels_390_; lean_object* v_params_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; uint8_t v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v_toIndGroupInfo_389_ = lean_ctor_get(v_x_388_, 0);
lean_inc_ref(v_toIndGroupInfo_389_);
v_levels_390_ = lean_ctor_get(v_x_388_, 1);
lean_inc(v_levels_390_);
v_params_391_ = lean_ctor_get(v_x_388_, 2);
lean_inc_ref(v_params_391_);
lean_dec_ref(v_x_388_);
v___x_392_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__5));
v___x_393_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__3));
v___x_394_ = lean_obj_once(&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__4, &l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__4_once, _init_l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__4);
v___x_395_ = l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg(v_toIndGroupInfo_389_);
v___x_396_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_396_, 0, v___x_394_);
lean_ctor_set(v___x_396_, 1, v___x_395_);
v___x_397_ = 0;
v___x_398_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_398_, 0, v___x_396_);
lean_ctor_set_uint8(v___x_398_, sizeof(void*)*1, v___x_397_);
v___x_399_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_393_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
v___x_400_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__2));
v___x_401_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_401_, 0, v___x_399_);
lean_ctor_set(v___x_401_, 1, v___x_400_);
v___x_402_ = lean_box(1);
v___x_403_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_403_, 0, v___x_401_);
lean_ctor_set(v___x_403_, 1, v___x_402_);
v___x_404_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__6));
v___x_405_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_405_, 0, v___x_403_);
lean_ctor_set(v___x_405_, 1, v___x_404_);
v___x_406_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
lean_ctor_set(v___x_406_, 1, v___x_392_);
v___x_407_ = lean_obj_once(&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__7, &l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__7_once, _init_l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__7);
v___x_408_ = l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg(v_levels_390_);
v___x_409_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_407_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
v___x_410_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_410_, 0, v___x_409_);
lean_ctor_set_uint8(v___x_410_, sizeof(void*)*1, v___x_397_);
v___x_411_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_411_, 0, v___x_406_);
lean_ctor_set(v___x_411_, 1, v___x_410_);
v___x_412_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
lean_ctor_set(v___x_412_, 1, v___x_400_);
v___x_413_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
lean_ctor_set(v___x_413_, 1, v___x_402_);
v___x_414_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__9));
v___x_415_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_413_);
lean_ctor_set(v___x_415_, 1, v___x_414_);
v___x_416_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
lean_ctor_set(v___x_416_, 1, v___x_392_);
v___x_417_ = l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1(v_params_391_);
v___x_418_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_407_);
lean_ctor_set(v___x_418_, 1, v___x_417_);
v___x_419_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_419_, 0, v___x_418_);
lean_ctor_set_uint8(v___x_419_, sizeof(void*)*1, v___x_397_);
v___x_420_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_420_, 0, v___x_416_);
lean_ctor_set(v___x_420_, 1, v___x_419_);
v___x_421_ = lean_obj_once(&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13, &l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13_once, _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13);
v___x_422_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__14));
v___x_423_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_423_, 0, v___x_422_);
lean_ctor_set(v___x_423_, 1, v___x_420_);
v___x_424_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__15));
v___x_425_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_425_, 0, v___x_423_);
lean_ctor_set(v___x_425_, 1, v___x_424_);
v___x_426_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_426_, 0, v___x_421_);
lean_ctor_set(v___x_426_, 1, v___x_425_);
v___x_427_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_427_, 0, v___x_426_);
lean_ctor_set_uint8(v___x_427_, sizeof(void*)*1, v___x_397_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr(lean_object* v_x_428_, lean_object* v_prec_429_){
_start:
{
lean_object* v___x_430_; 
v___x_430_ = l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg(v_x_428_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___boxed(lean_object* v_x_431_, lean_object* v_prec_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lean_Elab_Structural_instReprIndGroupInst_repr(v_x_431_, v_prec_432_);
lean_dec(v_prec_432_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0(lean_object* v_a_434_, lean_object* v_n_435_){
_start:
{
lean_object* v___x_436_; 
v___x_436_ = l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg(v_a_434_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___boxed(lean_object* v_a_437_, lean_object* v_n_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0(v_a_437_, v_n_438_);
lean_dec(v_n_438_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_toMessageData(lean_object* v_igi_442_){
_start:
{
lean_object* v_toIndGroupInfo_443_; lean_object* v_levels_444_; lean_object* v_params_445_; lean_object* v_all_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v_toIndGroupInfo_443_ = lean_ctor_get(v_igi_442_, 0);
lean_inc_ref(v_toIndGroupInfo_443_);
v_levels_444_ = lean_ctor_get(v_igi_442_, 1);
lean_inc(v_levels_444_);
v_params_445_ = lean_ctor_get(v_igi_442_, 2);
lean_inc_ref(v_params_445_);
lean_dec_ref(v_igi_442_);
v_all_446_ = lean_ctor_get(v_toIndGroupInfo_443_, 0);
lean_inc_ref(v_all_446_);
lean_dec_ref(v_toIndGroupInfo_443_);
v___x_447_ = l_Lean_instInhabitedName;
v___x_448_ = lean_unsigned_to_nat(0u);
v___x_449_ = lean_array_get(v___x_447_, v_all_446_, v___x_448_);
lean_dec_ref(v_all_446_);
v___x_450_ = l_Lean_Expr_const___override(v___x_449_, v_levels_444_);
v___x_451_ = l_Lean_mkAppN(v___x_450_, v_params_445_);
lean_dec_ref(v_params_445_);
v___x_452_ = l_Lean_MessageData_ofExpr(v___x_451_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_isDefEq___lam__0(uint8_t v___x_455_, uint8_t v_____do__lift_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_){
_start:
{
if (v_____do__lift_456_ == 0)
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = lean_box(v___x_455_);
v___x_463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
return v___x_463_;
}
else
{
uint8_t v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_464_ = 0;
v___x_465_ = lean_box(v___x_464_);
v___x_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_466_, 0, v___x_465_);
return v___x_466_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_isDefEq___lam__0___boxed(lean_object* v___x_467_, lean_object* v_____do__lift_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_){
_start:
{
uint8_t v___x_1782__boxed_474_; uint8_t v_____do__lift_1783__boxed_475_; lean_object* v_res_476_; 
v___x_1782__boxed_474_ = lean_unbox(v___x_467_);
v_____do__lift_1783__boxed_475_ = lean_unbox(v_____do__lift_468_);
v_res_476_ = l_Lean_Elab_Structural_IndGroupInst_isDefEq___lam__0(v___x_1782__boxed_474_, v_____do__lift_1783__boxed_475_, v___y_469_, v___y_470_, v___y_471_, v___y_472_);
lean_dec(v___y_472_);
lean_dec_ref(v___y_471_);
lean_dec(v___y_470_);
lean_dec_ref(v___y_469_);
return v_res_476_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__0(lean_object* v_x_477_){
_start:
{
if (lean_obj_tag(v_x_477_) == 0)
{
uint8_t v___x_478_; 
v___x_478_ = 1;
return v___x_478_;
}
else
{
lean_object* v_head_479_; lean_object* v_tail_480_; lean_object* v_fst_481_; lean_object* v_snd_482_; uint8_t v___x_483_; 
v_head_479_ = lean_ctor_get(v_x_477_, 0);
v_tail_480_ = lean_ctor_get(v_x_477_, 1);
v_fst_481_ = lean_ctor_get(v_head_479_, 0);
v_snd_482_ = lean_ctor_get(v_head_479_, 1);
v___x_483_ = l_Lean_Level_isEquiv(v_fst_481_, v_snd_482_);
if (v___x_483_ == 0)
{
return v___x_483_;
}
else
{
v_x_477_ = v_tail_480_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__0___boxed(lean_object* v_x_485_){
_start:
{
uint8_t v_res_486_; lean_object* v_r_487_; 
v_res_486_ = l_List_all___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__0(v_x_485_);
lean_dec(v_x_485_);
v_r_487_ = lean_box(v_res_486_);
return v_r_487_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__1(lean_object* v___x_488_, lean_object* v___x_489_, lean_object* v_as_490_, size_t v_i_491_, size_t v_stop_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
uint8_t v___x_502_; 
v___x_502_ = lean_usize_dec_eq(v_i_491_, v_stop_492_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; lean_object* v_fst_504_; lean_object* v_snd_505_; uint8_t v___x_506_; uint8_t v___x_507_; uint8_t v_a_509_; lean_object* v___x_512_; 
v___x_503_ = lean_array_uget_borrowed(v_as_490_, v_i_491_);
v_fst_504_ = lean_ctor_get(v___x_503_, 0);
v_snd_505_ = lean_ctor_get(v___x_503_, 1);
v___x_506_ = lean_nat_dec_eq(v___x_488_, v___x_489_);
v___x_507_ = 1;
lean_inc(v_snd_505_);
lean_inc(v_fst_504_);
v___x_512_ = l_Lean_Meta_isExprDefEqGuarded(v_fst_504_, v_snd_505_, v___y_493_, v___y_494_, v___y_495_, v___y_496_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v_a_513_; uint8_t v___x_514_; 
v_a_513_ = lean_ctor_get(v___x_512_, 0);
lean_inc(v_a_513_);
lean_dec_ref_known(v___x_512_, 1);
v___x_514_ = lean_unbox(v_a_513_);
lean_dec(v_a_513_);
if (v___x_514_ == 0)
{
v_a_509_ = v___x_506_;
goto v___jp_508_;
}
else
{
goto v___jp_498_;
}
}
else
{
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v_a_515_; uint8_t v___x_516_; 
v_a_515_ = lean_ctor_get(v___x_512_, 0);
lean_inc(v_a_515_);
lean_dec_ref_known(v___x_512_, 1);
v___x_516_ = lean_unbox(v_a_515_);
lean_dec(v_a_515_);
v_a_509_ = v___x_516_;
goto v___jp_508_;
}
else
{
return v___x_512_;
}
}
v___jp_508_:
{
if (v_a_509_ == 0)
{
goto v___jp_498_;
}
else
{
lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_510_ = lean_box(v___x_507_);
v___x_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
return v___x_511_;
}
}
}
else
{
uint8_t v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_517_ = 0;
v___x_518_ = lean_box(v___x_517_);
v___x_519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
return v___x_519_;
}
v___jp_498_:
{
size_t v___x_499_; size_t v___x_500_; 
v___x_499_ = ((size_t)1ULL);
v___x_500_ = lean_usize_add(v_i_491_, v___x_499_);
v_i_491_ = v___x_500_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__1___boxed(lean_object* v___x_520_, lean_object* v___x_521_, lean_object* v_as_522_, lean_object* v_i_523_, lean_object* v_stop_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_){
_start:
{
size_t v_i_boxed_530_; size_t v_stop_boxed_531_; lean_object* v_res_532_; 
v_i_boxed_530_ = lean_unbox_usize(v_i_523_);
lean_dec(v_i_523_);
v_stop_boxed_531_ = lean_unbox_usize(v_stop_524_);
lean_dec(v_stop_524_);
v_res_532_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__1(v___x_520_, v___x_521_, v_as_522_, v_i_boxed_530_, v_stop_boxed_531_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec_ref(v_as_522_);
lean_dec(v___x_521_);
lean_dec(v___x_520_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_isDefEq(lean_object* v_igi1_533_, lean_object* v_igi2_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_){
_start:
{
lean_object* v_toIndGroupInfo_540_; lean_object* v_levels_541_; lean_object* v_params_542_; lean_object* v_toIndGroupInfo_543_; lean_object* v_levels_544_; lean_object* v_params_545_; uint8_t v___x_546_; 
v_toIndGroupInfo_540_ = lean_ctor_get(v_igi1_533_, 0);
lean_inc_ref(v_toIndGroupInfo_540_);
v_levels_541_ = lean_ctor_get(v_igi1_533_, 1);
lean_inc(v_levels_541_);
v_params_542_ = lean_ctor_get(v_igi1_533_, 2);
lean_inc_ref(v_params_542_);
lean_dec_ref(v_igi1_533_);
v_toIndGroupInfo_543_ = lean_ctor_get(v_igi2_534_, 0);
lean_inc_ref(v_toIndGroupInfo_543_);
v_levels_544_ = lean_ctor_get(v_igi2_534_, 1);
lean_inc(v_levels_544_);
v_params_545_ = lean_ctor_get(v_igi2_534_, 2);
lean_inc_ref(v_params_545_);
lean_dec_ref(v_igi2_534_);
v___x_546_ = l_Lean_Elab_Structural_instBEqIndGroupInfo_beq(v_toIndGroupInfo_540_, v_toIndGroupInfo_543_);
lean_dec_ref(v_toIndGroupInfo_543_);
lean_dec_ref(v_toIndGroupInfo_540_);
if (v___x_546_ == 0)
{
lean_object* v___x_547_; lean_object* v___x_548_; 
lean_dec_ref(v_params_545_);
lean_dec(v_levels_544_);
lean_dec_ref(v_params_542_);
lean_dec(v_levels_541_);
v___x_547_ = lean_box(v___x_546_);
v___x_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
return v___x_548_;
}
else
{
lean_object* v___x_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
v___x_549_ = l_List_lengthTR___redArg(v_levels_541_);
v___x_550_ = l_List_lengthTR___redArg(v_levels_544_);
v___x_551_ = lean_nat_dec_eq(v___x_549_, v___x_550_);
lean_dec(v___x_550_);
lean_dec(v___x_549_);
if (v___x_551_ == 0)
{
lean_object* v___x_552_; lean_object* v___x_553_; 
lean_dec_ref(v_params_545_);
lean_dec(v_levels_544_);
lean_dec_ref(v_params_542_);
lean_dec(v_levels_541_);
v___x_552_ = lean_box(v___x_551_);
v___x_553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_553_, 0, v___x_552_);
return v___x_553_;
}
else
{
lean_object* v___x_554_; uint8_t v___x_555_; 
v___x_554_ = l_List_zipWith___at___00List_zip_spec__0(lean_box(0), lean_box(0), v_levels_541_, v_levels_544_);
v___x_555_ = l_List_all___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__0(v___x_554_);
lean_dec(v___x_554_);
if (v___x_555_ == 0)
{
lean_object* v___x_556_; lean_object* v___x_557_; 
lean_dec_ref(v_params_545_);
lean_dec_ref(v_params_542_);
v___x_556_ = lean_box(v___x_555_);
v___x_557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
return v___x_557_;
}
else
{
lean_object* v___x_558_; lean_object* v___x_559_; uint8_t v___x_560_; lean_object* v___y_562_; 
v___x_558_ = lean_array_get_size(v_params_542_);
v___x_559_ = lean_array_get_size(v_params_545_);
v___x_560_ = lean_nat_dec_eq(v___x_558_, v___x_559_);
if (v___x_560_ == 0)
{
lean_object* v___x_574_; lean_object* v___x_575_; 
lean_dec_ref(v_params_545_);
lean_dec_ref(v_params_542_);
v___x_574_ = lean_box(v___x_560_);
v___x_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
return v___x_575_;
}
else
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; uint8_t v___x_579_; 
v___x_576_ = l_Array_zip___redArg(v_params_542_, v_params_545_);
lean_dec_ref(v_params_545_);
lean_dec_ref(v_params_542_);
v___x_577_ = lean_unsigned_to_nat(0u);
v___x_578_ = lean_array_get_size(v___x_576_);
v___x_579_ = lean_nat_dec_lt(v___x_577_, v___x_578_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; 
lean_dec_ref(v___x_576_);
v___x_580_ = l_Lean_Elab_Structural_IndGroupInst_isDefEq___lam__0(v___x_560_, v___x_579_, v_a_535_, v_a_536_, v_a_537_, v_a_538_);
v___y_562_ = v___x_580_;
goto v___jp_561_;
}
else
{
if (v___x_579_ == 0)
{
lean_object* v___x_581_; lean_object* v___x_582_; 
lean_dec_ref(v___x_576_);
v___x_581_ = lean_box(v___x_560_);
v___x_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
return v___x_582_;
}
else
{
size_t v___x_583_; size_t v___x_584_; lean_object* v___x_585_; 
v___x_583_ = ((size_t)0ULL);
v___x_584_ = lean_usize_of_nat(v___x_578_);
v___x_585_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__1(v___x_558_, v___x_559_, v___x_576_, v___x_583_, v___x_584_, v_a_535_, v_a_536_, v_a_537_, v_a_538_);
lean_dec_ref(v___x_576_);
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_a_586_; uint8_t v___x_587_; lean_object* v___x_588_; 
v_a_586_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_a_586_);
lean_dec_ref_known(v___x_585_, 1);
v___x_587_ = lean_unbox(v_a_586_);
lean_dec(v_a_586_);
v___x_588_ = l_Lean_Elab_Structural_IndGroupInst_isDefEq___lam__0(v___x_560_, v___x_587_, v_a_535_, v_a_536_, v_a_537_, v_a_538_);
v___y_562_ = v___x_588_;
goto v___jp_561_;
}
else
{
v___y_562_ = v___x_585_;
goto v___jp_561_;
}
}
}
}
v___jp_561_:
{
if (lean_obj_tag(v___y_562_) == 0)
{
lean_object* v_a_563_; uint8_t v___x_564_; 
v_a_563_ = lean_ctor_get(v___y_562_, 0);
v___x_564_ = lean_unbox(v_a_563_);
if (v___x_564_ == 0)
{
return v___y_562_;
}
else
{
lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_572_; 
v_isSharedCheck_572_ = !lean_is_exclusive(v___y_562_);
if (v_isSharedCheck_572_ == 0)
{
lean_object* v_unused_573_; 
v_unused_573_ = lean_ctor_get(v___y_562_, 0);
lean_dec(v_unused_573_);
v___x_566_ = v___y_562_;
v_isShared_567_ = v_isSharedCheck_572_;
goto v_resetjp_565_;
}
else
{
lean_dec(v___y_562_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_572_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_568_; lean_object* v___x_570_; 
v___x_568_ = lean_box(v___x_560_);
if (v_isShared_567_ == 0)
{
lean_ctor_set(v___x_566_, 0, v___x_568_);
v___x_570_ = v___x_566_;
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
else
{
return v___y_562_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_isDefEq___boxed(lean_object* v_igi1_589_, lean_object* v_igi2_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Lean_Elab_Structural_IndGroupInst_isDefEq(v_igi1_589_, v_igi2_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_);
lean_dec(v_a_594_);
lean_dec_ref(v_a_593_);
lean_dec(v_a_592_);
lean_dec_ref(v_a_591_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_brecOn(lean_object* v_group_597_, lean_object* v_lvl_598_, lean_object* v_idx_599_){
_start:
{
lean_object* v_toIndGroupInfo_600_; lean_object* v_levels_601_; lean_object* v_params_602_; lean_object* v_n_603_; lean_object* v_us_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v_toIndGroupInfo_600_ = lean_ctor_get(v_group_597_, 0);
v_levels_601_ = lean_ctor_get(v_group_597_, 1);
v_params_602_ = lean_ctor_get(v_group_597_, 2);
v_n_603_ = l_Lean_Elab_Structural_IndGroupInfo_brecOnName(v_toIndGroupInfo_600_, v_idx_599_);
lean_inc(v_levels_601_);
v_us_604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_us_604_, 0, v_lvl_598_);
lean_ctor_set(v_us_604_, 1, v_levels_601_);
v___x_605_ = l_Lean_Expr_const___override(v_n_603_, v_us_604_);
v___x_606_ = l_Lean_mkAppN(v___x_605_, v_params_602_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_brecOn___boxed(lean_object* v_group_607_, lean_object* v_lvl_608_, lean_object* v_idx_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lean_Elab_Structural_IndGroupInst_brecOn(v_group_607_, v_lvl_608_, v_idx_609_);
lean_dec(v_idx_609_);
lean_dec_ref(v_group_607_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0(lean_object* v_msg_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_){
_start:
{
lean_object* v___f_618_; lean_object* v___x_895__overap_619_; lean_object* v___x_620_; 
v___f_618_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0___closed__0));
v___x_895__overap_619_ = lean_panic_fn_borrowed(v___f_618_, v_msg_612_);
lean_inc(v___y_616_);
lean_inc_ref(v___y_615_);
lean_inc(v___y_614_);
lean_inc_ref(v___y_613_);
v___x_620_ = lean_apply_5(v___x_895__overap_619_, v___y_613_, v___y_614_, v___y_615_, v___y_616_, lean_box(0));
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0___boxed(lean_object* v_msg_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0(v_msg_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_);
lean_dec(v___y_625_);
lean_dec_ref(v___y_624_);
lean_dec(v___y_623_);
lean_dec_ref(v___y_622_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg___lam__0(lean_object* v_k_628_, lean_object* v_b_629_, lean_object* v_c_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_){
_start:
{
lean_object* v___x_636_; 
lean_inc(v___y_634_);
lean_inc_ref(v___y_633_);
lean_inc(v___y_632_);
lean_inc_ref(v___y_631_);
v___x_636_ = lean_apply_7(v_k_628_, v_b_629_, v_c_630_, v___y_631_, v___y_632_, v___y_633_, v___y_634_, lean_box(0));
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg___lam__0___boxed(lean_object* v_k_637_, lean_object* v_b_638_, lean_object* v_c_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg___lam__0(v_k_637_, v_b_638_, v_c_639_, v___y_640_, v___y_641_, v___y_642_, v___y_643_);
lean_dec(v___y_643_);
lean_dec_ref(v___y_642_);
lean_dec(v___y_641_);
lean_dec_ref(v___y_640_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg(lean_object* v_type_646_, lean_object* v_k_647_, uint8_t v_cleanupAnnotations_648_, uint8_t v_whnfType_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
lean_object* v___f_655_; lean_object* v___x_656_; 
v___f_655_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_655_, 0, v_k_647_);
v___x_656_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_646_, v___f_655_, v_cleanupAnnotations_648_, v_whnfType_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
if (lean_obj_tag(v___x_656_) == 0)
{
lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_664_; 
v_a_657_ = lean_ctor_get(v___x_656_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_664_ == 0)
{
v___x_659_ = v___x_656_;
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v___x_656_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_662_; 
if (v_isShared_660_ == 0)
{
v___x_662_ = v___x_659_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_657_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
}
else
{
lean_object* v_a_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_672_; 
v_a_665_ = lean_ctor_get(v___x_656_, 0);
v_isSharedCheck_672_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_672_ == 0)
{
v___x_667_ = v___x_656_;
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_a_665_);
lean_dec(v___x_656_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_670_; 
if (v_isShared_668_ == 0)
{
v___x_670_ = v___x_667_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_a_665_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg___boxed(lean_object* v_type_673_, lean_object* v_k_674_, lean_object* v_cleanupAnnotations_675_, lean_object* v_whnfType_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_682_; uint8_t v_whnfType_boxed_683_; lean_object* v_res_684_; 
v_cleanupAnnotations_boxed_682_ = lean_unbox(v_cleanupAnnotations_675_);
v_whnfType_boxed_683_ = lean_unbox(v_whnfType_676_);
v_res_684_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg(v_type_673_, v_k_674_, v_cleanupAnnotations_boxed_682_, v_whnfType_boxed_683_, v___y_677_, v___y_678_, v___y_679_, v___y_680_);
lean_dec(v___y_680_);
lean_dec_ref(v___y_679_);
lean_dec(v___y_678_);
lean_dec_ref(v___y_677_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1(lean_object* v_00_u03b1_685_, lean_object* v_type_686_, lean_object* v_k_687_, uint8_t v_cleanupAnnotations_688_, uint8_t v_whnfType_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_){
_start:
{
lean_object* v___x_695_; 
v___x_695_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg(v_type_686_, v_k_687_, v_cleanupAnnotations_688_, v_whnfType_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___boxed(lean_object* v_00_u03b1_696_, lean_object* v_type_697_, lean_object* v_k_698_, lean_object* v_cleanupAnnotations_699_, lean_object* v_whnfType_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_706_; uint8_t v_whnfType_boxed_707_; lean_object* v_res_708_; 
v_cleanupAnnotations_boxed_706_ = lean_unbox(v_cleanupAnnotations_699_);
v_whnfType_boxed_707_ = lean_unbox(v_whnfType_700_);
v_res_708_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1(v_00_u03b1_696_, v_type_697_, v_k_698_, v_cleanupAnnotations_boxed_706_, v_whnfType_boxed_707_, v___y_701_, v___y_702_, v___y_703_, v___y_704_);
lean_dec(v___y_704_);
lean_dec_ref(v___y_703_);
lean_dec(v___y_702_);
lean_dec_ref(v___y_701_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__4(lean_object* v_msg_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_){
_start:
{
lean_object* v___f_715_; lean_object* v___x_1968__overap_716_; lean_object* v___x_717_; 
v___f_715_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0___closed__0));
v___x_1968__overap_716_ = lean_panic_fn_borrowed(v___f_715_, v_msg_709_);
lean_inc(v___y_713_);
lean_inc_ref(v___y_712_);
lean_inc(v___y_711_);
lean_inc_ref(v___y_710_);
v___x_717_ = lean_apply_5(v___x_1968__overap_716_, v___y_710_, v___y_711_, v___y_712_, v___y_713_, lean_box(0));
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__4___boxed(lean_object* v_msg_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_){
_start:
{
lean_object* v_res_724_; 
v_res_724_ = l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__4(v_msg_718_, v___y_719_, v___y_720_, v___y_721_, v___y_722_);
lean_dec(v___y_722_);
lean_dec_ref(v___y_721_);
lean_dec(v___y_720_);
lean_dec_ref(v___y_719_);
return v_res_724_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__3(void){
_start:
{
lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_728_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__2));
v___x_729_ = lean_unsigned_to_nat(6u);
v___x_730_ = lean_unsigned_to_nat(113u);
v___x_731_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__1));
v___x_732_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__0));
v___x_733_ = l_mkPanicMessageWithDecl(v___x_732_, v___x_731_, v___x_730_, v___x_729_, v___x_728_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0(lean_object* v___x_734_, lean_object* v___x_735_, uint8_t v___x_736_, lean_object* v_xs_737_, lean_object* v_x_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v___x_744_; uint8_t v___x_745_; 
v___x_744_ = lean_array_get_size(v_xs_737_);
v___x_745_ = lean_nat_dec_lt(v___x_734_, v___x_744_);
if (v___x_745_ == 0)
{
lean_object* v___x_746_; lean_object* v___x_747_; 
lean_dec_ref(v_xs_737_);
v___x_746_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__3);
v___x_747_ = l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0(v___x_746_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
return v___x_747_;
}
else
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_748_ = lean_unsigned_to_nat(1u);
v___x_749_ = lean_nat_sub(v___x_744_, v___x_748_);
v___x_750_ = lean_array_get_borrowed(v___x_735_, v_xs_737_, v___x_749_);
lean_dec(v___x_749_);
lean_inc(v___y_742_);
lean_inc_ref(v___y_741_);
lean_inc(v___y_740_);
lean_inc_ref(v___y_739_);
lean_inc(v___x_750_);
v___x_751_ = lean_infer_type(v___x_750_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
if (lean_obj_tag(v___x_751_) == 0)
{
lean_object* v_a_752_; lean_object* v___x_753_; uint8_t v___x_754_; lean_object* v___x_755_; 
v_a_752_ = lean_ctor_get(v___x_751_, 0);
lean_inc(v_a_752_);
lean_dec_ref_known(v___x_751_, 1);
v___x_753_ = lean_array_pop(v_xs_737_);
v___x_754_ = 1;
v___x_755_ = l_Lean_Meta_mkForallFVars(v___x_753_, v_a_752_, v___x_736_, v___x_745_, v___x_745_, v___x_754_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
return v___x_755_;
}
else
{
lean_dec_ref(v_xs_737_);
return v___x_751_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___boxed(lean_object* v___x_756_, lean_object* v___x_757_, lean_object* v___x_758_, lean_object* v_xs_759_, lean_object* v_x_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_){
_start:
{
uint8_t v___x_3328__boxed_766_; lean_object* v_res_767_; 
v___x_3328__boxed_766_ = lean_unbox(v___x_758_);
v_res_767_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0(v___x_756_, v___x_757_, v___x_3328__boxed_766_, v_xs_759_, v_x_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec(v___y_762_);
lean_dec_ref(v___y_761_);
lean_dec_ref(v_x_760_);
lean_dec_ref(v___x_757_);
lean_dec(v___x_756_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3(lean_object* v___x_768_, size_t v_sz_769_, size_t v_i_770_, lean_object* v_bs_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_){
_start:
{
uint8_t v___x_777_; 
v___x_777_ = lean_usize_dec_lt(v_i_770_, v_sz_769_);
if (v___x_777_ == 0)
{
lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_778_ = l_unsafeCast___redArg(v_bs_771_);
lean_dec_ref(v_bs_771_);
v___x_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_779_, 0, v___x_778_);
return v___x_779_;
}
else
{
lean_object* v___x_780_; lean_object* v___x_781_; uint8_t v___x_782_; lean_object* v___x_783_; lean_object* v___f_784_; lean_object* v_v_785_; lean_object* v_bs_x27_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_780_ = lean_unsigned_to_nat(0u);
v___x_781_ = l_Lean_instInhabitedExpr;
v___x_782_ = lean_nat_dec_eq(v___x_768_, v___x_780_);
v___x_783_ = lean_box(v___x_782_);
v___f_784_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___boxed), 10, 3);
lean_closure_set(v___f_784_, 0, v___x_780_);
lean_closure_set(v___f_784_, 1, v___x_781_);
lean_closure_set(v___f_784_, 2, v___x_783_);
v_v_785_ = lean_array_uget(v_bs_771_, v_i_770_);
v_bs_x27_786_ = lean_array_uset(v_bs_771_, v_i_770_, v___x_780_);
v___x_787_ = l_unsafeCast___redArg(v_v_785_);
lean_dec(v_v_785_);
v___x_788_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg(v___x_787_, v___f_784_, v___x_782_, v___x_782_, v___y_772_, v___y_773_, v___y_774_, v___y_775_);
if (lean_obj_tag(v___x_788_) == 0)
{
lean_object* v_a_789_; size_t v___x_790_; size_t v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v_a_789_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v_a_789_);
lean_dec_ref_known(v___x_788_, 1);
v___x_790_ = ((size_t)1ULL);
v___x_791_ = lean_usize_add(v_i_770_, v___x_790_);
v___x_792_ = l_unsafeCast___redArg(v_a_789_);
lean_dec(v_a_789_);
v___x_793_ = lean_array_uset(v_bs_x27_786_, v_i_770_, v___x_792_);
v_i_770_ = v___x_791_;
v_bs_771_ = v___x_793_;
goto _start;
}
else
{
lean_object* v_a_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_802_; 
lean_dec_ref(v_bs_x27_786_);
v_a_795_ = lean_ctor_get(v___x_788_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_788_);
if (v_isSharedCheck_802_ == 0)
{
v___x_797_ = v___x_788_;
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_a_795_);
lean_dec(v___x_788_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_795_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___boxed(lean_object* v___x_803_, lean_object* v_sz_804_, lean_object* v_i_805_, lean_object* v_bs_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
size_t v_sz_boxed_812_; size_t v_i_boxed_813_; lean_object* v_res_814_; 
v_sz_boxed_812_ = lean_unbox_usize(v_sz_804_);
lean_dec(v_sz_804_);
v_i_boxed_813_ = lean_unbox_usize(v_i_805_);
lean_dec(v_i_805_);
v_res_814_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3(v___x_803_, v_sz_boxed_812_, v_i_boxed_813_, v_bs_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec(v___x_803_);
return v_res_814_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = l_instMonadEIO___redArg();
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3(lean_object* v_msg_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v_toApplicative_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_889_; 
v___x_826_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__0, &l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__0_once, _init_l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__0);
v___x_827_ = l_StateRefT_x27_instMonad___redArg(v___x_826_);
v_toApplicative_828_ = lean_ctor_get(v___x_827_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_889_ == 0)
{
lean_object* v_unused_890_; 
v_unused_890_ = lean_ctor_get(v___x_827_, 1);
lean_dec(v_unused_890_);
v___x_830_ = v___x_827_;
v_isShared_831_ = v_isSharedCheck_889_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_toApplicative_828_);
lean_dec(v___x_827_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_889_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v_toFunctor_832_; lean_object* v_toSeq_833_; lean_object* v_toSeqLeft_834_; lean_object* v_toSeqRight_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_887_; 
v_toFunctor_832_ = lean_ctor_get(v_toApplicative_828_, 0);
v_toSeq_833_ = lean_ctor_get(v_toApplicative_828_, 2);
v_toSeqLeft_834_ = lean_ctor_get(v_toApplicative_828_, 3);
v_toSeqRight_835_ = lean_ctor_get(v_toApplicative_828_, 4);
v_isSharedCheck_887_ = !lean_is_exclusive(v_toApplicative_828_);
if (v_isSharedCheck_887_ == 0)
{
lean_object* v_unused_888_; 
v_unused_888_ = lean_ctor_get(v_toApplicative_828_, 1);
lean_dec(v_unused_888_);
v___x_837_ = v_toApplicative_828_;
v_isShared_838_ = v_isSharedCheck_887_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_toSeqRight_835_);
lean_inc(v_toSeqLeft_834_);
lean_inc(v_toSeq_833_);
lean_inc(v_toFunctor_832_);
lean_dec(v_toApplicative_828_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_887_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___f_839_; lean_object* v___f_840_; lean_object* v___f_841_; lean_object* v___f_842_; lean_object* v___x_843_; lean_object* v___f_844_; lean_object* v___f_845_; lean_object* v___f_846_; lean_object* v___x_848_; 
v___f_839_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__1));
v___f_840_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__2));
lean_inc_ref(v_toFunctor_832_);
v___f_841_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_841_, 0, v_toFunctor_832_);
v___f_842_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_842_, 0, v_toFunctor_832_);
v___x_843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_843_, 0, v___f_841_);
lean_ctor_set(v___x_843_, 1, v___f_842_);
v___f_844_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_844_, 0, v_toSeqRight_835_);
v___f_845_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_845_, 0, v_toSeqLeft_834_);
v___f_846_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_846_, 0, v_toSeq_833_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 4, v___f_844_);
lean_ctor_set(v___x_837_, 3, v___f_845_);
lean_ctor_set(v___x_837_, 2, v___f_846_);
lean_ctor_set(v___x_837_, 1, v___f_839_);
lean_ctor_set(v___x_837_, 0, v___x_843_);
v___x_848_ = v___x_837_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v___x_843_);
lean_ctor_set(v_reuseFailAlloc_886_, 1, v___f_839_);
lean_ctor_set(v_reuseFailAlloc_886_, 2, v___f_846_);
lean_ctor_set(v_reuseFailAlloc_886_, 3, v___f_845_);
lean_ctor_set(v_reuseFailAlloc_886_, 4, v___f_844_);
v___x_848_ = v_reuseFailAlloc_886_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
lean_object* v___x_850_; 
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 1, v___f_840_);
lean_ctor_set(v___x_830_, 0, v___x_848_);
v___x_850_ = v___x_830_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v___x_848_);
lean_ctor_set(v_reuseFailAlloc_885_, 1, v___f_840_);
v___x_850_ = v_reuseFailAlloc_885_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
lean_object* v___x_851_; lean_object* v_toApplicative_852_; lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_883_; 
v___x_851_ = l_StateRefT_x27_instMonad___redArg(v___x_850_);
v_toApplicative_852_ = lean_ctor_get(v___x_851_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_883_ == 0)
{
lean_object* v_unused_884_; 
v_unused_884_ = lean_ctor_get(v___x_851_, 1);
lean_dec(v_unused_884_);
v___x_854_ = v___x_851_;
v_isShared_855_ = v_isSharedCheck_883_;
goto v_resetjp_853_;
}
else
{
lean_inc(v_toApplicative_852_);
lean_dec(v___x_851_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_883_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
lean_object* v_toFunctor_856_; lean_object* v_toSeq_857_; lean_object* v_toSeqLeft_858_; lean_object* v_toSeqRight_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_881_; 
v_toFunctor_856_ = lean_ctor_get(v_toApplicative_852_, 0);
v_toSeq_857_ = lean_ctor_get(v_toApplicative_852_, 2);
v_toSeqLeft_858_ = lean_ctor_get(v_toApplicative_852_, 3);
v_toSeqRight_859_ = lean_ctor_get(v_toApplicative_852_, 4);
v_isSharedCheck_881_ = !lean_is_exclusive(v_toApplicative_852_);
if (v_isSharedCheck_881_ == 0)
{
lean_object* v_unused_882_; 
v_unused_882_ = lean_ctor_get(v_toApplicative_852_, 1);
lean_dec(v_unused_882_);
v___x_861_ = v_toApplicative_852_;
v_isShared_862_ = v_isSharedCheck_881_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_toSeqRight_859_);
lean_inc(v_toSeqLeft_858_);
lean_inc(v_toSeq_857_);
lean_inc(v_toFunctor_856_);
lean_dec(v_toApplicative_852_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_881_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___f_863_; lean_object* v___f_864_; lean_object* v___f_865_; lean_object* v___f_866_; lean_object* v___x_867_; lean_object* v___f_868_; lean_object* v___f_869_; lean_object* v___f_870_; lean_object* v___x_872_; 
v___f_863_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__3));
v___f_864_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__4));
lean_inc_ref(v_toFunctor_856_);
v___f_865_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_865_, 0, v_toFunctor_856_);
v___f_866_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_866_, 0, v_toFunctor_856_);
v___x_867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_867_, 0, v___f_865_);
lean_ctor_set(v___x_867_, 1, v___f_866_);
v___f_868_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_868_, 0, v_toSeqRight_859_);
v___f_869_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_869_, 0, v_toSeqLeft_858_);
v___f_870_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_870_, 0, v_toSeq_857_);
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 4, v___f_868_);
lean_ctor_set(v___x_861_, 3, v___f_869_);
lean_ctor_set(v___x_861_, 2, v___f_870_);
lean_ctor_set(v___x_861_, 1, v___f_863_);
lean_ctor_set(v___x_861_, 0, v___x_867_);
v___x_872_ = v___x_861_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v___x_867_);
lean_ctor_set(v_reuseFailAlloc_880_, 1, v___f_863_);
lean_ctor_set(v_reuseFailAlloc_880_, 2, v___f_870_);
lean_ctor_set(v_reuseFailAlloc_880_, 3, v___f_869_);
lean_ctor_set(v_reuseFailAlloc_880_, 4, v___f_868_);
v___x_872_ = v_reuseFailAlloc_880_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
lean_object* v___x_874_; 
if (v_isShared_855_ == 0)
{
lean_ctor_set(v___x_854_, 1, v___f_864_);
lean_ctor_set(v___x_854_, 0, v___x_872_);
v___x_874_ = v___x_854_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v___x_872_);
lean_ctor_set(v_reuseFailAlloc_879_, 1, v___f_864_);
v___x_874_ = v_reuseFailAlloc_879_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_2572__overap_877_; lean_object* v___x_878_; 
v___x_875_ = lean_box(0);
v___x_876_ = l_instInhabitedOfMonad___redArg(v___x_874_, v___x_875_);
v___x_2572__overap_877_ = lean_panic_fn_borrowed(v___x_876_, v_msg_820_);
lean_dec(v___x_876_);
lean_inc(v___y_824_);
lean_inc_ref(v___y_823_);
lean_inc(v___y_822_);
lean_inc_ref(v___y_821_);
v___x_878_ = lean_apply_5(v___x_2572__overap_877_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, lean_box(0));
return v___x_878_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___boxed(lean_object* v_msg_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3(v_msg_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2_spec__4(lean_object* v_msgData_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_){
_start:
{
lean_object* v___x_904_; lean_object* v_env_905_; lean_object* v___x_906_; lean_object* v_toCold_907_; lean_object* v_mctx_908_; lean_object* v_lctx_909_; lean_object* v_options_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_904_ = lean_st_ref_get(v___y_902_);
v_env_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc_ref(v_env_905_);
lean_dec(v___x_904_);
v___x_906_ = lean_st_ref_get(v___y_900_);
v_toCold_907_ = lean_ctor_get(v___y_901_, 0);
v_mctx_908_ = lean_ctor_get(v___x_906_, 0);
lean_inc_ref(v_mctx_908_);
lean_dec(v___x_906_);
v_lctx_909_ = lean_ctor_get(v___y_899_, 2);
v_options_910_ = lean_ctor_get(v_toCold_907_, 2);
lean_inc_ref(v_options_910_);
lean_inc_ref(v_lctx_909_);
v___x_911_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_911_, 0, v_env_905_);
lean_ctor_set(v___x_911_, 1, v_mctx_908_);
lean_ctor_set(v___x_911_, 2, v_lctx_909_);
lean_ctor_set(v___x_911_, 3, v_options_910_);
v___x_912_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_912_, 0, v___x_911_);
lean_ctor_set(v___x_912_, 1, v_msgData_898_);
v___x_913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_913_, 0, v___x_912_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2_spec__4___boxed(lean_object* v_msgData_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2_spec__4(v_msgData_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
lean_dec(v___y_916_);
lean_dec_ref(v___y_915_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___redArg(lean_object* v_msg_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_){
_start:
{
lean_object* v_ref_927_; lean_object* v___x_928_; lean_object* v_a_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_937_; 
v_ref_927_ = lean_ctor_get(v___y_924_, 2);
v___x_928_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2_spec__4(v_msg_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
v_a_929_ = lean_ctor_get(v___x_928_, 0);
v_isSharedCheck_937_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_937_ == 0)
{
v___x_931_ = v___x_928_;
v_isShared_932_ = v_isSharedCheck_937_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_a_929_);
lean_dec(v___x_928_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_937_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v___x_933_; lean_object* v___x_935_; 
lean_inc(v_ref_927_);
v___x_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_933_, 0, v_ref_927_);
lean_ctor_set(v___x_933_, 1, v_a_929_);
if (v_isShared_932_ == 0)
{
lean_ctor_set_tag(v___x_931_, 1);
lean_ctor_set(v___x_931_, 0, v___x_933_);
v___x_935_ = v___x_931_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v___x_933_);
v___x_935_ = v_reuseFailAlloc_936_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
return v___x_935_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___redArg___boxed(lean_object* v_msg_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___redArg(v_msg_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_);
lean_dec(v___y_942_);
lean_dec_ref(v___y_941_);
lean_dec(v___y_940_);
lean_dec_ref(v___y_939_);
return v_res_944_;
}
}
static lean_object* _init_l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__1(void){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_946_ = ((lean_object*)(l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__0));
v___x_947_ = l_Lean_stringToMessageData(v___x_946_);
return v___x_947_;
}
}
static lean_object* _init_l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__3(void){
_start:
{
lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_949_ = ((lean_object*)(l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__2));
v___x_950_ = l_Lean_stringToMessageData(v___x_949_);
return v___x_950_;
}
}
static lean_object* _init_l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__7(void){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_954_ = ((lean_object*)(l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__6));
v___x_955_ = lean_unsigned_to_nat(11u);
v___x_956_ = lean_unsigned_to_nat(129u);
v___x_957_ = ((lean_object*)(l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__5));
v___x_958_ = ((lean_object*)(l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__4));
v___x_959_ = l_mkPanicMessageWithDecl(v___x_958_, v___x_957_, v___x_956_, v___x_955_, v___x_954_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2(lean_object* v_constName_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_){
_start:
{
lean_object* v___x_974_; lean_object* v_env_975_; uint8_t v___x_976_; lean_object* v___x_977_; 
v___x_974_ = lean_st_ref_get(v___y_964_);
v_env_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc_ref(v_env_975_);
lean_dec(v___x_974_);
v___x_976_ = 0;
lean_inc(v_constName_960_);
v___x_977_ = l_Lean_Environment_findAsync_x3f(v_env_975_, v_constName_960_, v___x_976_);
if (lean_obj_tag(v___x_977_) == 1)
{
lean_object* v_val_978_; uint8_t v_kind_979_; 
v_val_978_ = lean_ctor_get(v___x_977_, 0);
lean_inc(v_val_978_);
lean_dec_ref_known(v___x_977_, 1);
v_kind_979_ = lean_ctor_get_uint8(v_val_978_, sizeof(void*)*3);
if (v_kind_979_ == 7)
{
lean_object* v___x_980_; 
v___x_980_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_978_);
if (lean_obj_tag(v___x_980_) == 7)
{
lean_object* v_val_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_988_; 
lean_dec(v_constName_960_);
v_val_981_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_988_ == 0)
{
v___x_983_ = v___x_980_;
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_val_981_);
lean_dec(v___x_980_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_986_; 
if (v_isShared_984_ == 0)
{
lean_ctor_set_tag(v___x_983_, 0);
v___x_986_ = v___x_983_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_val_981_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
else
{
lean_object* v___x_989_; lean_object* v___x_990_; 
lean_dec_ref(v___x_980_);
v___x_989_ = lean_obj_once(&l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__7, &l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__7_once, _init_l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__7);
v___x_990_ = l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3(v___x_989_, v___y_961_, v___y_962_, v___y_963_, v___y_964_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_999_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_999_ == 0)
{
v___x_993_ = v___x_990_;
v_isShared_994_ = v_isSharedCheck_999_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_990_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_999_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
if (lean_obj_tag(v_a_991_) == 0)
{
lean_del_object(v___x_993_);
goto v___jp_966_;
}
else
{
lean_object* v_val_995_; lean_object* v___x_997_; 
lean_dec(v_constName_960_);
v_val_995_ = lean_ctor_get(v_a_991_, 0);
lean_inc(v_val_995_);
lean_dec_ref_known(v_a_991_, 1);
if (v_isShared_994_ == 0)
{
lean_ctor_set(v___x_993_, 0, v_val_995_);
v___x_997_ = v___x_993_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_val_995_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
}
}
else
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1007_; 
lean_dec(v_constName_960_);
v_a_1000_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_1002_ = v___x_990_;
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v___x_990_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1005_; 
if (v_isShared_1003_ == 0)
{
v___x_1005_ = v___x_1002_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_a_1000_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
}
}
else
{
lean_dec(v_val_978_);
goto v___jp_966_;
}
}
else
{
lean_dec(v___x_977_);
goto v___jp_966_;
}
v___jp_966_:
{
lean_object* v___x_967_; uint8_t v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_967_ = lean_obj_once(&l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__1, &l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__1_once, _init_l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__1);
v___x_968_ = 0;
v___x_969_ = l_Lean_MessageData_ofConstName(v_constName_960_, v___x_968_);
v___x_970_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_967_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = lean_obj_once(&l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__3, &l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__3_once, _init_l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__3);
v___x_972_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_972_, 0, v___x_970_);
lean_ctor_set(v___x_972_, 1, v___x_971_);
v___x_973_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___redArg(v___x_972_, v___y_961_, v___y_962_, v___y_963_, v___y_964_);
return v___x_973_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___boxed(lean_object* v_constName_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2(v_constName_1008_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_);
lean_dec(v___y_1012_);
lean_dec_ref(v___y_1011_);
lean_dec(v___y_1010_);
lean_dec_ref(v___y_1009_);
return v_res_1014_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__1(void){
_start:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1016_ = ((lean_object*)(l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__0));
v___x_1017_ = lean_unsigned_to_nat(2u);
v___x_1018_ = lean_unsigned_to_nat(104u);
v___x_1019_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__1));
v___x_1020_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__0));
v___x_1021_ = l_mkPanicMessageWithDecl(v___x_1020_, v___x_1019_, v___x_1018_, v___x_1017_, v___x_1016_);
return v___x_1021_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__2(void){
_start:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = lean_box(0);
v___x_1023_ = l_unsafeCast___redArg(v___x_1022_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers(lean_object* v_igi_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_){
_start:
{
lean_object* v_toIndGroupInfo_1034_; lean_object* v_levels_1035_; lean_object* v_params_1036_; lean_object* v_all_1037_; lean_object* v_numNested_1038_; lean_object* v___y_1040_; lean_object* v_lower_1041_; lean_object* v_upper_1042_; lean_object* v___x_1052_; uint8_t v___x_1053_; 
v_toIndGroupInfo_1034_ = lean_ctor_get(v_igi_1028_, 0);
lean_inc_ref(v_toIndGroupInfo_1034_);
v_levels_1035_ = lean_ctor_get(v_igi_1028_, 1);
lean_inc(v_levels_1035_);
v_params_1036_ = lean_ctor_get(v_igi_1028_, 2);
lean_inc_ref(v_params_1036_);
lean_dec_ref(v_igi_1028_);
v_all_1037_ = lean_ctor_get(v_toIndGroupInfo_1034_, 0);
lean_inc_ref(v_all_1037_);
v_numNested_1038_ = lean_ctor_get(v_toIndGroupInfo_1034_, 1);
lean_inc(v_numNested_1038_);
v___x_1052_ = lean_unsigned_to_nat(0u);
v___x_1053_ = lean_nat_dec_eq(v_numNested_1038_, v___x_1052_);
if (v___x_1053_ == 0)
{
lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v_recName_1056_; lean_object* v___x_1057_; 
v___x_1054_ = l_Lean_instInhabitedName;
v___x_1055_ = lean_array_get_borrowed(v___x_1054_, v_all_1037_, v___x_1052_);
lean_inc(v___x_1055_);
v_recName_1056_ = l_Lean_mkRecName(v___x_1055_);
lean_inc(v_recName_1056_);
v___x_1057_ = l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2(v_recName_1056_, v_a_1029_, v_a_1030_, v_a_1031_, v_a_1032_);
if (lean_obj_tag(v___x_1057_) == 0)
{
lean_object* v_a_1058_; lean_object* v_toConstantVal_1059_; lean_object* v_numMotives_1060_; lean_object* v___y_1062_; lean_object* v___x_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1085_; 
v_a_1058_ = lean_ctor_get(v___x_1057_, 0);
lean_inc(v_a_1058_);
lean_dec_ref_known(v___x_1057_, 1);
v_toConstantVal_1059_ = lean_ctor_get(v_a_1058_, 0);
lean_inc_ref(v_toConstantVal_1059_);
v_numMotives_1060_ = lean_ctor_get(v_a_1058_, 4);
lean_inc(v_numMotives_1060_);
lean_dec(v_a_1058_);
v___x_1070_ = l_Lean_Elab_Structural_IndGroupInfo_numMotives(v_toIndGroupInfo_1034_);
v_isSharedCheck_1085_ = !lean_is_exclusive(v_toIndGroupInfo_1034_);
if (v_isSharedCheck_1085_ == 0)
{
lean_object* v_unused_1086_; lean_object* v_unused_1087_; 
v_unused_1086_ = lean_ctor_get(v_toIndGroupInfo_1034_, 1);
lean_dec(v_unused_1086_);
v_unused_1087_ = lean_ctor_get(v_toIndGroupInfo_1034_, 0);
lean_dec(v_unused_1087_);
v___x_1072_ = v_toIndGroupInfo_1034_;
v_isShared_1073_ = v_isSharedCheck_1085_;
goto v_resetjp_1071_;
}
else
{
lean_dec(v_toIndGroupInfo_1034_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1085_;
goto v_resetjp_1071_;
}
v___jp_1061_:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1063_ = l_Lean_Expr_const___override(v_recName_1056_, v___y_1062_);
v___x_1064_ = l_Lean_mkAppN(v___x_1063_, v_params_1036_);
lean_dec_ref(v_params_1036_);
v___x_1065_ = l_Lean_Meta_inferArgumentTypesN(v_numMotives_1060_, v___x_1064_, v_a_1029_, v_a_1030_, v_a_1031_, v_a_1032_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v_a_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; uint8_t v___x_1069_; 
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_a_1066_);
lean_dec_ref_known(v___x_1065_, 1);
v___x_1067_ = lean_array_get_size(v_all_1037_);
lean_dec_ref(v_all_1037_);
v___x_1068_ = lean_array_get_size(v_a_1066_);
v___x_1069_ = lean_nat_dec_le(v___x_1067_, v___x_1052_);
if (v___x_1069_ == 0)
{
v___y_1040_ = v_a_1066_;
v_lower_1041_ = v___x_1067_;
v_upper_1042_ = v___x_1068_;
goto v___jp_1039_;
}
else
{
v___y_1040_ = v_a_1066_;
v_lower_1041_ = v___x_1052_;
v_upper_1042_ = v___x_1068_;
goto v___jp_1039_;
}
}
else
{
lean_dec(v_numNested_1038_);
lean_dec_ref(v_all_1037_);
return v___x_1065_;
}
}
v_resetjp_1071_:
{
uint8_t v___x_1074_; 
v___x_1074_ = lean_nat_dec_eq(v_numMotives_1060_, v___x_1070_);
lean_dec(v___x_1070_);
if (v___x_1074_ == 0)
{
lean_object* v___x_1075_; lean_object* v___x_1076_; 
lean_del_object(v___x_1072_);
lean_dec(v_numMotives_1060_);
lean_dec_ref(v_toConstantVal_1059_);
lean_dec(v_recName_1056_);
lean_dec(v_numNested_1038_);
lean_dec_ref(v_all_1037_);
lean_dec_ref(v_params_1036_);
lean_dec(v_levels_1035_);
v___x_1075_ = lean_obj_once(&l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__1, &l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__1_once, _init_l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__1);
v___x_1076_ = l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__4(v___x_1075_, v_a_1029_, v_a_1030_, v_a_1031_, v_a_1032_);
return v___x_1076_;
}
else
{
lean_object* v_levelParams_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; uint8_t v___x_1080_; 
v_levelParams_1077_ = lean_ctor_get(v_toConstantVal_1059_, 1);
lean_inc(v_levelParams_1077_);
lean_dec_ref(v_toConstantVal_1059_);
v___x_1078_ = l_List_lengthTR___redArg(v_levels_1035_);
v___x_1079_ = l_List_lengthTR___redArg(v_levelParams_1077_);
lean_dec(v_levelParams_1077_);
v___x_1080_ = lean_nat_dec_eq(v___x_1078_, v___x_1079_);
lean_dec(v___x_1079_);
lean_dec(v___x_1078_);
if (v___x_1080_ == 0)
{
lean_object* v___x_1081_; lean_object* v___x_1083_; 
v___x_1081_ = lean_obj_once(&l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__2, &l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__2_once, _init_l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__2);
if (v_isShared_1073_ == 0)
{
lean_ctor_set_tag(v___x_1072_, 1);
lean_ctor_set(v___x_1072_, 1, v_levels_1035_);
lean_ctor_set(v___x_1072_, 0, v___x_1081_);
v___x_1083_ = v___x_1072_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v___x_1081_);
lean_ctor_set(v_reuseFailAlloc_1084_, 1, v_levels_1035_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
v___y_1062_ = v___x_1083_;
goto v___jp_1061_;
}
}
else
{
lean_del_object(v___x_1072_);
v___y_1062_ = v_levels_1035_;
goto v___jp_1061_;
}
}
}
}
else
{
lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1095_; 
lean_dec(v_recName_1056_);
lean_dec(v_numNested_1038_);
lean_dec_ref(v_all_1037_);
lean_dec_ref(v_params_1036_);
lean_dec(v_levels_1035_);
lean_dec_ref(v_toIndGroupInfo_1034_);
v_a_1088_ = lean_ctor_get(v___x_1057_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1090_ = v___x_1057_;
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v___x_1057_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1093_; 
if (v_isShared_1091_ == 0)
{
v___x_1093_ = v___x_1090_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v_a_1088_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
}
else
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
lean_dec(v_numNested_1038_);
lean_dec_ref(v_all_1037_);
lean_dec_ref(v_params_1036_);
lean_dec(v_levels_1035_);
lean_dec_ref(v_toIndGroupInfo_1034_);
v___x_1096_ = ((lean_object*)(l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__3));
v___x_1097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
return v___x_1097_;
}
v___jp_1039_:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; size_t v_sz_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_3142__overap_1050_; lean_object* v___x_1051_; 
v___x_1043_ = l_Array_toSubarray___redArg(v___y_1040_, v_lower_1041_, v_upper_1042_);
v___x_1044_ = l_Subarray_copy___redArg(v___x_1043_);
v_sz_1045_ = lean_array_size(v___x_1044_);
v___x_1046_ = l_unsafeCast___redArg(v___x_1044_);
lean_dec_ref(v___x_1044_);
v___x_1047_ = lean_box_usize(v_sz_1045_);
v___x_1048_ = ((lean_object*)(l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___boxed__const__1));
v___x_1049_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___boxed), 9, 4);
lean_closure_set(v___x_1049_, 0, v_numNested_1038_);
lean_closure_set(v___x_1049_, 1, v___x_1047_);
lean_closure_set(v___x_1049_, 2, v___x_1048_);
lean_closure_set(v___x_1049_, 3, v___x_1046_);
v___x_3142__overap_1050_ = l_unsafeCast___redArg(v___x_1049_);
lean_dec_ref(v___x_1049_);
lean_inc(v_a_1032_);
lean_inc_ref(v_a_1031_);
lean_inc(v_a_1030_);
lean_inc_ref(v_a_1029_);
v___x_1051_ = lean_apply_5(v___x_3142__overap_1050_, v_a_1029_, v_a_1030_, v_a_1031_, v_a_1032_, lean_box(0));
return v___x_1051_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___boxed(lean_object* v_igi_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_){
_start:
{
lean_object* v_res_1104_; 
v_res_1104_ = l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers(v_igi_1098_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_);
lean_dec(v_a_1102_);
lean_dec_ref(v_a_1101_);
lean_dec(v_a_1100_);
lean_dec_ref(v_a_1099_);
return v_res_1104_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2(lean_object* v_00_u03b1_1105_, lean_object* v_msg_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
lean_object* v___x_1112_; 
v___x_1112_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___redArg(v_msg_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___boxed(lean_object* v_00_u03b1_1113_, lean_object* v_msg_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2(v_00_u03b1_1113_, v_msg_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_);
lean_dec(v___y_1118_);
lean_dec_ref(v___y_1117_);
lean_dec(v___y_1116_);
lean_dec_ref(v___y_1115_);
return v_res_1120_;
}
}
lean_object* runtime_initialize_Lean_Meta_InferType(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_InferType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Server.Rpc.Basic
// Imports: public import Init.Dynamic public import Lean.Data.Json.FromToJson.Basic
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
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_USize_fromJson_x3f(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Array_toJson___redArg(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Prod_toJson___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instFromJsonJson___lam__0(lean_object*);
lean_object* l_Lean_Prod_fromJson_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_ExceptT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadExceptOfExceptTOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_tryCatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadExceptOfMonadExceptOf___redArg(lean_object*);
lean_object* l_MonadExcept_ofExcept___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_of_nat(lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_USize_toUInt64___boxed(lean_object*);
lean_object* l_instDecidableEqUSize___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_bignumToJson(lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Option_fromJson_x3f___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Array_fromJson_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Option_toJson___redArg(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Lsp_instInhabitedRpcRef_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_Lsp_instInhabitedRpcRef_default___closed__0;
LEAN_EXPORT size_t l_Lean_Lsp_instInhabitedRpcRef_default;
LEAN_EXPORT size_t l_Lean_Lsp_instInhabitedRpcRef;
LEAN_EXPORT uint8_t l_Lean_Lsp_instBEqRpcRef_beq(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instBEqRpcRef_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instBEqRpcRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instBEqRpcRef_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instBEqRpcRef___closed__0 = (const lean_object*)&l_Lean_Lsp_instBEqRpcRef___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instBEqRpcRef = (const lean_object*)&l_Lean_Lsp_instBEqRpcRef___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Lsp_instHashableRpcRef_hash(size_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instHashableRpcRef_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instHashableRpcRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instHashableRpcRef_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instHashableRpcRef___closed__0 = (const lean_object*)&l_Lean_Lsp_instHashableRpcRef___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instHashableRpcRef = (const lean_object*)&l_Lean_Lsp_instHashableRpcRef___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToStringRpcRef___lam__0(size_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToStringRpcRef___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToStringRpcRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToStringRpcRef___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToStringRpcRef___closed__0 = (const lean_object*)&l_Lean_Lsp_instToStringRpcRef___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToStringRpcRef = (const lean_object*)&l_Lean_Lsp_instToStringRpcRef___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v0_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v0_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v0_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v0_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v1_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v1_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v1_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v1_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no inductive tag found"};
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__0_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "v1"};
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__2_value;
static const lean_string_object l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "v0"};
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__3 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__3_value;
static const lean_string_object l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "no inductive constructor matched"};
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__4_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__5_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__6_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__7 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonRpcWireFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instToJsonRpcWireFormat_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__3_value)}};
static const lean_object* l_Lean_Lsp_instToJsonRpcWireFormat_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonRpcWireFormat_toJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instToJsonRpcWireFormat_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__2_value)}};
static const lean_object* l_Lean_Lsp_instToJsonRpcWireFormat_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonRpcWireFormat_toJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRpcWireFormat_toJson(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRpcWireFormat_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonRpcWireFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonRpcWireFormat_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonRpcWireFormat___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonRpcWireFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonRpcWireFormat = (const lean_object*)&l_Lean_Lsp_instToJsonRpcWireFormat___closed__0_value;
static const lean_string_object l_Lean_Lsp_RpcWireFormat_refFieldName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* l_Lean_Lsp_RpcWireFormat_refFieldName___closed__0 = (const lean_object*)&l_Lean_Lsp_RpcWireFormat_refFieldName___closed__0_value;
static const lean_string_object l_Lean_Lsp_RpcWireFormat_refFieldName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "__rpcref"};
static const lean_object* l_Lean_Lsp_RpcWireFormat_refFieldName___closed__1 = (const lean_object*)&l_Lean_Lsp_RpcWireFormat_refFieldName___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_refFieldName(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_refFieldName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef_default___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef_default(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn___boxed__const__1_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(1ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn___boxed__const__1_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn___boxed__const__1_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_freshWithRpcRefId;
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_rpcStoreRef___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_USize_toUInt64___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_rpcStoreRef___redArg___closed__0 = (const lean_object*)&l_Lean_Server_rpcStoreRef___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Server_rpcStoreRef___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_rpcStoreRef___redArg___closed__1;
static const lean_string_object l_Lean_Server_rpcStoreRef___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Server.Rpc.Basic"};
static const lean_object* l_Lean_Server_rpcStoreRef___redArg___closed__2 = (const lean_object*)&l_Lean_Server_rpcStoreRef___redArg___closed__2_value;
static const lean_string_object l_Lean_Server_rpcStoreRef___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Server.rpcStoreRef"};
static const lean_object* l_Lean_Server_rpcStoreRef___redArg___closed__3 = (const lean_object*)&l_Lean_Server_rpcStoreRef___redArg___closed__3_value;
static const lean_string_object l_Lean_Server_rpcStoreRef___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Found object ID in `refsById` but not in `aliveRefs`."};
static const lean_object* l_Lean_Server_rpcStoreRef___redArg___closed__4 = (const lean_object*)&l_Lean_Server_rpcStoreRef___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Server_rpcStoreRef___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_rpcStoreRef___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___redArg___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_rpcGetRef___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "RPC call type mismatch in reference '"};
static const lean_object* l_Lean_Server_rpcGetRef___redArg___closed__0 = (const lean_object*)&l_Lean_Server_rpcGetRef___redArg___closed__0_value;
static const lean_string_object l_Lean_Server_rpcGetRef___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "'\nexpected '"};
static const lean_object* l_Lean_Server_rpcGetRef___redArg___closed__1 = (const lean_object*)&l_Lean_Server_rpcGetRef___redArg___closed__1_value;
static const lean_string_object l_Lean_Server_rpcGetRef___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "', "};
static const lean_object* l_Lean_Server_rpcGetRef___redArg___closed__2 = (const lean_object*)&l_Lean_Server_rpcGetRef___redArg___closed__2_value;
static const lean_string_object l_Lean_Server_rpcGetRef___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "got '"};
static const lean_object* l_Lean_Server_rpcGetRef___redArg___closed__3 = (const lean_object*)&l_Lean_Server_rpcGetRef___redArg___closed__3_value;
static const lean_string_object l_Lean_Server_rpcGetRef___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Server_rpcGetRef___redArg___closed__4 = (const lean_object*)&l_Lean_Server_rpcGetRef___redArg___closed__4_value;
static const lean_string_object l_Lean_Server_rpcGetRef___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "RPC reference '"};
static const lean_object* l_Lean_Server_rpcGetRef___redArg___closed__5 = (const lean_object*)&l_Lean_Server_rpcGetRef___redArg___closed__5_value;
static const lean_string_object l_Lean_Server_rpcGetRef___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "' is not valid"};
static const lean_object* l_Lean_Server_rpcGetRef___redArg___closed__6 = (const lean_object*)&l_Lean_Server_rpcGetRef___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8_spec__11(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___redArg(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___redArg(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___redArg(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___redArg(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11_spec__14(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___redArg(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___redArg(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg(lean_object*, size_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcReleaseRef(size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcReleaseRef___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0(lean_object*, lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2(lean_object*, lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3(lean_object*, lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__0 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__0_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__1 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__1_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__2 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__2_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__3 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__3_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__4 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__4_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__5 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__5_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__6 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__0_value),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__1_value)}};
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__7 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__7_value),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__2_value),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__3_value),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__4_value),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__5_value)}};
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__8 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__8_value),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__6_value)}};
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__11;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__12;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__13;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__14;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__15;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__16;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__17;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__18;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__19;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__21;
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Server_instRpcEncodableOption___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Server_instRpcEncodableOption___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Server_instRpcEncodableOption___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_instRpcEncodableOption___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Server_instRpcEncodableOption___redArg___closed__0 = (const lean_object*)&l_Lean_Server_instRpcEncodableOption___redArg___closed__0_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableOption___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableOption___redArg___closed__1 = (const lean_object*)&l_Lean_Server_instRpcEncodableOption___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_instRpcEncodableArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__1, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value)} };
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__0 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__0_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableArray___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__4, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value)} };
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__1 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__1_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableArray___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__7, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value)} };
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__2 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__2_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableArray___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__9, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value)} };
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__3 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__3_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableArray___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_map, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value)} };
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__4 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Server_instRpcEncodableArray___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__4_value),((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__0_value)}};
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__5 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__5_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableArray___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_pure, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value)} };
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__6 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Server_instRpcEncodableArray___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__5_value),((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__6_value),((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__1_value),((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__2_value),((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__3_value)}};
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__7 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__7_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableArray___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_bind, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value)} };
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__8 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Server_instRpcEncodableArray___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__7_value),((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__8_value)}};
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__9 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_USize_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg___closed__0 = (const lean_object*)&l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName(lean_object*, lean_object*);
static size_t _init_l_Lean_Lsp_instInhabitedRpcRef_default___closed__0(void){
_start:
{
lean_object* v___x_1_; size_t v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_usize_of_nat(v___x_1_);
return v___x_2_;
}
}
static size_t _init_l_Lean_Lsp_instInhabitedRpcRef_default(void){
_start:
{
size_t v___x_3_; 
v___x_3_ = lean_usize_once(&l_Lean_Lsp_instInhabitedRpcRef_default___closed__0, &l_Lean_Lsp_instInhabitedRpcRef_default___closed__0_once, _init_l_Lean_Lsp_instInhabitedRpcRef_default___closed__0);
return v___x_3_;
}
}
static size_t _init_l_Lean_Lsp_instInhabitedRpcRef(void){
_start:
{
size_t v___x_4_; 
v___x_4_ = l_Lean_Lsp_instInhabitedRpcRef_default;
return v___x_4_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_instBEqRpcRef_beq(size_t v_x_5_, size_t v_x_6_){
_start:
{
uint8_t v___x_7_; 
v___x_7_ = lean_usize_dec_eq(v_x_5_, v_x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instBEqRpcRef_beq___boxed(lean_object* v_x_8_, lean_object* v_x_9_){
_start:
{
size_t v_x_31__boxed_10_; size_t v_x_32__boxed_11_; uint8_t v_res_12_; lean_object* v_r_13_; 
v_x_31__boxed_10_ = lean_unbox_usize(v_x_8_);
lean_dec(v_x_8_);
v_x_32__boxed_11_ = lean_unbox_usize(v_x_9_);
lean_dec(v_x_9_);
v_res_12_ = l_Lean_Lsp_instBEqRpcRef_beq(v_x_31__boxed_10_, v_x_32__boxed_11_);
v_r_13_ = lean_box(v_res_12_);
return v_r_13_;
}
}
LEAN_EXPORT uint64_t l_Lean_Lsp_instHashableRpcRef_hash(size_t v_x_16_){
_start:
{
uint64_t v___x_17_; uint64_t v___x_18_; uint64_t v___x_19_; 
v___x_17_ = 0ULL;
v___x_18_ = lean_usize_to_uint64(v_x_16_);
v___x_19_ = lean_uint64_mix_hash(v___x_17_, v___x_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instHashableRpcRef_hash___boxed(lean_object* v_x_20_){
_start:
{
size_t v_x_26__boxed_21_; uint64_t v_res_22_; lean_object* v_r_23_; 
v_x_26__boxed_21_ = lean_unbox_usize(v_x_20_);
lean_dec(v_x_20_);
v_res_22_ = l_Lean_Lsp_instHashableRpcRef_hash(v_x_26__boxed_21_);
v_r_23_ = lean_box_uint64(v_res_22_);
return v_r_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToStringRpcRef___lam__0(size_t v_r_26_){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_usize_to_nat(v_r_26_);
v___x_28_ = l_Nat_reprFast(v___x_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToStringRpcRef___lam__0___boxed(lean_object* v_r_29_){
_start:
{
size_t v_r_boxed_30_; lean_object* v_res_31_; 
v_r_boxed_30_ = lean_unbox_usize(v_r_29_);
lean_dec(v_r_29_);
v_res_31_ = l_Lean_Lsp_instToStringRpcRef___lam__0(v_r_boxed_30_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorIdx(uint8_t v_x_34_){
_start:
{
if (v_x_34_ == 0)
{
lean_object* v___x_35_; 
v___x_35_ = lean_unsigned_to_nat(0u);
return v___x_35_;
}
else
{
lean_object* v___x_36_; 
v___x_36_ = lean_unsigned_to_nat(1u);
return v___x_36_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorIdx___boxed(lean_object* v_x_37_){
_start:
{
uint8_t v_x_boxed_38_; lean_object* v_res_39_; 
v_x_boxed_38_ = lean_unbox(v_x_37_);
v_res_39_ = l_Lean_Lsp_RpcWireFormat_ctorIdx(v_x_boxed_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorElim___redArg(lean_object* v_k_40_){
_start:
{
lean_inc(v_k_40_);
return v_k_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorElim___redArg___boxed(lean_object* v_k_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_Lean_Lsp_RpcWireFormat_ctorElim___redArg(v_k_41_);
lean_dec(v_k_41_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorElim(lean_object* v_motive_43_, lean_object* v_ctorIdx_44_, uint8_t v_t_45_, lean_object* v_h_46_, lean_object* v_k_47_){
_start:
{
lean_inc(v_k_47_);
return v_k_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorElim___boxed(lean_object* v_motive_48_, lean_object* v_ctorIdx_49_, lean_object* v_t_50_, lean_object* v_h_51_, lean_object* v_k_52_){
_start:
{
uint8_t v_t_boxed_53_; lean_object* v_res_54_; 
v_t_boxed_53_ = lean_unbox(v_t_50_);
v_res_54_ = l_Lean_Lsp_RpcWireFormat_ctorElim(v_motive_48_, v_ctorIdx_49_, v_t_boxed_53_, v_h_51_, v_k_52_);
lean_dec(v_k_52_);
lean_dec(v_ctorIdx_49_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v0_elim___redArg(lean_object* v_v0_55_){
_start:
{
lean_inc(v_v0_55_);
return v_v0_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v0_elim___redArg___boxed(lean_object* v_v0_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Lean_Lsp_RpcWireFormat_v0_elim___redArg(v_v0_56_);
lean_dec(v_v0_56_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v0_elim(lean_object* v_motive_58_, uint8_t v_t_59_, lean_object* v_h_60_, lean_object* v_v0_61_){
_start:
{
lean_inc(v_v0_61_);
return v_v0_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v0_elim___boxed(lean_object* v_motive_62_, lean_object* v_t_63_, lean_object* v_h_64_, lean_object* v_v0_65_){
_start:
{
uint8_t v_t_boxed_66_; lean_object* v_res_67_; 
v_t_boxed_66_ = lean_unbox(v_t_63_);
v_res_67_ = l_Lean_Lsp_RpcWireFormat_v0_elim(v_motive_62_, v_t_boxed_66_, v_h_64_, v_v0_65_);
lean_dec(v_v0_65_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v1_elim___redArg(lean_object* v_v1_68_){
_start:
{
lean_inc(v_v1_68_);
return v_v1_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v1_elim___redArg___boxed(lean_object* v_v1_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_Lsp_RpcWireFormat_v1_elim___redArg(v_v1_69_);
lean_dec(v_v1_69_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v1_elim(lean_object* v_motive_71_, uint8_t v_t_72_, lean_object* v_h_73_, lean_object* v_v1_74_){
_start:
{
lean_inc(v_v1_74_);
return v_v1_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v1_elim___boxed(lean_object* v_motive_75_, lean_object* v_t_76_, lean_object* v_h_77_, lean_object* v_v1_78_){
_start:
{
uint8_t v_t_boxed_79_; lean_object* v_res_80_; 
v_t_boxed_79_ = lean_unbox(v_t_76_);
v_res_80_ = l_Lean_Lsp_RpcWireFormat_v1_elim(v_motive_75_, v_t_boxed_79_, v_h_77_, v_v1_78_);
lean_dec(v_v1_78_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson(lean_object* v_json_95_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = l_Lean_Json_getTag_x3f(v_json_95_);
if (lean_obj_tag(v___x_96_) == 0)
{
lean_object* v___x_97_; 
v___x_97_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__1));
return v___x_97_;
}
else
{
lean_object* v_val_98_; lean_object* v___x_99_; uint8_t v___x_100_; 
v_val_98_ = lean_ctor_get(v___x_96_, 0);
lean_inc(v_val_98_);
lean_dec_ref_known(v___x_96_, 1);
v___x_99_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__2));
v___x_100_ = lean_string_dec_eq(v_val_98_, v___x_99_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_101_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__3));
v___x_102_ = lean_string_dec_eq(v_val_98_, v___x_101_);
lean_dec(v_val_98_);
if (v___x_102_ == 0)
{
lean_object* v___x_103_; 
v___x_103_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__5));
return v___x_103_;
}
else
{
lean_object* v___x_104_; 
v___x_104_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__6));
return v___x_104_;
}
}
else
{
lean_object* v___x_105_; 
lean_dec(v_val_98_);
v___x_105_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__7));
return v___x_105_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRpcWireFormat_toJson(uint8_t v_x_112_){
_start:
{
if (v_x_112_ == 0)
{
lean_object* v___x_113_; 
v___x_113_ = ((lean_object*)(l_Lean_Lsp_instToJsonRpcWireFormat_toJson___closed__0));
return v___x_113_;
}
else
{
lean_object* v___x_114_; 
v___x_114_ = ((lean_object*)(l_Lean_Lsp_instToJsonRpcWireFormat_toJson___closed__1));
return v___x_114_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRpcWireFormat_toJson___boxed(lean_object* v_x_115_){
_start:
{
uint8_t v_x_44__boxed_116_; lean_object* v_res_117_; 
v_x_44__boxed_116_ = lean_unbox(v_x_115_);
v_res_117_ = l_Lean_Lsp_instToJsonRpcWireFormat_toJson(v_x_44__boxed_116_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_refFieldName(uint8_t v_x_122_){
_start:
{
if (v_x_122_ == 0)
{
lean_object* v___x_123_; 
v___x_123_ = ((lean_object*)(l_Lean_Lsp_RpcWireFormat_refFieldName___closed__0));
return v___x_123_;
}
else
{
lean_object* v___x_124_; 
v___x_124_ = ((lean_object*)(l_Lean_Lsp_RpcWireFormat_refFieldName___closed__1));
return v___x_124_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_refFieldName___boxed(lean_object* v_x_125_){
_start:
{
uint8_t v_x_22__boxed_126_; lean_object* v_res_127_; 
v_x_22__boxed_126_ = lean_unbox(v_x_125_);
v_res_127_ = l_Lean_Lsp_RpcWireFormat_refFieldName(v_x_22__boxed_126_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef_default___redArg(lean_object* v_inst_128_){
_start:
{
size_t v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_usize_once(&l_Lean_Lsp_instInhabitedRpcRef_default___closed__0, &l_Lean_Lsp_instInhabitedRpcRef_default___closed__0_once, _init_l_Lean_Lsp_instInhabitedRpcRef_default___closed__0);
v___x_130_ = lean_alloc_ctor(0, 1, sizeof(size_t)*1);
lean_ctor_set(v___x_130_, 0, v_inst_128_);
lean_ctor_set_usize(v___x_130_, 1, v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef_default(lean_object* v_00_u03b1_131_, lean_object* v_inst_132_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l_Lean_Server_instInhabitedWithRpcRef_default___redArg(v_inst_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef___redArg(lean_object* v_inst_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_Lean_Server_instInhabitedWithRpcRef_default___redArg(v_inst_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef(lean_object* v_a_136_, lean_object* v_inst_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lean_Server_instInhabitedWithRpcRef_default___redArg(v_inst_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_142_ = ((lean_object*)(l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn___boxed__const__1_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2_));
v___x_143_ = lean_st_mk_ref(v___x_142_);
v___x_144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2____boxed(lean_object* v_a_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2_();
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk___redArg(lean_object* v_val_147_){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; size_t v___x_151_; size_t v___x_152_; size_t v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; size_t v___x_157_; 
v___x_149_ = l_Lean_Server_freshWithRpcRefId;
v___x_150_ = lean_st_ref_take(v___x_149_);
v___x_151_ = ((size_t)1ULL);
v___x_152_ = lean_unbox_usize(v___x_150_);
v___x_153_ = lean_usize_add(v___x_152_, v___x_151_);
v___x_154_ = lean_box_usize(v___x_153_);
v___x_155_ = lean_st_ref_put(v___x_149_, v___x_154_);
v___x_156_ = lean_alloc_ctor(0, 1, sizeof(size_t)*1);
lean_ctor_set(v___x_156_, 0, v_val_147_);
v___x_157_ = lean_unbox_usize(v___x_150_);
lean_dec(v___x_150_);
lean_ctor_set_usize(v___x_156_, 1, v___x_157_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk___redArg___boxed(lean_object* v_val_158_, lean_object* v_a_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Lean_Server_WithRpcRef_mk___redArg(v_val_158_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk(lean_object* v_00_u03b1_161_, lean_object* v_val_162_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = l_Lean_Server_WithRpcRef_mk___redArg(v_val_162_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk___boxed(lean_object* v_00_u03b1_165_, lean_object* v_val_166_, lean_object* v_a_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_Server_WithRpcRef_mk(v_00_u03b1_165_, v_val_166_);
return v_res_168_;
}
}
static lean_object* _init_l_Lean_Server_rpcStoreRef___redArg___closed__1(void){
_start:
{
lean_object* v___x_170_; lean_object* v___f_171_; 
v___x_170_ = lean_alloc_closure((void*)(l_instDecidableEqUSize___boxed), 2, 0);
v___f_171_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_171_, 0, v___x_170_);
return v___f_171_;
}
}
static lean_object* _init_l_Lean_Server_rpcStoreRef___redArg___closed__5(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_175_ = ((lean_object*)(l_Lean_Server_rpcStoreRef___redArg___closed__4));
v___x_176_ = lean_unsigned_to_nat(15u);
v___x_177_ = lean_unsigned_to_nat(132u);
v___x_178_ = ((lean_object*)(l_Lean_Server_rpcStoreRef___redArg___closed__3));
v___x_179_ = ((lean_object*)(l_Lean_Server_rpcStoreRef___redArg___closed__2));
v___x_180_ = l_mkPanicMessageWithDecl(v___x_179_, v___x_178_, v___x_177_, v___x_176_, v___x_175_);
return v___x_180_;
}
}
static lean_object* _init_l_Lean_Server_rpcStoreRef___redArg___boxed__const__1(void){
_start:
{
size_t v___x_181_; lean_object* v___x_182_; 
v___x_181_ = l_Lean_Lsp_instInhabitedRpcRef_default;
v___x_182_ = lean_box_usize(v___x_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___redArg(lean_object* v_inst_183_, lean_object* v_obj_184_, lean_object* v_a_185_){
_start:
{
lean_object* v_aliveRefs_186_; lean_object* v_refsById_187_; size_t v_nextRef_188_; uint8_t v_wireFormat_189_; lean_object* v_val_190_; size_t v_id_191_; lean_object* v___f_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___f_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v_aliveRefs_186_ = lean_ctor_get(v_a_185_, 0);
v_refsById_187_ = lean_ctor_get(v_a_185_, 1);
v_nextRef_188_ = lean_ctor_get_usize(v_a_185_, 2);
v_wireFormat_189_ = lean_ctor_get_uint8(v_a_185_, sizeof(void*)*3);
v_val_190_ = lean_ctor_get(v_obj_184_, 0);
v_id_191_ = lean_ctor_get_usize(v_obj_184_, 1);
v___f_192_ = ((lean_object*)(l_Lean_Server_rpcStoreRef___redArg___closed__0));
v___x_193_ = ((lean_object*)(l_Lean_Lsp_instBEqRpcRef___closed__0));
v___x_194_ = ((lean_object*)(l_Lean_Lsp_instHashableRpcRef___closed__0));
v___f_195_ = lean_obj_once(&l_Lean_Server_rpcStoreRef___redArg___closed__1, &l_Lean_Server_rpcStoreRef___redArg___closed__1_once, _init_l_Lean_Server_rpcStoreRef___redArg___closed__1);
v___x_196_ = lean_box_usize(v_id_191_);
v___x_197_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___f_195_, v___f_192_, v_refsById_187_, v___x_196_);
if (lean_obj_tag(v___x_197_) == 0)
{
lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_216_; 
lean_inc_ref(v_refsById_187_);
lean_inc_ref(v_aliveRefs_186_);
v_isSharedCheck_216_ = !lean_is_exclusive(v_a_185_);
if (v_isSharedCheck_216_ == 0)
{
lean_object* v_unused_217_; lean_object* v_unused_218_; 
v_unused_217_ = lean_ctor_get(v_a_185_, 1);
lean_dec(v_unused_217_);
v_unused_218_ = lean_ctor_get(v_a_185_, 0);
lean_dec(v_unused_218_);
v___x_199_ = v_a_185_;
v_isShared_200_ = v_isSharedCheck_216_;
goto v_resetjp_198_;
}
else
{
lean_dec(v_a_185_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_216_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; size_t v___x_209_; size_t v___x_210_; lean_object* v___x_212_; 
v___x_201_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_183_, v_val_190_);
v___x_202_ = lean_unsigned_to_nat(1u);
v___x_203_ = lean_alloc_ctor(0, 2, sizeof(size_t)*1);
lean_ctor_set(v___x_203_, 0, v___x_201_);
lean_ctor_set(v___x_203_, 1, v___x_202_);
lean_ctor_set_usize(v___x_203_, 2, v_id_191_);
v___x_204_ = lean_box_usize(v_nextRef_188_);
v___x_205_ = l_Lean_PersistentHashMap_insert___redArg(v___x_193_, v___x_194_, v_aliveRefs_186_, v___x_204_, v___x_203_);
v___x_206_ = lean_box_usize(v_id_191_);
v___x_207_ = lean_box_usize(v_nextRef_188_);
v___x_208_ = l_Lean_PersistentHashMap_insert___redArg(v___f_195_, v___f_192_, v_refsById_187_, v___x_206_, v___x_207_);
v___x_209_ = ((size_t)1ULL);
v___x_210_ = lean_usize_add(v_nextRef_188_, v___x_209_);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 1, v___x_208_);
lean_ctor_set(v___x_199_, 0, v___x_205_);
v___x_212_ = v___x_199_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(0, 2, sizeof(size_t)*1 + 1);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v___x_205_);
lean_ctor_set(v_reuseFailAlloc_215_, 1, v___x_208_);
lean_ctor_set_uint8(v_reuseFailAlloc_215_, sizeof(void*)*3, v_wireFormat_189_);
v___x_212_ = v_reuseFailAlloc_215_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
lean_object* v___x_213_; lean_object* v___x_214_; 
lean_ctor_set_usize(v___x_212_, 2, v___x_210_);
v___x_213_ = lean_box_usize(v_nextRef_188_);
v___x_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
lean_ctor_set(v___x_214_, 1, v___x_212_);
return v___x_214_;
}
}
}
else
{
lean_object* v_val_219_; lean_object* v___x_220_; 
v_val_219_ = lean_ctor_get(v___x_197_, 0);
lean_inc_n(v_val_219_, 2);
lean_dec_ref_known(v___x_197_, 1);
v___x_220_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___x_193_, v___x_194_, v_aliveRefs_186_, v_val_219_);
if (lean_obj_tag(v___x_220_) == 1)
{
lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_242_; 
lean_inc_ref(v_refsById_187_);
lean_inc_ref(v_aliveRefs_186_);
v_isSharedCheck_242_ = !lean_is_exclusive(v_a_185_);
if (v_isSharedCheck_242_ == 0)
{
lean_object* v_unused_243_; lean_object* v_unused_244_; 
v_unused_243_ = lean_ctor_get(v_a_185_, 1);
lean_dec(v_unused_243_);
v_unused_244_ = lean_ctor_get(v_a_185_, 0);
lean_dec(v_unused_244_);
v___x_222_ = v_a_185_;
v_isShared_223_ = v_isSharedCheck_242_;
goto v_resetjp_221_;
}
else
{
lean_dec(v_a_185_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_242_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v_val_224_; lean_object* v_obj_225_; size_t v_id_226_; lean_object* v_rc_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_241_; 
v_val_224_ = lean_ctor_get(v___x_220_, 0);
lean_inc(v_val_224_);
lean_dec_ref_known(v___x_220_, 1);
v_obj_225_ = lean_ctor_get(v_val_224_, 0);
v_id_226_ = lean_ctor_get_usize(v_val_224_, 2);
v_rc_227_ = lean_ctor_get(v_val_224_, 1);
v_isSharedCheck_241_ = !lean_is_exclusive(v_val_224_);
if (v_isSharedCheck_241_ == 0)
{
v___x_229_ = v_val_224_;
v_isShared_230_ = v_isSharedCheck_241_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_rc_227_);
lean_inc(v_obj_225_);
lean_dec(v_val_224_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_241_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_234_; 
v___x_231_ = lean_unsigned_to_nat(1u);
v___x_232_ = lean_nat_add(v_rc_227_, v___x_231_);
lean_dec(v_rc_227_);
if (v_isShared_230_ == 0)
{
lean_ctor_set(v___x_229_, 1, v___x_232_);
v___x_234_ = v___x_229_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(0, 2, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_obj_225_);
lean_ctor_set(v_reuseFailAlloc_240_, 1, v___x_232_);
lean_ctor_set_usize(v_reuseFailAlloc_240_, 2, v_id_226_);
v___x_234_ = v_reuseFailAlloc_240_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
lean_object* v___x_235_; lean_object* v___x_237_; 
lean_inc(v_val_219_);
v___x_235_ = l_Lean_PersistentHashMap_insert___redArg(v___x_193_, v___x_194_, v_aliveRefs_186_, v_val_219_, v___x_234_);
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 0, v___x_235_);
v___x_237_ = v___x_222_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 2, sizeof(size_t)*1 + 1);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_235_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v_refsById_187_);
lean_ctor_set_usize(v_reuseFailAlloc_239_, 2, v_nextRef_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_239_, sizeof(void*)*3, v_wireFormat_189_);
v___x_237_ = v_reuseFailAlloc_239_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
lean_object* v___x_238_; 
v___x_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_238_, 0, v_val_219_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
return v___x_238_;
}
}
}
}
}
else
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
lean_dec(v___x_220_);
lean_dec(v_val_219_);
v___x_245_ = lean_obj_once(&l_Lean_Server_rpcStoreRef___redArg___closed__5, &l_Lean_Server_rpcStoreRef___redArg___closed__5_once, _init_l_Lean_Server_rpcStoreRef___redArg___closed__5);
v___x_246_ = l_Lean_Server_rpcStoreRef___redArg___boxed__const__1;
v___x_247_ = l_panic___redArg(v___x_246_, v___x_245_);
v___x_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
lean_ctor_set(v___x_248_, 1, v_a_185_);
return v___x_248_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___redArg___boxed(lean_object* v_inst_249_, lean_object* v_obj_250_, lean_object* v_a_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lean_Server_rpcStoreRef___redArg(v_inst_249_, v_obj_250_, v_a_251_);
lean_dec_ref(v_obj_250_);
lean_dec(v_inst_249_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef(lean_object* v_00_u03b1_253_, lean_object* v_inst_254_, lean_object* v_obj_255_, lean_object* v_a_256_){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = l_Lean_Server_rpcStoreRef___redArg(v_inst_254_, v_obj_255_, v_a_256_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___boxed(lean_object* v_00_u03b1_258_, lean_object* v_inst_259_, lean_object* v_obj_260_, lean_object* v_a_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Lean_Server_rpcStoreRef(v_00_u03b1_258_, v_inst_259_, v_obj_260_, v_a_261_);
lean_dec_ref(v_obj_260_);
lean_dec(v_inst_259_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef___redArg(lean_object* v_inst_270_, size_t v_r_271_, lean_object* v_a_272_){
_start:
{
lean_object* v_aliveRefs_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v_aliveRefs_273_ = lean_ctor_get(v_a_272_, 0);
v___x_274_ = ((lean_object*)(l_Lean_Lsp_instBEqRpcRef___closed__0));
v___x_275_ = ((lean_object*)(l_Lean_Lsp_instHashableRpcRef___closed__0));
v___x_276_ = lean_box_usize(v_r_271_);
v___x_277_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___x_274_, v___x_275_, v_aliveRefs_273_, v___x_276_);
if (lean_obj_tag(v___x_277_) == 1)
{
lean_object* v_val_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_316_; 
v_val_278_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_316_ == 0)
{
v___x_280_ = v___x_277_;
v_isShared_281_ = v_isSharedCheck_316_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_val_278_);
lean_dec(v___x_277_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_316_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v_obj_282_; size_t v_id_283_; lean_object* v___x_284_; 
v_obj_282_ = lean_ctor_get(v_val_278_, 0);
lean_inc(v_obj_282_);
v_id_283_ = lean_ctor_get_usize(v_val_278_, 2);
lean_dec(v_val_278_);
v___x_284_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_obj_282_, v_inst_270_);
if (lean_obj_tag(v___x_284_) == 1)
{
lean_object* v_val_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_293_; 
lean_dec(v_obj_282_);
lean_del_object(v___x_280_);
v_val_285_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_293_ == 0)
{
v___x_287_ = v___x_284_;
v_isShared_288_ = v_isSharedCheck_293_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_val_285_);
lean_dec(v___x_284_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_293_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_289_; lean_object* v___x_291_; 
v___x_289_ = lean_alloc_ctor(0, 1, sizeof(size_t)*1);
lean_ctor_set(v___x_289_, 0, v_val_285_);
lean_ctor_set_usize(v___x_289_, 1, v_id_283_);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 0, v___x_289_);
v___x_291_ = v___x_287_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v___x_289_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
else
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; uint8_t v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_314_; 
lean_dec(v___x_284_);
v___x_294_ = ((lean_object*)(l_Lean_Server_rpcGetRef___redArg___closed__0));
v___x_295_ = lean_usize_to_nat(v_r_271_);
v___x_296_ = l_Nat_reprFast(v___x_295_);
v___x_297_ = lean_string_append(v___x_294_, v___x_296_);
lean_dec_ref(v___x_296_);
v___x_298_ = ((lean_object*)(l_Lean_Server_rpcGetRef___redArg___closed__1));
v___x_299_ = lean_string_append(v___x_297_, v___x_298_);
v___x_300_ = l_unsafeCast___redArg(v_inst_270_);
v___x_301_ = 1;
v___x_302_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_300_, v___x_301_);
v___x_303_ = lean_string_append(v___x_299_, v___x_302_);
lean_dec_ref(v___x_302_);
v___x_304_ = ((lean_object*)(l_Lean_Server_rpcGetRef___redArg___closed__2));
v___x_305_ = lean_string_append(v___x_303_, v___x_304_);
v___x_306_ = ((lean_object*)(l_Lean_Server_rpcGetRef___redArg___closed__3));
v___x_307_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_obj_282_);
lean_dec(v_obj_282_);
v___x_308_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_307_, v___x_301_);
v___x_309_ = lean_string_append(v___x_306_, v___x_308_);
lean_dec_ref(v___x_308_);
v___x_310_ = ((lean_object*)(l_Lean_Server_rpcGetRef___redArg___closed__4));
v___x_311_ = lean_string_append(v___x_309_, v___x_310_);
v___x_312_ = lean_string_append(v___x_305_, v___x_311_);
lean_dec_ref(v___x_311_);
if (v_isShared_281_ == 0)
{
lean_ctor_set_tag(v___x_280_, 0);
lean_ctor_set(v___x_280_, 0, v___x_312_);
v___x_314_ = v___x_280_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v___x_312_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
else
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
lean_dec(v___x_277_);
v___x_317_ = ((lean_object*)(l_Lean_Server_rpcGetRef___redArg___closed__5));
v___x_318_ = lean_usize_to_nat(v_r_271_);
v___x_319_ = l_Nat_reprFast(v___x_318_);
v___x_320_ = lean_string_append(v___x_317_, v___x_319_);
lean_dec_ref(v___x_319_);
v___x_321_ = ((lean_object*)(l_Lean_Server_rpcGetRef___redArg___closed__6));
v___x_322_ = lean_string_append(v___x_320_, v___x_321_);
v___x_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
return v___x_323_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef___redArg___boxed(lean_object* v_inst_324_, lean_object* v_r_325_, lean_object* v_a_326_){
_start:
{
size_t v_r_boxed_327_; lean_object* v_res_328_; 
v_r_boxed_327_ = lean_unbox_usize(v_r_325_);
lean_dec(v_r_325_);
v_res_328_ = l_Lean_Server_rpcGetRef___redArg(v_inst_324_, v_r_boxed_327_, v_a_326_);
lean_dec_ref(v_a_326_);
lean_dec(v_inst_324_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef(lean_object* v_00_u03b1_329_, lean_object* v_inst_330_, size_t v_r_331_, lean_object* v_a_332_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Lean_Server_rpcGetRef___redArg(v_inst_330_, v_r_331_, v_a_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef___boxed(lean_object* v_00_u03b1_334_, lean_object* v_inst_335_, lean_object* v_r_336_, lean_object* v_a_337_){
_start:
{
size_t v_r_boxed_338_; lean_object* v_res_339_; 
v_r_boxed_338_ = lean_unbox_usize(v_r_336_);
lean_dec(v_r_336_);
v_res_339_ = l_Lean_Server_rpcGetRef(v_00_u03b1_334_, v_inst_335_, v_r_boxed_338_, v_a_337_);
lean_dec_ref(v_a_337_);
lean_dec(v_inst_335_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8_spec__11(lean_object* v_xs_340_, size_t v_v_341_, lean_object* v_i_342_){
_start:
{
lean_object* v___x_343_; uint8_t v___x_344_; 
v___x_343_ = lean_array_get_size(v_xs_340_);
v___x_344_ = lean_nat_dec_lt(v_i_342_, v___x_343_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; 
lean_dec(v_i_342_);
v___x_345_ = lean_box(0);
return v___x_345_;
}
else
{
lean_object* v___x_346_; size_t v___x_347_; uint8_t v___x_348_; 
v___x_346_ = lean_array_fget_borrowed(v_xs_340_, v_i_342_);
v___x_347_ = lean_unbox_usize(v___x_346_);
v___x_348_ = lean_usize_dec_eq(v___x_347_, v_v_341_);
if (v___x_348_ == 0)
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = lean_unsigned_to_nat(1u);
v___x_350_ = lean_nat_add(v_i_342_, v___x_349_);
lean_dec(v_i_342_);
v_i_342_ = v___x_350_;
goto _start;
}
else
{
lean_object* v___x_352_; 
v___x_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_352_, 0, v_i_342_);
return v___x_352_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8_spec__11___boxed(lean_object* v_xs_353_, lean_object* v_v_354_, lean_object* v_i_355_){
_start:
{
size_t v_v_boxed_356_; lean_object* v_res_357_; 
v_v_boxed_356_ = lean_unbox_usize(v_v_354_);
lean_dec(v_v_354_);
v_res_357_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8_spec__11(v_xs_353_, v_v_boxed_356_, v_i_355_);
lean_dec_ref(v_xs_353_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8(lean_object* v_xs_358_, size_t v_v_359_){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_360_ = lean_unsigned_to_nat(0u);
v___x_361_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8_spec__11(v_xs_358_, v_v_359_, v___x_360_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8___boxed(lean_object* v_xs_362_, lean_object* v_v_363_){
_start:
{
size_t v_v_boxed_364_; lean_object* v_res_365_; 
v_v_boxed_364_ = lean_unbox_usize(v_v_363_);
lean_dec(v_v_363_);
v_res_365_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8(v_xs_362_, v_v_boxed_364_);
lean_dec_ref(v_xs_362_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___redArg(lean_object* v_x_366_, size_t v_x_367_, size_t v_x_368_){
_start:
{
if (lean_obj_tag(v_x_366_) == 0)
{
lean_object* v_es_369_; lean_object* v___x_370_; size_t v___x_371_; size_t v___x_372_; lean_object* v_j_373_; lean_object* v_entry_374_; 
v_es_369_ = lean_ctor_get(v_x_366_, 0);
v___x_370_ = lean_box(2);
v___x_371_ = ((size_t)31ULL);
v___x_372_ = lean_usize_land(v_x_367_, v___x_371_);
v_j_373_ = lean_usize_to_nat(v___x_372_);
v_entry_374_ = lean_array_get(v___x_370_, v_es_369_, v_j_373_);
switch(lean_obj_tag(v_entry_374_))
{
case 0:
{
lean_object* v_key_375_; size_t v___x_376_; uint8_t v___x_377_; 
v_key_375_ = lean_ctor_get(v_entry_374_, 0);
lean_inc(v_key_375_);
lean_dec_ref_known(v_entry_374_, 2);
v___x_376_ = lean_unbox_usize(v_key_375_);
lean_dec(v_key_375_);
v___x_377_ = lean_usize_dec_eq(v_x_368_, v___x_376_);
if (v___x_377_ == 0)
{
lean_dec(v_j_373_);
return v_x_366_;
}
else
{
lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_385_; 
lean_inc_ref(v_es_369_);
v_isSharedCheck_385_ = !lean_is_exclusive(v_x_366_);
if (v_isSharedCheck_385_ == 0)
{
lean_object* v_unused_386_; 
v_unused_386_ = lean_ctor_get(v_x_366_, 0);
lean_dec(v_unused_386_);
v___x_379_ = v_x_366_;
v_isShared_380_ = v_isSharedCheck_385_;
goto v_resetjp_378_;
}
else
{
lean_dec(v_x_366_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_385_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_381_; lean_object* v___x_383_; 
v___x_381_ = lean_array_set(v_es_369_, v_j_373_, v___x_370_);
lean_dec(v_j_373_);
if (v_isShared_380_ == 0)
{
lean_ctor_set(v___x_379_, 0, v___x_381_);
v___x_383_ = v___x_379_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v___x_381_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
case 1:
{
lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_421_; 
lean_inc_ref(v_es_369_);
v_isSharedCheck_421_ = !lean_is_exclusive(v_x_366_);
if (v_isSharedCheck_421_ == 0)
{
lean_object* v_unused_422_; 
v_unused_422_ = lean_ctor_get(v_x_366_, 0);
lean_dec(v_unused_422_);
v___x_388_ = v_x_366_;
v_isShared_389_ = v_isSharedCheck_421_;
goto v_resetjp_387_;
}
else
{
lean_dec(v_x_366_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_421_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v_node_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_420_; 
v_node_390_ = lean_ctor_get(v_entry_374_, 0);
v_isSharedCheck_420_ = !lean_is_exclusive(v_entry_374_);
if (v_isSharedCheck_420_ == 0)
{
v___x_392_ = v_entry_374_;
v_isShared_393_ = v_isSharedCheck_420_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_node_390_);
lean_dec(v_entry_374_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_420_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
size_t v___x_394_; lean_object* v_entries_395_; size_t v___x_396_; lean_object* v_newNode_397_; lean_object* v___x_398_; 
v___x_394_ = ((size_t)5ULL);
v_entries_395_ = lean_array_set(v_es_369_, v_j_373_, v___x_370_);
v___x_396_ = lean_usize_shift_right(v_x_367_, v___x_394_);
v_newNode_397_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___redArg(v_node_390_, v___x_396_, v_x_368_);
lean_inc_ref(v_newNode_397_);
v___x_398_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_397_);
if (lean_obj_tag(v___x_398_) == 0)
{
lean_object* v___x_400_; 
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 0, v_newNode_397_);
v___x_400_ = v___x_392_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_newNode_397_);
v___x_400_ = v_reuseFailAlloc_405_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
lean_object* v___x_401_; lean_object* v___x_403_; 
v___x_401_ = lean_array_set(v_entries_395_, v_j_373_, v___x_400_);
lean_dec(v_j_373_);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 0, v___x_401_);
v___x_403_ = v___x_388_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v___x_401_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
else
{
lean_object* v_val_406_; lean_object* v_fst_407_; lean_object* v_snd_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_419_; 
lean_dec_ref(v_newNode_397_);
lean_del_object(v___x_392_);
v_val_406_ = lean_ctor_get(v___x_398_, 0);
lean_inc(v_val_406_);
lean_dec_ref_known(v___x_398_, 1);
v_fst_407_ = lean_ctor_get(v_val_406_, 0);
v_snd_408_ = lean_ctor_get(v_val_406_, 1);
v_isSharedCheck_419_ = !lean_is_exclusive(v_val_406_);
if (v_isSharedCheck_419_ == 0)
{
v___x_410_ = v_val_406_;
v_isShared_411_ = v_isSharedCheck_419_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_snd_408_);
lean_inc(v_fst_407_);
lean_dec(v_val_406_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_419_;
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
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_fst_407_);
lean_ctor_set(v_reuseFailAlloc_418_, 1, v_snd_408_);
v___x_413_ = v_reuseFailAlloc_418_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
lean_object* v___x_414_; lean_object* v___x_416_; 
v___x_414_ = lean_array_set(v_entries_395_, v_j_373_, v___x_413_);
lean_dec(v_j_373_);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 0, v___x_414_);
v___x_416_ = v___x_388_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v___x_414_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_373_);
return v_x_366_;
}
}
}
else
{
lean_object* v_ks_423_; lean_object* v_vs_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_438_; 
v_ks_423_ = lean_ctor_get(v_x_366_, 0);
v_vs_424_ = lean_ctor_get(v_x_366_, 1);
v_isSharedCheck_438_ = !lean_is_exclusive(v_x_366_);
if (v_isSharedCheck_438_ == 0)
{
v___x_426_ = v_x_366_;
v_isShared_427_ = v_isSharedCheck_438_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_vs_424_);
lean_inc(v_ks_423_);
lean_dec(v_x_366_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_438_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_428_; 
v___x_428_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8(v_ks_423_, v_x_368_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v___x_430_; 
if (v_isShared_427_ == 0)
{
v___x_430_ = v___x_426_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_ks_423_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v_vs_424_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
else
{
lean_object* v_val_432_; lean_object* v_keys_x27_433_; lean_object* v_vals_x27_434_; lean_object* v___x_436_; 
v_val_432_ = lean_ctor_get(v___x_428_, 0);
lean_inc_n(v_val_432_, 2);
lean_dec_ref_known(v___x_428_, 1);
v_keys_x27_433_ = l_Array_eraseIdx___redArg(v_ks_423_, v_val_432_);
v_vals_x27_434_ = l_Array_eraseIdx___redArg(v_vs_424_, v_val_432_);
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 1, v_vals_x27_434_);
lean_ctor_set(v___x_426_, 0, v_keys_x27_433_);
v___x_436_ = v___x_426_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_keys_x27_433_);
lean_ctor_set(v_reuseFailAlloc_437_, 1, v_vals_x27_434_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___redArg___boxed(lean_object* v_x_439_, lean_object* v_x_440_, lean_object* v_x_441_){
_start:
{
size_t v_x_1666__boxed_442_; size_t v_x_1667__boxed_443_; lean_object* v_res_444_; 
v_x_1666__boxed_442_ = lean_unbox_usize(v_x_440_);
lean_dec(v_x_440_);
v_x_1667__boxed_443_ = lean_unbox_usize(v_x_441_);
lean_dec(v_x_441_);
v_res_444_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___redArg(v_x_439_, v_x_1666__boxed_442_, v_x_1667__boxed_443_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___redArg(lean_object* v_x_445_, size_t v_x_446_){
_start:
{
uint64_t v___x_447_; size_t v_h_448_; lean_object* v___x_449_; 
v___x_447_ = l_Lean_Lsp_instHashableRpcRef_hash(v_x_446_);
v_h_448_ = lean_uint64_to_usize(v___x_447_);
v___x_449_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___redArg(v_x_445_, v_h_448_, v_x_446_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___redArg___boxed(lean_object* v_x_450_, lean_object* v_x_451_){
_start:
{
size_t v_x_1804__boxed_452_; lean_object* v_res_453_; 
v_x_1804__boxed_452_ = lean_unbox_usize(v_x_451_);
lean_dec(v_x_451_);
v_res_453_ = l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___redArg(v_x_450_, v_x_1804__boxed_452_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_454_, lean_object* v_vals_455_, lean_object* v_i_456_, size_t v_k_457_){
_start:
{
lean_object* v___x_458_; uint8_t v___x_459_; 
v___x_458_ = lean_array_get_size(v_keys_454_);
v___x_459_ = lean_nat_dec_lt(v_i_456_, v___x_458_);
if (v___x_459_ == 0)
{
lean_object* v___x_460_; 
lean_dec(v_i_456_);
v___x_460_ = lean_box(0);
return v___x_460_;
}
else
{
lean_object* v_k_x27_461_; size_t v___x_462_; uint8_t v___x_463_; 
v_k_x27_461_ = lean_array_fget_borrowed(v_keys_454_, v_i_456_);
v___x_462_ = lean_unbox_usize(v_k_x27_461_);
v___x_463_ = lean_usize_dec_eq(v_k_457_, v___x_462_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_464_ = lean_unsigned_to_nat(1u);
v___x_465_ = lean_nat_add(v_i_456_, v___x_464_);
lean_dec(v_i_456_);
v_i_456_ = v___x_465_;
goto _start;
}
else
{
lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_467_ = lean_array_fget_borrowed(v_vals_455_, v_i_456_);
lean_dec(v_i_456_);
lean_inc(v___x_467_);
v___x_468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_468_, 0, v___x_467_);
return v___x_468_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_469_, lean_object* v_vals_470_, lean_object* v_i_471_, lean_object* v_k_472_){
_start:
{
size_t v_k_boxed_473_; lean_object* v_res_474_; 
v_k_boxed_473_ = lean_unbox_usize(v_k_472_);
lean_dec(v_k_472_);
v_res_474_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___redArg(v_keys_469_, v_vals_470_, v_i_471_, v_k_boxed_473_);
lean_dec_ref(v_vals_470_);
lean_dec_ref(v_keys_469_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___redArg(lean_object* v_x_475_, size_t v_x_476_, size_t v_x_477_){
_start:
{
if (lean_obj_tag(v_x_475_) == 0)
{
lean_object* v_es_478_; lean_object* v___x_479_; size_t v___x_480_; size_t v___x_481_; lean_object* v_j_482_; lean_object* v___x_483_; 
v_es_478_ = lean_ctor_get(v_x_475_, 0);
v___x_479_ = lean_box(2);
v___x_480_ = ((size_t)31ULL);
v___x_481_ = lean_usize_land(v_x_476_, v___x_480_);
v_j_482_ = lean_usize_to_nat(v___x_481_);
v___x_483_ = lean_array_get_borrowed(v___x_479_, v_es_478_, v_j_482_);
lean_dec(v_j_482_);
switch(lean_obj_tag(v___x_483_))
{
case 0:
{
lean_object* v_key_484_; lean_object* v_val_485_; size_t v___x_486_; uint8_t v___x_487_; 
v_key_484_ = lean_ctor_get(v___x_483_, 0);
v_val_485_ = lean_ctor_get(v___x_483_, 1);
v___x_486_ = lean_unbox_usize(v_key_484_);
v___x_487_ = lean_usize_dec_eq(v_x_477_, v___x_486_);
if (v___x_487_ == 0)
{
lean_object* v___x_488_; 
v___x_488_ = lean_box(0);
return v___x_488_;
}
else
{
lean_object* v___x_489_; 
lean_inc(v_val_485_);
v___x_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_489_, 0, v_val_485_);
return v___x_489_;
}
}
case 1:
{
lean_object* v_node_490_; size_t v___x_491_; size_t v___x_492_; 
v_node_490_ = lean_ctor_get(v___x_483_, 0);
v___x_491_ = ((size_t)5ULL);
v___x_492_ = lean_usize_shift_right(v_x_476_, v___x_491_);
v_x_475_ = v_node_490_;
v_x_476_ = v___x_492_;
goto _start;
}
default: 
{
lean_object* v___x_494_; 
v___x_494_ = lean_box(0);
return v___x_494_;
}
}
}
else
{
lean_object* v_ks_495_; lean_object* v_vs_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v_ks_495_ = lean_ctor_get(v_x_475_, 0);
v_vs_496_ = lean_ctor_get(v_x_475_, 1);
v___x_497_ = lean_unsigned_to_nat(0u);
v___x_498_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___redArg(v_ks_495_, v_vs_496_, v___x_497_, v_x_477_);
return v___x_498_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___redArg___boxed(lean_object* v_x_499_, lean_object* v_x_500_, lean_object* v_x_501_){
_start:
{
size_t v_x_1834__boxed_502_; size_t v_x_1835__boxed_503_; lean_object* v_res_504_; 
v_x_1834__boxed_502_ = lean_unbox_usize(v_x_500_);
lean_dec(v_x_500_);
v_x_1835__boxed_503_ = lean_unbox_usize(v_x_501_);
lean_dec(v_x_501_);
v_res_504_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___redArg(v_x_499_, v_x_1834__boxed_502_, v_x_1835__boxed_503_);
lean_dec_ref(v_x_499_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___redArg(lean_object* v_x_505_, size_t v_x_506_){
_start:
{
uint64_t v___x_507_; size_t v___x_508_; lean_object* v___x_509_; 
v___x_507_ = l_Lean_Lsp_instHashableRpcRef_hash(v_x_506_);
v___x_508_ = lean_uint64_to_usize(v___x_507_);
v___x_509_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___redArg(v_x_505_, v___x_508_, v_x_506_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___redArg___boxed(lean_object* v_x_510_, lean_object* v_x_511_){
_start:
{
size_t v_x_1883__boxed_512_; lean_object* v_res_513_; 
v_x_1883__boxed_512_ = lean_unbox_usize(v_x_511_);
lean_dec(v_x_511_);
v_res_513_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___redArg(v_x_510_, v_x_1883__boxed_512_);
lean_dec_ref(v_x_510_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11_spec__14(lean_object* v_xs_514_, size_t v_v_515_, lean_object* v_i_516_){
_start:
{
lean_object* v___x_517_; uint8_t v___x_518_; 
v___x_517_ = lean_array_get_size(v_xs_514_);
v___x_518_ = lean_nat_dec_lt(v_i_516_, v___x_517_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; 
lean_dec(v_i_516_);
v___x_519_ = lean_box(0);
return v___x_519_;
}
else
{
lean_object* v___x_520_; size_t v___x_521_; uint8_t v___x_522_; 
v___x_520_ = lean_array_fget_borrowed(v_xs_514_, v_i_516_);
v___x_521_ = lean_unbox_usize(v___x_520_);
v___x_522_ = lean_usize_dec_eq(v___x_521_, v_v_515_);
if (v___x_522_ == 0)
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = lean_unsigned_to_nat(1u);
v___x_524_ = lean_nat_add(v_i_516_, v___x_523_);
lean_dec(v_i_516_);
v_i_516_ = v___x_524_;
goto _start;
}
else
{
lean_object* v___x_526_; 
v___x_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_526_, 0, v_i_516_);
return v___x_526_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11_spec__14___boxed(lean_object* v_xs_527_, lean_object* v_v_528_, lean_object* v_i_529_){
_start:
{
size_t v_v_boxed_530_; lean_object* v_res_531_; 
v_v_boxed_530_ = lean_unbox_usize(v_v_528_);
lean_dec(v_v_528_);
v_res_531_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11_spec__14(v_xs_527_, v_v_boxed_530_, v_i_529_);
lean_dec_ref(v_xs_527_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11(lean_object* v_xs_532_, size_t v_v_533_){
_start:
{
lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_534_ = lean_unsigned_to_nat(0u);
v___x_535_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11_spec__14(v_xs_532_, v_v_533_, v___x_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11___boxed(lean_object* v_xs_536_, lean_object* v_v_537_){
_start:
{
size_t v_v_boxed_538_; lean_object* v_res_539_; 
v_v_boxed_538_ = lean_unbox_usize(v_v_537_);
lean_dec(v_v_537_);
v_res_539_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11(v_xs_536_, v_v_boxed_538_);
lean_dec_ref(v_xs_536_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___redArg(lean_object* v_x_540_, size_t v_x_541_, size_t v_x_542_){
_start:
{
if (lean_obj_tag(v_x_540_) == 0)
{
lean_object* v_es_543_; lean_object* v___x_544_; size_t v___x_545_; size_t v___x_546_; lean_object* v_j_547_; lean_object* v_entry_548_; 
v_es_543_ = lean_ctor_get(v_x_540_, 0);
v___x_544_ = lean_box(2);
v___x_545_ = ((size_t)31ULL);
v___x_546_ = lean_usize_land(v_x_541_, v___x_545_);
v_j_547_ = lean_usize_to_nat(v___x_546_);
v_entry_548_ = lean_array_get(v___x_544_, v_es_543_, v_j_547_);
switch(lean_obj_tag(v_entry_548_))
{
case 0:
{
lean_object* v_key_549_; size_t v___x_550_; uint8_t v___x_551_; 
v_key_549_ = lean_ctor_get(v_entry_548_, 0);
lean_inc(v_key_549_);
lean_dec_ref_known(v_entry_548_, 2);
v___x_550_ = lean_unbox_usize(v_key_549_);
lean_dec(v_key_549_);
v___x_551_ = lean_usize_dec_eq(v_x_542_, v___x_550_);
if (v___x_551_ == 0)
{
lean_dec(v_j_547_);
return v_x_540_;
}
else
{
lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_559_; 
lean_inc_ref(v_es_543_);
v_isSharedCheck_559_ = !lean_is_exclusive(v_x_540_);
if (v_isSharedCheck_559_ == 0)
{
lean_object* v_unused_560_; 
v_unused_560_ = lean_ctor_get(v_x_540_, 0);
lean_dec(v_unused_560_);
v___x_553_ = v_x_540_;
v_isShared_554_ = v_isSharedCheck_559_;
goto v_resetjp_552_;
}
else
{
lean_dec(v_x_540_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_559_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_555_; lean_object* v___x_557_; 
v___x_555_ = lean_array_set(v_es_543_, v_j_547_, v___x_544_);
lean_dec(v_j_547_);
if (v_isShared_554_ == 0)
{
lean_ctor_set(v___x_553_, 0, v___x_555_);
v___x_557_ = v___x_553_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v___x_555_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
}
case 1:
{
lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_595_; 
lean_inc_ref(v_es_543_);
v_isSharedCheck_595_ = !lean_is_exclusive(v_x_540_);
if (v_isSharedCheck_595_ == 0)
{
lean_object* v_unused_596_; 
v_unused_596_ = lean_ctor_get(v_x_540_, 0);
lean_dec(v_unused_596_);
v___x_562_ = v_x_540_;
v_isShared_563_ = v_isSharedCheck_595_;
goto v_resetjp_561_;
}
else
{
lean_dec(v_x_540_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_595_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v_node_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_594_; 
v_node_564_ = lean_ctor_get(v_entry_548_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v_entry_548_);
if (v_isSharedCheck_594_ == 0)
{
v___x_566_ = v_entry_548_;
v_isShared_567_ = v_isSharedCheck_594_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_node_564_);
lean_dec(v_entry_548_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_594_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
size_t v___x_568_; lean_object* v_entries_569_; size_t v___x_570_; lean_object* v_newNode_571_; lean_object* v___x_572_; 
v___x_568_ = ((size_t)5ULL);
v_entries_569_ = lean_array_set(v_es_543_, v_j_547_, v___x_544_);
v___x_570_ = lean_usize_shift_right(v_x_541_, v___x_568_);
v_newNode_571_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___redArg(v_node_564_, v___x_570_, v_x_542_);
lean_inc_ref(v_newNode_571_);
v___x_572_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_571_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v___x_574_; 
if (v_isShared_567_ == 0)
{
lean_ctor_set(v___x_566_, 0, v_newNode_571_);
v___x_574_ = v___x_566_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_newNode_571_);
v___x_574_ = v_reuseFailAlloc_579_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_575_; lean_object* v___x_577_; 
v___x_575_ = lean_array_set(v_entries_569_, v_j_547_, v___x_574_);
lean_dec(v_j_547_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v___x_575_);
v___x_577_ = v___x_562_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_575_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
else
{
lean_object* v_val_580_; lean_object* v_fst_581_; lean_object* v_snd_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_593_; 
lean_dec_ref(v_newNode_571_);
lean_del_object(v___x_566_);
v_val_580_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_val_580_);
lean_dec_ref_known(v___x_572_, 1);
v_fst_581_ = lean_ctor_get(v_val_580_, 0);
v_snd_582_ = lean_ctor_get(v_val_580_, 1);
v_isSharedCheck_593_ = !lean_is_exclusive(v_val_580_);
if (v_isSharedCheck_593_ == 0)
{
v___x_584_ = v_val_580_;
v_isShared_585_ = v_isSharedCheck_593_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_snd_582_);
lean_inc(v_fst_581_);
lean_dec(v_val_580_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_593_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
if (v_isShared_585_ == 0)
{
v___x_587_ = v___x_584_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_fst_581_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v_snd_582_);
v___x_587_ = v_reuseFailAlloc_592_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_588_; lean_object* v___x_590_; 
v___x_588_ = lean_array_set(v_entries_569_, v_j_547_, v___x_587_);
lean_dec(v_j_547_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v___x_588_);
v___x_590_ = v___x_562_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v___x_588_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_547_);
return v_x_540_;
}
}
}
else
{
lean_object* v_ks_597_; lean_object* v_vs_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_612_; 
v_ks_597_ = lean_ctor_get(v_x_540_, 0);
v_vs_598_ = lean_ctor_get(v_x_540_, 1);
v_isSharedCheck_612_ = !lean_is_exclusive(v_x_540_);
if (v_isSharedCheck_612_ == 0)
{
v___x_600_ = v_x_540_;
v_isShared_601_ = v_isSharedCheck_612_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_vs_598_);
lean_inc(v_ks_597_);
lean_dec(v_x_540_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_612_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; 
v___x_602_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11(v_ks_597_, v_x_542_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v___x_604_; 
if (v_isShared_601_ == 0)
{
v___x_604_ = v___x_600_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_ks_597_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v_vs_598_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
return v___x_604_;
}
}
else
{
lean_object* v_val_606_; lean_object* v_keys_x27_607_; lean_object* v_vals_x27_608_; lean_object* v___x_610_; 
v_val_606_ = lean_ctor_get(v___x_602_, 0);
lean_inc_n(v_val_606_, 2);
lean_dec_ref_known(v___x_602_, 1);
v_keys_x27_607_ = l_Array_eraseIdx___redArg(v_ks_597_, v_val_606_);
v_vals_x27_608_ = l_Array_eraseIdx___redArg(v_vs_598_, v_val_606_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 1, v_vals_x27_608_);
lean_ctor_set(v___x_600_, 0, v_keys_x27_607_);
v___x_610_ = v___x_600_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_keys_x27_607_);
lean_ctor_set(v_reuseFailAlloc_611_, 1, v_vals_x27_608_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___redArg___boxed(lean_object* v_x_613_, lean_object* v_x_614_, lean_object* v_x_615_){
_start:
{
size_t v_x_1919__boxed_616_; size_t v_x_1920__boxed_617_; lean_object* v_res_618_; 
v_x_1919__boxed_616_ = lean_unbox_usize(v_x_614_);
lean_dec(v_x_614_);
v_x_1920__boxed_617_ = lean_unbox_usize(v_x_615_);
lean_dec(v_x_615_);
v_res_618_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___redArg(v_x_613_, v_x_1919__boxed_616_, v_x_1920__boxed_617_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___redArg(lean_object* v_x_619_, size_t v_x_620_){
_start:
{
uint64_t v___x_621_; size_t v_h_622_; lean_object* v___x_623_; 
v___x_621_ = lean_usize_to_uint64(v_x_620_);
v_h_622_ = lean_uint64_to_usize(v___x_621_);
v___x_623_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___redArg(v_x_619_, v_h_622_, v_x_620_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___redArg___boxed(lean_object* v_x_624_, lean_object* v_x_625_){
_start:
{
size_t v_x_2057__boxed_626_; lean_object* v_res_627_; 
v_x_2057__boxed_626_ = lean_unbox_usize(v_x_625_);
lean_dec(v_x_625_);
v_res_627_ = l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___redArg(v_x_624_, v_x_2057__boxed_626_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___redArg(lean_object* v_x_628_, lean_object* v_x_629_, size_t v_x_630_, lean_object* v_x_631_){
_start:
{
lean_object* v_ks_632_; lean_object* v_vs_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_660_; 
v_ks_632_ = lean_ctor_get(v_x_628_, 0);
v_vs_633_ = lean_ctor_get(v_x_628_, 1);
v_isSharedCheck_660_ = !lean_is_exclusive(v_x_628_);
if (v_isSharedCheck_660_ == 0)
{
v___x_635_ = v_x_628_;
v_isShared_636_ = v_isSharedCheck_660_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_vs_633_);
lean_inc(v_ks_632_);
lean_dec(v_x_628_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_660_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_637_; uint8_t v___x_638_; 
v___x_637_ = lean_array_get_size(v_ks_632_);
v___x_638_ = lean_nat_dec_lt(v_x_629_, v___x_637_);
if (v___x_638_ == 0)
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_643_; 
lean_dec(v_x_629_);
v___x_639_ = lean_box_usize(v_x_630_);
v___x_640_ = lean_array_push(v_ks_632_, v___x_639_);
v___x_641_ = lean_array_push(v_vs_633_, v_x_631_);
if (v_isShared_636_ == 0)
{
lean_ctor_set(v___x_635_, 1, v___x_641_);
lean_ctor_set(v___x_635_, 0, v___x_640_);
v___x_643_ = v___x_635_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v___x_640_);
lean_ctor_set(v_reuseFailAlloc_644_, 1, v___x_641_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
return v___x_643_;
}
}
else
{
lean_object* v_k_x27_645_; size_t v___x_646_; uint8_t v___x_647_; 
v_k_x27_645_ = lean_array_fget_borrowed(v_ks_632_, v_x_629_);
v___x_646_ = lean_unbox_usize(v_k_x27_645_);
v___x_647_ = lean_usize_dec_eq(v_x_630_, v___x_646_);
if (v___x_647_ == 0)
{
lean_object* v___x_649_; 
if (v_isShared_636_ == 0)
{
v___x_649_ = v___x_635_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_ks_632_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v_vs_633_);
v___x_649_ = v_reuseFailAlloc_653_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = lean_unsigned_to_nat(1u);
v___x_651_ = lean_nat_add(v_x_629_, v___x_650_);
lean_dec(v_x_629_);
v_x_628_ = v___x_649_;
v_x_629_ = v___x_651_;
goto _start;
}
}
else
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_658_; 
v___x_654_ = lean_box_usize(v_x_630_);
v___x_655_ = lean_array_fset(v_ks_632_, v_x_629_, v___x_654_);
v___x_656_ = lean_array_fset(v_vs_633_, v_x_629_, v_x_631_);
lean_dec(v_x_629_);
if (v_isShared_636_ == 0)
{
lean_ctor_set(v___x_635_, 1, v___x_656_);
lean_ctor_set(v___x_635_, 0, v___x_655_);
v___x_658_ = v___x_635_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v___x_655_);
lean_ctor_set(v_reuseFailAlloc_659_, 1, v___x_656_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object* v_x_661_, lean_object* v_x_662_, lean_object* v_x_663_, lean_object* v_x_664_){
_start:
{
size_t v_x_2068__boxed_665_; lean_object* v_res_666_; 
v_x_2068__boxed_665_ = lean_unbox_usize(v_x_663_);
lean_dec(v_x_663_);
v_res_666_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___redArg(v_x_661_, v_x_662_, v_x_2068__boxed_665_, v_x_664_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___redArg(lean_object* v_n_667_, size_t v_k_668_, lean_object* v_v_669_){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_670_ = lean_unsigned_to_nat(0u);
v___x_671_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___redArg(v_n_667_, v___x_670_, v_k_668_, v_v_669_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_n_672_, lean_object* v_k_673_, lean_object* v_v_674_){
_start:
{
size_t v_k_boxed_675_; lean_object* v_res_676_; 
v_k_boxed_675_ = lean_unbox_usize(v_k_673_);
lean_dec(v_k_673_);
v_res_676_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___redArg(v_n_672_, v_k_boxed_675_, v_v_674_);
return v_res_676_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = lean_box(0);
v___x_678_ = l_unsafeCast___redArg(v___x_677_);
return v___x_678_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg(lean_object* v_x_680_, size_t v_x_681_, size_t v_x_682_, size_t v_x_683_, lean_object* v_x_684_){
_start:
{
if (lean_obj_tag(v_x_680_) == 0)
{
lean_object* v_es_685_; size_t v___x_686_; size_t v___x_687_; lean_object* v_j_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v_es_685_ = lean_ctor_get(v_x_680_, 0);
v___x_686_ = ((size_t)31ULL);
v___x_687_ = lean_usize_land(v_x_681_, v___x_686_);
v_j_688_ = lean_usize_to_nat(v___x_687_);
v___x_689_ = lean_array_get_size(v_es_685_);
v___x_690_ = lean_nat_dec_lt(v_j_688_, v___x_689_);
if (v___x_690_ == 0)
{
lean_dec(v_j_688_);
lean_dec(v_x_684_);
return v_x_680_;
}
else
{
lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_733_; 
lean_inc_ref(v_es_685_);
v_isSharedCheck_733_ = !lean_is_exclusive(v_x_680_);
if (v_isSharedCheck_733_ == 0)
{
lean_object* v_unused_734_; 
v_unused_734_ = lean_ctor_get(v_x_680_, 0);
lean_dec(v_unused_734_);
v___x_692_ = v_x_680_;
v_isShared_693_ = v_isSharedCheck_733_;
goto v_resetjp_691_;
}
else
{
lean_dec(v_x_680_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_733_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v_v_694_; lean_object* v___x_695_; lean_object* v_xs_x27_696_; lean_object* v___y_698_; 
v_v_694_ = lean_array_fget(v_es_685_, v_j_688_);
v___x_695_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__0);
v_xs_x27_696_ = lean_array_fset(v_es_685_, v_j_688_, v___x_695_);
switch(lean_obj_tag(v_v_694_))
{
case 0:
{
lean_object* v_key_703_; lean_object* v_val_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_717_; 
v_key_703_ = lean_ctor_get(v_v_694_, 0);
v_val_704_ = lean_ctor_get(v_v_694_, 1);
v_isSharedCheck_717_ = !lean_is_exclusive(v_v_694_);
if (v_isSharedCheck_717_ == 0)
{
v___x_706_ = v_v_694_;
v_isShared_707_ = v_isSharedCheck_717_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_val_704_);
lean_inc(v_key_703_);
lean_dec(v_v_694_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_717_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
size_t v___x_708_; uint8_t v___x_709_; 
v___x_708_ = lean_unbox_usize(v_key_703_);
v___x_709_ = lean_usize_dec_eq(v_x_683_, v___x_708_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
lean_del_object(v___x_706_);
v___x_710_ = lean_box_usize(v_x_683_);
v___x_711_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_703_, v_val_704_, v___x_710_, v_x_684_);
v___x_712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_712_, 0, v___x_711_);
v___y_698_ = v___x_712_;
goto v___jp_697_;
}
else
{
lean_object* v___x_713_; lean_object* v___x_715_; 
lean_dec(v_val_704_);
lean_dec(v_key_703_);
v___x_713_ = lean_box_usize(v_x_683_);
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 1, v_x_684_);
lean_ctor_set(v___x_706_, 0, v___x_713_);
v___x_715_ = v___x_706_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_716_, 1, v_x_684_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
v___y_698_ = v___x_715_;
goto v___jp_697_;
}
}
}
}
case 1:
{
lean_object* v_node_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_730_; 
v_node_718_ = lean_ctor_get(v_v_694_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v_v_694_);
if (v_isSharedCheck_730_ == 0)
{
v___x_720_ = v_v_694_;
v_isShared_721_ = v_isSharedCheck_730_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_node_718_);
lean_dec(v_v_694_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_730_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
size_t v___x_722_; size_t v___x_723_; size_t v___x_724_; size_t v___x_725_; lean_object* v___x_726_; lean_object* v___x_728_; 
v___x_722_ = ((size_t)5ULL);
v___x_723_ = lean_usize_shift_right(v_x_681_, v___x_722_);
v___x_724_ = ((size_t)1ULL);
v___x_725_ = lean_usize_add(v_x_682_, v___x_724_);
v___x_726_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg(v_node_718_, v___x_723_, v___x_725_, v_x_683_, v_x_684_);
if (v_isShared_721_ == 0)
{
lean_ctor_set(v___x_720_, 0, v___x_726_);
v___x_728_ = v___x_720_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v___x_726_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
v___y_698_ = v___x_728_;
goto v___jp_697_;
}
}
}
default: 
{
lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_731_ = lean_box_usize(v_x_683_);
v___x_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_732_, 0, v___x_731_);
lean_ctor_set(v___x_732_, 1, v_x_684_);
v___y_698_ = v___x_732_;
goto v___jp_697_;
}
}
v___jp_697_:
{
lean_object* v___x_699_; lean_object* v___x_701_; 
v___x_699_ = lean_array_fset(v_xs_x27_696_, v_j_688_, v___y_698_);
lean_dec(v_j_688_);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 0, v___x_699_);
v___x_701_ = v___x_692_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v___x_699_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
}
else
{
lean_object* v_ks_735_; lean_object* v_vs_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_754_; 
v_ks_735_ = lean_ctor_get(v_x_680_, 0);
v_vs_736_ = lean_ctor_get(v_x_680_, 1);
v_isSharedCheck_754_ = !lean_is_exclusive(v_x_680_);
if (v_isSharedCheck_754_ == 0)
{
v___x_738_ = v_x_680_;
v_isShared_739_ = v_isSharedCheck_754_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_vs_736_);
lean_inc(v_ks_735_);
lean_dec(v_x_680_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_754_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_741_; 
if (v_isShared_739_ == 0)
{
v___x_741_ = v___x_738_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_ks_735_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v_vs_736_);
v___x_741_ = v_reuseFailAlloc_753_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v_newNode_742_; size_t v___x_743_; uint8_t v___x_744_; 
v_newNode_742_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___redArg(v___x_741_, v_x_683_, v_x_684_);
v___x_743_ = ((size_t)7ULL);
v___x_744_ = lean_usize_dec_le(v___x_743_, v_x_682_);
if (v___x_744_ == 0)
{
lean_object* v___x_745_; lean_object* v___x_746_; uint8_t v___x_747_; 
v___x_745_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_742_);
v___x_746_ = lean_unsigned_to_nat(4u);
v___x_747_ = lean_nat_dec_lt(v___x_745_, v___x_746_);
lean_dec(v___x_745_);
if (v___x_747_ == 0)
{
lean_object* v_ks_748_; lean_object* v_vs_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v_ks_748_ = lean_ctor_get(v_newNode_742_, 0);
lean_inc_ref(v_ks_748_);
v_vs_749_ = lean_ctor_get(v_newNode_742_, 1);
lean_inc_ref(v_vs_749_);
lean_dec_ref(v_newNode_742_);
v___x_750_ = lean_unsigned_to_nat(0u);
v___x_751_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__1);
v___x_752_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___redArg(v_x_682_, v_ks_748_, v_vs_749_, v___x_750_, v___x_751_);
lean_dec_ref(v_vs_749_);
lean_dec_ref(v_ks_748_);
return v___x_752_;
}
else
{
return v_newNode_742_;
}
}
else
{
return v_newNode_742_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___redArg(size_t v_depth_755_, lean_object* v_keys_756_, lean_object* v_vals_757_, lean_object* v_i_758_, lean_object* v_entries_759_){
_start:
{
lean_object* v___x_760_; uint8_t v___x_761_; 
v___x_760_ = lean_array_get_size(v_keys_756_);
v___x_761_ = lean_nat_dec_lt(v_i_758_, v___x_760_);
if (v___x_761_ == 0)
{
lean_dec(v_i_758_);
return v_entries_759_;
}
else
{
lean_object* v_k_762_; lean_object* v_v_763_; size_t v___x_764_; uint64_t v___x_765_; size_t v_h_766_; size_t v___x_767_; lean_object* v___x_768_; size_t v___x_769_; size_t v___x_770_; size_t v___x_771_; size_t v_h_772_; lean_object* v___x_773_; size_t v___x_774_; lean_object* v___x_775_; 
v_k_762_ = lean_array_fget_borrowed(v_keys_756_, v_i_758_);
v_v_763_ = lean_array_fget_borrowed(v_vals_757_, v_i_758_);
v___x_764_ = lean_unbox_usize(v_k_762_);
v___x_765_ = l_Lean_Lsp_instHashableRpcRef_hash(v___x_764_);
v_h_766_ = lean_uint64_to_usize(v___x_765_);
v___x_767_ = ((size_t)5ULL);
v___x_768_ = lean_unsigned_to_nat(1u);
v___x_769_ = ((size_t)1ULL);
v___x_770_ = lean_usize_sub(v_depth_755_, v___x_769_);
v___x_771_ = lean_usize_mul(v___x_767_, v___x_770_);
v_h_772_ = lean_usize_shift_right(v_h_766_, v___x_771_);
v___x_773_ = lean_nat_add(v_i_758_, v___x_768_);
lean_dec(v_i_758_);
v___x_774_ = lean_unbox_usize(v_k_762_);
lean_inc(v_v_763_);
v___x_775_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg(v_entries_759_, v_h_772_, v_depth_755_, v___x_774_, v_v_763_);
v_i_758_ = v___x_773_;
v_entries_759_ = v___x_775_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_777_, lean_object* v_keys_778_, lean_object* v_vals_779_, lean_object* v_i_780_, lean_object* v_entries_781_){
_start:
{
size_t v_depth_boxed_782_; lean_object* v_res_783_; 
v_depth_boxed_782_ = lean_unbox_usize(v_depth_777_);
lean_dec(v_depth_777_);
v_res_783_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___redArg(v_depth_boxed_782_, v_keys_778_, v_vals_779_, v_i_780_, v_entries_781_);
lean_dec_ref(v_vals_779_);
lean_dec_ref(v_keys_778_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___boxed(lean_object* v_x_784_, lean_object* v_x_785_, lean_object* v_x_786_, lean_object* v_x_787_, lean_object* v_x_788_){
_start:
{
size_t v_x_2157__boxed_789_; size_t v_x_2158__boxed_790_; size_t v_x_2159__boxed_791_; lean_object* v_res_792_; 
v_x_2157__boxed_789_ = lean_unbox_usize(v_x_785_);
lean_dec(v_x_785_);
v_x_2158__boxed_790_ = lean_unbox_usize(v_x_786_);
lean_dec(v_x_786_);
v_x_2159__boxed_791_ = lean_unbox_usize(v_x_787_);
lean_dec(v_x_787_);
v_res_792_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg(v_x_784_, v_x_2157__boxed_789_, v_x_2158__boxed_790_, v_x_2159__boxed_791_, v_x_788_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___redArg(lean_object* v_x_793_, size_t v_x_794_, lean_object* v_x_795_){
_start:
{
uint64_t v___x_796_; size_t v___x_797_; size_t v___x_798_; lean_object* v___x_799_; 
v___x_796_ = l_Lean_Lsp_instHashableRpcRef_hash(v_x_794_);
v___x_797_ = lean_uint64_to_usize(v___x_796_);
v___x_798_ = ((size_t)1ULL);
v___x_799_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg(v_x_793_, v___x_797_, v___x_798_, v_x_794_, v_x_795_);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___redArg___boxed(lean_object* v_x_800_, lean_object* v_x_801_, lean_object* v_x_802_){
_start:
{
size_t v_x_2323__boxed_803_; lean_object* v_res_804_; 
v_x_2323__boxed_803_ = lean_unbox_usize(v_x_801_);
lean_dec(v_x_801_);
v_res_804_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___redArg(v_x_800_, v_x_2323__boxed_803_, v_x_802_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcReleaseRef(size_t v_r_805_, lean_object* v_a_806_){
_start:
{
lean_object* v___y_808_; lean_object* v_aliveRefs_812_; lean_object* v_refsById_813_; size_t v_nextRef_814_; uint8_t v_wireFormat_815_; lean_object* v___x_816_; 
v_aliveRefs_812_ = lean_ctor_get(v_a_806_, 0);
v_refsById_813_ = lean_ctor_get(v_a_806_, 1);
v_nextRef_814_ = lean_ctor_get_usize(v_a_806_, 2);
v_wireFormat_815_ = lean_ctor_get_uint8(v_a_806_, sizeof(void*)*3);
v___x_816_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___redArg(v_aliveRefs_812_, v_r_805_);
if (lean_obj_tag(v___x_816_) == 1)
{
lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_844_; 
lean_inc_ref(v_refsById_813_);
lean_inc_ref(v_aliveRefs_812_);
v_isSharedCheck_844_ = !lean_is_exclusive(v_a_806_);
if (v_isSharedCheck_844_ == 0)
{
lean_object* v_unused_845_; lean_object* v_unused_846_; 
v_unused_845_ = lean_ctor_get(v_a_806_, 1);
lean_dec(v_unused_845_);
v_unused_846_ = lean_ctor_get(v_a_806_, 0);
lean_dec(v_unused_846_);
v___x_818_ = v_a_806_;
v_isShared_819_ = v_isSharedCheck_844_;
goto v_resetjp_817_;
}
else
{
lean_dec(v_a_806_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_844_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v_val_820_; lean_object* v_obj_821_; size_t v_id_822_; lean_object* v_rc_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_843_; 
v_val_820_ = lean_ctor_get(v___x_816_, 0);
lean_inc(v_val_820_);
lean_dec_ref_known(v___x_816_, 1);
v_obj_821_ = lean_ctor_get(v_val_820_, 0);
v_id_822_ = lean_ctor_get_usize(v_val_820_, 2);
v_rc_823_ = lean_ctor_get(v_val_820_, 1);
v_isSharedCheck_843_ = !lean_is_exclusive(v_val_820_);
if (v_isSharedCheck_843_ == 0)
{
v___x_825_ = v_val_820_;
v_isShared_826_ = v_isSharedCheck_843_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_rc_823_);
lean_inc(v_obj_821_);
lean_dec(v_val_820_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_843_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; uint8_t v___x_830_; 
v___x_827_ = lean_unsigned_to_nat(1u);
v___x_828_ = lean_nat_sub(v_rc_823_, v___x_827_);
lean_dec(v_rc_823_);
v___x_829_ = lean_unsigned_to_nat(0u);
v___x_830_ = lean_nat_dec_eq(v___x_828_, v___x_829_);
if (v___x_830_ == 0)
{
lean_object* v___x_832_; 
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 1, v___x_828_);
v___x_832_ = v___x_825_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(0, 2, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v_obj_821_);
lean_ctor_set(v_reuseFailAlloc_837_, 1, v___x_828_);
lean_ctor_set_usize(v_reuseFailAlloc_837_, 2, v_id_822_);
v___x_832_ = v_reuseFailAlloc_837_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
lean_object* v___x_833_; lean_object* v___x_835_; 
v___x_833_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___redArg(v_aliveRefs_812_, v_r_805_, v___x_832_);
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 0, v___x_833_);
v___x_835_ = v___x_818_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 2, sizeof(size_t)*1 + 1);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v___x_833_);
lean_ctor_set(v_reuseFailAlloc_836_, 1, v_refsById_813_);
lean_ctor_set_usize(v_reuseFailAlloc_836_, 2, v_nextRef_814_);
lean_ctor_set_uint8(v_reuseFailAlloc_836_, sizeof(void*)*3, v_wireFormat_815_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
v___y_808_ = v___x_835_;
goto v___jp_807_;
}
}
}
else
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_841_; 
lean_dec(v___x_828_);
lean_del_object(v___x_825_);
lean_dec(v_obj_821_);
v___x_838_ = l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___redArg(v_aliveRefs_812_, v_r_805_);
v___x_839_ = l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___redArg(v_refsById_813_, v_id_822_);
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 1, v___x_839_);
lean_ctor_set(v___x_818_, 0, v___x_838_);
v___x_841_ = v___x_818_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 2, sizeof(size_t)*1 + 1);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_838_);
lean_ctor_set(v_reuseFailAlloc_842_, 1, v___x_839_);
lean_ctor_set_usize(v_reuseFailAlloc_842_, 2, v_nextRef_814_);
lean_ctor_set_uint8(v_reuseFailAlloc_842_, sizeof(void*)*3, v_wireFormat_815_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
v___y_808_ = v___x_841_;
goto v___jp_807_;
}
}
}
}
}
else
{
uint8_t v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
lean_dec(v___x_816_);
v___x_847_ = 0;
v___x_848_ = lean_box(v___x_847_);
v___x_849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_849_, 0, v___x_848_);
lean_ctor_set(v___x_849_, 1, v_a_806_);
return v___x_849_;
}
v___jp_807_:
{
uint8_t v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_809_ = 1;
v___x_810_ = lean_box(v___x_809_);
v___x_811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_811_, 0, v___x_810_);
lean_ctor_set(v___x_811_, 1, v___y_808_);
return v___x_811_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcReleaseRef___boxed(lean_object* v_r_850_, lean_object* v_a_851_){
_start:
{
size_t v_r_boxed_852_; lean_object* v_res_853_; 
v_r_boxed_852_ = lean_unbox_usize(v_r_850_);
lean_dec(v_r_850_);
v_res_853_ = l_Lean_Server_rpcReleaseRef(v_r_boxed_852_, v_a_851_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0(lean_object* v_00_u03b2_854_, lean_object* v_x_855_, size_t v_x_856_){
_start:
{
lean_object* v___x_857_; 
v___x_857_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___redArg(v_x_855_, v_x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___boxed(lean_object* v_00_u03b2_858_, lean_object* v_x_859_, lean_object* v_x_860_){
_start:
{
size_t v_x_2415__boxed_861_; lean_object* v_res_862_; 
v_x_2415__boxed_861_ = lean_unbox_usize(v_x_860_);
lean_dec(v_x_860_);
v_res_862_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0(v_00_u03b2_858_, v_x_859_, v_x_2415__boxed_861_);
lean_dec_ref(v_x_859_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1(lean_object* v_00_u03b2_863_, lean_object* v_x_864_, size_t v_x_865_, lean_object* v_x_866_){
_start:
{
lean_object* v___x_867_; 
v___x_867_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___redArg(v_x_864_, v_x_865_, v_x_866_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___boxed(lean_object* v_00_u03b2_868_, lean_object* v_x_869_, lean_object* v_x_870_, lean_object* v_x_871_){
_start:
{
size_t v_x_2423__boxed_872_; lean_object* v_res_873_; 
v_x_2423__boxed_872_ = lean_unbox_usize(v_x_870_);
lean_dec(v_x_870_);
v_res_873_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1(v_00_u03b2_868_, v_x_869_, v_x_2423__boxed_872_, v_x_871_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2(lean_object* v_00_u03b2_874_, lean_object* v_x_875_, size_t v_x_876_){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___redArg(v_x_875_, v_x_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___boxed(lean_object* v_00_u03b2_878_, lean_object* v_x_879_, lean_object* v_x_880_){
_start:
{
size_t v_x_2434__boxed_881_; lean_object* v_res_882_; 
v_x_2434__boxed_881_ = lean_unbox_usize(v_x_880_);
lean_dec(v_x_880_);
v_res_882_ = l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2(v_00_u03b2_878_, v_x_879_, v_x_2434__boxed_881_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3(lean_object* v_00_u03b2_883_, lean_object* v_x_884_, size_t v_x_885_){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___redArg(v_x_884_, v_x_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___boxed(lean_object* v_00_u03b2_887_, lean_object* v_x_888_, lean_object* v_x_889_){
_start:
{
size_t v_x_2442__boxed_890_; lean_object* v_res_891_; 
v_x_2442__boxed_890_ = lean_unbox_usize(v_x_889_);
lean_dec(v_x_889_);
v_res_891_ = l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3(v_00_u03b2_887_, v_x_888_, v_x_2442__boxed_890_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0(lean_object* v_00_u03b2_892_, lean_object* v_x_893_, size_t v_x_894_, size_t v_x_895_){
_start:
{
lean_object* v___x_896_; 
v___x_896_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___redArg(v_x_893_, v_x_894_, v_x_895_);
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___boxed(lean_object* v_00_u03b2_897_, lean_object* v_x_898_, lean_object* v_x_899_, lean_object* v_x_900_){
_start:
{
size_t v_x_2450__boxed_901_; size_t v_x_2451__boxed_902_; lean_object* v_res_903_; 
v_x_2450__boxed_901_ = lean_unbox_usize(v_x_899_);
lean_dec(v_x_899_);
v_x_2451__boxed_902_ = lean_unbox_usize(v_x_900_);
lean_dec(v_x_900_);
v_res_903_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0(v_00_u03b2_897_, v_x_898_, v_x_2450__boxed_901_, v_x_2451__boxed_902_);
lean_dec_ref(v_x_898_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2(lean_object* v_00_u03b2_904_, lean_object* v_x_905_, size_t v_x_906_, size_t v_x_907_, size_t v_x_908_, lean_object* v_x_909_){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg(v_x_905_, v_x_906_, v_x_907_, v_x_908_, v_x_909_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___boxed(lean_object* v_00_u03b2_911_, lean_object* v_x_912_, lean_object* v_x_913_, lean_object* v_x_914_, lean_object* v_x_915_, lean_object* v_x_916_){
_start:
{
size_t v_x_2461__boxed_917_; size_t v_x_2462__boxed_918_; size_t v_x_2463__boxed_919_; lean_object* v_res_920_; 
v_x_2461__boxed_917_ = lean_unbox_usize(v_x_913_);
lean_dec(v_x_913_);
v_x_2462__boxed_918_ = lean_unbox_usize(v_x_914_);
lean_dec(v_x_914_);
v_x_2463__boxed_919_ = lean_unbox_usize(v_x_915_);
lean_dec(v_x_915_);
v_res_920_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2(v_00_u03b2_911_, v_x_912_, v_x_2461__boxed_917_, v_x_2462__boxed_918_, v_x_2463__boxed_919_, v_x_916_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4(lean_object* v_00_u03b2_921_, lean_object* v_x_922_, size_t v_x_923_, size_t v_x_924_){
_start:
{
lean_object* v___x_925_; 
v___x_925_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___redArg(v_x_922_, v_x_923_, v_x_924_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___boxed(lean_object* v_00_u03b2_926_, lean_object* v_x_927_, lean_object* v_x_928_, lean_object* v_x_929_){
_start:
{
size_t v_x_2478__boxed_930_; size_t v_x_2479__boxed_931_; lean_object* v_res_932_; 
v_x_2478__boxed_930_ = lean_unbox_usize(v_x_928_);
lean_dec(v_x_928_);
v_x_2479__boxed_931_ = lean_unbox_usize(v_x_929_);
lean_dec(v_x_929_);
v_res_932_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4(v_00_u03b2_926_, v_x_927_, v_x_2478__boxed_930_, v_x_2479__boxed_931_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6(lean_object* v_00_u03b2_933_, lean_object* v_x_934_, size_t v_x_935_, size_t v_x_936_){
_start:
{
lean_object* v___x_937_; 
v___x_937_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___redArg(v_x_934_, v_x_935_, v_x_936_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___boxed(lean_object* v_00_u03b2_938_, lean_object* v_x_939_, lean_object* v_x_940_, lean_object* v_x_941_){
_start:
{
size_t v_x_2489__boxed_942_; size_t v_x_2490__boxed_943_; lean_object* v_res_944_; 
v_x_2489__boxed_942_ = lean_unbox_usize(v_x_940_);
lean_dec(v_x_940_);
v_x_2490__boxed_943_ = lean_unbox_usize(v_x_941_);
lean_dec(v_x_941_);
v_res_944_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6(v_00_u03b2_938_, v_x_939_, v_x_2489__boxed_942_, v_x_2490__boxed_943_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_945_, lean_object* v_keys_946_, lean_object* v_vals_947_, lean_object* v_heq_948_, lean_object* v_i_949_, size_t v_k_950_){
_start:
{
lean_object* v___x_951_; 
v___x_951_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___redArg(v_keys_946_, v_vals_947_, v_i_949_, v_k_950_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_952_, lean_object* v_keys_953_, lean_object* v_vals_954_, lean_object* v_heq_955_, lean_object* v_i_956_, lean_object* v_k_957_){
_start:
{
size_t v_k_boxed_958_; lean_object* v_res_959_; 
v_k_boxed_958_ = lean_unbox_usize(v_k_957_);
lean_dec(v_k_957_);
v_res_959_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1(v_00_u03b2_952_, v_keys_953_, v_vals_954_, v_heq_955_, v_i_956_, v_k_boxed_958_);
lean_dec_ref(v_vals_954_);
lean_dec_ref(v_keys_953_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_960_, lean_object* v_n_961_, size_t v_k_962_, lean_object* v_v_963_){
_start:
{
lean_object* v___x_964_; 
v___x_964_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___redArg(v_n_961_, v_k_962_, v_v_963_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_965_, lean_object* v_n_966_, lean_object* v_k_967_, lean_object* v_v_968_){
_start:
{
size_t v_k_boxed_969_; lean_object* v_res_970_; 
v_k_boxed_969_ = lean_unbox_usize(v_k_967_);
lean_dec(v_k_967_);
v_res_970_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4(v_00_u03b2_965_, v_n_966_, v_k_boxed_969_, v_v_968_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_971_, size_t v_depth_972_, lean_object* v_keys_973_, lean_object* v_vals_974_, lean_object* v_heq_975_, lean_object* v_i_976_, lean_object* v_entries_977_){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___redArg(v_depth_972_, v_keys_973_, v_vals_974_, v_i_976_, v_entries_977_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_979_, lean_object* v_depth_980_, lean_object* v_keys_981_, lean_object* v_vals_982_, lean_object* v_heq_983_, lean_object* v_i_984_, lean_object* v_entries_985_){
_start:
{
size_t v_depth_boxed_986_; lean_object* v_res_987_; 
v_depth_boxed_986_ = lean_unbox_usize(v_depth_980_);
lean_dec(v_depth_980_);
v_res_987_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5(v_00_u03b2_979_, v_depth_boxed_986_, v_keys_981_, v_vals_982_, v_heq_983_, v_i_984_, v_entries_985_);
lean_dec_ref(v_vals_982_);
lean_dec_ref(v_keys_981_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_988_, lean_object* v_x_989_, lean_object* v_x_990_, size_t v_x_991_, lean_object* v_x_992_){
_start:
{
lean_object* v___x_993_; 
v___x_993_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___redArg(v_x_989_, v_x_990_, v_x_991_, v_x_992_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___boxed(lean_object* v_00_u03b2_994_, lean_object* v_x_995_, lean_object* v_x_996_, lean_object* v_x_997_, lean_object* v_x_998_){
_start:
{
size_t v_x_2507__boxed_999_; lean_object* v_res_1000_; 
v_x_2507__boxed_999_ = lean_unbox_usize(v_x_997_);
lean_dec(v_x_997_);
v_res_1000_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7(v_00_u03b2_994_, v_x_995_, v_x_996_, v_x_2507__boxed_999_, v_x_998_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__0(lean_object* v_inst_1001_, lean_object* v_a_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = lean_apply_1(v_inst_1001_, v_a_1002_);
v___x_1005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
lean_ctor_set(v___x_1005_, 1, v___y_1003_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__1(lean_object* v_inst_1006_, lean_object* v___x_1007_, lean_object* v___x_1008_, lean_object* v_j_1009_, lean_object* v___y_1010_){
_start:
{
lean_object* v___x_1011_; lean_object* v___x_205__overap_1012_; lean_object* v___x_1013_; 
v___x_1011_ = lean_apply_1(v_inst_1006_, v_j_1009_);
v___x_205__overap_1012_ = l_MonadExcept_ofExcept___redArg(v___x_1007_, v___x_1008_, v___x_1011_);
lean_inc_ref(v___y_1010_);
v___x_1013_ = lean_apply_1(v___x_205__overap_1012_, v___y_1010_);
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__1___boxed(lean_object* v_inst_1014_, lean_object* v___x_1015_, lean_object* v___x_1016_, lean_object* v_j_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__1(v_inst_1014_, v___x_1015_, v___x_1016_, v_j_1017_, v___y_1018_);
lean_dec_ref(v___y_1018_);
return v_res_1019_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10(void){
_start:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1039_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9));
v___x_1040_ = l_ReaderT_instMonad___redArg(v___x_1039_);
return v___x_1040_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__11(void){
_start:
{
lean_object* v___x_1041_; lean_object* v___f_1042_; 
v___x_1041_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___f_1042_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_1042_, 0, v___x_1041_);
return v___f_1042_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__12(void){
_start:
{
lean_object* v___x_1043_; lean_object* v___f_1044_; 
v___x_1043_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___f_1044_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_1044_, 0, v___x_1043_);
return v___f_1044_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__13(void){
_start:
{
lean_object* v___x_1045_; lean_object* v___f_1046_; 
v___x_1045_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___f_1046_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_1046_, 0, v___x_1045_);
return v___f_1046_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__14(void){
_start:
{
lean_object* v___x_1047_; lean_object* v___f_1048_; 
v___x_1047_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___f_1048_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_1048_, 0, v___x_1047_);
return v___f_1048_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__15(void){
_start:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1049_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___x_1050_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_1050_, 0, lean_box(0));
lean_closure_set(v___x_1050_, 1, lean_box(0));
lean_closure_set(v___x_1050_, 2, v___x_1049_);
return v___x_1050_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__16(void){
_start:
{
lean_object* v___f_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___f_1051_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__11, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__11_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__11);
v___x_1052_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__15, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__15_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__15);
v___x_1053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
lean_ctor_set(v___x_1053_, 1, v___f_1051_);
return v___x_1053_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__17(void){
_start:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1054_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___x_1055_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_1055_, 0, lean_box(0));
lean_closure_set(v___x_1055_, 1, lean_box(0));
lean_closure_set(v___x_1055_, 2, v___x_1054_);
return v___x_1055_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__18(void){
_start:
{
lean_object* v___f_1056_; lean_object* v___f_1057_; lean_object* v___f_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___f_1056_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__14, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__14_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__14);
v___f_1057_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__13, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__13_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__13);
v___f_1058_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__12, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__12_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__12);
v___x_1059_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__17, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__17_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__17);
v___x_1060_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__16, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__16_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__16);
v___x_1061_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1060_);
lean_ctor_set(v___x_1061_, 1, v___x_1059_);
lean_ctor_set(v___x_1061_, 2, v___f_1058_);
lean_ctor_set(v___x_1061_, 3, v___f_1057_);
lean_ctor_set(v___x_1061_, 4, v___f_1056_);
return v___x_1061_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__19(void){
_start:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1062_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___x_1063_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_1063_, 0, lean_box(0));
lean_closure_set(v___x_1063_, 1, lean_box(0));
lean_closure_set(v___x_1063_, 2, v___x_1062_);
return v___x_1063_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20(void){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1064_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__19, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__19_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__19);
v___x_1065_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__18, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__18_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__18);
v___x_1066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1065_);
lean_ctor_set(v___x_1066_, 1, v___x_1064_);
return v___x_1066_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__21(void){
_start:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1067_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___x_1068_ = lean_alloc_closure((void*)(l_ExceptT_tryCatch), 6, 3);
lean_closure_set(v___x_1068_, 0, lean_box(0));
lean_closure_set(v___x_1068_, 1, lean_box(0));
lean_closure_set(v___x_1068_, 2, v___x_1067_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg(lean_object* v_inst_1069_, lean_object* v_inst_1070_){
_start:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v_toApplicative_1073_; lean_object* v_toPure_1074_; lean_object* v___f_1075_; lean_object* v___f_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___f_1080_; lean_object* v___x_1081_; 
v___x_1071_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___x_1072_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20);
v_toApplicative_1073_ = lean_ctor_get(v___x_1071_, 0);
v_toPure_1074_ = lean_ctor_get(v_toApplicative_1073_, 1);
v___f_1075_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1075_, 0, v_inst_1070_);
lean_inc(v_toPure_1074_);
v___f_1076_ = lean_alloc_closure((void*)(l_instMonadExceptOfExceptTOfMonad___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1076_, 0, v_toPure_1074_);
v___x_1077_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__21, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__21_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__21);
v___x_1078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___f_1076_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
v___x_1079_ = l_instMonadExceptOfMonadExceptOf___redArg(v___x_1078_);
v___f_1080_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1080_, 0, v_inst_1069_);
lean_closure_set(v___f_1080_, 1, v___x_1072_);
lean_closure_set(v___f_1080_, 2, v___x_1079_);
v___x_1081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___f_1075_);
lean_ctor_set(v___x_1081_, 1, v___f_1080_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson(lean_object* v_00_u03b1_1082_, lean_object* v_inst_1083_, lean_object* v_inst_1084_){
_start:
{
lean_object* v___x_1085_; 
v___x_1085_ = l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg(v_inst_1083_, v_inst_1084_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___redArg___lam__0(lean_object* v_inst_1086_, lean_object* v___x_1087_, lean_object* v_v_1088_, lean_object* v___y_1089_){
_start:
{
lean_object* v_fst_1091_; lean_object* v_snd_1092_; 
if (lean_obj_tag(v_v_1088_) == 0)
{
lean_object* v___x_1095_; 
lean_dec_ref(v_inst_1086_);
v___x_1095_ = lean_box(0);
v_fst_1091_ = v___x_1095_;
v_snd_1092_ = v___y_1089_;
goto v___jp_1090_;
}
else
{
lean_object* v_rpcEncode_1096_; lean_object* v_val_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1107_; 
v_rpcEncode_1096_ = lean_ctor_get(v_inst_1086_, 0);
lean_inc_ref(v_rpcEncode_1096_);
lean_dec_ref(v_inst_1086_);
v_val_1097_ = lean_ctor_get(v_v_1088_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v_v_1088_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1099_ = v_v_1088_;
v_isShared_1100_ = v_isSharedCheck_1107_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_val_1097_);
lean_dec(v_v_1088_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1107_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v___x_1101_; lean_object* v_fst_1102_; lean_object* v_snd_1103_; lean_object* v___x_1105_; 
v___x_1101_ = lean_apply_2(v_rpcEncode_1096_, v_val_1097_, v___y_1089_);
v_fst_1102_ = lean_ctor_get(v___x_1101_, 0);
lean_inc(v_fst_1102_);
v_snd_1103_ = lean_ctor_get(v___x_1101_, 1);
lean_inc(v_snd_1103_);
lean_dec_ref(v___x_1101_);
if (v_isShared_1100_ == 0)
{
lean_ctor_set(v___x_1099_, 0, v_fst_1102_);
v___x_1105_ = v___x_1099_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_fst_1102_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
v_fst_1091_ = v___x_1105_;
v_snd_1092_ = v_snd_1103_;
goto v___jp_1090_;
}
}
}
v___jp_1090_:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1093_ = l_Lean_Option_toJson___redArg(v___x_1087_, v_fst_1091_);
v___x_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1093_);
lean_ctor_set(v___x_1094_, 1, v_snd_1092_);
return v___x_1094_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___redArg___lam__1(lean_object* v___f_1110_, lean_object* v_inst_1111_, lean_object* v_j_1112_, lean_object* v___y_1113_){
_start:
{
lean_object* v___x_1114_; 
v___x_1114_ = l_Lean_Option_fromJson_x3f___redArg(v___f_1110_, v_j_1112_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_a_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1122_; 
lean_dec_ref(v_inst_1111_);
v_a_1115_ = lean_ctor_get(v___x_1114_, 0);
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1122_ == 0)
{
v___x_1117_ = v___x_1114_;
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_a_1115_);
lean_dec(v___x_1114_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1120_; 
if (v_isShared_1118_ == 0)
{
v___x_1120_ = v___x_1117_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_a_1115_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
return v___x_1120_;
}
}
}
else
{
lean_object* v_a_1123_; 
v_a_1123_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_a_1123_);
lean_dec_ref_known(v___x_1114_, 1);
if (lean_obj_tag(v_a_1123_) == 0)
{
lean_object* v___x_1124_; 
lean_dec_ref(v_inst_1111_);
v___x_1124_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOption___redArg___lam__1___closed__0));
return v___x_1124_;
}
else
{
lean_object* v_rpcDecode_1125_; lean_object* v_val_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1150_; 
v_rpcDecode_1125_ = lean_ctor_get(v_inst_1111_, 1);
lean_inc_ref(v_rpcDecode_1125_);
lean_dec_ref(v_inst_1111_);
v_val_1126_ = lean_ctor_get(v_a_1123_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v_a_1123_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1128_ = v_a_1123_;
v_isShared_1129_ = v_isSharedCheck_1150_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_val_1126_);
lean_dec(v_a_1123_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1150_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1130_; 
lean_inc_ref(v___y_1113_);
v___x_1130_ = lean_apply_2(v_rpcDecode_1125_, v_val_1126_, v___y_1113_);
if (lean_obj_tag(v___x_1130_) == 0)
{
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1138_; 
lean_del_object(v___x_1128_);
v_a_1131_ = lean_ctor_get(v___x_1130_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1133_ = v___x_1130_;
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___x_1130_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1136_; 
if (v_isShared_1134_ == 0)
{
v___x_1136_ = v___x_1133_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_a_1131_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
else
{
lean_object* v_a_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1149_; 
v_a_1139_ = lean_ctor_get(v___x_1130_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1141_ = v___x_1130_;
v_isShared_1142_ = v_isSharedCheck_1149_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_a_1139_);
lean_dec(v___x_1130_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1149_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1144_; 
if (v_isShared_1129_ == 0)
{
lean_ctor_set(v___x_1128_, 0, v_a_1139_);
v___x_1144_ = v___x_1128_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_a_1139_);
v___x_1144_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
lean_object* v___x_1146_; 
if (v_isShared_1142_ == 0)
{
lean_ctor_set(v___x_1141_, 0, v___x_1144_);
v___x_1146_ = v___x_1141_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v___x_1144_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
return v___x_1146_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___redArg___lam__1___boxed(lean_object* v___f_1151_, lean_object* v_inst_1152_, lean_object* v_j_1153_, lean_object* v___y_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = l_Lean_Server_instRpcEncodableOption___redArg___lam__1(v___f_1151_, v_inst_1152_, v_j_1153_, v___y_1154_);
lean_dec_ref(v___y_1154_);
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___redArg(lean_object* v_inst_1158_){
_start:
{
lean_object* v___x_1159_; lean_object* v___f_1160_; lean_object* v___f_1161_; lean_object* v___f_1162_; lean_object* v___x_1163_; 
v___x_1159_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOption___redArg___closed__0));
lean_inc_ref(v_inst_1158_);
v___f_1160_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableOption___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1160_, 0, v_inst_1158_);
lean_closure_set(v___f_1160_, 1, v___x_1159_);
v___f_1161_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOption___redArg___closed__1));
v___f_1162_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableOption___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1162_, 0, v___f_1161_);
lean_closure_set(v___f_1162_, 1, v_inst_1158_);
v___x_1163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1163_, 0, v___f_1160_);
lean_ctor_set(v___x_1163_, 1, v___f_1162_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption(lean_object* v_00_u03b1_1164_, lean_object* v_inst_1165_){
_start:
{
lean_object* v___x_1166_; 
v___x_1166_ = l_Lean_Server_instRpcEncodableOption___redArg(v_inst_1165_);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg___lam__0(lean_object* v_inst_1167_, lean_object* v___x_1168_, lean_object* v___x_1169_, lean_object* v_a_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v_rpcEncode_1172_; size_t v_sz_1173_; size_t v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_663__overap_1177_; lean_object* v___x_1178_; lean_object* v_fst_1179_; lean_object* v_snd_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1188_; 
v_rpcEncode_1172_ = lean_ctor_get(v_inst_1167_, 0);
lean_inc_ref(v_rpcEncode_1172_);
lean_dec_ref(v_inst_1167_);
v_sz_1173_ = lean_array_size(v_a_1170_);
v___x_1174_ = ((size_t)0ULL);
v___x_1175_ = l_unsafeCast___redArg(v_a_1170_);
v___x_1176_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1168_, v_rpcEncode_1172_, v_sz_1173_, v___x_1174_, v___x_1175_);
v___x_663__overap_1177_ = l_unsafeCast___redArg(v___x_1176_);
lean_dec(v___x_1176_);
v___x_1178_ = lean_apply_1(v___x_663__overap_1177_, v___y_1171_);
v_fst_1179_ = lean_ctor_get(v___x_1178_, 0);
v_snd_1180_ = lean_ctor_get(v___x_1178_, 1);
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1182_ = v___x_1178_;
v_isShared_1183_ = v_isSharedCheck_1188_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_snd_1180_);
lean_inc(v_fst_1179_);
lean_dec(v___x_1178_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1188_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1184_; lean_object* v___x_1186_; 
v___x_1184_ = l_Lean_Array_toJson___redArg(v___x_1169_, v_fst_1179_);
lean_dec(v_fst_1179_);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 0, v___x_1184_);
v___x_1186_ = v___x_1182_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v___x_1184_);
lean_ctor_set(v_reuseFailAlloc_1187_, 1, v_snd_1180_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg___lam__0___boxed(lean_object* v_inst_1189_, lean_object* v___x_1190_, lean_object* v___x_1191_, lean_object* v_a_1192_, lean_object* v___y_1193_){
_start:
{
lean_object* v_res_1194_; 
v_res_1194_ = l_Lean_Server_instRpcEncodableArray___redArg___lam__0(v_inst_1189_, v___x_1190_, v___x_1191_, v_a_1192_, v___y_1193_);
lean_dec_ref(v_a_1192_);
return v_res_1194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg___lam__1(lean_object* v___f_1195_, lean_object* v_inst_1196_, lean_object* v___x_1197_, lean_object* v_b_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v___x_1200_; 
v___x_1200_ = l_Lean_Array_fromJson_x3f___redArg(v___f_1195_, v_b_1198_);
if (lean_obj_tag(v___x_1200_) == 0)
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1208_; 
lean_dec_ref(v___x_1197_);
lean_dec_ref(v_inst_1196_);
v_a_1201_ = lean_ctor_get(v___x_1200_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1203_ = v___x_1200_;
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1200_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1206_; 
if (v_isShared_1204_ == 0)
{
v___x_1206_ = v___x_1203_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v_a_1201_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
else
{
lean_object* v_a_1209_; lean_object* v_rpcDecode_1210_; size_t v_sz_1211_; size_t v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_679__overap_1215_; lean_object* v___x_1216_; 
v_a_1209_ = lean_ctor_get(v___x_1200_, 0);
lean_inc(v_a_1209_);
lean_dec_ref_known(v___x_1200_, 1);
v_rpcDecode_1210_ = lean_ctor_get(v_inst_1196_, 1);
lean_inc_ref(v_rpcDecode_1210_);
lean_dec_ref(v_inst_1196_);
v_sz_1211_ = lean_array_size(v_a_1209_);
v___x_1212_ = ((size_t)0ULL);
v___x_1213_ = l_unsafeCast___redArg(v_a_1209_);
lean_dec(v_a_1209_);
v___x_1214_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1197_, v_rpcDecode_1210_, v_sz_1211_, v___x_1212_, v___x_1213_);
v___x_679__overap_1215_ = l_unsafeCast___redArg(v___x_1214_);
lean_dec(v___x_1214_);
lean_inc_ref(v___y_1199_);
v___x_1216_ = lean_apply_1(v___x_679__overap_1215_, v___y_1199_);
return v___x_1216_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg___lam__1___boxed(lean_object* v___f_1217_, lean_object* v_inst_1218_, lean_object* v___x_1219_, lean_object* v_b_1220_, lean_object* v___y_1221_){
_start:
{
lean_object* v_res_1222_; 
v_res_1222_ = l_Lean_Server_instRpcEncodableArray___redArg___lam__1(v___f_1217_, v_inst_1218_, v___x_1219_, v_b_1220_, v___y_1221_);
lean_dec_ref(v___y_1221_);
return v_res_1222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg(lean_object* v_inst_1249_){
_start:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___f_1252_; lean_object* v___x_1253_; lean_object* v___f_1254_; lean_object* v___f_1255_; lean_object* v___x_1256_; 
v___x_1250_ = ((lean_object*)(l_Lean_Server_instRpcEncodableArray___redArg___closed__9));
v___x_1251_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOption___redArg___closed__0));
lean_inc_ref(v_inst_1249_);
v___f_1252_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableArray___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1252_, 0, v_inst_1249_);
lean_closure_set(v___f_1252_, 1, v___x_1250_);
lean_closure_set(v___f_1252_, 2, v___x_1251_);
v___x_1253_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20);
v___f_1254_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOption___redArg___closed__1));
v___f_1255_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableArray___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1255_, 0, v___f_1254_);
lean_closure_set(v___f_1255_, 1, v_inst_1249_);
lean_closure_set(v___f_1255_, 2, v___x_1253_);
v___x_1256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1256_, 0, v___f_1252_);
lean_ctor_set(v___x_1256_, 1, v___f_1255_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray(lean_object* v_00_u03b1_1257_, lean_object* v_inst_1258_){
_start:
{
lean_object* v___x_1259_; 
v___x_1259_ = l_Lean_Server_instRpcEncodableArray___redArg(v_inst_1258_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___redArg___lam__0(lean_object* v_inst_1260_, lean_object* v_inst_1261_, lean_object* v___x_1262_, lean_object* v_x_1263_, lean_object* v___y_1264_){
_start:
{
lean_object* v_fst_1265_; lean_object* v_snd_1266_; lean_object* v_rpcEncode_1267_; lean_object* v___x_1268_; lean_object* v_fst_1269_; lean_object* v_snd_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1289_; 
v_fst_1265_ = lean_ctor_get(v_x_1263_, 0);
lean_inc(v_fst_1265_);
v_snd_1266_ = lean_ctor_get(v_x_1263_, 1);
lean_inc(v_snd_1266_);
lean_dec_ref(v_x_1263_);
v_rpcEncode_1267_ = lean_ctor_get(v_inst_1260_, 0);
lean_inc_ref(v_rpcEncode_1267_);
lean_dec_ref(v_inst_1260_);
v___x_1268_ = lean_apply_2(v_rpcEncode_1267_, v_fst_1265_, v___y_1264_);
v_fst_1269_ = lean_ctor_get(v___x_1268_, 0);
v_snd_1270_ = lean_ctor_get(v___x_1268_, 1);
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1272_ = v___x_1268_;
v_isShared_1273_ = v_isSharedCheck_1289_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_snd_1270_);
lean_inc(v_fst_1269_);
lean_dec(v___x_1268_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1289_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v_rpcEncode_1274_; lean_object* v___x_1275_; lean_object* v_fst_1276_; lean_object* v_snd_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1288_; 
v_rpcEncode_1274_ = lean_ctor_get(v_inst_1261_, 0);
lean_inc_ref(v_rpcEncode_1274_);
lean_dec_ref(v_inst_1261_);
v___x_1275_ = lean_apply_2(v_rpcEncode_1274_, v_snd_1266_, v_snd_1270_);
v_fst_1276_ = lean_ctor_get(v___x_1275_, 0);
v_snd_1277_ = lean_ctor_get(v___x_1275_, 1);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1275_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1279_ = v___x_1275_;
v_isShared_1280_ = v_isSharedCheck_1288_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_snd_1277_);
lean_inc(v_fst_1276_);
lean_dec(v___x_1275_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1288_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1282_; 
if (v_isShared_1280_ == 0)
{
lean_ctor_set(v___x_1279_, 1, v_fst_1276_);
lean_ctor_set(v___x_1279_, 0, v_fst_1269_);
v___x_1282_ = v___x_1279_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_fst_1269_);
lean_ctor_set(v_reuseFailAlloc_1287_, 1, v_fst_1276_);
v___x_1282_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
lean_object* v___x_1283_; lean_object* v___x_1285_; 
lean_inc_ref(v___x_1262_);
v___x_1283_ = l_Lean_Prod_toJson___redArg(v___x_1262_, v___x_1262_, v___x_1282_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 1, v_snd_1277_);
lean_ctor_set(v___x_1272_, 0, v___x_1283_);
v___x_1285_ = v___x_1272_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v___x_1283_);
lean_ctor_set(v_reuseFailAlloc_1286_, 1, v_snd_1277_);
v___x_1285_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
return v___x_1285_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___redArg___lam__1(lean_object* v___f_1290_, lean_object* v_inst_1291_, lean_object* v_inst_1292_, lean_object* v_j_1293_, lean_object* v___y_1294_){
_start:
{
lean_object* v___x_1295_; 
lean_inc_ref(v___f_1290_);
v___x_1295_ = l_Lean_Prod_fromJson_x3f___redArg(v___f_1290_, v___f_1290_, v_j_1293_);
if (lean_obj_tag(v___x_1295_) == 0)
{
lean_object* v_a_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1303_; 
lean_dec_ref(v_inst_1292_);
lean_dec_ref(v_inst_1291_);
v_a_1296_ = lean_ctor_get(v___x_1295_, 0);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1295_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1298_ = v___x_1295_;
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_a_1296_);
lean_dec(v___x_1295_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1301_; 
if (v_isShared_1299_ == 0)
{
v___x_1301_ = v___x_1298_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_a_1296_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
return v___x_1301_;
}
}
}
else
{
lean_object* v_a_1304_; lean_object* v_fst_1305_; lean_object* v_snd_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1342_; 
v_a_1304_ = lean_ctor_get(v___x_1295_, 0);
lean_inc(v_a_1304_);
lean_dec_ref_known(v___x_1295_, 1);
v_fst_1305_ = lean_ctor_get(v_a_1304_, 0);
v_snd_1306_ = lean_ctor_get(v_a_1304_, 1);
v_isSharedCheck_1342_ = !lean_is_exclusive(v_a_1304_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1308_ = v_a_1304_;
v_isShared_1309_ = v_isSharedCheck_1342_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_snd_1306_);
lean_inc(v_fst_1305_);
lean_dec(v_a_1304_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1342_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v_rpcDecode_1310_; lean_object* v___x_1311_; 
v_rpcDecode_1310_ = lean_ctor_get(v_inst_1291_, 1);
lean_inc_ref(v_rpcDecode_1310_);
lean_dec_ref(v_inst_1291_);
lean_inc_ref(v___y_1294_);
v___x_1311_ = lean_apply_2(v_rpcDecode_1310_, v_fst_1305_, v___y_1294_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1319_; 
lean_del_object(v___x_1308_);
lean_dec(v_snd_1306_);
lean_dec_ref(v_inst_1292_);
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1314_ = v___x_1311_;
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v___x_1311_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1317_; 
if (v_isShared_1315_ == 0)
{
v___x_1317_ = v___x_1314_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_a_1312_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
else
{
lean_object* v_a_1320_; lean_object* v_rpcDecode_1321_; lean_object* v___x_1322_; 
v_a_1320_ = lean_ctor_get(v___x_1311_, 0);
lean_inc(v_a_1320_);
lean_dec_ref_known(v___x_1311_, 1);
v_rpcDecode_1321_ = lean_ctor_get(v_inst_1292_, 1);
lean_inc_ref(v_rpcDecode_1321_);
lean_dec_ref(v_inst_1292_);
lean_inc_ref(v___y_1294_);
v___x_1322_ = lean_apply_2(v_rpcDecode_1321_, v_snd_1306_, v___y_1294_);
if (lean_obj_tag(v___x_1322_) == 0)
{
lean_object* v_a_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1330_; 
lean_dec(v_a_1320_);
lean_del_object(v___x_1308_);
v_a_1323_ = lean_ctor_get(v___x_1322_, 0);
v_isSharedCheck_1330_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1325_ = v___x_1322_;
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_a_1323_);
lean_dec(v___x_1322_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1328_; 
if (v_isShared_1326_ == 0)
{
v___x_1328_ = v___x_1325_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_a_1323_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
else
{
lean_object* v_a_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1341_; 
v_a_1331_ = lean_ctor_get(v___x_1322_, 0);
v_isSharedCheck_1341_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1333_ = v___x_1322_;
v_isShared_1334_ = v_isSharedCheck_1341_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_a_1331_);
lean_dec(v___x_1322_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1341_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v___x_1336_; 
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 1, v_a_1331_);
lean_ctor_set(v___x_1308_, 0, v_a_1320_);
v___x_1336_ = v___x_1308_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_a_1320_);
lean_ctor_set(v_reuseFailAlloc_1340_, 1, v_a_1331_);
v___x_1336_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
lean_object* v___x_1338_; 
if (v_isShared_1334_ == 0)
{
lean_ctor_set(v___x_1333_, 0, v___x_1336_);
v___x_1338_ = v___x_1333_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v___x_1336_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___redArg___lam__1___boxed(lean_object* v___f_1343_, lean_object* v_inst_1344_, lean_object* v_inst_1345_, lean_object* v_j_1346_, lean_object* v___y_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = l_Lean_Server_instRpcEncodableProd___redArg___lam__1(v___f_1343_, v_inst_1344_, v_inst_1345_, v_j_1346_, v___y_1347_);
lean_dec_ref(v___y_1347_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___redArg(lean_object* v_inst_1349_, lean_object* v_inst_1350_){
_start:
{
lean_object* v___x_1351_; lean_object* v___f_1352_; lean_object* v___f_1353_; lean_object* v___f_1354_; lean_object* v___x_1355_; 
v___x_1351_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOption___redArg___closed__0));
lean_inc_ref(v_inst_1350_);
lean_inc_ref(v_inst_1349_);
v___f_1352_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableProd___redArg___lam__0), 5, 3);
lean_closure_set(v___f_1352_, 0, v_inst_1349_);
lean_closure_set(v___f_1352_, 1, v_inst_1350_);
lean_closure_set(v___f_1352_, 2, v___x_1351_);
v___f_1353_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOption___redArg___closed__1));
v___f_1354_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableProd___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1354_, 0, v___f_1353_);
lean_closure_set(v___f_1354_, 1, v_inst_1349_);
lean_closure_set(v___f_1354_, 2, v_inst_1350_);
v___x_1355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1355_, 0, v___f_1352_);
lean_ctor_set(v___x_1355_, 1, v___f_1354_);
return v___x_1355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd(lean_object* v_00_u03b1_1356_, lean_object* v_00_u03b2_1357_, lean_object* v_inst_1358_, lean_object* v_inst_1359_){
_start:
{
lean_object* v___x_1360_; 
v___x_1360_ = l_Lean_Server_instRpcEncodableProd___redArg(v_inst_1358_, v_inst_1359_);
return v___x_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__0(lean_object* v_inst_1361_, lean_object* v_fn_1362_, lean_object* v___y_1363_){
_start:
{
lean_object* v_rpcEncode_1364_; lean_object* v___x_1365_; lean_object* v_fst_1366_; lean_object* v_snd_1367_; lean_object* v___x_1368_; 
v_rpcEncode_1364_ = lean_ctor_get(v_inst_1361_, 0);
lean_inc_ref(v_rpcEncode_1364_);
lean_dec_ref(v_inst_1361_);
v___x_1365_ = lean_apply_1(v_fn_1362_, v___y_1363_);
v_fst_1366_ = lean_ctor_get(v___x_1365_, 0);
lean_inc(v_fst_1366_);
v_snd_1367_ = lean_ctor_get(v___x_1365_, 1);
lean_inc(v_snd_1367_);
lean_dec_ref(v___x_1365_);
v___x_1368_ = lean_apply_2(v_rpcEncode_1364_, v_fst_1366_, v_snd_1367_);
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__1(lean_object* v_inst_1369_, lean_object* v___x_1370_, lean_object* v_j_1371_, lean_object* v___y_1372_){
_start:
{
lean_object* v_rpcDecode_1373_; lean_object* v___x_1374_; 
v_rpcDecode_1373_ = lean_ctor_get(v_inst_1369_, 1);
lean_inc_ref(v_rpcDecode_1373_);
lean_dec_ref(v_inst_1369_);
lean_inc_ref(v___y_1372_);
v___x_1374_ = lean_apply_2(v_rpcDecode_1373_, v_j_1371_, v___y_1372_);
if (lean_obj_tag(v___x_1374_) == 0)
{
lean_object* v_a_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1382_; 
lean_dec_ref(v___x_1370_);
v_a_1375_ = lean_ctor_get(v___x_1374_, 0);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1374_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1377_ = v___x_1374_;
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_a_1375_);
lean_dec(v___x_1374_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1380_; 
if (v_isShared_1378_ == 0)
{
v___x_1380_ = v___x_1377_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v_a_1375_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
return v___x_1380_;
}
}
}
else
{
lean_object* v_a_1383_; lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1391_; 
v_a_1383_ = lean_ctor_get(v___x_1374_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v___x_1374_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1385_ = v___x_1374_;
v_isShared_1386_ = v_isSharedCheck_1391_;
goto v_resetjp_1384_;
}
else
{
lean_inc(v_a_1383_);
lean_dec(v___x_1374_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1391_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v___x_1387_; lean_object* v___x_1389_; 
v___x_1387_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 5);
lean_closure_set(v___x_1387_, 0, lean_box(0));
lean_closure_set(v___x_1387_, 1, lean_box(0));
lean_closure_set(v___x_1387_, 2, v___x_1370_);
lean_closure_set(v___x_1387_, 3, lean_box(0));
lean_closure_set(v___x_1387_, 4, v_a_1383_);
if (v_isShared_1386_ == 0)
{
lean_ctor_set(v___x_1385_, 0, v___x_1387_);
v___x_1389_ = v___x_1385_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v___x_1387_);
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
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__1___boxed(lean_object* v_inst_1392_, lean_object* v___x_1393_, lean_object* v_j_1394_, lean_object* v___y_1395_){
_start:
{
lean_object* v_res_1396_; 
v_res_1396_ = l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__1(v_inst_1392_, v___x_1393_, v_j_1394_, v___y_1395_);
lean_dec_ref(v___y_1395_);
return v_res_1396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg(lean_object* v_inst_1397_){
_start:
{
lean_object* v___f_1398_; lean_object* v___x_1399_; lean_object* v___f_1400_; lean_object* v___x_1401_; 
lean_inc_ref(v_inst_1397_);
v___f_1398_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1398_, 0, v_inst_1397_);
v___x_1399_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9));
v___f_1400_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1400_, 0, v_inst_1397_);
lean_closure_set(v___f_1400_, 1, v___x_1399_);
v___x_1401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1401_, 0, v___f_1398_);
lean_ctor_set(v___x_1401_, 1, v___f_1400_);
return v___x_1401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore(lean_object* v_00_u03b1_1402_, lean_object* v_inst_1403_){
_start:
{
lean_object* v___x_1404_; 
v___x_1404_ = l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg(v_inst_1403_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___redArg(lean_object* v_inst_1405_, lean_object* v_r_1406_, lean_object* v_a_1407_){
_start:
{
lean_object* v___x_1408_; lean_object* v_fst_1409_; lean_object* v_snd_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1429_; 
v___x_1408_ = l_Lean_Server_rpcStoreRef___redArg(v_inst_1405_, v_r_1406_, v_a_1407_);
v_fst_1409_ = lean_ctor_get(v___x_1408_, 0);
v_snd_1410_ = lean_ctor_get(v___x_1408_, 1);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1408_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1412_ = v___x_1408_;
v_isShared_1413_ = v_isSharedCheck_1429_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_snd_1410_);
lean_inc(v_fst_1409_);
lean_dec(v___x_1408_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1429_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___y_1415_; uint8_t v_wireFormat_1426_; 
v_wireFormat_1426_ = lean_ctor_get_uint8(v_snd_1410_, sizeof(void*)*3);
if (v_wireFormat_1426_ == 0)
{
lean_object* v___x_1427_; 
v___x_1427_ = ((lean_object*)(l_Lean_Lsp_RpcWireFormat_refFieldName___closed__0));
v___y_1415_ = v___x_1427_;
goto v___jp_1414_;
}
else
{
lean_object* v___x_1428_; 
v___x_1428_ = ((lean_object*)(l_Lean_Lsp_RpcWireFormat_refFieldName___closed__1));
v___y_1415_ = v___x_1428_;
goto v___jp_1414_;
}
v___jp_1414_:
{
size_t v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1420_; 
v___x_1416_ = lean_unbox_usize(v_fst_1409_);
lean_dec(v_fst_1409_);
v___x_1417_ = lean_usize_to_nat(v___x_1416_);
v___x_1418_ = l_Lean_bignumToJson(v___x_1417_);
lean_inc_ref(v___y_1415_);
if (v_isShared_1413_ == 0)
{
lean_ctor_set(v___x_1412_, 1, v___x_1418_);
lean_ctor_set(v___x_1412_, 0, v___y_1415_);
v___x_1420_ = v___x_1412_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v___y_1415_);
lean_ctor_set(v_reuseFailAlloc_1425_, 1, v___x_1418_);
v___x_1420_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1421_ = lean_box(0);
v___x_1422_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1420_);
lean_ctor_set(v___x_1422_, 1, v___x_1421_);
v___x_1423_ = l_Lean_Json_mkObj(v___x_1422_);
lean_dec_ref_known(v___x_1422_, 2);
v___x_1424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
lean_ctor_set(v___x_1424_, 1, v_snd_1410_);
return v___x_1424_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___redArg___boxed(lean_object* v_inst_1430_, lean_object* v_r_1431_, lean_object* v_a_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___redArg(v_inst_1430_, v_r_1431_, v_a_1432_);
lean_dec_ref(v_r_1431_);
lean_dec(v_inst_1430_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode(lean_object* v_00_u03b1_1434_, lean_object* v_inst_1435_, lean_object* v_r_1436_, lean_object* v_a_1437_){
_start:
{
lean_object* v___x_1438_; 
v___x_1438_ = l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___redArg(v_inst_1435_, v_r_1436_, v_a_1437_);
return v___x_1438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___boxed(lean_object* v_00_u03b1_1439_, lean_object* v_inst_1440_, lean_object* v_r_1441_, lean_object* v_a_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode(v_00_u03b1_1439_, v_inst_1440_, v_r_1441_, v_a_1442_);
lean_dec_ref(v_r_1441_);
lean_dec(v_inst_1440_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg(lean_object* v_inst_1445_, lean_object* v_j_1446_, lean_object* v_a_1447_){
_start:
{
uint8_t v_wireFormat_1448_; lean_object* v___x_1449_; lean_object* v___y_1451_; 
v_wireFormat_1448_ = lean_ctor_get_uint8(v_a_1447_, sizeof(void*)*3);
v___x_1449_ = ((lean_object*)(l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg___closed__0));
if (v_wireFormat_1448_ == 0)
{
lean_object* v___x_1464_; 
v___x_1464_ = ((lean_object*)(l_Lean_Lsp_RpcWireFormat_refFieldName___closed__0));
v___y_1451_ = v___x_1464_;
goto v___jp_1450_;
}
else
{
lean_object* v___x_1465_; 
v___x_1465_ = ((lean_object*)(l_Lean_Lsp_RpcWireFormat_refFieldName___closed__1));
v___y_1451_ = v___x_1465_;
goto v___jp_1450_;
}
v___jp_1450_:
{
lean_object* v___x_1452_; 
v___x_1452_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_1446_, v___x_1449_, v___y_1451_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v_a_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1460_; 
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1455_ = v___x_1452_;
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_a_1453_);
lean_dec(v___x_1452_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1458_; 
if (v_isShared_1456_ == 0)
{
v___x_1458_ = v___x_1455_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_a_1453_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
else
{
lean_object* v_a_1461_; size_t v___x_1462_; lean_object* v___x_1463_; 
v_a_1461_ = lean_ctor_get(v___x_1452_, 0);
lean_inc(v_a_1461_);
lean_dec_ref_known(v___x_1452_, 1);
v___x_1462_ = lean_unbox_usize(v_a_1461_);
lean_dec(v_a_1461_);
v___x_1463_ = l_Lean_Server_rpcGetRef___redArg(v_inst_1445_, v___x_1462_, v_a_1447_);
return v___x_1463_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg___boxed(lean_object* v_inst_1466_, lean_object* v_j_1467_, lean_object* v_a_1468_){
_start:
{
lean_object* v_res_1469_; 
v_res_1469_ = l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg(v_inst_1466_, v_j_1467_, v_a_1468_);
lean_dec_ref(v_a_1468_);
lean_dec(v_inst_1466_);
return v_res_1469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode(lean_object* v_00_u03b1_1470_, lean_object* v_inst_1471_, lean_object* v_j_1472_, lean_object* v_a_1473_){
_start:
{
lean_object* v___x_1474_; 
v___x_1474_ = l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg(v_inst_1471_, v_j_1472_, v_a_1473_);
return v___x_1474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___boxed(lean_object* v_00_u03b1_1475_, lean_object* v_inst_1476_, lean_object* v_j_1477_, lean_object* v_a_1478_){
_start:
{
lean_object* v_res_1479_; 
v_res_1479_ = l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode(v_00_u03b1_1475_, v_inst_1476_, v_j_1477_, v_a_1478_);
lean_dec_ref(v_a_1478_);
lean_dec(v_inst_1476_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName___redArg(lean_object* v_inst_1480_){
_start:
{
lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; 
lean_inc(v_inst_1480_);
v___x_1481_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___boxed), 4, 2);
lean_closure_set(v___x_1481_, 0, lean_box(0));
lean_closure_set(v___x_1481_, 1, v_inst_1480_);
v___x_1482_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___boxed), 4, 2);
lean_closure_set(v___x_1482_, 0, lean_box(0));
lean_closure_set(v___x_1482_, 1, v_inst_1480_);
v___x_1483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1483_, 0, v___x_1481_);
lean_ctor_set(v___x_1483_, 1, v___x_1482_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName(lean_object* v_00_u03b1_1484_, lean_object* v_inst_1485_){
_start:
{
lean_object* v___x_1486_; 
v___x_1486_ = l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName___redArg(v_inst_1485_);
return v___x_1486_;
}
}
lean_object* runtime_initialize_Init_Dynamic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Json_FromToJson_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Rpc_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Dynamic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Json_FromToJson_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Lsp_instInhabitedRpcRef_default = _init_l_Lean_Lsp_instInhabitedRpcRef_default();
l_Lean_Lsp_instInhabitedRpcRef = _init_l_Lean_Lsp_instInhabitedRpcRef();
res = l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Server_freshWithRpcRefId = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Server_freshWithRpcRefId);
lean_dec_ref(res);
l_Lean_Server_rpcStoreRef___redArg___boxed__const__1 = _init_l_Lean_Server_rpcStoreRef___redArg___boxed__const__1();
lean_mark_persistent(l_Lean_Server_rpcStoreRef___redArg___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Rpc_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Dynamic(uint8_t builtin);
lean_object* initialize_Lean_Data_Json_FromToJson_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Rpc_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Dynamic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json_FromToJson_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Rpc_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Rpc_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Rpc_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

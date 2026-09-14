// Lean compiler output
// Module: Lean.Compiler.ClosedTermCache
// Imports: public import Lean.Environment
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
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_EnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedClosedTermCache_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedClosedTermCache_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedClosedTermCache_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedClosedTermCache_default___closed__1;
static lean_once_cell_t l_Lean_instInhabitedClosedTermCache_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedClosedTermCache_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_instInhabitedClosedTermCache_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedClosedTermCache;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Data.PersistentHashMap"};
static const lean_object* l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__0 = (const lean_object*)&l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__0_value;
static const lean_string_object l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.PersistentHashMap.find!"};
static const lean_object* l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__1_value;
static const lean_string_object l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "key is not in the map"};
static const lean_object* l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___lam__0_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___lam__0_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___lam__1_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___lam__1_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___closed__0_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___lam__0_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___closed__0_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___closed__0_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___closed__2_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___closed__0_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___closed__2_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___closed__2_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_closedTermCacheExt;
LEAN_EXPORT lean_object* l_Lean_cacheClosedTermName___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_cacheClosedTermName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_cacheClosedTermName___closed__0;
LEAN_EXPORT lean_object* l_Lean_cacheClosedTermName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getClosedTermName_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getClosedTermName_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isClosedTermName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isClosedTermName___boxed(lean_object*, lean_object*);
static lean_object* _init_l_Lean_instInhabitedClosedTermCache_default___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1_;
}
}
static lean_object* _init_l_Lean_instInhabitedClosedTermCache_default___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_instInhabitedClosedTermCache_default___closed__0, &l_Lean_instInhabitedClosedTermCache_default___closed__0_once, _init_l_Lean_instInhabitedClosedTermCache_default___closed__0);
v___x_3_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_instInhabitedClosedTermCache_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_4_ = lean_box(0);
v___x_5_ = l_Lean_NameSet_empty;
v___x_6_ = lean_obj_once(&l_Lean_instInhabitedClosedTermCache_default___closed__1, &l_Lean_instInhabitedClosedTermCache_default___closed__1_once, _init_l_Lean_instInhabitedClosedTermCache_default___closed__1);
v___x_7_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
lean_ctor_set(v___x_7_, 1, v___x_5_);
lean_ctor_set(v___x_7_, 2, v___x_4_);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_instInhabitedClosedTermCache_default(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_obj_once(&l_Lean_instInhabitedClosedTermCache_default___closed__2, &l_Lean_instInhabitedClosedTermCache_default___closed__2_once, _init_l_Lean_instInhabitedClosedTermCache_default___closed__2);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_instInhabitedClosedTermCache(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = l_Lean_instInhabitedClosedTermCache_default;
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__2(lean_object* v_msg_10_){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = l_Lean_instInhabitedName;
v___x_12_ = lean_panic_fn_borrowed(v___x_11_, v_msg_10_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2_spec__6___redArg(lean_object* v_keys_13_, lean_object* v_vals_14_, lean_object* v_i_15_, lean_object* v_k_16_){
_start:
{
lean_object* v___x_17_; uint8_t v___x_18_; 
v___x_17_ = lean_array_get_size(v_keys_13_);
v___x_18_ = lean_nat_dec_lt(v_i_15_, v___x_17_);
if (v___x_18_ == 0)
{
lean_object* v___x_19_; 
lean_dec(v_i_15_);
v___x_19_ = lean_box(0);
return v___x_19_;
}
else
{
lean_object* v_k_x27_20_; uint8_t v___x_21_; 
v_k_x27_20_ = lean_array_fget_borrowed(v_keys_13_, v_i_15_);
v___x_21_ = lean_expr_eqv(v_k_16_, v_k_x27_20_);
if (v___x_21_ == 0)
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_unsigned_to_nat(1u);
v___x_23_ = lean_nat_add(v_i_15_, v___x_22_);
lean_dec(v_i_15_);
v_i_15_ = v___x_23_;
goto _start;
}
else
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = lean_array_fget_borrowed(v_vals_14_, v_i_15_);
lean_dec(v_i_15_);
lean_inc(v___x_25_);
v___x_26_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
return v___x_26_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2_spec__6___redArg___boxed(lean_object* v_keys_27_, lean_object* v_vals_28_, lean_object* v_i_29_, lean_object* v_k_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2_spec__6___redArg(v_keys_27_, v_vals_28_, v_i_29_, v_k_30_);
lean_dec_ref(v_k_30_);
lean_dec_ref(v_vals_28_);
lean_dec_ref(v_keys_27_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_x_32_, size_t v_x_33_, lean_object* v_x_34_){
_start:
{
if (lean_obj_tag(v_x_32_) == 0)
{
lean_object* v_es_35_; lean_object* v___x_36_; size_t v___x_37_; size_t v___x_38_; lean_object* v_j_39_; lean_object* v___x_40_; 
v_es_35_ = lean_ctor_get(v_x_32_, 0);
v___x_36_ = lean_box(2);
v___x_37_ = ((size_t)31ULL);
v___x_38_ = lean_usize_land(v_x_33_, v___x_37_);
v_j_39_ = lean_usize_to_nat(v___x_38_);
v___x_40_ = lean_array_get_borrowed(v___x_36_, v_es_35_, v_j_39_);
lean_dec(v_j_39_);
switch(lean_obj_tag(v___x_40_))
{
case 0:
{
lean_object* v_key_41_; lean_object* v_val_42_; uint8_t v___x_43_; 
v_key_41_ = lean_ctor_get(v___x_40_, 0);
v_val_42_ = lean_ctor_get(v___x_40_, 1);
v___x_43_ = lean_expr_eqv(v_x_34_, v_key_41_);
if (v___x_43_ == 0)
{
lean_object* v___x_44_; 
v___x_44_ = lean_box(0);
return v___x_44_;
}
else
{
lean_object* v___x_45_; 
lean_inc(v_val_42_);
v___x_45_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_45_, 0, v_val_42_);
return v___x_45_;
}
}
case 1:
{
lean_object* v_node_46_; size_t v___x_47_; size_t v___x_48_; 
v_node_46_ = lean_ctor_get(v___x_40_, 0);
v___x_47_ = ((size_t)5ULL);
v___x_48_ = lean_usize_shift_right(v_x_33_, v___x_47_);
v_x_32_ = v_node_46_;
v_x_33_ = v___x_48_;
goto _start;
}
default: 
{
lean_object* v___x_50_; 
v___x_50_ = lean_box(0);
return v___x_50_;
}
}
}
else
{
lean_object* v_ks_51_; lean_object* v_vs_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v_ks_51_ = lean_ctor_get(v_x_32_, 0);
v_vs_52_ = lean_ctor_get(v_x_32_, 1);
v___x_53_ = lean_unsigned_to_nat(0u);
v___x_54_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2_spec__6___redArg(v_ks_51_, v_vs_52_, v___x_53_, v_x_34_);
return v___x_54_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_x_55_, lean_object* v_x_56_, lean_object* v_x_57_){
_start:
{
size_t v_x_563__boxed_58_; lean_object* v_res_59_; 
v_x_563__boxed_58_ = lean_unbox_usize(v_x_56_);
lean_dec(v_x_56_);
v_res_59_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2___redArg(v_x_55_, v_x_563__boxed_58_, v_x_57_);
lean_dec_ref(v_x_57_);
lean_dec_ref(v_x_55_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1___redArg(lean_object* v_x_60_, lean_object* v_x_61_){
_start:
{
uint64_t v___x_62_; size_t v___x_63_; lean_object* v___x_64_; 
v___x_62_ = l_Lean_Expr_hash(v_x_61_);
v___x_63_ = lean_uint64_to_usize(v___x_62_);
v___x_64_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2___redArg(v_x_60_, v___x_63_, v_x_61_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_x_65_, lean_object* v_x_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1___redArg(v_x_65_, v_x_66_);
lean_dec_ref(v_x_66_);
lean_dec_ref(v_x_65_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(lean_object* v_x_68_, lean_object* v_x_69_, lean_object* v_x_70_, lean_object* v_x_71_){
_start:
{
lean_object* v_ks_72_; lean_object* v_vs_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_97_; 
v_ks_72_ = lean_ctor_get(v_x_68_, 0);
v_vs_73_ = lean_ctor_get(v_x_68_, 1);
v_isSharedCheck_97_ = !lean_is_exclusive(v_x_68_);
if (v_isSharedCheck_97_ == 0)
{
v___x_75_ = v_x_68_;
v_isShared_76_ = v_isSharedCheck_97_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_vs_73_);
lean_inc(v_ks_72_);
lean_dec(v_x_68_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_97_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_77_ = lean_array_get_size(v_ks_72_);
v___x_78_ = lean_nat_dec_lt(v_x_69_, v___x_77_);
if (v___x_78_ == 0)
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_82_; 
lean_dec(v_x_69_);
v___x_79_ = lean_array_push(v_ks_72_, v_x_70_);
v___x_80_ = lean_array_push(v_vs_73_, v_x_71_);
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 1, v___x_80_);
lean_ctor_set(v___x_75_, 0, v___x_79_);
v___x_82_ = v___x_75_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v___x_79_);
lean_ctor_set(v_reuseFailAlloc_83_, 1, v___x_80_);
v___x_82_ = v_reuseFailAlloc_83_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
return v___x_82_;
}
}
else
{
lean_object* v_k_x27_84_; uint8_t v___x_85_; 
v_k_x27_84_ = lean_array_fget_borrowed(v_ks_72_, v_x_69_);
v___x_85_ = lean_expr_eqv(v_x_70_, v_k_x27_84_);
if (v___x_85_ == 0)
{
lean_object* v___x_87_; 
if (v_isShared_76_ == 0)
{
v___x_87_ = v___x_75_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v_ks_72_);
lean_ctor_set(v_reuseFailAlloc_91_, 1, v_vs_73_);
v___x_87_ = v_reuseFailAlloc_91_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_unsigned_to_nat(1u);
v___x_89_ = lean_nat_add(v_x_69_, v___x_88_);
lean_dec(v_x_69_);
v_x_68_ = v___x_87_;
v_x_69_ = v___x_89_;
goto _start;
}
}
else
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_95_; 
v___x_92_ = lean_array_fset(v_ks_72_, v_x_69_, v_x_70_);
v___x_93_ = lean_array_fset(v_vs_73_, v_x_69_, v_x_71_);
lean_dec(v_x_69_);
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 1, v___x_93_);
lean_ctor_set(v___x_75_, 0, v___x_92_);
v___x_95_ = v___x_75_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v___x_92_);
lean_ctor_set(v_reuseFailAlloc_96_, 1, v___x_93_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
return v___x_95_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(lean_object* v_n_98_, lean_object* v_k_99_, lean_object* v_v_100_){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_101_ = lean_unsigned_to_nat(0u);
v___x_102_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(v_n_98_, v___x_101_, v_k_99_, v_v_100_);
return v___x_102_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = lean_box(0);
v___x_104_ = l_unsafeCast___redArg(v___x_103_);
return v___x_104_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_105_; 
v___x_105_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_x_106_, size_t v_x_107_, size_t v_x_108_, lean_object* v_x_109_, lean_object* v_x_110_){
_start:
{
if (lean_obj_tag(v_x_106_) == 0)
{
lean_object* v_es_111_; size_t v___x_112_; size_t v___x_113_; lean_object* v_j_114_; lean_object* v___x_115_; uint8_t v___x_116_; 
v_es_111_ = lean_ctor_get(v_x_106_, 0);
v___x_112_ = ((size_t)31ULL);
v___x_113_ = lean_usize_land(v_x_107_, v___x_112_);
v_j_114_ = lean_usize_to_nat(v___x_113_);
v___x_115_ = lean_array_get_size(v_es_111_);
v___x_116_ = lean_nat_dec_lt(v_j_114_, v___x_115_);
if (v___x_116_ == 0)
{
lean_dec(v_j_114_);
lean_dec(v_x_110_);
lean_dec_ref(v_x_109_);
return v_x_106_;
}
else
{
lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_155_; 
lean_inc_ref(v_es_111_);
v_isSharedCheck_155_ = !lean_is_exclusive(v_x_106_);
if (v_isSharedCheck_155_ == 0)
{
lean_object* v_unused_156_; 
v_unused_156_ = lean_ctor_get(v_x_106_, 0);
lean_dec(v_unused_156_);
v___x_118_ = v_x_106_;
v_isShared_119_ = v_isSharedCheck_155_;
goto v_resetjp_117_;
}
else
{
lean_dec(v_x_106_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_155_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v_v_120_; lean_object* v___x_121_; lean_object* v_xs_x27_122_; lean_object* v___y_124_; 
v_v_120_ = lean_array_fget(v_es_111_, v_j_114_);
v___x_121_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0);
v_xs_x27_122_ = lean_array_fset(v_es_111_, v_j_114_, v___x_121_);
switch(lean_obj_tag(v_v_120_))
{
case 0:
{
lean_object* v_key_129_; lean_object* v_val_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_140_; 
v_key_129_ = lean_ctor_get(v_v_120_, 0);
v_val_130_ = lean_ctor_get(v_v_120_, 1);
v_isSharedCheck_140_ = !lean_is_exclusive(v_v_120_);
if (v_isSharedCheck_140_ == 0)
{
v___x_132_ = v_v_120_;
v_isShared_133_ = v_isSharedCheck_140_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_val_130_);
lean_inc(v_key_129_);
lean_dec(v_v_120_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_140_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
uint8_t v___x_134_; 
v___x_134_ = lean_expr_eqv(v_x_109_, v_key_129_);
if (v___x_134_ == 0)
{
lean_object* v___x_135_; lean_object* v___x_136_; 
lean_del_object(v___x_132_);
v___x_135_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_129_, v_val_130_, v_x_109_, v_x_110_);
v___x_136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
v___y_124_ = v___x_136_;
goto v___jp_123_;
}
else
{
lean_object* v___x_138_; 
lean_dec(v_val_130_);
lean_dec(v_key_129_);
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 1, v_x_110_);
lean_ctor_set(v___x_132_, 0, v_x_109_);
v___x_138_ = v___x_132_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_x_109_);
lean_ctor_set(v_reuseFailAlloc_139_, 1, v_x_110_);
v___x_138_ = v_reuseFailAlloc_139_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
v___y_124_ = v___x_138_;
goto v___jp_123_;
}
}
}
}
case 1:
{
lean_object* v_node_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_153_; 
v_node_141_ = lean_ctor_get(v_v_120_, 0);
v_isSharedCheck_153_ = !lean_is_exclusive(v_v_120_);
if (v_isSharedCheck_153_ == 0)
{
v___x_143_ = v_v_120_;
v_isShared_144_ = v_isSharedCheck_153_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_node_141_);
lean_dec(v_v_120_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_153_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
size_t v___x_145_; size_t v___x_146_; size_t v___x_147_; size_t v___x_148_; lean_object* v___x_149_; lean_object* v___x_151_; 
v___x_145_ = ((size_t)5ULL);
v___x_146_ = lean_usize_shift_right(v_x_107_, v___x_145_);
v___x_147_ = ((size_t)1ULL);
v___x_148_ = lean_usize_add(v_x_108_, v___x_147_);
v___x_149_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg(v_node_141_, v___x_146_, v___x_148_, v_x_109_, v_x_110_);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 0, v___x_149_);
v___x_151_ = v___x_143_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v___x_149_);
v___x_151_ = v_reuseFailAlloc_152_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
v___y_124_ = v___x_151_;
goto v___jp_123_;
}
}
}
default: 
{
lean_object* v___x_154_; 
v___x_154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_154_, 0, v_x_109_);
lean_ctor_set(v___x_154_, 1, v_x_110_);
v___y_124_ = v___x_154_;
goto v___jp_123_;
}
}
v___jp_123_:
{
lean_object* v___x_125_; lean_object* v___x_127_; 
v___x_125_ = lean_array_fset(v_xs_x27_122_, v_j_114_, v___y_124_);
lean_dec(v_j_114_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 0, v___x_125_);
v___x_127_ = v___x_118_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v___x_125_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
}
}
else
{
lean_object* v_ks_157_; lean_object* v_vs_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_176_; 
v_ks_157_ = lean_ctor_get(v_x_106_, 0);
v_vs_158_ = lean_ctor_get(v_x_106_, 1);
v_isSharedCheck_176_ = !lean_is_exclusive(v_x_106_);
if (v_isSharedCheck_176_ == 0)
{
v___x_160_ = v_x_106_;
v_isShared_161_ = v_isSharedCheck_176_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_vs_158_);
lean_inc(v_ks_157_);
lean_dec(v_x_106_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_176_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_163_; 
if (v_isShared_161_ == 0)
{
v___x_163_ = v___x_160_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_ks_157_);
lean_ctor_set(v_reuseFailAlloc_175_, 1, v_vs_158_);
v___x_163_ = v_reuseFailAlloc_175_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
lean_object* v_newNode_164_; size_t v___x_165_; uint8_t v___x_166_; 
v_newNode_164_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v___x_163_, v_x_109_, v_x_110_);
v___x_165_ = ((size_t)7ULL);
v___x_166_ = lean_usize_dec_le(v___x_165_, v_x_108_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; lean_object* v___x_168_; uint8_t v___x_169_; 
v___x_167_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_164_);
v___x_168_ = lean_unsigned_to_nat(4u);
v___x_169_ = lean_nat_dec_lt(v___x_167_, v___x_168_);
lean_dec(v___x_167_);
if (v___x_169_ == 0)
{
lean_object* v_ks_170_; lean_object* v_vs_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v_ks_170_ = lean_ctor_get(v_newNode_164_, 0);
lean_inc_ref(v_ks_170_);
v_vs_171_ = lean_ctor_get(v_newNode_164_, 1);
lean_inc_ref(v_vs_171_);
lean_dec_ref(v_newNode_164_);
v___x_172_ = lean_unsigned_to_nat(0u);
v___x_173_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1);
v___x_174_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__3___redArg(v_x_108_, v_ks_170_, v_vs_171_, v___x_172_, v___x_173_);
lean_dec_ref(v_vs_171_);
lean_dec_ref(v_ks_170_);
return v___x_174_;
}
else
{
return v_newNode_164_;
}
}
else
{
return v_newNode_164_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__3___redArg(size_t v_depth_177_, lean_object* v_keys_178_, lean_object* v_vals_179_, lean_object* v_i_180_, lean_object* v_entries_181_){
_start:
{
lean_object* v___x_182_; uint8_t v___x_183_; 
v___x_182_ = lean_array_get_size(v_keys_178_);
v___x_183_ = lean_nat_dec_lt(v_i_180_, v___x_182_);
if (v___x_183_ == 0)
{
lean_dec(v_i_180_);
return v_entries_181_;
}
else
{
lean_object* v_k_184_; lean_object* v_v_185_; uint64_t v___x_186_; size_t v_h_187_; size_t v___x_188_; lean_object* v___x_189_; size_t v___x_190_; size_t v___x_191_; size_t v___x_192_; size_t v_h_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v_k_184_ = lean_array_fget_borrowed(v_keys_178_, v_i_180_);
v_v_185_ = lean_array_fget_borrowed(v_vals_179_, v_i_180_);
v___x_186_ = l_Lean_Expr_hash(v_k_184_);
v_h_187_ = lean_uint64_to_usize(v___x_186_);
v___x_188_ = ((size_t)5ULL);
v___x_189_ = lean_unsigned_to_nat(1u);
v___x_190_ = ((size_t)1ULL);
v___x_191_ = lean_usize_sub(v_depth_177_, v___x_190_);
v___x_192_ = lean_usize_mul(v___x_188_, v___x_191_);
v_h_193_ = lean_usize_shift_right(v_h_187_, v___x_192_);
v___x_194_ = lean_nat_add(v_i_180_, v___x_189_);
lean_dec(v_i_180_);
lean_inc(v_v_185_);
lean_inc(v_k_184_);
v___x_195_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg(v_entries_181_, v_h_193_, v_depth_177_, v_k_184_, v_v_185_);
v_i_180_ = v___x_194_;
v_entries_181_ = v___x_195_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_depth_197_, lean_object* v_keys_198_, lean_object* v_vals_199_, lean_object* v_i_200_, lean_object* v_entries_201_){
_start:
{
size_t v_depth_boxed_202_; lean_object* v_res_203_; 
v_depth_boxed_202_ = lean_unbox_usize(v_depth_197_);
lean_dec(v_depth_197_);
v_res_203_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__3___redArg(v_depth_boxed_202_, v_keys_198_, v_vals_199_, v_i_200_, v_entries_201_);
lean_dec_ref(v_vals_199_);
lean_dec_ref(v_keys_198_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_x_204_, lean_object* v_x_205_, lean_object* v_x_206_, lean_object* v_x_207_, lean_object* v_x_208_){
_start:
{
size_t v_x_702__boxed_209_; size_t v_x_703__boxed_210_; lean_object* v_res_211_; 
v_x_702__boxed_209_ = lean_unbox_usize(v_x_205_);
lean_dec(v_x_205_);
v_x_703__boxed_210_ = lean_unbox_usize(v_x_206_);
lean_dec(v_x_206_);
v_res_211_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_204_, v_x_702__boxed_209_, v_x_703__boxed_210_, v_x_207_, v_x_208_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0___redArg(lean_object* v_x_212_, lean_object* v_x_213_, lean_object* v_x_214_){
_start:
{
uint64_t v___x_215_; size_t v___x_216_; size_t v___x_217_; lean_object* v___x_218_; 
v___x_215_ = l_Lean_Expr_hash(v_x_213_);
v___x_216_ = lean_uint64_to_usize(v___x_215_);
v___x_217_ = ((size_t)1ULL);
v___x_218_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_212_, v___x_216_, v___x_217_, v_x_213_, v_x_214_);
return v___x_218_;
}
}
static lean_object* _init_l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__3(void){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_222_ = ((lean_object*)(l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__2));
v___x_223_ = lean_unsigned_to_nat(14u);
v___x_224_ = lean_unsigned_to_nat(178u);
v___x_225_ = ((lean_object*)(l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__1));
v___x_226_ = ((lean_object*)(l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__0));
v___x_227_ = l_mkPanicMessageWithDecl(v___x_226_, v___x_225_, v___x_224_, v___x_223_, v___x_222_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3(lean_object* v_newState_228_, lean_object* v_x_229_, lean_object* v_x_230_){
_start:
{
if (lean_obj_tag(v_x_230_) == 0)
{
return v_x_229_;
}
else
{
lean_object* v_head_231_; lean_object* v_tail_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_259_; 
v_head_231_ = lean_ctor_get(v_x_230_, 0);
v_tail_232_ = lean_ctor_get(v_x_230_, 1);
v_isSharedCheck_259_ = !lean_is_exclusive(v_x_230_);
if (v_isSharedCheck_259_ == 0)
{
v___x_234_ = v_x_230_;
v_isShared_235_ = v_isSharedCheck_259_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_tail_232_);
lean_inc(v_head_231_);
lean_dec(v_x_230_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_259_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___y_237_; lean_object* v_map_254_; lean_object* v___x_255_; 
v_map_254_ = lean_ctor_get(v_newState_228_, 0);
v___x_255_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1___redArg(v_map_254_, v_head_231_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_256_ = lean_obj_once(&l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__3, &l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__3_once, _init_l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___closed__3);
v___x_257_ = l_panic___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__2(v___x_256_);
v___y_237_ = v___x_257_;
goto v___jp_236_;
}
else
{
lean_object* v_val_258_; 
v_val_258_ = lean_ctor_get(v___x_255_, 0);
lean_inc(v_val_258_);
lean_dec_ref_known(v___x_255_, 1);
v___y_237_ = v_val_258_;
goto v___jp_236_;
}
v___jp_236_:
{
lean_object* v_map_238_; lean_object* v_constNames_239_; lean_object* v_revExprs_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_253_; 
v_map_238_ = lean_ctor_get(v_x_229_, 0);
v_constNames_239_ = lean_ctor_get(v_x_229_, 1);
v_revExprs_240_ = lean_ctor_get(v_x_229_, 2);
v_isSharedCheck_253_ = !lean_is_exclusive(v_x_229_);
if (v_isSharedCheck_253_ == 0)
{
v___x_242_ = v_x_229_;
v_isShared_243_ = v_isSharedCheck_253_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_revExprs_240_);
lean_inc(v_constNames_239_);
lean_inc(v_map_238_);
lean_dec(v_x_229_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_253_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_247_; 
lean_inc(v___y_237_);
lean_inc(v_head_231_);
v___x_244_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0___redArg(v_map_238_, v_head_231_, v___y_237_);
v___x_245_ = l_Lean_NameSet_insert(v_constNames_239_, v___y_237_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 1, v_revExprs_240_);
v___x_247_ = v___x_234_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v_head_231_);
lean_ctor_set(v_reuseFailAlloc_252_, 1, v_revExprs_240_);
v___x_247_ = v_reuseFailAlloc_252_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
lean_object* v___x_249_; 
if (v_isShared_243_ == 0)
{
lean_ctor_set(v___x_242_, 2, v___x_247_);
lean_ctor_set(v___x_242_, 1, v___x_245_);
lean_ctor_set(v___x_242_, 0, v___x_244_);
v___x_249_ = v___x_242_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v___x_244_);
lean_ctor_set(v_reuseFailAlloc_251_, 1, v___x_245_);
lean_ctor_set(v_reuseFailAlloc_251_, 2, v___x_247_);
v___x_249_ = v_reuseFailAlloc_251_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
v_x_229_ = v___x_249_;
v_x_230_ = v_tail_232_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3___boxed(lean_object* v_newState_260_, lean_object* v_x_261_, lean_object* v_x_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3(v_newState_260_, v_x_261_, v_x_262_);
lean_dec_ref(v_newState_260_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___lam__0_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_(lean_object* v_oldState_266_, lean_object* v_newState_267_, lean_object* v_x_268_, lean_object* v_s_269_){
_start:
{
lean_object* v_revExprs_270_; lean_object* v_revExprs_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v_newExprs_276_; lean_object* v___x_277_; 
v_revExprs_270_ = lean_ctor_get(v_newState_267_, 2);
v_revExprs_271_ = lean_ctor_get(v_oldState_266_, 2);
v___x_272_ = l_List_lengthTR___redArg(v_revExprs_270_);
v___x_273_ = l_List_lengthTR___redArg(v_revExprs_271_);
v___x_274_ = lean_nat_sub(v___x_272_, v___x_273_);
lean_dec(v___x_273_);
lean_dec(v___x_272_);
v___x_275_ = ((lean_object*)(l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_));
lean_inc(v_revExprs_270_);
v_newExprs_276_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_revExprs_270_, v_revExprs_270_, v___x_274_, v___x_275_);
v___x_277_ = l_List_foldl___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__3(v_newState_267_, v_s_269_, v_newExprs_276_);
lean_dec_ref(v_newState_267_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___lam__0_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2____boxed(lean_object* v_oldState_278_, lean_object* v_newState_279_, lean_object* v_x_280_, lean_object* v_s_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___lam__0_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_(v_oldState_278_, v_newState_279_, v_x_280_, v_s_281_);
lean_dec(v_x_280_);
lean_dec_ref(v_oldState_278_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___lam__1_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_(lean_object* v___x_283_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_285_, 0, v___x_283_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___lam__1_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2____boxed(lean_object* v___x_286_, lean_object* v___y_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___lam__1_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_(v___x_286_);
return v_res_288_;
}
}
static lean_object* _init_l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_290_; lean_object* v___f_291_; 
v___x_290_ = lean_obj_once(&l_Lean_instInhabitedClosedTermCache_default___closed__2, &l_Lean_instInhabitedClosedTermCache_default___closed__2_once, _init_l_Lean_instInhabitedClosedTermCache_default___closed__2);
v___f_291_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___lam__1_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_291_, 0, v___x_290_);
return v___f_291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___f_295_ = lean_obj_once(&l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_, &l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_);
v___x_296_ = ((lean_object*)(l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn___closed__2_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_));
v___x_297_ = lean_box(0);
v___x_298_ = l_Lean_registerEnvExtension___redArg(v___f_295_, v___x_296_, v___x_297_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2____boxed(lean_object* v_a_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_();
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_301_, lean_object* v_x_302_, lean_object* v_x_303_, lean_object* v_x_304_){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0___redArg(v_x_302_, v_x_303_, v_x_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b2_306_, lean_object* v_x_307_, lean_object* v_x_308_){
_start:
{
lean_object* v___x_309_; 
v___x_309_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1___redArg(v_x_307_, v_x_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1___boxed(lean_object* v_00_u03b2_310_, lean_object* v_x_311_, lean_object* v_x_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1(v_00_u03b2_310_, v_x_311_, v_x_312_);
lean_dec_ref(v_x_312_);
lean_dec_ref(v_x_311_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_314_, lean_object* v_x_315_, size_t v_x_316_, size_t v_x_317_, lean_object* v_x_318_, lean_object* v_x_319_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_315_, v_x_316_, v_x_317_, v_x_318_, v_x_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_321_, lean_object* v_x_322_, lean_object* v_x_323_, lean_object* v_x_324_, lean_object* v_x_325_, lean_object* v_x_326_){
_start:
{
size_t v_x_1029__boxed_327_; size_t v_x_1030__boxed_328_; lean_object* v_res_329_; 
v_x_1029__boxed_327_ = lean_unbox_usize(v_x_323_);
lean_dec(v_x_323_);
v_x_1030__boxed_328_ = lean_unbox_usize(v_x_324_);
lean_dec(v_x_324_);
v_res_329_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_321_, v_x_322_, v_x_1029__boxed_327_, v_x_1030__boxed_328_, v_x_325_, v_x_326_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_00_u03b2_330_, lean_object* v_x_331_, size_t v_x_332_, lean_object* v_x_333_){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2___redArg(v_x_331_, v_x_332_, v_x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_00_u03b2_335_, lean_object* v_x_336_, lean_object* v_x_337_, lean_object* v_x_338_){
_start:
{
size_t v_x_1046__boxed_339_; lean_object* v_res_340_; 
v_x_1046__boxed_339_ = lean_unbox_usize(v_x_337_);
lean_dec(v_x_337_);
v_res_340_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2(v_00_u03b2_335_, v_x_336_, v_x_1046__boxed_339_, v_x_338_);
lean_dec_ref(v_x_338_);
lean_dec_ref(v_x_336_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__2(lean_object* v_00_u03b2_341_, lean_object* v_n_342_, lean_object* v_k_343_, lean_object* v_v_344_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_n_342_, v_k_343_, v_v_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__3(lean_object* v_00_u03b2_346_, size_t v_depth_347_, lean_object* v_keys_348_, lean_object* v_vals_349_, lean_object* v_heq_350_, lean_object* v_i_351_, lean_object* v_entries_352_){
_start:
{
lean_object* v___x_353_; 
v___x_353_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__3___redArg(v_depth_347_, v_keys_348_, v_vals_349_, v_i_351_, v_entries_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_354_, lean_object* v_depth_355_, lean_object* v_keys_356_, lean_object* v_vals_357_, lean_object* v_heq_358_, lean_object* v_i_359_, lean_object* v_entries_360_){
_start:
{
size_t v_depth_boxed_361_; lean_object* v_res_362_; 
v_depth_boxed_361_ = lean_unbox_usize(v_depth_355_);
lean_dec(v_depth_355_);
v_res_362_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__3(v_00_u03b2_354_, v_depth_boxed_361_, v_keys_356_, v_vals_357_, v_heq_358_, v_i_359_, v_entries_360_);
lean_dec_ref(v_vals_357_);
lean_dec_ref(v_keys_356_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2_spec__6(lean_object* v_00_u03b2_363_, lean_object* v_keys_364_, lean_object* v_vals_365_, lean_object* v_heq_366_, lean_object* v_i_367_, lean_object* v_k_368_){
_start:
{
lean_object* v___x_369_; 
v___x_369_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2_spec__6___redArg(v_keys_364_, v_vals_365_, v_i_367_, v_k_368_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2_spec__6___boxed(lean_object* v_00_u03b2_370_, lean_object* v_keys_371_, lean_object* v_vals_372_, lean_object* v_heq_373_, lean_object* v_i_374_, lean_object* v_k_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1_spec__2_spec__6(v_00_u03b2_370_, v_keys_371_, v_vals_372_, v_heq_373_, v_i_374_, v_k_375_);
lean_dec_ref(v_k_375_);
lean_dec_ref(v_vals_372_);
lean_dec_ref(v_keys_371_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_377_, lean_object* v_x_378_, lean_object* v_x_379_, lean_object* v_x_380_, lean_object* v_x_381_){
_start:
{
lean_object* v___x_382_; 
v___x_382_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(v_x_378_, v_x_379_, v_x_380_, v_x_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_cacheClosedTermName___lam__0(lean_object* v_e_383_, lean_object* v_n_384_, lean_object* v_s_385_){
_start:
{
lean_object* v_map_386_; lean_object* v_constNames_387_; lean_object* v_revExprs_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_398_; 
v_map_386_ = lean_ctor_get(v_s_385_, 0);
v_constNames_387_ = lean_ctor_get(v_s_385_, 1);
v_revExprs_388_ = lean_ctor_get(v_s_385_, 2);
v_isSharedCheck_398_ = !lean_is_exclusive(v_s_385_);
if (v_isSharedCheck_398_ == 0)
{
v___x_390_ = v_s_385_;
v_isShared_391_ = v_isSharedCheck_398_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_revExprs_388_);
lean_inc(v_constNames_387_);
lean_inc(v_map_386_);
lean_dec(v_s_385_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_398_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_396_; 
lean_inc(v_n_384_);
lean_inc_ref(v_e_383_);
v___x_392_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__0___redArg(v_map_386_, v_e_383_, v_n_384_);
v___x_393_ = l_Lean_NameSet_insert(v_constNames_387_, v_n_384_);
v___x_394_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_394_, 0, v_e_383_);
lean_ctor_set(v___x_394_, 1, v_revExprs_388_);
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 2, v___x_394_);
lean_ctor_set(v___x_390_, 1, v___x_393_);
lean_ctor_set(v___x_390_, 0, v___x_392_);
v___x_396_ = v___x_390_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v___x_392_);
lean_ctor_set(v_reuseFailAlloc_397_, 1, v___x_393_);
lean_ctor_set(v_reuseFailAlloc_397_, 2, v___x_394_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
}
static lean_object* _init_l_Lean_cacheClosedTermName___closed__0(void){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_399_ = lean_box(0);
v___x_400_ = l_unsafeCast___redArg(v___x_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_cacheClosedTermName(lean_object* v_env_401_, lean_object* v_e_402_, lean_object* v_n_403_){
_start:
{
lean_object* v___x_404_; lean_object* v_asyncMode_405_; lean_object* v___f_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_404_ = l_Lean_closedTermCacheExt;
v_asyncMode_405_ = lean_ctor_get(v___x_404_, 2);
v___f_406_ = lean_alloc_closure((void*)(l_Lean_cacheClosedTermName___lam__0), 3, 2);
lean_closure_set(v___f_406_, 0, v_e_402_);
lean_closure_set(v___f_406_, 1, v_n_403_);
v___x_407_ = lean_obj_once(&l_Lean_cacheClosedTermName___closed__0, &l_Lean_cacheClosedTermName___closed__0_once, _init_l_Lean_cacheClosedTermName___closed__0);
v___x_408_ = l_Lean_EnvExtension_modifyState___redArg(v___x_404_, v_env_401_, v___f_406_, v_asyncMode_405_, v___x_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_getClosedTermName_x3f(lean_object* v_env_409_, lean_object* v_e_410_){
_start:
{
lean_object* v___x_411_; lean_object* v_asyncMode_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v_map_416_; lean_object* v___x_417_; 
v___x_411_ = l_Lean_closedTermCacheExt;
v_asyncMode_412_ = lean_ctor_get(v___x_411_, 2);
v___x_413_ = l_Lean_instInhabitedClosedTermCache_default;
v___x_414_ = lean_obj_once(&l_Lean_cacheClosedTermName___closed__0, &l_Lean_cacheClosedTermName___closed__0_once, _init_l_Lean_cacheClosedTermName___closed__0);
v___x_415_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_413_, v___x_411_, v_env_409_, v_asyncMode_412_, v___x_414_);
v_map_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc_ref(v_map_416_);
lean_dec(v___x_415_);
v___x_417_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2__spec__1___redArg(v_map_416_, v_e_410_);
lean_dec_ref(v_map_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_getClosedTermName_x3f___boxed(lean_object* v_env_418_, lean_object* v_e_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Lean_getClosedTermName_x3f(v_env_418_, v_e_419_);
lean_dec_ref(v_e_419_);
return v_res_420_;
}
}
LEAN_EXPORT uint8_t l_Lean_isClosedTermName(lean_object* v_env_421_, lean_object* v_n_422_){
_start:
{
lean_object* v___x_423_; lean_object* v_asyncMode_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v_constNames_428_; uint8_t v___x_429_; 
v___x_423_ = l_Lean_closedTermCacheExt;
v_asyncMode_424_ = lean_ctor_get(v___x_423_, 2);
v___x_425_ = l_Lean_instInhabitedClosedTermCache_default;
v___x_426_ = lean_obj_once(&l_Lean_cacheClosedTermName___closed__0, &l_Lean_cacheClosedTermName___closed__0_once, _init_l_Lean_cacheClosedTermName___closed__0);
v___x_427_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_425_, v___x_423_, v_env_421_, v_asyncMode_424_, v___x_426_);
v_constNames_428_ = lean_ctor_get(v___x_427_, 1);
lean_inc(v_constNames_428_);
lean_dec(v___x_427_);
v___x_429_ = l_Lean_NameSet_contains(v_constNames_428_, v_n_422_);
lean_dec(v_constNames_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_isClosedTermName___boxed(lean_object* v_env_430_, lean_object* v_n_431_){
_start:
{
uint8_t v_res_432_; lean_object* v_r_433_; 
v_res_432_ = l_Lean_isClosedTermName(v_env_430_, v_n_431_);
lean_dec(v_n_431_);
v_r_433_ = lean_box(v_res_432_);
return v_r_433_;
}
}
lean_object* runtime_initialize_Lean_Environment(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_ClosedTermCache(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedClosedTermCache_default = _init_l_Lean_instInhabitedClosedTermCache_default();
lean_mark_persistent(l_Lean_instInhabitedClosedTermCache_default);
l_Lean_instInhabitedClosedTermCache = _init_l_Lean_instInhabitedClosedTermCache();
lean_mark_persistent(l_Lean_instInhabitedClosedTermCache);
res = l___private_Lean_Compiler_ClosedTermCache_0__Lean_initFn_00___x40_Lean_Compiler_ClosedTermCache_3608529163____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_closedTermCacheExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_closedTermCacheExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_ClosedTermCache(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Environment(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_ClosedTermCache(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ClosedTermCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_ClosedTermCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_ClosedTermCache(builtin);
}
#ifdef __cplusplus
}
#endif

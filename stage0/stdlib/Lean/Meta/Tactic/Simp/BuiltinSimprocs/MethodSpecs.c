// Lean compiler output
// Module: Lean.Meta.Tactic.Simp.BuiltinSimprocs.MethodSpecs
// Imports: import Init.Simproc public import Lean.Meta.Tactic.Simp.Simproc import Lean.Meta.MethodSpecs import Lean.Meta.Tactic.Simp.Main
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_Meta_isConstructorApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_getMethodSpecTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
extern lean_object* l_Lean_Meta_instInhabitedSimpTheorem_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_mkSimpTheoremFromConst(lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_instInhabitedSimpM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_tryTheorem_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinSimproc(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Simp_instInhabitedSimpM___redArg___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Lean.Meta.Tactic.Simp.BuiltinSimprocs.MethodSpecs"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "_private.Lean.Meta.Tactic.Simp.BuiltinSimprocs.MethodSpecs.0.reduceMethod"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "assertion violation: simpThms.size = 1\n    "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__2;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_reduceBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "BEq"};
static const lean_object* l_reduceBEq___closed__0 = (const lean_object*)&l_reduceBEq___closed__0_value;
static const lean_string_object l_reduceBEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "beq"};
static const lean_object* l_reduceBEq___closed__1 = (const lean_object*)&l_reduceBEq___closed__1_value;
static const lean_ctor_object l_reduceBEq___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceBEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 188, 39, 55, 57, 152, 88, 223)}};
static const lean_ctor_object l_reduceBEq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_reduceBEq___closed__2_value_aux_0),((lean_object*)&l_reduceBEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(82, 52, 243, 194, 7, 226, 90, 135)}};
static const lean_object* l_reduceBEq___closed__2 = (const lean_object*)&l_reduceBEq___closed__2_value;
LEAN_EXPORT lean_object* l_reduceBEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceBEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reduceBEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20__value),LEAN_SCALAR_PTR_LITERAL(7, 43, 34, 163, 80, 156, 84, 109)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_reduceBEq___closed__2_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20____boxed(lean_object*);
static const lean_string_object l_reduceOrd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Ord"};
static const lean_object* l_reduceOrd___closed__0 = (const lean_object*)&l_reduceOrd___closed__0_value;
static const lean_string_object l_reduceOrd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "compare"};
static const lean_object* l_reduceOrd___closed__1 = (const lean_object*)&l_reduceOrd___closed__1_value;
static const lean_ctor_object l_reduceOrd___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceOrd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 34, 14, 190, 177, 218, 16, 31)}};
static const lean_ctor_object l_reduceOrd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_reduceOrd___closed__2_value_aux_0),((lean_object*)&l_reduceOrd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(241, 180, 168, 39, 68, 69, 153, 110)}};
static const lean_object* l_reduceOrd___closed__2 = (const lean_object*)&l_reduceOrd___closed__2_value;
LEAN_EXPORT lean_object* l_reduceOrd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceOrd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reduceOrd"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18__value),LEAN_SCALAR_PTR_LITERAL(214, 237, 65, 80, 201, 127, 149, 235)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_reduceOrd___closed__2_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18____boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__0(lean_object* v_msg_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_){
_start:
{
lean_object* v___f_11_; lean_object* v___x_7645__overap_12_; lean_object* v___x_13_; 
v___f_11_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__0___closed__0));
v___x_7645__overap_12_ = lean_panic_fn_borrowed(v___f_11_, v_msg_2_);
lean_inc(v___y_9_);
lean_inc_ref(v___y_8_);
lean_inc(v___y_7_);
lean_inc_ref(v___y_6_);
lean_inc(v___y_5_);
lean_inc_ref(v___y_4_);
lean_inc(v___y_3_);
v___x_13_ = lean_apply_8(v___x_7645__overap_12_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, lean_box(0));
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__0___boxed(lean_object* v_msg_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_panic___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__0(v_msg_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
lean_dec(v___y_17_);
lean_dec_ref(v___y_16_);
lean_dec(v___y_15_);
return v_res_23_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__4(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_30_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__3));
v___x_31_ = lean_unsigned_to_nat(4u);
v___x_32_ = lean_unsigned_to_nat(28u);
v___x_33_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__2));
v___x_34_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__1));
v___x_35_ = l_mkPanicMessageWithDecl(v___x_34_, v___x_33_, v___x_32_, v___x_31_, v___x_30_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1(uint8_t v___x_36_, lean_object* v_e_37_, lean_object* v_as_38_, size_t v_sz_39_, size_t v_i_40_, lean_object* v_b_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
lean_object* v_a_51_; uint8_t v___x_55_; 
v___x_55_ = lean_usize_dec_lt(v_i_40_, v_sz_39_);
if (v___x_55_ == 0)
{
lean_object* v___x_56_; 
lean_dec_ref(v_e_37_);
v___x_56_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_56_, 0, v_b_41_);
return v___x_56_;
}
else
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v_a_62_; uint8_t v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
lean_dec_ref(v_b_41_);
v___x_57_ = lean_unsigned_to_nat(1u);
v___x_58_ = l_Lean_Meta_instInhabitedSimpTheorem_default;
v___x_59_ = lean_unsigned_to_nat(0u);
v___x_60_ = lean_box(0);
v___x_61_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__0));
v_a_62_ = lean_array_uget_borrowed(v_as_38_, v_i_40_);
v___x_63_ = 0;
v___x_64_ = lean_unsigned_to_nat(1000u);
lean_inc(v_a_62_);
v___x_65_ = l_Lean_Meta_mkSimpTheoremFromConst(v_a_62_, v___x_36_, v___x_63_, v___x_64_, v___x_63_, v___y_45_, v___y_46_, v___y_47_, v___y_48_);
if (lean_obj_tag(v___x_65_) == 0)
{
lean_object* v_a_66_; lean_object* v___x_67_; uint8_t v___x_68_; 
v_a_66_ = lean_ctor_get(v___x_65_, 0);
lean_inc(v_a_66_);
lean_dec_ref_known(v___x_65_, 1);
v___x_67_ = lean_array_get_size(v_a_66_);
v___x_68_ = lean_nat_dec_eq(v___x_67_, v___x_57_);
if (v___x_68_ == 0)
{
lean_object* v___x_69_; lean_object* v___x_70_; 
lean_dec(v_a_66_);
v___x_69_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__4);
v___x_70_ = l_panic___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__0(v___x_69_, v___y_42_, v___y_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_);
if (lean_obj_tag(v___x_70_) == 0)
{
lean_object* v_a_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_80_; 
v_a_71_ = lean_ctor_get(v___x_70_, 0);
v_isSharedCheck_80_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_80_ == 0)
{
v___x_73_ = v___x_70_;
v_isShared_74_ = v_isSharedCheck_80_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_a_71_);
lean_dec(v___x_70_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_80_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
if (lean_obj_tag(v_a_71_) == 0)
{
lean_object* v_a_75_; lean_object* v___x_77_; 
lean_dec_ref(v_e_37_);
v_a_75_ = lean_ctor_get(v_a_71_, 0);
lean_inc(v_a_75_);
lean_dec_ref_known(v_a_71_, 1);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 0, v_a_75_);
v___x_77_ = v___x_73_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v_a_75_);
v___x_77_ = v_reuseFailAlloc_78_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
return v___x_77_;
}
}
else
{
lean_object* v_a_79_; 
lean_del_object(v___x_73_);
v_a_79_ = lean_ctor_get(v_a_71_, 0);
lean_inc(v_a_79_);
lean_dec_ref_known(v_a_71_, 1);
v_a_51_ = v_a_79_;
goto v___jp_50_;
}
}
}
else
{
lean_object* v_a_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_88_; 
lean_dec_ref(v_e_37_);
v_a_81_ = lean_ctor_get(v___x_70_, 0);
v_isSharedCheck_88_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_88_ == 0)
{
v___x_83_ = v___x_70_;
v_isShared_84_ = v_isSharedCheck_88_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_a_81_);
lean_dec(v___x_70_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_88_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___x_86_; 
if (v_isShared_84_ == 0)
{
v___x_86_ = v___x_83_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v_a_81_);
v___x_86_ = v_reuseFailAlloc_87_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
return v___x_86_;
}
}
}
}
else
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = lean_array_get(v___x_58_, v_a_66_, v___x_59_);
lean_dec(v_a_66_);
lean_inc_ref(v_e_37_);
v___x_90_ = l_Lean_Meta_Simp_tryTheorem_x3f(v_e_37_, v___x_89_, v___y_42_, v___y_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_);
if (lean_obj_tag(v___x_90_) == 0)
{
lean_object* v_a_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_108_; 
v_a_91_ = lean_ctor_get(v___x_90_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v___x_90_);
if (v_isSharedCheck_108_ == 0)
{
v___x_93_ = v___x_90_;
v_isShared_94_ = v_isSharedCheck_108_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_a_91_);
lean_dec(v___x_90_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_108_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
if (lean_obj_tag(v_a_91_) == 1)
{
lean_object* v_val_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_107_; 
lean_dec_ref(v_e_37_);
v_val_95_ = lean_ctor_get(v_a_91_, 0);
v_isSharedCheck_107_ = !lean_is_exclusive(v_a_91_);
if (v_isSharedCheck_107_ == 0)
{
v___x_97_ = v_a_91_;
v_isShared_98_ = v_isSharedCheck_107_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_val_95_);
lean_dec(v_a_91_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_107_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_99_; lean_object* v___x_101_; 
v___x_99_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_99_, 0, v_val_95_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 0, v___x_99_);
v___x_101_ = v___x_97_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v___x_99_);
v___x_101_ = v_reuseFailAlloc_106_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
lean_object* v___x_102_; lean_object* v___x_104_; 
v___x_102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set(v___x_102_, 1, v___x_60_);
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 0, v___x_102_);
v___x_104_ = v___x_93_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v___x_102_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
return v___x_104_;
}
}
}
}
else
{
lean_del_object(v___x_93_);
lean_dec(v_a_91_);
v_a_51_ = v___x_61_;
goto v___jp_50_;
}
}
}
else
{
lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_116_; 
lean_dec_ref(v_e_37_);
v_a_109_ = lean_ctor_get(v___x_90_, 0);
v_isSharedCheck_116_ = !lean_is_exclusive(v___x_90_);
if (v_isSharedCheck_116_ == 0)
{
v___x_111_ = v___x_90_;
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v___x_90_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_114_; 
if (v_isShared_112_ == 0)
{
v___x_114_ = v___x_111_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v_a_109_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
}
}
else
{
lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_124_; 
lean_dec_ref(v_e_37_);
v_a_117_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_124_ == 0)
{
v___x_119_ = v___x_65_;
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_65_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_122_; 
if (v_isShared_120_ == 0)
{
v___x_122_ = v___x_119_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v_a_117_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
}
}
v___jp_50_:
{
size_t v___x_52_; size_t v___x_53_; 
v___x_52_ = ((size_t)1ULL);
v___x_53_ = lean_usize_add(v_i_40_, v___x_52_);
v_i_40_ = v___x_53_;
v_b_41_ = v_a_51_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___boxed(lean_object* v___x_125_, lean_object* v_e_126_, lean_object* v_as_127_, lean_object* v_sz_128_, lean_object* v_i_129_, lean_object* v_b_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_){
_start:
{
uint8_t v___x_8464__boxed_139_; size_t v_sz_boxed_140_; size_t v_i_boxed_141_; lean_object* v_res_142_; 
v___x_8464__boxed_139_ = lean_unbox(v___x_125_);
v_sz_boxed_140_ = lean_unbox_usize(v_sz_128_);
lean_dec(v_sz_128_);
v_i_boxed_141_ = lean_unbox_usize(v_i_129_);
lean_dec(v_i_129_);
v_res_142_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1(v___x_8464__boxed_139_, v_e_126_, v_as_127_, v_sz_boxed_140_, v_i_boxed_141_, v_b_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
lean_dec(v___y_133_);
lean_dec_ref(v___y_132_);
lean_dec(v___y_131_);
lean_dec_ref(v_as_127_);
return v_res_142_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__0(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = lean_box(0);
v___x_144_ = l_unsafeCast___redArg(v___x_143_);
return v___x_144_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__1(void){
_start:
{
lean_object* v___x_145_; lean_object* v_dummy_146_; 
v___x_145_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__0, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__0_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__0);
v_dummy_146_ = l_Lean_Expr_sort___override(v___x_145_);
return v_dummy_146_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__2(void){
_start:
{
lean_object* v_dummy_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v_dummy_147_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__1, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__1_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__1);
v___x_148_ = lean_unsigned_to_nat(3u);
v___x_149_ = lean_mk_array(v___x_148_, v_dummy_147_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod(lean_object* v_opName_154_, lean_object* v_e_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v_xs_167_; lean_object* v___x_168_; lean_object* v_inst_169_; lean_object* v___x_170_; uint8_t v___x_171_; 
v___x_164_ = l_Lean_instInhabitedExpr;
v___x_165_ = lean_unsigned_to_nat(3u);
v___x_166_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__2, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__2_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__2);
lean_inc_ref(v_e_155_);
v_xs_167_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop(v___x_165_, v_e_155_, v___x_166_);
v___x_168_ = lean_unsigned_to_nat(0u);
v_inst_169_ = lean_array_get(v___x_164_, v_xs_167_, v___x_168_);
v___x_170_ = l_Lean_Expr_getAppFn(v_inst_169_);
lean_dec(v_inst_169_);
v___x_171_ = l_Lean_Expr_isConst(v___x_170_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; lean_object* v___x_173_; 
lean_dec_ref(v___x_170_);
lean_dec_ref(v_xs_167_);
lean_dec_ref(v_e_155_);
lean_dec_ref(v_opName_154_);
v___x_172_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__3));
v___x_173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
return v___x_173_;
}
else
{
lean_object* v___x_174_; lean_object* v_lhs_175_; lean_object* v___x_176_; lean_object* v_rhs_177_; lean_object* v___x_178_; 
v___x_174_ = lean_unsigned_to_nat(1u);
v_lhs_175_ = lean_array_get(v___x_164_, v_xs_167_, v___x_174_);
v___x_176_ = lean_unsigned_to_nat(2u);
v_rhs_177_ = lean_array_get(v___x_164_, v_xs_167_, v___x_176_);
lean_dec_ref(v_xs_167_);
v___x_178_ = l_Lean_Meta_isConstructorApp_x3f(v_lhs_175_, v_a_159_, v_a_160_, v_a_161_, v_a_162_);
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_251_; 
v_a_179_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_251_ == 0)
{
v___x_181_ = v___x_178_;
v_isShared_182_ = v_isSharedCheck_251_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_178_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_251_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
if (lean_obj_tag(v_a_179_) == 1)
{
lean_object* v___x_183_; 
lean_dec_ref_known(v_a_179_, 1);
lean_del_object(v___x_181_);
v___x_183_ = l_Lean_Meta_isConstructorApp_x3f(v_rhs_177_, v_a_159_, v_a_160_, v_a_161_, v_a_162_);
if (lean_obj_tag(v___x_183_) == 0)
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_238_; 
v_a_184_ = lean_ctor_get(v___x_183_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_183_);
if (v_isSharedCheck_238_ == 0)
{
v___x_186_ = v___x_183_;
v_isShared_187_ = v_isSharedCheck_238_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_183_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_238_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
if (lean_obj_tag(v_a_184_) == 1)
{
lean_object* v___x_188_; lean_object* v___x_189_; 
lean_dec_ref_known(v_a_184_, 1);
lean_del_object(v___x_186_);
v___x_188_ = l_Lean_Expr_constName_x21(v___x_170_);
lean_dec_ref(v___x_170_);
v___x_189_ = l_Lean_getMethodSpecTheorems(v___x_188_, v_opName_154_, v_a_159_, v_a_160_, v_a_161_, v_a_162_);
if (lean_obj_tag(v___x_189_) == 0)
{
lean_object* v_a_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_225_; 
v_a_190_ = lean_ctor_get(v___x_189_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_225_ == 0)
{
v___x_192_ = v___x_189_;
v_isShared_193_ = v_isSharedCheck_225_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_a_190_);
lean_dec(v___x_189_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_225_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
if (lean_obj_tag(v_a_190_) == 1)
{
lean_object* v_val_194_; lean_object* v___x_195_; size_t v_sz_196_; size_t v___x_197_; lean_object* v___x_198_; 
lean_del_object(v___x_192_);
v_val_194_ = lean_ctor_get(v_a_190_, 0);
lean_inc(v_val_194_);
lean_dec_ref_known(v_a_190_, 1);
v___x_195_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1___closed__0));
v_sz_196_ = lean_array_size(v_val_194_);
v___x_197_ = ((size_t)0ULL);
v___x_198_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod_spec__1(v___x_171_, v_e_155_, v_val_194_, v_sz_196_, v___x_197_, v___x_195_, v_a_156_, v_a_157_, v_a_158_, v_a_159_, v_a_160_, v_a_161_, v_a_162_);
lean_dec(v_val_194_);
if (lean_obj_tag(v___x_198_) == 0)
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_212_; 
v_a_199_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_212_ == 0)
{
v___x_201_ = v___x_198_;
v_isShared_202_ = v_isSharedCheck_212_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_198_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_212_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v_fst_203_; 
v_fst_203_ = lean_ctor_get(v_a_199_, 0);
lean_inc(v_fst_203_);
lean_dec(v_a_199_);
if (lean_obj_tag(v_fst_203_) == 0)
{
lean_object* v___x_204_; lean_object* v___x_206_; 
v___x_204_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__4));
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 0, v___x_204_);
v___x_206_ = v___x_201_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v___x_204_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
return v___x_206_;
}
}
else
{
lean_object* v_val_208_; lean_object* v___x_210_; 
v_val_208_ = lean_ctor_get(v_fst_203_, 0);
lean_inc(v_val_208_);
lean_dec_ref_known(v_fst_203_, 1);
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 0, v_val_208_);
v___x_210_ = v___x_201_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_val_208_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
else
{
lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_220_; 
v_a_213_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_220_ == 0)
{
v___x_215_ = v___x_198_;
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_198_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_220_;
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
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_a_213_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
}
else
{
lean_object* v___x_221_; lean_object* v___x_223_; 
lean_dec(v_a_190_);
lean_dec_ref(v_e_155_);
v___x_221_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__3));
if (v_isShared_193_ == 0)
{
lean_ctor_set(v___x_192_, 0, v___x_221_);
v___x_223_ = v___x_192_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v___x_221_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
return v___x_223_;
}
}
}
}
else
{
lean_object* v_a_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_233_; 
lean_dec_ref(v_e_155_);
v_a_226_ = lean_ctor_get(v___x_189_, 0);
v_isSharedCheck_233_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_233_ == 0)
{
v___x_228_ = v___x_189_;
v_isShared_229_ = v_isSharedCheck_233_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_a_226_);
lean_dec(v___x_189_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_233_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_231_; 
if (v_isShared_229_ == 0)
{
v___x_231_ = v___x_228_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v_a_226_);
v___x_231_ = v_reuseFailAlloc_232_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
return v___x_231_;
}
}
}
}
else
{
lean_object* v___x_234_; lean_object* v___x_236_; 
lean_dec(v_a_184_);
lean_dec_ref(v___x_170_);
lean_dec_ref(v_e_155_);
lean_dec_ref(v_opName_154_);
v___x_234_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__3));
if (v_isShared_187_ == 0)
{
lean_ctor_set(v___x_186_, 0, v___x_234_);
v___x_236_ = v___x_186_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v___x_234_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
}
else
{
lean_object* v_a_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_246_; 
lean_dec_ref(v___x_170_);
lean_dec_ref(v_e_155_);
lean_dec_ref(v_opName_154_);
v_a_239_ = lean_ctor_get(v___x_183_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_183_);
if (v_isSharedCheck_246_ == 0)
{
v___x_241_ = v___x_183_;
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_a_239_);
lean_dec(v___x_183_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_244_; 
if (v_isShared_242_ == 0)
{
v___x_244_ = v___x_241_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_a_239_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
}
else
{
lean_object* v___x_247_; lean_object* v___x_249_; 
lean_dec(v_a_179_);
lean_dec(v_rhs_177_);
lean_dec_ref(v___x_170_);
lean_dec_ref(v_e_155_);
lean_dec_ref(v_opName_154_);
v___x_247_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__3));
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 0, v___x_247_);
v___x_249_ = v___x_181_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_247_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
}
else
{
lean_object* v_a_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_259_; 
lean_dec(v_rhs_177_);
lean_dec_ref(v___x_170_);
lean_dec_ref(v_e_155_);
lean_dec_ref(v_opName_154_);
v_a_252_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_259_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_259_ == 0)
{
v___x_254_ = v___x_178_;
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_a_252_);
lean_dec(v___x_178_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_257_; 
if (v_isShared_255_ == 0)
{
v___x_257_ = v___x_254_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_a_252_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___boxed(lean_object* v_opName_260_, lean_object* v_e_261_, lean_object* v_a_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod(v_opName_260_, v_e_261_, v_a_262_, v_a_263_, v_a_264_, v_a_265_, v_a_266_, v_a_267_, v_a_268_);
lean_dec(v_a_268_);
lean_dec_ref(v_a_267_);
lean_dec(v_a_266_);
lean_dec_ref(v_a_265_);
lean_dec(v_a_264_);
lean_dec_ref(v_a_263_);
lean_dec(v_a_262_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l_reduceBEq(lean_object* v_e_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
v___x_285_ = ((lean_object*)(l_reduceBEq___closed__1));
v___x_286_ = ((lean_object*)(l_reduceBEq___closed__2));
v___x_287_ = lean_unsigned_to_nat(4u);
v___x_288_ = l_Lean_Expr_isAppOfArity(v_e_276_, v___x_286_, v___x_287_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; lean_object* v___x_290_; 
lean_dec_ref(v_e_276_);
v___x_289_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__3));
v___x_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
return v___x_290_;
}
else
{
lean_object* v___x_291_; 
v___x_291_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod(v___x_285_, v_e_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_, v_a_282_, v_a_283_);
return v___x_291_;
}
}
}
LEAN_EXPORT lean_object* l_reduceBEq___boxed(lean_object* v_e_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l_reduceBEq(v_e_292_, v_a_293_, v_a_294_, v_a_295_, v_a_296_, v_a_297_, v_a_298_, v_a_299_);
lean_dec(v_a_299_);
lean_dec_ref(v_a_298_);
lean_dec(v_a_297_);
lean_dec_ref(v_a_296_);
lean_dec(v_a_295_);
lean_dec_ref(v_a_294_);
lean_dec(v_a_293_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20_(){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_318_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20_));
v___x_319_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20_));
v___x_320_ = lean_alloc_closure((void*)(l_reduceBEq___boxed), 9, 0);
v___x_321_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_318_, v___x_319_, v___x_320_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20____boxed(lean_object* v_a_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20_();
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_reduceOrd(lean_object* v_e_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; 
v___x_338_ = ((lean_object*)(l_reduceOrd___closed__1));
v___x_339_ = ((lean_object*)(l_reduceOrd___closed__2));
v___x_340_ = lean_unsigned_to_nat(4u);
v___x_341_ = l_Lean_Expr_isAppOfArity(v_e_329_, v___x_339_, v___x_340_);
if (v___x_341_ == 0)
{
lean_object* v___x_342_; lean_object* v___x_343_; 
lean_dec_ref(v_e_329_);
v___x_342_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod___closed__3));
v___x_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
return v___x_343_;
}
else
{
lean_object* v___x_344_; 
v___x_344_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0__reduceMethod(v___x_338_, v_e_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_);
return v___x_344_;
}
}
}
LEAN_EXPORT lean_object* l_reduceOrd___boxed(lean_object* v_e_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_reduceOrd(v_e_345_, v_a_346_, v_a_347_, v_a_348_, v_a_349_, v_a_350_, v_a_351_, v_a_352_);
lean_dec(v_a_352_);
lean_dec_ref(v_a_351_);
lean_dec(v_a_350_);
lean_dec_ref(v_a_349_);
lean_dec(v_a_348_);
lean_dec_ref(v_a_347_);
lean_dec(v_a_346_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18_(){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_371_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18_));
v___x_372_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18_));
v___x_373_ = lean_alloc_closure((void*)(l_reduceOrd___boxed), 9, 0);
v___x_374_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_371_, v___x_372_, v___x_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18____boxed(lean_object* v_a_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18_();
return v_res_376_;
}
}
lean_object* runtime_initialize_Init_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_MethodSpecs(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_MethodSpecs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceBEq_declare__8_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_1805576928____hygCtx___hyg_20_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_0____regBuiltin_reduceOrd_declare__13_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs_4136800390____hygCtx___hyg_18_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_MethodSpecs(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_MethodSpecs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_MethodSpecs(builtin);
}
#ifdef __cplusplus
}
#endif

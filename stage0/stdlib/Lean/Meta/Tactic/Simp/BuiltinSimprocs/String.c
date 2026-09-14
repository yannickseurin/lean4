// Lean compiler output
// Module: Lean.Meta.Tactic.Simp.BuiltinSimprocs.String
// Imports: public import Lean.Meta.Tactic.Simp.BuiltinSimprocs.Char import Lean.Meta.StringLitProof
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_getStringValue_x3f(lean_object*);
uint8_t l_String_decLE(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_evalPropStep___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinSimproc(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_addSimprocBuiltinAttr(lean_object*, uint8_t, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getCharValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Lean_mkStrLit(lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinDSimproc(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_mkStringLitNeProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_evalEqPropStep(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_evalNePropStep(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_data(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_reduceAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "HAppend"};
static const lean_object* l_String_reduceAppend___redArg___closed__0 = (const lean_object*)&l_String_reduceAppend___redArg___closed__0_value;
static const lean_string_object l_String_reduceAppend___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "hAppend"};
static const lean_object* l_String_reduceAppend___redArg___closed__1 = (const lean_object*)&l_String_reduceAppend___redArg___closed__1_value;
static const lean_ctor_object l_String_reduceAppend___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_String_reduceAppend___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 35, 233, 160, 196, 216, 250, 31)}};
static const lean_ctor_object l_String_reduceAppend___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_String_reduceAppend___redArg___closed__2_value_aux_0),((lean_object*)&l_String_reduceAppend___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(181, 97, 51, 176, 35, 131, 5, 233)}};
static const lean_object* l_String_reduceAppend___redArg___closed__2 = (const lean_object*)&l_String_reduceAppend___redArg___closed__2_value;
static const lean_ctor_object l_String_reduceAppend___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_reduceAppend___redArg___closed__3 = (const lean_object*)&l_String_reduceAppend___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_String_reduceAppend___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_reduceAppend___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceAppend(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceAppend___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "reduceAppend"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(130, 179, 20, 139, 17, 100, 1, 133)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_String_reduceAppend___redArg___closed__2_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__6_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__6_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__6_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_28__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_28_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_28_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_28____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_30_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_30____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_reduceOfList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofList"};
static const lean_object* l_String_reduceOfList___redArg___closed__0 = (const lean_object*)&l_String_reduceOfList___redArg___closed__0_value;
static const lean_ctor_object l_String_reduceOfList___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l_String_reduceOfList___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_String_reduceOfList___redArg___closed__1_value_aux_0),((lean_object*)&l_String_reduceOfList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(118, 246, 177, 142, 179, 9, 199, 233)}};
static const lean_object* l_String_reduceOfList___redArg___closed__1 = (const lean_object*)&l_String_reduceOfList___redArg___closed__1_value;
static const lean_string_object l_String_reduceOfList___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_String_reduceOfList___redArg___closed__2 = (const lean_object*)&l_String_reduceOfList___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_String_reduceOfList___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceOfList___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceOfList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceOfList___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "reduceOfList"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20__value),LEAN_SCALAR_PTR_LITERAL(84, 149, 88, 166, 156, 126, 205, 249)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_String_reduceOfList___redArg___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_22__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_22_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_22____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_24____boxed(lean_object*);
static const lean_string_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Char"};
static const lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__0 = (const lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__0_value;
static const lean_string_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__1 = (const lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__1_value;
static const lean_ctor_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_ctor_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 51, 10, 169, 25, 67, 44, 251)}};
static const lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__2 = (const lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__2_value;
static lean_once_cell_t l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_reduceToList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toList"};
static const lean_object* l_String_reduceToList___redArg___closed__0 = (const lean_object*)&l_String_reduceToList___redArg___closed__0_value;
static const lean_ctor_object l_String_reduceToList___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l_String_reduceToList___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_String_reduceToList___redArg___closed__1_value_aux_0),((lean_object*)&l_String_reduceToList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 127, 118, 127, 34, 206, 216, 161)}};
static const lean_object* l_String_reduceToList___redArg___closed__1 = (const lean_object*)&l_String_reduceToList___redArg___closed__1_value;
static const lean_ctor_object l_String_reduceToList___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_object* l_String_reduceToList___redArg___closed__2 = (const lean_object*)&l_String_reduceToList___redArg___closed__2_value;
static lean_once_cell_t l_String_reduceToList___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_reduceToList___redArg___closed__3;
static lean_once_cell_t l_String_reduceToList___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_reduceToList___redArg___closed__4;
static lean_once_cell_t l_String_reduceToList___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_reduceToList___redArg___closed__5;
static lean_once_cell_t l_String_reduceToList___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_reduceToList___redArg___closed__6;
static lean_once_cell_t l_String_reduceToList___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_reduceToList___redArg___closed__7;
static lean_once_cell_t l_String_reduceToList___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_reduceToList___redArg___closed__8;
static lean_once_cell_t l_String_reduceToList___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_reduceToList___redArg___closed__9;
LEAN_EXPORT lean_object* l_String_reduceToList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_reduceToList___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceToList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceToList___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "reduceToList"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20__value),LEAN_SCALAR_PTR_LITERAL(44, 217, 161, 102, 102, 251, 25, 3)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_String_reduceToList___redArg___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_22__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_22_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_22____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_24____boxed(lean_object*);
static const lean_string_object l_String_reducePush___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "push"};
static const lean_object* l_String_reducePush___redArg___closed__0 = (const lean_object*)&l_String_reducePush___redArg___closed__0_value;
static const lean_ctor_object l_String_reducePush___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l_String_reducePush___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_String_reducePush___redArg___closed__1_value_aux_0),((lean_object*)&l_String_reducePush___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(235, 214, 172, 180, 192, 17, 133, 66)}};
static const lean_object* l_String_reducePush___redArg___closed__1 = (const lean_object*)&l_String_reducePush___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_String_reducePush___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reducePush___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reducePush(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reducePush___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "reducePush"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(73, 35, 175, 29, 202, 201, 229, 28)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_String_reducePush___redArg___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_23__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_23_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_23_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_23____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_25_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_25____boxed(lean_object*);
static const lean_string_object l_String_reduceSingleton___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "singleton"};
static const lean_object* l_String_reduceSingleton___redArg___closed__0 = (const lean_object*)&l_String_reduceSingleton___redArg___closed__0_value;
static const lean_ctor_object l_String_reduceSingleton___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l_String_reduceSingleton___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_String_reduceSingleton___redArg___closed__1_value_aux_0),((lean_object*)&l_String_reduceSingleton___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 249, 164, 191, 79, 71, 244, 218)}};
static const lean_object* l_String_reduceSingleton___redArg___closed__1 = (const lean_object*)&l_String_reduceSingleton___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_String_reduceSingleton___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceSingleton___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceSingleton(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceSingleton___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "reduceSingleton"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20__value),LEAN_SCALAR_PTR_LITERAL(1, 89, 111, 129, 120, 146, 0, 121)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_String_reduceSingleton___redArg___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_22__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_22_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_22____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_24____boxed(lean_object*);
static lean_once_cell_t l_String_reduceToSingleton___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_reduceToSingleton___redArg___closed__0;
LEAN_EXPORT lean_object* l_String_reduceToSingleton___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_reduceToSingleton___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceToSingleton(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceToSingleton___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "reduceToSingleton"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19__value),LEAN_SCALAR_PTR_LITERAL(188, 114, 101, 196, 232, 204, 81, 140)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19____boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_reduceLT___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* l_String_reduceLT___redArg___closed__0 = (const lean_object*)&l_String_reduceLT___redArg___closed__0_value;
static const lean_string_object l_String_reduceLT___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l_String_reduceLT___redArg___closed__1 = (const lean_object*)&l_String_reduceLT___redArg___closed__1_value;
static const lean_ctor_object l_String_reduceLT___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_String_reduceLT___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object l_String_reduceLT___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_String_reduceLT___redArg___closed__2_value_aux_0),((lean_object*)&l_String_reduceLT___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* l_String_reduceLT___redArg___closed__2 = (const lean_object*)&l_String_reduceLT___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_String_reduceLT___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceLT___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceLT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceLT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "reduceLT"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27__value),LEAN_SCALAR_PTR_LITERAL(83, 129, 251, 63, 48, 77, 211, 99)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_String_reduceLT___redArg___closed__2_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_29__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_29_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_29_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_29____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_31_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_31____boxed(lean_object*);
static const lean_string_object l_String_reduceLE___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l_String_reduceLE___redArg___closed__0 = (const lean_object*)&l_String_reduceLE___redArg___closed__0_value;
static const lean_string_object l_String_reduceLE___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l_String_reduceLE___redArg___closed__1 = (const lean_object*)&l_String_reduceLE___redArg___closed__1_value;
static const lean_ctor_object l_String_reduceLE___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_String_reduceLE___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l_String_reduceLE___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_String_reduceLE___redArg___closed__2_value_aux_0),((lean_object*)&l_String_reduceLE___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l_String_reduceLE___redArg___closed__2 = (const lean_object*)&l_String_reduceLE___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_String_reduceLE___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceLE___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceLE(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "reduceLE"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27__value),LEAN_SCALAR_PTR_LITERAL(181, 148, 60, 222, 34, 40, 11, 185)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_String_reduceLE___redArg___closed__2_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_29__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_29_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_29_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_29____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_31_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_31____boxed(lean_object*);
static const lean_string_object l_String_reduceGT___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "GT"};
static const lean_object* l_String_reduceGT___redArg___closed__0 = (const lean_object*)&l_String_reduceGT___redArg___closed__0_value;
static const lean_string_object l_String_reduceGT___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "gt"};
static const lean_object* l_String_reduceGT___redArg___closed__1 = (const lean_object*)&l_String_reduceGT___redArg___closed__1_value;
static const lean_ctor_object l_String_reduceGT___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_String_reduceGT___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(240, 16, 15, 58, 66, 186, 138, 31)}};
static const lean_ctor_object l_String_reduceGT___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_String_reduceGT___redArg___closed__2_value_aux_0),((lean_object*)&l_String_reduceGT___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 75, 137, 103, 59, 22, 209, 130)}};
static const lean_object* l_String_reduceGT___redArg___closed__2 = (const lean_object*)&l_String_reduceGT___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_String_reduceGT___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceGT___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceGT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceGT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "reduceGT"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27__value),LEAN_SCALAR_PTR_LITERAL(37, 205, 223, 144, 3, 26, 41, 82)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_29__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_29_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_29_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_29____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_31_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_31____boxed(lean_object*);
static const lean_string_object l_String_reduceGE___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "GE"};
static const lean_object* l_String_reduceGE___redArg___closed__0 = (const lean_object*)&l_String_reduceGE___redArg___closed__0_value;
static const lean_string_object l_String_reduceGE___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ge"};
static const lean_object* l_String_reduceGE___redArg___closed__1 = (const lean_object*)&l_String_reduceGE___redArg___closed__1_value;
static const lean_ctor_object l_String_reduceGE___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_String_reduceGE___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 169, 4, 72, 62, 21, 91, 24)}};
static const lean_ctor_object l_String_reduceGE___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_String_reduceGE___redArg___closed__2_value_aux_0),((lean_object*)&l_String_reduceGE___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(71, 88, 92, 156, 129, 215, 23, 77)}};
static const lean_object* l_String_reduceGE___redArg___closed__2 = (const lean_object*)&l_String_reduceGE___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_String_reduceGE___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceGE___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceGE(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceGE___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "reduceGE"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27__value),LEAN_SCALAR_PTR_LITERAL(192, 35, 33, 237, 211, 197, 6, 111)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_29__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_29_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_29_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_29____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_31_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_31____boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_reduceEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_reduceEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_String_reduceEq___closed__0 = (const lean_object*)&l_String_reduceEq___closed__0_value;
static const lean_ctor_object l_String_reduceEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_String_reduceEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_String_reduceEq___closed__1 = (const lean_object*)&l_String_reduceEq___closed__1_value;
LEAN_EXPORT lean_object* l_String_reduceEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "reduceEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27__value),LEAN_SCALAR_PTR_LITERAL(226, 50, 245, 26, 30, 117, 229, 171)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_String_reduceEq___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_29__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_29_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_29_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_29____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_31_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_31____boxed(lean_object*);
static const lean_string_object l_String_reduceNe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Ne"};
static const lean_object* l_String_reduceNe___closed__0 = (const lean_object*)&l_String_reduceNe___closed__0_value;
static const lean_ctor_object l_String_reduceNe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_String_reduceNe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(161, 247, 70, 70, 118, 145, 235, 92)}};
static const lean_object* l_String_reduceNe___closed__1 = (const lean_object*)&l_String_reduceNe___closed__1_value;
LEAN_EXPORT lean_object* l_String_reduceNe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceNe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "reduceNe"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value),LEAN_SCALAR_PTR_LITERAL(145, 120, 208, 42, 84, 100, 108, 77)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_29__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_29_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_29_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_29____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_31_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_31____boxed(lean_object*);
static const lean_string_object l_String_reduceBEq___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "BEq"};
static const lean_object* l_String_reduceBEq___redArg___closed__0 = (const lean_object*)&l_String_reduceBEq___redArg___closed__0_value;
static const lean_string_object l_String_reduceBEq___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "beq"};
static const lean_object* l_String_reduceBEq___redArg___closed__1 = (const lean_object*)&l_String_reduceBEq___redArg___closed__1_value;
static const lean_ctor_object l_String_reduceBEq___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_String_reduceBEq___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 188, 39, 55, 57, 152, 88, 223)}};
static const lean_ctor_object l_String_reduceBEq___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_String_reduceBEq___redArg___closed__2_value_aux_0),((lean_object*)&l_String_reduceBEq___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(82, 52, 243, 194, 7, 226, 90, 135)}};
static const lean_object* l_String_reduceBEq___redArg___closed__2 = (const lean_object*)&l_String_reduceBEq___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_String_reduceBEq___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_reduceBEq___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceBEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceBEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reduceBEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27__value),LEAN_SCALAR_PTR_LITERAL(78, 160, 87, 2, 82, 78, 3, 125)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_String_reduceBEq___redArg___closed__2_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_29__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_29_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_29_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_29____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_31_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_31____boxed(lean_object*);
static const lean_string_object l_String_reduceBNe___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bne"};
static const lean_object* l_String_reduceBNe___redArg___closed__0 = (const lean_object*)&l_String_reduceBNe___redArg___closed__0_value;
static const lean_ctor_object l_String_reduceBNe___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_String_reduceBNe___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 187, 84, 23, 255, 12, 25, 13)}};
static const lean_object* l_String_reduceBNe___redArg___closed__1 = (const lean_object*)&l_String_reduceBNe___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_String_reduceBNe___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_reduceBNe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceBNe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_reduceBNe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reduceBNe"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27__value),LEAN_SCALAR_PTR_LITERAL(240, 216, 47, 194, 46, 141, 155, 74)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_String_reduceBNe___redArg___closed__1_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_29__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_29_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_29_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_29____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_31_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_31____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(lean_object* v_e_1_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = l_Lean_Meta_getStringValue_x3f(v_e_1_);
v___x_4_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4_, 0, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg___boxed(lean_object* v_e_5_, lean_object* v_a_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v_e_5_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f(lean_object* v_e_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_, lean_object* v_a_14_, lean_object* v_a_15_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v_e_8_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___boxed(lean_object* v_e_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_, lean_object* v_a_25_, lean_object* v_a_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f(v_e_18_, v_a_19_, v_a_20_, v_a_21_, v_a_22_, v_a_23_, v_a_24_, v_a_25_);
lean_dec(v_a_25_);
lean_dec_ref(v_a_24_);
lean_dec(v_a_23_);
lean_dec_ref(v_a_22_);
lean_dec(v_a_21_);
lean_dec_ref(v_a_20_);
lean_dec(v_a_19_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_String_reduceAppend___redArg(lean_object* v_e_35_){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; uint8_t v___x_39_; 
v___x_37_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__2));
v___x_38_ = lean_unsigned_to_nat(6u);
v___x_39_ = l_Lean_Expr_isAppOfArity(v_e_35_, v___x_37_, v___x_38_);
if (v___x_39_ == 0)
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
v___x_41_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
return v___x_41_;
}
else
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v_a_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_78_; 
v___x_42_ = l_Lean_Expr_appFn_x21(v_e_35_);
v___x_43_ = l_Lean_Expr_appArg_x21(v___x_42_);
lean_dec_ref(v___x_42_);
v___x_44_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_43_);
v_a_45_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_78_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_78_ == 0)
{
v___x_47_ = v___x_44_;
v_isShared_48_ = v_isSharedCheck_78_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_a_45_);
lean_dec(v___x_44_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_78_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
if (lean_obj_tag(v_a_45_) == 1)
{
lean_object* v_val_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v_a_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_73_; 
lean_del_object(v___x_47_);
v_val_49_ = lean_ctor_get(v_a_45_, 0);
lean_inc(v_val_49_);
lean_dec_ref_known(v_a_45_, 1);
v___x_50_ = l_Lean_Expr_appArg_x21(v_e_35_);
v___x_51_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_50_);
v_a_52_ = lean_ctor_get(v___x_51_, 0);
v_isSharedCheck_73_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_73_ == 0)
{
v___x_54_ = v___x_51_;
v_isShared_55_ = v_isSharedCheck_73_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_a_52_);
lean_dec(v___x_51_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_73_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
if (lean_obj_tag(v_a_52_) == 1)
{
lean_object* v_val_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_68_; 
v_val_56_ = lean_ctor_get(v_a_52_, 0);
v_isSharedCheck_68_ = !lean_is_exclusive(v_a_52_);
if (v_isSharedCheck_68_ == 0)
{
v___x_58_ = v_a_52_;
v_isShared_59_ = v_isSharedCheck_68_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_val_56_);
lean_dec(v_a_52_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_68_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_63_; 
v___x_60_ = lean_string_append(v_val_49_, v_val_56_);
lean_dec(v_val_56_);
v___x_61_ = l_Lean_mkStrLit(v___x_60_);
if (v_isShared_59_ == 0)
{
lean_ctor_set_tag(v___x_58_, 0);
lean_ctor_set(v___x_58_, 0, v___x_61_);
v___x_63_ = v___x_58_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v___x_61_);
v___x_63_ = v_reuseFailAlloc_67_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
lean_object* v___x_65_; 
if (v_isShared_55_ == 0)
{
lean_ctor_set(v___x_54_, 0, v___x_63_);
v___x_65_ = v___x_54_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_66_; 
v_reuseFailAlloc_66_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_66_, 0, v___x_63_);
v___x_65_ = v_reuseFailAlloc_66_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
return v___x_65_;
}
}
}
}
else
{
lean_object* v___x_69_; lean_object* v___x_71_; 
lean_dec(v_a_52_);
lean_dec(v_val_49_);
v___x_69_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
if (v_isShared_55_ == 0)
{
lean_ctor_set(v___x_54_, 0, v___x_69_);
v___x_71_ = v___x_54_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_72_; 
v_reuseFailAlloc_72_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_72_, 0, v___x_69_);
v___x_71_ = v_reuseFailAlloc_72_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
return v___x_71_;
}
}
}
}
else
{
lean_object* v___x_74_; lean_object* v___x_76_; 
lean_dec(v_a_45_);
v___x_74_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
if (v_isShared_48_ == 0)
{
lean_ctor_set(v___x_47_, 0, v___x_74_);
v___x_76_ = v___x_47_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v___x_74_);
v___x_76_ = v_reuseFailAlloc_77_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
return v___x_76_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_reduceAppend___redArg___boxed(lean_object* v_e_79_, lean_object* v_a_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_String_reduceAppend___redArg(v_e_79_);
lean_dec_ref(v_e_79_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_String_reduceAppend(lean_object* v_e_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_String_reduceAppend___redArg(v_e_82_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_String_reduceAppend___boxed(lean_object* v_e_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_String_reduceAppend(v_e_92_, v_a_93_, v_a_94_, v_a_95_, v_a_96_, v_a_97_, v_a_98_, v_a_99_);
lean_dec(v_a_99_);
lean_dec_ref(v_a_98_);
lean_dec(v_a_97_);
lean_dec_ref(v_a_96_);
lean_dec(v_a_95_);
lean_dec_ref(v_a_94_);
lean_dec(v_a_93_);
lean_dec_ref(v_e_92_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_128_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26_));
v___x_129_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__6_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26_));
v___x_130_ = lean_alloc_closure((void*)(l_String_reduceAppend___boxed), 9, 0);
v___x_131_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_128_, v___x_129_, v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26____boxed(lean_object* v_a_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26_();
return v_res_133_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_28_(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = lean_alloc_closure((void*)(l_String_reduceAppend___boxed), 9, 0);
v___x_135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_28_(){
_start:
{
lean_object* v___x_137_; uint8_t v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_137_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26_));
v___x_138_ = 1;
v___x_139_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_28_);
v___x_140_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_137_, v___x_138_, v___x_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_28____boxed(lean_object* v_a_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_28_();
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_30_(){
_start:
{
lean_object* v___x_144_; uint8_t v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_144_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26_));
v___x_145_ = 1;
v___x_146_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_28_);
v___x_147_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_144_, v___x_145_, v___x_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_30____boxed(lean_object* v_a_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_30_();
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg(lean_object* v_e_159_, lean_object* v_s_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; uint8_t v___x_168_; 
v___x_166_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__2));
v___x_167_ = lean_unsigned_to_nat(1u);
v___x_168_ = l_Lean_Expr_isAppOfArity(v_e_159_, v___x_166_, v___x_167_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; lean_object* v___x_170_; uint8_t v___x_171_; 
v___x_169_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__4));
v___x_170_ = lean_unsigned_to_nat(3u);
v___x_171_ = l_Lean_Expr_isAppOfArity(v_e_159_, v___x_169_, v___x_170_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; lean_object* v___x_173_; 
lean_dec_ref(v_s_160_);
lean_dec_ref(v_e_159_);
v___x_172_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
v___x_173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
return v___x_173_;
}
else
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_174_ = l_Lean_Expr_appFn_x21(v_e_159_);
v___x_175_ = l_Lean_Expr_appArg_x21(v___x_174_);
lean_dec_ref(v___x_174_);
v___x_176_ = l_Lean_Meta_getCharValue_x3f(v___x_175_, v_a_161_, v_a_162_, v_a_163_, v_a_164_);
if (lean_obj_tag(v___x_176_) == 0)
{
lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_190_; 
v_a_177_ = lean_ctor_get(v___x_176_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_176_);
if (v_isSharedCheck_190_ == 0)
{
v___x_179_ = v___x_176_;
v_isShared_180_ = v_isSharedCheck_190_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_dec(v___x_176_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_190_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
if (lean_obj_tag(v_a_177_) == 1)
{
lean_object* v_val_181_; lean_object* v___x_182_; uint32_t v___x_183_; lean_object* v___x_184_; 
lean_del_object(v___x_179_);
v_val_181_ = lean_ctor_get(v_a_177_, 0);
lean_inc(v_val_181_);
lean_dec_ref_known(v_a_177_, 1);
v___x_182_ = l_Lean_Expr_appArg_x21(v_e_159_);
lean_dec_ref(v_e_159_);
v___x_183_ = lean_unbox_uint32(v_val_181_);
lean_dec(v_val_181_);
v___x_184_ = lean_string_push(v_s_160_, v___x_183_);
v_e_159_ = v___x_182_;
v_s_160_ = v___x_184_;
goto _start;
}
else
{
lean_object* v___x_186_; lean_object* v___x_188_; 
lean_dec(v_a_177_);
lean_dec_ref(v_s_160_);
lean_dec_ref(v_e_159_);
v___x_186_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 0, v___x_186_);
v___x_188_ = v___x_179_;
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
else
{
lean_object* v_a_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_198_; 
lean_dec_ref(v_s_160_);
lean_dec_ref(v_e_159_);
v_a_191_ = lean_ctor_get(v___x_176_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v___x_176_);
if (v_isSharedCheck_198_ == 0)
{
v___x_193_ = v___x_176_;
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_a_191_);
lean_dec(v___x_176_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_196_; 
if (v_isShared_194_ == 0)
{
v___x_196_ = v___x_193_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_a_191_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
}
else
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
lean_dec_ref(v_e_159_);
v___x_199_ = l_Lean_mkStrLit(v_s_160_);
v___x_200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
v___x_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
return v___x_201_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___boxed(lean_object* v_e_202_, lean_object* v_s_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg(v_e_202_, v_s_203_, v_a_204_, v_a_205_, v_a_206_, v_a_207_);
lean_dec(v_a_207_);
lean_dec_ref(v_a_206_);
lean_dec(v_a_205_);
lean_dec_ref(v_a_204_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar(lean_object* v_e_210_, lean_object* v_s_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg(v_e_210_, v_s_211_, v_a_215_, v_a_216_, v_a_217_, v_a_218_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___boxed(lean_object* v_e_221_, lean_object* v_s_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar(v_e_221_, v_s_222_, v_a_223_, v_a_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
lean_dec(v_a_229_);
lean_dec_ref(v_a_228_);
lean_dec(v_a_227_);
lean_dec_ref(v_a_226_);
lean_dec(v_a_225_);
lean_dec_ref(v_a_224_);
lean_dec(v_a_223_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_String_reduceOfList___redArg(lean_object* v_e_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_243_ = ((lean_object*)(l_String_reduceOfList___redArg___closed__1));
v___x_244_ = lean_unsigned_to_nat(1u);
v___x_245_ = l_Lean_Expr_isAppOfArity(v_e_237_, v___x_243_, v___x_244_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_246_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
v___x_247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
return v___x_247_;
}
else
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_248_ = l_Lean_Expr_appArg_x21(v_e_237_);
v___x_249_ = ((lean_object*)(l_String_reduceOfList___redArg___closed__2));
v___x_250_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg(v___x_248_, v___x_249_, v_a_238_, v_a_239_, v_a_240_, v_a_241_);
return v___x_250_;
}
}
}
LEAN_EXPORT lean_object* l_String_reduceOfList___redArg___boxed(lean_object* v_e_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_String_reduceOfList___redArg(v_e_251_, v_a_252_, v_a_253_, v_a_254_, v_a_255_);
lean_dec(v_a_255_);
lean_dec_ref(v_a_254_);
lean_dec(v_a_253_);
lean_dec_ref(v_a_252_);
lean_dec_ref(v_e_251_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_String_reduceOfList(lean_object* v_e_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = l_String_reduceOfList___redArg(v_e_258_, v_a_262_, v_a_263_, v_a_264_, v_a_265_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_String_reduceOfList___boxed(lean_object* v_e_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_String_reduceOfList(v_e_268_, v_a_269_, v_a_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_, v_a_275_);
lean_dec(v_a_275_);
lean_dec_ref(v_a_274_);
lean_dec(v_a_273_);
lean_dec_ref(v_a_272_);
lean_dec(v_a_271_);
lean_dec_ref(v_a_270_);
lean_dec(v_a_269_);
lean_dec_ref(v_e_268_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20_(){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_292_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20_));
v___x_293_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20_));
v___x_294_ = lean_alloc_closure((void*)(l_String_reduceOfList___boxed), 9, 0);
v___x_295_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_292_, v___x_293_, v___x_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20____boxed(lean_object* v_a_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20_();
return v_res_297_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_22_(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = lean_alloc_closure((void*)(l_String_reduceOfList___boxed), 9, 0);
v___x_299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_301_; uint8_t v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_301_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20_));
v___x_302_ = 1;
v___x_303_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_22_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_22__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_22_);
v___x_304_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_301_, v___x_302_, v___x_303_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_22____boxed(lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_22_();
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_308_; uint8_t v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_308_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20_));
v___x_309_ = 1;
v___x_310_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_22_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_22__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_22_);
v___x_311_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_308_, v___x_309_, v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_24____boxed(lean_object* v_a_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_24_();
return v_res_313_;
}
}
static lean_object* _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__3(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_319_ = lean_box(0);
v___x_320_ = ((lean_object*)(l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__2));
v___x_321_ = l_Lean_mkConst(v___x_320_, v___x_319_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0(lean_object* v_nilFn_322_, lean_object* v_consFn_323_, lean_object* v_x_324_){
_start:
{
if (lean_obj_tag(v_x_324_) == 0)
{
lean_dec_ref(v_consFn_323_);
lean_inc_ref(v_nilFn_322_);
return v_nilFn_322_;
}
else
{
lean_object* v_head_325_; lean_object* v_tail_326_; lean_object* v___x_327_; uint32_t v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v_head_325_ = lean_ctor_get(v_x_324_, 0);
v_tail_326_ = lean_ctor_get(v_x_324_, 1);
v___x_327_ = lean_obj_once(&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__3, &l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__3_once, _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__3);
v___x_328_ = lean_unbox_uint32(v_head_325_);
v___x_329_ = lean_uint32_to_nat(v___x_328_);
v___x_330_ = l_Lean_mkRawNatLit(v___x_329_);
v___x_331_ = l_Lean_Expr_app___override(v___x_327_, v___x_330_);
lean_inc_ref(v_consFn_323_);
v___x_332_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0(v_nilFn_322_, v_consFn_323_, v_tail_326_);
v___x_333_ = l_Lean_mkAppB(v_consFn_323_, v___x_331_, v___x_332_);
return v___x_333_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___boxed(lean_object* v_nilFn_334_, lean_object* v_consFn_335_, lean_object* v_x_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0(v_nilFn_334_, v_consFn_335_, v_x_336_);
lean_dec(v_x_336_);
lean_dec_ref(v_nilFn_334_);
return v_res_337_;
}
}
static lean_object* _init_l_String_reduceToList___redArg___closed__3(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_344_ = lean_box(0);
v___x_345_ = ((lean_object*)(l_String_reduceToList___redArg___closed__2));
v___x_346_ = l_Lean_mkConst(v___x_345_, v___x_344_);
return v___x_346_;
}
}
static lean_object* _init_l_String_reduceToList___redArg___closed__4(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = lean_box(0);
v___x_348_ = l_unsafeCast___redArg(v___x_347_);
return v___x_348_;
}
}
static lean_object* _init_l_String_reduceToList___redArg___closed__5(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_349_ = lean_box(0);
v___x_350_ = lean_obj_once(&l_String_reduceToList___redArg___closed__4, &l_String_reduceToList___redArg___closed__4_once, _init_l_String_reduceToList___redArg___closed__4);
v___x_351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
lean_ctor_set(v___x_351_, 1, v___x_349_);
return v___x_351_;
}
}
static lean_object* _init_l_String_reduceToList___redArg___closed__6(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_352_ = lean_obj_once(&l_String_reduceToList___redArg___closed__5, &l_String_reduceToList___redArg___closed__5_once, _init_l_String_reduceToList___redArg___closed__5);
v___x_353_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__2));
v___x_354_ = l_Lean_mkConst(v___x_353_, v___x_352_);
return v___x_354_;
}
}
static lean_object* _init_l_String_reduceToList___redArg___closed__7(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v_nil_357_; 
v___x_355_ = lean_obj_once(&l_String_reduceToList___redArg___closed__3, &l_String_reduceToList___redArg___closed__3_once, _init_l_String_reduceToList___redArg___closed__3);
v___x_356_ = lean_obj_once(&l_String_reduceToList___redArg___closed__6, &l_String_reduceToList___redArg___closed__6_once, _init_l_String_reduceToList___redArg___closed__6);
v_nil_357_ = l_Lean_Expr_app___override(v___x_356_, v___x_355_);
return v_nil_357_;
}
}
static lean_object* _init_l_String_reduceToList___redArg___closed__8(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_358_ = lean_obj_once(&l_String_reduceToList___redArg___closed__5, &l_String_reduceToList___redArg___closed__5_once, _init_l_String_reduceToList___redArg___closed__5);
v___x_359_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceListChar___redArg___closed__4));
v___x_360_ = l_Lean_mkConst(v___x_359_, v___x_358_);
return v___x_360_;
}
}
static lean_object* _init_l_String_reduceToList___redArg___closed__9(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v_cons_363_; 
v___x_361_ = lean_obj_once(&l_String_reduceToList___redArg___closed__3, &l_String_reduceToList___redArg___closed__3_once, _init_l_String_reduceToList___redArg___closed__3);
v___x_362_ = lean_obj_once(&l_String_reduceToList___redArg___closed__8, &l_String_reduceToList___redArg___closed__8_once, _init_l_String_reduceToList___redArg___closed__8);
v_cons_363_ = l_Lean_Expr_app___override(v___x_362_, v___x_361_);
return v_cons_363_;
}
}
LEAN_EXPORT lean_object* l_String_reduceToList___redArg(lean_object* v_e_364_){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_366_ = ((lean_object*)(l_String_reduceToList___redArg___closed__1));
v___x_367_ = lean_unsigned_to_nat(1u);
v___x_368_ = l_Lean_Expr_isAppOfArity(v_e_364_, v___x_366_, v___x_367_);
if (v___x_368_ == 0)
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
v___x_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_370_, 0, v___x_369_);
return v___x_370_;
}
else
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_396_; 
v___x_371_ = l_Lean_Expr_appArg_x21(v_e_364_);
v___x_372_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_371_);
v_a_373_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_396_ == 0)
{
v___x_375_ = v___x_372_;
v_isShared_376_ = v_isSharedCheck_396_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_372_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_396_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
if (lean_obj_tag(v_a_373_) == 1)
{
lean_object* v_val_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_391_; 
v_val_377_ = lean_ctor_get(v_a_373_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v_a_373_);
if (v_isSharedCheck_391_ == 0)
{
v___x_379_ = v_a_373_;
v_isShared_380_ = v_isSharedCheck_391_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_val_377_);
lean_dec(v_a_373_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_391_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v_nil_381_; lean_object* v_cons_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_386_; 
v_nil_381_ = lean_obj_once(&l_String_reduceToList___redArg___closed__7, &l_String_reduceToList___redArg___closed__7_once, _init_l_String_reduceToList___redArg___closed__7);
v_cons_382_ = lean_obj_once(&l_String_reduceToList___redArg___closed__9, &l_String_reduceToList___redArg___closed__9_once, _init_l_String_reduceToList___redArg___closed__9);
v___x_383_ = lean_string_data(v_val_377_);
v___x_384_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0(v_nil_381_, v_cons_382_, v___x_383_);
lean_dec(v___x_383_);
if (v_isShared_380_ == 0)
{
lean_ctor_set_tag(v___x_379_, 0);
lean_ctor_set(v___x_379_, 0, v___x_384_);
v___x_386_ = v___x_379_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v___x_384_);
v___x_386_ = v_reuseFailAlloc_390_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
lean_object* v___x_388_; 
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v___x_386_);
v___x_388_ = v___x_375_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_386_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
else
{
lean_object* v___x_392_; lean_object* v___x_394_; 
lean_dec(v_a_373_);
v___x_392_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v___x_392_);
v___x_394_ = v___x_375_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v___x_392_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_reduceToList___redArg___boxed(lean_object* v_e_397_, lean_object* v_a_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_String_reduceToList___redArg(v_e_397_);
lean_dec_ref(v_e_397_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_String_reduceToList(lean_object* v_e_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = l_String_reduceToList___redArg(v_e_400_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_String_reduceToList___boxed(lean_object* v_e_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_String_reduceToList(v_e_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_, v_a_416_, v_a_417_);
lean_dec(v_a_417_);
lean_dec_ref(v_a_416_);
lean_dec(v_a_415_);
lean_dec_ref(v_a_414_);
lean_dec(v_a_413_);
lean_dec_ref(v_a_412_);
lean_dec(v_a_411_);
lean_dec_ref(v_e_410_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20_(){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_434_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20_));
v___x_435_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20_));
v___x_436_ = lean_alloc_closure((void*)(l_String_reduceToList___boxed), 9, 0);
v___x_437_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_434_, v___x_435_, v___x_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20____boxed(lean_object* v_a_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20_();
return v_res_439_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_22_(void){
_start:
{
lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_440_ = lean_alloc_closure((void*)(l_String_reduceToList___boxed), 9, 0);
v___x_441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_441_, 0, v___x_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_443_; uint8_t v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_443_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20_));
v___x_444_ = 1;
v___x_445_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_22_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_22__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_22_);
v___x_446_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_443_, v___x_444_, v___x_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_22____boxed(lean_object* v_a_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_22_();
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_450_; uint8_t v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_450_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20_));
v___x_451_ = 1;
v___x_452_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_22_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_22__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_22_);
v___x_453_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_450_, v___x_451_, v___x_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_24____boxed(lean_object* v_a_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_24_();
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_String_reducePush___redArg(lean_object* v_e_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_){
_start:
{
lean_object* v___x_466_; lean_object* v___x_467_; uint8_t v___x_468_; 
v___x_466_ = ((lean_object*)(l_String_reducePush___redArg___closed__1));
v___x_467_ = lean_unsigned_to_nat(2u);
v___x_468_ = l_Lean_Expr_isAppOfArity(v_e_460_, v___x_466_, v___x_467_);
if (v___x_468_ == 0)
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
v___x_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
return v___x_470_;
}
else
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_516_; 
v___x_471_ = l_Lean_Expr_appFn_x21(v_e_460_);
v___x_472_ = l_Lean_Expr_appArg_x21(v___x_471_);
lean_dec_ref(v___x_471_);
v___x_473_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_472_);
v_a_474_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_516_ == 0)
{
v___x_476_ = v___x_473_;
v_isShared_477_ = v_isSharedCheck_516_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_473_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_516_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
if (lean_obj_tag(v_a_474_) == 1)
{
lean_object* v_val_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
lean_del_object(v___x_476_);
v_val_478_ = lean_ctor_get(v_a_474_, 0);
lean_inc(v_val_478_);
lean_dec_ref_known(v_a_474_, 1);
v___x_479_ = l_Lean_Expr_appArg_x21(v_e_460_);
v___x_480_ = l_Lean_Meta_getCharValue_x3f(v___x_479_, v_a_461_, v_a_462_, v_a_463_, v_a_464_);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_503_; 
v_a_481_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_503_ == 0)
{
v___x_483_ = v___x_480_;
v_isShared_484_ = v_isSharedCheck_503_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___x_480_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_503_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
if (lean_obj_tag(v_a_481_) == 1)
{
lean_object* v_val_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_498_; 
v_val_485_ = lean_ctor_get(v_a_481_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v_a_481_);
if (v_isSharedCheck_498_ == 0)
{
v___x_487_ = v_a_481_;
v_isShared_488_ = v_isSharedCheck_498_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_val_485_);
lean_dec(v_a_481_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_498_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
uint32_t v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_493_; 
v___x_489_ = lean_unbox_uint32(v_val_485_);
lean_dec(v_val_485_);
v___x_490_ = lean_string_push(v_val_478_, v___x_489_);
v___x_491_ = l_Lean_mkStrLit(v___x_490_);
if (v_isShared_488_ == 0)
{
lean_ctor_set_tag(v___x_487_, 0);
lean_ctor_set(v___x_487_, 0, v___x_491_);
v___x_493_ = v___x_487_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v___x_491_);
v___x_493_ = v_reuseFailAlloc_497_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
lean_object* v___x_495_; 
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 0, v___x_493_);
v___x_495_ = v___x_483_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_493_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
}
}
else
{
lean_object* v___x_499_; lean_object* v___x_501_; 
lean_dec(v_a_481_);
lean_dec(v_val_478_);
v___x_499_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 0, v___x_499_);
v___x_501_ = v___x_483_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v___x_499_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
}
else
{
lean_object* v_a_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_511_; 
lean_dec(v_val_478_);
v_a_504_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_511_ == 0)
{
v___x_506_ = v___x_480_;
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_a_504_);
lean_dec(v___x_480_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_509_; 
if (v_isShared_507_ == 0)
{
v___x_509_ = v___x_506_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_a_504_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
}
}
else
{
lean_object* v___x_512_; lean_object* v___x_514_; 
lean_dec(v_a_474_);
v___x_512_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 0, v___x_512_);
v___x_514_ = v___x_476_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v___x_512_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_reducePush___redArg___boxed(lean_object* v_e_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_String_reducePush___redArg(v_e_517_, v_a_518_, v_a_519_, v_a_520_, v_a_521_);
lean_dec(v_a_521_);
lean_dec_ref(v_a_520_);
lean_dec(v_a_519_);
lean_dec_ref(v_a_518_);
lean_dec_ref(v_e_517_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_String_reducePush(lean_object* v_e_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = l_String_reducePush___redArg(v_e_524_, v_a_528_, v_a_529_, v_a_530_, v_a_531_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_String_reducePush___boxed(lean_object* v_e_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l_String_reducePush(v_e_534_, v_a_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_, v_a_541_);
lean_dec(v_a_541_);
lean_dec_ref(v_a_540_);
lean_dec(v_a_539_);
lean_dec_ref(v_a_538_);
lean_dec(v_a_537_);
lean_dec_ref(v_a_536_);
lean_dec(v_a_535_);
lean_dec_ref(v_e_534_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21_(){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_559_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21_));
v___x_560_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21_));
v___x_561_ = lean_alloc_closure((void*)(l_String_reducePush___boxed), 9, 0);
v___x_562_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_559_, v___x_560_, v___x_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21____boxed(lean_object* v_a_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21_();
return v_res_564_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_23_(void){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_565_ = lean_alloc_closure((void*)(l_String_reducePush___boxed), 9, 0);
v___x_566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_566_, 0, v___x_565_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_23_(){
_start:
{
lean_object* v___x_568_; uint8_t v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_568_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21_));
v___x_569_ = 1;
v___x_570_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_23_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_23__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_23_);
v___x_571_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_568_, v___x_569_, v___x_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_23____boxed(lean_object* v_a_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_23_();
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_25_(){
_start:
{
lean_object* v___x_575_; uint8_t v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_575_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21_));
v___x_576_ = 1;
v___x_577_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_23_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_23__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_23_);
v___x_578_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_575_, v___x_576_, v___x_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_25____boxed(lean_object* v_a_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_25_();
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l_String_reduceSingleton___redArg(lean_object* v_e_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; uint8_t v___x_593_; 
v___x_591_ = ((lean_object*)(l_String_reduceSingleton___redArg___closed__1));
v___x_592_ = lean_unsigned_to_nat(1u);
v___x_593_ = l_Lean_Expr_isAppOfArity(v_e_585_, v___x_591_, v___x_592_);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_594_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
v___x_595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
return v___x_595_;
}
else
{
lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_596_ = l_Lean_Expr_appArg_x21(v_e_585_);
v___x_597_ = l_Lean_Meta_getCharValue_x3f(v___x_596_, v_a_586_, v_a_587_, v_a_588_, v_a_589_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_621_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_621_ == 0)
{
v___x_600_ = v___x_597_;
v_isShared_601_ = v_isSharedCheck_621_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_597_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_621_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
if (lean_obj_tag(v_a_598_) == 1)
{
lean_object* v_val_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_616_; 
v_val_602_ = lean_ctor_get(v_a_598_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v_a_598_);
if (v_isSharedCheck_616_ == 0)
{
v___x_604_ = v_a_598_;
v_isShared_605_ = v_isSharedCheck_616_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_val_602_);
lean_dec(v_a_598_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_616_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_606_; uint32_t v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_611_; 
v___x_606_ = ((lean_object*)(l_String_reduceOfList___redArg___closed__2));
v___x_607_ = lean_unbox_uint32(v_val_602_);
lean_dec(v_val_602_);
v___x_608_ = lean_string_push(v___x_606_, v___x_607_);
v___x_609_ = l_Lean_mkStrLit(v___x_608_);
if (v_isShared_605_ == 0)
{
lean_ctor_set_tag(v___x_604_, 0);
lean_ctor_set(v___x_604_, 0, v___x_609_);
v___x_611_ = v___x_604_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v___x_609_);
v___x_611_ = v_reuseFailAlloc_615_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
lean_object* v___x_613_; 
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 0, v___x_611_);
v___x_613_ = v___x_600_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v___x_611_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
}
else
{
lean_object* v___x_617_; lean_object* v___x_619_; 
lean_dec(v_a_598_);
v___x_617_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 0, v___x_617_);
v___x_619_ = v___x_600_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v___x_617_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
return v___x_619_;
}
}
}
}
else
{
lean_object* v_a_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_629_; 
v_a_622_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_629_ == 0)
{
v___x_624_ = v___x_597_;
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_a_622_);
lean_dec(v___x_597_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_627_; 
if (v_isShared_625_ == 0)
{
v___x_627_ = v___x_624_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_a_622_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_reduceSingleton___redArg___boxed(lean_object* v_e_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_String_reduceSingleton___redArg(v_e_630_, v_a_631_, v_a_632_, v_a_633_, v_a_634_);
lean_dec(v_a_634_);
lean_dec_ref(v_a_633_);
lean_dec(v_a_632_);
lean_dec_ref(v_a_631_);
lean_dec_ref(v_e_630_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_String_reduceSingleton(lean_object* v_e_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_){
_start:
{
lean_object* v___x_646_; 
v___x_646_ = l_String_reduceSingleton___redArg(v_e_637_, v_a_641_, v_a_642_, v_a_643_, v_a_644_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_String_reduceSingleton___boxed(lean_object* v_e_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_){
_start:
{
lean_object* v_res_656_; 
v_res_656_ = l_String_reduceSingleton(v_e_647_, v_a_648_, v_a_649_, v_a_650_, v_a_651_, v_a_652_, v_a_653_, v_a_654_);
lean_dec(v_a_654_);
lean_dec_ref(v_a_653_);
lean_dec(v_a_652_);
lean_dec_ref(v_a_651_);
lean_dec(v_a_650_);
lean_dec_ref(v_a_649_);
lean_dec(v_a_648_);
lean_dec_ref(v_e_647_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20_(){
_start:
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_671_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20_));
v___x_672_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20_));
v___x_673_ = lean_alloc_closure((void*)(l_String_reduceSingleton___boxed), 9, 0);
v___x_674_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_671_, v___x_672_, v___x_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20____boxed(lean_object* v_a_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20_();
return v_res_676_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_22_(void){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = lean_alloc_closure((void*)(l_String_reduceSingleton___boxed), 9, 0);
v___x_678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_678_, 0, v___x_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_680_; uint8_t v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_680_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20_));
v___x_681_ = 1;
v___x_682_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_22_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_22__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_22_);
v___x_683_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_680_, v___x_681_, v___x_682_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_22____boxed(lean_object* v_a_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_22_();
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_687_; uint8_t v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_687_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20_));
v___x_688_ = 1;
v___x_689_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_22_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_22__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_22_);
v___x_690_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_687_, v___x_688_, v___x_689_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_24____boxed(lean_object* v_a_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_24_();
return v_res_692_;
}
}
static lean_object* _init_l_String_reduceToSingleton___redArg___closed__0(void){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_693_ = lean_box(0);
v___x_694_ = ((lean_object*)(l_String_reduceSingleton___redArg___closed__1));
v___x_695_ = l_Lean_mkConst(v___x_694_, v___x_693_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_String_reduceToSingleton___redArg(lean_object* v_e_696_){
_start:
{
lean_object* v___x_701_; lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_731_; 
v___x_701_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v_e_696_);
v_a_702_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_731_ == 0)
{
v___x_704_ = v___x_701_;
v_isShared_705_ = v_isSharedCheck_731_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v___x_701_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_731_;
goto v_resetjp_703_;
}
v___jp_698_:
{
lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_699_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
v___x_700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
return v___x_700_;
}
v_resetjp_703_:
{
if (lean_obj_tag(v_a_702_) == 1)
{
lean_object* v_val_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_726_; 
v_val_706_ = lean_ctor_get(v_a_702_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v_a_702_);
if (v_isSharedCheck_726_ == 0)
{
v___x_708_ = v_a_702_;
v_isShared_709_ = v_isSharedCheck_726_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_val_706_);
lean_dec(v_a_702_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_726_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_710_; 
v___x_710_ = lean_string_data(v_val_706_);
if (lean_obj_tag(v___x_710_) == 1)
{
lean_object* v_tail_711_; 
v_tail_711_ = lean_ctor_get(v___x_710_, 1);
lean_inc(v_tail_711_);
if (lean_obj_tag(v_tail_711_) == 0)
{
lean_object* v_head_712_; lean_object* v___x_713_; lean_object* v___x_714_; uint32_t v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_721_; 
v_head_712_ = lean_ctor_get(v___x_710_, 0);
lean_inc(v_head_712_);
lean_dec_ref_known(v___x_710_, 2);
v___x_713_ = lean_obj_once(&l_String_reduceToSingleton___redArg___closed__0, &l_String_reduceToSingleton___redArg___closed__0_once, _init_l_String_reduceToSingleton___redArg___closed__0);
v___x_714_ = lean_obj_once(&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__3, &l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__3_once, _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00String_reduceToList_spec__0___closed__3);
v___x_715_ = lean_unbox_uint32(v_head_712_);
lean_dec(v_head_712_);
v___x_716_ = lean_uint32_to_nat(v___x_715_);
v___x_717_ = l_Lean_mkRawNatLit(v___x_716_);
v___x_718_ = l_Lean_Expr_app___override(v___x_714_, v___x_717_);
v___x_719_ = l_Lean_Expr_app___override(v___x_713_, v___x_718_);
if (v_isShared_709_ == 0)
{
lean_ctor_set_tag(v___x_708_, 0);
lean_ctor_set(v___x_708_, 0, v___x_719_);
v___x_721_ = v___x_708_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v___x_719_);
v___x_721_ = v_reuseFailAlloc_725_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
lean_object* v___x_723_; 
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 0, v___x_721_);
v___x_723_ = v___x_704_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___x_721_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
else
{
lean_dec(v_tail_711_);
lean_dec_ref_known(v___x_710_, 2);
lean_del_object(v___x_708_);
lean_del_object(v___x_704_);
goto v___jp_698_;
}
}
else
{
lean_dec(v___x_710_);
lean_del_object(v___x_708_);
lean_del_object(v___x_704_);
goto v___jp_698_;
}
}
}
else
{
lean_object* v___x_727_; lean_object* v___x_729_; 
lean_dec(v_a_702_);
v___x_727_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 0, v___x_727_);
v___x_729_ = v___x_704_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v___x_727_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_reduceToSingleton___redArg___boxed(lean_object* v_e_732_, lean_object* v_a_733_){
_start:
{
lean_object* v_res_734_; 
v_res_734_ = l_String_reduceToSingleton___redArg(v_e_732_);
return v_res_734_;
}
}
LEAN_EXPORT lean_object* l_String_reduceToSingleton(lean_object* v_e_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = l_String_reduceToSingleton___redArg(v_e_735_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_String_reduceToSingleton___boxed(lean_object* v_e_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_String_reduceToSingleton(v_e_745_, v_a_746_, v_a_747_, v_a_748_, v_a_749_, v_a_750_, v_a_751_, v_a_752_);
lean_dec(v_a_752_);
lean_dec_ref(v_a_751_);
lean_dec(v_a_750_);
lean_dec_ref(v_a_749_);
lean_dec(v_a_748_);
lean_dec_ref(v_a_747_);
lean_dec(v_a_746_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19_(){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_764_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19_));
v___x_765_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19_));
v___x_766_ = lean_alloc_closure((void*)(l_String_reduceToSingleton___boxed), 9, 0);
v___x_767_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_764_, v___x_765_, v___x_766_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19____boxed(lean_object* v_a_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19_();
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg(lean_object* v_declName_772_, lean_object* v_arity_773_, lean_object* v_op_774_, lean_object* v_e_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_){
_start:
{
uint8_t v___x_781_; 
v___x_781_ = l_Lean_Expr_isAppOfArity(v_e_775_, v_declName_772_, v_arity_773_);
if (v___x_781_ == 0)
{
lean_object* v___x_782_; lean_object* v___x_783_; 
lean_dec_ref(v_e_775_);
lean_dec_ref(v_op_774_);
v___x_782_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
v___x_783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_783_, 0, v___x_782_);
return v___x_783_;
}
else
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_811_; 
v___x_784_ = l_Lean_Expr_appFn_x21(v_e_775_);
v___x_785_ = l_Lean_Expr_appArg_x21(v___x_784_);
lean_dec_ref(v___x_784_);
v___x_786_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_785_);
v_a_787_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_811_ == 0)
{
v___x_789_ = v___x_786_;
v_isShared_790_ = v_isSharedCheck_811_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v___x_786_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_811_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
if (lean_obj_tag(v_a_787_) == 1)
{
lean_object* v_val_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_806_; 
lean_del_object(v___x_789_);
v_val_791_ = lean_ctor_get(v_a_787_, 0);
lean_inc(v_val_791_);
lean_dec_ref_known(v_a_787_, 1);
v___x_792_ = l_Lean_Expr_appArg_x21(v_e_775_);
v___x_793_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_792_);
v_a_794_ = lean_ctor_get(v___x_793_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_806_ == 0)
{
v___x_796_ = v___x_793_;
v_isShared_797_ = v_isSharedCheck_806_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_793_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_806_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
if (lean_obj_tag(v_a_794_) == 1)
{
lean_object* v_val_798_; lean_object* v___x_799_; uint8_t v___x_800_; lean_object* v___x_801_; 
lean_del_object(v___x_796_);
v_val_798_ = lean_ctor_get(v_a_794_, 0);
lean_inc(v_val_798_);
lean_dec_ref_known(v_a_794_, 1);
v___x_799_ = lean_apply_2(v_op_774_, v_val_791_, v_val_798_);
v___x_800_ = lean_unbox(v___x_799_);
v___x_801_ = l_Lean_Meta_Simp_evalPropStep___redArg(v_e_775_, v___x_800_, v_a_776_, v_a_777_, v_a_778_, v_a_779_);
return v___x_801_;
}
else
{
lean_object* v___x_802_; lean_object* v___x_804_; 
lean_dec(v_a_794_);
lean_dec(v_val_791_);
lean_dec_ref(v_e_775_);
lean_dec_ref(v_op_774_);
v___x_802_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 0, v___x_802_);
v___x_804_ = v___x_796_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v___x_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
else
{
lean_object* v___x_807_; lean_object* v___x_809_; 
lean_dec(v_a_787_);
lean_dec_ref(v_e_775_);
lean_dec_ref(v_op_774_);
v___x_807_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 0, v___x_807_);
v___x_809_ = v___x_789_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_807_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___boxed(lean_object* v_declName_812_, lean_object* v_arity_813_, lean_object* v_op_814_, lean_object* v_e_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg(v_declName_812_, v_arity_813_, v_op_814_, v_e_815_, v_a_816_, v_a_817_, v_a_818_, v_a_819_);
lean_dec(v_a_819_);
lean_dec_ref(v_a_818_);
lean_dec(v_a_817_);
lean_dec_ref(v_a_816_);
lean_dec(v_declName_812_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred(lean_object* v_declName_822_, lean_object* v_arity_823_, lean_object* v_op_824_, lean_object* v_e_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_){
_start:
{
uint8_t v___x_834_; 
v___x_834_ = l_Lean_Expr_isAppOfArity(v_e_825_, v_declName_822_, v_arity_823_);
if (v___x_834_ == 0)
{
lean_object* v___x_835_; lean_object* v___x_836_; 
lean_dec_ref(v_e_825_);
lean_dec_ref(v_op_824_);
v___x_835_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
v___x_836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
return v___x_836_;
}
else
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v_a_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_864_; 
v___x_837_ = l_Lean_Expr_appFn_x21(v_e_825_);
v___x_838_ = l_Lean_Expr_appArg_x21(v___x_837_);
lean_dec_ref(v___x_837_);
v___x_839_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_838_);
v_a_840_ = lean_ctor_get(v___x_839_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_839_);
if (v_isSharedCheck_864_ == 0)
{
v___x_842_ = v___x_839_;
v_isShared_843_ = v_isSharedCheck_864_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_a_840_);
lean_dec(v___x_839_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_864_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
if (lean_obj_tag(v_a_840_) == 1)
{
lean_object* v_val_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v_a_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_859_; 
lean_del_object(v___x_842_);
v_val_844_ = lean_ctor_get(v_a_840_, 0);
lean_inc(v_val_844_);
lean_dec_ref_known(v_a_840_, 1);
v___x_845_ = l_Lean_Expr_appArg_x21(v_e_825_);
v___x_846_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_845_);
v_a_847_ = lean_ctor_get(v___x_846_, 0);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_846_);
if (v_isSharedCheck_859_ == 0)
{
v___x_849_ = v___x_846_;
v_isShared_850_ = v_isSharedCheck_859_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_a_847_);
lean_dec(v___x_846_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_859_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
if (lean_obj_tag(v_a_847_) == 1)
{
lean_object* v_val_851_; lean_object* v___x_852_; uint8_t v___x_853_; lean_object* v___x_854_; 
lean_del_object(v___x_849_);
v_val_851_ = lean_ctor_get(v_a_847_, 0);
lean_inc(v_val_851_);
lean_dec_ref_known(v_a_847_, 1);
v___x_852_ = lean_apply_2(v_op_824_, v_val_844_, v_val_851_);
v___x_853_ = lean_unbox(v___x_852_);
v___x_854_ = l_Lean_Meta_Simp_evalPropStep___redArg(v_e_825_, v___x_853_, v_a_829_, v_a_830_, v_a_831_, v_a_832_);
return v___x_854_;
}
else
{
lean_object* v___x_855_; lean_object* v___x_857_; 
lean_dec(v_a_847_);
lean_dec(v_val_844_);
lean_dec_ref(v_e_825_);
lean_dec_ref(v_op_824_);
v___x_855_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
if (v_isShared_850_ == 0)
{
lean_ctor_set(v___x_849_, 0, v___x_855_);
v___x_857_ = v___x_849_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v___x_855_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
return v___x_857_;
}
}
}
}
else
{
lean_object* v___x_860_; lean_object* v___x_862_; 
lean_dec(v_a_840_);
lean_dec_ref(v_e_825_);
lean_dec_ref(v_op_824_);
v___x_860_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 0, v___x_860_);
v___x_862_ = v___x_842_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v___x_860_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___boxed(lean_object* v_declName_865_, lean_object* v_arity_866_, lean_object* v_op_867_, lean_object* v_e_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred(v_declName_865_, v_arity_866_, v_op_867_, v_e_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_);
lean_dec(v_a_875_);
lean_dec_ref(v_a_874_);
lean_dec(v_a_873_);
lean_dec_ref(v_a_872_);
lean_dec(v_a_871_);
lean_dec_ref(v_a_870_);
lean_dec(v_a_869_);
lean_dec(v_declName_865_);
return v_res_877_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__3(void){
_start:
{
lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_883_ = lean_box(0);
v___x_884_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__2));
v___x_885_ = l_Lean_mkConst(v___x_884_, v___x_883_);
return v___x_885_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__6(void){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_890_ = lean_box(0);
v___x_891_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__5));
v___x_892_ = l_Lean_mkConst(v___x_891_, v___x_890_);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg(lean_object* v_declName_893_, lean_object* v_arity_894_, lean_object* v_op_895_, lean_object* v_e_896_){
_start:
{
uint8_t v___x_898_; 
v___x_898_ = l_Lean_Expr_isAppOfArity(v_e_896_, v_declName_893_, v_arity_894_);
if (v___x_898_ == 0)
{
lean_object* v___x_899_; lean_object* v___x_900_; 
lean_dec_ref(v_op_895_);
v___x_899_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
v___x_900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
return v___x_900_;
}
else
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_941_; 
v___x_901_ = l_Lean_Expr_appFn_x21(v_e_896_);
v___x_902_ = l_Lean_Expr_appArg_x21(v___x_901_);
lean_dec_ref(v___x_901_);
v___x_903_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_902_);
v_a_904_ = lean_ctor_get(v___x_903_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_941_ == 0)
{
v___x_906_ = v___x_903_;
v_isShared_907_ = v_isSharedCheck_941_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_903_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_941_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
if (lean_obj_tag(v_a_904_) == 1)
{
lean_object* v_val_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_936_; 
v_val_908_ = lean_ctor_get(v_a_904_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v_a_904_);
if (v_isSharedCheck_936_ == 0)
{
v___x_910_ = v_a_904_;
v_isShared_911_ = v_isSharedCheck_936_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_val_908_);
lean_dec(v_a_904_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_936_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v_a_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_935_; 
v___x_912_ = l_Lean_Expr_appArg_x21(v_e_896_);
v___x_913_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_912_);
v_a_914_ = lean_ctor_get(v___x_913_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_935_ == 0)
{
v___x_916_ = v___x_913_;
v_isShared_917_ = v_isSharedCheck_935_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_a_914_);
lean_dec(v___x_913_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_935_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___y_919_; 
if (lean_obj_tag(v_a_914_) == 1)
{
lean_object* v_val_926_; lean_object* v___x_927_; uint8_t v___x_928_; 
lean_del_object(v___x_906_);
v_val_926_ = lean_ctor_get(v_a_914_, 0);
lean_inc(v_val_926_);
lean_dec_ref_known(v_a_914_, 1);
v___x_927_ = lean_apply_2(v_op_895_, v_val_908_, v_val_926_);
v___x_928_ = lean_unbox(v___x_927_);
if (v___x_928_ == 0)
{
lean_object* v___x_929_; 
v___x_929_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__3, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__3);
v___y_919_ = v___x_929_;
goto v___jp_918_;
}
else
{
lean_object* v___x_930_; 
v___x_930_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__6, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__6_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__6);
v___y_919_ = v___x_930_;
goto v___jp_918_;
}
}
else
{
lean_object* v___x_931_; lean_object* v___x_933_; 
lean_del_object(v___x_916_);
lean_dec(v_a_914_);
lean_del_object(v___x_910_);
lean_dec(v_val_908_);
lean_dec_ref(v_op_895_);
v___x_931_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 0, v___x_931_);
v___x_933_ = v___x_906_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v___x_931_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
v___jp_918_:
{
lean_object* v___x_921_; 
lean_inc_ref(v___y_919_);
if (v_isShared_911_ == 0)
{
lean_ctor_set_tag(v___x_910_, 0);
lean_ctor_set(v___x_910_, 0, v___y_919_);
v___x_921_ = v___x_910_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v___y_919_);
v___x_921_ = v_reuseFailAlloc_925_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
lean_object* v___x_923_; 
if (v_isShared_917_ == 0)
{
lean_ctor_set(v___x_916_, 0, v___x_921_);
v___x_923_ = v___x_916_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_921_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
}
}
}
else
{
lean_object* v___x_937_; lean_object* v___x_939_; 
lean_dec(v_a_904_);
lean_dec_ref(v_op_895_);
v___x_937_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 0, v___x_937_);
v___x_939_ = v___x_906_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v___x_937_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___boxed(lean_object* v_declName_942_, lean_object* v_arity_943_, lean_object* v_op_944_, lean_object* v_e_945_, lean_object* v_a_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg(v_declName_942_, v_arity_943_, v_op_944_, v_e_945_);
lean_dec_ref(v_e_945_);
lean_dec(v_declName_942_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred(lean_object* v_declName_948_, lean_object* v_arity_949_, lean_object* v_op_950_, lean_object* v_e_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_){
_start:
{
uint8_t v___x_960_; 
v___x_960_ = l_Lean_Expr_isAppOfArity(v_e_951_, v_declName_948_, v_arity_949_);
if (v___x_960_ == 0)
{
lean_object* v___x_961_; lean_object* v___x_962_; 
lean_dec_ref(v_op_950_);
v___x_961_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
v___x_962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_962_, 0, v___x_961_);
return v___x_962_;
}
else
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_1003_; 
v___x_963_ = l_Lean_Expr_appFn_x21(v_e_951_);
v___x_964_ = l_Lean_Expr_appArg_x21(v___x_963_);
lean_dec_ref(v___x_963_);
v___x_965_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_964_);
v_a_966_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_968_ = v___x_965_;
v_isShared_969_ = v_isSharedCheck_1003_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_965_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_1003_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
if (lean_obj_tag(v_a_966_) == 1)
{
lean_object* v_val_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_998_; 
v_val_970_ = lean_ctor_get(v_a_966_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v_a_966_);
if (v_isSharedCheck_998_ == 0)
{
v___x_972_ = v_a_966_;
v_isShared_973_ = v_isSharedCheck_998_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_val_970_);
lean_dec(v_a_966_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_998_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_997_; 
v___x_974_ = l_Lean_Expr_appArg_x21(v_e_951_);
v___x_975_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_974_);
v_a_976_ = lean_ctor_get(v___x_975_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_997_ == 0)
{
v___x_978_ = v___x_975_;
v_isShared_979_ = v_isSharedCheck_997_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_975_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_997_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___y_981_; 
if (lean_obj_tag(v_a_976_) == 1)
{
lean_object* v_val_988_; lean_object* v___x_989_; uint8_t v___x_990_; 
lean_del_object(v___x_968_);
v_val_988_ = lean_ctor_get(v_a_976_, 0);
lean_inc(v_val_988_);
lean_dec_ref_known(v_a_976_, 1);
v___x_989_ = lean_apply_2(v_op_950_, v_val_970_, v_val_988_);
v___x_990_ = lean_unbox(v___x_989_);
if (v___x_990_ == 0)
{
lean_object* v___x_991_; 
v___x_991_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__3, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__3);
v___y_981_ = v___x_991_;
goto v___jp_980_;
}
else
{
lean_object* v___x_992_; 
v___x_992_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__6, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__6_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__6);
v___y_981_ = v___x_992_;
goto v___jp_980_;
}
}
else
{
lean_object* v___x_993_; lean_object* v___x_995_; 
lean_del_object(v___x_978_);
lean_dec(v_a_976_);
lean_del_object(v___x_972_);
lean_dec(v_val_970_);
lean_dec_ref(v_op_950_);
v___x_993_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 0, v___x_993_);
v___x_995_ = v___x_968_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v___x_993_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
v___jp_980_:
{
lean_object* v___x_983_; 
lean_inc_ref(v___y_981_);
if (v_isShared_973_ == 0)
{
lean_ctor_set_tag(v___x_972_, 0);
lean_ctor_set(v___x_972_, 0, v___y_981_);
v___x_983_ = v___x_972_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v___y_981_);
v___x_983_ = v_reuseFailAlloc_987_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
lean_object* v___x_985_; 
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 0, v___x_983_);
v___x_985_ = v___x_978_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v___x_983_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
}
}
}
else
{
lean_object* v___x_999_; lean_object* v___x_1001_; 
lean_dec(v_a_966_);
lean_dec_ref(v_op_950_);
v___x_999_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 0, v___x_999_);
v___x_1001_ = v___x_968_;
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___boxed(lean_object* v_declName_1004_, lean_object* v_arity_1005_, lean_object* v_op_1006_, lean_object* v_e_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred(v_declName_1004_, v_arity_1005_, v_op_1006_, v_e_1007_, v_a_1008_, v_a_1009_, v_a_1010_, v_a_1011_, v_a_1012_, v_a_1013_, v_a_1014_);
lean_dec(v_a_1014_);
lean_dec_ref(v_a_1013_);
lean_dec(v_a_1012_);
lean_dec_ref(v_a_1011_);
lean_dec(v_a_1010_);
lean_dec_ref(v_a_1009_);
lean_dec(v_a_1008_);
lean_dec_ref(v_e_1007_);
lean_dec(v_declName_1004_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l_String_reduceLT___redArg(lean_object* v_e_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_){
_start:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; uint8_t v___x_1030_; 
v___x_1028_ = ((lean_object*)(l_String_reduceLT___redArg___closed__2));
v___x_1029_ = lean_unsigned_to_nat(4u);
v___x_1030_ = l_Lean_Expr_isAppOfArity(v_e_1022_, v___x_1028_, v___x_1029_);
if (v___x_1030_ == 0)
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
lean_dec_ref(v_e_1022_);
v___x_1031_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
v___x_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
return v___x_1032_;
}
else
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v_a_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1059_; 
v___x_1033_ = l_Lean_Expr_appFn_x21(v_e_1022_);
v___x_1034_ = l_Lean_Expr_appArg_x21(v___x_1033_);
lean_dec_ref(v___x_1033_);
v___x_1035_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_1034_);
v_a_1036_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1038_ = v___x_1035_;
v_isShared_1039_ = v_isSharedCheck_1059_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_a_1036_);
lean_dec(v___x_1035_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1059_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
if (lean_obj_tag(v_a_1036_) == 1)
{
lean_object* v_val_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1054_; 
lean_del_object(v___x_1038_);
v_val_1040_ = lean_ctor_get(v_a_1036_, 0);
lean_inc(v_val_1040_);
lean_dec_ref_known(v_a_1036_, 1);
v___x_1041_ = l_Lean_Expr_appArg_x21(v_e_1022_);
v___x_1042_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_1041_);
v_a_1043_ = lean_ctor_get(v___x_1042_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1045_ = v___x_1042_;
v_isShared_1046_ = v_isSharedCheck_1054_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_dec(v___x_1042_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1054_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
if (lean_obj_tag(v_a_1043_) == 1)
{
lean_object* v_val_1047_; uint8_t v___x_1048_; lean_object* v___x_1049_; 
lean_del_object(v___x_1045_);
v_val_1047_ = lean_ctor_get(v_a_1043_, 0);
lean_inc(v_val_1047_);
lean_dec_ref_known(v_a_1043_, 1);
v___x_1048_ = lean_string_dec_lt(v_val_1040_, v_val_1047_);
lean_dec(v_val_1047_);
lean_dec(v_val_1040_);
v___x_1049_ = l_Lean_Meta_Simp_evalPropStep___redArg(v_e_1022_, v___x_1048_, v_a_1023_, v_a_1024_, v_a_1025_, v_a_1026_);
return v___x_1049_;
}
else
{
lean_object* v___x_1050_; lean_object* v___x_1052_; 
lean_dec(v_a_1043_);
lean_dec(v_val_1040_);
lean_dec_ref(v_e_1022_);
v___x_1050_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
if (v_isShared_1046_ == 0)
{
lean_ctor_set(v___x_1045_, 0, v___x_1050_);
v___x_1052_ = v___x_1045_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v___x_1050_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
}
}
else
{
lean_object* v___x_1055_; lean_object* v___x_1057_; 
lean_dec(v_a_1036_);
lean_dec_ref(v_e_1022_);
v___x_1055_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
if (v_isShared_1039_ == 0)
{
lean_ctor_set(v___x_1038_, 0, v___x_1055_);
v___x_1057_ = v___x_1038_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1055_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_reduceLT___redArg___boxed(lean_object* v_e_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l_String_reduceLT___redArg(v_e_1060_, v_a_1061_, v_a_1062_, v_a_1063_, v_a_1064_);
lean_dec(v_a_1064_);
lean_dec_ref(v_a_1063_);
lean_dec(v_a_1062_);
lean_dec_ref(v_a_1061_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l_String_reduceLT(lean_object* v_e_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l_String_reduceLT___redArg(v_e_1067_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_String_reduceLT___boxed(lean_object* v_e_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_String_reduceLT(v_e_1077_, v_a_1078_, v_a_1079_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_);
lean_dec(v_a_1084_);
lean_dec_ref(v_a_1083_);
lean_dec(v_a_1082_);
lean_dec_ref(v_a_1081_);
lean_dec(v_a_1080_);
lean_dec_ref(v_a_1079_);
lean_dec(v_a_1078_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1105_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27_));
v___x_1106_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27_));
v___x_1107_ = lean_alloc_closure((void*)(l_String_reduceLT___boxed), 9, 0);
v___x_1108_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_1105_, v___x_1106_, v___x_1107_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27____boxed(lean_object* v_a_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27_();
return v_res_1110_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_29_(void){
_start:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1111_ = lean_alloc_closure((void*)(l_String_reduceLT___boxed), 9, 0);
v___x_1112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_29_(){
_start:
{
lean_object* v___x_1114_; uint8_t v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1114_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27_));
v___x_1115_ = 1;
v___x_1116_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_29_);
v___x_1117_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1114_, v___x_1115_, v___x_1116_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_29____boxed(lean_object* v_a_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_29_();
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_31_(){
_start:
{
lean_object* v___x_1121_; uint8_t v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1121_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27_));
v___x_1122_ = 1;
v___x_1123_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_29_);
v___x_1124_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1121_, v___x_1122_, v___x_1123_);
return v___x_1124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_31____boxed(lean_object* v_a_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_31_();
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_String_reduceLE___redArg(lean_object* v_e_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; uint8_t v___x_1140_; 
v___x_1138_ = ((lean_object*)(l_String_reduceLE___redArg___closed__2));
v___x_1139_ = lean_unsigned_to_nat(4u);
v___x_1140_ = l_Lean_Expr_isAppOfArity(v_e_1132_, v___x_1138_, v___x_1139_);
if (v___x_1140_ == 0)
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
lean_dec_ref(v_e_1132_);
v___x_1141_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
v___x_1142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1141_);
return v___x_1142_;
}
else
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1169_; 
v___x_1143_ = l_Lean_Expr_appFn_x21(v_e_1132_);
v___x_1144_ = l_Lean_Expr_appArg_x21(v___x_1143_);
lean_dec_ref(v___x_1143_);
v___x_1145_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_1144_);
v_a_1146_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1169_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1148_ = v___x_1145_;
v_isShared_1149_ = v_isSharedCheck_1169_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_1145_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1169_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
if (lean_obj_tag(v_a_1146_) == 1)
{
lean_object* v_val_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1164_; 
lean_del_object(v___x_1148_);
v_val_1150_ = lean_ctor_get(v_a_1146_, 0);
lean_inc(v_val_1150_);
lean_dec_ref_known(v_a_1146_, 1);
v___x_1151_ = l_Lean_Expr_appArg_x21(v_e_1132_);
v___x_1152_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_1151_);
v_a_1153_ = lean_ctor_get(v___x_1152_, 0);
v_isSharedCheck_1164_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1155_ = v___x_1152_;
v_isShared_1156_ = v_isSharedCheck_1164_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v___x_1152_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1164_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
if (lean_obj_tag(v_a_1153_) == 1)
{
lean_object* v_val_1157_; uint8_t v___x_1158_; lean_object* v___x_1159_; 
lean_del_object(v___x_1155_);
v_val_1157_ = lean_ctor_get(v_a_1153_, 0);
lean_inc(v_val_1157_);
lean_dec_ref_known(v_a_1153_, 1);
v___x_1158_ = l_String_decLE(v_val_1150_, v_val_1157_);
lean_dec(v_val_1157_);
lean_dec(v_val_1150_);
v___x_1159_ = l_Lean_Meta_Simp_evalPropStep___redArg(v_e_1132_, v___x_1158_, v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_);
return v___x_1159_;
}
else
{
lean_object* v___x_1160_; lean_object* v___x_1162_; 
lean_dec(v_a_1153_);
lean_dec(v_val_1150_);
lean_dec_ref(v_e_1132_);
v___x_1160_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 0, v___x_1160_);
v___x_1162_ = v___x_1155_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v___x_1160_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
}
}
else
{
lean_object* v___x_1165_; lean_object* v___x_1167_; 
lean_dec(v_a_1146_);
lean_dec_ref(v_e_1132_);
v___x_1165_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
if (v_isShared_1149_ == 0)
{
lean_ctor_set(v___x_1148_, 0, v___x_1165_);
v___x_1167_ = v___x_1148_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v___x_1165_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
return v___x_1167_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_reduceLE___redArg___boxed(lean_object* v_e_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_){
_start:
{
lean_object* v_res_1176_; 
v_res_1176_ = l_String_reduceLE___redArg(v_e_1170_, v_a_1171_, v_a_1172_, v_a_1173_, v_a_1174_);
lean_dec(v_a_1174_);
lean_dec_ref(v_a_1173_);
lean_dec(v_a_1172_);
lean_dec_ref(v_a_1171_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l_String_reduceLE(lean_object* v_e_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_){
_start:
{
lean_object* v___x_1186_; 
v___x_1186_ = l_String_reduceLE___redArg(v_e_1177_, v_a_1181_, v_a_1182_, v_a_1183_, v_a_1184_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_String_reduceLE___boxed(lean_object* v_e_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_, lean_object* v_a_1190_, lean_object* v_a_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_String_reduceLE(v_e_1187_, v_a_1188_, v_a_1189_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_);
lean_dec(v_a_1194_);
lean_dec_ref(v_a_1193_);
lean_dec(v_a_1192_);
lean_dec_ref(v_a_1191_);
lean_dec(v_a_1190_);
lean_dec_ref(v_a_1189_);
lean_dec(v_a_1188_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1215_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27_));
v___x_1216_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27_));
v___x_1217_ = lean_alloc_closure((void*)(l_String_reduceLE___boxed), 9, 0);
v___x_1218_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_1215_, v___x_1216_, v___x_1217_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27____boxed(lean_object* v_a_1219_){
_start:
{
lean_object* v_res_1220_; 
v_res_1220_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27_();
return v_res_1220_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_29_(void){
_start:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1221_ = lean_alloc_closure((void*)(l_String_reduceLE___boxed), 9, 0);
v___x_1222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1221_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_29_(){
_start:
{
lean_object* v___x_1224_; uint8_t v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1224_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27_));
v___x_1225_ = 1;
v___x_1226_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_29_);
v___x_1227_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1224_, v___x_1225_, v___x_1226_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_29____boxed(lean_object* v_a_1228_){
_start:
{
lean_object* v_res_1229_; 
v_res_1229_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_29_();
return v_res_1229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_31_(){
_start:
{
lean_object* v___x_1231_; uint8_t v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1231_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27_));
v___x_1232_ = 1;
v___x_1233_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_29_);
v___x_1234_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1231_, v___x_1232_, v___x_1233_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_31____boxed(lean_object* v_a_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_31_();
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l_String_reduceGT___redArg(lean_object* v_e_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_){
_start:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; uint8_t v___x_1250_; 
v___x_1248_ = ((lean_object*)(l_String_reduceGT___redArg___closed__2));
v___x_1249_ = lean_unsigned_to_nat(4u);
v___x_1250_ = l_Lean_Expr_isAppOfArity(v_e_1242_, v___x_1248_, v___x_1249_);
if (v___x_1250_ == 0)
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
lean_dec_ref(v_e_1242_);
v___x_1251_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
v___x_1252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1251_);
return v___x_1252_;
}
else
{
lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1279_; 
v___x_1253_ = l_Lean_Expr_appFn_x21(v_e_1242_);
v___x_1254_ = l_Lean_Expr_appArg_x21(v___x_1253_);
lean_dec_ref(v___x_1253_);
v___x_1255_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_1254_);
v_a_1256_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1258_ = v___x_1255_;
v_isShared_1259_ = v_isSharedCheck_1279_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v___x_1255_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1279_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
if (lean_obj_tag(v_a_1256_) == 1)
{
lean_object* v_val_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v_a_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1274_; 
lean_del_object(v___x_1258_);
v_val_1260_ = lean_ctor_get(v_a_1256_, 0);
lean_inc(v_val_1260_);
lean_dec_ref_known(v_a_1256_, 1);
v___x_1261_ = l_Lean_Expr_appArg_x21(v_e_1242_);
v___x_1262_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_1261_);
v_a_1263_ = lean_ctor_get(v___x_1262_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1262_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1265_ = v___x_1262_;
v_isShared_1266_ = v_isSharedCheck_1274_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_a_1263_);
lean_dec(v___x_1262_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1274_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
if (lean_obj_tag(v_a_1263_) == 1)
{
lean_object* v_val_1267_; uint8_t v___x_1268_; lean_object* v___x_1269_; 
lean_del_object(v___x_1265_);
v_val_1267_ = lean_ctor_get(v_a_1263_, 0);
lean_inc(v_val_1267_);
lean_dec_ref_known(v_a_1263_, 1);
v___x_1268_ = lean_string_dec_lt(v_val_1267_, v_val_1260_);
lean_dec(v_val_1260_);
lean_dec(v_val_1267_);
v___x_1269_ = l_Lean_Meta_Simp_evalPropStep___redArg(v_e_1242_, v___x_1268_, v_a_1243_, v_a_1244_, v_a_1245_, v_a_1246_);
return v___x_1269_;
}
else
{
lean_object* v___x_1270_; lean_object* v___x_1272_; 
lean_dec(v_a_1263_);
lean_dec(v_val_1260_);
lean_dec_ref(v_e_1242_);
v___x_1270_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
if (v_isShared_1266_ == 0)
{
lean_ctor_set(v___x_1265_, 0, v___x_1270_);
v___x_1272_ = v___x_1265_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v___x_1270_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
}
}
else
{
lean_object* v___x_1275_; lean_object* v___x_1277_; 
lean_dec(v_a_1256_);
lean_dec_ref(v_e_1242_);
v___x_1275_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 0, v___x_1275_);
v___x_1277_ = v___x_1258_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v___x_1275_);
v___x_1277_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
return v___x_1277_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_reduceGT___redArg___boxed(lean_object* v_e_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_){
_start:
{
lean_object* v_res_1286_; 
v_res_1286_ = l_String_reduceGT___redArg(v_e_1280_, v_a_1281_, v_a_1282_, v_a_1283_, v_a_1284_);
lean_dec(v_a_1284_);
lean_dec_ref(v_a_1283_);
lean_dec(v_a_1282_);
lean_dec_ref(v_a_1281_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l_String_reduceGT(lean_object* v_e_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_, lean_object* v_a_1291_, lean_object* v_a_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_){
_start:
{
lean_object* v___x_1296_; 
v___x_1296_ = l_String_reduceGT___redArg(v_e_1287_, v_a_1291_, v_a_1292_, v_a_1293_, v_a_1294_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l_String_reduceGT___boxed(lean_object* v_e_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_String_reduceGT(v_e_1297_, v_a_1298_, v_a_1299_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_);
lean_dec(v_a_1304_);
lean_dec_ref(v_a_1303_);
lean_dec(v_a_1302_);
lean_dec_ref(v_a_1301_);
lean_dec(v_a_1300_);
lean_dec_ref(v_a_1299_);
lean_dec(v_a_1298_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1312_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27_));
v___x_1313_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27_));
v___x_1314_ = lean_alloc_closure((void*)(l_String_reduceGT___boxed), 9, 0);
v___x_1315_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_1312_, v___x_1313_, v___x_1314_);
return v___x_1315_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27____boxed(lean_object* v_a_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27_();
return v_res_1317_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_29_(void){
_start:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1318_ = lean_alloc_closure((void*)(l_String_reduceGT___boxed), 9, 0);
v___x_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
return v___x_1319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_29_(){
_start:
{
lean_object* v___x_1321_; uint8_t v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1321_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27_));
v___x_1322_ = 1;
v___x_1323_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_29_);
v___x_1324_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1321_, v___x_1322_, v___x_1323_);
return v___x_1324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_29____boxed(lean_object* v_a_1325_){
_start:
{
lean_object* v_res_1326_; 
v_res_1326_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_29_();
return v_res_1326_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_31_(){
_start:
{
lean_object* v___x_1328_; uint8_t v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1328_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27_));
v___x_1329_ = 1;
v___x_1330_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_29_);
v___x_1331_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1328_, v___x_1329_, v___x_1330_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_31____boxed(lean_object* v_a_1332_){
_start:
{
lean_object* v_res_1333_; 
v_res_1333_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_31_();
return v_res_1333_;
}
}
LEAN_EXPORT lean_object* l_String_reduceGE___redArg(lean_object* v_e_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; uint8_t v___x_1347_; 
v___x_1345_ = ((lean_object*)(l_String_reduceGE___redArg___closed__2));
v___x_1346_ = lean_unsigned_to_nat(4u);
v___x_1347_ = l_Lean_Expr_isAppOfArity(v_e_1339_, v___x_1345_, v___x_1346_);
if (v___x_1347_ == 0)
{
lean_object* v___x_1348_; lean_object* v___x_1349_; 
lean_dec_ref(v_e_1339_);
v___x_1348_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
v___x_1349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1348_);
return v___x_1349_;
}
else
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v_a_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1376_; 
v___x_1350_ = l_Lean_Expr_appFn_x21(v_e_1339_);
v___x_1351_ = l_Lean_Expr_appArg_x21(v___x_1350_);
lean_dec_ref(v___x_1350_);
v___x_1352_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_1351_);
v_a_1353_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1376_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1376_ == 0)
{
v___x_1355_ = v___x_1352_;
v_isShared_1356_ = v_isSharedCheck_1376_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_a_1353_);
lean_dec(v___x_1352_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1376_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
if (lean_obj_tag(v_a_1353_) == 1)
{
lean_object* v_val_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v_a_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1371_; 
lean_del_object(v___x_1355_);
v_val_1357_ = lean_ctor_get(v_a_1353_, 0);
lean_inc(v_val_1357_);
lean_dec_ref_known(v_a_1353_, 1);
v___x_1358_ = l_Lean_Expr_appArg_x21(v_e_1339_);
v___x_1359_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_1358_);
v_a_1360_ = lean_ctor_get(v___x_1359_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1359_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1362_ = v___x_1359_;
v_isShared_1363_ = v_isSharedCheck_1371_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_a_1360_);
lean_dec(v___x_1359_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1371_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
if (lean_obj_tag(v_a_1360_) == 1)
{
lean_object* v_val_1364_; uint8_t v___x_1365_; lean_object* v___x_1366_; 
lean_del_object(v___x_1362_);
v_val_1364_ = lean_ctor_get(v_a_1360_, 0);
lean_inc(v_val_1364_);
lean_dec_ref_known(v_a_1360_, 1);
v___x_1365_ = l_String_decLE(v_val_1364_, v_val_1357_);
lean_dec(v_val_1357_);
lean_dec(v_val_1364_);
v___x_1366_ = l_Lean_Meta_Simp_evalPropStep___redArg(v_e_1339_, v___x_1365_, v_a_1340_, v_a_1341_, v_a_1342_, v_a_1343_);
return v___x_1366_;
}
else
{
lean_object* v___x_1367_; lean_object* v___x_1369_; 
lean_dec(v_a_1360_);
lean_dec(v_val_1357_);
lean_dec_ref(v_e_1339_);
v___x_1367_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
if (v_isShared_1363_ == 0)
{
lean_ctor_set(v___x_1362_, 0, v___x_1367_);
v___x_1369_ = v___x_1362_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v___x_1367_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
}
}
else
{
lean_object* v___x_1372_; lean_object* v___x_1374_; 
lean_dec(v_a_1353_);
lean_dec_ref(v_e_1339_);
v___x_1372_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v___x_1372_);
v___x_1374_ = v___x_1355_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v___x_1372_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
return v___x_1374_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_reduceGE___redArg___boxed(lean_object* v_e_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_, lean_object* v_a_1381_, lean_object* v_a_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l_String_reduceGE___redArg(v_e_1377_, v_a_1378_, v_a_1379_, v_a_1380_, v_a_1381_);
lean_dec(v_a_1381_);
lean_dec_ref(v_a_1380_);
lean_dec(v_a_1379_);
lean_dec_ref(v_a_1378_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_String_reduceGE(lean_object* v_e_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_){
_start:
{
lean_object* v___x_1393_; 
v___x_1393_ = l_String_reduceGE___redArg(v_e_1384_, v_a_1388_, v_a_1389_, v_a_1390_, v_a_1391_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l_String_reduceGE___boxed(lean_object* v_e_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_, lean_object* v_a_1398_, lean_object* v_a_1399_, lean_object* v_a_1400_, lean_object* v_a_1401_, lean_object* v_a_1402_){
_start:
{
lean_object* v_res_1403_; 
v_res_1403_ = l_String_reduceGE(v_e_1394_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_, v_a_1399_, v_a_1400_, v_a_1401_);
lean_dec(v_a_1401_);
lean_dec_ref(v_a_1400_);
lean_dec(v_a_1399_);
lean_dec_ref(v_a_1398_);
lean_dec(v_a_1397_);
lean_dec_ref(v_a_1396_);
lean_dec(v_a_1395_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
v___x_1409_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27_));
v___x_1410_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27_));
v___x_1411_ = lean_alloc_closure((void*)(l_String_reduceGE___boxed), 9, 0);
v___x_1412_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_1409_, v___x_1410_, v___x_1411_);
return v___x_1412_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27____boxed(lean_object* v_a_1413_){
_start:
{
lean_object* v_res_1414_; 
v_res_1414_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27_();
return v_res_1414_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_29_(void){
_start:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1415_ = lean_alloc_closure((void*)(l_String_reduceGE___boxed), 9, 0);
v___x_1416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1415_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_29_(){
_start:
{
lean_object* v___x_1418_; uint8_t v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1418_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27_));
v___x_1419_ = 1;
v___x_1420_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_29_);
v___x_1421_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1418_, v___x_1419_, v___x_1420_);
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_29____boxed(lean_object* v_a_1422_){
_start:
{
lean_object* v_res_1423_; 
v_res_1423_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_29_();
return v_res_1423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_31_(){
_start:
{
lean_object* v___x_1425_; uint8_t v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1425_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27_));
v___x_1426_ = 1;
v___x_1427_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_29_);
v___x_1428_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1425_, v___x_1426_, v___x_1427_);
return v___x_1428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_31____boxed(lean_object* v_a_1429_){
_start:
{
lean_object* v_res_1430_; 
v_res_1430_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_31_();
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l_String_reduceEq___lam__0(lean_object* v_val_1431_, lean_object* v_val_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_){
_start:
{
lean_object* v___x_1441_; 
v___x_1441_ = l_Lean_Meta_mkStringLitNeProof(v_val_1431_, v_val_1432_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_);
return v___x_1441_;
}
}
LEAN_EXPORT lean_object* l_String_reduceEq___lam__0___boxed(lean_object* v_val_1442_, lean_object* v_val_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_){
_start:
{
lean_object* v_res_1452_; 
v_res_1452_ = l_String_reduceEq___lam__0(v_val_1442_, v_val_1443_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
lean_dec(v___y_1450_);
lean_dec_ref(v___y_1449_);
lean_dec(v___y_1448_);
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1446_);
lean_dec_ref(v___y_1445_);
lean_dec(v___y_1444_);
return v_res_1452_;
}
}
LEAN_EXPORT lean_object* l_String_reduceEq(lean_object* v_e_1456_, lean_object* v_a_1457_, lean_object* v_a_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; uint8_t v___x_1467_; 
v___x_1465_ = ((lean_object*)(l_String_reduceEq___closed__1));
v___x_1466_ = lean_unsigned_to_nat(3u);
v___x_1467_ = l_Lean_Expr_isAppOfArity(v_e_1456_, v___x_1465_, v___x_1466_);
if (v___x_1467_ == 0)
{
lean_object* v___x_1468_; lean_object* v___x_1469_; 
lean_dec_ref(v_e_1456_);
v___x_1468_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
v___x_1469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1468_);
return v___x_1469_;
}
else
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v_a_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1497_; 
v___x_1470_ = l_Lean_Expr_appFn_x21(v_e_1456_);
v___x_1471_ = l_Lean_Expr_appArg_x21(v___x_1470_);
lean_dec_ref(v___x_1470_);
v___x_1472_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_1471_);
v_a_1473_ = lean_ctor_get(v___x_1472_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1475_ = v___x_1472_;
v_isShared_1476_ = v_isSharedCheck_1497_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_a_1473_);
lean_dec(v___x_1472_);
v___x_1475_ = lean_box(0);
v_isShared_1476_ = v_isSharedCheck_1497_;
goto v_resetjp_1474_;
}
v_resetjp_1474_:
{
if (lean_obj_tag(v_a_1473_) == 1)
{
lean_object* v_val_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v_a_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1492_; 
lean_del_object(v___x_1475_);
v_val_1477_ = lean_ctor_get(v_a_1473_, 0);
lean_inc(v_val_1477_);
lean_dec_ref_known(v_a_1473_, 1);
v___x_1478_ = l_Lean_Expr_appArg_x21(v_e_1456_);
v___x_1479_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_1478_);
v_a_1480_ = lean_ctor_get(v___x_1479_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v___x_1479_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1482_ = v___x_1479_;
v_isShared_1483_ = v_isSharedCheck_1492_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_a_1480_);
lean_dec(v___x_1479_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1492_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
if (lean_obj_tag(v_a_1480_) == 1)
{
lean_object* v_val_1484_; lean_object* v___f_1485_; uint8_t v___x_1486_; lean_object* v___x_1487_; 
lean_del_object(v___x_1482_);
v_val_1484_ = lean_ctor_get(v_a_1480_, 0);
lean_inc_n(v_val_1484_, 2);
lean_dec_ref_known(v_a_1480_, 1);
lean_inc(v_val_1477_);
v___f_1485_ = lean_alloc_closure((void*)(l_String_reduceEq___lam__0___boxed), 10, 2);
lean_closure_set(v___f_1485_, 0, v_val_1477_);
lean_closure_set(v___f_1485_, 1, v_val_1484_);
v___x_1486_ = lean_string_dec_eq(v_val_1477_, v_val_1484_);
lean_dec(v_val_1484_);
lean_dec(v_val_1477_);
v___x_1487_ = l_Lean_Meta_Simp_evalEqPropStep(v_e_1456_, v___x_1486_, v___f_1485_, v_a_1457_, v_a_1458_, v_a_1459_, v_a_1460_, v_a_1461_, v_a_1462_, v_a_1463_);
return v___x_1487_;
}
else
{
lean_object* v___x_1488_; lean_object* v___x_1490_; 
lean_dec(v_a_1480_);
lean_dec(v_val_1477_);
lean_dec_ref(v_e_1456_);
v___x_1488_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
if (v_isShared_1483_ == 0)
{
lean_ctor_set(v___x_1482_, 0, v___x_1488_);
v___x_1490_ = v___x_1482_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v___x_1488_);
v___x_1490_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
return v___x_1490_;
}
}
}
}
else
{
lean_object* v___x_1493_; lean_object* v___x_1495_; 
lean_dec(v_a_1473_);
lean_dec_ref(v_e_1456_);
v___x_1493_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
if (v_isShared_1476_ == 0)
{
lean_ctor_set(v___x_1475_, 0, v___x_1493_);
v___x_1495_ = v___x_1475_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v___x_1493_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_reduceEq___boxed(lean_object* v_e_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_, lean_object* v_a_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_String_reduceEq(v_e_1498_, v_a_1499_, v_a_1500_, v_a_1501_, v_a_1502_, v_a_1503_, v_a_1504_, v_a_1505_);
lean_dec(v_a_1505_);
lean_dec_ref(v_a_1504_);
lean_dec(v_a_1503_);
lean_dec_ref(v_a_1502_);
lean_dec(v_a_1501_);
lean_dec_ref(v_a_1500_);
lean_dec(v_a_1499_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1525_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27_));
v___x_1526_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27_));
v___x_1527_ = lean_alloc_closure((void*)(l_String_reduceEq___boxed), 9, 0);
v___x_1528_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_1525_, v___x_1526_, v___x_1527_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27____boxed(lean_object* v_a_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27_();
return v_res_1530_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_29_(void){
_start:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1531_ = lean_alloc_closure((void*)(l_String_reduceEq___boxed), 9, 0);
v___x_1532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1531_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_29_(){
_start:
{
lean_object* v___x_1534_; uint8_t v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1534_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27_));
v___x_1535_ = 1;
v___x_1536_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_29_);
v___x_1537_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1534_, v___x_1535_, v___x_1536_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_29____boxed(lean_object* v_a_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_29_();
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_31_(){
_start:
{
lean_object* v___x_1541_; uint8_t v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
v___x_1541_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27_));
v___x_1542_ = 1;
v___x_1543_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_29_);
v___x_1544_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1541_, v___x_1542_, v___x_1543_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_31____boxed(lean_object* v_a_1545_){
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_31_();
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l_String_reduceNe(lean_object* v_e_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_){
_start:
{
lean_object* v___x_1559_; lean_object* v___x_1560_; uint8_t v___x_1561_; 
v___x_1559_ = ((lean_object*)(l_String_reduceNe___closed__1));
v___x_1560_ = lean_unsigned_to_nat(3u);
v___x_1561_ = l_Lean_Expr_isAppOfArity(v_e_1550_, v___x_1559_, v___x_1560_);
if (v___x_1561_ == 0)
{
lean_object* v___x_1562_; lean_object* v___x_1563_; 
lean_dec_ref(v_e_1550_);
v___x_1562_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
v___x_1563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1562_);
return v___x_1563_;
}
else
{
lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v_a_1567_; lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1593_; 
v___x_1564_ = l_Lean_Expr_appFn_x21(v_e_1550_);
v___x_1565_ = l_Lean_Expr_appArg_x21(v___x_1564_);
lean_dec_ref(v___x_1564_);
v___x_1566_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_1565_);
v_a_1567_ = lean_ctor_get(v___x_1566_, 0);
v_isSharedCheck_1593_ = !lean_is_exclusive(v___x_1566_);
if (v_isSharedCheck_1593_ == 0)
{
v___x_1569_ = v___x_1566_;
v_isShared_1570_ = v_isSharedCheck_1593_;
goto v_resetjp_1568_;
}
else
{
lean_inc(v_a_1567_);
lean_dec(v___x_1566_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1593_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
if (lean_obj_tag(v_a_1567_) == 1)
{
lean_object* v_val_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v_a_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1588_; 
lean_del_object(v___x_1569_);
v_val_1571_ = lean_ctor_get(v_a_1567_, 0);
lean_inc(v_val_1571_);
lean_dec_ref_known(v_a_1567_, 1);
v___x_1572_ = l_Lean_Expr_appArg_x21(v_e_1550_);
v___x_1573_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_1572_);
v_a_1574_ = lean_ctor_get(v___x_1573_, 0);
v_isSharedCheck_1588_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1576_ = v___x_1573_;
v_isShared_1577_ = v_isSharedCheck_1588_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_dec(v___x_1573_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1588_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
if (lean_obj_tag(v_a_1574_) == 1)
{
lean_object* v_val_1578_; lean_object* v___f_1579_; uint8_t v___x_1580_; 
lean_del_object(v___x_1576_);
v_val_1578_ = lean_ctor_get(v_a_1574_, 0);
lean_inc_n(v_val_1578_, 2);
lean_dec_ref_known(v_a_1574_, 1);
lean_inc(v_val_1571_);
v___f_1579_ = lean_alloc_closure((void*)(l_String_reduceEq___lam__0___boxed), 10, 2);
lean_closure_set(v___f_1579_, 0, v_val_1571_);
lean_closure_set(v___f_1579_, 1, v_val_1578_);
v___x_1580_ = lean_string_dec_eq(v_val_1571_, v_val_1578_);
lean_dec(v_val_1578_);
lean_dec(v_val_1571_);
if (v___x_1580_ == 0)
{
lean_object* v___x_1581_; 
v___x_1581_ = l_Lean_Meta_Simp_evalNePropStep(v_e_1550_, v___x_1561_, v___f_1579_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_, v_a_1556_, v_a_1557_);
return v___x_1581_;
}
else
{
uint8_t v___x_1582_; lean_object* v___x_1583_; 
v___x_1582_ = 0;
v___x_1583_ = l_Lean_Meta_Simp_evalNePropStep(v_e_1550_, v___x_1582_, v___f_1579_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_, v_a_1556_, v_a_1557_);
return v___x_1583_;
}
}
else
{
lean_object* v___x_1584_; lean_object* v___x_1586_; 
lean_dec(v_a_1574_);
lean_dec(v_val_1571_);
lean_dec_ref(v_e_1550_);
v___x_1584_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
if (v_isShared_1577_ == 0)
{
lean_ctor_set(v___x_1576_, 0, v___x_1584_);
v___x_1586_ = v___x_1576_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v___x_1584_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
return v___x_1586_;
}
}
}
}
else
{
lean_object* v___x_1589_; lean_object* v___x_1591_; 
lean_dec(v_a_1567_);
lean_dec_ref(v_e_1550_);
v___x_1589_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBinPred___redArg___closed__0));
if (v_isShared_1570_ == 0)
{
lean_ctor_set(v___x_1569_, 0, v___x_1589_);
v___x_1591_ = v___x_1569_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v___x_1589_);
v___x_1591_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
return v___x_1591_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_reduceNe___boxed(lean_object* v_e_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l_String_reduceNe(v_e_1594_, v_a_1595_, v_a_1596_, v_a_1597_, v_a_1598_, v_a_1599_, v_a_1600_, v_a_1601_);
lean_dec(v_a_1601_);
lean_dec_ref(v_a_1600_);
lean_dec(v_a_1599_);
lean_dec_ref(v_a_1598_);
lean_dec(v_a_1597_);
lean_dec_ref(v_a_1596_);
lean_dec(v_a_1595_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; 
v___x_1626_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27_));
v___x_1627_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27_));
v___x_1628_ = lean_alloc_closure((void*)(l_String_reduceNe___boxed), 9, 0);
v___x_1629_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_1626_, v___x_1627_, v___x_1628_);
return v___x_1629_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27____boxed(lean_object* v_a_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27_();
return v_res_1631_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_29_(void){
_start:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; 
v___x_1632_ = lean_alloc_closure((void*)(l_String_reduceNe___boxed), 9, 0);
v___x_1633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1632_);
return v___x_1633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_29_(){
_start:
{
lean_object* v___x_1635_; uint8_t v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1635_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27_));
v___x_1636_ = 1;
v___x_1637_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_29_);
v___x_1638_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1635_, v___x_1636_, v___x_1637_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_29____boxed(lean_object* v_a_1639_){
_start:
{
lean_object* v_res_1640_; 
v_res_1640_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_29_();
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_31_(){
_start:
{
lean_object* v___x_1642_; uint8_t v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___x_1642_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27_));
v___x_1643_ = 1;
v___x_1644_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_29_);
v___x_1645_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1642_, v___x_1643_, v___x_1644_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_31____boxed(lean_object* v_a_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_31_();
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l_String_reduceBEq___redArg(lean_object* v_e_1653_){
_start:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; uint8_t v___x_1657_; 
v___x_1655_ = ((lean_object*)(l_String_reduceBEq___redArg___closed__2));
v___x_1656_ = lean_unsigned_to_nat(4u);
v___x_1657_ = l_Lean_Expr_isAppOfArity(v_e_1653_, v___x_1655_, v___x_1656_);
if (v___x_1657_ == 0)
{
lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1658_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
v___x_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1658_);
return v___x_1659_;
}
else
{
lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v_a_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1699_; 
v___x_1660_ = l_Lean_Expr_appFn_x21(v_e_1653_);
v___x_1661_ = l_Lean_Expr_appArg_x21(v___x_1660_);
lean_dec_ref(v___x_1660_);
v___x_1662_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_1661_);
v_a_1663_ = lean_ctor_get(v___x_1662_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v___x_1662_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1665_ = v___x_1662_;
v_isShared_1666_ = v_isSharedCheck_1699_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_a_1663_);
lean_dec(v___x_1662_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1699_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
if (lean_obj_tag(v_a_1663_) == 1)
{
lean_object* v_val_1667_; lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1694_; 
v_val_1667_ = lean_ctor_get(v_a_1663_, 0);
v_isSharedCheck_1694_ = !lean_is_exclusive(v_a_1663_);
if (v_isSharedCheck_1694_ == 0)
{
v___x_1669_ = v_a_1663_;
v_isShared_1670_ = v_isSharedCheck_1694_;
goto v_resetjp_1668_;
}
else
{
lean_inc(v_val_1667_);
lean_dec(v_a_1663_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1694_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1693_; 
v___x_1671_ = l_Lean_Expr_appArg_x21(v_e_1653_);
v___x_1672_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_1671_);
v_a_1673_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1675_ = v___x_1672_;
v_isShared_1676_ = v_isSharedCheck_1693_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1672_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1693_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___y_1678_; 
if (lean_obj_tag(v_a_1673_) == 1)
{
lean_object* v_val_1685_; uint8_t v___x_1686_; 
lean_del_object(v___x_1665_);
v_val_1685_ = lean_ctor_get(v_a_1673_, 0);
lean_inc(v_val_1685_);
lean_dec_ref_known(v_a_1673_, 1);
v___x_1686_ = lean_string_dec_eq(v_val_1667_, v_val_1685_);
lean_dec(v_val_1685_);
lean_dec(v_val_1667_);
if (v___x_1686_ == 0)
{
lean_object* v___x_1687_; 
v___x_1687_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__3, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__3);
v___y_1678_ = v___x_1687_;
goto v___jp_1677_;
}
else
{
lean_object* v___x_1688_; 
v___x_1688_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__6, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__6_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__6);
v___y_1678_ = v___x_1688_;
goto v___jp_1677_;
}
}
else
{
lean_object* v___x_1689_; lean_object* v___x_1691_; 
lean_del_object(v___x_1675_);
lean_dec(v_a_1673_);
lean_del_object(v___x_1669_);
lean_dec(v_val_1667_);
v___x_1689_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
if (v_isShared_1666_ == 0)
{
lean_ctor_set(v___x_1665_, 0, v___x_1689_);
v___x_1691_ = v___x_1665_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v___x_1689_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
return v___x_1691_;
}
}
v___jp_1677_:
{
lean_object* v___x_1680_; 
lean_inc_ref(v___y_1678_);
if (v_isShared_1670_ == 0)
{
lean_ctor_set_tag(v___x_1669_, 0);
lean_ctor_set(v___x_1669_, 0, v___y_1678_);
v___x_1680_ = v___x_1669_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v___y_1678_);
v___x_1680_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
lean_object* v___x_1682_; 
if (v_isShared_1676_ == 0)
{
lean_ctor_set(v___x_1675_, 0, v___x_1680_);
v___x_1682_ = v___x_1675_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v___x_1680_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
}
}
}
else
{
lean_object* v___x_1695_; lean_object* v___x_1697_; 
lean_dec(v_a_1663_);
v___x_1695_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
if (v_isShared_1666_ == 0)
{
lean_ctor_set(v___x_1665_, 0, v___x_1695_);
v___x_1697_ = v___x_1665_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v___x_1695_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_reduceBEq___redArg___boxed(lean_object* v_e_1700_, lean_object* v_a_1701_){
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = l_String_reduceBEq___redArg(v_e_1700_);
lean_dec_ref(v_e_1700_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l_String_reduceBEq(lean_object* v_e_1703_, lean_object* v_a_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_){
_start:
{
lean_object* v___x_1712_; 
v___x_1712_ = l_String_reduceBEq___redArg(v_e_1703_);
return v___x_1712_;
}
}
LEAN_EXPORT lean_object* l_String_reduceBEq___boxed(lean_object* v_e_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_, lean_object* v_a_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_){
_start:
{
lean_object* v_res_1722_; 
v_res_1722_ = l_String_reduceBEq(v_e_1713_, v_a_1714_, v_a_1715_, v_a_1716_, v_a_1717_, v_a_1718_, v_a_1719_, v_a_1720_);
lean_dec(v_a_1720_);
lean_dec_ref(v_a_1719_);
lean_dec(v_a_1718_);
lean_dec_ref(v_a_1717_);
lean_dec(v_a_1716_);
lean_dec_ref(v_a_1715_);
lean_dec(v_a_1714_);
lean_dec_ref(v_e_1713_);
return v_res_1722_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1741_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27_));
v___x_1742_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27_));
v___x_1743_ = lean_alloc_closure((void*)(l_String_reduceBEq___boxed), 9, 0);
v___x_1744_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1741_, v___x_1742_, v___x_1743_);
return v___x_1744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27____boxed(lean_object* v_a_1745_){
_start:
{
lean_object* v_res_1746_; 
v_res_1746_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27_();
return v_res_1746_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_29_(void){
_start:
{
lean_object* v___x_1747_; lean_object* v___x_1748_; 
v___x_1747_ = lean_alloc_closure((void*)(l_String_reduceBEq___boxed), 9, 0);
v___x_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1748_, 0, v___x_1747_);
return v___x_1748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_29_(){
_start:
{
lean_object* v___x_1750_; uint8_t v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; 
v___x_1750_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27_));
v___x_1751_ = 1;
v___x_1752_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_29_);
v___x_1753_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1750_, v___x_1751_, v___x_1752_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_29____boxed(lean_object* v_a_1754_){
_start:
{
lean_object* v_res_1755_; 
v_res_1755_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_29_();
return v_res_1755_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_31_(){
_start:
{
lean_object* v___x_1757_; uint8_t v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1757_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27_));
v___x_1758_ = 1;
v___x_1759_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_29_);
v___x_1760_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1757_, v___x_1758_, v___x_1759_);
return v___x_1760_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_31____boxed(lean_object* v_a_1761_){
_start:
{
lean_object* v_res_1762_; 
v_res_1762_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_31_();
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* l_String_reduceBNe___redArg(lean_object* v_e_1766_){
_start:
{
lean_object* v___x_1768_; lean_object* v___x_1769_; uint8_t v___x_1770_; 
v___x_1768_ = ((lean_object*)(l_String_reduceBNe___redArg___closed__1));
v___x_1769_ = lean_unsigned_to_nat(4u);
v___x_1770_ = l_Lean_Expr_isAppOfArity(v_e_1766_, v___x_1768_, v___x_1769_);
if (v___x_1770_ == 0)
{
lean_object* v___x_1771_; lean_object* v___x_1772_; 
v___x_1771_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
v___x_1772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1771_);
return v___x_1772_;
}
else
{
lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1813_; 
v___x_1773_ = l_Lean_Expr_appFn_x21(v_e_1766_);
v___x_1774_ = l_Lean_Expr_appArg_x21(v___x_1773_);
lean_dec_ref(v___x_1773_);
v___x_1775_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_1774_);
v_a_1776_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1778_ = v___x_1775_;
v_isShared_1779_ = v_isSharedCheck_1813_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1775_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1813_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
if (lean_obj_tag(v_a_1776_) == 1)
{
lean_object* v_val_1780_; lean_object* v___x_1782_; uint8_t v_isShared_1783_; uint8_t v_isSharedCheck_1808_; 
v_val_1780_ = lean_ctor_get(v_a_1776_, 0);
v_isSharedCheck_1808_ = !lean_is_exclusive(v_a_1776_);
if (v_isSharedCheck_1808_ == 0)
{
v___x_1782_ = v_a_1776_;
v_isShared_1783_ = v_isSharedCheck_1808_;
goto v_resetjp_1781_;
}
else
{
lean_inc(v_val_1780_);
lean_dec(v_a_1776_);
v___x_1782_ = lean_box(0);
v_isShared_1783_ = v_isSharedCheck_1808_;
goto v_resetjp_1781_;
}
v_resetjp_1781_:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v_a_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1807_; 
v___x_1784_ = l_Lean_Expr_appArg_x21(v_e_1766_);
v___x_1785_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_fromExpr_x3f___redArg(v___x_1784_);
v_a_1786_ = lean_ctor_get(v___x_1785_, 0);
v_isSharedCheck_1807_ = !lean_is_exclusive(v___x_1785_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1788_ = v___x_1785_;
v_isShared_1789_ = v_isSharedCheck_1807_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_a_1786_);
lean_dec(v___x_1785_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1807_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v___y_1791_; 
if (lean_obj_tag(v_a_1786_) == 1)
{
lean_object* v_val_1800_; uint8_t v___x_1801_; 
lean_del_object(v___x_1778_);
v_val_1800_ = lean_ctor_get(v_a_1786_, 0);
lean_inc(v_val_1800_);
lean_dec_ref_known(v_a_1786_, 1);
v___x_1801_ = lean_string_dec_eq(v_val_1780_, v_val_1800_);
lean_dec(v_val_1800_);
lean_dec(v_val_1780_);
if (v___x_1801_ == 0)
{
if (v___x_1770_ == 0)
{
goto v___jp_1798_;
}
else
{
lean_object* v___x_1802_; 
v___x_1802_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__6, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__6_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__6);
v___y_1791_ = v___x_1802_;
goto v___jp_1790_;
}
}
else
{
goto v___jp_1798_;
}
}
else
{
lean_object* v___x_1803_; lean_object* v___x_1805_; 
lean_del_object(v___x_1788_);
lean_dec(v_a_1786_);
lean_del_object(v___x_1782_);
lean_dec(v_val_1780_);
v___x_1803_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 0, v___x_1803_);
v___x_1805_ = v___x_1778_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v___x_1803_);
v___x_1805_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
return v___x_1805_;
}
}
v___jp_1790_:
{
lean_object* v___x_1793_; 
lean_inc_ref(v___y_1791_);
if (v_isShared_1783_ == 0)
{
lean_ctor_set_tag(v___x_1782_, 0);
lean_ctor_set(v___x_1782_, 0, v___y_1791_);
v___x_1793_ = v___x_1782_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1797_; 
v_reuseFailAlloc_1797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1797_, 0, v___y_1791_);
v___x_1793_ = v_reuseFailAlloc_1797_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
lean_object* v___x_1795_; 
if (v_isShared_1789_ == 0)
{
lean_ctor_set(v___x_1788_, 0, v___x_1793_);
v___x_1795_ = v___x_1788_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v___x_1793_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
}
v___jp_1798_:
{
lean_object* v___x_1799_; 
v___x_1799_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__3, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBoolPred___redArg___closed__3);
v___y_1791_ = v___x_1799_;
goto v___jp_1790_;
}
}
}
}
else
{
lean_object* v___x_1809_; lean_object* v___x_1811_; 
lean_dec(v_a_1776_);
v___x_1809_ = ((lean_object*)(l_String_reduceAppend___redArg___closed__3));
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 0, v___x_1809_);
v___x_1811_ = v___x_1778_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v___x_1809_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_reduceBNe___redArg___boxed(lean_object* v_e_1814_, lean_object* v_a_1815_){
_start:
{
lean_object* v_res_1816_; 
v_res_1816_ = l_String_reduceBNe___redArg(v_e_1814_);
lean_dec_ref(v_e_1814_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l_String_reduceBNe(lean_object* v_e_1817_, lean_object* v_a_1818_, lean_object* v_a_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_){
_start:
{
lean_object* v___x_1826_; 
v___x_1826_ = l_String_reduceBNe___redArg(v_e_1817_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l_String_reduceBNe___boxed(lean_object* v_e_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_, lean_object* v_a_1835_){
_start:
{
lean_object* v_res_1836_; 
v_res_1836_ = l_String_reduceBNe(v_e_1827_, v_a_1828_, v_a_1829_, v_a_1830_, v_a_1831_, v_a_1832_, v_a_1833_, v_a_1834_);
lean_dec(v_a_1834_);
lean_dec_ref(v_a_1833_);
lean_dec(v_a_1832_);
lean_dec_ref(v_a_1831_);
lean_dec(v_a_1830_);
lean_dec_ref(v_a_1829_);
lean_dec(v_a_1828_);
lean_dec_ref(v_e_1827_);
return v_res_1836_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; 
v___x_1855_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27_));
v___x_1856_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27_));
v___x_1857_ = lean_alloc_closure((void*)(l_String_reduceBNe___boxed), 9, 0);
v___x_1858_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1855_, v___x_1856_, v___x_1857_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27____boxed(lean_object* v_a_1859_){
_start:
{
lean_object* v_res_1860_; 
v_res_1860_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27_();
return v_res_1860_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_29_(void){
_start:
{
lean_object* v___x_1861_; lean_object* v___x_1862_; 
v___x_1861_ = lean_alloc_closure((void*)(l_String_reduceBNe___boxed), 9, 0);
v___x_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1862_, 0, v___x_1861_);
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_29_(){
_start:
{
lean_object* v___x_1864_; uint8_t v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1864_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27_));
v___x_1865_ = 1;
v___x_1866_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_29_);
v___x_1867_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1864_, v___x_1865_, v___x_1866_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_29____boxed(lean_object* v_a_1868_){
_start:
{
lean_object* v_res_1869_; 
v_res_1869_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_29_();
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_31_(){
_start:
{
lean_object* v___x_1871_; uint8_t v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
v___x_1871_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27_));
v___x_1872_ = 1;
v___x_1873_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_29_);
v___x_1874_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1871_, v___x_1872_, v___x_1873_);
return v___x_1874_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_31____boxed(lean_object* v_a_1875_){
_start:
{
lean_object* v_res_1876_; 
v_res_1876_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_31_();
return v_res_1876_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Char(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_StringLitProof(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Char(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_StringLitProof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceAppend_declare__9_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_28_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceAppend___regBuiltin_String_reduceAppend_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1679837338____hygCtx___hyg_30_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceOfList_declare__18_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_20_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceOfList___regBuiltin_String_reduceOfList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3166094940____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToList_declare__23_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_20_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceToList___regBuiltin_String_reduceToList_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4185260642____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reducePush_declare__28_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_21_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_23_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reducePush___regBuiltin_String_reducePush_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3534042748____hygCtx___hyg_25_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceSingleton_declare__33_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_20_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceSingleton___regBuiltin_String_reduceSingleton_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_520700662____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceToSingleton_declare__38_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1297011485____hygCtx___hyg_19_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLT_declare__49_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_29_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLT___regBuiltin_String_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_1174043775____hygCtx___hyg_31_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceLE_declare__54_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_29_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceLE___regBuiltin_String_reduceLE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_574354642____hygCtx___hyg_31_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGT_declare__59_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_29_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGT___regBuiltin_String_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_538940934____hygCtx___hyg_31_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceGE_declare__64_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_29_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceGE___regBuiltin_String_reduceGE_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4043914895____hygCtx___hyg_31_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceEq_declare__69_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_29_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceEq___regBuiltin_String_reduceEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_3304882454____hygCtx___hyg_31_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceNe_declare__74_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_29_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceNe___regBuiltin_String_reduceNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_4080743529____hygCtx___hyg_31_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBEq_declare__79_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_29_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBEq___regBuiltin_String_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_246059090____hygCtx___hyg_31_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0____regBuiltin_String_reduceBNe_declare__84_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_29_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_0__String_reduceBNe___regBuiltin_String_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String_2655461972____hygCtx___hyg_31_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Char(uint8_t builtin);
lean_object* initialize_Lean_Meta_StringLitProof(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Char(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_StringLitProof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_String(builtin);
}
#ifdef __cplusplus
}
#endif

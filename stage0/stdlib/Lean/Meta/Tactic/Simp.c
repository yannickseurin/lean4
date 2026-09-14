// Lean compiler output
// Module: Lean.Meta.Tactic.Simp
// Imports: public import Lean.Meta.Tactic.Simp.SimpTheorems public import Lean.Meta.Tactic.Simp.SimpCongrTheorems public import Lean.Meta.Tactic.Simp.Types public import Lean.Meta.Tactic.Simp.Main public import Lean.Meta.Tactic.Simp.Rewrite public import Lean.Meta.Tactic.Simp.SimpAll public import Lean.Meta.Tactic.Simp.Simproc public import Lean.Meta.Tactic.Simp.BuiltinSimprocs public import Lean.Meta.Tactic.Simp.RegisterCommand public import Lean.Meta.Tactic.Simp.Attr public import Lean.Meta.Tactic.Simp.Diagnostics public import Lean.Meta.Tactic.Simp.Arith
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
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 18, 104, 2, 176, 25, 65, 55)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Simp"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__14_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__14_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__15_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__15_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__15_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__16_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__16_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__17_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__17_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__17_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__18_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__18_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__20_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__20_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__25_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__25_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__27_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__27_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 18, 104, 2, 176, 25, 65, 55)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(41, 160, 244, 6, 151, 149, 13, 175)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "discharge"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 18, 104, 2, 176, 25, 65, 55)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(137, 214, 139, 105, 48, 33, 191, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "rewrite"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 18, 104, 2, 176, 25, 65, 55)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 22, 186, 64, 96, 9, 151, 73)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "backwardDefEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 18, 104, 2, 176, 25, 65, 55)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 110, 171, 41, 36, 30, 226, 140)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unify"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 18, 104, 2, 176, 25, 65, 55)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(190, 130, 190, 16, 161, 70, 238, 162)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ground"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 18, 104, 2, 176, 25, 65, 55)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(177, 141, 3, 232, 9, 172, 52, 6)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "loopProtection"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 18, 104, 2, 176, 25, 65, 55)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(240, 184, 129, 165, 74, 170, 27, 160)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "numSteps"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 18, 104, 2, 176, 25, 65, 55)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(163, 202, 121, 219, 52, 103, 253, 190)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "heads"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 18, 104, 2, 176, 25, 65, 55)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(139, 243, 74, 195, 146, 136, 98, 64)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Debug"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(167, 248, 27, 31, 3, 126, 142, 13)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(119, 140, 6, 58, 231, 192, 8, 160)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(246, 39, 251, 153, 6, 255, 160, 132)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(66, 96, 215, 110, 82, 218, 253, 207)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2____boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(167, 248, 27, 31, 3, 126, 142, 13)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(119, 140, 6, 58, 231, 192, 8, 160)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(246, 39, 251, 153, 6, 255, 160, 132)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(66, 96, 215, 110, 82, 218, 253, 207)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(181, 183, 139, 101, 67, 3, 30, 136)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_box(0);
v___x_9_ = l_unsafeCast___redArg(v___x_8_);
return v___x_9_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_12_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_13_ = l_Lean_Name_str___override(v___x_12_, v___x_11_);
return v___x_13_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_15_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_16_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_17_ = l_Lean_Name_str___override(v___x_16_, v___x_15_);
return v___x_17_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_18_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_19_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_20_ = l_Lean_Name_str___override(v___x_19_, v___x_18_);
return v___x_20_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_21_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_22_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_23_ = l_Lean_Name_str___override(v___x_22_, v___x_21_);
return v___x_23_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_25_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_26_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_27_ = l_Lean_Name_str___override(v___x_26_, v___x_25_);
return v___x_27_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_28_ = lean_unsigned_to_nat(0u);
v___x_29_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_30_ = l_Lean_Name_num___override(v___x_29_, v___x_28_);
return v___x_30_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__14_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_31_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_32_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_33_ = l_Lean_Name_str___override(v___x_32_, v___x_31_);
return v___x_33_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__16_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_35_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__15_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_36_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__14_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__14_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__14_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_37_ = l_Lean_Name_str___override(v___x_36_, v___x_35_);
return v___x_37_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__18_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__17_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_40_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__16_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__16_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__16_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_41_ = l_Lean_Name_str___override(v___x_40_, v___x_39_);
return v___x_41_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_43_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__18_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__18_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__18_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_44_ = l_Lean_Name_str___override(v___x_43_, v___x_42_);
return v___x_44_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__20_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_45_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_46_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_47_ = l_Lean_Name_str___override(v___x_46_, v___x_45_);
return v___x_47_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_48_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_49_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__20_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__20_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__20_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_50_ = l_Lean_Name_str___override(v___x_49_, v___x_48_);
return v___x_50_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_52_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_53_ = l_Lean_Name_str___override(v___x_52_, v___x_51_);
return v___x_53_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_54_ = lean_unsigned_to_nat(1719608285u);
v___x_55_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_56_ = l_Lean_Name_num___override(v___x_55_, v___x_54_);
return v___x_56_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__25_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_58_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_59_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_60_ = l_Lean_Name_str___override(v___x_59_, v___x_58_);
return v___x_60_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__27_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_62_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_63_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__25_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__25_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__25_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_64_ = l_Lean_Name_str___override(v___x_63_, v___x_62_);
return v___x_64_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_65_ = lean_unsigned_to_nat(2u);
v___x_66_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__27_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__27_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__27_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_67_ = l_Lean_Name_num___override(v___x_66_, v___x_65_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_69_; uint8_t v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_69_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_70_ = 0;
v___x_71_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_72_ = l_Lean_registerTraceClass(v___x_69_, v___x_70_, v___x_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2____boxed(lean_object* v_a_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_();
return v_res_74_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_81_ = lean_unsigned_to_nat(3870689133u);
v___x_82_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_83_ = l_Lean_Name_num___override(v___x_82_, v___x_81_);
return v___x_83_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_84_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_85_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_);
v___x_86_ = l_Lean_Name_str___override(v___x_85_, v___x_84_);
return v___x_86_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_87_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_88_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_);
v___x_89_ = l_Lean_Name_str___override(v___x_88_, v___x_87_);
return v___x_89_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = lean_unsigned_to_nat(2u);
v___x_91_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_);
v___x_92_ = l_Lean_Name_num___override(v___x_91_, v___x_90_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_94_; uint8_t v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_94_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_));
v___x_95_ = 1;
v___x_96_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_);
v___x_97_ = l_Lean_registerTraceClass(v___x_94_, v___x_95_, v___x_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2____boxed(lean_object* v_a_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_();
return v_res_99_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_106_ = lean_unsigned_to_nat(1097110872u);
v___x_107_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_108_ = l_Lean_Name_num___override(v___x_107_, v___x_106_);
return v___x_108_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_109_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_110_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_);
v___x_111_ = l_Lean_Name_str___override(v___x_110_, v___x_109_);
return v___x_111_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_112_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_113_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_);
v___x_114_ = l_Lean_Name_str___override(v___x_113_, v___x_112_);
return v___x_114_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = lean_unsigned_to_nat(2u);
v___x_116_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_);
v___x_117_ = l_Lean_Name_num___override(v___x_116_, v___x_115_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_119_; uint8_t v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_119_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_));
v___x_120_ = 1;
v___x_121_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_);
v___x_122_ = l_Lean_registerTraceClass(v___x_119_, v___x_120_, v___x_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2____boxed(lean_object* v_a_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_();
return v_res_124_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_131_ = lean_unsigned_to_nat(1156789139u);
v___x_132_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_133_ = l_Lean_Name_num___override(v___x_132_, v___x_131_);
return v___x_133_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_134_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_135_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_);
v___x_136_ = l_Lean_Name_str___override(v___x_135_, v___x_134_);
return v___x_136_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_137_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_138_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_);
v___x_139_ = l_Lean_Name_str___override(v___x_138_, v___x_137_);
return v___x_139_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_140_ = lean_unsigned_to_nat(2u);
v___x_141_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_);
v___x_142_ = l_Lean_Name_num___override(v___x_141_, v___x_140_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_144_; uint8_t v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_144_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_));
v___x_145_ = 1;
v___x_146_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_);
v___x_147_ = l_Lean_registerTraceClass(v___x_144_, v___x_145_, v___x_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2____boxed(lean_object* v_a_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_();
return v_res_149_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_156_ = lean_unsigned_to_nat(4009644764u);
v___x_157_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_158_ = l_Lean_Name_num___override(v___x_157_, v___x_156_);
return v___x_158_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_159_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_160_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_);
v___x_161_ = l_Lean_Name_str___override(v___x_160_, v___x_159_);
return v___x_161_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_162_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_163_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_);
v___x_164_ = l_Lean_Name_str___override(v___x_163_, v___x_162_);
return v___x_164_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_165_ = lean_unsigned_to_nat(2u);
v___x_166_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_);
v___x_167_ = l_Lean_Name_num___override(v___x_166_, v___x_165_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_169_; uint8_t v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_169_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_));
v___x_170_ = 1;
v___x_171_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_);
v___x_172_ = l_Lean_registerTraceClass(v___x_169_, v___x_170_, v___x_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2____boxed(lean_object* v_a_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_();
return v_res_174_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_181_ = lean_unsigned_to_nat(1418113237u);
v___x_182_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_183_ = l_Lean_Name_num___override(v___x_182_, v___x_181_);
return v___x_183_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_184_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_185_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_);
v___x_186_ = l_Lean_Name_str___override(v___x_185_, v___x_184_);
return v___x_186_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_187_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_188_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_);
v___x_189_ = l_Lean_Name_str___override(v___x_188_, v___x_187_);
return v___x_189_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_190_ = lean_unsigned_to_nat(2u);
v___x_191_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_);
v___x_192_ = l_Lean_Name_num___override(v___x_191_, v___x_190_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_194_; uint8_t v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_194_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_));
v___x_195_ = 1;
v___x_196_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_);
v___x_197_ = l_Lean_registerTraceClass(v___x_194_, v___x_195_, v___x_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2____boxed(lean_object* v_a_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_();
return v_res_199_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_206_ = lean_unsigned_to_nat(793727544u);
v___x_207_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_208_ = l_Lean_Name_num___override(v___x_207_, v___x_206_);
return v___x_208_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_209_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_210_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_);
v___x_211_ = l_Lean_Name_str___override(v___x_210_, v___x_209_);
return v___x_211_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_212_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_213_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_);
v___x_214_ = l_Lean_Name_str___override(v___x_213_, v___x_212_);
return v___x_214_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_215_ = lean_unsigned_to_nat(2u);
v___x_216_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_);
v___x_217_ = l_Lean_Name_num___override(v___x_216_, v___x_215_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_219_; uint8_t v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_219_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_));
v___x_220_ = 1;
v___x_221_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_);
v___x_222_ = l_Lean_registerTraceClass(v___x_219_, v___x_220_, v___x_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2____boxed(lean_object* v_a_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_();
return v_res_224_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_231_ = lean_unsigned_to_nat(768544759u);
v___x_232_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_233_ = l_Lean_Name_num___override(v___x_232_, v___x_231_);
return v___x_233_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_234_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_235_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_);
v___x_236_ = l_Lean_Name_str___override(v___x_235_, v___x_234_);
return v___x_236_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_237_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_238_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_);
v___x_239_ = l_Lean_Name_str___override(v___x_238_, v___x_237_);
return v___x_239_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_240_ = lean_unsigned_to_nat(2u);
v___x_241_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_);
v___x_242_ = l_Lean_Name_num___override(v___x_241_, v___x_240_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_244_; uint8_t v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_244_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_));
v___x_245_ = 1;
v___x_246_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_);
v___x_247_ = l_Lean_registerTraceClass(v___x_244_, v___x_245_, v___x_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2____boxed(lean_object* v_a_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_();
return v_res_249_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_256_ = lean_unsigned_to_nat(581839081u);
v___x_257_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_258_ = l_Lean_Name_num___override(v___x_257_, v___x_256_);
return v___x_258_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_259_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_260_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_);
v___x_261_ = l_Lean_Name_str___override(v___x_260_, v___x_259_);
return v___x_261_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_262_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_263_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_);
v___x_264_ = l_Lean_Name_str___override(v___x_263_, v___x_262_);
return v___x_264_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_265_ = lean_unsigned_to_nat(2u);
v___x_266_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_);
v___x_267_ = l_Lean_Name_num___override(v___x_266_, v___x_265_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_269_; uint8_t v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_269_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_));
v___x_270_ = 0;
v___x_271_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_);
v___x_272_ = l_Lean_registerTraceClass(v___x_269_, v___x_270_, v___x_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2____boxed(lean_object* v_a_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_();
return v_res_274_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_281_ = lean_unsigned_to_nat(888696210u);
v___x_282_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_283_ = l_Lean_Name_num___override(v___x_282_, v___x_281_);
return v___x_283_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_284_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_285_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_);
v___x_286_ = l_Lean_Name_str___override(v___x_285_, v___x_284_);
return v___x_286_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_287_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_288_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_);
v___x_289_ = l_Lean_Name_str___override(v___x_288_, v___x_287_);
return v___x_289_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_290_ = lean_unsigned_to_nat(2u);
v___x_291_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_);
v___x_292_ = l_Lean_Name_num___override(v___x_291_, v___x_290_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_294_; uint8_t v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_294_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_));
v___x_295_ = 0;
v___x_296_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_);
v___x_297_ = l_Lean_registerTraceClass(v___x_294_, v___x_295_, v___x_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2____boxed(lean_object* v_a_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_();
return v_res_299_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_306_ = lean_unsigned_to_nat(337957312u);
v___x_307_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_308_ = l_Lean_Name_num___override(v___x_307_, v___x_306_);
return v___x_308_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_309_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_310_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_);
v___x_311_ = l_Lean_Name_str___override(v___x_310_, v___x_309_);
return v___x_311_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_312_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_313_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_);
v___x_314_ = l_Lean_Name_str___override(v___x_313_, v___x_312_);
return v___x_314_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_315_ = lean_unsigned_to_nat(2u);
v___x_316_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_);
v___x_317_ = l_Lean_Name_num___override(v___x_316_, v___x_315_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_319_; uint8_t v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_319_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_));
v___x_320_ = 0;
v___x_321_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_);
v___x_322_ = l_Lean_registerTraceClass(v___x_319_, v___x_320_, v___x_321_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2____boxed(lean_object* v_a_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_();
return v_res_324_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_331_ = lean_unsigned_to_nat(2225316046u);
v___x_332_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_);
v___x_333_ = l_Lean_Name_num___override(v___x_332_, v___x_331_);
return v___x_333_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_334_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_335_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_);
v___x_336_ = l_Lean_Name_str___override(v___x_335_, v___x_334_);
return v___x_336_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_337_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_));
v___x_338_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_);
v___x_339_ = l_Lean_Name_str___override(v___x_338_, v___x_337_);
return v___x_339_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_340_ = lean_unsigned_to_nat(2u);
v___x_341_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_);
v___x_342_ = l_Lean_Name_num___override(v___x_341_, v___x_340_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_344_; uint8_t v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_344_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_));
v___x_345_ = 1;
v___x_346_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_);
v___x_347_ = l_Lean_registerTraceClass(v___x_344_, v___x_345_, v___x_346_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2____boxed(lean_object* v_a_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_();
return v_res_349_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_SimpTheorems(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_SimpCongrTheorems(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_SimpAll(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_RegisterCommand(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Diagnostics(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Arith(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Simp(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Simp_SimpTheorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_SimpCongrTheorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_SimpAll(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_RegisterCommand(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Diagnostics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Arith(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1719608285____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_3870689133____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1097110872____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1156789139____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_4009644764____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_1418113237____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_793727544____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_768544759____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_581839081____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_888696210____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_337957312____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_Simp_2225316046____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Simp(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Simp_SimpTheorems(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_SimpCongrTheorems(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_SimpAll(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_RegisterCommand(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Diagnostics(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Arith(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Simp(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Simp_SimpTheorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_SimpCongrTheorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_SimpAll(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_RegisterCommand(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Diagnostics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Arith(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Simp(builtin);
}
#ifdef __cplusplus
}
#endif

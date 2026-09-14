// Lean compiler output
// Module: Lake.Config.ConfigDecl
// Imports: public import Lake.Config.Opaque public import Lake.Config.LeanLibConfig public import Lake.Config.LeanExeConfig public import Lake.Config.ExternLibConfig public import Lake.Config.InputFileConfig import Lake.Util.Name
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
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
extern lean_object* l_Lake_ExternLib_keyword;
extern lean_object* l_Lake_LeanExe_keyword;
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static const lean_string_object l_Lake_instImpl___closed__0_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l_Lake_instImpl___closed__0_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43_ = (const lean_object*)&l_Lake_instImpl___closed__0_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43__value;
static const lean_string_object l_Lake_instImpl___closed__1_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ConfigDecl"};
static const lean_object* l_Lake_instImpl___closed__1_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43_ = (const lean_object*)&l_Lake_instImpl___closed__1_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43__value;
static const lean_ctor_object l_Lake_instImpl___closed__2_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instImpl___closed__0_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43__value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_instImpl___closed__2_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_instImpl___closed__2_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43__value_aux_0),((lean_object*)&l_Lake_instImpl___closed__1_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43__value),LEAN_SCALAR_PTR_LITERAL(19, 115, 72, 196, 55, 38, 211, 152)}};
static const lean_object* l_Lake_instImpl___closed__2_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43_ = (const lean_object*)&l_Lake_instImpl___closed__2_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43__value;
static lean_once_cell_t l_Lake_instImpl___closed__3_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instImpl___closed__3_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43_;
LEAN_EXPORT lean_object* l_Lake_instImpl_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43_;
LEAN_EXPORT lean_object* l_Lake_instTypeNameConfigDecl;
static const lean_string_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__0 = (const lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__0_value;
static const lean_string_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__1 = (const lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__1_value;
static const lean_string_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__2 = (const lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__2_value;
static const lean_string_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__3 = (const lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__3_value;
static const lean_ctor_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__4_value_aux_0),((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__4_value_aux_1),((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__4_value_aux_2),((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__4 = (const lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__4_value;
static const lean_array_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__5 = (const lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__5_value;
static const lean_string_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__6 = (const lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__6_value;
static const lean_ctor_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__7_value_aux_0),((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__7_value_aux_1),((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__7_value_aux_2),((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__7 = (const lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__7_value;
static const lean_string_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__8 = (const lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__8_value;
static const lean_ctor_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__9 = (const lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__9_value;
static const lean_string_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticRfl"};
static const lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__10 = (const lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__10_value;
static const lean_ctor_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__11_value_aux_0),((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__11_value_aux_1),((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__11_value_aux_2),((lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__10_value),LEAN_SCALAR_PTR_LITERAL(201, 188, 173, 198, 169, 252, 183, 45)}};
static const lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__11 = (const lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__11_value;
static const lean_string_object l_Lake_PConfigDecl_pkg__eq___autoParam___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rfl"};
static const lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__12 = (const lean_object*)&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__12_value;
static lean_once_cell_t l_Lake_PConfigDecl_pkg__eq___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__13;
static lean_once_cell_t l_Lake_PConfigDecl_pkg__eq___autoParam___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__14;
static lean_once_cell_t l_Lake_PConfigDecl_pkg__eq___autoParam___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__15;
static lean_once_cell_t l_Lake_PConfigDecl_pkg__eq___autoParam___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__16;
static lean_once_cell_t l_Lake_PConfigDecl_pkg__eq___autoParam___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__17;
static lean_once_cell_t l_Lake_PConfigDecl_pkg__eq___autoParam___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__18;
static lean_once_cell_t l_Lake_PConfigDecl_pkg__eq___autoParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__19;
static lean_once_cell_t l_Lake_PConfigDecl_pkg__eq___autoParam___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__20;
static lean_once_cell_t l_Lake_PConfigDecl_pkg__eq___autoParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam___closed__21;
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_pkg__eq___autoParam;
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_name__eq___autoParam;
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_kind__eq___autoParam;
static lean_once_cell_t l_Lake_ConfigDecl_partialKey___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ConfigDecl_partialKey___closed__0;
LEAN_EXPORT lean_object* l_Lake_ConfigDecl_partialKey(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ConfigDecl_partialKey___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeOutKConfigDeclPartialBuildKey___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeOutKConfigDeclPartialBuildKey___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_instCoeOutKConfigDeclPartialBuildKey___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instCoeOutKConfigDeclPartialBuildKey___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instCoeOutKConfigDeclPartialBuildKey___redArg___closed__0 = (const lean_object*)&l_Lake_instCoeOutKConfigDeclPartialBuildKey___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instCoeOutKConfigDeclPartialBuildKey___redArg();
LEAN_EXPORT lean_object* l_Lake_instCoeOutKConfigDeclPartialBuildKey___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeOutKConfigDeclPartialBuildKey(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeOutKConfigDeclPartialBuildKey___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_config_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_config_x27___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_config_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_config_x27___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_config_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_config_x27___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_config_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_config_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ConfigDecl_config_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ConfigDecl_config_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_config_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_config_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_config_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_config_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_config_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_config_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_config_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_config_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_ConfigDecl_leanLibConfig_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_lib"};
static const lean_object* l_Lake_ConfigDecl_leanLibConfig_x3f___closed__0 = (const lean_object*)&l_Lake_ConfigDecl_leanLibConfig_x3f___closed__0_value;
static const lean_ctor_object l_Lake_ConfigDecl_leanLibConfig_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_ConfigDecl_leanLibConfig_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 123, 8, 14, 20, 41, 164, 170)}};
static const lean_object* l_Lake_ConfigDecl_leanLibConfig_x3f___closed__1 = (const lean_object*)&l_Lake_ConfigDecl_leanLibConfig_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_ConfigDecl_leanLibConfig_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ConfigDecl_leanLibConfig_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_leanLibConfig_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_leanLibConfig_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_leanLibConfig_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_leanLibConfig_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ConfigDecl_leanExeConfig_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ConfigDecl_leanExeConfig_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_leanExeConfig_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_leanExeConfig_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_leanExeConfig_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_leanExeConfig_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_externLibConfig_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_externLibConfig_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_externLibConfig_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_externLibConfig_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_externLibConfig_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_externLibConfig_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_externLibConfig_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_externLibConfig_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_lib"};
static const lean_object* l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__0 = (const lean_object*)&l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_exe"};
static const lean_object* l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__1 = (const lean_object*)&l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__1_value;
static const lean_string_object l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "extern_lib"};
static const lean_object* l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__2 = (const lean_object*)&l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__2_value;
static const lean_string_object l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "input_file"};
static const lean_object* l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__3 = (const lean_object*)&l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__3_value;
static const lean_string_object l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "input_dir"};
static const lean_object* l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__4 = (const lean_object*)&l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_opaqueTargetConfig___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_opaqueTargetConfig___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_opaqueTargetConfig(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_opaqueTargetConfig___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_opaqueTargetConfig___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_opaqueTargetConfig___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_opaqueTargetConfig(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_opaqueTargetConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_opaqueTargetConfig_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_opaqueTargetConfig_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_opaqueTargetConfig_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_opaqueTargetConfig_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_opaqueTargetConfig_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_opaqueTargetConfig_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_opaqueTargetConfig_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_opaqueTargetConfig_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "LeanLibDecl"};
static const lean_object* l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__0 = (const lean_object*)&l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__0_value;
static const lean_ctor_object l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instImpl___closed__0_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43__value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__1_value_aux_0),((lean_object*)&l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 139, 151, 247, 81, 186, 255, 54)}};
static const lean_object* l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__1 = (const lean_object*)&l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__1_value;
static lean_once_cell_t l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__2;
LEAN_EXPORT lean_object* l_Lake_instTypeNameLeanLibDecl_unsafe__1;
LEAN_EXPORT lean_object* l_Lake_instTypeNameLeanLibDecl;
static const lean_string_object l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "LeanExeDecl"};
static const lean_object* l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__0 = (const lean_object*)&l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__0_value;
static const lean_ctor_object l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instImpl___closed__0_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43__value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__1_value_aux_0),((lean_object*)&l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(42, 3, 79, 186, 100, 200, 233, 30)}};
static const lean_object* l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__1 = (const lean_object*)&l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__1_value;
static lean_once_cell_t l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__2;
LEAN_EXPORT lean_object* l_Lake_instTypeNameLeanExeDecl_unsafe__1;
LEAN_EXPORT lean_object* l_Lake_instTypeNameLeanExeDecl;
static const lean_string_object l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "InputFileDecl"};
static const lean_object* l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__0 = (const lean_object*)&l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__0_value;
static const lean_ctor_object l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instImpl___closed__0_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43__value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__1_value_aux_0),((lean_object*)&l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(186, 159, 223, 49, 71, 15, 73, 230)}};
static const lean_object* l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__1 = (const lean_object*)&l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__1_value;
static lean_once_cell_t l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__2;
LEAN_EXPORT lean_object* l_Lake_instTypeNameInputFileDecl_unsafe__1;
LEAN_EXPORT lean_object* l_Lake_instTypeNameInputFileDecl;
static const lean_string_object l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "InputDirDecl"};
static const lean_object* l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__0 = (const lean_object*)&l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__0_value;
static const lean_ctor_object l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instImpl___closed__0_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43__value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__1_value_aux_0),((lean_object*)&l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(192, 100, 97, 166, 219, 82, 104, 152)}};
static const lean_object* l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__1 = (const lean_object*)&l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__1_value;
static lean_once_cell_t l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__2;
LEAN_EXPORT lean_object* l_Lake_instTypeNameInputDirDecl_unsafe__1;
LEAN_EXPORT lean_object* l_Lake_instTypeNameInputDirDecl;
static lean_object* _init_l_Lake_instImpl___closed__3_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43_(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = ((lean_object*)(l_Lake_instImpl___closed__2_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43_));
v___x_7_ = l_unsafeCast___redArg(v___x_6_);
return v___x_7_;
}
}
static lean_object* _init_l_Lake_instImpl_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43_(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_obj_once(&l_Lake_instImpl___closed__3_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43_, &l_Lake_instImpl___closed__3_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43__once, _init_l_Lake_instImpl___closed__3_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43_);
return v___x_8_;
}
}
static lean_object* _init_l_Lake_instTypeNameConfigDecl(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = l_Lake_instImpl_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43_;
return v___x_9_;
}
}
static lean_object* _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__13(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = ((lean_object*)(l_Lake_PConfigDecl_pkg__eq___autoParam___closed__12));
v___x_38_ = l_Lean_mkAtom(v___x_37_);
return v___x_38_;
}
}
static lean_object* _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__14(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = lean_obj_once(&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__13, &l_Lake_PConfigDecl_pkg__eq___autoParam___closed__13_once, _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__13);
v___x_40_ = ((lean_object*)(l_Lake_PConfigDecl_pkg__eq___autoParam___closed__5));
v___x_41_ = lean_array_push(v___x_40_, v___x_39_);
return v___x_41_;
}
}
static lean_object* _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__15(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_42_ = lean_obj_once(&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__14, &l_Lake_PConfigDecl_pkg__eq___autoParam___closed__14_once, _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__14);
v___x_43_ = ((lean_object*)(l_Lake_PConfigDecl_pkg__eq___autoParam___closed__11));
v___x_44_ = lean_box(2);
v___x_45_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_45_, 0, v___x_44_);
lean_ctor_set(v___x_45_, 1, v___x_43_);
lean_ctor_set(v___x_45_, 2, v___x_42_);
return v___x_45_;
}
}
static lean_object* _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__16(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = lean_obj_once(&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__15, &l_Lake_PConfigDecl_pkg__eq___autoParam___closed__15_once, _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__15);
v___x_47_ = ((lean_object*)(l_Lake_PConfigDecl_pkg__eq___autoParam___closed__5));
v___x_48_ = lean_array_push(v___x_47_, v___x_46_);
return v___x_48_;
}
}
static lean_object* _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__17(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_49_ = lean_obj_once(&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__16, &l_Lake_PConfigDecl_pkg__eq___autoParam___closed__16_once, _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__16);
v___x_50_ = ((lean_object*)(l_Lake_PConfigDecl_pkg__eq___autoParam___closed__9));
v___x_51_ = lean_box(2);
v___x_52_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
lean_ctor_set(v___x_52_, 1, v___x_50_);
lean_ctor_set(v___x_52_, 2, v___x_49_);
return v___x_52_;
}
}
static lean_object* _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__18(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = lean_obj_once(&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__17, &l_Lake_PConfigDecl_pkg__eq___autoParam___closed__17_once, _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__17);
v___x_54_ = ((lean_object*)(l_Lake_PConfigDecl_pkg__eq___autoParam___closed__5));
v___x_55_ = lean_array_push(v___x_54_, v___x_53_);
return v___x_55_;
}
}
static lean_object* _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__19(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_56_ = lean_obj_once(&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__18, &l_Lake_PConfigDecl_pkg__eq___autoParam___closed__18_once, _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__18);
v___x_57_ = ((lean_object*)(l_Lake_PConfigDecl_pkg__eq___autoParam___closed__7));
v___x_58_ = lean_box(2);
v___x_59_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set(v___x_59_, 1, v___x_57_);
lean_ctor_set(v___x_59_, 2, v___x_56_);
return v___x_59_;
}
}
static lean_object* _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__20(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_obj_once(&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__19, &l_Lake_PConfigDecl_pkg__eq___autoParam___closed__19_once, _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__19);
v___x_61_ = ((lean_object*)(l_Lake_PConfigDecl_pkg__eq___autoParam___closed__5));
v___x_62_ = lean_array_push(v___x_61_, v___x_60_);
return v___x_62_;
}
}
static lean_object* _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__21(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_63_ = lean_obj_once(&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__20, &l_Lake_PConfigDecl_pkg__eq___autoParam___closed__20_once, _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__20);
v___x_64_ = ((lean_object*)(l_Lake_PConfigDecl_pkg__eq___autoParam___closed__4));
v___x_65_ = lean_box(2);
v___x_66_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set(v___x_66_, 1, v___x_64_);
lean_ctor_set(v___x_66_, 2, v___x_63_);
return v___x_66_;
}
}
static lean_object* _init_l_Lake_PConfigDecl_pkg__eq___autoParam(void){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = lean_obj_once(&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__21, &l_Lake_PConfigDecl_pkg__eq___autoParam___closed__21_once, _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__21);
return v___x_67_;
}
}
static lean_object* _init_l_Lake_NConfigDecl_name__eq___autoParam(void){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_obj_once(&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__21, &l_Lake_PConfigDecl_pkg__eq___autoParam___closed__21_once, _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__21);
return v___x_68_;
}
}
static lean_object* _init_l_Lake_KConfigDecl_kind__eq___autoParam(void){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = lean_obj_once(&l_Lake_PConfigDecl_pkg__eq___autoParam___closed__21, &l_Lake_PConfigDecl_pkg__eq___autoParam___closed__21_once, _init_l_Lake_PConfigDecl_pkg__eq___autoParam___closed__21);
return v___x_69_;
}
}
static lean_object* _init_l_Lake_ConfigDecl_partialKey___closed__0(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_box(0);
v___x_71_ = l_unsafeCast___redArg(v___x_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lake_ConfigDecl_partialKey(lean_object* v_self_72_){
_start:
{
lean_object* v_name_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v_name_73_ = lean_ctor_get(v_self_72_, 1);
v___x_74_ = lean_obj_once(&l_Lake_ConfigDecl_partialKey___closed__0, &l_Lake_ConfigDecl_partialKey___closed__0_once, _init_l_Lake_ConfigDecl_partialKey___closed__0);
lean_inc(v_name_73_);
v___x_75_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
lean_ctor_set(v___x_75_, 1, v_name_73_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lake_ConfigDecl_partialKey___boxed(lean_object* v_self_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_Lake_ConfigDecl_partialKey(v_self_76_);
lean_dec_ref(v_self_76_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeOutKConfigDeclPartialBuildKey___redArg___lam__0(lean_object* v_x_78_){
_start:
{
lean_object* v_name_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v_name_79_ = lean_ctor_get(v_x_78_, 1);
v___x_80_ = lean_obj_once(&l_Lake_ConfigDecl_partialKey___closed__0, &l_Lake_ConfigDecl_partialKey___closed__0_once, _init_l_Lake_ConfigDecl_partialKey___closed__0);
lean_inc(v_name_79_);
v___x_81_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
lean_ctor_set(v___x_81_, 1, v_name_79_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeOutKConfigDeclPartialBuildKey___redArg___lam__0___boxed(lean_object* v_x_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l_Lake_instCoeOutKConfigDeclPartialBuildKey___redArg___lam__0(v_x_82_);
lean_dec_ref(v_x_82_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeOutKConfigDeclPartialBuildKey___redArg(){
_start:
{
lean_object* v___f_86_; 
v___f_86_ = ((lean_object*)(l_Lake_instCoeOutKConfigDeclPartialBuildKey___redArg___closed__0));
return v___f_86_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeOutKConfigDeclPartialBuildKey___redArg___boxed(lean_object* v___dummy_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lake_instCoeOutKConfigDeclPartialBuildKey___redArg();
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeOutKConfigDeclPartialBuildKey(lean_object* v_k_89_){
_start:
{
lean_object* v___f_90_; 
v___f_90_ = ((lean_object*)(l_Lake_instCoeOutKConfigDeclPartialBuildKey___redArg___closed__0));
return v___f_90_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeOutKConfigDeclPartialBuildKey___boxed(lean_object* v_k_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lake_instCoeOutKConfigDeclPartialBuildKey(v_k_91_);
lean_dec(v_k_91_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_config_x27___redArg(lean_object* v_self_93_){
_start:
{
lean_object* v_config_94_; 
v_config_94_ = lean_ctor_get(v_self_93_, 3);
lean_inc(v_config_94_);
return v_config_94_;
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_config_x27___redArg___boxed(lean_object* v_self_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l_Lake_PConfigDecl_config_x27___redArg(v_self_95_);
lean_dec_ref(v_self_95_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_config_x27(lean_object* v_p_97_, lean_object* v_self_98_){
_start:
{
lean_object* v_config_99_; 
v_config_99_ = lean_ctor_get(v_self_98_, 3);
lean_inc(v_config_99_);
return v_config_99_;
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_config_x27___boxed(lean_object* v_p_100_, lean_object* v_self_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lake_PConfigDecl_config_x27(v_p_100_, v_self_101_);
lean_dec_ref(v_self_101_);
lean_dec(v_p_100_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_config_x27___redArg(lean_object* v_self_103_){
_start:
{
lean_object* v_config_104_; 
v_config_104_ = lean_ctor_get(v_self_103_, 3);
lean_inc(v_config_104_);
return v_config_104_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_config_x27___redArg___boxed(lean_object* v_self_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Lake_NConfigDecl_config_x27___redArg(v_self_105_);
lean_dec_ref(v_self_105_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_config_x27(lean_object* v_p_107_, lean_object* v_n_108_, lean_object* v_self_109_){
_start:
{
lean_object* v_config_110_; 
v_config_110_ = lean_ctor_get(v_self_109_, 3);
lean_inc(v_config_110_);
return v_config_110_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_config_x27___boxed(lean_object* v_p_111_, lean_object* v_n_112_, lean_object* v_self_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lake_NConfigDecl_config_x27(v_p_111_, v_n_112_, v_self_113_);
lean_dec_ref(v_self_113_);
lean_dec(v_n_112_);
lean_dec(v_p_111_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lake_ConfigDecl_config_x3f(lean_object* v_kind_115_, lean_object* v_self_116_){
_start:
{
lean_object* v_kind_117_; lean_object* v_config_118_; uint8_t v___x_119_; 
v_kind_117_ = lean_ctor_get(v_self_116_, 2);
v_config_118_ = lean_ctor_get(v_self_116_, 3);
v___x_119_ = lean_name_eq(v_kind_117_, v_kind_115_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; 
v___x_120_ = lean_box(0);
return v___x_120_;
}
else
{
lean_object* v___x_121_; 
lean_inc(v_config_118_);
v___x_121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_121_, 0, v_config_118_);
return v___x_121_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_ConfigDecl_config_x3f___boxed(lean_object* v_kind_122_, lean_object* v_self_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l_Lake_ConfigDecl_config_x3f(v_kind_122_, v_self_123_);
lean_dec_ref(v_self_123_);
lean_dec(v_kind_122_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_config_x3f___redArg(lean_object* v_kind_125_, lean_object* v_self_126_){
_start:
{
lean_object* v_kind_127_; lean_object* v_config_128_; uint8_t v___x_129_; 
v_kind_127_ = lean_ctor_get(v_self_126_, 2);
v_config_128_ = lean_ctor_get(v_self_126_, 3);
v___x_129_ = lean_name_eq(v_kind_127_, v_kind_125_);
if (v___x_129_ == 0)
{
lean_object* v___x_130_; 
v___x_130_ = lean_box(0);
return v___x_130_;
}
else
{
lean_object* v___x_131_; 
lean_inc(v_config_128_);
v___x_131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_131_, 0, v_config_128_);
return v___x_131_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_config_x3f___redArg___boxed(lean_object* v_kind_132_, lean_object* v_self_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_Lake_PConfigDecl_config_x3f___redArg(v_kind_132_, v_self_133_);
lean_dec_ref(v_self_133_);
lean_dec(v_kind_132_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_config_x3f(lean_object* v_p_135_, lean_object* v_kind_136_, lean_object* v_self_137_){
_start:
{
lean_object* v_kind_138_; lean_object* v_config_139_; uint8_t v___x_140_; 
v_kind_138_ = lean_ctor_get(v_self_137_, 2);
v_config_139_ = lean_ctor_get(v_self_137_, 3);
v___x_140_ = lean_name_eq(v_kind_138_, v_kind_136_);
if (v___x_140_ == 0)
{
lean_object* v___x_141_; 
v___x_141_ = lean_box(0);
return v___x_141_;
}
else
{
lean_object* v___x_142_; 
lean_inc(v_config_139_);
v___x_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_142_, 0, v_config_139_);
return v___x_142_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_config_x3f___boxed(lean_object* v_p_143_, lean_object* v_kind_144_, lean_object* v_self_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lake_PConfigDecl_config_x3f(v_p_143_, v_kind_144_, v_self_145_);
lean_dec_ref(v_self_145_);
lean_dec(v_kind_144_);
lean_dec(v_p_143_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_config_x3f___redArg(lean_object* v_kind_147_, lean_object* v_self_148_){
_start:
{
lean_object* v_kind_149_; lean_object* v_config_150_; uint8_t v___x_151_; 
v_kind_149_ = lean_ctor_get(v_self_148_, 2);
v_config_150_ = lean_ctor_get(v_self_148_, 3);
v___x_151_ = lean_name_eq(v_kind_149_, v_kind_147_);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; 
v___x_152_ = lean_box(0);
return v___x_152_;
}
else
{
lean_object* v___x_153_; 
lean_inc(v_config_150_);
v___x_153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_153_, 0, v_config_150_);
return v___x_153_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_config_x3f___redArg___boxed(lean_object* v_kind_154_, lean_object* v_self_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Lake_NConfigDecl_config_x3f___redArg(v_kind_154_, v_self_155_);
lean_dec_ref(v_self_155_);
lean_dec(v_kind_154_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_config_x3f(lean_object* v_p_157_, lean_object* v_n_158_, lean_object* v_kind_159_, lean_object* v_self_160_){
_start:
{
lean_object* v_kind_161_; lean_object* v_config_162_; uint8_t v___x_163_; 
v_kind_161_ = lean_ctor_get(v_self_160_, 2);
v_config_162_ = lean_ctor_get(v_self_160_, 3);
v___x_163_ = lean_name_eq(v_kind_161_, v_kind_159_);
if (v___x_163_ == 0)
{
lean_object* v___x_164_; 
v___x_164_ = lean_box(0);
return v___x_164_;
}
else
{
lean_object* v___x_165_; 
lean_inc(v_config_162_);
v___x_165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_165_, 0, v_config_162_);
return v___x_165_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_config_x3f___boxed(lean_object* v_p_166_, lean_object* v_n_167_, lean_object* v_kind_168_, lean_object* v_self_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Lake_NConfigDecl_config_x3f(v_p_166_, v_n_167_, v_kind_168_, v_self_169_);
lean_dec_ref(v_self_169_);
lean_dec(v_kind_168_);
lean_dec(v_n_167_);
lean_dec(v_p_166_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Lake_ConfigDecl_leanLibConfig_x3f(lean_object* v_self_174_){
_start:
{
lean_object* v_kind_175_; lean_object* v_config_176_; lean_object* v___x_177_; uint8_t v___x_178_; 
v_kind_175_ = lean_ctor_get(v_self_174_, 2);
v_config_176_ = lean_ctor_get(v_self_174_, 3);
v___x_177_ = ((lean_object*)(l_Lake_ConfigDecl_leanLibConfig_x3f___closed__1));
v___x_178_ = lean_name_eq(v_kind_175_, v___x_177_);
if (v___x_178_ == 0)
{
lean_object* v___x_179_; 
v___x_179_ = lean_box(0);
return v___x_179_;
}
else
{
lean_object* v___x_180_; 
lean_inc(v_config_176_);
v___x_180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_180_, 0, v_config_176_);
return v___x_180_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_ConfigDecl_leanLibConfig_x3f___boxed(lean_object* v_self_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_Lake_ConfigDecl_leanLibConfig_x3f(v_self_181_);
lean_dec_ref(v_self_181_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_leanLibConfig_x3f___redArg(lean_object* v_self_183_){
_start:
{
lean_object* v_kind_184_; lean_object* v_config_185_; lean_object* v___x_186_; uint8_t v___x_187_; 
v_kind_184_ = lean_ctor_get(v_self_183_, 2);
v_config_185_ = lean_ctor_get(v_self_183_, 3);
v___x_186_ = ((lean_object*)(l_Lake_ConfigDecl_leanLibConfig_x3f___closed__1));
v___x_187_ = lean_name_eq(v_kind_184_, v___x_186_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; 
v___x_188_ = lean_box(0);
return v___x_188_;
}
else
{
lean_object* v___x_189_; 
lean_inc(v_config_185_);
v___x_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_189_, 0, v_config_185_);
return v___x_189_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_leanLibConfig_x3f___redArg___boxed(lean_object* v_self_190_){
_start:
{
lean_object* v_res_191_; 
v_res_191_ = l_Lake_NConfigDecl_leanLibConfig_x3f___redArg(v_self_190_);
lean_dec_ref(v_self_190_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_leanLibConfig_x3f(lean_object* v_p_192_, lean_object* v_n_193_, lean_object* v_self_194_){
_start:
{
lean_object* v_kind_195_; lean_object* v_config_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v_kind_195_ = lean_ctor_get(v_self_194_, 2);
v_config_196_ = lean_ctor_get(v_self_194_, 3);
v___x_197_ = ((lean_object*)(l_Lake_ConfigDecl_leanLibConfig_x3f___closed__1));
v___x_198_ = lean_name_eq(v_kind_195_, v___x_197_);
if (v___x_198_ == 0)
{
lean_object* v___x_199_; 
v___x_199_ = lean_box(0);
return v___x_199_;
}
else
{
lean_object* v___x_200_; 
lean_inc(v_config_196_);
v___x_200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_200_, 0, v_config_196_);
return v___x_200_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_leanLibConfig_x3f___boxed(lean_object* v_p_201_, lean_object* v_n_202_, lean_object* v_self_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lake_NConfigDecl_leanLibConfig_x3f(v_p_201_, v_n_202_, v_self_203_);
lean_dec_ref(v_self_203_);
lean_dec(v_n_202_);
lean_dec(v_p_201_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Lake_ConfigDecl_leanExeConfig_x3f(lean_object* v_self_205_){
_start:
{
lean_object* v_kind_206_; lean_object* v_config_207_; lean_object* v___x_208_; uint8_t v___x_209_; 
v_kind_206_ = lean_ctor_get(v_self_205_, 2);
v_config_207_ = lean_ctor_get(v_self_205_, 3);
v___x_208_ = l_Lake_LeanExe_keyword;
v___x_209_ = lean_name_eq(v_kind_206_, v___x_208_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; 
v___x_210_ = lean_box(0);
return v___x_210_;
}
else
{
lean_object* v___x_211_; 
lean_inc(v_config_207_);
v___x_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_211_, 0, v_config_207_);
return v___x_211_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_ConfigDecl_leanExeConfig_x3f___boxed(lean_object* v_self_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Lake_ConfigDecl_leanExeConfig_x3f(v_self_212_);
lean_dec_ref(v_self_212_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_leanExeConfig_x3f___redArg(lean_object* v_self_214_){
_start:
{
lean_object* v_kind_215_; lean_object* v_config_216_; lean_object* v___x_217_; uint8_t v___x_218_; 
v_kind_215_ = lean_ctor_get(v_self_214_, 2);
v_config_216_ = lean_ctor_get(v_self_214_, 3);
v___x_217_ = l_Lake_LeanExe_keyword;
v___x_218_ = lean_name_eq(v_kind_215_, v___x_217_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; 
v___x_219_ = lean_box(0);
return v___x_219_;
}
else
{
lean_object* v___x_220_; 
lean_inc(v_config_216_);
v___x_220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_220_, 0, v_config_216_);
return v___x_220_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_leanExeConfig_x3f___redArg___boxed(lean_object* v_self_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Lake_NConfigDecl_leanExeConfig_x3f___redArg(v_self_221_);
lean_dec_ref(v_self_221_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_leanExeConfig_x3f(lean_object* v_p_223_, lean_object* v_n_224_, lean_object* v_self_225_){
_start:
{
lean_object* v_kind_226_; lean_object* v_config_227_; lean_object* v___x_228_; uint8_t v___x_229_; 
v_kind_226_ = lean_ctor_get(v_self_225_, 2);
v_config_227_ = lean_ctor_get(v_self_225_, 3);
v___x_228_ = l_Lake_LeanExe_keyword;
v___x_229_ = lean_name_eq(v_kind_226_, v___x_228_);
if (v___x_229_ == 0)
{
lean_object* v___x_230_; 
v___x_230_ = lean_box(0);
return v___x_230_;
}
else
{
lean_object* v___x_231_; 
lean_inc(v_config_227_);
v___x_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_231_, 0, v_config_227_);
return v___x_231_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_leanExeConfig_x3f___boxed(lean_object* v_p_232_, lean_object* v_n_233_, lean_object* v_self_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Lake_NConfigDecl_leanExeConfig_x3f(v_p_232_, v_n_233_, v_self_234_);
lean_dec_ref(v_self_234_);
lean_dec(v_n_233_);
lean_dec(v_p_232_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_externLibConfig_x3f___redArg(lean_object* v_self_236_){
_start:
{
lean_object* v_kind_237_; lean_object* v_config_238_; lean_object* v___x_239_; uint8_t v___x_240_; 
v_kind_237_ = lean_ctor_get(v_self_236_, 2);
v_config_238_ = lean_ctor_get(v_self_236_, 3);
v___x_239_ = l_Lake_ExternLib_keyword;
v___x_240_ = lean_name_eq(v_kind_237_, v___x_239_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; 
v___x_241_ = lean_box(0);
return v___x_241_;
}
else
{
lean_object* v___x_242_; 
lean_inc(v_config_238_);
v___x_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_242_, 0, v_config_238_);
return v___x_242_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_externLibConfig_x3f___redArg___boxed(lean_object* v_self_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Lake_PConfigDecl_externLibConfig_x3f___redArg(v_self_243_);
lean_dec_ref(v_self_243_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_externLibConfig_x3f(lean_object* v_p_245_, lean_object* v_self_246_){
_start:
{
lean_object* v_kind_247_; lean_object* v_config_248_; lean_object* v___x_249_; uint8_t v___x_250_; 
v_kind_247_ = lean_ctor_get(v_self_246_, 2);
v_config_248_ = lean_ctor_get(v_self_246_, 3);
v___x_249_ = l_Lake_ExternLib_keyword;
v___x_250_ = lean_name_eq(v_kind_247_, v___x_249_);
if (v___x_250_ == 0)
{
lean_object* v___x_251_; 
v___x_251_ = lean_box(0);
return v___x_251_;
}
else
{
lean_object* v___x_252_; 
lean_inc(v_config_248_);
v___x_252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_252_, 0, v_config_248_);
return v___x_252_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_externLibConfig_x3f___boxed(lean_object* v_p_253_, lean_object* v_self_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Lake_PConfigDecl_externLibConfig_x3f(v_p_253_, v_self_254_);
lean_dec_ref(v_self_254_);
lean_dec(v_p_253_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_externLibConfig_x3f___redArg(lean_object* v_self_256_){
_start:
{
lean_object* v_kind_257_; lean_object* v_config_258_; lean_object* v___x_259_; uint8_t v___x_260_; 
v_kind_257_ = lean_ctor_get(v_self_256_, 2);
v_config_258_ = lean_ctor_get(v_self_256_, 3);
v___x_259_ = l_Lake_ExternLib_keyword;
v___x_260_ = lean_name_eq(v_kind_257_, v___x_259_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; 
v___x_261_ = lean_box(0);
return v___x_261_;
}
else
{
lean_object* v___x_262_; 
lean_inc(v_config_258_);
v___x_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_262_, 0, v_config_258_);
return v___x_262_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_externLibConfig_x3f___redArg___boxed(lean_object* v_self_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lake_NConfigDecl_externLibConfig_x3f___redArg(v_self_263_);
lean_dec_ref(v_self_263_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_externLibConfig_x3f(lean_object* v_p_265_, lean_object* v_n_266_, lean_object* v_self_267_){
_start:
{
lean_object* v_kind_268_; lean_object* v_config_269_; lean_object* v___x_270_; uint8_t v___x_271_; 
v_kind_268_ = lean_ctor_get(v_self_267_, 2);
v_config_269_ = lean_ctor_get(v_self_267_, 3);
v___x_270_ = l_Lake_ExternLib_keyword;
v___x_271_ = lean_name_eq(v_kind_268_, v___x_270_);
if (v___x_271_ == 0)
{
lean_object* v___x_272_; 
v___x_272_ = lean_box(0);
return v___x_272_;
}
else
{
lean_object* v___x_273_; 
lean_inc(v_config_269_);
v___x_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_273_, 0, v_config_269_);
return v___x_273_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_externLibConfig_x3f___boxed(lean_object* v_p_274_, lean_object* v_n_275_, lean_object* v_self_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lake_NConfigDecl_externLibConfig_x3f(v_p_274_, v_n_275_, v_self_276_);
lean_dec_ref(v_self_276_);
lean_dec(v_n_275_);
lean_dec(v_p_274_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg(lean_object* v_kind_283_, lean_object* v_h__1_284_, lean_object* v_h__2_285_, lean_object* v_h__3_286_, lean_object* v_h__4_287_, lean_object* v_h__5_288_, lean_object* v_h__6_289_, lean_object* v_h__7_290_){
_start:
{
switch(lean_obj_tag(v_kind_283_))
{
case 1:
{
lean_object* v_pre_291_; 
lean_dec(v_h__4_287_);
v_pre_291_ = lean_ctor_get(v_kind_283_, 0);
if (lean_obj_tag(v_pre_291_) == 0)
{
lean_object* v_str_292_; lean_object* v___x_293_; uint8_t v___x_294_; 
v_str_292_ = lean_ctor_get(v_kind_283_, 1);
v___x_293_ = ((lean_object*)(l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__0));
v___x_294_ = lean_string_dec_eq(v_str_292_, v___x_293_);
if (v___x_294_ == 0)
{
lean_object* v___x_295_; uint8_t v___x_296_; 
lean_dec(v_h__1_284_);
v___x_295_ = ((lean_object*)(l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__1));
v___x_296_ = lean_string_dec_eq(v_str_292_, v___x_295_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; uint8_t v___x_298_; 
lean_dec(v_h__2_285_);
v___x_297_ = ((lean_object*)(l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__2));
v___x_298_ = lean_string_dec_eq(v_str_292_, v___x_297_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; uint8_t v___x_300_; 
lean_dec(v_h__3_286_);
v___x_299_ = ((lean_object*)(l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__3));
v___x_300_ = lean_string_dec_eq(v_str_292_, v___x_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; uint8_t v___x_302_; 
lean_dec(v_h__5_288_);
v___x_301_ = ((lean_object*)(l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__4));
v___x_302_ = lean_string_dec_eq(v_str_292_, v___x_301_);
if (v___x_302_ == 0)
{
lean_object* v___x_303_; 
lean_dec(v_h__6_289_);
v___x_303_ = lean_apply_7(v_h__7_290_, v_kind_283_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_303_;
}
else
{
lean_object* v___x_304_; lean_object* v___x_305_; 
lean_dec_ref_known(v_kind_283_, 2);
lean_dec(v_h__7_290_);
v___x_304_ = lean_box(0);
v___x_305_ = lean_apply_1(v_h__6_289_, v___x_304_);
return v___x_305_;
}
}
else
{
lean_object* v___x_306_; lean_object* v___x_307_; 
lean_dec_ref_known(v_kind_283_, 2);
lean_dec(v_h__7_290_);
lean_dec(v_h__6_289_);
v___x_306_ = lean_box(0);
v___x_307_ = lean_apply_1(v_h__5_288_, v___x_306_);
return v___x_307_;
}
}
else
{
lean_object* v___x_308_; lean_object* v___x_309_; 
lean_dec_ref_known(v_kind_283_, 2);
lean_dec(v_h__7_290_);
lean_dec(v_h__6_289_);
lean_dec(v_h__5_288_);
v___x_308_ = lean_box(0);
v___x_309_ = lean_apply_1(v_h__3_286_, v___x_308_);
return v___x_309_;
}
}
else
{
lean_object* v___x_310_; lean_object* v___x_311_; 
lean_dec_ref_known(v_kind_283_, 2);
lean_dec(v_h__7_290_);
lean_dec(v_h__6_289_);
lean_dec(v_h__5_288_);
lean_dec(v_h__3_286_);
v___x_310_ = lean_box(0);
v___x_311_ = lean_apply_1(v_h__2_285_, v___x_310_);
return v___x_311_;
}
}
else
{
lean_object* v___x_312_; lean_object* v___x_313_; 
lean_dec_ref_known(v_kind_283_, 2);
lean_dec(v_h__7_290_);
lean_dec(v_h__6_289_);
lean_dec(v_h__5_288_);
lean_dec(v_h__3_286_);
lean_dec(v_h__2_285_);
v___x_312_ = lean_box(0);
v___x_313_ = lean_apply_1(v_h__1_284_, v___x_312_);
return v___x_313_;
}
}
else
{
lean_object* v___x_314_; 
lean_dec(v_h__6_289_);
lean_dec(v_h__5_288_);
lean_dec(v_h__3_286_);
lean_dec(v_h__2_285_);
lean_dec(v_h__1_284_);
v___x_314_ = lean_apply_7(v_h__7_290_, v_kind_283_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_314_;
}
}
case 0:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
lean_dec(v_h__7_290_);
lean_dec(v_h__6_289_);
lean_dec(v_h__5_288_);
lean_dec(v_h__3_286_);
lean_dec(v_h__2_285_);
lean_dec(v_h__1_284_);
v___x_315_ = lean_box(0);
v___x_316_ = lean_apply_1(v_h__4_287_, v___x_315_);
return v___x_316_;
}
default: 
{
lean_object* v___x_317_; 
lean_dec(v_h__6_289_);
lean_dec(v_h__5_288_);
lean_dec(v_h__4_287_);
lean_dec(v_h__3_286_);
lean_dec(v_h__2_285_);
lean_dec(v_h__1_284_);
v___x_317_ = lean_apply_7(v_h__7_290_, v_kind_283_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_317_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter(lean_object* v_motive_318_, lean_object* v_kind_319_, lean_object* v_h__1_320_, lean_object* v_h__2_321_, lean_object* v_h__3_322_, lean_object* v_h__4_323_, lean_object* v_h__5_324_, lean_object* v_h__6_325_, lean_object* v_h__7_326_){
_start:
{
switch(lean_obj_tag(v_kind_319_))
{
case 1:
{
lean_object* v_pre_327_; 
lean_dec(v_h__4_323_);
v_pre_327_ = lean_ctor_get(v_kind_319_, 0);
if (lean_obj_tag(v_pre_327_) == 0)
{
lean_object* v_str_328_; lean_object* v___x_329_; uint8_t v___x_330_; 
v_str_328_ = lean_ctor_get(v_kind_319_, 1);
v___x_329_ = ((lean_object*)(l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__0));
v___x_330_ = lean_string_dec_eq(v_str_328_, v___x_329_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; uint8_t v___x_332_; 
lean_dec(v_h__1_320_);
v___x_331_ = ((lean_object*)(l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__1));
v___x_332_ = lean_string_dec_eq(v_str_328_, v___x_331_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; uint8_t v___x_334_; 
lean_dec(v_h__2_321_);
v___x_333_ = ((lean_object*)(l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__2));
v___x_334_ = lean_string_dec_eq(v_str_328_, v___x_333_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; uint8_t v___x_336_; 
lean_dec(v_h__3_322_);
v___x_335_ = ((lean_object*)(l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__3));
v___x_336_ = lean_string_dec_eq(v_str_328_, v___x_335_);
if (v___x_336_ == 0)
{
lean_object* v___x_337_; uint8_t v___x_338_; 
lean_dec(v_h__5_324_);
v___x_337_ = ((lean_object*)(l___private_Lake_Config_ConfigDecl_0__Lake_ConfigType_match__1_splitter___redArg___closed__4));
v___x_338_ = lean_string_dec_eq(v_str_328_, v___x_337_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; 
lean_dec(v_h__6_325_);
v___x_339_ = lean_apply_7(v_h__7_326_, v_kind_319_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_339_;
}
else
{
lean_object* v___x_340_; lean_object* v___x_341_; 
lean_dec_ref_known(v_kind_319_, 2);
lean_dec(v_h__7_326_);
v___x_340_ = lean_box(0);
v___x_341_ = lean_apply_1(v_h__6_325_, v___x_340_);
return v___x_341_;
}
}
else
{
lean_object* v___x_342_; lean_object* v___x_343_; 
lean_dec_ref_known(v_kind_319_, 2);
lean_dec(v_h__7_326_);
lean_dec(v_h__6_325_);
v___x_342_ = lean_box(0);
v___x_343_ = lean_apply_1(v_h__5_324_, v___x_342_);
return v___x_343_;
}
}
else
{
lean_object* v___x_344_; lean_object* v___x_345_; 
lean_dec_ref_known(v_kind_319_, 2);
lean_dec(v_h__7_326_);
lean_dec(v_h__6_325_);
lean_dec(v_h__5_324_);
v___x_344_ = lean_box(0);
v___x_345_ = lean_apply_1(v_h__3_322_, v___x_344_);
return v___x_345_;
}
}
else
{
lean_object* v___x_346_; lean_object* v___x_347_; 
lean_dec_ref_known(v_kind_319_, 2);
lean_dec(v_h__7_326_);
lean_dec(v_h__6_325_);
lean_dec(v_h__5_324_);
lean_dec(v_h__3_322_);
v___x_346_ = lean_box(0);
v___x_347_ = lean_apply_1(v_h__2_321_, v___x_346_);
return v___x_347_;
}
}
else
{
lean_object* v___x_348_; lean_object* v___x_349_; 
lean_dec_ref_known(v_kind_319_, 2);
lean_dec(v_h__7_326_);
lean_dec(v_h__6_325_);
lean_dec(v_h__5_324_);
lean_dec(v_h__3_322_);
lean_dec(v_h__2_321_);
v___x_348_ = lean_box(0);
v___x_349_ = lean_apply_1(v_h__1_320_, v___x_348_);
return v___x_349_;
}
}
else
{
lean_object* v___x_350_; 
lean_dec(v_h__6_325_);
lean_dec(v_h__5_324_);
lean_dec(v_h__3_322_);
lean_dec(v_h__2_321_);
lean_dec(v_h__1_320_);
v___x_350_ = lean_apply_7(v_h__7_326_, v_kind_319_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_350_;
}
}
case 0:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
lean_dec(v_h__7_326_);
lean_dec(v_h__6_325_);
lean_dec(v_h__5_324_);
lean_dec(v_h__3_322_);
lean_dec(v_h__2_321_);
lean_dec(v_h__1_320_);
v___x_351_ = lean_box(0);
v___x_352_ = lean_apply_1(v_h__4_323_, v___x_351_);
return v___x_352_;
}
default: 
{
lean_object* v___x_353_; 
lean_dec(v_h__6_325_);
lean_dec(v_h__5_324_);
lean_dec(v_h__4_323_);
lean_dec(v_h__3_322_);
lean_dec(v_h__2_321_);
lean_dec(v_h__1_320_);
v___x_353_ = lean_apply_7(v_h__7_326_, v_kind_319_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_353_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_opaqueTargetConfig___redArg(lean_object* v_self_354_){
_start:
{
lean_object* v_config_355_; 
v_config_355_ = lean_ctor_get(v_self_354_, 3);
lean_inc(v_config_355_);
return v_config_355_;
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_opaqueTargetConfig___redArg___boxed(lean_object* v_self_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = l_Lake_PConfigDecl_opaqueTargetConfig___redArg(v_self_356_);
lean_dec_ref(v_self_356_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_opaqueTargetConfig(lean_object* v_p_358_, lean_object* v_self_359_, lean_object* v_h_360_){
_start:
{
lean_object* v_config_361_; 
v_config_361_ = lean_ctor_get(v_self_359_, 3);
lean_inc(v_config_361_);
return v_config_361_;
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_opaqueTargetConfig___boxed(lean_object* v_p_362_, lean_object* v_self_363_, lean_object* v_h_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l_Lake_PConfigDecl_opaqueTargetConfig(v_p_362_, v_self_363_, v_h_364_);
lean_dec_ref(v_self_363_);
lean_dec(v_p_362_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_opaqueTargetConfig___redArg(lean_object* v_self_366_){
_start:
{
lean_object* v_config_367_; 
v_config_367_ = lean_ctor_get(v_self_366_, 3);
lean_inc(v_config_367_);
return v_config_367_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_opaqueTargetConfig___redArg___boxed(lean_object* v_self_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l_Lake_NConfigDecl_opaqueTargetConfig___redArg(v_self_368_);
lean_dec_ref(v_self_368_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_opaqueTargetConfig(lean_object* v_p_370_, lean_object* v_n_371_, lean_object* v_self_372_, lean_object* v_h_373_){
_start:
{
lean_object* v_config_374_; 
v_config_374_ = lean_ctor_get(v_self_372_, 3);
lean_inc(v_config_374_);
return v_config_374_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_opaqueTargetConfig___boxed(lean_object* v_p_375_, lean_object* v_n_376_, lean_object* v_self_377_, lean_object* v_h_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l_Lake_NConfigDecl_opaqueTargetConfig(v_p_375_, v_n_376_, v_self_377_, v_h_378_);
lean_dec_ref(v_self_377_);
lean_dec(v_n_376_);
lean_dec(v_p_375_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_opaqueTargetConfig_x3f___redArg(lean_object* v_self_380_){
_start:
{
lean_object* v_kind_381_; lean_object* v_config_382_; uint8_t v___x_383_; 
v_kind_381_ = lean_ctor_get(v_self_380_, 2);
v_config_382_ = lean_ctor_get(v_self_380_, 3);
v___x_383_ = l_Lean_Name_isAnonymous(v_kind_381_);
if (v___x_383_ == 0)
{
lean_object* v___x_384_; 
v___x_384_ = lean_box(0);
return v___x_384_;
}
else
{
lean_object* v___x_385_; 
lean_inc(v_config_382_);
v___x_385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_385_, 0, v_config_382_);
return v___x_385_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_opaqueTargetConfig_x3f___redArg___boxed(lean_object* v_self_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l_Lake_PConfigDecl_opaqueTargetConfig_x3f___redArg(v_self_386_);
lean_dec_ref(v_self_386_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_opaqueTargetConfig_x3f(lean_object* v_p_388_, lean_object* v_self_389_){
_start:
{
lean_object* v_kind_390_; lean_object* v_config_391_; uint8_t v___x_392_; 
v_kind_390_ = lean_ctor_get(v_self_389_, 2);
v_config_391_ = lean_ctor_get(v_self_389_, 3);
v___x_392_ = l_Lean_Name_isAnonymous(v_kind_390_);
if (v___x_392_ == 0)
{
lean_object* v___x_393_; 
v___x_393_ = lean_box(0);
return v___x_393_;
}
else
{
lean_object* v___x_394_; 
lean_inc(v_config_391_);
v___x_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_394_, 0, v_config_391_);
return v___x_394_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_opaqueTargetConfig_x3f___boxed(lean_object* v_p_395_, lean_object* v_self_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lake_PConfigDecl_opaqueTargetConfig_x3f(v_p_395_, v_self_396_);
lean_dec_ref(v_self_396_);
lean_dec(v_p_395_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_opaqueTargetConfig_x3f___redArg(lean_object* v_self_398_){
_start:
{
lean_object* v_kind_399_; lean_object* v_config_400_; uint8_t v___x_401_; 
v_kind_399_ = lean_ctor_get(v_self_398_, 2);
v_config_400_ = lean_ctor_get(v_self_398_, 3);
v___x_401_ = l_Lean_Name_isAnonymous(v_kind_399_);
if (v___x_401_ == 0)
{
lean_object* v___x_402_; 
v___x_402_ = lean_box(0);
return v___x_402_;
}
else
{
lean_object* v___x_403_; 
lean_inc(v_config_400_);
v___x_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_403_, 0, v_config_400_);
return v___x_403_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_opaqueTargetConfig_x3f___redArg___boxed(lean_object* v_self_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lake_NConfigDecl_opaqueTargetConfig_x3f___redArg(v_self_404_);
lean_dec_ref(v_self_404_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_opaqueTargetConfig_x3f(lean_object* v_p_406_, lean_object* v_n_407_, lean_object* v_self_408_){
_start:
{
lean_object* v_kind_409_; lean_object* v_config_410_; uint8_t v___x_411_; 
v_kind_409_ = lean_ctor_get(v_self_408_, 2);
v_config_410_ = lean_ctor_get(v_self_408_, 3);
v___x_411_ = l_Lean_Name_isAnonymous(v_kind_409_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; 
v___x_412_ = lean_box(0);
return v___x_412_;
}
else
{
lean_object* v___x_413_; 
lean_inc(v_config_410_);
v___x_413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_413_, 0, v_config_410_);
return v___x_413_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_NConfigDecl_opaqueTargetConfig_x3f___boxed(lean_object* v_p_414_, lean_object* v_n_415_, lean_object* v_self_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lake_NConfigDecl_opaqueTargetConfig_x3f(v_p_414_, v_n_415_, v_self_416_);
lean_dec_ref(v_self_416_);
lean_dec(v_n_415_);
lean_dec(v_p_414_);
return v_res_417_;
}
}
static lean_object* _init_l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__2(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_422_ = ((lean_object*)(l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__1));
v___x_423_ = l_unsafeCast___redArg(v___x_422_);
return v___x_423_;
}
}
static lean_object* _init_l_Lake_instTypeNameLeanLibDecl_unsafe__1(void){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = lean_obj_once(&l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__2, &l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__2_once, _init_l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__2);
return v___x_424_;
}
}
static lean_object* _init_l_Lake_instTypeNameLeanLibDecl(void){
_start:
{
lean_object* v___x_425_; 
v___x_425_ = lean_obj_once(&l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__2, &l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__2_once, _init_l_Lake_instTypeNameLeanLibDecl_unsafe__1___closed__2);
return v___x_425_;
}
}
static lean_object* _init_l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__2(void){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = ((lean_object*)(l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__1));
v___x_431_ = l_unsafeCast___redArg(v___x_430_);
return v___x_431_;
}
}
static lean_object* _init_l_Lake_instTypeNameLeanExeDecl_unsafe__1(void){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = lean_obj_once(&l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__2, &l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__2_once, _init_l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__2);
return v___x_432_;
}
}
static lean_object* _init_l_Lake_instTypeNameLeanExeDecl(void){
_start:
{
lean_object* v___x_433_; 
v___x_433_ = lean_obj_once(&l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__2, &l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__2_once, _init_l_Lake_instTypeNameLeanExeDecl_unsafe__1___closed__2);
return v___x_433_;
}
}
static lean_object* _init_l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__2(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = ((lean_object*)(l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__1));
v___x_439_ = l_unsafeCast___redArg(v___x_438_);
return v___x_439_;
}
}
static lean_object* _init_l_Lake_instTypeNameInputFileDecl_unsafe__1(void){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = lean_obj_once(&l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__2, &l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__2_once, _init_l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__2);
return v___x_440_;
}
}
static lean_object* _init_l_Lake_instTypeNameInputFileDecl(void){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = lean_obj_once(&l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__2, &l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__2_once, _init_l_Lake_instTypeNameInputFileDecl_unsafe__1___closed__2);
return v___x_441_;
}
}
static lean_object* _init_l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__2(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = ((lean_object*)(l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__1));
v___x_447_ = l_unsafeCast___redArg(v___x_446_);
return v___x_447_;
}
}
static lean_object* _init_l_Lake_instTypeNameInputDirDecl_unsafe__1(void){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = lean_obj_once(&l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__2, &l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__2_once, _init_l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__2);
return v___x_448_;
}
}
static lean_object* _init_l_Lake_instTypeNameInputDirDecl(void){
_start:
{
lean_object* v___x_449_; 
v___x_449_ = lean_obj_once(&l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__2, &l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__2_once, _init_l_Lake_instTypeNameInputDirDecl_unsafe__1___closed__2);
return v___x_449_;
}
}
lean_object* runtime_initialize_Lake_Config_Opaque(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_LeanLibConfig(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_LeanExeConfig(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_ExternLibConfig(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_InputFileConfig(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Name(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_ConfigDecl(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Opaque(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_LeanLibConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_LeanExeConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_ExternLibConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_InputFileConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instImpl_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43_ = _init_l_Lake_instImpl_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43_();
lean_mark_persistent(l_Lake_instImpl_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43_);
l_Lake_instTypeNameConfigDecl = _init_l_Lake_instTypeNameConfigDecl();
lean_mark_persistent(l_Lake_instTypeNameConfigDecl);
l_Lake_instTypeNameLeanLibDecl_unsafe__1 = _init_l_Lake_instTypeNameLeanLibDecl_unsafe__1();
lean_mark_persistent(l_Lake_instTypeNameLeanLibDecl_unsafe__1);
l_Lake_instTypeNameLeanLibDecl = _init_l_Lake_instTypeNameLeanLibDecl();
lean_mark_persistent(l_Lake_instTypeNameLeanLibDecl);
l_Lake_instTypeNameLeanExeDecl_unsafe__1 = _init_l_Lake_instTypeNameLeanExeDecl_unsafe__1();
lean_mark_persistent(l_Lake_instTypeNameLeanExeDecl_unsafe__1);
l_Lake_instTypeNameLeanExeDecl = _init_l_Lake_instTypeNameLeanExeDecl();
lean_mark_persistent(l_Lake_instTypeNameLeanExeDecl);
l_Lake_instTypeNameInputFileDecl_unsafe__1 = _init_l_Lake_instTypeNameInputFileDecl_unsafe__1();
lean_mark_persistent(l_Lake_instTypeNameInputFileDecl_unsafe__1);
l_Lake_instTypeNameInputFileDecl = _init_l_Lake_instTypeNameInputFileDecl();
lean_mark_persistent(l_Lake_instTypeNameInputFileDecl);
l_Lake_instTypeNameInputDirDecl_unsafe__1 = _init_l_Lake_instTypeNameInputDirDecl_unsafe__1();
lean_mark_persistent(l_Lake_instTypeNameInputDirDecl_unsafe__1);
l_Lake_instTypeNameInputDirDecl = _init_l_Lake_instTypeNameInputDirDecl();
lean_mark_persistent(l_Lake_instTypeNameInputDirDecl);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_ConfigDecl(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lake_PConfigDecl_pkg__eq___autoParam = _init_l_Lake_PConfigDecl_pkg__eq___autoParam();
lean_mark_persistent(l_Lake_PConfigDecl_pkg__eq___autoParam);
l_Lake_NConfigDecl_name__eq___autoParam = _init_l_Lake_NConfigDecl_name__eq___autoParam();
lean_mark_persistent(l_Lake_NConfigDecl_name__eq___autoParam);
l_Lake_KConfigDecl_kind__eq___autoParam = _init_l_Lake_KConfigDecl_kind__eq___autoParam();
lean_mark_persistent(l_Lake_KConfigDecl_kind__eq___autoParam);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Opaque(uint8_t builtin);
lean_object* initialize_Lake_Config_LeanLibConfig(uint8_t builtin);
lean_object* initialize_Lake_Config_LeanExeConfig(uint8_t builtin);
lean_object* initialize_Lake_Config_ExternLibConfig(uint8_t builtin);
lean_object* initialize_Lake_Config_InputFileConfig(uint8_t builtin);
lean_object* initialize_Lake_Util_Name(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_ConfigDecl(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Opaque(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_LeanLibConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_LeanExeConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_ExternLibConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_InputFileConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_ConfigDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_ConfigDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_ConfigDecl(builtin);
}
#ifdef __cplusplus
}
#endif

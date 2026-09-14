// Lean compiler output
// Module: Lake.Config.LeanLibConfig
// Imports: public import Lean.Compiler.NameMangling public import Lake.Util.Casing public import Lake.Build.Facets public import Lake.Config.LeanConfig public import Lake.Config.Glob meta import all Lake.Config.Meta import Lake.Config.Meta
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
extern lean_object* l_Lake_LeanLib_leanArtsFacet;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_Module_oFacet;
extern lean_object* l_Lake_Module_oExportFacet;
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lake_LeanConfig___fields;
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lake_Glob_matches(lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lake_instInhabitedLeanConfig_default;
LEAN_EXPORT lean_object* l_Lake_instInhabitedLeanLibConfig_default___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lake_instInhabitedLeanLibConfig_default___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_instInhabitedLeanLibConfig_default_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_instInhabitedLeanLibConfig_default_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instInhabitedLeanLibConfig_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instInhabitedLeanLibConfig_default___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instInhabitedLeanLibConfig_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedLeanLibConfig_default___closed__0_value;
static const lean_string_object l_Lake_instInhabitedLeanLibConfig_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_instInhabitedLeanLibConfig_default___closed__1 = (const lean_object*)&l_Lake_instInhabitedLeanLibConfig_default___closed__1_value;
static const lean_string_object l_Lake_instInhabitedLeanLibConfig_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_instInhabitedLeanLibConfig_default___closed__2 = (const lean_object*)&l_Lake_instInhabitedLeanLibConfig_default___closed__2_value;
static const lean_array_object l_Lake_instInhabitedLeanLibConfig_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_instInhabitedLeanLibConfig_default___closed__3 = (const lean_object*)&l_Lake_instInhabitedLeanLibConfig_default___closed__3_value;
static lean_once_cell_t l_Lake_instInhabitedLeanLibConfig_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedLeanLibConfig_default___closed__4;
LEAN_EXPORT lean_object* l_Lake_instInhabitedLeanLibConfig_default(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instInhabitedLeanLibConfig(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__0 = (const lean_object*)&l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__0_value;
static const lean_closure_object l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__1 = (const lean_object*)&l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__1_value;
static const lean_closure_object l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__2 = (const lean_object*)&l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__2_value;
static const lean_closure_object l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__3 = (const lean_object*)&l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__3_value;
static const lean_ctor_object l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__1_value),((lean_object*)&l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__2_value),((lean_object*)&l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__3_value)}};
static const lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__4 = (const lean_object*)&l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_LeanLibConfig_srcDir___proj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig_srcDir___proj___closed__0;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir_instConfigField___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir_instConfigField___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir_instConfigField(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir_instConfigField___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_roots___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_roots___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_roots___proj___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_roots___proj___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_roots___proj___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_roots___proj___lam__3___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLibConfig_roots___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_roots___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_roots___proj___closed__0 = (const lean_object*)&l_Lake_LeanLibConfig_roots___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanLibConfig_roots___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_roots___proj___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_roots___proj___closed__1 = (const lean_object*)&l_Lake_LeanLibConfig_roots___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanLibConfig_roots___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_roots___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_roots___proj___closed__2 = (const lean_object*)&l_Lake_LeanLibConfig_roots___proj___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_roots___proj(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_roots_instConfigField(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lake_LeanLibConfig_globs___proj___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_globs___proj___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___closed__0 = (const lean_object*)&l_Lake_LeanLibConfig_globs___proj___redArg___closed__0_value;
static const lean_closure_object l_Lake_LeanLibConfig_globs___proj___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_globs___proj___redArg___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___closed__1 = (const lean_object*)&l_Lake_LeanLibConfig_globs___proj___redArg___closed__1_value;
static const lean_closure_object l_Lake_LeanLibConfig_globs___proj___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_globs___proj___redArg___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___closed__2 = (const lean_object*)&l_Lake_LeanLibConfig_globs___proj___redArg___closed__2_value;
static const lean_closure_object l_Lake_LeanLibConfig_globs___proj___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_globs___proj___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___closed__3 = (const lean_object*)&l_Lake_LeanLibConfig_globs___proj___redArg___closed__3_value;
static const lean_ctor_object l_Lake_LeanLibConfig_globs___proj___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig_globs___proj___redArg___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_globs___proj___redArg___closed__1_value),((lean_object*)&l_Lake_LeanLibConfig_globs___proj___redArg___closed__2_value),((lean_object*)&l_Lake_LeanLibConfig_globs___proj___redArg___closed__3_value)}};
static const lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___closed__4 = (const lean_object*)&l_Lake_LeanLibConfig_globs___proj___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_LeanLibConfig_globs___proj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig_globs___proj___closed__0;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs_instConfigField___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs_instConfigField___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs_instConfigField(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs_instConfigField___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lake_LeanLibConfig_libName___proj___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_libName___proj___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___closed__0 = (const lean_object*)&l_Lake_LeanLibConfig_libName___proj___redArg___closed__0_value;
static const lean_closure_object l_Lake_LeanLibConfig_libName___proj___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_libName___proj___redArg___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___closed__1 = (const lean_object*)&l_Lake_LeanLibConfig_libName___proj___redArg___closed__1_value;
static const lean_closure_object l_Lake_LeanLibConfig_libName___proj___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_libName___proj___redArg___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___closed__2 = (const lean_object*)&l_Lake_LeanLibConfig_libName___proj___redArg___closed__2_value;
static const lean_closure_object l_Lake_LeanLibConfig_libName___proj___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_libName___proj___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___closed__3 = (const lean_object*)&l_Lake_LeanLibConfig_libName___proj___redArg___closed__3_value;
static const lean_ctor_object l_Lake_LeanLibConfig_libName___proj___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig_libName___proj___redArg___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_libName___proj___redArg___closed__1_value),((lean_object*)&l_Lake_LeanLibConfig_libName___proj___redArg___closed__2_value),((lean_object*)&l_Lake_LeanLibConfig_libName___proj___redArg___closed__3_value)}};
static const lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___closed__4 = (const lean_object*)&l_Lake_LeanLibConfig_libName___proj___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_LeanLibConfig_libName___proj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig_libName___proj___closed__0;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName_instConfigField___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName_instConfigField___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName_instConfigField(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName_instConfigField___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__0 = (const lean_object*)&l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__0_value;
static const lean_closure_object l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__1 = (const lean_object*)&l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__1_value;
static const lean_closure_object l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__2 = (const lean_object*)&l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__2_value;
static const lean_closure_object l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__3 = (const lean_object*)&l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__3_value;
static const lean_ctor_object l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__1_value),((lean_object*)&l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__2_value),((lean_object*)&l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__3_value)}};
static const lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__4 = (const lean_object*)&l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_LeanLibConfig_libPrefixOnWindows___proj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___closed__0;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows_instConfigField___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows_instConfigField___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows_instConfigField(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows_instConfigField___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lake_LeanLibConfig_needs___proj___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_needs___proj___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___closed__0 = (const lean_object*)&l_Lake_LeanLibConfig_needs___proj___redArg___closed__0_value;
static const lean_closure_object l_Lake_LeanLibConfig_needs___proj___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_needs___proj___redArg___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___closed__1 = (const lean_object*)&l_Lake_LeanLibConfig_needs___proj___redArg___closed__1_value;
static const lean_closure_object l_Lake_LeanLibConfig_needs___proj___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_needs___proj___redArg___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___closed__2 = (const lean_object*)&l_Lake_LeanLibConfig_needs___proj___redArg___closed__2_value;
static const lean_closure_object l_Lake_LeanLibConfig_needs___proj___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_needs___proj___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___closed__3 = (const lean_object*)&l_Lake_LeanLibConfig_needs___proj___redArg___closed__3_value;
static const lean_ctor_object l_Lake_LeanLibConfig_needs___proj___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig_needs___proj___redArg___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_needs___proj___redArg___closed__1_value),((lean_object*)&l_Lake_LeanLibConfig_needs___proj___redArg___closed__2_value),((lean_object*)&l_Lake_LeanLibConfig_needs___proj___redArg___closed__3_value)}};
static const lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___closed__4 = (const lean_object*)&l_Lake_LeanLibConfig_needs___proj___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_LeanLibConfig_needs___proj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig_needs___proj___closed__0;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs_instConfigField___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs_instConfigField___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs_instConfigField(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs_instConfigField___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__2(lean_object*, lean_object*);
static const lean_array_object l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__3___closed__0 = (const lean_object*)&l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__0 = (const lean_object*)&l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__0_value;
static const lean_closure_object l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__1 = (const lean_object*)&l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__1_value;
static const lean_closure_object l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__2 = (const lean_object*)&l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__2_value;
static const lean_closure_object l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__3 = (const lean_object*)&l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__3_value;
static const lean_ctor_object l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__1_value),((lean_object*)&l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__2_value),((lean_object*)&l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__3_value)}};
static const lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__4 = (const lean_object*)&l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_LeanLibConfig_extraDepTargets___proj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___closed__0;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets_instConfigField___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets_instConfigField___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets_instConfigField(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets_instConfigField___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___closed__0 = (const lean_object*)&l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___closed__0_value;
static const lean_closure_object l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___closed__1 = (const lean_object*)&l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___closed__1_value;
static const lean_closure_object l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___closed__2 = (const lean_object*)&l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___closed__2_value;
static const lean_ctor_object l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___closed__1_value),((lean_object*)&l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___closed__2_value),((lean_object*)&l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__3_value)}};
static const lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___closed__3 = (const lean_object*)&l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_LeanLibConfig_precompileLibrary___proj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___closed__0;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary_instConfigField___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary_instConfigField___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary_instConfigField(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary_instConfigField___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_precompileModules___proj___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules___proj___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules___proj___redArg___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules___proj___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules___proj___redArg___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLibConfig_precompileModules___proj___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_precompileModules___proj___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_precompileModules___proj___redArg___closed__0 = (const lean_object*)&l_Lake_LeanLibConfig_precompileModules___proj___redArg___closed__0_value;
static const lean_closure_object l_Lake_LeanLibConfig_precompileModules___proj___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_precompileModules___proj___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_precompileModules___proj___redArg___closed__1 = (const lean_object*)&l_Lake_LeanLibConfig_precompileModules___proj___redArg___closed__1_value;
static const lean_closure_object l_Lake_LeanLibConfig_precompileModules___proj___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_precompileModules___proj___redArg___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_precompileModules___proj___redArg___closed__2 = (const lean_object*)&l_Lake_LeanLibConfig_precompileModules___proj___redArg___closed__2_value;
static const lean_ctor_object l_Lake_LeanLibConfig_precompileModules___proj___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig_precompileModules___proj___redArg___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_precompileModules___proj___redArg___closed__1_value),((lean_object*)&l_Lake_LeanLibConfig_precompileModules___proj___redArg___closed__2_value),((lean_object*)&l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__3_value)}};
static const lean_object* l_Lake_LeanLibConfig_precompileModules___proj___redArg___closed__3 = (const lean_object*)&l_Lake_LeanLibConfig_precompileModules___proj___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules___proj___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules___proj___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_LeanLibConfig_precompileModules___proj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig_precompileModules___proj___closed__0;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules___proj(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules___proj___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules_instConfigField___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules_instConfigField___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules_instConfigField(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules_instConfigField___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__0 = (const lean_object*)&l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__0_value;
static const lean_closure_object l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__1 = (const lean_object*)&l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__1_value;
static const lean_closure_object l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__2 = (const lean_object*)&l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__2_value;
static const lean_closure_object l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__3 = (const lean_object*)&l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__3_value;
static const lean_ctor_object l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__1_value),((lean_object*)&l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__2_value),((lean_object*)&l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__3_value)}};
static const lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__4 = (const lean_object*)&l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_LeanLibConfig_defaultFacets___proj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___closed__0;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets_instConfigField___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets_instConfigField___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets_instConfigField(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets_instConfigField___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__3(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__3___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__0 = (const lean_object*)&l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__0_value;
static const lean_closure_object l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__1 = (const lean_object*)&l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__1_value;
static const lean_closure_object l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__2 = (const lean_object*)&l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__2_value;
static const lean_closure_object l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__3 = (const lean_object*)&l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__3_value;
static const lean_ctor_object l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__1_value),((lean_object*)&l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__2_value),((lean_object*)&l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__3_value)}};
static const lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__4 = (const lean_object*)&l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_LeanLibConfig_nativeFacets___proj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___closed__0;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets_instConfigField___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets_instConfigField___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets_instConfigField(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets_instConfigField___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_allowImportAll___proj___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___redArg___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___redArg___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLibConfig_allowImportAll___proj___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_allowImportAll___proj___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___redArg___closed__0 = (const lean_object*)&l_Lake_LeanLibConfig_allowImportAll___proj___redArg___closed__0_value;
static const lean_closure_object l_Lake_LeanLibConfig_allowImportAll___proj___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_allowImportAll___proj___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___redArg___closed__1 = (const lean_object*)&l_Lake_LeanLibConfig_allowImportAll___proj___redArg___closed__1_value;
static const lean_closure_object l_Lake_LeanLibConfig_allowImportAll___proj___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_allowImportAll___proj___redArg___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___redArg___closed__2 = (const lean_object*)&l_Lake_LeanLibConfig_allowImportAll___proj___redArg___closed__2_value;
static const lean_ctor_object l_Lake_LeanLibConfig_allowImportAll___proj___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig_allowImportAll___proj___redArg___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_allowImportAll___proj___redArg___closed__1_value),((lean_object*)&l_Lake_LeanLibConfig_allowImportAll___proj___redArg___closed__2_value),((lean_object*)&l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__3_value)}};
static const lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___redArg___closed__3 = (const lean_object*)&l_Lake_LeanLibConfig_allowImportAll___proj___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_LeanLibConfig_allowImportAll___proj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___closed__0;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll___proj(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll_instConfigField___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll_instConfigField___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll_instConfigField(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll_instConfigField___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__2(lean_object*, lean_object*);
static const lean_array_object l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__0 = (const lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*13 + 8, .m_other = 13, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 2, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__1 = (const lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__0 = (const lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__0_value;
static const lean_closure_object l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__1 = (const lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__1_value;
static const lean_closure_object l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__2 = (const lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__2_value;
static const lean_closure_object l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__3 = (const lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__3_value;
static const lean_ctor_object l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__0_value),((lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__1_value),((lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__2_value),((lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__3_value)}};
static const lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__4 = (const lean_object*)&l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_LeanLibConfig_toLeanConfig___proj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___closed__0;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig_instConfigParent___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig_instConfigParent___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig_instConfigParent(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig_instConfigParent___boxed(lean_object*);
static const lean_array_object l_Lake_LeanLibConfig___fields___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__0 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__0_value;
static const lean_string_object l_Lake_LeanLibConfig___fields___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "srcDir"};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__1 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__1_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__1_value),LEAN_SCALAR_PTR_LITERAL(82, 241, 97, 48, 55, 77, 36, 145)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__2 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__2_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig___fields___closed__2_value),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__2_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__3 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__3_value;
static lean_once_cell_t l_Lake_LeanLibConfig___fields___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig___fields___closed__4;
static const lean_string_object l_Lake_LeanLibConfig___fields___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "roots"};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__5 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__5_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__5_value),LEAN_SCALAR_PTR_LITERAL(160, 214, 73, 39, 112, 55, 103, 176)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__6 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__6_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig___fields___closed__6_value),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__6_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__7 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__7_value;
static lean_once_cell_t l_Lake_LeanLibConfig___fields___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig___fields___closed__8;
static const lean_string_object l_Lake_LeanLibConfig___fields___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "globs"};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__9 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__9_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__9_value),LEAN_SCALAR_PTR_LITERAL(2, 64, 222, 202, 250, 190, 94, 19)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__10 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__10_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig___fields___closed__10_value),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__10_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__11 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__11_value;
static lean_once_cell_t l_Lake_LeanLibConfig___fields___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig___fields___closed__12;
static const lean_string_object l_Lake_LeanLibConfig___fields___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "libName"};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__13 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__13_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__13_value),LEAN_SCALAR_PTR_LITERAL(19, 171, 234, 84, 17, 149, 3, 152)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__14 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__14_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig___fields___closed__14_value),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__14_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__15 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__15_value;
static lean_once_cell_t l_Lake_LeanLibConfig___fields___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig___fields___closed__16;
static const lean_string_object l_Lake_LeanLibConfig___fields___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "libPrefixOnWindows"};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__17 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__17_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__17_value),LEAN_SCALAR_PTR_LITERAL(26, 75, 58, 45, 181, 132, 175, 34)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__18 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__18_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig___fields___closed__18_value),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__18_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__19 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__19_value;
static lean_once_cell_t l_Lake_LeanLibConfig___fields___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig___fields___closed__20;
static const lean_string_object l_Lake_LeanLibConfig___fields___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "needs"};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__21 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__21_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__21_value),LEAN_SCALAR_PTR_LITERAL(215, 219, 176, 39, 126, 76, 70, 199)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__22 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__22_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig___fields___closed__22_value),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__22_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__23 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__23_value;
static lean_once_cell_t l_Lake_LeanLibConfig___fields___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig___fields___closed__24;
static const lean_string_object l_Lake_LeanLibConfig___fields___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "extraDepTargets"};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__25 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__25_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__25_value),LEAN_SCALAR_PTR_LITERAL(232, 29, 68, 154, 160, 50, 56, 5)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__26 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__26_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig___fields___closed__26_value),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__26_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__27 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__27_value;
static lean_once_cell_t l_Lake_LeanLibConfig___fields___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig___fields___closed__28;
static const lean_string_object l_Lake_LeanLibConfig___fields___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "precompileLibrary"};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__29 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__29_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__29_value),LEAN_SCALAR_PTR_LITERAL(71, 18, 27, 24, 108, 72, 213, 250)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__30 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__30_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig___fields___closed__30_value),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__30_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__31 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__31_value;
static lean_once_cell_t l_Lake_LeanLibConfig___fields___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig___fields___closed__32;
static const lean_string_object l_Lake_LeanLibConfig___fields___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "precompileModules"};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__33 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__33_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__33_value),LEAN_SCALAR_PTR_LITERAL(210, 72, 98, 56, 225, 29, 247, 45)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__34 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__34_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig___fields___closed__34_value),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__34_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__35 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__35_value;
static lean_once_cell_t l_Lake_LeanLibConfig___fields___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig___fields___closed__36;
static const lean_string_object l_Lake_LeanLibConfig___fields___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "defaultFacets"};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__37 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__37_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__37_value),LEAN_SCALAR_PTR_LITERAL(74, 73, 74, 204, 169, 19, 96, 134)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__38 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__38_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig___fields___closed__38_value),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__38_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__39 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__39_value;
static lean_once_cell_t l_Lake_LeanLibConfig___fields___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig___fields___closed__40;
static const lean_string_object l_Lake_LeanLibConfig___fields___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nativeFacets"};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__41 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__41_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__41_value),LEAN_SCALAR_PTR_LITERAL(130, 15, 19, 239, 40, 85, 158, 29)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__42 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__42_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig___fields___closed__42_value),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__42_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__43 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__43_value;
static lean_once_cell_t l_Lake_LeanLibConfig___fields___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig___fields___closed__44;
static const lean_string_object l_Lake_LeanLibConfig___fields___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "allowImportAll"};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__45 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__45_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__45_value),LEAN_SCALAR_PTR_LITERAL(243, 199, 75, 91, 118, 43, 12, 210)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__46 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__46_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig___fields___closed__46_value),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__46_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__47 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__47_value;
static lean_once_cell_t l_Lake_LeanLibConfig___fields___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig___fields___closed__48;
static lean_once_cell_t l_Lake_LeanLibConfig___fields___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig___fields___closed__49;
static const lean_string_object l_Lake_LeanLibConfig___fields___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toLeanConfig"};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__50 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__50_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__50_value),LEAN_SCALAR_PTR_LITERAL(201, 26, 194, 50, 195, 212, 218, 10)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__51 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__51_value;
static const lean_ctor_object l_Lake_LeanLibConfig___fields___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig___fields___closed__51_value),((lean_object*)&l_Lake_LeanLibConfig___fields___closed__51_value),LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanLibConfig___fields___closed__52 = (const lean_object*)&l_Lake_LeanLibConfig___fields___closed__52_value;
static lean_once_cell_t l_Lake_LeanLibConfig___fields___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig___fields___closed__53;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig___fields;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_instConfigFields___redArg();
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_instConfigFields___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_instConfigFields(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_instConfigFields___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_instConfigInfo___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_LeanLibConfig_instConfigInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig_instConfigInfo___closed__0;
static const lean_closure_object l_Lake_LeanLibConfig_instConfigInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_instConfigInfo___closed__1 = (const lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__1_value;
static const lean_closure_object l_Lake_LeanLibConfig_instConfigInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_instConfigInfo___closed__2 = (const lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__2_value;
static const lean_closure_object l_Lake_LeanLibConfig_instConfigInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_instConfigInfo___closed__3 = (const lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__3_value;
static const lean_closure_object l_Lake_LeanLibConfig_instConfigInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_instConfigInfo___closed__4 = (const lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__4_value;
static const lean_closure_object l_Lake_LeanLibConfig_instConfigInfo___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_instConfigInfo___closed__5 = (const lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__5_value;
static const lean_closure_object l_Lake_LeanLibConfig_instConfigInfo___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_instConfigInfo___closed__6 = (const lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__6_value;
static const lean_closure_object l_Lake_LeanLibConfig_instConfigInfo___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_instConfigInfo___closed__7 = (const lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__7_value;
static const lean_ctor_object l_Lake_LeanLibConfig_instConfigInfo___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__1_value),((lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__2_value)}};
static const lean_object* l_Lake_LeanLibConfig_instConfigInfo___closed__8 = (const lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__8_value;
static const lean_ctor_object l_Lake_LeanLibConfig_instConfigInfo___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__8_value),((lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__3_value),((lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__4_value),((lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__5_value),((lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__6_value)}};
static const lean_object* l_Lake_LeanLibConfig_instConfigInfo___closed__9 = (const lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__9_value;
static const lean_ctor_object l_Lake_LeanLibConfig_instConfigInfo___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__9_value),((lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__7_value)}};
static const lean_object* l_Lake_LeanLibConfig_instConfigInfo___closed__10 = (const lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__10_value;
static lean_once_cell_t l_Lake_LeanLibConfig_instConfigInfo___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lake_LeanLibConfig_instConfigInfo___closed__11;
static const lean_closure_object l_Lake_LeanLibConfig_instConfigInfo___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_instConfigInfo___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_instConfigInfo___closed__12 = (const lean_object*)&l_Lake_LeanLibConfig_instConfigInfo___closed__12_value;
static lean_once_cell_t l_Lake_LeanLibConfig_instConfigInfo___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lake_LeanLibConfig_instConfigInfo___closed__13;
static lean_once_cell_t l_Lake_LeanLibConfig_instConfigInfo___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lake_LeanLibConfig_instConfigInfo___closed__14;
static lean_once_cell_t l_Lake_LeanLibConfig_instConfigInfo___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLibConfig_instConfigInfo___closed__15;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_instConfigInfo;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_instEmptyCollection___lam__0(lean_object*);
static const lean_closure_object l_Lake_LeanLibConfig_instEmptyCollection___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLibConfig_instEmptyCollection___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLibConfig_instEmptyCollection___closed__0 = (const lean_object*)&l_Lake_LeanLibConfig_instEmptyCollection___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_instEmptyCollection(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_name___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_name___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_name(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_name___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isLocalModule_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isLocalModule_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isLocalModule_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isLocalModule_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_isLocalModule___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_isLocalModule___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_isLocalModule(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_isLocalModule___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isBuildableModule_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isBuildableModule_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_isBuildableModule___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_isBuildableModule___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_isBuildableModule(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_isBuildableModule___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instInhabitedLeanLibConfig_default___lam__0(uint8_t v_shouldExport_1_){
_start:
{
lean_object* v___y_3_; 
if (v_shouldExport_1_ == 0)
{
lean_object* v___x_7_; 
v___x_7_ = l_Lake_Module_oFacet;
v___y_3_ = v___x_7_;
goto v___jp_2_;
}
else
{
lean_object* v___x_8_; 
v___x_8_ = l_Lake_Module_oExportFacet;
v___y_3_ = v___x_8_;
goto v___jp_2_;
}
v___jp_2_:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_unsigned_to_nat(1u);
v___x_5_ = lean_mk_empty_array_with_capacity(v___x_4_);
lean_inc(v___y_3_);
v___x_6_ = lean_array_push(v___x_5_, v___y_3_);
return v___x_6_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedLeanLibConfig_default___lam__0___boxed(lean_object* v_shouldExport_9_){
_start:
{
uint8_t v_shouldExport_boxed_10_; lean_object* v_res_11_; 
v_shouldExport_boxed_10_ = lean_unbox(v_shouldExport_9_);
v_res_11_ = l_Lake_instInhabitedLeanLibConfig_default___lam__0(v_shouldExport_boxed_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_instInhabitedLeanLibConfig_default_spec__0(size_t v_sz_12_, size_t v_i_13_, lean_object* v_bs_14_){
_start:
{
uint8_t v___x_15_; 
v___x_15_ = lean_usize_dec_lt(v_i_13_, v_sz_12_);
if (v___x_15_ == 0)
{
lean_object* v___x_16_; 
v___x_16_ = l_unsafeCast___redArg(v_bs_14_);
lean_dec_ref(v_bs_14_);
return v___x_16_;
}
else
{
lean_object* v_v_17_; lean_object* v___x_18_; lean_object* v_bs_x27_19_; lean_object* v___x_20_; lean_object* v___x_21_; size_t v___x_22_; size_t v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v_v_17_ = lean_array_uget(v_bs_14_, v_i_13_);
v___x_18_ = lean_unsigned_to_nat(0u);
v_bs_x27_19_ = lean_array_uset(v_bs_14_, v_i_13_, v___x_18_);
v___x_20_ = l_unsafeCast___redArg(v_v_17_);
lean_dec(v_v_17_);
v___x_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
v___x_22_ = ((size_t)1ULL);
v___x_23_ = lean_usize_add(v_i_13_, v___x_22_);
v___x_24_ = l_unsafeCast___redArg(v___x_21_);
lean_dec_ref_known(v___x_21_, 1);
v___x_25_ = lean_array_uset(v_bs_x27_19_, v_i_13_, v___x_24_);
v_i_13_ = v___x_23_;
v_bs_14_ = v___x_25_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_instInhabitedLeanLibConfig_default_spec__0___boxed(lean_object* v_sz_27_, lean_object* v_i_28_, lean_object* v_bs_29_){
_start:
{
size_t v_sz_boxed_30_; size_t v_i_boxed_31_; lean_object* v_res_32_; 
v_sz_boxed_30_ = lean_unbox_usize(v_sz_27_);
lean_dec(v_sz_27_);
v_i_boxed_31_ = lean_unbox_usize(v_i_28_);
lean_dec(v_i_28_);
v_res_32_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_instInhabitedLeanLibConfig_default_spec__0(v_sz_boxed_30_, v_i_boxed_31_, v_bs_29_);
return v_res_32_;
}
}
static lean_object* _init_l_Lake_instInhabitedLeanLibConfig_default___closed__4(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_38_ = l_Lake_LeanLib_leanArtsFacet;
v___x_39_ = lean_unsigned_to_nat(1u);
v___x_40_ = lean_mk_empty_array_with_capacity(v___x_39_);
v___x_41_ = lean_array_push(v___x_40_, v___x_38_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedLeanLibConfig_default(lean_object* v_name_42_){
_start:
{
lean_object* v___f_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; size_t v_sz_49_; size_t v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; uint8_t v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___f_43_ = ((lean_object*)(l_Lake_instInhabitedLeanLibConfig_default___closed__0));
v___x_44_ = l_Lake_instInhabitedLeanConfig_default;
v___x_45_ = ((lean_object*)(l_Lake_instInhabitedLeanLibConfig_default___closed__1));
v___x_46_ = lean_unsigned_to_nat(1u);
v___x_47_ = lean_mk_empty_array_with_capacity(v___x_46_);
v___x_48_ = lean_array_push(v___x_47_, v_name_42_);
v_sz_49_ = lean_array_size(v___x_48_);
v___x_50_ = ((size_t)0ULL);
v___x_51_ = l_unsafeCast___redArg(v___x_48_);
v___x_52_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_instInhabitedLeanLibConfig_default_spec__0(v_sz_49_, v___x_50_, v___x_51_);
v___x_53_ = l_unsafeCast___redArg(v___x_52_);
lean_dec_ref(v___x_52_);
v___x_54_ = ((lean_object*)(l_Lake_instInhabitedLeanLibConfig_default___closed__2));
v___x_55_ = 0;
v___x_56_ = ((lean_object*)(l_Lake_instInhabitedLeanLibConfig_default___closed__3));
v___x_57_ = lean_obj_once(&l_Lake_instInhabitedLeanLibConfig_default___closed__4, &l_Lake_instInhabitedLeanLibConfig_default___closed__4_once, _init_l_Lake_instInhabitedLeanLibConfig_default___closed__4);
v___x_58_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v___x_58_, 0, v___x_44_);
lean_ctor_set(v___x_58_, 1, v___x_45_);
lean_ctor_set(v___x_58_, 2, v___x_48_);
lean_ctor_set(v___x_58_, 3, v___x_53_);
lean_ctor_set(v___x_58_, 4, v___x_54_);
lean_ctor_set(v___x_58_, 5, v___x_56_);
lean_ctor_set(v___x_58_, 6, v___x_56_);
lean_ctor_set(v___x_58_, 7, v___x_57_);
lean_ctor_set(v___x_58_, 8, v___f_43_);
lean_ctor_set_uint8(v___x_58_, sizeof(void*)*9, v___x_55_);
lean_ctor_set_uint8(v___x_58_, sizeof(void*)*9 + 1, v___x_55_);
lean_ctor_set_uint8(v___x_58_, sizeof(void*)*9 + 2, v___x_55_);
lean_ctor_set_uint8(v___x_58_, sizeof(void*)*9 + 3, v___x_55_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedLeanLibConfig(lean_object* v_a_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lake_instInhabitedLeanLibConfig_default(v_a_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__0(lean_object* v_cfg_61_){
_start:
{
lean_object* v_srcDir_62_; 
v_srcDir_62_ = lean_ctor_get(v_cfg_61_, 1);
lean_inc_ref(v_srcDir_62_);
return v_srcDir_62_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__0___boxed(lean_object* v_cfg_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__0(v_cfg_63_);
lean_dec_ref(v_cfg_63_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__1(lean_object* v_val_65_, lean_object* v_cfg_66_){
_start:
{
lean_object* v_toLeanConfig_67_; lean_object* v_roots_68_; lean_object* v_globs_69_; lean_object* v_libName_70_; uint8_t v_libPrefixOnWindows_71_; lean_object* v_needs_72_; lean_object* v_extraDepTargets_73_; uint8_t v_precompileLibrary_74_; uint8_t v_precompileModules_75_; lean_object* v_defaultFacets_76_; lean_object* v_nativeFacets_77_; uint8_t v_allowImportAll_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_85_; 
v_toLeanConfig_67_ = lean_ctor_get(v_cfg_66_, 0);
v_roots_68_ = lean_ctor_get(v_cfg_66_, 2);
v_globs_69_ = lean_ctor_get(v_cfg_66_, 3);
v_libName_70_ = lean_ctor_get(v_cfg_66_, 4);
v_libPrefixOnWindows_71_ = lean_ctor_get_uint8(v_cfg_66_, sizeof(void*)*9);
v_needs_72_ = lean_ctor_get(v_cfg_66_, 5);
v_extraDepTargets_73_ = lean_ctor_get(v_cfg_66_, 6);
v_precompileLibrary_74_ = lean_ctor_get_uint8(v_cfg_66_, sizeof(void*)*9 + 1);
v_precompileModules_75_ = lean_ctor_get_uint8(v_cfg_66_, sizeof(void*)*9 + 2);
v_defaultFacets_76_ = lean_ctor_get(v_cfg_66_, 7);
v_nativeFacets_77_ = lean_ctor_get(v_cfg_66_, 8);
v_allowImportAll_78_ = lean_ctor_get_uint8(v_cfg_66_, sizeof(void*)*9 + 3);
v_isSharedCheck_85_ = !lean_is_exclusive(v_cfg_66_);
if (v_isSharedCheck_85_ == 0)
{
lean_object* v_unused_86_; 
v_unused_86_ = lean_ctor_get(v_cfg_66_, 1);
lean_dec(v_unused_86_);
v___x_80_ = v_cfg_66_;
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_nativeFacets_77_);
lean_inc(v_defaultFacets_76_);
lean_inc(v_extraDepTargets_73_);
lean_inc(v_needs_72_);
lean_inc(v_libName_70_);
lean_inc(v_globs_69_);
lean_inc(v_roots_68_);
lean_inc(v_toLeanConfig_67_);
lean_dec(v_cfg_66_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_83_; 
if (v_isShared_81_ == 0)
{
lean_ctor_set(v___x_80_, 1, v_val_65_);
v___x_83_ = v___x_80_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v_toLeanConfig_67_);
lean_ctor_set(v_reuseFailAlloc_84_, 1, v_val_65_);
lean_ctor_set(v_reuseFailAlloc_84_, 2, v_roots_68_);
lean_ctor_set(v_reuseFailAlloc_84_, 3, v_globs_69_);
lean_ctor_set(v_reuseFailAlloc_84_, 4, v_libName_70_);
lean_ctor_set(v_reuseFailAlloc_84_, 5, v_needs_72_);
lean_ctor_set(v_reuseFailAlloc_84_, 6, v_extraDepTargets_73_);
lean_ctor_set(v_reuseFailAlloc_84_, 7, v_defaultFacets_76_);
lean_ctor_set(v_reuseFailAlloc_84_, 8, v_nativeFacets_77_);
lean_ctor_set_uint8(v_reuseFailAlloc_84_, sizeof(void*)*9, v_libPrefixOnWindows_71_);
lean_ctor_set_uint8(v_reuseFailAlloc_84_, sizeof(void*)*9 + 1, v_precompileLibrary_74_);
lean_ctor_set_uint8(v_reuseFailAlloc_84_, sizeof(void*)*9 + 2, v_precompileModules_75_);
lean_ctor_set_uint8(v_reuseFailAlloc_84_, sizeof(void*)*9 + 3, v_allowImportAll_78_);
v___x_83_ = v_reuseFailAlloc_84_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
return v___x_83_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__2(lean_object* v_f_87_, lean_object* v_cfg_88_){
_start:
{
lean_object* v_toLeanConfig_89_; lean_object* v_srcDir_90_; lean_object* v_roots_91_; lean_object* v_globs_92_; lean_object* v_libName_93_; uint8_t v_libPrefixOnWindows_94_; lean_object* v_needs_95_; lean_object* v_extraDepTargets_96_; uint8_t v_precompileLibrary_97_; uint8_t v_precompileModules_98_; lean_object* v_defaultFacets_99_; lean_object* v_nativeFacets_100_; uint8_t v_allowImportAll_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_109_; 
v_toLeanConfig_89_ = lean_ctor_get(v_cfg_88_, 0);
v_srcDir_90_ = lean_ctor_get(v_cfg_88_, 1);
v_roots_91_ = lean_ctor_get(v_cfg_88_, 2);
v_globs_92_ = lean_ctor_get(v_cfg_88_, 3);
v_libName_93_ = lean_ctor_get(v_cfg_88_, 4);
v_libPrefixOnWindows_94_ = lean_ctor_get_uint8(v_cfg_88_, sizeof(void*)*9);
v_needs_95_ = lean_ctor_get(v_cfg_88_, 5);
v_extraDepTargets_96_ = lean_ctor_get(v_cfg_88_, 6);
v_precompileLibrary_97_ = lean_ctor_get_uint8(v_cfg_88_, sizeof(void*)*9 + 1);
v_precompileModules_98_ = lean_ctor_get_uint8(v_cfg_88_, sizeof(void*)*9 + 2);
v_defaultFacets_99_ = lean_ctor_get(v_cfg_88_, 7);
v_nativeFacets_100_ = lean_ctor_get(v_cfg_88_, 8);
v_allowImportAll_101_ = lean_ctor_get_uint8(v_cfg_88_, sizeof(void*)*9 + 3);
v_isSharedCheck_109_ = !lean_is_exclusive(v_cfg_88_);
if (v_isSharedCheck_109_ == 0)
{
v___x_103_ = v_cfg_88_;
v_isShared_104_ = v_isSharedCheck_109_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_nativeFacets_100_);
lean_inc(v_defaultFacets_99_);
lean_inc(v_extraDepTargets_96_);
lean_inc(v_needs_95_);
lean_inc(v_libName_93_);
lean_inc(v_globs_92_);
lean_inc(v_roots_91_);
lean_inc(v_srcDir_90_);
lean_inc(v_toLeanConfig_89_);
lean_dec(v_cfg_88_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_109_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_105_; lean_object* v___x_107_; 
v___x_105_ = lean_apply_1(v_f_87_, v_srcDir_90_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 1, v___x_105_);
v___x_107_ = v___x_103_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_toLeanConfig_89_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v___x_105_);
lean_ctor_set(v_reuseFailAlloc_108_, 2, v_roots_91_);
lean_ctor_set(v_reuseFailAlloc_108_, 3, v_globs_92_);
lean_ctor_set(v_reuseFailAlloc_108_, 4, v_libName_93_);
lean_ctor_set(v_reuseFailAlloc_108_, 5, v_needs_95_);
lean_ctor_set(v_reuseFailAlloc_108_, 6, v_extraDepTargets_96_);
lean_ctor_set(v_reuseFailAlloc_108_, 7, v_defaultFacets_99_);
lean_ctor_set(v_reuseFailAlloc_108_, 8, v_nativeFacets_100_);
lean_ctor_set_uint8(v_reuseFailAlloc_108_, sizeof(void*)*9, v_libPrefixOnWindows_94_);
lean_ctor_set_uint8(v_reuseFailAlloc_108_, sizeof(void*)*9 + 1, v_precompileLibrary_97_);
lean_ctor_set_uint8(v_reuseFailAlloc_108_, sizeof(void*)*9 + 2, v_precompileModules_98_);
lean_ctor_set_uint8(v_reuseFailAlloc_108_, sizeof(void*)*9 + 3, v_allowImportAll_101_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__3(lean_object* v_x_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = ((lean_object*)(l_Lake_instInhabitedLeanLibConfig_default___closed__1));
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__3___boxed(lean_object* v_x_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lake_LeanLibConfig_srcDir___proj___redArg___lam__3(v_x_112_);
lean_dec_ref(v_x_112_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg(){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = ((lean_object*)(l_Lake_LeanLibConfig_srcDir___proj___redArg___closed__4));
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___redArg___boxed(lean_object* v___dummy_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Lake_LeanLibConfig_srcDir___proj___redArg();
return v_res_126_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig_srcDir___proj___closed__0(void){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = l_Lake_LeanLibConfig_srcDir___proj___redArg();
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj(lean_object* v_name_128_){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = lean_obj_once(&l_Lake_LeanLibConfig_srcDir___proj___closed__0, &l_Lake_LeanLibConfig_srcDir___proj___closed__0_once, _init_l_Lake_LeanLibConfig_srcDir___proj___closed__0);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir___proj___boxed(lean_object* v_name_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lake_LeanLibConfig_srcDir___proj(v_name_130_);
lean_dec(v_name_130_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir_instConfigField___redArg(){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = lean_obj_once(&l_Lake_LeanLibConfig_srcDir___proj___closed__0, &l_Lake_LeanLibConfig_srcDir___proj___closed__0_once, _init_l_Lake_LeanLibConfig_srcDir___proj___closed__0);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir_instConfigField___redArg___boxed(lean_object* v___dummy_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l_Lake_LeanLibConfig_srcDir_instConfigField___redArg();
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir_instConfigField(lean_object* v_name_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lean_obj_once(&l_Lake_LeanLibConfig_srcDir___proj___closed__0, &l_Lake_LeanLibConfig_srcDir___proj___closed__0_once, _init_l_Lake_LeanLibConfig_srcDir___proj___closed__0);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_srcDir_instConfigField___boxed(lean_object* v_name_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lake_LeanLibConfig_srcDir_instConfigField(v_name_138_);
lean_dec(v_name_138_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_roots___proj___lam__0(lean_object* v_cfg_140_){
_start:
{
lean_object* v_roots_141_; 
v_roots_141_ = lean_ctor_get(v_cfg_140_, 2);
lean_inc_ref(v_roots_141_);
return v_roots_141_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_roots___proj___lam__0___boxed(lean_object* v_cfg_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = l_Lake_LeanLibConfig_roots___proj___lam__0(v_cfg_142_);
lean_dec_ref(v_cfg_142_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_roots___proj___lam__1(lean_object* v_val_144_, lean_object* v_cfg_145_){
_start:
{
lean_object* v_toLeanConfig_146_; lean_object* v_srcDir_147_; lean_object* v_globs_148_; lean_object* v_libName_149_; uint8_t v_libPrefixOnWindows_150_; lean_object* v_needs_151_; lean_object* v_extraDepTargets_152_; uint8_t v_precompileLibrary_153_; uint8_t v_precompileModules_154_; lean_object* v_defaultFacets_155_; lean_object* v_nativeFacets_156_; uint8_t v_allowImportAll_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_164_; 
v_toLeanConfig_146_ = lean_ctor_get(v_cfg_145_, 0);
v_srcDir_147_ = lean_ctor_get(v_cfg_145_, 1);
v_globs_148_ = lean_ctor_get(v_cfg_145_, 3);
v_libName_149_ = lean_ctor_get(v_cfg_145_, 4);
v_libPrefixOnWindows_150_ = lean_ctor_get_uint8(v_cfg_145_, sizeof(void*)*9);
v_needs_151_ = lean_ctor_get(v_cfg_145_, 5);
v_extraDepTargets_152_ = lean_ctor_get(v_cfg_145_, 6);
v_precompileLibrary_153_ = lean_ctor_get_uint8(v_cfg_145_, sizeof(void*)*9 + 1);
v_precompileModules_154_ = lean_ctor_get_uint8(v_cfg_145_, sizeof(void*)*9 + 2);
v_defaultFacets_155_ = lean_ctor_get(v_cfg_145_, 7);
v_nativeFacets_156_ = lean_ctor_get(v_cfg_145_, 8);
v_allowImportAll_157_ = lean_ctor_get_uint8(v_cfg_145_, sizeof(void*)*9 + 3);
v_isSharedCheck_164_ = !lean_is_exclusive(v_cfg_145_);
if (v_isSharedCheck_164_ == 0)
{
lean_object* v_unused_165_; 
v_unused_165_ = lean_ctor_get(v_cfg_145_, 2);
lean_dec(v_unused_165_);
v___x_159_ = v_cfg_145_;
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_nativeFacets_156_);
lean_inc(v_defaultFacets_155_);
lean_inc(v_extraDepTargets_152_);
lean_inc(v_needs_151_);
lean_inc(v_libName_149_);
lean_inc(v_globs_148_);
lean_inc(v_srcDir_147_);
lean_inc(v_toLeanConfig_146_);
lean_dec(v_cfg_145_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_162_; 
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 2, v_val_144_);
v___x_162_ = v___x_159_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_toLeanConfig_146_);
lean_ctor_set(v_reuseFailAlloc_163_, 1, v_srcDir_147_);
lean_ctor_set(v_reuseFailAlloc_163_, 2, v_val_144_);
lean_ctor_set(v_reuseFailAlloc_163_, 3, v_globs_148_);
lean_ctor_set(v_reuseFailAlloc_163_, 4, v_libName_149_);
lean_ctor_set(v_reuseFailAlloc_163_, 5, v_needs_151_);
lean_ctor_set(v_reuseFailAlloc_163_, 6, v_extraDepTargets_152_);
lean_ctor_set(v_reuseFailAlloc_163_, 7, v_defaultFacets_155_);
lean_ctor_set(v_reuseFailAlloc_163_, 8, v_nativeFacets_156_);
lean_ctor_set_uint8(v_reuseFailAlloc_163_, sizeof(void*)*9, v_libPrefixOnWindows_150_);
lean_ctor_set_uint8(v_reuseFailAlloc_163_, sizeof(void*)*9 + 1, v_precompileLibrary_153_);
lean_ctor_set_uint8(v_reuseFailAlloc_163_, sizeof(void*)*9 + 2, v_precompileModules_154_);
lean_ctor_set_uint8(v_reuseFailAlloc_163_, sizeof(void*)*9 + 3, v_allowImportAll_157_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_roots___proj___lam__2(lean_object* v_f_166_, lean_object* v_cfg_167_){
_start:
{
lean_object* v_toLeanConfig_168_; lean_object* v_srcDir_169_; lean_object* v_roots_170_; lean_object* v_globs_171_; lean_object* v_libName_172_; uint8_t v_libPrefixOnWindows_173_; lean_object* v_needs_174_; lean_object* v_extraDepTargets_175_; uint8_t v_precompileLibrary_176_; uint8_t v_precompileModules_177_; lean_object* v_defaultFacets_178_; lean_object* v_nativeFacets_179_; uint8_t v_allowImportAll_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_188_; 
v_toLeanConfig_168_ = lean_ctor_get(v_cfg_167_, 0);
v_srcDir_169_ = lean_ctor_get(v_cfg_167_, 1);
v_roots_170_ = lean_ctor_get(v_cfg_167_, 2);
v_globs_171_ = lean_ctor_get(v_cfg_167_, 3);
v_libName_172_ = lean_ctor_get(v_cfg_167_, 4);
v_libPrefixOnWindows_173_ = lean_ctor_get_uint8(v_cfg_167_, sizeof(void*)*9);
v_needs_174_ = lean_ctor_get(v_cfg_167_, 5);
v_extraDepTargets_175_ = lean_ctor_get(v_cfg_167_, 6);
v_precompileLibrary_176_ = lean_ctor_get_uint8(v_cfg_167_, sizeof(void*)*9 + 1);
v_precompileModules_177_ = lean_ctor_get_uint8(v_cfg_167_, sizeof(void*)*9 + 2);
v_defaultFacets_178_ = lean_ctor_get(v_cfg_167_, 7);
v_nativeFacets_179_ = lean_ctor_get(v_cfg_167_, 8);
v_allowImportAll_180_ = lean_ctor_get_uint8(v_cfg_167_, sizeof(void*)*9 + 3);
v_isSharedCheck_188_ = !lean_is_exclusive(v_cfg_167_);
if (v_isSharedCheck_188_ == 0)
{
v___x_182_ = v_cfg_167_;
v_isShared_183_ = v_isSharedCheck_188_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_nativeFacets_179_);
lean_inc(v_defaultFacets_178_);
lean_inc(v_extraDepTargets_175_);
lean_inc(v_needs_174_);
lean_inc(v_libName_172_);
lean_inc(v_globs_171_);
lean_inc(v_roots_170_);
lean_inc(v_srcDir_169_);
lean_inc(v_toLeanConfig_168_);
lean_dec(v_cfg_167_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_188_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_184_; lean_object* v___x_186_; 
v___x_184_ = lean_apply_1(v_f_166_, v_roots_170_);
if (v_isShared_183_ == 0)
{
lean_ctor_set(v___x_182_, 2, v___x_184_);
v___x_186_ = v___x_182_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_toLeanConfig_168_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v_srcDir_169_);
lean_ctor_set(v_reuseFailAlloc_187_, 2, v___x_184_);
lean_ctor_set(v_reuseFailAlloc_187_, 3, v_globs_171_);
lean_ctor_set(v_reuseFailAlloc_187_, 4, v_libName_172_);
lean_ctor_set(v_reuseFailAlloc_187_, 5, v_needs_174_);
lean_ctor_set(v_reuseFailAlloc_187_, 6, v_extraDepTargets_175_);
lean_ctor_set(v_reuseFailAlloc_187_, 7, v_defaultFacets_178_);
lean_ctor_set(v_reuseFailAlloc_187_, 8, v_nativeFacets_179_);
lean_ctor_set_uint8(v_reuseFailAlloc_187_, sizeof(void*)*9, v_libPrefixOnWindows_173_);
lean_ctor_set_uint8(v_reuseFailAlloc_187_, sizeof(void*)*9 + 1, v_precompileLibrary_176_);
lean_ctor_set_uint8(v_reuseFailAlloc_187_, sizeof(void*)*9 + 2, v_precompileModules_177_);
lean_ctor_set_uint8(v_reuseFailAlloc_187_, sizeof(void*)*9 + 3, v_allowImportAll_180_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_roots___proj___lam__3(lean_object* v_name_189_, lean_object* v_x_190_){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_191_ = lean_unsigned_to_nat(1u);
v___x_192_ = lean_mk_empty_array_with_capacity(v___x_191_);
v___x_193_ = lean_array_push(v___x_192_, v_name_189_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_roots___proj___lam__3___boxed(lean_object* v_name_194_, lean_object* v_x_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Lake_LeanLibConfig_roots___proj___lam__3(v_name_194_, v_x_195_);
lean_dec_ref(v_x_195_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_roots___proj(lean_object* v_name_200_){
_start:
{
lean_object* v___f_201_; lean_object* v___f_202_; lean_object* v___f_203_; lean_object* v___f_204_; lean_object* v___x_205_; 
v___f_201_ = ((lean_object*)(l_Lake_LeanLibConfig_roots___proj___closed__0));
v___f_202_ = ((lean_object*)(l_Lake_LeanLibConfig_roots___proj___closed__1));
v___f_203_ = ((lean_object*)(l_Lake_LeanLibConfig_roots___proj___closed__2));
v___f_204_ = lean_alloc_closure((void*)(l_Lake_LeanLibConfig_roots___proj___lam__3___boxed), 2, 1);
lean_closure_set(v___f_204_, 0, v_name_200_);
v___x_205_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_205_, 0, v___f_201_);
lean_ctor_set(v___x_205_, 1, v___f_202_);
lean_ctor_set(v___x_205_, 2, v___f_203_);
lean_ctor_set(v___x_205_, 3, v___f_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_roots_instConfigField(lean_object* v_name_206_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = l_Lake_LeanLibConfig_roots___proj(v_name_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___lam__0(lean_object* v_cfg_208_){
_start:
{
lean_object* v_globs_209_; 
v_globs_209_ = lean_ctor_get(v_cfg_208_, 3);
lean_inc_ref(v_globs_209_);
return v_globs_209_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___lam__0___boxed(lean_object* v_cfg_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lake_LeanLibConfig_globs___proj___redArg___lam__0(v_cfg_210_);
lean_dec_ref(v_cfg_210_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___lam__1(lean_object* v_val_212_, lean_object* v_cfg_213_){
_start:
{
lean_object* v_toLeanConfig_214_; lean_object* v_srcDir_215_; lean_object* v_roots_216_; lean_object* v_libName_217_; uint8_t v_libPrefixOnWindows_218_; lean_object* v_needs_219_; lean_object* v_extraDepTargets_220_; uint8_t v_precompileLibrary_221_; uint8_t v_precompileModules_222_; lean_object* v_defaultFacets_223_; lean_object* v_nativeFacets_224_; uint8_t v_allowImportAll_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_232_; 
v_toLeanConfig_214_ = lean_ctor_get(v_cfg_213_, 0);
v_srcDir_215_ = lean_ctor_get(v_cfg_213_, 1);
v_roots_216_ = lean_ctor_get(v_cfg_213_, 2);
v_libName_217_ = lean_ctor_get(v_cfg_213_, 4);
v_libPrefixOnWindows_218_ = lean_ctor_get_uint8(v_cfg_213_, sizeof(void*)*9);
v_needs_219_ = lean_ctor_get(v_cfg_213_, 5);
v_extraDepTargets_220_ = lean_ctor_get(v_cfg_213_, 6);
v_precompileLibrary_221_ = lean_ctor_get_uint8(v_cfg_213_, sizeof(void*)*9 + 1);
v_precompileModules_222_ = lean_ctor_get_uint8(v_cfg_213_, sizeof(void*)*9 + 2);
v_defaultFacets_223_ = lean_ctor_get(v_cfg_213_, 7);
v_nativeFacets_224_ = lean_ctor_get(v_cfg_213_, 8);
v_allowImportAll_225_ = lean_ctor_get_uint8(v_cfg_213_, sizeof(void*)*9 + 3);
v_isSharedCheck_232_ = !lean_is_exclusive(v_cfg_213_);
if (v_isSharedCheck_232_ == 0)
{
lean_object* v_unused_233_; 
v_unused_233_ = lean_ctor_get(v_cfg_213_, 3);
lean_dec(v_unused_233_);
v___x_227_ = v_cfg_213_;
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_nativeFacets_224_);
lean_inc(v_defaultFacets_223_);
lean_inc(v_extraDepTargets_220_);
lean_inc(v_needs_219_);
lean_inc(v_libName_217_);
lean_inc(v_roots_216_);
lean_inc(v_srcDir_215_);
lean_inc(v_toLeanConfig_214_);
lean_dec(v_cfg_213_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_230_; 
if (v_isShared_228_ == 0)
{
lean_ctor_set(v___x_227_, 3, v_val_212_);
v___x_230_ = v___x_227_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_toLeanConfig_214_);
lean_ctor_set(v_reuseFailAlloc_231_, 1, v_srcDir_215_);
lean_ctor_set(v_reuseFailAlloc_231_, 2, v_roots_216_);
lean_ctor_set(v_reuseFailAlloc_231_, 3, v_val_212_);
lean_ctor_set(v_reuseFailAlloc_231_, 4, v_libName_217_);
lean_ctor_set(v_reuseFailAlloc_231_, 5, v_needs_219_);
lean_ctor_set(v_reuseFailAlloc_231_, 6, v_extraDepTargets_220_);
lean_ctor_set(v_reuseFailAlloc_231_, 7, v_defaultFacets_223_);
lean_ctor_set(v_reuseFailAlloc_231_, 8, v_nativeFacets_224_);
lean_ctor_set_uint8(v_reuseFailAlloc_231_, sizeof(void*)*9, v_libPrefixOnWindows_218_);
lean_ctor_set_uint8(v_reuseFailAlloc_231_, sizeof(void*)*9 + 1, v_precompileLibrary_221_);
lean_ctor_set_uint8(v_reuseFailAlloc_231_, sizeof(void*)*9 + 2, v_precompileModules_222_);
lean_ctor_set_uint8(v_reuseFailAlloc_231_, sizeof(void*)*9 + 3, v_allowImportAll_225_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___lam__2(lean_object* v_f_234_, lean_object* v_cfg_235_){
_start:
{
lean_object* v_toLeanConfig_236_; lean_object* v_srcDir_237_; lean_object* v_roots_238_; lean_object* v_globs_239_; lean_object* v_libName_240_; uint8_t v_libPrefixOnWindows_241_; lean_object* v_needs_242_; lean_object* v_extraDepTargets_243_; uint8_t v_precompileLibrary_244_; uint8_t v_precompileModules_245_; lean_object* v_defaultFacets_246_; lean_object* v_nativeFacets_247_; uint8_t v_allowImportAll_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_256_; 
v_toLeanConfig_236_ = lean_ctor_get(v_cfg_235_, 0);
v_srcDir_237_ = lean_ctor_get(v_cfg_235_, 1);
v_roots_238_ = lean_ctor_get(v_cfg_235_, 2);
v_globs_239_ = lean_ctor_get(v_cfg_235_, 3);
v_libName_240_ = lean_ctor_get(v_cfg_235_, 4);
v_libPrefixOnWindows_241_ = lean_ctor_get_uint8(v_cfg_235_, sizeof(void*)*9);
v_needs_242_ = lean_ctor_get(v_cfg_235_, 5);
v_extraDepTargets_243_ = lean_ctor_get(v_cfg_235_, 6);
v_precompileLibrary_244_ = lean_ctor_get_uint8(v_cfg_235_, sizeof(void*)*9 + 1);
v_precompileModules_245_ = lean_ctor_get_uint8(v_cfg_235_, sizeof(void*)*9 + 2);
v_defaultFacets_246_ = lean_ctor_get(v_cfg_235_, 7);
v_nativeFacets_247_ = lean_ctor_get(v_cfg_235_, 8);
v_allowImportAll_248_ = lean_ctor_get_uint8(v_cfg_235_, sizeof(void*)*9 + 3);
v_isSharedCheck_256_ = !lean_is_exclusive(v_cfg_235_);
if (v_isSharedCheck_256_ == 0)
{
v___x_250_ = v_cfg_235_;
v_isShared_251_ = v_isSharedCheck_256_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_nativeFacets_247_);
lean_inc(v_defaultFacets_246_);
lean_inc(v_extraDepTargets_243_);
lean_inc(v_needs_242_);
lean_inc(v_libName_240_);
lean_inc(v_globs_239_);
lean_inc(v_roots_238_);
lean_inc(v_srcDir_237_);
lean_inc(v_toLeanConfig_236_);
lean_dec(v_cfg_235_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_256_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_252_; lean_object* v___x_254_; 
v___x_252_ = lean_apply_1(v_f_234_, v_globs_239_);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 3, v___x_252_);
v___x_254_ = v___x_250_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_toLeanConfig_236_);
lean_ctor_set(v_reuseFailAlloc_255_, 1, v_srcDir_237_);
lean_ctor_set(v_reuseFailAlloc_255_, 2, v_roots_238_);
lean_ctor_set(v_reuseFailAlloc_255_, 3, v___x_252_);
lean_ctor_set(v_reuseFailAlloc_255_, 4, v_libName_240_);
lean_ctor_set(v_reuseFailAlloc_255_, 5, v_needs_242_);
lean_ctor_set(v_reuseFailAlloc_255_, 6, v_extraDepTargets_243_);
lean_ctor_set(v_reuseFailAlloc_255_, 7, v_defaultFacets_246_);
lean_ctor_set(v_reuseFailAlloc_255_, 8, v_nativeFacets_247_);
lean_ctor_set_uint8(v_reuseFailAlloc_255_, sizeof(void*)*9, v_libPrefixOnWindows_241_);
lean_ctor_set_uint8(v_reuseFailAlloc_255_, sizeof(void*)*9 + 1, v_precompileLibrary_244_);
lean_ctor_set_uint8(v_reuseFailAlloc_255_, sizeof(void*)*9 + 2, v_precompileModules_245_);
lean_ctor_set_uint8(v_reuseFailAlloc_255_, sizeof(void*)*9 + 3, v_allowImportAll_248_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___lam__3(lean_object* v_x_257_){
_start:
{
lean_object* v_roots_258_; size_t v_sz_259_; size_t v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v_roots_258_ = lean_ctor_get(v_x_257_, 2);
v_sz_259_ = lean_array_size(v_roots_258_);
v___x_260_ = ((size_t)0ULL);
v___x_261_ = l_unsafeCast___redArg(v_roots_258_);
v___x_262_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_instInhabitedLeanLibConfig_default_spec__0(v_sz_259_, v___x_260_, v___x_261_);
v___x_263_ = l_unsafeCast___redArg(v___x_262_);
lean_dec_ref(v___x_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___lam__3___boxed(lean_object* v_x_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l_Lake_LeanLibConfig_globs___proj___redArg___lam__3(v_x_264_);
lean_dec_ref(v_x_264_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___redArg(){
_start:
{
lean_object* v___x_276_; 
v___x_276_ = ((lean_object*)(l_Lake_LeanLibConfig_globs___proj___redArg___closed__4));
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___redArg___boxed(lean_object* v___dummy_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Lake_LeanLibConfig_globs___proj___redArg();
return v_res_278_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig_globs___proj___closed__0(void){
_start:
{
lean_object* v___x_279_; 
v___x_279_ = l_Lake_LeanLibConfig_globs___proj___redArg();
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj(lean_object* v_name_280_){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = lean_obj_once(&l_Lake_LeanLibConfig_globs___proj___closed__0, &l_Lake_LeanLibConfig_globs___proj___closed__0_once, _init_l_Lake_LeanLibConfig_globs___proj___closed__0);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs___proj___boxed(lean_object* v_name_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Lake_LeanLibConfig_globs___proj(v_name_282_);
lean_dec(v_name_282_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs_instConfigField___redArg(){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = lean_obj_once(&l_Lake_LeanLibConfig_globs___proj___closed__0, &l_Lake_LeanLibConfig_globs___proj___closed__0_once, _init_l_Lake_LeanLibConfig_globs___proj___closed__0);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs_instConfigField___redArg___boxed(lean_object* v___dummy_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Lake_LeanLibConfig_globs_instConfigField___redArg();
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs_instConfigField(lean_object* v_name_288_){
_start:
{
lean_object* v___x_289_; 
v___x_289_ = lean_obj_once(&l_Lake_LeanLibConfig_globs___proj___closed__0, &l_Lake_LeanLibConfig_globs___proj___closed__0_once, _init_l_Lake_LeanLibConfig_globs___proj___closed__0);
return v___x_289_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_globs_instConfigField___boxed(lean_object* v_name_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_Lake_LeanLibConfig_globs_instConfigField(v_name_290_);
lean_dec(v_name_290_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___lam__0(lean_object* v_cfg_292_){
_start:
{
lean_object* v_libName_293_; 
v_libName_293_ = lean_ctor_get(v_cfg_292_, 4);
lean_inc_ref(v_libName_293_);
return v_libName_293_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___lam__0___boxed(lean_object* v_cfg_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l_Lake_LeanLibConfig_libName___proj___redArg___lam__0(v_cfg_294_);
lean_dec_ref(v_cfg_294_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___lam__1(lean_object* v_val_296_, lean_object* v_cfg_297_){
_start:
{
lean_object* v_toLeanConfig_298_; lean_object* v_srcDir_299_; lean_object* v_roots_300_; lean_object* v_globs_301_; uint8_t v_libPrefixOnWindows_302_; lean_object* v_needs_303_; lean_object* v_extraDepTargets_304_; uint8_t v_precompileLibrary_305_; uint8_t v_precompileModules_306_; lean_object* v_defaultFacets_307_; lean_object* v_nativeFacets_308_; uint8_t v_allowImportAll_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
v_toLeanConfig_298_ = lean_ctor_get(v_cfg_297_, 0);
v_srcDir_299_ = lean_ctor_get(v_cfg_297_, 1);
v_roots_300_ = lean_ctor_get(v_cfg_297_, 2);
v_globs_301_ = lean_ctor_get(v_cfg_297_, 3);
v_libPrefixOnWindows_302_ = lean_ctor_get_uint8(v_cfg_297_, sizeof(void*)*9);
v_needs_303_ = lean_ctor_get(v_cfg_297_, 5);
v_extraDepTargets_304_ = lean_ctor_get(v_cfg_297_, 6);
v_precompileLibrary_305_ = lean_ctor_get_uint8(v_cfg_297_, sizeof(void*)*9 + 1);
v_precompileModules_306_ = lean_ctor_get_uint8(v_cfg_297_, sizeof(void*)*9 + 2);
v_defaultFacets_307_ = lean_ctor_get(v_cfg_297_, 7);
v_nativeFacets_308_ = lean_ctor_get(v_cfg_297_, 8);
v_allowImportAll_309_ = lean_ctor_get_uint8(v_cfg_297_, sizeof(void*)*9 + 3);
v_isSharedCheck_316_ = !lean_is_exclusive(v_cfg_297_);
if (v_isSharedCheck_316_ == 0)
{
lean_object* v_unused_317_; 
v_unused_317_ = lean_ctor_get(v_cfg_297_, 4);
lean_dec(v_unused_317_);
v___x_311_ = v_cfg_297_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_nativeFacets_308_);
lean_inc(v_defaultFacets_307_);
lean_inc(v_extraDepTargets_304_);
lean_inc(v_needs_303_);
lean_inc(v_globs_301_);
lean_inc(v_roots_300_);
lean_inc(v_srcDir_299_);
lean_inc(v_toLeanConfig_298_);
lean_dec(v_cfg_297_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 4, v_val_296_);
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_toLeanConfig_298_);
lean_ctor_set(v_reuseFailAlloc_315_, 1, v_srcDir_299_);
lean_ctor_set(v_reuseFailAlloc_315_, 2, v_roots_300_);
lean_ctor_set(v_reuseFailAlloc_315_, 3, v_globs_301_);
lean_ctor_set(v_reuseFailAlloc_315_, 4, v_val_296_);
lean_ctor_set(v_reuseFailAlloc_315_, 5, v_needs_303_);
lean_ctor_set(v_reuseFailAlloc_315_, 6, v_extraDepTargets_304_);
lean_ctor_set(v_reuseFailAlloc_315_, 7, v_defaultFacets_307_);
lean_ctor_set(v_reuseFailAlloc_315_, 8, v_nativeFacets_308_);
lean_ctor_set_uint8(v_reuseFailAlloc_315_, sizeof(void*)*9, v_libPrefixOnWindows_302_);
lean_ctor_set_uint8(v_reuseFailAlloc_315_, sizeof(void*)*9 + 1, v_precompileLibrary_305_);
lean_ctor_set_uint8(v_reuseFailAlloc_315_, sizeof(void*)*9 + 2, v_precompileModules_306_);
lean_ctor_set_uint8(v_reuseFailAlloc_315_, sizeof(void*)*9 + 3, v_allowImportAll_309_);
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
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___lam__2(lean_object* v_f_318_, lean_object* v_cfg_319_){
_start:
{
lean_object* v_toLeanConfig_320_; lean_object* v_srcDir_321_; lean_object* v_roots_322_; lean_object* v_globs_323_; lean_object* v_libName_324_; uint8_t v_libPrefixOnWindows_325_; lean_object* v_needs_326_; lean_object* v_extraDepTargets_327_; uint8_t v_precompileLibrary_328_; uint8_t v_precompileModules_329_; lean_object* v_defaultFacets_330_; lean_object* v_nativeFacets_331_; uint8_t v_allowImportAll_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_340_; 
v_toLeanConfig_320_ = lean_ctor_get(v_cfg_319_, 0);
v_srcDir_321_ = lean_ctor_get(v_cfg_319_, 1);
v_roots_322_ = lean_ctor_get(v_cfg_319_, 2);
v_globs_323_ = lean_ctor_get(v_cfg_319_, 3);
v_libName_324_ = lean_ctor_get(v_cfg_319_, 4);
v_libPrefixOnWindows_325_ = lean_ctor_get_uint8(v_cfg_319_, sizeof(void*)*9);
v_needs_326_ = lean_ctor_get(v_cfg_319_, 5);
v_extraDepTargets_327_ = lean_ctor_get(v_cfg_319_, 6);
v_precompileLibrary_328_ = lean_ctor_get_uint8(v_cfg_319_, sizeof(void*)*9 + 1);
v_precompileModules_329_ = lean_ctor_get_uint8(v_cfg_319_, sizeof(void*)*9 + 2);
v_defaultFacets_330_ = lean_ctor_get(v_cfg_319_, 7);
v_nativeFacets_331_ = lean_ctor_get(v_cfg_319_, 8);
v_allowImportAll_332_ = lean_ctor_get_uint8(v_cfg_319_, sizeof(void*)*9 + 3);
v_isSharedCheck_340_ = !lean_is_exclusive(v_cfg_319_);
if (v_isSharedCheck_340_ == 0)
{
v___x_334_ = v_cfg_319_;
v_isShared_335_ = v_isSharedCheck_340_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_nativeFacets_331_);
lean_inc(v_defaultFacets_330_);
lean_inc(v_extraDepTargets_327_);
lean_inc(v_needs_326_);
lean_inc(v_libName_324_);
lean_inc(v_globs_323_);
lean_inc(v_roots_322_);
lean_inc(v_srcDir_321_);
lean_inc(v_toLeanConfig_320_);
lean_dec(v_cfg_319_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_340_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; lean_object* v___x_338_; 
v___x_336_ = lean_apply_1(v_f_318_, v_libName_324_);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 4, v___x_336_);
v___x_338_ = v___x_334_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_toLeanConfig_320_);
lean_ctor_set(v_reuseFailAlloc_339_, 1, v_srcDir_321_);
lean_ctor_set(v_reuseFailAlloc_339_, 2, v_roots_322_);
lean_ctor_set(v_reuseFailAlloc_339_, 3, v_globs_323_);
lean_ctor_set(v_reuseFailAlloc_339_, 4, v___x_336_);
lean_ctor_set(v_reuseFailAlloc_339_, 5, v_needs_326_);
lean_ctor_set(v_reuseFailAlloc_339_, 6, v_extraDepTargets_327_);
lean_ctor_set(v_reuseFailAlloc_339_, 7, v_defaultFacets_330_);
lean_ctor_set(v_reuseFailAlloc_339_, 8, v_nativeFacets_331_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, sizeof(void*)*9, v_libPrefixOnWindows_325_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, sizeof(void*)*9 + 1, v_precompileLibrary_328_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, sizeof(void*)*9 + 2, v_precompileModules_329_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, sizeof(void*)*9 + 3, v_allowImportAll_332_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
return v___x_338_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___lam__3(lean_object* v_x_341_){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = ((lean_object*)(l_Lake_instInhabitedLeanLibConfig_default___closed__2));
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___lam__3___boxed(lean_object* v_x_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_Lake_LeanLibConfig_libName___proj___redArg___lam__3(v_x_343_);
lean_dec_ref(v_x_343_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___redArg(){
_start:
{
lean_object* v___x_355_; 
v___x_355_ = ((lean_object*)(l_Lake_LeanLibConfig_libName___proj___redArg___closed__4));
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___redArg___boxed(lean_object* v___dummy_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = l_Lake_LeanLibConfig_libName___proj___redArg();
return v_res_357_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig_libName___proj___closed__0(void){
_start:
{
lean_object* v___x_358_; 
v___x_358_ = l_Lake_LeanLibConfig_libName___proj___redArg();
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj(lean_object* v_name_359_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = lean_obj_once(&l_Lake_LeanLibConfig_libName___proj___closed__0, &l_Lake_LeanLibConfig_libName___proj___closed__0_once, _init_l_Lake_LeanLibConfig_libName___proj___closed__0);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName___proj___boxed(lean_object* v_name_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lake_LeanLibConfig_libName___proj(v_name_361_);
lean_dec(v_name_361_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName_instConfigField___redArg(){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = lean_obj_once(&l_Lake_LeanLibConfig_libName___proj___closed__0, &l_Lake_LeanLibConfig_libName___proj___closed__0_once, _init_l_Lake_LeanLibConfig_libName___proj___closed__0);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName_instConfigField___redArg___boxed(lean_object* v___dummy_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_Lake_LeanLibConfig_libName_instConfigField___redArg();
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName_instConfigField(lean_object* v_name_367_){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = lean_obj_once(&l_Lake_LeanLibConfig_libName___proj___closed__0, &l_Lake_LeanLibConfig_libName___proj___closed__0_once, _init_l_Lake_LeanLibConfig_libName___proj___closed__0);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libName_instConfigField___boxed(lean_object* v_name_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l_Lake_LeanLibConfig_libName_instConfigField(v_name_369_);
lean_dec(v_name_369_);
return v_res_370_;
}
}
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__0(lean_object* v_cfg_371_){
_start:
{
uint8_t v_libPrefixOnWindows_372_; 
v_libPrefixOnWindows_372_ = lean_ctor_get_uint8(v_cfg_371_, sizeof(void*)*9);
return v_libPrefixOnWindows_372_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__0___boxed(lean_object* v_cfg_373_){
_start:
{
uint8_t v_res_374_; lean_object* v_r_375_; 
v_res_374_ = l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__0(v_cfg_373_);
lean_dec_ref(v_cfg_373_);
v_r_375_ = lean_box(v_res_374_);
return v_r_375_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__1(uint8_t v_val_376_, lean_object* v_cfg_377_){
_start:
{
lean_object* v_toLeanConfig_378_; lean_object* v_srcDir_379_; lean_object* v_roots_380_; lean_object* v_globs_381_; lean_object* v_libName_382_; lean_object* v_needs_383_; lean_object* v_extraDepTargets_384_; uint8_t v_precompileLibrary_385_; uint8_t v_precompileModules_386_; lean_object* v_defaultFacets_387_; lean_object* v_nativeFacets_388_; uint8_t v_allowImportAll_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_396_; 
v_toLeanConfig_378_ = lean_ctor_get(v_cfg_377_, 0);
v_srcDir_379_ = lean_ctor_get(v_cfg_377_, 1);
v_roots_380_ = lean_ctor_get(v_cfg_377_, 2);
v_globs_381_ = lean_ctor_get(v_cfg_377_, 3);
v_libName_382_ = lean_ctor_get(v_cfg_377_, 4);
v_needs_383_ = lean_ctor_get(v_cfg_377_, 5);
v_extraDepTargets_384_ = lean_ctor_get(v_cfg_377_, 6);
v_precompileLibrary_385_ = lean_ctor_get_uint8(v_cfg_377_, sizeof(void*)*9 + 1);
v_precompileModules_386_ = lean_ctor_get_uint8(v_cfg_377_, sizeof(void*)*9 + 2);
v_defaultFacets_387_ = lean_ctor_get(v_cfg_377_, 7);
v_nativeFacets_388_ = lean_ctor_get(v_cfg_377_, 8);
v_allowImportAll_389_ = lean_ctor_get_uint8(v_cfg_377_, sizeof(void*)*9 + 3);
v_isSharedCheck_396_ = !lean_is_exclusive(v_cfg_377_);
if (v_isSharedCheck_396_ == 0)
{
v___x_391_ = v_cfg_377_;
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_nativeFacets_388_);
lean_inc(v_defaultFacets_387_);
lean_inc(v_extraDepTargets_384_);
lean_inc(v_needs_383_);
lean_inc(v_libName_382_);
lean_inc(v_globs_381_);
lean_inc(v_roots_380_);
lean_inc(v_srcDir_379_);
lean_inc(v_toLeanConfig_378_);
lean_dec(v_cfg_377_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_394_; 
if (v_isShared_392_ == 0)
{
v___x_394_ = v___x_391_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v_toLeanConfig_378_);
lean_ctor_set(v_reuseFailAlloc_395_, 1, v_srcDir_379_);
lean_ctor_set(v_reuseFailAlloc_395_, 2, v_roots_380_);
lean_ctor_set(v_reuseFailAlloc_395_, 3, v_globs_381_);
lean_ctor_set(v_reuseFailAlloc_395_, 4, v_libName_382_);
lean_ctor_set(v_reuseFailAlloc_395_, 5, v_needs_383_);
lean_ctor_set(v_reuseFailAlloc_395_, 6, v_extraDepTargets_384_);
lean_ctor_set(v_reuseFailAlloc_395_, 7, v_defaultFacets_387_);
lean_ctor_set(v_reuseFailAlloc_395_, 8, v_nativeFacets_388_);
lean_ctor_set_uint8(v_reuseFailAlloc_395_, sizeof(void*)*9 + 1, v_precompileLibrary_385_);
lean_ctor_set_uint8(v_reuseFailAlloc_395_, sizeof(void*)*9 + 2, v_precompileModules_386_);
lean_ctor_set_uint8(v_reuseFailAlloc_395_, sizeof(void*)*9 + 3, v_allowImportAll_389_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
lean_ctor_set_uint8(v___x_394_, sizeof(void*)*9, v_val_376_);
return v___x_394_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__1___boxed(lean_object* v_val_397_, lean_object* v_cfg_398_){
_start:
{
uint8_t v_val_75__boxed_399_; lean_object* v_res_400_; 
v_val_75__boxed_399_ = lean_unbox(v_val_397_);
v_res_400_ = l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__1(v_val_75__boxed_399_, v_cfg_398_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__2(lean_object* v_f_401_, lean_object* v_cfg_402_){
_start:
{
lean_object* v_toLeanConfig_403_; lean_object* v_srcDir_404_; lean_object* v_roots_405_; lean_object* v_globs_406_; lean_object* v_libName_407_; uint8_t v_libPrefixOnWindows_408_; lean_object* v_needs_409_; lean_object* v_extraDepTargets_410_; uint8_t v_precompileLibrary_411_; uint8_t v_precompileModules_412_; lean_object* v_defaultFacets_413_; lean_object* v_nativeFacets_414_; uint8_t v_allowImportAll_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_425_; 
v_toLeanConfig_403_ = lean_ctor_get(v_cfg_402_, 0);
v_srcDir_404_ = lean_ctor_get(v_cfg_402_, 1);
v_roots_405_ = lean_ctor_get(v_cfg_402_, 2);
v_globs_406_ = lean_ctor_get(v_cfg_402_, 3);
v_libName_407_ = lean_ctor_get(v_cfg_402_, 4);
v_libPrefixOnWindows_408_ = lean_ctor_get_uint8(v_cfg_402_, sizeof(void*)*9);
v_needs_409_ = lean_ctor_get(v_cfg_402_, 5);
v_extraDepTargets_410_ = lean_ctor_get(v_cfg_402_, 6);
v_precompileLibrary_411_ = lean_ctor_get_uint8(v_cfg_402_, sizeof(void*)*9 + 1);
v_precompileModules_412_ = lean_ctor_get_uint8(v_cfg_402_, sizeof(void*)*9 + 2);
v_defaultFacets_413_ = lean_ctor_get(v_cfg_402_, 7);
v_nativeFacets_414_ = lean_ctor_get(v_cfg_402_, 8);
v_allowImportAll_415_ = lean_ctor_get_uint8(v_cfg_402_, sizeof(void*)*9 + 3);
v_isSharedCheck_425_ = !lean_is_exclusive(v_cfg_402_);
if (v_isSharedCheck_425_ == 0)
{
v___x_417_ = v_cfg_402_;
v_isShared_418_ = v_isSharedCheck_425_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_nativeFacets_414_);
lean_inc(v_defaultFacets_413_);
lean_inc(v_extraDepTargets_410_);
lean_inc(v_needs_409_);
lean_inc(v_libName_407_);
lean_inc(v_globs_406_);
lean_inc(v_roots_405_);
lean_inc(v_srcDir_404_);
lean_inc(v_toLeanConfig_403_);
lean_dec(v_cfg_402_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_425_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_422_; 
v___x_419_ = lean_box(v_libPrefixOnWindows_408_);
v___x_420_ = lean_apply_1(v_f_401_, v___x_419_);
if (v_isShared_418_ == 0)
{
v___x_422_ = v___x_417_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v_toLeanConfig_403_);
lean_ctor_set(v_reuseFailAlloc_424_, 1, v_srcDir_404_);
lean_ctor_set(v_reuseFailAlloc_424_, 2, v_roots_405_);
lean_ctor_set(v_reuseFailAlloc_424_, 3, v_globs_406_);
lean_ctor_set(v_reuseFailAlloc_424_, 4, v_libName_407_);
lean_ctor_set(v_reuseFailAlloc_424_, 5, v_needs_409_);
lean_ctor_set(v_reuseFailAlloc_424_, 6, v_extraDepTargets_410_);
lean_ctor_set(v_reuseFailAlloc_424_, 7, v_defaultFacets_413_);
lean_ctor_set(v_reuseFailAlloc_424_, 8, v_nativeFacets_414_);
v___x_422_ = v_reuseFailAlloc_424_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
uint8_t v___x_423_; 
v___x_423_ = lean_unbox(v___x_420_);
lean_ctor_set_uint8(v___x_422_, sizeof(void*)*9, v___x_423_);
lean_ctor_set_uint8(v___x_422_, sizeof(void*)*9 + 1, v_precompileLibrary_411_);
lean_ctor_set_uint8(v___x_422_, sizeof(void*)*9 + 2, v_precompileModules_412_);
lean_ctor_set_uint8(v___x_422_, sizeof(void*)*9 + 3, v_allowImportAll_415_);
return v___x_422_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__3(lean_object* v_x_426_){
_start:
{
uint8_t v___x_427_; 
v___x_427_ = 0;
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__3___boxed(lean_object* v_x_428_){
_start:
{
uint8_t v_res_429_; lean_object* v_r_430_; 
v_res_429_ = l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___lam__3(v_x_428_);
lean_dec_ref(v_x_428_);
v_r_430_ = lean_box(v_res_429_);
return v_r_430_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg(){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = ((lean_object*)(l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___closed__4));
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg___boxed(lean_object* v___dummy_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg();
return v_res_443_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig_libPrefixOnWindows___proj___closed__0(void){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = l_Lake_LeanLibConfig_libPrefixOnWindows___proj___redArg();
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj(lean_object* v_name_445_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = lean_obj_once(&l_Lake_LeanLibConfig_libPrefixOnWindows___proj___closed__0, &l_Lake_LeanLibConfig_libPrefixOnWindows___proj___closed__0_once, _init_l_Lake_LeanLibConfig_libPrefixOnWindows___proj___closed__0);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows___proj___boxed(lean_object* v_name_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_Lake_LeanLibConfig_libPrefixOnWindows___proj(v_name_447_);
lean_dec(v_name_447_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows_instConfigField___redArg(){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = lean_obj_once(&l_Lake_LeanLibConfig_libPrefixOnWindows___proj___closed__0, &l_Lake_LeanLibConfig_libPrefixOnWindows___proj___closed__0_once, _init_l_Lake_LeanLibConfig_libPrefixOnWindows___proj___closed__0);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows_instConfigField___redArg___boxed(lean_object* v___dummy_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l_Lake_LeanLibConfig_libPrefixOnWindows_instConfigField___redArg();
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows_instConfigField(lean_object* v_name_453_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = lean_obj_once(&l_Lake_LeanLibConfig_libPrefixOnWindows___proj___closed__0, &l_Lake_LeanLibConfig_libPrefixOnWindows___proj___closed__0_once, _init_l_Lake_LeanLibConfig_libPrefixOnWindows___proj___closed__0);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_libPrefixOnWindows_instConfigField___boxed(lean_object* v_name_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Lake_LeanLibConfig_libPrefixOnWindows_instConfigField(v_name_455_);
lean_dec(v_name_455_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___lam__0(lean_object* v_cfg_457_){
_start:
{
lean_object* v_needs_458_; 
v_needs_458_ = lean_ctor_get(v_cfg_457_, 5);
lean_inc_ref(v_needs_458_);
return v_needs_458_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___lam__0___boxed(lean_object* v_cfg_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lake_LeanLibConfig_needs___proj___redArg___lam__0(v_cfg_459_);
lean_dec_ref(v_cfg_459_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___lam__1(lean_object* v_val_461_, lean_object* v_cfg_462_){
_start:
{
lean_object* v_toLeanConfig_463_; lean_object* v_srcDir_464_; lean_object* v_roots_465_; lean_object* v_globs_466_; lean_object* v_libName_467_; uint8_t v_libPrefixOnWindows_468_; lean_object* v_extraDepTargets_469_; uint8_t v_precompileLibrary_470_; uint8_t v_precompileModules_471_; lean_object* v_defaultFacets_472_; lean_object* v_nativeFacets_473_; uint8_t v_allowImportAll_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
v_toLeanConfig_463_ = lean_ctor_get(v_cfg_462_, 0);
v_srcDir_464_ = lean_ctor_get(v_cfg_462_, 1);
v_roots_465_ = lean_ctor_get(v_cfg_462_, 2);
v_globs_466_ = lean_ctor_get(v_cfg_462_, 3);
v_libName_467_ = lean_ctor_get(v_cfg_462_, 4);
v_libPrefixOnWindows_468_ = lean_ctor_get_uint8(v_cfg_462_, sizeof(void*)*9);
v_extraDepTargets_469_ = lean_ctor_get(v_cfg_462_, 6);
v_precompileLibrary_470_ = lean_ctor_get_uint8(v_cfg_462_, sizeof(void*)*9 + 1);
v_precompileModules_471_ = lean_ctor_get_uint8(v_cfg_462_, sizeof(void*)*9 + 2);
v_defaultFacets_472_ = lean_ctor_get(v_cfg_462_, 7);
v_nativeFacets_473_ = lean_ctor_get(v_cfg_462_, 8);
v_allowImportAll_474_ = lean_ctor_get_uint8(v_cfg_462_, sizeof(void*)*9 + 3);
v_isSharedCheck_481_ = !lean_is_exclusive(v_cfg_462_);
if (v_isSharedCheck_481_ == 0)
{
lean_object* v_unused_482_; 
v_unused_482_ = lean_ctor_get(v_cfg_462_, 5);
lean_dec(v_unused_482_);
v___x_476_ = v_cfg_462_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_nativeFacets_473_);
lean_inc(v_defaultFacets_472_);
lean_inc(v_extraDepTargets_469_);
lean_inc(v_libName_467_);
lean_inc(v_globs_466_);
lean_inc(v_roots_465_);
lean_inc(v_srcDir_464_);
lean_inc(v_toLeanConfig_463_);
lean_dec(v_cfg_462_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 5, v_val_461_);
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_toLeanConfig_463_);
lean_ctor_set(v_reuseFailAlloc_480_, 1, v_srcDir_464_);
lean_ctor_set(v_reuseFailAlloc_480_, 2, v_roots_465_);
lean_ctor_set(v_reuseFailAlloc_480_, 3, v_globs_466_);
lean_ctor_set(v_reuseFailAlloc_480_, 4, v_libName_467_);
lean_ctor_set(v_reuseFailAlloc_480_, 5, v_val_461_);
lean_ctor_set(v_reuseFailAlloc_480_, 6, v_extraDepTargets_469_);
lean_ctor_set(v_reuseFailAlloc_480_, 7, v_defaultFacets_472_);
lean_ctor_set(v_reuseFailAlloc_480_, 8, v_nativeFacets_473_);
lean_ctor_set_uint8(v_reuseFailAlloc_480_, sizeof(void*)*9, v_libPrefixOnWindows_468_);
lean_ctor_set_uint8(v_reuseFailAlloc_480_, sizeof(void*)*9 + 1, v_precompileLibrary_470_);
lean_ctor_set_uint8(v_reuseFailAlloc_480_, sizeof(void*)*9 + 2, v_precompileModules_471_);
lean_ctor_set_uint8(v_reuseFailAlloc_480_, sizeof(void*)*9 + 3, v_allowImportAll_474_);
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
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___lam__2(lean_object* v_f_483_, lean_object* v_cfg_484_){
_start:
{
lean_object* v_toLeanConfig_485_; lean_object* v_srcDir_486_; lean_object* v_roots_487_; lean_object* v_globs_488_; lean_object* v_libName_489_; uint8_t v_libPrefixOnWindows_490_; lean_object* v_needs_491_; lean_object* v_extraDepTargets_492_; uint8_t v_precompileLibrary_493_; uint8_t v_precompileModules_494_; lean_object* v_defaultFacets_495_; lean_object* v_nativeFacets_496_; uint8_t v_allowImportAll_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_505_; 
v_toLeanConfig_485_ = lean_ctor_get(v_cfg_484_, 0);
v_srcDir_486_ = lean_ctor_get(v_cfg_484_, 1);
v_roots_487_ = lean_ctor_get(v_cfg_484_, 2);
v_globs_488_ = lean_ctor_get(v_cfg_484_, 3);
v_libName_489_ = lean_ctor_get(v_cfg_484_, 4);
v_libPrefixOnWindows_490_ = lean_ctor_get_uint8(v_cfg_484_, sizeof(void*)*9);
v_needs_491_ = lean_ctor_get(v_cfg_484_, 5);
v_extraDepTargets_492_ = lean_ctor_get(v_cfg_484_, 6);
v_precompileLibrary_493_ = lean_ctor_get_uint8(v_cfg_484_, sizeof(void*)*9 + 1);
v_precompileModules_494_ = lean_ctor_get_uint8(v_cfg_484_, sizeof(void*)*9 + 2);
v_defaultFacets_495_ = lean_ctor_get(v_cfg_484_, 7);
v_nativeFacets_496_ = lean_ctor_get(v_cfg_484_, 8);
v_allowImportAll_497_ = lean_ctor_get_uint8(v_cfg_484_, sizeof(void*)*9 + 3);
v_isSharedCheck_505_ = !lean_is_exclusive(v_cfg_484_);
if (v_isSharedCheck_505_ == 0)
{
v___x_499_ = v_cfg_484_;
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_nativeFacets_496_);
lean_inc(v_defaultFacets_495_);
lean_inc(v_extraDepTargets_492_);
lean_inc(v_needs_491_);
lean_inc(v_libName_489_);
lean_inc(v_globs_488_);
lean_inc(v_roots_487_);
lean_inc(v_srcDir_486_);
lean_inc(v_toLeanConfig_485_);
lean_dec(v_cfg_484_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_501_; lean_object* v___x_503_; 
v___x_501_ = lean_apply_1(v_f_483_, v_needs_491_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 5, v___x_501_);
v___x_503_ = v___x_499_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v_toLeanConfig_485_);
lean_ctor_set(v_reuseFailAlloc_504_, 1, v_srcDir_486_);
lean_ctor_set(v_reuseFailAlloc_504_, 2, v_roots_487_);
lean_ctor_set(v_reuseFailAlloc_504_, 3, v_globs_488_);
lean_ctor_set(v_reuseFailAlloc_504_, 4, v_libName_489_);
lean_ctor_set(v_reuseFailAlloc_504_, 5, v___x_501_);
lean_ctor_set(v_reuseFailAlloc_504_, 6, v_extraDepTargets_492_);
lean_ctor_set(v_reuseFailAlloc_504_, 7, v_defaultFacets_495_);
lean_ctor_set(v_reuseFailAlloc_504_, 8, v_nativeFacets_496_);
lean_ctor_set_uint8(v_reuseFailAlloc_504_, sizeof(void*)*9, v_libPrefixOnWindows_490_);
lean_ctor_set_uint8(v_reuseFailAlloc_504_, sizeof(void*)*9 + 1, v_precompileLibrary_493_);
lean_ctor_set_uint8(v_reuseFailAlloc_504_, sizeof(void*)*9 + 2, v_precompileModules_494_);
lean_ctor_set_uint8(v_reuseFailAlloc_504_, sizeof(void*)*9 + 3, v_allowImportAll_497_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___lam__3(lean_object* v_x_506_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = ((lean_object*)(l_Lake_instInhabitedLeanLibConfig_default___closed__3));
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___lam__3___boxed(lean_object* v_x_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lake_LeanLibConfig_needs___proj___redArg___lam__3(v_x_508_);
lean_dec_ref(v_x_508_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___redArg(){
_start:
{
lean_object* v___x_520_; 
v___x_520_ = ((lean_object*)(l_Lake_LeanLibConfig_needs___proj___redArg___closed__4));
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___redArg___boxed(lean_object* v___dummy_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lake_LeanLibConfig_needs___proj___redArg();
return v_res_522_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig_needs___proj___closed__0(void){
_start:
{
lean_object* v___x_523_; 
v___x_523_ = l_Lake_LeanLibConfig_needs___proj___redArg();
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj(lean_object* v_name_524_){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = lean_obj_once(&l_Lake_LeanLibConfig_needs___proj___closed__0, &l_Lake_LeanLibConfig_needs___proj___closed__0_once, _init_l_Lake_LeanLibConfig_needs___proj___closed__0);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs___proj___boxed(lean_object* v_name_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Lake_LeanLibConfig_needs___proj(v_name_526_);
lean_dec(v_name_526_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs_instConfigField___redArg(){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = lean_obj_once(&l_Lake_LeanLibConfig_needs___proj___closed__0, &l_Lake_LeanLibConfig_needs___proj___closed__0_once, _init_l_Lake_LeanLibConfig_needs___proj___closed__0);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs_instConfigField___redArg___boxed(lean_object* v___dummy_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Lake_LeanLibConfig_needs_instConfigField___redArg();
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs_instConfigField(lean_object* v_name_532_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = lean_obj_once(&l_Lake_LeanLibConfig_needs___proj___closed__0, &l_Lake_LeanLibConfig_needs___proj___closed__0_once, _init_l_Lake_LeanLibConfig_needs___proj___closed__0);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_needs_instConfigField___boxed(lean_object* v_name_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l_Lake_LeanLibConfig_needs_instConfigField(v_name_534_);
lean_dec(v_name_534_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__0(lean_object* v_cfg_536_){
_start:
{
lean_object* v_extraDepTargets_537_; 
v_extraDepTargets_537_ = lean_ctor_get(v_cfg_536_, 6);
lean_inc_ref(v_extraDepTargets_537_);
return v_extraDepTargets_537_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__0___boxed(lean_object* v_cfg_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__0(v_cfg_538_);
lean_dec_ref(v_cfg_538_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__1(lean_object* v_val_540_, lean_object* v_cfg_541_){
_start:
{
lean_object* v_toLeanConfig_542_; lean_object* v_srcDir_543_; lean_object* v_roots_544_; lean_object* v_globs_545_; lean_object* v_libName_546_; uint8_t v_libPrefixOnWindows_547_; lean_object* v_needs_548_; uint8_t v_precompileLibrary_549_; uint8_t v_precompileModules_550_; lean_object* v_defaultFacets_551_; lean_object* v_nativeFacets_552_; uint8_t v_allowImportAll_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_560_; 
v_toLeanConfig_542_ = lean_ctor_get(v_cfg_541_, 0);
v_srcDir_543_ = lean_ctor_get(v_cfg_541_, 1);
v_roots_544_ = lean_ctor_get(v_cfg_541_, 2);
v_globs_545_ = lean_ctor_get(v_cfg_541_, 3);
v_libName_546_ = lean_ctor_get(v_cfg_541_, 4);
v_libPrefixOnWindows_547_ = lean_ctor_get_uint8(v_cfg_541_, sizeof(void*)*9);
v_needs_548_ = lean_ctor_get(v_cfg_541_, 5);
v_precompileLibrary_549_ = lean_ctor_get_uint8(v_cfg_541_, sizeof(void*)*9 + 1);
v_precompileModules_550_ = lean_ctor_get_uint8(v_cfg_541_, sizeof(void*)*9 + 2);
v_defaultFacets_551_ = lean_ctor_get(v_cfg_541_, 7);
v_nativeFacets_552_ = lean_ctor_get(v_cfg_541_, 8);
v_allowImportAll_553_ = lean_ctor_get_uint8(v_cfg_541_, sizeof(void*)*9 + 3);
v_isSharedCheck_560_ = !lean_is_exclusive(v_cfg_541_);
if (v_isSharedCheck_560_ == 0)
{
lean_object* v_unused_561_; 
v_unused_561_ = lean_ctor_get(v_cfg_541_, 6);
lean_dec(v_unused_561_);
v___x_555_ = v_cfg_541_;
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_nativeFacets_552_);
lean_inc(v_defaultFacets_551_);
lean_inc(v_needs_548_);
lean_inc(v_libName_546_);
lean_inc(v_globs_545_);
lean_inc(v_roots_544_);
lean_inc(v_srcDir_543_);
lean_inc(v_toLeanConfig_542_);
lean_dec(v_cfg_541_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_558_; 
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 6, v_val_540_);
v___x_558_ = v___x_555_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_toLeanConfig_542_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v_srcDir_543_);
lean_ctor_set(v_reuseFailAlloc_559_, 2, v_roots_544_);
lean_ctor_set(v_reuseFailAlloc_559_, 3, v_globs_545_);
lean_ctor_set(v_reuseFailAlloc_559_, 4, v_libName_546_);
lean_ctor_set(v_reuseFailAlloc_559_, 5, v_needs_548_);
lean_ctor_set(v_reuseFailAlloc_559_, 6, v_val_540_);
lean_ctor_set(v_reuseFailAlloc_559_, 7, v_defaultFacets_551_);
lean_ctor_set(v_reuseFailAlloc_559_, 8, v_nativeFacets_552_);
lean_ctor_set_uint8(v_reuseFailAlloc_559_, sizeof(void*)*9, v_libPrefixOnWindows_547_);
lean_ctor_set_uint8(v_reuseFailAlloc_559_, sizeof(void*)*9 + 1, v_precompileLibrary_549_);
lean_ctor_set_uint8(v_reuseFailAlloc_559_, sizeof(void*)*9 + 2, v_precompileModules_550_);
lean_ctor_set_uint8(v_reuseFailAlloc_559_, sizeof(void*)*9 + 3, v_allowImportAll_553_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__2(lean_object* v_f_562_, lean_object* v_cfg_563_){
_start:
{
lean_object* v_toLeanConfig_564_; lean_object* v_srcDir_565_; lean_object* v_roots_566_; lean_object* v_globs_567_; lean_object* v_libName_568_; uint8_t v_libPrefixOnWindows_569_; lean_object* v_needs_570_; lean_object* v_extraDepTargets_571_; uint8_t v_precompileLibrary_572_; uint8_t v_precompileModules_573_; lean_object* v_defaultFacets_574_; lean_object* v_nativeFacets_575_; uint8_t v_allowImportAll_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_584_; 
v_toLeanConfig_564_ = lean_ctor_get(v_cfg_563_, 0);
v_srcDir_565_ = lean_ctor_get(v_cfg_563_, 1);
v_roots_566_ = lean_ctor_get(v_cfg_563_, 2);
v_globs_567_ = lean_ctor_get(v_cfg_563_, 3);
v_libName_568_ = lean_ctor_get(v_cfg_563_, 4);
v_libPrefixOnWindows_569_ = lean_ctor_get_uint8(v_cfg_563_, sizeof(void*)*9);
v_needs_570_ = lean_ctor_get(v_cfg_563_, 5);
v_extraDepTargets_571_ = lean_ctor_get(v_cfg_563_, 6);
v_precompileLibrary_572_ = lean_ctor_get_uint8(v_cfg_563_, sizeof(void*)*9 + 1);
v_precompileModules_573_ = lean_ctor_get_uint8(v_cfg_563_, sizeof(void*)*9 + 2);
v_defaultFacets_574_ = lean_ctor_get(v_cfg_563_, 7);
v_nativeFacets_575_ = lean_ctor_get(v_cfg_563_, 8);
v_allowImportAll_576_ = lean_ctor_get_uint8(v_cfg_563_, sizeof(void*)*9 + 3);
v_isSharedCheck_584_ = !lean_is_exclusive(v_cfg_563_);
if (v_isSharedCheck_584_ == 0)
{
v___x_578_ = v_cfg_563_;
v_isShared_579_ = v_isSharedCheck_584_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_nativeFacets_575_);
lean_inc(v_defaultFacets_574_);
lean_inc(v_extraDepTargets_571_);
lean_inc(v_needs_570_);
lean_inc(v_libName_568_);
lean_inc(v_globs_567_);
lean_inc(v_roots_566_);
lean_inc(v_srcDir_565_);
lean_inc(v_toLeanConfig_564_);
lean_dec(v_cfg_563_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_584_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_580_; lean_object* v___x_582_; 
v___x_580_ = lean_apply_1(v_f_562_, v_extraDepTargets_571_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 6, v___x_580_);
v___x_582_ = v___x_578_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_toLeanConfig_564_);
lean_ctor_set(v_reuseFailAlloc_583_, 1, v_srcDir_565_);
lean_ctor_set(v_reuseFailAlloc_583_, 2, v_roots_566_);
lean_ctor_set(v_reuseFailAlloc_583_, 3, v_globs_567_);
lean_ctor_set(v_reuseFailAlloc_583_, 4, v_libName_568_);
lean_ctor_set(v_reuseFailAlloc_583_, 5, v_needs_570_);
lean_ctor_set(v_reuseFailAlloc_583_, 6, v___x_580_);
lean_ctor_set(v_reuseFailAlloc_583_, 7, v_defaultFacets_574_);
lean_ctor_set(v_reuseFailAlloc_583_, 8, v_nativeFacets_575_);
lean_ctor_set_uint8(v_reuseFailAlloc_583_, sizeof(void*)*9, v_libPrefixOnWindows_569_);
lean_ctor_set_uint8(v_reuseFailAlloc_583_, sizeof(void*)*9 + 1, v_precompileLibrary_572_);
lean_ctor_set_uint8(v_reuseFailAlloc_583_, sizeof(void*)*9 + 2, v_precompileModules_573_);
lean_ctor_set_uint8(v_reuseFailAlloc_583_, sizeof(void*)*9 + 3, v_allowImportAll_576_);
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
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__3(lean_object* v_x_587_){
_start:
{
lean_object* v___x_588_; 
v___x_588_ = ((lean_object*)(l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__3___closed__0));
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__3___boxed(lean_object* v_x_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___lam__3(v_x_589_);
lean_dec_ref(v_x_589_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg(){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = ((lean_object*)(l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___closed__4));
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___redArg___boxed(lean_object* v___dummy_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_Lake_LeanLibConfig_extraDepTargets___proj___redArg();
return v_res_603_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig_extraDepTargets___proj___closed__0(void){
_start:
{
lean_object* v___x_604_; 
v___x_604_ = l_Lake_LeanLibConfig_extraDepTargets___proj___redArg();
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj(lean_object* v_name_605_){
_start:
{
lean_object* v___x_606_; 
v___x_606_ = lean_obj_once(&l_Lake_LeanLibConfig_extraDepTargets___proj___closed__0, &l_Lake_LeanLibConfig_extraDepTargets___proj___closed__0_once, _init_l_Lake_LeanLibConfig_extraDepTargets___proj___closed__0);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets___proj___boxed(lean_object* v_name_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Lake_LeanLibConfig_extraDepTargets___proj(v_name_607_);
lean_dec(v_name_607_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets_instConfigField___redArg(){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = lean_obj_once(&l_Lake_LeanLibConfig_extraDepTargets___proj___closed__0, &l_Lake_LeanLibConfig_extraDepTargets___proj___closed__0_once, _init_l_Lake_LeanLibConfig_extraDepTargets___proj___closed__0);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets_instConfigField___redArg___boxed(lean_object* v___dummy_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lake_LeanLibConfig_extraDepTargets_instConfigField___redArg();
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets_instConfigField(lean_object* v_name_613_){
_start:
{
lean_object* v___x_614_; 
v___x_614_ = lean_obj_once(&l_Lake_LeanLibConfig_extraDepTargets___proj___closed__0, &l_Lake_LeanLibConfig_extraDepTargets___proj___closed__0_once, _init_l_Lake_LeanLibConfig_extraDepTargets___proj___closed__0);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_extraDepTargets_instConfigField___boxed(lean_object* v_name_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_Lake_LeanLibConfig_extraDepTargets_instConfigField(v_name_615_);
lean_dec(v_name_615_);
return v_res_616_;
}
}
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___lam__0(lean_object* v_cfg_617_){
_start:
{
uint8_t v_precompileLibrary_618_; 
v_precompileLibrary_618_ = lean_ctor_get_uint8(v_cfg_617_, sizeof(void*)*9 + 1);
return v_precompileLibrary_618_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___lam__0___boxed(lean_object* v_cfg_619_){
_start:
{
uint8_t v_res_620_; lean_object* v_r_621_; 
v_res_620_ = l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___lam__0(v_cfg_619_);
lean_dec_ref(v_cfg_619_);
v_r_621_ = lean_box(v_res_620_);
return v_r_621_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___lam__1(uint8_t v_val_622_, lean_object* v_cfg_623_){
_start:
{
lean_object* v_toLeanConfig_624_; lean_object* v_srcDir_625_; lean_object* v_roots_626_; lean_object* v_globs_627_; lean_object* v_libName_628_; uint8_t v_libPrefixOnWindows_629_; lean_object* v_needs_630_; lean_object* v_extraDepTargets_631_; uint8_t v_precompileModules_632_; lean_object* v_defaultFacets_633_; lean_object* v_nativeFacets_634_; uint8_t v_allowImportAll_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
v_toLeanConfig_624_ = lean_ctor_get(v_cfg_623_, 0);
v_srcDir_625_ = lean_ctor_get(v_cfg_623_, 1);
v_roots_626_ = lean_ctor_get(v_cfg_623_, 2);
v_globs_627_ = lean_ctor_get(v_cfg_623_, 3);
v_libName_628_ = lean_ctor_get(v_cfg_623_, 4);
v_libPrefixOnWindows_629_ = lean_ctor_get_uint8(v_cfg_623_, sizeof(void*)*9);
v_needs_630_ = lean_ctor_get(v_cfg_623_, 5);
v_extraDepTargets_631_ = lean_ctor_get(v_cfg_623_, 6);
v_precompileModules_632_ = lean_ctor_get_uint8(v_cfg_623_, sizeof(void*)*9 + 2);
v_defaultFacets_633_ = lean_ctor_get(v_cfg_623_, 7);
v_nativeFacets_634_ = lean_ctor_get(v_cfg_623_, 8);
v_allowImportAll_635_ = lean_ctor_get_uint8(v_cfg_623_, sizeof(void*)*9 + 3);
v_isSharedCheck_642_ = !lean_is_exclusive(v_cfg_623_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v_cfg_623_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_nativeFacets_634_);
lean_inc(v_defaultFacets_633_);
lean_inc(v_extraDepTargets_631_);
lean_inc(v_needs_630_);
lean_inc(v_libName_628_);
lean_inc(v_globs_627_);
lean_inc(v_roots_626_);
lean_inc(v_srcDir_625_);
lean_inc(v_toLeanConfig_624_);
lean_dec(v_cfg_623_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_toLeanConfig_624_);
lean_ctor_set(v_reuseFailAlloc_641_, 1, v_srcDir_625_);
lean_ctor_set(v_reuseFailAlloc_641_, 2, v_roots_626_);
lean_ctor_set(v_reuseFailAlloc_641_, 3, v_globs_627_);
lean_ctor_set(v_reuseFailAlloc_641_, 4, v_libName_628_);
lean_ctor_set(v_reuseFailAlloc_641_, 5, v_needs_630_);
lean_ctor_set(v_reuseFailAlloc_641_, 6, v_extraDepTargets_631_);
lean_ctor_set(v_reuseFailAlloc_641_, 7, v_defaultFacets_633_);
lean_ctor_set(v_reuseFailAlloc_641_, 8, v_nativeFacets_634_);
lean_ctor_set_uint8(v_reuseFailAlloc_641_, sizeof(void*)*9, v_libPrefixOnWindows_629_);
lean_ctor_set_uint8(v_reuseFailAlloc_641_, sizeof(void*)*9 + 2, v_precompileModules_632_);
lean_ctor_set_uint8(v_reuseFailAlloc_641_, sizeof(void*)*9 + 3, v_allowImportAll_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_ctor_set_uint8(v___x_640_, sizeof(void*)*9 + 1, v_val_622_);
return v___x_640_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___lam__1___boxed(lean_object* v_val_643_, lean_object* v_cfg_644_){
_start:
{
uint8_t v_val_75__boxed_645_; lean_object* v_res_646_; 
v_val_75__boxed_645_ = lean_unbox(v_val_643_);
v_res_646_ = l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___lam__1(v_val_75__boxed_645_, v_cfg_644_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___lam__2(lean_object* v_f_647_, lean_object* v_cfg_648_){
_start:
{
lean_object* v_toLeanConfig_649_; lean_object* v_srcDir_650_; lean_object* v_roots_651_; lean_object* v_globs_652_; lean_object* v_libName_653_; uint8_t v_libPrefixOnWindows_654_; lean_object* v_needs_655_; lean_object* v_extraDepTargets_656_; uint8_t v_precompileLibrary_657_; uint8_t v_precompileModules_658_; lean_object* v_defaultFacets_659_; lean_object* v_nativeFacets_660_; uint8_t v_allowImportAll_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_671_; 
v_toLeanConfig_649_ = lean_ctor_get(v_cfg_648_, 0);
v_srcDir_650_ = lean_ctor_get(v_cfg_648_, 1);
v_roots_651_ = lean_ctor_get(v_cfg_648_, 2);
v_globs_652_ = lean_ctor_get(v_cfg_648_, 3);
v_libName_653_ = lean_ctor_get(v_cfg_648_, 4);
v_libPrefixOnWindows_654_ = lean_ctor_get_uint8(v_cfg_648_, sizeof(void*)*9);
v_needs_655_ = lean_ctor_get(v_cfg_648_, 5);
v_extraDepTargets_656_ = lean_ctor_get(v_cfg_648_, 6);
v_precompileLibrary_657_ = lean_ctor_get_uint8(v_cfg_648_, sizeof(void*)*9 + 1);
v_precompileModules_658_ = lean_ctor_get_uint8(v_cfg_648_, sizeof(void*)*9 + 2);
v_defaultFacets_659_ = lean_ctor_get(v_cfg_648_, 7);
v_nativeFacets_660_ = lean_ctor_get(v_cfg_648_, 8);
v_allowImportAll_661_ = lean_ctor_get_uint8(v_cfg_648_, sizeof(void*)*9 + 3);
v_isSharedCheck_671_ = !lean_is_exclusive(v_cfg_648_);
if (v_isSharedCheck_671_ == 0)
{
v___x_663_ = v_cfg_648_;
v_isShared_664_ = v_isSharedCheck_671_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_nativeFacets_660_);
lean_inc(v_defaultFacets_659_);
lean_inc(v_extraDepTargets_656_);
lean_inc(v_needs_655_);
lean_inc(v_libName_653_);
lean_inc(v_globs_652_);
lean_inc(v_roots_651_);
lean_inc(v_srcDir_650_);
lean_inc(v_toLeanConfig_649_);
lean_dec(v_cfg_648_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_671_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_668_; 
v___x_665_ = lean_box(v_precompileLibrary_657_);
v___x_666_ = lean_apply_1(v_f_647_, v___x_665_);
if (v_isShared_664_ == 0)
{
v___x_668_ = v___x_663_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_toLeanConfig_649_);
lean_ctor_set(v_reuseFailAlloc_670_, 1, v_srcDir_650_);
lean_ctor_set(v_reuseFailAlloc_670_, 2, v_roots_651_);
lean_ctor_set(v_reuseFailAlloc_670_, 3, v_globs_652_);
lean_ctor_set(v_reuseFailAlloc_670_, 4, v_libName_653_);
lean_ctor_set(v_reuseFailAlloc_670_, 5, v_needs_655_);
lean_ctor_set(v_reuseFailAlloc_670_, 6, v_extraDepTargets_656_);
lean_ctor_set(v_reuseFailAlloc_670_, 7, v_defaultFacets_659_);
lean_ctor_set(v_reuseFailAlloc_670_, 8, v_nativeFacets_660_);
lean_ctor_set_uint8(v_reuseFailAlloc_670_, sizeof(void*)*9, v_libPrefixOnWindows_654_);
v___x_668_ = v_reuseFailAlloc_670_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
uint8_t v___x_669_; 
v___x_669_ = lean_unbox(v___x_666_);
lean_ctor_set_uint8(v___x_668_, sizeof(void*)*9 + 1, v___x_669_);
lean_ctor_set_uint8(v___x_668_, sizeof(void*)*9 + 2, v_precompileModules_658_);
lean_ctor_set_uint8(v___x_668_, sizeof(void*)*9 + 3, v_allowImportAll_661_);
return v___x_668_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___redArg(){
_start:
{
lean_object* v___x_681_; 
v___x_681_ = ((lean_object*)(l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___closed__3));
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___redArg___boxed(lean_object* v___dummy_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_Lake_LeanLibConfig_precompileLibrary___proj___redArg();
return v_res_683_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig_precompileLibrary___proj___closed__0(void){
_start:
{
lean_object* v___x_684_; 
v___x_684_ = l_Lake_LeanLibConfig_precompileLibrary___proj___redArg();
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj(lean_object* v_name_685_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = lean_obj_once(&l_Lake_LeanLibConfig_precompileLibrary___proj___closed__0, &l_Lake_LeanLibConfig_precompileLibrary___proj___closed__0_once, _init_l_Lake_LeanLibConfig_precompileLibrary___proj___closed__0);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary___proj___boxed(lean_object* v_name_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l_Lake_LeanLibConfig_precompileLibrary___proj(v_name_687_);
lean_dec(v_name_687_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary_instConfigField___redArg(){
_start:
{
lean_object* v___x_690_; 
v___x_690_ = lean_obj_once(&l_Lake_LeanLibConfig_precompileLibrary___proj___closed__0, &l_Lake_LeanLibConfig_precompileLibrary___proj___closed__0_once, _init_l_Lake_LeanLibConfig_precompileLibrary___proj___closed__0);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary_instConfigField___redArg___boxed(lean_object* v___dummy_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Lake_LeanLibConfig_precompileLibrary_instConfigField___redArg();
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary_instConfigField(lean_object* v_name_693_){
_start:
{
lean_object* v___x_694_; 
v___x_694_ = lean_obj_once(&l_Lake_LeanLibConfig_precompileLibrary___proj___closed__0, &l_Lake_LeanLibConfig_precompileLibrary___proj___closed__0_once, _init_l_Lake_LeanLibConfig_precompileLibrary___proj___closed__0);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileLibrary_instConfigField___boxed(lean_object* v_name_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l_Lake_LeanLibConfig_precompileLibrary_instConfigField(v_name_695_);
lean_dec(v_name_695_);
return v_res_696_;
}
}
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_precompileModules___proj___redArg___lam__0(lean_object* v_cfg_697_){
_start:
{
uint8_t v_precompileModules_698_; 
v_precompileModules_698_ = lean_ctor_get_uint8(v_cfg_697_, sizeof(void*)*9 + 2);
return v_precompileModules_698_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules___proj___redArg___lam__0___boxed(lean_object* v_cfg_699_){
_start:
{
uint8_t v_res_700_; lean_object* v_r_701_; 
v_res_700_ = l_Lake_LeanLibConfig_precompileModules___proj___redArg___lam__0(v_cfg_699_);
lean_dec_ref(v_cfg_699_);
v_r_701_ = lean_box(v_res_700_);
return v_r_701_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules___proj___redArg___lam__1(uint8_t v_val_702_, lean_object* v_cfg_703_){
_start:
{
lean_object* v_toLeanConfig_704_; lean_object* v_srcDir_705_; lean_object* v_roots_706_; lean_object* v_globs_707_; lean_object* v_libName_708_; uint8_t v_libPrefixOnWindows_709_; lean_object* v_needs_710_; lean_object* v_extraDepTargets_711_; uint8_t v_precompileLibrary_712_; lean_object* v_defaultFacets_713_; lean_object* v_nativeFacets_714_; uint8_t v_allowImportAll_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_722_; 
v_toLeanConfig_704_ = lean_ctor_get(v_cfg_703_, 0);
v_srcDir_705_ = lean_ctor_get(v_cfg_703_, 1);
v_roots_706_ = lean_ctor_get(v_cfg_703_, 2);
v_globs_707_ = lean_ctor_get(v_cfg_703_, 3);
v_libName_708_ = lean_ctor_get(v_cfg_703_, 4);
v_libPrefixOnWindows_709_ = lean_ctor_get_uint8(v_cfg_703_, sizeof(void*)*9);
v_needs_710_ = lean_ctor_get(v_cfg_703_, 5);
v_extraDepTargets_711_ = lean_ctor_get(v_cfg_703_, 6);
v_precompileLibrary_712_ = lean_ctor_get_uint8(v_cfg_703_, sizeof(void*)*9 + 1);
v_defaultFacets_713_ = lean_ctor_get(v_cfg_703_, 7);
v_nativeFacets_714_ = lean_ctor_get(v_cfg_703_, 8);
v_allowImportAll_715_ = lean_ctor_get_uint8(v_cfg_703_, sizeof(void*)*9 + 3);
v_isSharedCheck_722_ = !lean_is_exclusive(v_cfg_703_);
if (v_isSharedCheck_722_ == 0)
{
v___x_717_ = v_cfg_703_;
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_nativeFacets_714_);
lean_inc(v_defaultFacets_713_);
lean_inc(v_extraDepTargets_711_);
lean_inc(v_needs_710_);
lean_inc(v_libName_708_);
lean_inc(v_globs_707_);
lean_inc(v_roots_706_);
lean_inc(v_srcDir_705_);
lean_inc(v_toLeanConfig_704_);
lean_dec(v_cfg_703_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___x_720_; 
if (v_isShared_718_ == 0)
{
v___x_720_ = v___x_717_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v_toLeanConfig_704_);
lean_ctor_set(v_reuseFailAlloc_721_, 1, v_srcDir_705_);
lean_ctor_set(v_reuseFailAlloc_721_, 2, v_roots_706_);
lean_ctor_set(v_reuseFailAlloc_721_, 3, v_globs_707_);
lean_ctor_set(v_reuseFailAlloc_721_, 4, v_libName_708_);
lean_ctor_set(v_reuseFailAlloc_721_, 5, v_needs_710_);
lean_ctor_set(v_reuseFailAlloc_721_, 6, v_extraDepTargets_711_);
lean_ctor_set(v_reuseFailAlloc_721_, 7, v_defaultFacets_713_);
lean_ctor_set(v_reuseFailAlloc_721_, 8, v_nativeFacets_714_);
lean_ctor_set_uint8(v_reuseFailAlloc_721_, sizeof(void*)*9, v_libPrefixOnWindows_709_);
lean_ctor_set_uint8(v_reuseFailAlloc_721_, sizeof(void*)*9 + 1, v_precompileLibrary_712_);
lean_ctor_set_uint8(v_reuseFailAlloc_721_, sizeof(void*)*9 + 3, v_allowImportAll_715_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
lean_ctor_set_uint8(v___x_720_, sizeof(void*)*9 + 2, v_val_702_);
return v___x_720_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules___proj___redArg___lam__1___boxed(lean_object* v_val_723_, lean_object* v_cfg_724_){
_start:
{
uint8_t v_val_75__boxed_725_; lean_object* v_res_726_; 
v_val_75__boxed_725_ = lean_unbox(v_val_723_);
v_res_726_ = l_Lake_LeanLibConfig_precompileModules___proj___redArg___lam__1(v_val_75__boxed_725_, v_cfg_724_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules___proj___redArg___lam__2(lean_object* v_f_727_, lean_object* v_cfg_728_){
_start:
{
lean_object* v_toLeanConfig_729_; lean_object* v_srcDir_730_; lean_object* v_roots_731_; lean_object* v_globs_732_; lean_object* v_libName_733_; uint8_t v_libPrefixOnWindows_734_; lean_object* v_needs_735_; lean_object* v_extraDepTargets_736_; uint8_t v_precompileLibrary_737_; uint8_t v_precompileModules_738_; lean_object* v_defaultFacets_739_; lean_object* v_nativeFacets_740_; uint8_t v_allowImportAll_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_751_; 
v_toLeanConfig_729_ = lean_ctor_get(v_cfg_728_, 0);
v_srcDir_730_ = lean_ctor_get(v_cfg_728_, 1);
v_roots_731_ = lean_ctor_get(v_cfg_728_, 2);
v_globs_732_ = lean_ctor_get(v_cfg_728_, 3);
v_libName_733_ = lean_ctor_get(v_cfg_728_, 4);
v_libPrefixOnWindows_734_ = lean_ctor_get_uint8(v_cfg_728_, sizeof(void*)*9);
v_needs_735_ = lean_ctor_get(v_cfg_728_, 5);
v_extraDepTargets_736_ = lean_ctor_get(v_cfg_728_, 6);
v_precompileLibrary_737_ = lean_ctor_get_uint8(v_cfg_728_, sizeof(void*)*9 + 1);
v_precompileModules_738_ = lean_ctor_get_uint8(v_cfg_728_, sizeof(void*)*9 + 2);
v_defaultFacets_739_ = lean_ctor_get(v_cfg_728_, 7);
v_nativeFacets_740_ = lean_ctor_get(v_cfg_728_, 8);
v_allowImportAll_741_ = lean_ctor_get_uint8(v_cfg_728_, sizeof(void*)*9 + 3);
v_isSharedCheck_751_ = !lean_is_exclusive(v_cfg_728_);
if (v_isSharedCheck_751_ == 0)
{
v___x_743_ = v_cfg_728_;
v_isShared_744_ = v_isSharedCheck_751_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_nativeFacets_740_);
lean_inc(v_defaultFacets_739_);
lean_inc(v_extraDepTargets_736_);
lean_inc(v_needs_735_);
lean_inc(v_libName_733_);
lean_inc(v_globs_732_);
lean_inc(v_roots_731_);
lean_inc(v_srcDir_730_);
lean_inc(v_toLeanConfig_729_);
lean_dec(v_cfg_728_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_751_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_748_; 
v___x_745_ = lean_box(v_precompileModules_738_);
v___x_746_ = lean_apply_1(v_f_727_, v___x_745_);
if (v_isShared_744_ == 0)
{
v___x_748_ = v___x_743_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_toLeanConfig_729_);
lean_ctor_set(v_reuseFailAlloc_750_, 1, v_srcDir_730_);
lean_ctor_set(v_reuseFailAlloc_750_, 2, v_roots_731_);
lean_ctor_set(v_reuseFailAlloc_750_, 3, v_globs_732_);
lean_ctor_set(v_reuseFailAlloc_750_, 4, v_libName_733_);
lean_ctor_set(v_reuseFailAlloc_750_, 5, v_needs_735_);
lean_ctor_set(v_reuseFailAlloc_750_, 6, v_extraDepTargets_736_);
lean_ctor_set(v_reuseFailAlloc_750_, 7, v_defaultFacets_739_);
lean_ctor_set(v_reuseFailAlloc_750_, 8, v_nativeFacets_740_);
lean_ctor_set_uint8(v_reuseFailAlloc_750_, sizeof(void*)*9, v_libPrefixOnWindows_734_);
lean_ctor_set_uint8(v_reuseFailAlloc_750_, sizeof(void*)*9 + 1, v_precompileLibrary_737_);
v___x_748_ = v_reuseFailAlloc_750_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
uint8_t v___x_749_; 
v___x_749_ = lean_unbox(v___x_746_);
lean_ctor_set_uint8(v___x_748_, sizeof(void*)*9 + 2, v___x_749_);
lean_ctor_set_uint8(v___x_748_, sizeof(void*)*9 + 3, v_allowImportAll_741_);
return v___x_748_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules___proj___redArg(){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = ((lean_object*)(l_Lake_LeanLibConfig_precompileModules___proj___redArg___closed__3));
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules___proj___redArg___boxed(lean_object* v___dummy_762_){
_start:
{
lean_object* v_res_763_; 
v_res_763_ = l_Lake_LeanLibConfig_precompileModules___proj___redArg();
return v_res_763_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig_precompileModules___proj___closed__0(void){
_start:
{
lean_object* v___x_764_; 
v___x_764_ = l_Lake_LeanLibConfig_precompileModules___proj___redArg();
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules___proj(lean_object* v_name_765_){
_start:
{
lean_object* v___x_766_; 
v___x_766_ = lean_obj_once(&l_Lake_LeanLibConfig_precompileModules___proj___closed__0, &l_Lake_LeanLibConfig_precompileModules___proj___closed__0_once, _init_l_Lake_LeanLibConfig_precompileModules___proj___closed__0);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules___proj___boxed(lean_object* v_name_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l_Lake_LeanLibConfig_precompileModules___proj(v_name_767_);
lean_dec(v_name_767_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules_instConfigField___redArg(){
_start:
{
lean_object* v___x_770_; 
v___x_770_ = lean_obj_once(&l_Lake_LeanLibConfig_precompileModules___proj___closed__0, &l_Lake_LeanLibConfig_precompileModules___proj___closed__0_once, _init_l_Lake_LeanLibConfig_precompileModules___proj___closed__0);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules_instConfigField___redArg___boxed(lean_object* v___dummy_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Lake_LeanLibConfig_precompileModules_instConfigField___redArg();
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules_instConfigField(lean_object* v_name_773_){
_start:
{
lean_object* v___x_774_; 
v___x_774_ = lean_obj_once(&l_Lake_LeanLibConfig_precompileModules___proj___closed__0, &l_Lake_LeanLibConfig_precompileModules___proj___closed__0_once, _init_l_Lake_LeanLibConfig_precompileModules___proj___closed__0);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_precompileModules_instConfigField___boxed(lean_object* v_name_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l_Lake_LeanLibConfig_precompileModules_instConfigField(v_name_775_);
lean_dec(v_name_775_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__0(lean_object* v_cfg_777_){
_start:
{
lean_object* v_defaultFacets_778_; 
v_defaultFacets_778_ = lean_ctor_get(v_cfg_777_, 7);
lean_inc_ref(v_defaultFacets_778_);
return v_defaultFacets_778_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__0___boxed(lean_object* v_cfg_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__0(v_cfg_779_);
lean_dec_ref(v_cfg_779_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__1(lean_object* v_val_781_, lean_object* v_cfg_782_){
_start:
{
lean_object* v_toLeanConfig_783_; lean_object* v_srcDir_784_; lean_object* v_roots_785_; lean_object* v_globs_786_; lean_object* v_libName_787_; uint8_t v_libPrefixOnWindows_788_; lean_object* v_needs_789_; lean_object* v_extraDepTargets_790_; uint8_t v_precompileLibrary_791_; uint8_t v_precompileModules_792_; lean_object* v_nativeFacets_793_; uint8_t v_allowImportAll_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_801_; 
v_toLeanConfig_783_ = lean_ctor_get(v_cfg_782_, 0);
v_srcDir_784_ = lean_ctor_get(v_cfg_782_, 1);
v_roots_785_ = lean_ctor_get(v_cfg_782_, 2);
v_globs_786_ = lean_ctor_get(v_cfg_782_, 3);
v_libName_787_ = lean_ctor_get(v_cfg_782_, 4);
v_libPrefixOnWindows_788_ = lean_ctor_get_uint8(v_cfg_782_, sizeof(void*)*9);
v_needs_789_ = lean_ctor_get(v_cfg_782_, 5);
v_extraDepTargets_790_ = lean_ctor_get(v_cfg_782_, 6);
v_precompileLibrary_791_ = lean_ctor_get_uint8(v_cfg_782_, sizeof(void*)*9 + 1);
v_precompileModules_792_ = lean_ctor_get_uint8(v_cfg_782_, sizeof(void*)*9 + 2);
v_nativeFacets_793_ = lean_ctor_get(v_cfg_782_, 8);
v_allowImportAll_794_ = lean_ctor_get_uint8(v_cfg_782_, sizeof(void*)*9 + 3);
v_isSharedCheck_801_ = !lean_is_exclusive(v_cfg_782_);
if (v_isSharedCheck_801_ == 0)
{
lean_object* v_unused_802_; 
v_unused_802_ = lean_ctor_get(v_cfg_782_, 7);
lean_dec(v_unused_802_);
v___x_796_ = v_cfg_782_;
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_nativeFacets_793_);
lean_inc(v_extraDepTargets_790_);
lean_inc(v_needs_789_);
lean_inc(v_libName_787_);
lean_inc(v_globs_786_);
lean_inc(v_roots_785_);
lean_inc(v_srcDir_784_);
lean_inc(v_toLeanConfig_783_);
lean_dec(v_cfg_782_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 7, v_val_781_);
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_toLeanConfig_783_);
lean_ctor_set(v_reuseFailAlloc_800_, 1, v_srcDir_784_);
lean_ctor_set(v_reuseFailAlloc_800_, 2, v_roots_785_);
lean_ctor_set(v_reuseFailAlloc_800_, 3, v_globs_786_);
lean_ctor_set(v_reuseFailAlloc_800_, 4, v_libName_787_);
lean_ctor_set(v_reuseFailAlloc_800_, 5, v_needs_789_);
lean_ctor_set(v_reuseFailAlloc_800_, 6, v_extraDepTargets_790_);
lean_ctor_set(v_reuseFailAlloc_800_, 7, v_val_781_);
lean_ctor_set(v_reuseFailAlloc_800_, 8, v_nativeFacets_793_);
lean_ctor_set_uint8(v_reuseFailAlloc_800_, sizeof(void*)*9, v_libPrefixOnWindows_788_);
lean_ctor_set_uint8(v_reuseFailAlloc_800_, sizeof(void*)*9 + 1, v_precompileLibrary_791_);
lean_ctor_set_uint8(v_reuseFailAlloc_800_, sizeof(void*)*9 + 2, v_precompileModules_792_);
lean_ctor_set_uint8(v_reuseFailAlloc_800_, sizeof(void*)*9 + 3, v_allowImportAll_794_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__2(lean_object* v_f_803_, lean_object* v_cfg_804_){
_start:
{
lean_object* v_toLeanConfig_805_; lean_object* v_srcDir_806_; lean_object* v_roots_807_; lean_object* v_globs_808_; lean_object* v_libName_809_; uint8_t v_libPrefixOnWindows_810_; lean_object* v_needs_811_; lean_object* v_extraDepTargets_812_; uint8_t v_precompileLibrary_813_; uint8_t v_precompileModules_814_; lean_object* v_defaultFacets_815_; lean_object* v_nativeFacets_816_; uint8_t v_allowImportAll_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_825_; 
v_toLeanConfig_805_ = lean_ctor_get(v_cfg_804_, 0);
v_srcDir_806_ = lean_ctor_get(v_cfg_804_, 1);
v_roots_807_ = lean_ctor_get(v_cfg_804_, 2);
v_globs_808_ = lean_ctor_get(v_cfg_804_, 3);
v_libName_809_ = lean_ctor_get(v_cfg_804_, 4);
v_libPrefixOnWindows_810_ = lean_ctor_get_uint8(v_cfg_804_, sizeof(void*)*9);
v_needs_811_ = lean_ctor_get(v_cfg_804_, 5);
v_extraDepTargets_812_ = lean_ctor_get(v_cfg_804_, 6);
v_precompileLibrary_813_ = lean_ctor_get_uint8(v_cfg_804_, sizeof(void*)*9 + 1);
v_precompileModules_814_ = lean_ctor_get_uint8(v_cfg_804_, sizeof(void*)*9 + 2);
v_defaultFacets_815_ = lean_ctor_get(v_cfg_804_, 7);
v_nativeFacets_816_ = lean_ctor_get(v_cfg_804_, 8);
v_allowImportAll_817_ = lean_ctor_get_uint8(v_cfg_804_, sizeof(void*)*9 + 3);
v_isSharedCheck_825_ = !lean_is_exclusive(v_cfg_804_);
if (v_isSharedCheck_825_ == 0)
{
v___x_819_ = v_cfg_804_;
v_isShared_820_ = v_isSharedCheck_825_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_nativeFacets_816_);
lean_inc(v_defaultFacets_815_);
lean_inc(v_extraDepTargets_812_);
lean_inc(v_needs_811_);
lean_inc(v_libName_809_);
lean_inc(v_globs_808_);
lean_inc(v_roots_807_);
lean_inc(v_srcDir_806_);
lean_inc(v_toLeanConfig_805_);
lean_dec(v_cfg_804_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_825_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v___x_821_; lean_object* v___x_823_; 
v___x_821_ = lean_apply_1(v_f_803_, v_defaultFacets_815_);
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 7, v___x_821_);
v___x_823_ = v___x_819_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_toLeanConfig_805_);
lean_ctor_set(v_reuseFailAlloc_824_, 1, v_srcDir_806_);
lean_ctor_set(v_reuseFailAlloc_824_, 2, v_roots_807_);
lean_ctor_set(v_reuseFailAlloc_824_, 3, v_globs_808_);
lean_ctor_set(v_reuseFailAlloc_824_, 4, v_libName_809_);
lean_ctor_set(v_reuseFailAlloc_824_, 5, v_needs_811_);
lean_ctor_set(v_reuseFailAlloc_824_, 6, v_extraDepTargets_812_);
lean_ctor_set(v_reuseFailAlloc_824_, 7, v___x_821_);
lean_ctor_set(v_reuseFailAlloc_824_, 8, v_nativeFacets_816_);
lean_ctor_set_uint8(v_reuseFailAlloc_824_, sizeof(void*)*9, v_libPrefixOnWindows_810_);
lean_ctor_set_uint8(v_reuseFailAlloc_824_, sizeof(void*)*9 + 1, v_precompileLibrary_813_);
lean_ctor_set_uint8(v_reuseFailAlloc_824_, sizeof(void*)*9 + 2, v_precompileModules_814_);
lean_ctor_set_uint8(v_reuseFailAlloc_824_, sizeof(void*)*9 + 3, v_allowImportAll_817_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__3(lean_object* v_x_826_){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_827_ = lean_unsigned_to_nat(1u);
v___x_828_ = lean_mk_empty_array_with_capacity(v___x_827_);
lean_dec_ref(v___x_828_);
v___x_829_ = lean_obj_once(&l_Lake_instInhabitedLeanLibConfig_default___closed__4, &l_Lake_instInhabitedLeanLibConfig_default___closed__4_once, _init_l_Lake_instInhabitedLeanLibConfig_default___closed__4);
return v___x_829_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__3___boxed(lean_object* v_x_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l_Lake_LeanLibConfig_defaultFacets___proj___redArg___lam__3(v_x_830_);
lean_dec_ref(v_x_830_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg(){
_start:
{
lean_object* v___x_842_; 
v___x_842_ = ((lean_object*)(l_Lake_LeanLibConfig_defaultFacets___proj___redArg___closed__4));
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___redArg___boxed(lean_object* v___dummy_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_Lake_LeanLibConfig_defaultFacets___proj___redArg();
return v_res_844_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig_defaultFacets___proj___closed__0(void){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = l_Lake_LeanLibConfig_defaultFacets___proj___redArg();
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj(lean_object* v_name_846_){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = lean_obj_once(&l_Lake_LeanLibConfig_defaultFacets___proj___closed__0, &l_Lake_LeanLibConfig_defaultFacets___proj___closed__0_once, _init_l_Lake_LeanLibConfig_defaultFacets___proj___closed__0);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets___proj___boxed(lean_object* v_name_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l_Lake_LeanLibConfig_defaultFacets___proj(v_name_848_);
lean_dec(v_name_848_);
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets_instConfigField___redArg(){
_start:
{
lean_object* v___x_851_; 
v___x_851_ = lean_obj_once(&l_Lake_LeanLibConfig_defaultFacets___proj___closed__0, &l_Lake_LeanLibConfig_defaultFacets___proj___closed__0_once, _init_l_Lake_LeanLibConfig_defaultFacets___proj___closed__0);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets_instConfigField___redArg___boxed(lean_object* v___dummy_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lake_LeanLibConfig_defaultFacets_instConfigField___redArg();
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets_instConfigField(lean_object* v_name_854_){
_start:
{
lean_object* v___x_855_; 
v___x_855_ = lean_obj_once(&l_Lake_LeanLibConfig_defaultFacets___proj___closed__0, &l_Lake_LeanLibConfig_defaultFacets___proj___closed__0_once, _init_l_Lake_LeanLibConfig_defaultFacets___proj___closed__0);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_defaultFacets_instConfigField___boxed(lean_object* v_name_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_Lake_LeanLibConfig_defaultFacets_instConfigField(v_name_856_);
lean_dec(v_name_856_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__0(lean_object* v_cfg_858_, uint8_t v___y_859_){
_start:
{
lean_object* v_nativeFacets_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v_nativeFacets_860_ = lean_ctor_get(v_cfg_858_, 8);
lean_inc_ref(v_nativeFacets_860_);
lean_dec_ref(v_cfg_858_);
v___x_861_ = lean_box(v___y_859_);
v___x_862_ = lean_apply_1(v_nativeFacets_860_, v___x_861_);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__0___boxed(lean_object* v_cfg_863_, lean_object* v___y_864_){
_start:
{
uint8_t v___y_130__boxed_865_; lean_object* v_res_866_; 
v___y_130__boxed_865_ = lean_unbox(v___y_864_);
v_res_866_ = l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__0(v_cfg_863_, v___y_130__boxed_865_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__1(lean_object* v_val_867_, lean_object* v_cfg_868_){
_start:
{
lean_object* v_toLeanConfig_869_; lean_object* v_srcDir_870_; lean_object* v_roots_871_; lean_object* v_globs_872_; lean_object* v_libName_873_; uint8_t v_libPrefixOnWindows_874_; lean_object* v_needs_875_; lean_object* v_extraDepTargets_876_; uint8_t v_precompileLibrary_877_; uint8_t v_precompileModules_878_; lean_object* v_defaultFacets_879_; uint8_t v_allowImportAll_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_887_; 
v_toLeanConfig_869_ = lean_ctor_get(v_cfg_868_, 0);
v_srcDir_870_ = lean_ctor_get(v_cfg_868_, 1);
v_roots_871_ = lean_ctor_get(v_cfg_868_, 2);
v_globs_872_ = lean_ctor_get(v_cfg_868_, 3);
v_libName_873_ = lean_ctor_get(v_cfg_868_, 4);
v_libPrefixOnWindows_874_ = lean_ctor_get_uint8(v_cfg_868_, sizeof(void*)*9);
v_needs_875_ = lean_ctor_get(v_cfg_868_, 5);
v_extraDepTargets_876_ = lean_ctor_get(v_cfg_868_, 6);
v_precompileLibrary_877_ = lean_ctor_get_uint8(v_cfg_868_, sizeof(void*)*9 + 1);
v_precompileModules_878_ = lean_ctor_get_uint8(v_cfg_868_, sizeof(void*)*9 + 2);
v_defaultFacets_879_ = lean_ctor_get(v_cfg_868_, 7);
v_allowImportAll_880_ = lean_ctor_get_uint8(v_cfg_868_, sizeof(void*)*9 + 3);
v_isSharedCheck_887_ = !lean_is_exclusive(v_cfg_868_);
if (v_isSharedCheck_887_ == 0)
{
lean_object* v_unused_888_; 
v_unused_888_ = lean_ctor_get(v_cfg_868_, 8);
lean_dec(v_unused_888_);
v___x_882_ = v_cfg_868_;
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_defaultFacets_879_);
lean_inc(v_extraDepTargets_876_);
lean_inc(v_needs_875_);
lean_inc(v_libName_873_);
lean_inc(v_globs_872_);
lean_inc(v_roots_871_);
lean_inc(v_srcDir_870_);
lean_inc(v_toLeanConfig_869_);
lean_dec(v_cfg_868_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_885_; 
if (v_isShared_883_ == 0)
{
lean_ctor_set(v___x_882_, 8, v_val_867_);
v___x_885_ = v___x_882_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_toLeanConfig_869_);
lean_ctor_set(v_reuseFailAlloc_886_, 1, v_srcDir_870_);
lean_ctor_set(v_reuseFailAlloc_886_, 2, v_roots_871_);
lean_ctor_set(v_reuseFailAlloc_886_, 3, v_globs_872_);
lean_ctor_set(v_reuseFailAlloc_886_, 4, v_libName_873_);
lean_ctor_set(v_reuseFailAlloc_886_, 5, v_needs_875_);
lean_ctor_set(v_reuseFailAlloc_886_, 6, v_extraDepTargets_876_);
lean_ctor_set(v_reuseFailAlloc_886_, 7, v_defaultFacets_879_);
lean_ctor_set(v_reuseFailAlloc_886_, 8, v_val_867_);
lean_ctor_set_uint8(v_reuseFailAlloc_886_, sizeof(void*)*9, v_libPrefixOnWindows_874_);
lean_ctor_set_uint8(v_reuseFailAlloc_886_, sizeof(void*)*9 + 1, v_precompileLibrary_877_);
lean_ctor_set_uint8(v_reuseFailAlloc_886_, sizeof(void*)*9 + 2, v_precompileModules_878_);
lean_ctor_set_uint8(v_reuseFailAlloc_886_, sizeof(void*)*9 + 3, v_allowImportAll_880_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__2(lean_object* v_f_889_, lean_object* v_cfg_890_){
_start:
{
lean_object* v_toLeanConfig_891_; lean_object* v_srcDir_892_; lean_object* v_roots_893_; lean_object* v_globs_894_; lean_object* v_libName_895_; uint8_t v_libPrefixOnWindows_896_; lean_object* v_needs_897_; lean_object* v_extraDepTargets_898_; uint8_t v_precompileLibrary_899_; uint8_t v_precompileModules_900_; lean_object* v_defaultFacets_901_; lean_object* v_nativeFacets_902_; uint8_t v_allowImportAll_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_911_; 
v_toLeanConfig_891_ = lean_ctor_get(v_cfg_890_, 0);
v_srcDir_892_ = lean_ctor_get(v_cfg_890_, 1);
v_roots_893_ = lean_ctor_get(v_cfg_890_, 2);
v_globs_894_ = lean_ctor_get(v_cfg_890_, 3);
v_libName_895_ = lean_ctor_get(v_cfg_890_, 4);
v_libPrefixOnWindows_896_ = lean_ctor_get_uint8(v_cfg_890_, sizeof(void*)*9);
v_needs_897_ = lean_ctor_get(v_cfg_890_, 5);
v_extraDepTargets_898_ = lean_ctor_get(v_cfg_890_, 6);
v_precompileLibrary_899_ = lean_ctor_get_uint8(v_cfg_890_, sizeof(void*)*9 + 1);
v_precompileModules_900_ = lean_ctor_get_uint8(v_cfg_890_, sizeof(void*)*9 + 2);
v_defaultFacets_901_ = lean_ctor_get(v_cfg_890_, 7);
v_nativeFacets_902_ = lean_ctor_get(v_cfg_890_, 8);
v_allowImportAll_903_ = lean_ctor_get_uint8(v_cfg_890_, sizeof(void*)*9 + 3);
v_isSharedCheck_911_ = !lean_is_exclusive(v_cfg_890_);
if (v_isSharedCheck_911_ == 0)
{
v___x_905_ = v_cfg_890_;
v_isShared_906_ = v_isSharedCheck_911_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_nativeFacets_902_);
lean_inc(v_defaultFacets_901_);
lean_inc(v_extraDepTargets_898_);
lean_inc(v_needs_897_);
lean_inc(v_libName_895_);
lean_inc(v_globs_894_);
lean_inc(v_roots_893_);
lean_inc(v_srcDir_892_);
lean_inc(v_toLeanConfig_891_);
lean_dec(v_cfg_890_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_911_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_907_; lean_object* v___x_909_; 
v___x_907_ = lean_apply_1(v_f_889_, v_nativeFacets_902_);
if (v_isShared_906_ == 0)
{
lean_ctor_set(v___x_905_, 8, v___x_907_);
v___x_909_ = v___x_905_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_toLeanConfig_891_);
lean_ctor_set(v_reuseFailAlloc_910_, 1, v_srcDir_892_);
lean_ctor_set(v_reuseFailAlloc_910_, 2, v_roots_893_);
lean_ctor_set(v_reuseFailAlloc_910_, 3, v_globs_894_);
lean_ctor_set(v_reuseFailAlloc_910_, 4, v_libName_895_);
lean_ctor_set(v_reuseFailAlloc_910_, 5, v_needs_897_);
lean_ctor_set(v_reuseFailAlloc_910_, 6, v_extraDepTargets_898_);
lean_ctor_set(v_reuseFailAlloc_910_, 7, v_defaultFacets_901_);
lean_ctor_set(v_reuseFailAlloc_910_, 8, v___x_907_);
lean_ctor_set_uint8(v_reuseFailAlloc_910_, sizeof(void*)*9, v_libPrefixOnWindows_896_);
lean_ctor_set_uint8(v_reuseFailAlloc_910_, sizeof(void*)*9 + 1, v_precompileLibrary_899_);
lean_ctor_set_uint8(v_reuseFailAlloc_910_, sizeof(void*)*9 + 2, v_precompileModules_900_);
lean_ctor_set_uint8(v_reuseFailAlloc_910_, sizeof(void*)*9 + 3, v_allowImportAll_903_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__3(lean_object* v_x_912_, uint8_t v___y_913_){
_start:
{
lean_object* v___y_915_; 
if (v___y_913_ == 0)
{
lean_object* v___x_919_; 
v___x_919_ = l_Lake_Module_oFacet;
v___y_915_ = v___x_919_;
goto v___jp_914_;
}
else
{
lean_object* v___x_920_; 
v___x_920_ = l_Lake_Module_oExportFacet;
v___y_915_ = v___x_920_;
goto v___jp_914_;
}
v___jp_914_:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_916_ = lean_unsigned_to_nat(1u);
v___x_917_ = lean_mk_empty_array_with_capacity(v___x_916_);
lean_inc(v___y_915_);
v___x_918_ = lean_array_push(v___x_917_, v___y_915_);
return v___x_918_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__3___boxed(lean_object* v_x_921_, lean_object* v___y_922_){
_start:
{
uint8_t v___y_180__boxed_923_; lean_object* v_res_924_; 
v___y_180__boxed_923_ = lean_unbox(v___y_922_);
v_res_924_ = l_Lake_LeanLibConfig_nativeFacets___proj___redArg___lam__3(v_x_921_, v___y_180__boxed_923_);
lean_dec_ref(v_x_921_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg(){
_start:
{
lean_object* v___x_935_; 
v___x_935_ = ((lean_object*)(l_Lake_LeanLibConfig_nativeFacets___proj___redArg___closed__4));
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___redArg___boxed(lean_object* v___dummy_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lake_LeanLibConfig_nativeFacets___proj___redArg();
return v_res_937_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig_nativeFacets___proj___closed__0(void){
_start:
{
lean_object* v___x_938_; 
v___x_938_ = l_Lake_LeanLibConfig_nativeFacets___proj___redArg();
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj(lean_object* v_name_939_){
_start:
{
lean_object* v___x_940_; 
v___x_940_ = lean_obj_once(&l_Lake_LeanLibConfig_nativeFacets___proj___closed__0, &l_Lake_LeanLibConfig_nativeFacets___proj___closed__0_once, _init_l_Lake_LeanLibConfig_nativeFacets___proj___closed__0);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets___proj___boxed(lean_object* v_name_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Lake_LeanLibConfig_nativeFacets___proj(v_name_941_);
lean_dec(v_name_941_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets_instConfigField___redArg(){
_start:
{
lean_object* v___x_944_; 
v___x_944_ = lean_obj_once(&l_Lake_LeanLibConfig_nativeFacets___proj___closed__0, &l_Lake_LeanLibConfig_nativeFacets___proj___closed__0_once, _init_l_Lake_LeanLibConfig_nativeFacets___proj___closed__0);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets_instConfigField___redArg___boxed(lean_object* v___dummy_945_){
_start:
{
lean_object* v_res_946_; 
v_res_946_ = l_Lake_LeanLibConfig_nativeFacets_instConfigField___redArg();
return v_res_946_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets_instConfigField(lean_object* v_name_947_){
_start:
{
lean_object* v___x_948_; 
v___x_948_ = lean_obj_once(&l_Lake_LeanLibConfig_nativeFacets___proj___closed__0, &l_Lake_LeanLibConfig_nativeFacets___proj___closed__0_once, _init_l_Lake_LeanLibConfig_nativeFacets___proj___closed__0);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_nativeFacets_instConfigField___boxed(lean_object* v_name_949_){
_start:
{
lean_object* v_res_950_; 
v_res_950_ = l_Lake_LeanLibConfig_nativeFacets_instConfigField(v_name_949_);
lean_dec(v_name_949_);
return v_res_950_;
}
}
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_allowImportAll___proj___redArg___lam__0(lean_object* v_cfg_951_){
_start:
{
uint8_t v_allowImportAll_952_; 
v_allowImportAll_952_ = lean_ctor_get_uint8(v_cfg_951_, sizeof(void*)*9 + 3);
return v_allowImportAll_952_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___redArg___lam__0___boxed(lean_object* v_cfg_953_){
_start:
{
uint8_t v_res_954_; lean_object* v_r_955_; 
v_res_954_ = l_Lake_LeanLibConfig_allowImportAll___proj___redArg___lam__0(v_cfg_953_);
lean_dec_ref(v_cfg_953_);
v_r_955_ = lean_box(v_res_954_);
return v_r_955_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___redArg___lam__1(uint8_t v_val_956_, lean_object* v_cfg_957_){
_start:
{
lean_object* v_toLeanConfig_958_; lean_object* v_srcDir_959_; lean_object* v_roots_960_; lean_object* v_globs_961_; lean_object* v_libName_962_; uint8_t v_libPrefixOnWindows_963_; lean_object* v_needs_964_; lean_object* v_extraDepTargets_965_; uint8_t v_precompileLibrary_966_; uint8_t v_precompileModules_967_; lean_object* v_defaultFacets_968_; lean_object* v_nativeFacets_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_976_; 
v_toLeanConfig_958_ = lean_ctor_get(v_cfg_957_, 0);
v_srcDir_959_ = lean_ctor_get(v_cfg_957_, 1);
v_roots_960_ = lean_ctor_get(v_cfg_957_, 2);
v_globs_961_ = lean_ctor_get(v_cfg_957_, 3);
v_libName_962_ = lean_ctor_get(v_cfg_957_, 4);
v_libPrefixOnWindows_963_ = lean_ctor_get_uint8(v_cfg_957_, sizeof(void*)*9);
v_needs_964_ = lean_ctor_get(v_cfg_957_, 5);
v_extraDepTargets_965_ = lean_ctor_get(v_cfg_957_, 6);
v_precompileLibrary_966_ = lean_ctor_get_uint8(v_cfg_957_, sizeof(void*)*9 + 1);
v_precompileModules_967_ = lean_ctor_get_uint8(v_cfg_957_, sizeof(void*)*9 + 2);
v_defaultFacets_968_ = lean_ctor_get(v_cfg_957_, 7);
v_nativeFacets_969_ = lean_ctor_get(v_cfg_957_, 8);
v_isSharedCheck_976_ = !lean_is_exclusive(v_cfg_957_);
if (v_isSharedCheck_976_ == 0)
{
v___x_971_ = v_cfg_957_;
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_nativeFacets_969_);
lean_inc(v_defaultFacets_968_);
lean_inc(v_extraDepTargets_965_);
lean_inc(v_needs_964_);
lean_inc(v_libName_962_);
lean_inc(v_globs_961_);
lean_inc(v_roots_960_);
lean_inc(v_srcDir_959_);
lean_inc(v_toLeanConfig_958_);
lean_dec(v_cfg_957_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_974_; 
if (v_isShared_972_ == 0)
{
v___x_974_ = v___x_971_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_toLeanConfig_958_);
lean_ctor_set(v_reuseFailAlloc_975_, 1, v_srcDir_959_);
lean_ctor_set(v_reuseFailAlloc_975_, 2, v_roots_960_);
lean_ctor_set(v_reuseFailAlloc_975_, 3, v_globs_961_);
lean_ctor_set(v_reuseFailAlloc_975_, 4, v_libName_962_);
lean_ctor_set(v_reuseFailAlloc_975_, 5, v_needs_964_);
lean_ctor_set(v_reuseFailAlloc_975_, 6, v_extraDepTargets_965_);
lean_ctor_set(v_reuseFailAlloc_975_, 7, v_defaultFacets_968_);
lean_ctor_set(v_reuseFailAlloc_975_, 8, v_nativeFacets_969_);
lean_ctor_set_uint8(v_reuseFailAlloc_975_, sizeof(void*)*9, v_libPrefixOnWindows_963_);
lean_ctor_set_uint8(v_reuseFailAlloc_975_, sizeof(void*)*9 + 1, v_precompileLibrary_966_);
lean_ctor_set_uint8(v_reuseFailAlloc_975_, sizeof(void*)*9 + 2, v_precompileModules_967_);
v___x_974_ = v_reuseFailAlloc_975_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
lean_ctor_set_uint8(v___x_974_, sizeof(void*)*9 + 3, v_val_956_);
return v___x_974_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___redArg___lam__1___boxed(lean_object* v_val_977_, lean_object* v_cfg_978_){
_start:
{
uint8_t v_val_75__boxed_979_; lean_object* v_res_980_; 
v_val_75__boxed_979_ = lean_unbox(v_val_977_);
v_res_980_ = l_Lake_LeanLibConfig_allowImportAll___proj___redArg___lam__1(v_val_75__boxed_979_, v_cfg_978_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___redArg___lam__2(lean_object* v_f_981_, lean_object* v_cfg_982_){
_start:
{
lean_object* v_toLeanConfig_983_; lean_object* v_srcDir_984_; lean_object* v_roots_985_; lean_object* v_globs_986_; lean_object* v_libName_987_; uint8_t v_libPrefixOnWindows_988_; lean_object* v_needs_989_; lean_object* v_extraDepTargets_990_; uint8_t v_precompileLibrary_991_; uint8_t v_precompileModules_992_; lean_object* v_defaultFacets_993_; lean_object* v_nativeFacets_994_; uint8_t v_allowImportAll_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1005_; 
v_toLeanConfig_983_ = lean_ctor_get(v_cfg_982_, 0);
v_srcDir_984_ = lean_ctor_get(v_cfg_982_, 1);
v_roots_985_ = lean_ctor_get(v_cfg_982_, 2);
v_globs_986_ = lean_ctor_get(v_cfg_982_, 3);
v_libName_987_ = lean_ctor_get(v_cfg_982_, 4);
v_libPrefixOnWindows_988_ = lean_ctor_get_uint8(v_cfg_982_, sizeof(void*)*9);
v_needs_989_ = lean_ctor_get(v_cfg_982_, 5);
v_extraDepTargets_990_ = lean_ctor_get(v_cfg_982_, 6);
v_precompileLibrary_991_ = lean_ctor_get_uint8(v_cfg_982_, sizeof(void*)*9 + 1);
v_precompileModules_992_ = lean_ctor_get_uint8(v_cfg_982_, sizeof(void*)*9 + 2);
v_defaultFacets_993_ = lean_ctor_get(v_cfg_982_, 7);
v_nativeFacets_994_ = lean_ctor_get(v_cfg_982_, 8);
v_allowImportAll_995_ = lean_ctor_get_uint8(v_cfg_982_, sizeof(void*)*9 + 3);
v_isSharedCheck_1005_ = !lean_is_exclusive(v_cfg_982_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_997_ = v_cfg_982_;
v_isShared_998_ = v_isSharedCheck_1005_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_nativeFacets_994_);
lean_inc(v_defaultFacets_993_);
lean_inc(v_extraDepTargets_990_);
lean_inc(v_needs_989_);
lean_inc(v_libName_987_);
lean_inc(v_globs_986_);
lean_inc(v_roots_985_);
lean_inc(v_srcDir_984_);
lean_inc(v_toLeanConfig_983_);
lean_dec(v_cfg_982_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1005_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1002_; 
v___x_999_ = lean_box(v_allowImportAll_995_);
v___x_1000_ = lean_apply_1(v_f_981_, v___x_999_);
if (v_isShared_998_ == 0)
{
v___x_1002_ = v___x_997_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_toLeanConfig_983_);
lean_ctor_set(v_reuseFailAlloc_1004_, 1, v_srcDir_984_);
lean_ctor_set(v_reuseFailAlloc_1004_, 2, v_roots_985_);
lean_ctor_set(v_reuseFailAlloc_1004_, 3, v_globs_986_);
lean_ctor_set(v_reuseFailAlloc_1004_, 4, v_libName_987_);
lean_ctor_set(v_reuseFailAlloc_1004_, 5, v_needs_989_);
lean_ctor_set(v_reuseFailAlloc_1004_, 6, v_extraDepTargets_990_);
lean_ctor_set(v_reuseFailAlloc_1004_, 7, v_defaultFacets_993_);
lean_ctor_set(v_reuseFailAlloc_1004_, 8, v_nativeFacets_994_);
lean_ctor_set_uint8(v_reuseFailAlloc_1004_, sizeof(void*)*9, v_libPrefixOnWindows_988_);
lean_ctor_set_uint8(v_reuseFailAlloc_1004_, sizeof(void*)*9 + 1, v_precompileLibrary_991_);
lean_ctor_set_uint8(v_reuseFailAlloc_1004_, sizeof(void*)*9 + 2, v_precompileModules_992_);
v___x_1002_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
uint8_t v___x_1003_; 
v___x_1003_ = lean_unbox(v___x_1000_);
lean_ctor_set_uint8(v___x_1002_, sizeof(void*)*9 + 3, v___x_1003_);
return v___x_1002_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___redArg(){
_start:
{
lean_object* v___x_1015_; 
v___x_1015_ = ((lean_object*)(l_Lake_LeanLibConfig_allowImportAll___proj___redArg___closed__3));
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___redArg___boxed(lean_object* v___dummy_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l_Lake_LeanLibConfig_allowImportAll___proj___redArg();
return v_res_1017_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig_allowImportAll___proj___closed__0(void){
_start:
{
lean_object* v___x_1018_; 
v___x_1018_ = l_Lake_LeanLibConfig_allowImportAll___proj___redArg();
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll___proj(lean_object* v_name_1019_){
_start:
{
lean_object* v___x_1020_; 
v___x_1020_ = lean_obj_once(&l_Lake_LeanLibConfig_allowImportAll___proj___closed__0, &l_Lake_LeanLibConfig_allowImportAll___proj___closed__0_once, _init_l_Lake_LeanLibConfig_allowImportAll___proj___closed__0);
return v___x_1020_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll___proj___boxed(lean_object* v_name_1021_){
_start:
{
lean_object* v_res_1022_; 
v_res_1022_ = l_Lake_LeanLibConfig_allowImportAll___proj(v_name_1021_);
lean_dec(v_name_1021_);
return v_res_1022_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll_instConfigField___redArg(){
_start:
{
lean_object* v___x_1024_; 
v___x_1024_ = lean_obj_once(&l_Lake_LeanLibConfig_allowImportAll___proj___closed__0, &l_Lake_LeanLibConfig_allowImportAll___proj___closed__0_once, _init_l_Lake_LeanLibConfig_allowImportAll___proj___closed__0);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll_instConfigField___redArg___boxed(lean_object* v___dummy_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Lake_LeanLibConfig_allowImportAll_instConfigField___redArg();
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll_instConfigField(lean_object* v_name_1027_){
_start:
{
lean_object* v___x_1028_; 
v___x_1028_ = lean_obj_once(&l_Lake_LeanLibConfig_allowImportAll___proj___closed__0, &l_Lake_LeanLibConfig_allowImportAll___proj___closed__0_once, _init_l_Lake_LeanLibConfig_allowImportAll___proj___closed__0);
return v___x_1028_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_allowImportAll_instConfigField___boxed(lean_object* v_name_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l_Lake_LeanLibConfig_allowImportAll_instConfigField(v_name_1029_);
lean_dec(v_name_1029_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__0(lean_object* v_cfg_1031_){
_start:
{
lean_object* v_toLeanConfig_1032_; 
v_toLeanConfig_1032_ = lean_ctor_get(v_cfg_1031_, 0);
lean_inc_ref(v_toLeanConfig_1032_);
return v_toLeanConfig_1032_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__0___boxed(lean_object* v_cfg_1033_){
_start:
{
lean_object* v_res_1034_; 
v_res_1034_ = l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__0(v_cfg_1033_);
lean_dec_ref(v_cfg_1033_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__1(lean_object* v_val_1035_, lean_object* v_cfg_1036_){
_start:
{
lean_object* v_srcDir_1037_; lean_object* v_roots_1038_; lean_object* v_globs_1039_; lean_object* v_libName_1040_; uint8_t v_libPrefixOnWindows_1041_; lean_object* v_needs_1042_; lean_object* v_extraDepTargets_1043_; uint8_t v_precompileLibrary_1044_; uint8_t v_precompileModules_1045_; lean_object* v_defaultFacets_1046_; lean_object* v_nativeFacets_1047_; uint8_t v_allowImportAll_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1055_; 
v_srcDir_1037_ = lean_ctor_get(v_cfg_1036_, 1);
v_roots_1038_ = lean_ctor_get(v_cfg_1036_, 2);
v_globs_1039_ = lean_ctor_get(v_cfg_1036_, 3);
v_libName_1040_ = lean_ctor_get(v_cfg_1036_, 4);
v_libPrefixOnWindows_1041_ = lean_ctor_get_uint8(v_cfg_1036_, sizeof(void*)*9);
v_needs_1042_ = lean_ctor_get(v_cfg_1036_, 5);
v_extraDepTargets_1043_ = lean_ctor_get(v_cfg_1036_, 6);
v_precompileLibrary_1044_ = lean_ctor_get_uint8(v_cfg_1036_, sizeof(void*)*9 + 1);
v_precompileModules_1045_ = lean_ctor_get_uint8(v_cfg_1036_, sizeof(void*)*9 + 2);
v_defaultFacets_1046_ = lean_ctor_get(v_cfg_1036_, 7);
v_nativeFacets_1047_ = lean_ctor_get(v_cfg_1036_, 8);
v_allowImportAll_1048_ = lean_ctor_get_uint8(v_cfg_1036_, sizeof(void*)*9 + 3);
v_isSharedCheck_1055_ = !lean_is_exclusive(v_cfg_1036_);
if (v_isSharedCheck_1055_ == 0)
{
lean_object* v_unused_1056_; 
v_unused_1056_ = lean_ctor_get(v_cfg_1036_, 0);
lean_dec(v_unused_1056_);
v___x_1050_ = v_cfg_1036_;
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_nativeFacets_1047_);
lean_inc(v_defaultFacets_1046_);
lean_inc(v_extraDepTargets_1043_);
lean_inc(v_needs_1042_);
lean_inc(v_libName_1040_);
lean_inc(v_globs_1039_);
lean_inc(v_roots_1038_);
lean_inc(v_srcDir_1037_);
lean_dec(v_cfg_1036_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1053_; 
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 0, v_val_1035_);
v___x_1053_ = v___x_1050_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v_val_1035_);
lean_ctor_set(v_reuseFailAlloc_1054_, 1, v_srcDir_1037_);
lean_ctor_set(v_reuseFailAlloc_1054_, 2, v_roots_1038_);
lean_ctor_set(v_reuseFailAlloc_1054_, 3, v_globs_1039_);
lean_ctor_set(v_reuseFailAlloc_1054_, 4, v_libName_1040_);
lean_ctor_set(v_reuseFailAlloc_1054_, 5, v_needs_1042_);
lean_ctor_set(v_reuseFailAlloc_1054_, 6, v_extraDepTargets_1043_);
lean_ctor_set(v_reuseFailAlloc_1054_, 7, v_defaultFacets_1046_);
lean_ctor_set(v_reuseFailAlloc_1054_, 8, v_nativeFacets_1047_);
lean_ctor_set_uint8(v_reuseFailAlloc_1054_, sizeof(void*)*9, v_libPrefixOnWindows_1041_);
lean_ctor_set_uint8(v_reuseFailAlloc_1054_, sizeof(void*)*9 + 1, v_precompileLibrary_1044_);
lean_ctor_set_uint8(v_reuseFailAlloc_1054_, sizeof(void*)*9 + 2, v_precompileModules_1045_);
lean_ctor_set_uint8(v_reuseFailAlloc_1054_, sizeof(void*)*9 + 3, v_allowImportAll_1048_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__2(lean_object* v_f_1057_, lean_object* v_cfg_1058_){
_start:
{
lean_object* v_toLeanConfig_1059_; lean_object* v_srcDir_1060_; lean_object* v_roots_1061_; lean_object* v_globs_1062_; lean_object* v_libName_1063_; uint8_t v_libPrefixOnWindows_1064_; lean_object* v_needs_1065_; lean_object* v_extraDepTargets_1066_; uint8_t v_precompileLibrary_1067_; uint8_t v_precompileModules_1068_; lean_object* v_defaultFacets_1069_; lean_object* v_nativeFacets_1070_; uint8_t v_allowImportAll_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1079_; 
v_toLeanConfig_1059_ = lean_ctor_get(v_cfg_1058_, 0);
v_srcDir_1060_ = lean_ctor_get(v_cfg_1058_, 1);
v_roots_1061_ = lean_ctor_get(v_cfg_1058_, 2);
v_globs_1062_ = lean_ctor_get(v_cfg_1058_, 3);
v_libName_1063_ = lean_ctor_get(v_cfg_1058_, 4);
v_libPrefixOnWindows_1064_ = lean_ctor_get_uint8(v_cfg_1058_, sizeof(void*)*9);
v_needs_1065_ = lean_ctor_get(v_cfg_1058_, 5);
v_extraDepTargets_1066_ = lean_ctor_get(v_cfg_1058_, 6);
v_precompileLibrary_1067_ = lean_ctor_get_uint8(v_cfg_1058_, sizeof(void*)*9 + 1);
v_precompileModules_1068_ = lean_ctor_get_uint8(v_cfg_1058_, sizeof(void*)*9 + 2);
v_defaultFacets_1069_ = lean_ctor_get(v_cfg_1058_, 7);
v_nativeFacets_1070_ = lean_ctor_get(v_cfg_1058_, 8);
v_allowImportAll_1071_ = lean_ctor_get_uint8(v_cfg_1058_, sizeof(void*)*9 + 3);
v_isSharedCheck_1079_ = !lean_is_exclusive(v_cfg_1058_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1073_ = v_cfg_1058_;
v_isShared_1074_ = v_isSharedCheck_1079_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_nativeFacets_1070_);
lean_inc(v_defaultFacets_1069_);
lean_inc(v_extraDepTargets_1066_);
lean_inc(v_needs_1065_);
lean_inc(v_libName_1063_);
lean_inc(v_globs_1062_);
lean_inc(v_roots_1061_);
lean_inc(v_srcDir_1060_);
lean_inc(v_toLeanConfig_1059_);
lean_dec(v_cfg_1058_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1079_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1075_; lean_object* v___x_1077_; 
v___x_1075_ = lean_apply_1(v_f_1057_, v_toLeanConfig_1059_);
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 0, v___x_1075_);
v___x_1077_ = v___x_1073_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1075_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v_srcDir_1060_);
lean_ctor_set(v_reuseFailAlloc_1078_, 2, v_roots_1061_);
lean_ctor_set(v_reuseFailAlloc_1078_, 3, v_globs_1062_);
lean_ctor_set(v_reuseFailAlloc_1078_, 4, v_libName_1063_);
lean_ctor_set(v_reuseFailAlloc_1078_, 5, v_needs_1065_);
lean_ctor_set(v_reuseFailAlloc_1078_, 6, v_extraDepTargets_1066_);
lean_ctor_set(v_reuseFailAlloc_1078_, 7, v_defaultFacets_1069_);
lean_ctor_set(v_reuseFailAlloc_1078_, 8, v_nativeFacets_1070_);
lean_ctor_set_uint8(v_reuseFailAlloc_1078_, sizeof(void*)*9, v_libPrefixOnWindows_1064_);
lean_ctor_set_uint8(v_reuseFailAlloc_1078_, sizeof(void*)*9 + 1, v_precompileLibrary_1067_);
lean_ctor_set_uint8(v_reuseFailAlloc_1078_, sizeof(void*)*9 + 2, v_precompileModules_1068_);
lean_ctor_set_uint8(v_reuseFailAlloc_1078_, sizeof(void*)*9 + 3, v_allowImportAll_1071_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3(lean_object* v_x_1088_){
_start:
{
lean_object* v___x_1089_; 
v___x_1089_ = ((lean_object*)(l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__1));
return v___x_1089_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___boxed(lean_object* v_x_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3(v_x_1090_);
lean_dec_ref(v_x_1090_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg(){
_start:
{
lean_object* v___x_1102_; 
v___x_1102_ = ((lean_object*)(l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___closed__4));
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___boxed(lean_object* v___dummy_1103_){
_start:
{
lean_object* v_res_1104_; 
v_res_1104_ = l_Lake_LeanLibConfig_toLeanConfig___proj___redArg();
return v_res_1104_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig_toLeanConfig___proj___closed__0(void){
_start:
{
lean_object* v___x_1105_; 
v___x_1105_ = l_Lake_LeanLibConfig_toLeanConfig___proj___redArg();
return v___x_1105_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj(lean_object* v_name_1106_){
_start:
{
lean_object* v___x_1107_; 
v___x_1107_ = lean_obj_once(&l_Lake_LeanLibConfig_toLeanConfig___proj___closed__0, &l_Lake_LeanLibConfig_toLeanConfig___proj___closed__0_once, _init_l_Lake_LeanLibConfig_toLeanConfig___proj___closed__0);
return v___x_1107_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig___proj___boxed(lean_object* v_name_1108_){
_start:
{
lean_object* v_res_1109_; 
v_res_1109_ = l_Lake_LeanLibConfig_toLeanConfig___proj(v_name_1108_);
lean_dec(v_name_1108_);
return v_res_1109_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig_instConfigParent___redArg(){
_start:
{
lean_object* v___x_1111_; 
v___x_1111_ = lean_obj_once(&l_Lake_LeanLibConfig_toLeanConfig___proj___closed__0, &l_Lake_LeanLibConfig_toLeanConfig___proj___closed__0_once, _init_l_Lake_LeanLibConfig_toLeanConfig___proj___closed__0);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig_instConfigParent___redArg___boxed(lean_object* v___dummy_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l_Lake_LeanLibConfig_toLeanConfig_instConfigParent___redArg();
return v_res_1113_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig_instConfigParent(lean_object* v_name_1114_){
_start:
{
lean_object* v___x_1115_; 
v___x_1115_ = lean_obj_once(&l_Lake_LeanLibConfig_toLeanConfig___proj___closed__0, &l_Lake_LeanLibConfig_toLeanConfig___proj___closed__0_once, _init_l_Lake_LeanLibConfig_toLeanConfig___proj___closed__0);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_toLeanConfig_instConfigParent___boxed(lean_object* v_name_1116_){
_start:
{
lean_object* v_res_1117_; 
v_res_1117_ = l_Lake_LeanLibConfig_toLeanConfig_instConfigParent(v_name_1116_);
lean_dec(v_name_1116_);
return v_res_1117_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig___fields___closed__4(void){
_start:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1127_ = ((lean_object*)(l_Lake_LeanLibConfig___fields___closed__3));
v___x_1128_ = ((lean_object*)(l_Lake_LeanLibConfig___fields___closed__0));
v___x_1129_ = lean_array_push(v___x_1128_, v___x_1127_);
return v___x_1129_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig___fields___closed__8(void){
_start:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1137_ = ((lean_object*)(l_Lake_LeanLibConfig___fields___closed__7));
v___x_1138_ = lean_obj_once(&l_Lake_LeanLibConfig___fields___closed__4, &l_Lake_LeanLibConfig___fields___closed__4_once, _init_l_Lake_LeanLibConfig___fields___closed__4);
v___x_1139_ = lean_array_push(v___x_1138_, v___x_1137_);
return v___x_1139_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig___fields___closed__12(void){
_start:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1147_ = ((lean_object*)(l_Lake_LeanLibConfig___fields___closed__11));
v___x_1148_ = lean_obj_once(&l_Lake_LeanLibConfig___fields___closed__8, &l_Lake_LeanLibConfig___fields___closed__8_once, _init_l_Lake_LeanLibConfig___fields___closed__8);
v___x_1149_ = lean_array_push(v___x_1148_, v___x_1147_);
return v___x_1149_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig___fields___closed__16(void){
_start:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1157_ = ((lean_object*)(l_Lake_LeanLibConfig___fields___closed__15));
v___x_1158_ = lean_obj_once(&l_Lake_LeanLibConfig___fields___closed__12, &l_Lake_LeanLibConfig___fields___closed__12_once, _init_l_Lake_LeanLibConfig___fields___closed__12);
v___x_1159_ = lean_array_push(v___x_1158_, v___x_1157_);
return v___x_1159_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig___fields___closed__20(void){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1167_ = ((lean_object*)(l_Lake_LeanLibConfig___fields___closed__19));
v___x_1168_ = lean_obj_once(&l_Lake_LeanLibConfig___fields___closed__16, &l_Lake_LeanLibConfig___fields___closed__16_once, _init_l_Lake_LeanLibConfig___fields___closed__16);
v___x_1169_ = lean_array_push(v___x_1168_, v___x_1167_);
return v___x_1169_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig___fields___closed__24(void){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1177_ = ((lean_object*)(l_Lake_LeanLibConfig___fields___closed__23));
v___x_1178_ = lean_obj_once(&l_Lake_LeanLibConfig___fields___closed__20, &l_Lake_LeanLibConfig___fields___closed__20_once, _init_l_Lake_LeanLibConfig___fields___closed__20);
v___x_1179_ = lean_array_push(v___x_1178_, v___x_1177_);
return v___x_1179_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig___fields___closed__28(void){
_start:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1187_ = ((lean_object*)(l_Lake_LeanLibConfig___fields___closed__27));
v___x_1188_ = lean_obj_once(&l_Lake_LeanLibConfig___fields___closed__24, &l_Lake_LeanLibConfig___fields___closed__24_once, _init_l_Lake_LeanLibConfig___fields___closed__24);
v___x_1189_ = lean_array_push(v___x_1188_, v___x_1187_);
return v___x_1189_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig___fields___closed__32(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1197_ = ((lean_object*)(l_Lake_LeanLibConfig___fields___closed__31));
v___x_1198_ = lean_obj_once(&l_Lake_LeanLibConfig___fields___closed__28, &l_Lake_LeanLibConfig___fields___closed__28_once, _init_l_Lake_LeanLibConfig___fields___closed__28);
v___x_1199_ = lean_array_push(v___x_1198_, v___x_1197_);
return v___x_1199_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig___fields___closed__36(void){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1207_ = ((lean_object*)(l_Lake_LeanLibConfig___fields___closed__35));
v___x_1208_ = lean_obj_once(&l_Lake_LeanLibConfig___fields___closed__32, &l_Lake_LeanLibConfig___fields___closed__32_once, _init_l_Lake_LeanLibConfig___fields___closed__32);
v___x_1209_ = lean_array_push(v___x_1208_, v___x_1207_);
return v___x_1209_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig___fields___closed__40(void){
_start:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1217_ = ((lean_object*)(l_Lake_LeanLibConfig___fields___closed__39));
v___x_1218_ = lean_obj_once(&l_Lake_LeanLibConfig___fields___closed__36, &l_Lake_LeanLibConfig___fields___closed__36_once, _init_l_Lake_LeanLibConfig___fields___closed__36);
v___x_1219_ = lean_array_push(v___x_1218_, v___x_1217_);
return v___x_1219_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig___fields___closed__44(void){
_start:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; 
v___x_1227_ = ((lean_object*)(l_Lake_LeanLibConfig___fields___closed__43));
v___x_1228_ = lean_obj_once(&l_Lake_LeanLibConfig___fields___closed__40, &l_Lake_LeanLibConfig___fields___closed__40_once, _init_l_Lake_LeanLibConfig___fields___closed__40);
v___x_1229_ = lean_array_push(v___x_1228_, v___x_1227_);
return v___x_1229_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig___fields___closed__48(void){
_start:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1237_ = ((lean_object*)(l_Lake_LeanLibConfig___fields___closed__47));
v___x_1238_ = lean_obj_once(&l_Lake_LeanLibConfig___fields___closed__44, &l_Lake_LeanLibConfig___fields___closed__44_once, _init_l_Lake_LeanLibConfig___fields___closed__44);
v___x_1239_ = lean_array_push(v___x_1238_, v___x_1237_);
return v___x_1239_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig___fields___closed__49(void){
_start:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1240_ = l_Lake_LeanConfig___fields;
v___x_1241_ = lean_obj_once(&l_Lake_LeanLibConfig___fields___closed__48, &l_Lake_LeanLibConfig___fields___closed__48_once, _init_l_Lake_LeanLibConfig___fields___closed__48);
v___x_1242_ = l_Array_append___redArg(v___x_1241_, v___x_1240_);
return v___x_1242_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig___fields___closed__53(void){
_start:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1250_ = ((lean_object*)(l_Lake_LeanLibConfig___fields___closed__52));
v___x_1251_ = lean_obj_once(&l_Lake_LeanLibConfig___fields___closed__49, &l_Lake_LeanLibConfig___fields___closed__49_once, _init_l_Lake_LeanLibConfig___fields___closed__49);
v___x_1252_ = lean_array_push(v___x_1251_, v___x_1250_);
return v___x_1252_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig___fields(void){
_start:
{
lean_object* v___x_1253_; 
v___x_1253_ = lean_obj_once(&l_Lake_LeanLibConfig___fields___closed__53, &l_Lake_LeanLibConfig___fields___closed__53_once, _init_l_Lake_LeanLibConfig___fields___closed__53);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_instConfigFields___redArg(){
_start:
{
lean_object* v___x_1255_; 
v___x_1255_ = l_Lake_LeanLibConfig___fields;
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_instConfigFields___redArg___boxed(lean_object* v___dummy_1256_){
_start:
{
lean_object* v_res_1257_; 
v_res_1257_ = l_Lake_LeanLibConfig_instConfigFields___redArg();
return v_res_1257_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_instConfigFields(lean_object* v_name_1258_){
_start:
{
lean_object* v___x_1259_; 
v___x_1259_ = l_Lake_LeanLibConfig___fields;
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_instConfigFields___boxed(lean_object* v_name_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l_Lake_LeanLibConfig_instConfigFields(v_name_1260_);
lean_dec(v_name_1260_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_instConfigInfo___lam__0(lean_object* v_x1_1262_, lean_object* v_x2_1263_){
_start:
{
lean_object* v_name_1264_; lean_object* v___x_1265_; 
v_name_1264_ = lean_ctor_get(v_x2_1263_, 0);
lean_inc(v_name_1264_);
v___x_1265_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1264_, v_x2_1263_, v_x1_1262_);
return v___x_1265_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig_instConfigInfo___closed__0(void){
_start:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = l_Lake_LeanLibConfig___fields;
v___x_1267_ = lean_array_get_size(v___x_1266_);
return v___x_1267_;
}
}
static uint8_t _init_l_Lake_LeanLibConfig_instConfigInfo___closed__11(void){
_start:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; uint8_t v___x_1289_; 
v___x_1287_ = lean_obj_once(&l_Lake_LeanLibConfig_instConfigInfo___closed__0, &l_Lake_LeanLibConfig_instConfigInfo___closed__0_once, _init_l_Lake_LeanLibConfig_instConfigInfo___closed__0);
v___x_1288_ = lean_unsigned_to_nat(0u);
v___x_1289_ = lean_nat_dec_lt(v___x_1288_, v___x_1287_);
return v___x_1289_;
}
}
static uint8_t _init_l_Lake_LeanLibConfig_instConfigInfo___closed__13(void){
_start:
{
lean_object* v___x_1291_; uint8_t v___x_1292_; 
v___x_1291_ = lean_obj_once(&l_Lake_LeanLibConfig_instConfigInfo___closed__0, &l_Lake_LeanLibConfig_instConfigInfo___closed__0_once, _init_l_Lake_LeanLibConfig_instConfigInfo___closed__0);
v___x_1292_ = lean_nat_dec_le(v___x_1291_, v___x_1291_);
return v___x_1292_;
}
}
static size_t _init_l_Lake_LeanLibConfig_instConfigInfo___closed__14(void){
_start:
{
lean_object* v___x_1293_; size_t v___x_1294_; 
v___x_1293_ = lean_obj_once(&l_Lake_LeanLibConfig_instConfigInfo___closed__0, &l_Lake_LeanLibConfig_instConfigInfo___closed__0_once, _init_l_Lake_LeanLibConfig_instConfigInfo___closed__0);
v___x_1294_ = lean_usize_of_nat(v___x_1293_);
return v___x_1294_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig_instConfigInfo___closed__15(void){
_start:
{
lean_object* v___x_1295_; size_t v___x_1296_; size_t v___x_1297_; lean_object* v___x_1298_; lean_object* v___f_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; 
v___x_1295_ = lean_box(1);
v___x_1296_ = lean_usize_once(&l_Lake_LeanLibConfig_instConfigInfo___closed__14, &l_Lake_LeanLibConfig_instConfigInfo___closed__14_once, _init_l_Lake_LeanLibConfig_instConfigInfo___closed__14);
v___x_1297_ = ((size_t)0ULL);
v___x_1298_ = l_Lake_LeanLibConfig___fields;
v___f_1299_ = ((lean_object*)(l_Lake_LeanLibConfig_instConfigInfo___closed__12));
v___x_1300_ = ((lean_object*)(l_Lake_LeanLibConfig_instConfigInfo___closed__10));
v___x_1301_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1300_, v___f_1299_, v___x_1298_, v___x_1297_, v___x_1296_, v___x_1295_);
return v___x_1301_;
}
}
static lean_object* _init_l_Lake_LeanLibConfig_instConfigInfo(void){
_start:
{
lean_object* v___x_1302_; lean_object* v___y_1304_; lean_object* v___x_1307_; uint8_t v___x_1308_; 
v___x_1302_ = l_Lake_LeanLibConfig___fields;
v___x_1307_ = lean_box(1);
v___x_1308_ = lean_uint8_once(&l_Lake_LeanLibConfig_instConfigInfo___closed__11, &l_Lake_LeanLibConfig_instConfigInfo___closed__11_once, _init_l_Lake_LeanLibConfig_instConfigInfo___closed__11);
if (v___x_1308_ == 0)
{
v___y_1304_ = v___x_1307_;
goto v___jp_1303_;
}
else
{
uint8_t v___x_1309_; 
v___x_1309_ = lean_uint8_once(&l_Lake_LeanLibConfig_instConfigInfo___closed__13, &l_Lake_LeanLibConfig_instConfigInfo___closed__13_once, _init_l_Lake_LeanLibConfig_instConfigInfo___closed__13);
if (v___x_1309_ == 0)
{
if (v___x_1308_ == 0)
{
v___y_1304_ = v___x_1307_;
goto v___jp_1303_;
}
else
{
lean_object* v___x_1310_; 
v___x_1310_ = lean_obj_once(&l_Lake_LeanLibConfig_instConfigInfo___closed__15, &l_Lake_LeanLibConfig_instConfigInfo___closed__15_once, _init_l_Lake_LeanLibConfig_instConfigInfo___closed__15);
v___y_1304_ = v___x_1310_;
goto v___jp_1303_;
}
}
else
{
lean_object* v___x_1311_; 
v___x_1311_ = lean_obj_once(&l_Lake_LeanLibConfig_instConfigInfo___closed__15, &l_Lake_LeanLibConfig_instConfigInfo___closed__15_once, _init_l_Lake_LeanLibConfig_instConfigInfo___closed__15);
v___y_1304_ = v___x_1311_;
goto v___jp_1303_;
}
}
v___jp_1303_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1305_ = lean_unsigned_to_nat(1u);
lean_inc(v___y_1304_);
v___x_1306_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1302_);
lean_ctor_set(v___x_1306_, 1, v___y_1304_);
lean_ctor_set(v___x_1306_, 2, v___x_1305_);
return v___x_1306_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_instEmptyCollection___lam__0(lean_object* v_x_1312_){
_start:
{
lean_object* v___x_1313_; 
v___x_1313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1313_, 0, v_x_1312_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_instEmptyCollection(lean_object* v_name_1315_){
_start:
{
lean_object* v___f_1316_; lean_object* v___f_1317_; lean_object* v___x_1318_; uint8_t v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; size_t v_sz_1326_; size_t v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___f_1316_ = ((lean_object*)(l_Lake_LeanLibConfig_instEmptyCollection___closed__0));
v___f_1317_ = ((lean_object*)(l_Lake_instInhabitedLeanLibConfig_default___closed__0));
v___x_1318_ = ((lean_object*)(l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__0));
v___x_1319_ = 0;
v___x_1320_ = ((lean_object*)(l_Lake_LeanLibConfig_toLeanConfig___proj___redArg___lam__3___closed__1));
v___x_1321_ = ((lean_object*)(l_Lake_instInhabitedLeanLibConfig_default___closed__1));
v___x_1322_ = lean_unsigned_to_nat(1u);
v___x_1323_ = lean_mk_empty_array_with_capacity(v___x_1322_);
v___x_1324_ = lean_array_push(v___x_1323_, v_name_1315_);
v___x_1325_ = ((lean_object*)(l_Lake_LeanLibConfig_instConfigInfo___closed__10));
v_sz_1326_ = lean_array_size(v___x_1324_);
v___x_1327_ = ((size_t)0ULL);
v___x_1328_ = l_unsafeCast___redArg(v___x_1324_);
v___x_1329_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1325_, v___f_1316_, v_sz_1326_, v___x_1327_, v___x_1328_);
v___x_1330_ = l_unsafeCast___redArg(v___x_1329_);
lean_dec(v___x_1329_);
v___x_1331_ = ((lean_object*)(l_Lake_instInhabitedLeanLibConfig_default___closed__2));
v___x_1332_ = lean_obj_once(&l_Lake_instInhabitedLeanLibConfig_default___closed__4, &l_Lake_instInhabitedLeanLibConfig_default___closed__4_once, _init_l_Lake_instInhabitedLeanLibConfig_default___closed__4);
v___x_1333_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v___x_1333_, 0, v___x_1320_);
lean_ctor_set(v___x_1333_, 1, v___x_1321_);
lean_ctor_set(v___x_1333_, 2, v___x_1324_);
lean_ctor_set(v___x_1333_, 3, v___x_1330_);
lean_ctor_set(v___x_1333_, 4, v___x_1331_);
lean_ctor_set(v___x_1333_, 5, v___x_1318_);
lean_ctor_set(v___x_1333_, 6, v___x_1318_);
lean_ctor_set(v___x_1333_, 7, v___x_1332_);
lean_ctor_set(v___x_1333_, 8, v___f_1317_);
lean_ctor_set_uint8(v___x_1333_, sizeof(void*)*9, v___x_1319_);
lean_ctor_set_uint8(v___x_1333_, sizeof(void*)*9 + 1, v___x_1319_);
lean_ctor_set_uint8(v___x_1333_, sizeof(void*)*9 + 2, v___x_1319_);
lean_ctor_set_uint8(v___x_1333_, sizeof(void*)*9 + 3, v___x_1319_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_name___redArg(lean_object* v_n_1334_){
_start:
{
lean_inc(v_n_1334_);
return v_n_1334_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_name___redArg___boxed(lean_object* v_n_1335_){
_start:
{
lean_object* v_res_1336_; 
v_res_1336_ = l_Lake_LeanLibConfig_name___redArg(v_n_1335_);
lean_dec(v_n_1335_);
return v_res_1336_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_name(lean_object* v_n_1337_, lean_object* v_x_1338_){
_start:
{
lean_inc(v_n_1337_);
return v_n_1337_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_name___boxed(lean_object* v_n_1339_, lean_object* v_x_1340_){
_start:
{
lean_object* v_res_1341_; 
v_res_1341_ = l_Lake_LeanLibConfig_name(v_n_1339_, v_x_1340_);
lean_dec_ref(v_x_1340_);
lean_dec(v_n_1339_);
return v_res_1341_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isLocalModule_spec__0(lean_object* v_mod_1342_, lean_object* v_as_1343_, size_t v_i_1344_, size_t v_stop_1345_){
_start:
{
uint8_t v___x_1346_; 
v___x_1346_ = lean_usize_dec_eq(v_i_1344_, v_stop_1345_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; uint8_t v___x_1348_; 
v___x_1347_ = lean_array_uget_borrowed(v_as_1343_, v_i_1344_);
v___x_1348_ = l_Lake_Glob_matches(v_mod_1342_, v___x_1347_);
if (v___x_1348_ == 0)
{
size_t v___x_1349_; size_t v___x_1350_; 
v___x_1349_ = ((size_t)1ULL);
v___x_1350_ = lean_usize_add(v_i_1344_, v___x_1349_);
v_i_1344_ = v___x_1350_;
goto _start;
}
else
{
return v___x_1348_;
}
}
else
{
uint8_t v___x_1352_; 
v___x_1352_ = 0;
return v___x_1352_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isLocalModule_spec__0___boxed(lean_object* v_mod_1353_, lean_object* v_as_1354_, lean_object* v_i_1355_, lean_object* v_stop_1356_){
_start:
{
size_t v_i_boxed_1357_; size_t v_stop_boxed_1358_; uint8_t v_res_1359_; lean_object* v_r_1360_; 
v_i_boxed_1357_ = lean_unbox_usize(v_i_1355_);
lean_dec(v_i_1355_);
v_stop_boxed_1358_ = lean_unbox_usize(v_stop_1356_);
lean_dec(v_stop_1356_);
v_res_1359_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isLocalModule_spec__0(v_mod_1353_, v_as_1354_, v_i_boxed_1357_, v_stop_boxed_1358_);
lean_dec_ref(v_as_1354_);
lean_dec(v_mod_1353_);
v_r_1360_ = lean_box(v_res_1359_);
return v_r_1360_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isLocalModule_spec__1(lean_object* v_mod_1361_, lean_object* v_as_1362_, size_t v_i_1363_, size_t v_stop_1364_){
_start:
{
uint8_t v___x_1365_; 
v___x_1365_ = lean_usize_dec_eq(v_i_1363_, v_stop_1364_);
if (v___x_1365_ == 0)
{
lean_object* v___x_1366_; uint8_t v___x_1367_; 
v___x_1366_ = lean_array_uget_borrowed(v_as_1362_, v_i_1363_);
v___x_1367_ = l_Lean_Name_isPrefixOf(v___x_1366_, v_mod_1361_);
if (v___x_1367_ == 0)
{
size_t v___x_1368_; size_t v___x_1369_; 
v___x_1368_ = ((size_t)1ULL);
v___x_1369_ = lean_usize_add(v_i_1363_, v___x_1368_);
v_i_1363_ = v___x_1369_;
goto _start;
}
else
{
return v___x_1367_;
}
}
else
{
uint8_t v___x_1371_; 
v___x_1371_ = 0;
return v___x_1371_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isLocalModule_spec__1___boxed(lean_object* v_mod_1372_, lean_object* v_as_1373_, lean_object* v_i_1374_, lean_object* v_stop_1375_){
_start:
{
size_t v_i_boxed_1376_; size_t v_stop_boxed_1377_; uint8_t v_res_1378_; lean_object* v_r_1379_; 
v_i_boxed_1376_ = lean_unbox_usize(v_i_1374_);
lean_dec(v_i_1374_);
v_stop_boxed_1377_ = lean_unbox_usize(v_stop_1375_);
lean_dec(v_stop_1375_);
v_res_1378_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isLocalModule_spec__1(v_mod_1372_, v_as_1373_, v_i_boxed_1376_, v_stop_boxed_1377_);
lean_dec_ref(v_as_1373_);
lean_dec(v_mod_1372_);
v_r_1379_ = lean_box(v_res_1378_);
return v_r_1379_;
}
}
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_isLocalModule___redArg(lean_object* v_mod_1380_, lean_object* v_self_1381_){
_start:
{
lean_object* v_roots_1382_; lean_object* v_globs_1383_; lean_object* v___x_1391_; lean_object* v___x_1392_; uint8_t v___x_1393_; 
v_roots_1382_ = lean_ctor_get(v_self_1381_, 2);
v_globs_1383_ = lean_ctor_get(v_self_1381_, 3);
v___x_1391_ = lean_unsigned_to_nat(0u);
v___x_1392_ = lean_array_get_size(v_roots_1382_);
v___x_1393_ = lean_nat_dec_lt(v___x_1391_, v___x_1392_);
if (v___x_1393_ == 0)
{
goto v___jp_1384_;
}
else
{
if (v___x_1393_ == 0)
{
goto v___jp_1384_;
}
else
{
size_t v___x_1394_; size_t v___x_1395_; uint8_t v___x_1396_; 
v___x_1394_ = ((size_t)0ULL);
v___x_1395_ = lean_usize_of_nat(v___x_1392_);
v___x_1396_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isLocalModule_spec__1(v_mod_1380_, v_roots_1382_, v___x_1394_, v___x_1395_);
if (v___x_1396_ == 0)
{
goto v___jp_1384_;
}
else
{
return v___x_1396_;
}
}
}
v___jp_1384_:
{
lean_object* v___x_1385_; lean_object* v___x_1386_; uint8_t v___x_1387_; 
v___x_1385_ = lean_unsigned_to_nat(0u);
v___x_1386_ = lean_array_get_size(v_globs_1383_);
v___x_1387_ = lean_nat_dec_lt(v___x_1385_, v___x_1386_);
if (v___x_1387_ == 0)
{
return v___x_1387_;
}
else
{
if (v___x_1387_ == 0)
{
return v___x_1387_;
}
else
{
size_t v___x_1388_; size_t v___x_1389_; uint8_t v___x_1390_; 
v___x_1388_ = ((size_t)0ULL);
v___x_1389_ = lean_usize_of_nat(v___x_1386_);
v___x_1390_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isLocalModule_spec__0(v_mod_1380_, v_globs_1383_, v___x_1388_, v___x_1389_);
return v___x_1390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_isLocalModule___redArg___boxed(lean_object* v_mod_1397_, lean_object* v_self_1398_){
_start:
{
uint8_t v_res_1399_; lean_object* v_r_1400_; 
v_res_1399_ = l_Lake_LeanLibConfig_isLocalModule___redArg(v_mod_1397_, v_self_1398_);
lean_dec_ref(v_self_1398_);
lean_dec(v_mod_1397_);
v_r_1400_ = lean_box(v_res_1399_);
return v_r_1400_;
}
}
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_isLocalModule(lean_object* v_n_1401_, lean_object* v_mod_1402_, lean_object* v_self_1403_){
_start:
{
uint8_t v___x_1404_; 
v___x_1404_ = l_Lake_LeanLibConfig_isLocalModule___redArg(v_mod_1402_, v_self_1403_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_isLocalModule___boxed(lean_object* v_n_1405_, lean_object* v_mod_1406_, lean_object* v_self_1407_){
_start:
{
uint8_t v_res_1408_; lean_object* v_r_1409_; 
v_res_1408_ = l_Lake_LeanLibConfig_isLocalModule(v_n_1405_, v_mod_1406_, v_self_1407_);
lean_dec_ref(v_self_1407_);
lean_dec(v_mod_1406_);
lean_dec(v_n_1405_);
v_r_1409_ = lean_box(v_res_1408_);
return v_r_1409_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isBuildableModule_spec__0(lean_object* v_mod_1410_, lean_object* v_self_1411_, lean_object* v_as_1412_, size_t v_i_1413_, size_t v_stop_1414_){
_start:
{
uint8_t v___x_1419_; 
v___x_1419_ = lean_usize_dec_eq(v_i_1413_, v_stop_1414_);
if (v___x_1419_ == 0)
{
uint8_t v___x_1420_; uint8_t v___y_1422_; lean_object* v___x_1423_; uint8_t v___x_1424_; 
v___x_1420_ = 1;
v___x_1423_ = lean_array_uget_borrowed(v_as_1412_, v_i_1413_);
v___x_1424_ = l_Lean_Name_isPrefixOf(v___x_1423_, v_mod_1410_);
if (v___x_1424_ == 0)
{
v___y_1422_ = v___x_1424_;
goto v___jp_1421_;
}
else
{
lean_object* v_globs_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; uint8_t v___x_1428_; 
v_globs_1425_ = lean_ctor_get(v_self_1411_, 3);
v___x_1426_ = lean_unsigned_to_nat(0u);
v___x_1427_ = lean_array_get_size(v_globs_1425_);
v___x_1428_ = lean_nat_dec_lt(v___x_1426_, v___x_1427_);
if (v___x_1428_ == 0)
{
goto v___jp_1415_;
}
else
{
if (v___x_1428_ == 0)
{
goto v___jp_1415_;
}
else
{
size_t v___x_1429_; size_t v___x_1430_; uint8_t v___x_1431_; 
v___x_1429_ = ((size_t)0ULL);
v___x_1430_ = lean_usize_of_nat(v___x_1427_);
v___x_1431_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isLocalModule_spec__0(v___x_1423_, v_globs_1425_, v___x_1429_, v___x_1430_);
v___y_1422_ = v___x_1431_;
goto v___jp_1421_;
}
}
}
v___jp_1421_:
{
if (v___y_1422_ == 0)
{
goto v___jp_1415_;
}
else
{
return v___x_1420_;
}
}
}
else
{
uint8_t v___x_1432_; 
v___x_1432_ = 0;
return v___x_1432_;
}
v___jp_1415_:
{
size_t v___x_1416_; size_t v___x_1417_; 
v___x_1416_ = ((size_t)1ULL);
v___x_1417_ = lean_usize_add(v_i_1413_, v___x_1416_);
v_i_1413_ = v___x_1417_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isBuildableModule_spec__0___boxed(lean_object* v_mod_1433_, lean_object* v_self_1434_, lean_object* v_as_1435_, lean_object* v_i_1436_, lean_object* v_stop_1437_){
_start:
{
size_t v_i_boxed_1438_; size_t v_stop_boxed_1439_; uint8_t v_res_1440_; lean_object* v_r_1441_; 
v_i_boxed_1438_ = lean_unbox_usize(v_i_1436_);
lean_dec(v_i_1436_);
v_stop_boxed_1439_ = lean_unbox_usize(v_stop_1437_);
lean_dec(v_stop_1437_);
v_res_1440_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isBuildableModule_spec__0(v_mod_1433_, v_self_1434_, v_as_1435_, v_i_boxed_1438_, v_stop_boxed_1439_);
lean_dec_ref(v_as_1435_);
lean_dec_ref(v_self_1434_);
lean_dec(v_mod_1433_);
v_r_1441_ = lean_box(v_res_1440_);
return v_r_1441_;
}
}
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_isBuildableModule___redArg(lean_object* v_mod_1442_, lean_object* v_self_1443_){
_start:
{
lean_object* v_roots_1444_; lean_object* v_globs_1445_; lean_object* v___x_1453_; lean_object* v___x_1454_; uint8_t v___x_1455_; 
v_roots_1444_ = lean_ctor_get(v_self_1443_, 2);
v_globs_1445_ = lean_ctor_get(v_self_1443_, 3);
v___x_1453_ = lean_unsigned_to_nat(0u);
v___x_1454_ = lean_array_get_size(v_globs_1445_);
v___x_1455_ = lean_nat_dec_lt(v___x_1453_, v___x_1454_);
if (v___x_1455_ == 0)
{
goto v___jp_1446_;
}
else
{
if (v___x_1455_ == 0)
{
goto v___jp_1446_;
}
else
{
size_t v___x_1456_; size_t v___x_1457_; uint8_t v___x_1458_; 
v___x_1456_ = ((size_t)0ULL);
v___x_1457_ = lean_usize_of_nat(v___x_1454_);
v___x_1458_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isLocalModule_spec__0(v_mod_1442_, v_globs_1445_, v___x_1456_, v___x_1457_);
if (v___x_1458_ == 0)
{
goto v___jp_1446_;
}
else
{
return v___x_1458_;
}
}
}
v___jp_1446_:
{
lean_object* v___x_1447_; lean_object* v___x_1448_; uint8_t v___x_1449_; 
v___x_1447_ = lean_unsigned_to_nat(0u);
v___x_1448_ = lean_array_get_size(v_roots_1444_);
v___x_1449_ = lean_nat_dec_lt(v___x_1447_, v___x_1448_);
if (v___x_1449_ == 0)
{
return v___x_1449_;
}
else
{
if (v___x_1449_ == 0)
{
return v___x_1449_;
}
else
{
size_t v___x_1450_; size_t v___x_1451_; uint8_t v___x_1452_; 
v___x_1450_ = ((size_t)0ULL);
v___x_1451_ = lean_usize_of_nat(v___x_1448_);
v___x_1452_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_LeanLibConfig_isBuildableModule_spec__0(v_mod_1442_, v_self_1443_, v_roots_1444_, v___x_1450_, v___x_1451_);
return v___x_1452_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_isBuildableModule___redArg___boxed(lean_object* v_mod_1459_, lean_object* v_self_1460_){
_start:
{
uint8_t v_res_1461_; lean_object* v_r_1462_; 
v_res_1461_ = l_Lake_LeanLibConfig_isBuildableModule___redArg(v_mod_1459_, v_self_1460_);
lean_dec_ref(v_self_1460_);
lean_dec(v_mod_1459_);
v_r_1462_ = lean_box(v_res_1461_);
return v_r_1462_;
}
}
LEAN_EXPORT uint8_t l_Lake_LeanLibConfig_isBuildableModule(lean_object* v_n_1463_, lean_object* v_mod_1464_, lean_object* v_self_1465_){
_start:
{
uint8_t v___x_1466_; 
v___x_1466_ = l_Lake_LeanLibConfig_isBuildableModule___redArg(v_mod_1464_, v_self_1465_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibConfig_isBuildableModule___boxed(lean_object* v_n_1467_, lean_object* v_mod_1468_, lean_object* v_self_1469_){
_start:
{
uint8_t v_res_1470_; lean_object* v_r_1471_; 
v_res_1470_ = l_Lake_LeanLibConfig_isBuildableModule(v_n_1467_, v_mod_1468_, v_self_1469_);
lean_dec_ref(v_self_1469_);
lean_dec(v_mod_1468_);
lean_dec(v_n_1467_);
v_r_1471_ = lean_box(v_res_1470_);
return v_r_1471_;
}
}
lean_object* runtime_initialize_Lean_Compiler_NameMangling(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Casing(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Facets(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_LeanConfig(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Glob(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Meta(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_LeanLibConfig(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_Compiler_NameMangling(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Casing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Facets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_LeanConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Glob(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_LeanLibConfig___fields = _init_l_Lake_LeanLibConfig___fields();
lean_mark_persistent(l_Lake_LeanLibConfig___fields);
l_Lake_LeanLibConfig_instConfigInfo = _init_l_Lake_LeanLibConfig_instConfigInfo();
lean_mark_persistent(l_Lake_LeanLibConfig_instConfigInfo);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lake_Config_Meta(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_LeanLibConfig(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lake_Config_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_NameMangling(uint8_t builtin);
lean_object* initialize_Lake_Util_Casing(uint8_t builtin);
lean_object* initialize_Lake_Build_Facets(uint8_t builtin);
lean_object* initialize_Lake_Config_LeanConfig(uint8_t builtin);
lean_object* initialize_Lake_Config_Glob(uint8_t builtin);
lean_object* initialize_Lake_Config_Meta(uint8_t builtin);
lean_object* initialize_Lake_Config_Meta(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_LeanLibConfig(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_NameMangling(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Casing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Facets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_LeanConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Glob(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_LeanLibConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_LeanLibConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_LeanLibConfig(builtin);
}
#ifdef __cplusplus
}
#endif

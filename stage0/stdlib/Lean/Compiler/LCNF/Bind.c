// Lean compiler output
// Module: Lean.Compiler.LCNF.Bind
// Imports: public import Lean.Compiler.LCNF.InferType
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
lean_object* l_Lean_Compiler_LCNF_Code_inferParamType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_mkCasesResultType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_inferType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg(uint8_t, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Compiler_LCNF_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedBorrowed(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getArrowArity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "`Code.bind` failed, it contains an out-of-scope join point"};
static const lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___boxed__const__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "`Code.bind` failed, empty `cases` found"};
static const lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__2(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_codeBind(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_codeBind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_CompilerM_codeBind___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkNewParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkNewParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isEtaExpandCandidateCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FunDecl_isEtaExpandCandidate(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_isEtaExpandCandidate___boxed(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_etaExpand___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_etaExpand___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___redArg(uint8_t v_pu_1_, lean_object* v_inst_2_, lean_object* v_c_3_, lean_object* v_f_4_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_box(v_pu_1_);
v___x_6_ = lean_apply_3(v_inst_2_, v___x_5_, v_c_3_, v_f_4_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___redArg___boxed(lean_object* v_pu_7_, lean_object* v_inst_8_, lean_object* v_c_9_, lean_object* v_f_10_){
_start:
{
uint8_t v_pu_boxed_11_; lean_object* v_res_12_; 
v_pu_boxed_11_ = lean_unbox(v_pu_7_);
v_res_12_ = l_Lean_Compiler_LCNF_Code_bind___redArg(v_pu_boxed_11_, v_inst_8_, v_c_9_, v_f_10_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind(lean_object* v_m_13_, uint8_t v_pu_14_, lean_object* v_inst_15_, lean_object* v_c_16_, lean_object* v_f_17_){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_18_ = lean_box(v_pu_14_);
v___x_19_ = lean_apply_3(v_inst_15_, v___x_18_, v_c_16_, v_f_17_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___boxed(lean_object* v_m_20_, lean_object* v_pu_21_, lean_object* v_inst_22_, lean_object* v_c_23_, lean_object* v_f_24_){
_start:
{
uint8_t v_pu_boxed_25_; lean_object* v_res_26_; 
v_pu_boxed_25_ = lean_unbox(v_pu_21_);
v_res_26_ = l_Lean_Compiler_LCNF_Code_bind(v_m_20_, v_pu_boxed_25_, v_inst_22_, v_c_23_, v_f_24_);
return v_res_26_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_27_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__0, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__0_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__0);
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__1, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__1_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__1);
v___x_31_ = lean_unsigned_to_nat(0u);
v___x_32_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
lean_ctor_set(v___x_32_, 1, v___x_31_);
lean_ctor_set(v___x_32_, 2, v___x_31_);
lean_ctor_set(v___x_32_, 3, v___x_31_);
lean_ctor_set(v___x_32_, 4, v___x_30_);
lean_ctor_set(v___x_32_, 5, v___x_30_);
lean_ctor_set(v___x_32_, 6, v___x_30_);
lean_ctor_set(v___x_32_, 7, v___x_30_);
lean_ctor_set(v___x_32_, 8, v___x_30_);
lean_ctor_set(v___x_32_, 9, v___x_30_);
lean_ctor_set(v___x_32_, 10, v___x_30_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg(lean_object* v_msg_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_){
_start:
{
lean_object* v_toCold_39_; lean_object* v_ref_40_; lean_object* v___x_41_; lean_object* v_env_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v_toCold_39_ = lean_ctor_get(v___y_36_, 0);
v_ref_40_ = lean_ctor_get(v___y_36_, 2);
v___x_41_ = lean_st_ref_get(v___y_37_);
v_env_42_ = lean_ctor_get(v___x_41_, 0);
lean_inc_ref(v_env_42_);
lean_dec(v___x_41_);
v___x_43_ = lean_st_ref_get(v___y_35_);
v___x_44_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_34_);
if (lean_obj_tag(v___x_44_) == 0)
{
lean_object* v_a_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_67_; 
v_a_45_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_67_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_67_ == 0)
{
v___x_47_ = v___x_44_;
v_isShared_48_ = v_isSharedCheck_67_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_a_45_);
lean_dec(v___x_44_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_67_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v_lctx_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_65_; 
v_lctx_49_ = lean_ctor_get(v___x_43_, 0);
v_isSharedCheck_65_ = !lean_is_exclusive(v___x_43_);
if (v_isSharedCheck_65_ == 0)
{
lean_object* v_unused_66_; 
v_unused_66_ = lean_ctor_get(v___x_43_, 1);
lean_dec(v_unused_66_);
v___x_51_ = v___x_43_;
v_isShared_52_ = v_isSharedCheck_65_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_lctx_49_);
lean_dec(v___x_43_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_65_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v_options_53_; uint8_t v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_59_; 
v_options_53_ = lean_ctor_get(v_toCold_39_, 2);
v___x_54_ = lean_unbox(v_a_45_);
lean_dec(v_a_45_);
v___x_55_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_49_, v___x_54_);
lean_dec_ref(v_lctx_49_);
v___x_56_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__2, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__2_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__2);
lean_inc_ref(v_options_53_);
v___x_57_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_57_, 0, v_env_42_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
lean_ctor_set(v___x_57_, 2, v___x_55_);
lean_ctor_set(v___x_57_, 3, v_options_53_);
if (v_isShared_52_ == 0)
{
lean_ctor_set_tag(v___x_51_, 3);
lean_ctor_set(v___x_51_, 1, v_msg_33_);
lean_ctor_set(v___x_51_, 0, v___x_57_);
v___x_59_ = v___x_51_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v___x_57_);
lean_ctor_set(v_reuseFailAlloc_64_, 1, v_msg_33_);
v___x_59_ = v_reuseFailAlloc_64_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
lean_object* v___x_60_; lean_object* v___x_62_; 
lean_inc(v_ref_40_);
v___x_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_60_, 0, v_ref_40_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
if (v_isShared_48_ == 0)
{
lean_ctor_set_tag(v___x_47_, 1);
lean_ctor_set(v___x_47_, 0, v___x_60_);
v___x_62_ = v___x_47_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v___x_60_);
v___x_62_ = v_reuseFailAlloc_63_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
return v___x_62_;
}
}
}
}
}
else
{
lean_object* v_a_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_75_; 
lean_dec(v___x_43_);
lean_dec_ref(v_env_42_);
lean_dec_ref(v_msg_33_);
v_a_68_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_75_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_75_ == 0)
{
v___x_70_ = v___x_44_;
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_a_68_);
lean_dec(v___x_44_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v___x_73_; 
if (v_isShared_71_ == 0)
{
v___x_73_ = v___x_70_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v_a_68_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___boxed(lean_object* v_msg_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg(v_msg_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_);
lean_dec(v___y_80_);
lean_dec_ref(v___y_79_);
lean_dec(v___y_78_);
lean_dec_ref(v___y_77_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1(lean_object* v_00_u03b1_83_, lean_object* v_msg_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg(v_msg_84_, v___y_86_, v___y_87_, v___y_88_, v___y_89_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___boxed(lean_object* v_00_u03b1_92_, lean_object* v_msg_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1(v_00_u03b1_92_, v_msg_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
lean_dec_ref(v___y_95_);
lean_dec(v___y_94_);
return v_res_100_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg(lean_object* v_k_101_, lean_object* v_t_102_){
_start:
{
if (lean_obj_tag(v_t_102_) == 0)
{
lean_object* v_k_103_; lean_object* v_l_104_; lean_object* v_r_105_; uint8_t v___x_106_; 
v_k_103_ = lean_ctor_get(v_t_102_, 1);
v_l_104_ = lean_ctor_get(v_t_102_, 3);
v_r_105_ = lean_ctor_get(v_t_102_, 4);
v___x_106_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_101_, v_k_103_);
switch(v___x_106_)
{
case 0:
{
v_t_102_ = v_l_104_;
goto _start;
}
case 1:
{
uint8_t v___x_108_; 
v___x_108_ = 1;
return v___x_108_;
}
default: 
{
v_t_102_ = v_r_105_;
goto _start;
}
}
}
else
{
uint8_t v___x_110_; 
v___x_110_ = 0;
return v___x_110_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___boxed(lean_object* v_k_111_, lean_object* v_t_112_){
_start:
{
uint8_t v_res_113_; lean_object* v_r_114_; 
v_res_113_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg(v_k_111_, v_t_112_);
lean_dec(v_t_112_);
lean_dec(v_k_111_);
v_r_114_ = lean_box(v_res_113_);
return v_r_114_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__0));
v___x_117_ = l_Lean_stringToMessageData(v___x_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__2___boxed(lean_object* v_pu_120_, lean_object* v_f_121_, lean_object* v_sz_122_, lean_object* v_i_123_, lean_object* v_bs_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
uint8_t v_pu_boxed_131_; size_t v_sz_boxed_132_; size_t v_i_boxed_133_; lean_object* v_res_134_; 
v_pu_boxed_131_ = lean_unbox(v_pu_120_);
v_sz_boxed_132_ = lean_unbox_usize(v_sz_122_);
lean_dec(v_sz_122_);
v_i_boxed_133_ = lean_unbox_usize(v_i_123_);
lean_dec(v_i_123_);
v_res_134_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__2(v_pu_boxed_131_, v_f_121_, v_sz_boxed_132_, v_i_boxed_133_, v_bs_124_, v___y_125_, v___y_126_, v___y_127_, v___y_128_, v___y_129_);
lean_dec(v___y_129_);
lean_dec_ref(v___y_128_);
lean_dec(v___y_127_);
lean_dec_ref(v___y_126_);
lean_dec(v___y_125_);
return v_res_134_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__2));
v___x_137_ = l_Lean_stringToMessageData(v___x_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(uint8_t v_pu_138_, lean_object* v_f_139_, lean_object* v_c_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_){
_start:
{
switch(lean_obj_tag(v_c_140_))
{
case 0:
{
lean_object* v_decl_147_; lean_object* v_k_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_164_; 
v_decl_147_ = lean_ctor_get(v_c_140_, 0);
v_k_148_ = lean_ctor_get(v_c_140_, 1);
v_isSharedCheck_164_ = !lean_is_exclusive(v_c_140_);
if (v_isSharedCheck_164_ == 0)
{
v___x_150_ = v_c_140_;
v_isShared_151_ = v_isSharedCheck_164_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_k_148_);
lean_inc(v_decl_147_);
lean_dec(v_c_140_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_164_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_152_; 
v___x_152_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_138_, v_f_139_, v_k_148_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
if (lean_obj_tag(v___x_152_) == 0)
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_163_; 
v_a_153_ = lean_ctor_get(v___x_152_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_152_);
if (v_isSharedCheck_163_ == 0)
{
v___x_155_ = v___x_152_;
v_isShared_156_ = v_isSharedCheck_163_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v___x_152_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_163_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_158_; 
if (v_isShared_151_ == 0)
{
lean_ctor_set(v___x_150_, 1, v_a_153_);
v___x_158_ = v___x_150_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_decl_147_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v_a_153_);
v___x_158_ = v_reuseFailAlloc_162_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
lean_object* v___x_160_; 
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 0, v___x_158_);
v___x_160_ = v___x_155_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v___x_158_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
}
}
else
{
lean_del_object(v___x_150_);
lean_dec_ref(v_decl_147_);
return v___x_152_;
}
}
}
case 1:
{
lean_object* v_decl_165_; lean_object* v_k_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_182_; 
v_decl_165_ = lean_ctor_get(v_c_140_, 0);
v_k_166_ = lean_ctor_get(v_c_140_, 1);
v_isSharedCheck_182_ = !lean_is_exclusive(v_c_140_);
if (v_isSharedCheck_182_ == 0)
{
v___x_168_ = v_c_140_;
v_isShared_169_ = v_isSharedCheck_182_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_k_166_);
lean_inc(v_decl_165_);
lean_dec(v_c_140_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_182_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_170_; 
v___x_170_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_138_, v_f_139_, v_k_166_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_181_; 
v_a_171_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_181_ == 0)
{
v___x_173_ = v___x_170_;
v_isShared_174_ = v_isSharedCheck_181_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_170_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_181_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_176_; 
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 1, v_a_171_);
v___x_176_ = v___x_168_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v_decl_165_);
lean_ctor_set(v_reuseFailAlloc_180_, 1, v_a_171_);
v___x_176_ = v_reuseFailAlloc_180_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
lean_object* v___x_178_; 
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_176_);
v___x_178_ = v___x_173_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v___x_176_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
}
else
{
lean_del_object(v___x_168_);
lean_dec_ref(v_decl_165_);
return v___x_170_;
}
}
}
case 2:
{
lean_object* v_decl_183_; lean_object* v_k_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_226_; 
v_decl_183_ = lean_ctor_get(v_c_140_, 0);
v_k_184_ = lean_ctor_get(v_c_140_, 1);
v_isSharedCheck_226_ = !lean_is_exclusive(v_c_140_);
if (v_isSharedCheck_226_ == 0)
{
v___x_186_ = v_c_140_;
v_isShared_187_ = v_isSharedCheck_226_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_k_184_);
lean_inc(v_decl_183_);
lean_dec(v_c_140_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_226_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v_params_188_; lean_object* v_value_189_; lean_object* v___x_190_; 
v_params_188_ = lean_ctor_get(v_decl_183_, 2);
lean_inc_ref(v_params_188_);
v_value_189_ = lean_ctor_get(v_decl_183_, 4);
lean_inc_ref(v_value_189_);
lean_inc_ref(v_f_139_);
v___x_190_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_138_, v_f_139_, v_value_189_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
if (lean_obj_tag(v___x_190_) == 0)
{
lean_object* v_a_191_; lean_object* v___x_192_; 
v_a_191_ = lean_ctor_get(v___x_190_, 0);
lean_inc_n(v_a_191_, 2);
lean_dec_ref_known(v___x_190_, 1);
v___x_192_ = l_Lean_Compiler_LCNF_Code_inferParamType(v_pu_138_, v_params_188_, v_a_191_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
if (lean_obj_tag(v___x_192_) == 0)
{
lean_object* v_a_193_; lean_object* v___x_194_; 
v_a_193_ = lean_ctor_get(v___x_192_, 0);
lean_inc(v_a_193_);
lean_dec_ref_known(v___x_192_, 1);
v___x_194_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_138_, v_decl_183_, v_a_193_, v_params_188_, v_a_191_, v_a_143_);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v_a_195_; lean_object* v_fvarId_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v_a_195_ = lean_ctor_get(v___x_194_, 0);
lean_inc(v_a_195_);
lean_dec_ref_known(v___x_194_, 1);
v_fvarId_196_ = lean_ctor_get(v_a_195_, 0);
lean_inc(v_fvarId_196_);
lean_inc(v_a_141_);
v___x_197_ = l_Lean_FVarIdSet_insert(v_a_141_, v_fvarId_196_);
v___x_198_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_138_, v_f_139_, v_k_184_, v___x_197_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
lean_dec(v___x_197_);
if (lean_obj_tag(v___x_198_) == 0)
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_209_; 
v_a_199_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_209_ == 0)
{
v___x_201_ = v___x_198_;
v_isShared_202_ = v_isSharedCheck_209_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_198_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_209_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_187_ == 0)
{
lean_ctor_set(v___x_186_, 1, v_a_199_);
lean_ctor_set(v___x_186_, 0, v_a_195_);
v___x_204_ = v___x_186_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_a_195_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_a_199_);
v___x_204_ = v_reuseFailAlloc_208_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
lean_object* v___x_206_; 
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
}
}
else
{
lean_dec(v_a_195_);
lean_del_object(v___x_186_);
return v___x_198_;
}
}
else
{
lean_object* v_a_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_217_; 
lean_del_object(v___x_186_);
lean_dec_ref(v_k_184_);
lean_dec_ref(v_f_139_);
v_a_210_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_217_ == 0)
{
v___x_212_ = v___x_194_;
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_a_210_);
lean_dec(v___x_194_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_215_; 
if (v_isShared_213_ == 0)
{
v___x_215_ = v___x_212_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_a_210_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
return v___x_215_;
}
}
}
}
else
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_225_; 
lean_dec(v_a_191_);
lean_dec_ref(v_params_188_);
lean_del_object(v___x_186_);
lean_dec_ref(v_k_184_);
lean_dec_ref(v_decl_183_);
lean_dec_ref(v_f_139_);
v_a_218_ = lean_ctor_get(v___x_192_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v___x_192_);
if (v_isSharedCheck_225_ == 0)
{
v___x_220_ = v___x_192_;
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___x_192_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_223_; 
if (v_isShared_221_ == 0)
{
v___x_223_ = v___x_220_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_a_218_);
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
lean_dec_ref(v_params_188_);
lean_del_object(v___x_186_);
lean_dec_ref(v_k_184_);
lean_dec_ref(v_decl_183_);
lean_dec_ref(v_f_139_);
return v___x_190_;
}
}
}
case 3:
{
lean_object* v_fvarId_227_; uint8_t v___x_228_; 
lean_dec_ref(v_f_139_);
v_fvarId_227_ = lean_ctor_get(v_c_140_, 0);
v___x_228_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg(v_fvarId_227_, v_a_141_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1, &l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1_once, _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1);
v___x_230_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg(v___x_229_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
if (lean_obj_tag(v___x_230_) == 0)
{
lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_237_; 
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_237_ == 0)
{
lean_object* v_unused_238_; 
v_unused_238_ = lean_ctor_get(v___x_230_, 0);
lean_dec(v_unused_238_);
v___x_232_ = v___x_230_;
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
else
{
lean_dec(v___x_230_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_235_; 
if (v_isShared_233_ == 0)
{
lean_ctor_set(v___x_232_, 0, v_c_140_);
v___x_235_ = v___x_232_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_c_140_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
else
{
lean_object* v_a_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_246_; 
lean_dec_ref_known(v_c_140_, 2);
v_a_239_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_246_ == 0)
{
v___x_241_ = v___x_230_;
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_a_239_);
lean_dec(v___x_230_);
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
lean_object* v___x_247_; 
v___x_247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_247_, 0, v_c_140_);
return v___x_247_;
}
}
case 4:
{
lean_object* v_cases_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_318_; 
v_cases_248_ = lean_ctor_get(v_c_140_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v_c_140_);
if (v_isSharedCheck_318_ == 0)
{
v___x_250_ = v_c_140_;
v_isShared_251_ = v_isSharedCheck_318_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_cases_248_);
lean_dec(v_c_140_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_318_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v_typeName_252_; lean_object* v_discr_253_; lean_object* v_alts_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_316_; 
v_typeName_252_ = lean_ctor_get(v_cases_248_, 0);
v_discr_253_ = lean_ctor_get(v_cases_248_, 2);
v_alts_254_ = lean_ctor_get(v_cases_248_, 3);
v_isSharedCheck_316_ = !lean_is_exclusive(v_cases_248_);
if (v_isSharedCheck_316_ == 0)
{
lean_object* v_unused_317_; 
v_unused_317_ = lean_ctor_get(v_cases_248_, 1);
lean_dec(v_unused_317_);
v___x_256_ = v_cases_248_;
v_isShared_257_ = v_isSharedCheck_316_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_alts_254_);
lean_inc(v_discr_253_);
lean_inc(v_typeName_252_);
lean_dec(v_cases_248_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_316_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
size_t v_sz_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_9930__overap_264_; lean_object* v___x_265_; 
v_sz_258_ = lean_array_size(v_alts_254_);
v___x_259_ = l_unsafeCast___redArg(v_alts_254_);
lean_dec_ref(v_alts_254_);
v___x_260_ = lean_box(v_pu_138_);
v___x_261_ = lean_box_usize(v_sz_258_);
v___x_262_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___boxed__const__1));
v___x_263_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__2___boxed), 11, 5);
lean_closure_set(v___x_263_, 0, v___x_260_);
lean_closure_set(v___x_263_, 1, v_f_139_);
lean_closure_set(v___x_263_, 2, v___x_261_);
lean_closure_set(v___x_263_, 3, v___x_262_);
lean_closure_set(v___x_263_, 4, v___x_259_);
v___x_9930__overap_264_ = l_unsafeCast___redArg(v___x_263_);
lean_dec_ref(v___x_263_);
lean_inc(v_a_145_);
lean_inc_ref(v_a_144_);
lean_inc(v_a_143_);
lean_inc_ref(v_a_142_);
lean_inc(v_a_141_);
v___x_265_ = lean_apply_6(v___x_9930__overap_264_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, lean_box(0));
if (lean_obj_tag(v___x_265_) == 0)
{
lean_object* v_a_266_; lean_object* v___y_268_; lean_object* v___y_269_; lean_object* v___y_270_; lean_object* v___y_271_; lean_object* v___x_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v_a_266_ = lean_ctor_get(v___x_265_, 0);
lean_inc(v_a_266_);
lean_dec_ref_known(v___x_265_, 1);
v___x_295_ = lean_array_get_size(v_a_266_);
v___x_296_ = lean_unsigned_to_nat(0u);
v___x_297_ = lean_nat_dec_eq(v___x_295_, v___x_296_);
if (v___x_297_ == 0)
{
v___y_268_ = v_a_142_;
v___y_269_ = v_a_143_;
v___y_270_ = v_a_144_;
v___y_271_ = v_a_145_;
goto v___jp_267_;
}
else
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3, &l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3);
v___x_299_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg(v___x_298_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_dec_ref_known(v___x_299_, 1);
v___y_268_ = v_a_142_;
v___y_269_ = v_a_143_;
v___y_270_ = v_a_144_;
v___y_271_ = v_a_145_;
goto v___jp_267_;
}
else
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_307_; 
lean_dec(v_a_266_);
lean_del_object(v___x_256_);
lean_dec(v_discr_253_);
lean_dec(v_typeName_252_);
lean_del_object(v___x_250_);
v_a_300_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_307_ == 0)
{
v___x_302_ = v___x_299_;
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_299_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_305_; 
if (v_isShared_303_ == 0)
{
v___x_305_ = v___x_302_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_300_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
}
v___jp_267_:
{
lean_object* v___x_272_; 
lean_inc(v_a_266_);
v___x_272_ = l_Lean_Compiler_LCNF_mkCasesResultType(v_pu_138_, v_a_266_, v___y_268_, v___y_269_, v___y_270_, v___y_271_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_286_; 
v_a_273_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_286_ == 0)
{
v___x_275_ = v___x_272_;
v_isShared_276_ = v_isSharedCheck_286_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_272_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_286_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_278_; 
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 3, v_a_266_);
lean_ctor_set(v___x_256_, 1, v_a_273_);
v___x_278_ = v___x_256_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_typeName_252_);
lean_ctor_set(v_reuseFailAlloc_285_, 1, v_a_273_);
lean_ctor_set(v_reuseFailAlloc_285_, 2, v_discr_253_);
lean_ctor_set(v_reuseFailAlloc_285_, 3, v_a_266_);
v___x_278_ = v_reuseFailAlloc_285_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
lean_object* v___x_280_; 
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 0, v___x_278_);
v___x_280_ = v___x_250_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v___x_278_);
v___x_280_ = v_reuseFailAlloc_284_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
lean_object* v___x_282_; 
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 0, v___x_280_);
v___x_282_ = v___x_275_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_280_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
lean_dec(v_a_266_);
lean_del_object(v___x_256_);
lean_dec(v_discr_253_);
lean_dec(v_typeName_252_);
lean_del_object(v___x_250_);
v_a_287_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_294_ == 0)
{
v___x_289_ = v___x_272_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_272_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_del_object(v___x_256_);
lean_dec(v_discr_253_);
lean_dec(v_typeName_252_);
lean_del_object(v___x_250_);
v_a_308_ = lean_ctor_get(v___x_265_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_265_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_265_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_265_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
}
}
case 5:
{
lean_object* v_fvarId_319_; lean_object* v___x_320_; 
v_fvarId_319_ = lean_ctor_get(v_c_140_, 0);
lean_inc(v_fvarId_319_);
lean_dec_ref_known(v_c_140_, 1);
lean_inc(v_a_145_);
lean_inc_ref(v_a_144_);
lean_inc(v_a_143_);
lean_inc_ref(v_a_142_);
v___x_320_ = lean_apply_6(v_f_139_, v_fvarId_319_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, lean_box(0));
return v___x_320_;
}
case 6:
{
lean_object* v_type_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_378_; 
v_type_321_ = lean_ctor_get(v_c_140_, 0);
v_isSharedCheck_378_ = !lean_is_exclusive(v_c_140_);
if (v_isSharedCheck_378_ == 0)
{
v___x_323_ = v_c_140_;
v_isShared_324_ = v_isSharedCheck_378_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_type_321_);
lean_dec(v_c_140_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_378_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
uint8_t v___x_325_; lean_object* v___x_326_; 
v___x_325_ = 0;
v___x_326_ = l_Lean_Compiler_LCNF_mkAuxParam(v_pu_138_, v_type_321_, v___x_325_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
if (lean_obj_tag(v___x_326_) == 0)
{
lean_object* v_a_327_; lean_object* v_fvarId_328_; lean_object* v___x_329_; 
v_a_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc(v_a_327_);
lean_dec_ref_known(v___x_326_, 1);
v_fvarId_328_ = lean_ctor_get(v_a_327_, 0);
lean_inc(v_a_145_);
lean_inc_ref(v_a_144_);
lean_inc(v_a_143_);
lean_inc_ref(v_a_142_);
lean_inc(v_fvarId_328_);
v___x_329_ = lean_apply_6(v_f_139_, v_fvarId_328_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, lean_box(0));
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; lean_object* v___x_331_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc_n(v_a_330_, 2);
lean_dec_ref_known(v___x_329_, 1);
v___x_331_ = l_Lean_Compiler_LCNF_Code_inferType(v_pu_138_, v_a_330_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v_a_332_; lean_object* v___x_333_; 
v_a_332_ = lean_ctor_get(v___x_331_, 0);
lean_inc(v_a_332_);
lean_dec_ref_known(v___x_331_, 1);
v___x_333_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v_pu_138_, v_a_330_, v_a_143_);
lean_dec(v_a_330_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v___x_334_; 
lean_dec_ref_known(v___x_333_, 1);
v___x_334_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v_pu_138_, v_a_327_, v_a_143_);
lean_dec(v_a_327_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_344_; 
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_344_ == 0)
{
lean_object* v_unused_345_; 
v_unused_345_ = lean_ctor_get(v___x_334_, 0);
lean_dec(v_unused_345_);
v___x_336_ = v___x_334_;
v_isShared_337_ = v_isSharedCheck_344_;
goto v_resetjp_335_;
}
else
{
lean_dec(v___x_334_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_344_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_339_; 
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 0, v_a_332_);
v___x_339_ = v___x_323_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_a_332_);
v___x_339_ = v_reuseFailAlloc_343_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
lean_object* v___x_341_; 
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 0, v___x_339_);
v___x_341_ = v___x_336_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v___x_339_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_dec(v_a_332_);
lean_del_object(v___x_323_);
v_a_346_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_334_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_334_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
lean_dec(v_a_332_);
lean_dec(v_a_327_);
lean_del_object(v___x_323_);
v_a_354_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_333_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_333_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
else
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_369_; 
lean_dec(v_a_330_);
lean_dec(v_a_327_);
lean_del_object(v___x_323_);
v_a_362_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_369_ == 0)
{
v___x_364_ = v___x_331_;
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_331_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
if (v_isShared_365_ == 0)
{
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_a_362_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
else
{
lean_dec(v_a_327_);
lean_del_object(v___x_323_);
return v___x_329_;
}
}
else
{
lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_377_; 
lean_del_object(v___x_323_);
lean_dec_ref(v_f_139_);
v_a_370_ = lean_ctor_get(v___x_326_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v___x_326_);
if (v_isSharedCheck_377_ == 0)
{
v___x_372_ = v___x_326_;
v_isShared_373_ = v_isSharedCheck_377_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_326_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_377_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_375_; 
if (v_isShared_373_ == 0)
{
v___x_375_ = v___x_372_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_a_370_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
}
}
}
case 7:
{
lean_object* v_fvarId_379_; lean_object* v_i_380_; lean_object* v_y_381_; lean_object* v_k_382_; lean_object* v___x_383_; 
v_fvarId_379_ = lean_ctor_get(v_c_140_, 0);
v_i_380_ = lean_ctor_get(v_c_140_, 1);
v_y_381_ = lean_ctor_get(v_c_140_, 2);
v_k_382_ = lean_ctor_get(v_c_140_, 3);
lean_inc_ref(v_k_382_);
v___x_383_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_138_, v_f_139_, v_k_382_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
if (lean_obj_tag(v___x_383_) == 0)
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_408_; 
v_a_384_ = lean_ctor_get(v___x_383_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_383_);
if (v_isSharedCheck_408_ == 0)
{
v___x_386_ = v___x_383_;
v_isShared_387_ = v_isSharedCheck_408_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_383_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_408_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
size_t v___x_388_; size_t v___x_389_; uint8_t v___x_390_; 
v___x_388_ = lean_ptr_addr(v_k_382_);
v___x_389_ = lean_ptr_addr(v_a_384_);
v___x_390_ = lean_usize_dec_eq(v___x_388_, v___x_389_);
if (v___x_390_ == 0)
{
lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_400_; 
lean_inc(v_y_381_);
lean_inc(v_i_380_);
lean_inc(v_fvarId_379_);
v_isSharedCheck_400_ = !lean_is_exclusive(v_c_140_);
if (v_isSharedCheck_400_ == 0)
{
lean_object* v_unused_401_; lean_object* v_unused_402_; lean_object* v_unused_403_; lean_object* v_unused_404_; 
v_unused_401_ = lean_ctor_get(v_c_140_, 3);
lean_dec(v_unused_401_);
v_unused_402_ = lean_ctor_get(v_c_140_, 2);
lean_dec(v_unused_402_);
v_unused_403_ = lean_ctor_get(v_c_140_, 1);
lean_dec(v_unused_403_);
v_unused_404_ = lean_ctor_get(v_c_140_, 0);
lean_dec(v_unused_404_);
v___x_392_ = v_c_140_;
v_isShared_393_ = v_isSharedCheck_400_;
goto v_resetjp_391_;
}
else
{
lean_dec(v_c_140_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_400_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_395_; 
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 3, v_a_384_);
v___x_395_ = v___x_392_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v_fvarId_379_);
lean_ctor_set(v_reuseFailAlloc_399_, 1, v_i_380_);
lean_ctor_set(v_reuseFailAlloc_399_, 2, v_y_381_);
lean_ctor_set(v_reuseFailAlloc_399_, 3, v_a_384_);
v___x_395_ = v_reuseFailAlloc_399_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
lean_object* v___x_397_; 
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 0, v___x_395_);
v___x_397_ = v___x_386_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v___x_395_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
}
else
{
lean_object* v___x_406_; 
lean_dec(v_a_384_);
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 0, v_c_140_);
v___x_406_ = v___x_386_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_c_140_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_140_, 4);
return v___x_383_;
}
}
case 8:
{
lean_object* v_fvarId_409_; lean_object* v_i_410_; lean_object* v_y_411_; lean_object* v_k_412_; lean_object* v___x_413_; 
v_fvarId_409_ = lean_ctor_get(v_c_140_, 0);
v_i_410_ = lean_ctor_get(v_c_140_, 1);
v_y_411_ = lean_ctor_get(v_c_140_, 2);
v_k_412_ = lean_ctor_get(v_c_140_, 3);
lean_inc_ref(v_k_412_);
v___x_413_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_138_, v_f_139_, v_k_412_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
if (lean_obj_tag(v___x_413_) == 0)
{
lean_object* v_a_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_438_; 
v_a_414_ = lean_ctor_get(v___x_413_, 0);
v_isSharedCheck_438_ = !lean_is_exclusive(v___x_413_);
if (v_isSharedCheck_438_ == 0)
{
v___x_416_ = v___x_413_;
v_isShared_417_ = v_isSharedCheck_438_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_a_414_);
lean_dec(v___x_413_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_438_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
size_t v___x_418_; size_t v___x_419_; uint8_t v___x_420_; 
v___x_418_ = lean_ptr_addr(v_k_412_);
v___x_419_ = lean_ptr_addr(v_a_414_);
v___x_420_ = lean_usize_dec_eq(v___x_418_, v___x_419_);
if (v___x_420_ == 0)
{
lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_430_; 
lean_inc(v_y_411_);
lean_inc(v_i_410_);
lean_inc(v_fvarId_409_);
v_isSharedCheck_430_ = !lean_is_exclusive(v_c_140_);
if (v_isSharedCheck_430_ == 0)
{
lean_object* v_unused_431_; lean_object* v_unused_432_; lean_object* v_unused_433_; lean_object* v_unused_434_; 
v_unused_431_ = lean_ctor_get(v_c_140_, 3);
lean_dec(v_unused_431_);
v_unused_432_ = lean_ctor_get(v_c_140_, 2);
lean_dec(v_unused_432_);
v_unused_433_ = lean_ctor_get(v_c_140_, 1);
lean_dec(v_unused_433_);
v_unused_434_ = lean_ctor_get(v_c_140_, 0);
lean_dec(v_unused_434_);
v___x_422_ = v_c_140_;
v_isShared_423_ = v_isSharedCheck_430_;
goto v_resetjp_421_;
}
else
{
lean_dec(v_c_140_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_430_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_425_; 
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 3, v_a_414_);
v___x_425_ = v___x_422_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_fvarId_409_);
lean_ctor_set(v_reuseFailAlloc_429_, 1, v_i_410_);
lean_ctor_set(v_reuseFailAlloc_429_, 2, v_y_411_);
lean_ctor_set(v_reuseFailAlloc_429_, 3, v_a_414_);
v___x_425_ = v_reuseFailAlloc_429_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
lean_object* v___x_427_; 
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 0, v___x_425_);
v___x_427_ = v___x_416_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v___x_425_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
}
else
{
lean_object* v___x_436_; 
lean_dec(v_a_414_);
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 0, v_c_140_);
v___x_436_ = v___x_416_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_c_140_);
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
else
{
lean_dec_ref_known(v_c_140_, 4);
return v___x_413_;
}
}
case 9:
{
lean_object* v_fvarId_439_; lean_object* v_i_440_; lean_object* v_offset_441_; lean_object* v_y_442_; lean_object* v_ty_443_; lean_object* v_k_444_; lean_object* v___x_445_; 
v_fvarId_439_ = lean_ctor_get(v_c_140_, 0);
v_i_440_ = lean_ctor_get(v_c_140_, 1);
v_offset_441_ = lean_ctor_get(v_c_140_, 2);
v_y_442_ = lean_ctor_get(v_c_140_, 3);
v_ty_443_ = lean_ctor_get(v_c_140_, 4);
v_k_444_ = lean_ctor_get(v_c_140_, 5);
lean_inc_ref(v_k_444_);
v___x_445_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_138_, v_f_139_, v_k_444_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_472_; 
v_a_446_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_472_ == 0)
{
v___x_448_ = v___x_445_;
v_isShared_449_ = v_isSharedCheck_472_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___x_445_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_472_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
size_t v___x_450_; size_t v___x_451_; uint8_t v___x_452_; 
v___x_450_ = lean_ptr_addr(v_k_444_);
v___x_451_ = lean_ptr_addr(v_a_446_);
v___x_452_ = lean_usize_dec_eq(v___x_450_, v___x_451_);
if (v___x_452_ == 0)
{
lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_462_; 
lean_inc_ref(v_ty_443_);
lean_inc(v_y_442_);
lean_inc(v_offset_441_);
lean_inc(v_i_440_);
lean_inc(v_fvarId_439_);
v_isSharedCheck_462_ = !lean_is_exclusive(v_c_140_);
if (v_isSharedCheck_462_ == 0)
{
lean_object* v_unused_463_; lean_object* v_unused_464_; lean_object* v_unused_465_; lean_object* v_unused_466_; lean_object* v_unused_467_; lean_object* v_unused_468_; 
v_unused_463_ = lean_ctor_get(v_c_140_, 5);
lean_dec(v_unused_463_);
v_unused_464_ = lean_ctor_get(v_c_140_, 4);
lean_dec(v_unused_464_);
v_unused_465_ = lean_ctor_get(v_c_140_, 3);
lean_dec(v_unused_465_);
v_unused_466_ = lean_ctor_get(v_c_140_, 2);
lean_dec(v_unused_466_);
v_unused_467_ = lean_ctor_get(v_c_140_, 1);
lean_dec(v_unused_467_);
v_unused_468_ = lean_ctor_get(v_c_140_, 0);
lean_dec(v_unused_468_);
v___x_454_ = v_c_140_;
v_isShared_455_ = v_isSharedCheck_462_;
goto v_resetjp_453_;
}
else
{
lean_dec(v_c_140_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_462_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_457_; 
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 5, v_a_446_);
v___x_457_ = v___x_454_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_fvarId_439_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v_i_440_);
lean_ctor_set(v_reuseFailAlloc_461_, 2, v_offset_441_);
lean_ctor_set(v_reuseFailAlloc_461_, 3, v_y_442_);
lean_ctor_set(v_reuseFailAlloc_461_, 4, v_ty_443_);
lean_ctor_set(v_reuseFailAlloc_461_, 5, v_a_446_);
v___x_457_ = v_reuseFailAlloc_461_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
lean_object* v___x_459_; 
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 0, v___x_457_);
v___x_459_ = v___x_448_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v___x_457_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
else
{
lean_object* v___x_470_; 
lean_dec(v_a_446_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 0, v_c_140_);
v___x_470_ = v___x_448_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_c_140_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_140_, 6);
return v___x_445_;
}
}
case 10:
{
lean_object* v_fvarId_473_; lean_object* v_cidx_474_; lean_object* v_k_475_; lean_object* v___x_476_; 
v_fvarId_473_ = lean_ctor_get(v_c_140_, 0);
v_cidx_474_ = lean_ctor_get(v_c_140_, 1);
v_k_475_ = lean_ctor_get(v_c_140_, 2);
lean_inc_ref(v_k_475_);
v___x_476_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_138_, v_f_139_, v_k_475_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_500_; 
v_a_477_ = lean_ctor_get(v___x_476_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_476_);
if (v_isSharedCheck_500_ == 0)
{
v___x_479_ = v___x_476_;
v_isShared_480_ = v_isSharedCheck_500_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_476_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_500_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
size_t v___x_481_; size_t v___x_482_; uint8_t v___x_483_; 
v___x_481_ = lean_ptr_addr(v_k_475_);
v___x_482_ = lean_ptr_addr(v_a_477_);
v___x_483_ = lean_usize_dec_eq(v___x_481_, v___x_482_);
if (v___x_483_ == 0)
{
lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_493_; 
lean_inc(v_cidx_474_);
lean_inc(v_fvarId_473_);
v_isSharedCheck_493_ = !lean_is_exclusive(v_c_140_);
if (v_isSharedCheck_493_ == 0)
{
lean_object* v_unused_494_; lean_object* v_unused_495_; lean_object* v_unused_496_; 
v_unused_494_ = lean_ctor_get(v_c_140_, 2);
lean_dec(v_unused_494_);
v_unused_495_ = lean_ctor_get(v_c_140_, 1);
lean_dec(v_unused_495_);
v_unused_496_ = lean_ctor_get(v_c_140_, 0);
lean_dec(v_unused_496_);
v___x_485_ = v_c_140_;
v_isShared_486_ = v_isSharedCheck_493_;
goto v_resetjp_484_;
}
else
{
lean_dec(v_c_140_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_493_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_488_; 
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 2, v_a_477_);
v___x_488_ = v___x_485_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v_fvarId_473_);
lean_ctor_set(v_reuseFailAlloc_492_, 1, v_cidx_474_);
lean_ctor_set(v_reuseFailAlloc_492_, 2, v_a_477_);
v___x_488_ = v_reuseFailAlloc_492_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
lean_object* v___x_490_; 
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 0, v___x_488_);
v___x_490_ = v___x_479_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v___x_488_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
else
{
lean_object* v___x_498_; 
lean_dec(v_a_477_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 0, v_c_140_);
v___x_498_ = v___x_479_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_c_140_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_140_, 3);
return v___x_476_;
}
}
case 11:
{
lean_object* v_fvarId_501_; lean_object* v_n_502_; uint8_t v_check_503_; uint8_t v_persistent_504_; lean_object* v_k_505_; lean_object* v___x_506_; 
v_fvarId_501_ = lean_ctor_get(v_c_140_, 0);
v_n_502_ = lean_ctor_get(v_c_140_, 1);
v_check_503_ = lean_ctor_get_uint8(v_c_140_, sizeof(void*)*3);
v_persistent_504_ = lean_ctor_get_uint8(v_c_140_, sizeof(void*)*3 + 1);
v_k_505_ = lean_ctor_get(v_c_140_, 2);
lean_inc_ref(v_k_505_);
v___x_506_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_138_, v_f_139_, v_k_505_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
if (lean_obj_tag(v___x_506_) == 0)
{
lean_object* v_a_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_530_; 
v_a_507_ = lean_ctor_get(v___x_506_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_506_);
if (v_isSharedCheck_530_ == 0)
{
v___x_509_ = v___x_506_;
v_isShared_510_ = v_isSharedCheck_530_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_a_507_);
lean_dec(v___x_506_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_530_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
size_t v___x_511_; size_t v___x_512_; uint8_t v___x_513_; 
v___x_511_ = lean_ptr_addr(v_k_505_);
v___x_512_ = lean_ptr_addr(v_a_507_);
v___x_513_ = lean_usize_dec_eq(v___x_511_, v___x_512_);
if (v___x_513_ == 0)
{
lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_523_; 
lean_inc(v_n_502_);
lean_inc(v_fvarId_501_);
v_isSharedCheck_523_ = !lean_is_exclusive(v_c_140_);
if (v_isSharedCheck_523_ == 0)
{
lean_object* v_unused_524_; lean_object* v_unused_525_; lean_object* v_unused_526_; 
v_unused_524_ = lean_ctor_get(v_c_140_, 2);
lean_dec(v_unused_524_);
v_unused_525_ = lean_ctor_get(v_c_140_, 1);
lean_dec(v_unused_525_);
v_unused_526_ = lean_ctor_get(v_c_140_, 0);
lean_dec(v_unused_526_);
v___x_515_ = v_c_140_;
v_isShared_516_ = v_isSharedCheck_523_;
goto v_resetjp_514_;
}
else
{
lean_dec(v_c_140_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_523_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_518_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 2, v_a_507_);
v___x_518_ = v___x_515_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_fvarId_501_);
lean_ctor_set(v_reuseFailAlloc_522_, 1, v_n_502_);
lean_ctor_set(v_reuseFailAlloc_522_, 2, v_a_507_);
lean_ctor_set_uint8(v_reuseFailAlloc_522_, sizeof(void*)*3, v_check_503_);
lean_ctor_set_uint8(v_reuseFailAlloc_522_, sizeof(void*)*3 + 1, v_persistent_504_);
v___x_518_ = v_reuseFailAlloc_522_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
lean_object* v___x_520_; 
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 0, v___x_518_);
v___x_520_ = v___x_509_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v___x_518_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
}
else
{
lean_object* v___x_528_; 
lean_dec(v_a_507_);
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 0, v_c_140_);
v___x_528_ = v___x_509_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_c_140_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_140_, 3);
return v___x_506_;
}
}
case 12:
{
lean_object* v_fvarId_531_; lean_object* v_n_532_; uint8_t v_check_533_; uint8_t v_persistent_534_; lean_object* v_objs_x3f_535_; lean_object* v_k_536_; lean_object* v___x_537_; 
v_fvarId_531_ = lean_ctor_get(v_c_140_, 0);
v_n_532_ = lean_ctor_get(v_c_140_, 1);
v_check_533_ = lean_ctor_get_uint8(v_c_140_, sizeof(void*)*4);
v_persistent_534_ = lean_ctor_get_uint8(v_c_140_, sizeof(void*)*4 + 1);
v_objs_x3f_535_ = lean_ctor_get(v_c_140_, 2);
v_k_536_ = lean_ctor_get(v_c_140_, 3);
lean_inc_ref(v_k_536_);
v___x_537_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_138_, v_f_139_, v_k_536_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
if (lean_obj_tag(v___x_537_) == 0)
{
lean_object* v_a_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_562_; 
v_a_538_ = lean_ctor_get(v___x_537_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_562_ == 0)
{
v___x_540_ = v___x_537_;
v_isShared_541_ = v_isSharedCheck_562_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_a_538_);
lean_dec(v___x_537_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_562_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
size_t v___x_542_; size_t v___x_543_; uint8_t v___x_544_; 
v___x_542_ = lean_ptr_addr(v_k_536_);
v___x_543_ = lean_ptr_addr(v_a_538_);
v___x_544_ = lean_usize_dec_eq(v___x_542_, v___x_543_);
if (v___x_544_ == 0)
{
lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_554_; 
lean_inc(v_objs_x3f_535_);
lean_inc(v_n_532_);
lean_inc(v_fvarId_531_);
v_isSharedCheck_554_ = !lean_is_exclusive(v_c_140_);
if (v_isSharedCheck_554_ == 0)
{
lean_object* v_unused_555_; lean_object* v_unused_556_; lean_object* v_unused_557_; lean_object* v_unused_558_; 
v_unused_555_ = lean_ctor_get(v_c_140_, 3);
lean_dec(v_unused_555_);
v_unused_556_ = lean_ctor_get(v_c_140_, 2);
lean_dec(v_unused_556_);
v_unused_557_ = lean_ctor_get(v_c_140_, 1);
lean_dec(v_unused_557_);
v_unused_558_ = lean_ctor_get(v_c_140_, 0);
lean_dec(v_unused_558_);
v___x_546_ = v_c_140_;
v_isShared_547_ = v_isSharedCheck_554_;
goto v_resetjp_545_;
}
else
{
lean_dec(v_c_140_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_554_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_549_; 
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 3, v_a_538_);
v___x_549_ = v___x_546_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v_fvarId_531_);
lean_ctor_set(v_reuseFailAlloc_553_, 1, v_n_532_);
lean_ctor_set(v_reuseFailAlloc_553_, 2, v_objs_x3f_535_);
lean_ctor_set(v_reuseFailAlloc_553_, 3, v_a_538_);
lean_ctor_set_uint8(v_reuseFailAlloc_553_, sizeof(void*)*4, v_check_533_);
lean_ctor_set_uint8(v_reuseFailAlloc_553_, sizeof(void*)*4 + 1, v_persistent_534_);
v___x_549_ = v_reuseFailAlloc_553_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
lean_object* v___x_551_; 
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 0, v___x_549_);
v___x_551_ = v___x_540_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v___x_549_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
}
}
else
{
lean_object* v___x_560_; 
lean_dec(v_a_538_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 0, v_c_140_);
v___x_560_ = v___x_540_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v_c_140_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_140_, 4);
return v___x_537_;
}
}
default: 
{
lean_object* v_fvarId_563_; lean_object* v_k_564_; lean_object* v___x_565_; 
v_fvarId_563_ = lean_ctor_get(v_c_140_, 0);
v_k_564_ = lean_ctor_get(v_c_140_, 1);
lean_inc_ref(v_k_564_);
v___x_565_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_138_, v_f_139_, v_k_564_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_588_; 
v_a_566_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_588_ == 0)
{
v___x_568_ = v___x_565_;
v_isShared_569_ = v_isSharedCheck_588_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v___x_565_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_588_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
size_t v___x_570_; size_t v___x_571_; uint8_t v___x_572_; 
v___x_570_ = lean_ptr_addr(v_k_564_);
v___x_571_ = lean_ptr_addr(v_a_566_);
v___x_572_ = lean_usize_dec_eq(v___x_570_, v___x_571_);
if (v___x_572_ == 0)
{
lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_582_; 
lean_inc(v_fvarId_563_);
v_isSharedCheck_582_ = !lean_is_exclusive(v_c_140_);
if (v_isSharedCheck_582_ == 0)
{
lean_object* v_unused_583_; lean_object* v_unused_584_; 
v_unused_583_ = lean_ctor_get(v_c_140_, 1);
lean_dec(v_unused_583_);
v_unused_584_ = lean_ctor_get(v_c_140_, 0);
lean_dec(v_unused_584_);
v___x_574_ = v_c_140_;
v_isShared_575_ = v_isSharedCheck_582_;
goto v_resetjp_573_;
}
else
{
lean_dec(v_c_140_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_582_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_577_; 
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 1, v_a_566_);
v___x_577_ = v___x_574_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_fvarId_563_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v_a_566_);
v___x_577_ = v_reuseFailAlloc_581_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
lean_object* v___x_579_; 
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 0, v___x_577_);
v___x_579_ = v___x_568_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v___x_577_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
}
}
}
}
else
{
lean_object* v___x_586_; 
lean_dec(v_a_566_);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 0, v_c_140_);
v___x_586_ = v___x_568_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_c_140_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_140_, 2);
return v___x_565_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__2(uint8_t v_pu_589_, lean_object* v_f_590_, size_t v_sz_591_, size_t v_i_592_, lean_object* v_bs_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_){
_start:
{
uint8_t v___x_600_; 
v___x_600_ = lean_usize_dec_lt(v_i_592_, v_sz_591_);
if (v___x_600_ == 0)
{
lean_object* v___x_601_; lean_object* v___x_602_; 
lean_dec_ref(v_f_590_);
v___x_601_ = l_unsafeCast___redArg(v_bs_593_);
lean_dec_ref(v_bs_593_);
v___x_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
return v___x_602_;
}
else
{
lean_object* v_v_603_; lean_object* v___x_604_; lean_object* v_bs_x27_605_; lean_object* v_a_607_; lean_object* v___x_613_; 
v_v_603_ = lean_array_uget(v_bs_593_, v_i_592_);
v___x_604_ = lean_unsigned_to_nat(0u);
v_bs_x27_605_ = lean_array_uset(v_bs_593_, v_i_592_, v___x_604_);
v___x_613_ = l_unsafeCast___redArg(v_v_603_);
lean_dec(v_v_603_);
switch(lean_obj_tag(v___x_613_))
{
case 0:
{
lean_object* v_ctorName_614_; lean_object* v_params_615_; lean_object* v_code_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_633_; 
v_ctorName_614_ = lean_ctor_get(v___x_613_, 0);
v_params_615_ = lean_ctor_get(v___x_613_, 1);
v_code_616_ = lean_ctor_get(v___x_613_, 2);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_633_ == 0)
{
v___x_618_ = v___x_613_;
v_isShared_619_ = v_isSharedCheck_633_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_code_616_);
lean_inc(v_params_615_);
lean_inc(v_ctorName_614_);
lean_dec(v___x_613_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_633_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_620_; 
lean_inc_ref(v_f_590_);
v___x_620_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_589_, v_f_590_, v_code_616_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v_a_621_; lean_object* v___x_623_; 
v_a_621_ = lean_ctor_get(v___x_620_, 0);
lean_inc(v_a_621_);
lean_dec_ref_known(v___x_620_, 1);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 2, v_a_621_);
v___x_623_ = v___x_618_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_ctorName_614_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v_params_615_);
lean_ctor_set(v_reuseFailAlloc_624_, 2, v_a_621_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
v_a_607_ = v___x_623_;
goto v___jp_606_;
}
}
else
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_632_; 
lean_del_object(v___x_618_);
lean_dec_ref(v_params_615_);
lean_dec(v_ctorName_614_);
lean_dec_ref(v_bs_x27_605_);
lean_dec_ref(v_f_590_);
v_a_625_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_632_ == 0)
{
v___x_627_ = v___x_620_;
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_620_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
if (v_isShared_628_ == 0)
{
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_a_625_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
}
case 1:
{
lean_object* v_info_634_; lean_object* v_code_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_652_; 
v_info_634_ = lean_ctor_get(v___x_613_, 0);
v_code_635_ = lean_ctor_get(v___x_613_, 1);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_652_ == 0)
{
v___x_637_ = v___x_613_;
v_isShared_638_ = v_isSharedCheck_652_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_code_635_);
lean_inc(v_info_634_);
lean_dec(v___x_613_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_652_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_639_; 
lean_inc_ref(v_f_590_);
v___x_639_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_589_, v_f_590_, v_code_635_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
if (lean_obj_tag(v___x_639_) == 0)
{
lean_object* v_a_640_; lean_object* v___x_642_; 
v_a_640_ = lean_ctor_get(v___x_639_, 0);
lean_inc(v_a_640_);
lean_dec_ref_known(v___x_639_, 1);
if (v_isShared_638_ == 0)
{
lean_ctor_set(v___x_637_, 1, v_a_640_);
v___x_642_ = v___x_637_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_info_634_);
lean_ctor_set(v_reuseFailAlloc_643_, 1, v_a_640_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
v_a_607_ = v___x_642_;
goto v___jp_606_;
}
}
else
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_651_; 
lean_del_object(v___x_637_);
lean_dec_ref(v_info_634_);
lean_dec_ref(v_bs_x27_605_);
lean_dec_ref(v_f_590_);
v_a_644_ = lean_ctor_get(v___x_639_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_651_ == 0)
{
v___x_646_ = v___x_639_;
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_639_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_649_; 
if (v_isShared_647_ == 0)
{
v___x_649_ = v___x_646_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_a_644_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
}
default: 
{
lean_object* v_code_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_670_; 
v_code_653_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_670_ == 0)
{
v___x_655_ = v___x_613_;
v_isShared_656_ = v_isSharedCheck_670_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_code_653_);
lean_dec(v___x_613_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_670_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_657_; 
lean_inc_ref(v_f_590_);
v___x_657_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_589_, v_f_590_, v_code_653_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v_a_658_; lean_object* v___x_660_; 
v_a_658_ = lean_ctor_get(v___x_657_, 0);
lean_inc(v_a_658_);
lean_dec_ref_known(v___x_657_, 1);
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 0, v_a_658_);
v___x_660_ = v___x_655_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_a_658_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
v_a_607_ = v___x_660_;
goto v___jp_606_;
}
}
else
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_669_; 
lean_del_object(v___x_655_);
lean_dec_ref(v_bs_x27_605_);
lean_dec_ref(v_f_590_);
v_a_662_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_669_ == 0)
{
v___x_664_ = v___x_657_;
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_657_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_667_; 
if (v_isShared_665_ == 0)
{
v___x_667_ = v___x_664_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_a_662_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
}
}
}
v___jp_606_:
{
size_t v___x_608_; size_t v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_608_ = ((size_t)1ULL);
v___x_609_ = lean_usize_add(v_i_592_, v___x_608_);
v___x_610_ = l_unsafeCast___redArg(v_a_607_);
lean_dec_ref(v_a_607_);
v___x_611_ = lean_array_uset(v_bs_x27_605_, v_i_592_, v___x_610_);
v_i_592_ = v___x_609_;
v_bs_593_ = v___x_611_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___boxed(lean_object* v_pu_671_, lean_object* v_f_672_, lean_object* v_c_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_){
_start:
{
uint8_t v_pu_boxed_680_; lean_object* v_res_681_; 
v_pu_boxed_680_ = lean_unbox(v_pu_671_);
v_res_681_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_boxed_680_, v_f_672_, v_c_673_, v_a_674_, v_a_675_, v_a_676_, v_a_677_, v_a_678_);
lean_dec(v_a_678_);
lean_dec_ref(v_a_677_);
lean_dec(v_a_676_);
lean_dec_ref(v_a_675_);
lean_dec(v_a_674_);
return v_res_681_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0(lean_object* v_00_u03b2_682_, lean_object* v_k_683_, lean_object* v_t_684_){
_start:
{
uint8_t v___x_685_; 
v___x_685_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg(v_k_683_, v_t_684_);
return v___x_685_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___boxed(lean_object* v_00_u03b2_686_, lean_object* v_k_687_, lean_object* v_t_688_){
_start:
{
uint8_t v_res_689_; lean_object* v_r_690_; 
v_res_689_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0(v_00_u03b2_686_, v_k_687_, v_t_688_);
lean_dec(v_t_688_);
lean_dec(v_k_687_);
v_r_690_ = lean_box(v_res_689_);
return v_r_690_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_codeBind(uint8_t v_pu_691_, lean_object* v_c_692_, lean_object* v_f_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_699_ = lean_box(1);
v___x_700_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_691_, v_f_693_, v_c_692_, v___x_699_, v_a_694_, v_a_695_, v_a_696_, v_a_697_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_codeBind___boxed(lean_object* v_pu_701_, lean_object* v_c_702_, lean_object* v_f_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
uint8_t v_pu_boxed_709_; lean_object* v_res_710_; 
v_pu_boxed_709_ = lean_unbox(v_pu_701_);
v_res_710_ = l_Lean_Compiler_LCNF_CompilerM_codeBind(v_pu_boxed_709_, v_c_702_, v_f_703_, v_a_704_, v_a_705_, v_a_706_, v_a_707_);
lean_dec(v_a_707_);
lean_dec_ref(v_a_706_);
lean_dec(v_a_705_);
lean_dec_ref(v_a_704_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__0(lean_object* v_f_713_, lean_object* v_ctx_714_, lean_object* v_fvarId_715_){
_start:
{
lean_object* v___x_716_; 
v___x_716_ = lean_apply_2(v_f_713_, v_fvarId_715_, v_ctx_714_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1(lean_object* v_inst_717_, uint8_t v_pu_718_, lean_object* v_c_719_, lean_object* v_f_720_, lean_object* v_ctx_721_){
_start:
{
lean_object* v___f_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v___f_722_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__0), 3, 2);
lean_closure_set(v___f_722_, 0, v_f_720_);
lean_closure_set(v___f_722_, 1, v_ctx_721_);
v___x_723_ = lean_box(v_pu_718_);
v___x_724_ = lean_apply_3(v_inst_717_, v___x_723_, v_c_719_, v___f_722_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1___boxed(lean_object* v_inst_725_, lean_object* v_pu_726_, lean_object* v_c_727_, lean_object* v_f_728_, lean_object* v_ctx_729_){
_start:
{
uint8_t v_pu_21__boxed_730_; lean_object* v_res_731_; 
v_pu_21__boxed_730_ = lean_unbox(v_pu_726_);
v_res_731_ = l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1(v_inst_725_, v_pu_21__boxed_730_, v_c_727_, v_f_728_, v_ctx_729_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg(lean_object* v_inst_732_){
_start:
{
lean_object* v___f_733_; 
v___f_733_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1___boxed), 5, 1);
lean_closure_set(v___f_733_, 0, v_inst_732_);
return v___f_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT(lean_object* v_m_734_, lean_object* v_00_u03c1_735_, lean_object* v_inst_736_){
_start:
{
lean_object* v___f_737_; 
v___f_737_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1___boxed), 5, 1);
lean_closure_set(v___f_737_, 0, v_inst_736_);
return v___f_737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__0(lean_object* v_f_738_, lean_object* v_sref_739_, lean_object* v_fvarId_740_){
_start:
{
lean_object* v___x_741_; 
v___x_741_ = lean_apply_2(v_f_738_, v_fvarId_740_, v_sref_739_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__1(lean_object* v_inst_742_, uint8_t v_pu_743_, lean_object* v_c_744_, lean_object* v_f_745_, lean_object* v_sref_746_){
_start:
{
lean_object* v___f_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___f_747_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__0), 3, 2);
lean_closure_set(v___f_747_, 0, v_f_745_);
lean_closure_set(v___f_747_, 1, v_sref_746_);
v___x_748_ = lean_box(v_pu_743_);
v___x_749_ = lean_apply_3(v_inst_742_, v___x_748_, v_c_744_, v___f_747_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__1___boxed(lean_object* v_inst_750_, lean_object* v_pu_751_, lean_object* v_c_752_, lean_object* v_f_753_, lean_object* v_sref_754_){
_start:
{
uint8_t v_pu_23__boxed_755_; lean_object* v_res_756_; 
v_pu_23__boxed_755_ = lean_unbox(v_pu_751_);
v_res_756_ = l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__1(v_inst_750_, v_pu_23__boxed_755_, v_c_752_, v_f_753_, v_sref_754_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg(lean_object* v_inst_757_){
_start:
{
lean_object* v___f_758_; 
v___f_758_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__1___boxed), 5, 1);
lean_closure_set(v___f_758_, 0, v_inst_757_);
return v___f_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld(lean_object* v_00_u03c9_759_, lean_object* v_m_760_, lean_object* v_00_u03c3_761_, lean_object* v_inst_762_, lean_object* v_inst_763_){
_start:
{
lean_object* v___f_764_; 
v___f_764_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__1___boxed), 5, 1);
lean_closure_set(v___f_764_, 0, v_inst_763_);
return v___f_764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go(uint8_t v_pu_767_, lean_object* v_type_768_, lean_object* v_xs_769_, lean_object* v_ps_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_){
_start:
{
if (lean_obj_tag(v_type_768_) == 7)
{
lean_object* v_binderType_776_; lean_object* v_body_777_; lean_object* v_d_778_; uint8_t v___x_779_; lean_object* v___x_780_; 
v_binderType_776_ = lean_ctor_get(v_type_768_, 1);
lean_inc_ref(v_binderType_776_);
v_body_777_ = lean_ctor_get(v_type_768_, 2);
lean_inc_ref(v_body_777_);
lean_dec_ref_known(v_type_768_, 3);
v_d_778_ = lean_expr_instantiate_rev(v_binderType_776_, v_xs_769_);
lean_dec_ref(v_binderType_776_);
v___x_779_ = l_Lean_isMarkedBorrowed(v_d_778_);
v___x_780_ = l_Lean_Compiler_LCNF_mkAuxParam(v_pu_767_, v_d_778_, v___x_779_, v_a_771_, v_a_772_, v_a_773_, v_a_774_);
if (lean_obj_tag(v___x_780_) == 0)
{
lean_object* v_a_781_; lean_object* v_fvarId_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v_a_781_ = lean_ctor_get(v___x_780_, 0);
lean_inc(v_a_781_);
lean_dec_ref_known(v___x_780_, 1);
v_fvarId_782_ = lean_ctor_get(v_a_781_, 0);
lean_inc(v_fvarId_782_);
v___x_783_ = l_Lean_Expr_fvar___override(v_fvarId_782_);
v___x_784_ = lean_array_push(v_xs_769_, v___x_783_);
v___x_785_ = lean_array_push(v_ps_770_, v_a_781_);
v_type_768_ = v_body_777_;
v_xs_769_ = v___x_784_;
v_ps_770_ = v___x_785_;
goto _start;
}
else
{
lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_794_; 
lean_dec_ref(v_body_777_);
lean_dec_ref(v_ps_770_);
lean_dec_ref(v_xs_769_);
v_a_787_ = lean_ctor_get(v___x_780_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_794_ == 0)
{
v___x_789_ = v___x_780_;
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v___x_780_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_792_; 
if (v_isShared_790_ == 0)
{
v___x_792_ = v___x_789_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_a_787_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
else
{
lean_object* v_type_795_; lean_object* v_type_x27_796_; uint8_t v___x_797_; 
v_type_795_ = lean_expr_instantiate_rev(v_type_768_, v_xs_769_);
lean_dec_ref(v_xs_769_);
lean_dec_ref(v_type_768_);
lean_inc_ref(v_type_795_);
v_type_x27_796_ = l_Lean_Expr_headBeta(v_type_795_);
v___x_797_ = lean_expr_eqv(v_type_x27_796_, v_type_795_);
lean_dec_ref(v_type_795_);
if (v___x_797_ == 0)
{
lean_object* v___x_798_; 
v___x_798_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0));
v_type_768_ = v_type_x27_796_;
v_xs_769_ = v___x_798_;
goto _start;
}
else
{
lean_object* v___x_800_; 
lean_dec_ref(v_type_x27_796_);
v___x_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_800_, 0, v_ps_770_);
return v___x_800_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___boxed(lean_object* v_pu_801_, lean_object* v_type_802_, lean_object* v_xs_803_, lean_object* v_ps_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_, lean_object* v_a_809_){
_start:
{
uint8_t v_pu_boxed_810_; lean_object* v_res_811_; 
v_pu_boxed_810_ = lean_unbox(v_pu_801_);
v_res_811_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go(v_pu_boxed_810_, v_type_802_, v_xs_803_, v_ps_804_, v_a_805_, v_a_806_, v_a_807_, v_a_808_);
lean_dec(v_a_808_);
lean_dec_ref(v_a_807_);
lean_dec(v_a_806_);
lean_dec_ref(v_a_805_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkNewParams(uint8_t v_pu_812_, lean_object* v_type_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_){
_start:
{
lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_819_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0));
v___x_820_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go(v_pu_812_, v_type_813_, v___x_819_, v___x_819_, v_a_814_, v_a_815_, v_a_816_, v_a_817_);
return v___x_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkNewParams___boxed(lean_object* v_pu_821_, lean_object* v_type_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_){
_start:
{
uint8_t v_pu_boxed_828_; lean_object* v_res_829_; 
v_pu_boxed_828_ = lean_unbox(v_pu_821_);
v_res_829_ = l_Lean_Compiler_LCNF_mkNewParams(v_pu_boxed_828_, v_type_822_, v_a_823_, v_a_824_, v_a_825_, v_a_826_);
lean_dec(v_a_826_);
lean_dec_ref(v_a_825_);
lean_dec(v_a_824_);
lean_dec_ref(v_a_823_);
return v_res_829_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(lean_object* v_type_830_, lean_object* v_params_831_){
_start:
{
lean_object* v_typeArity_832_; lean_object* v_valueArity_833_; uint8_t v___x_834_; 
v_typeArity_832_ = l_Lean_Compiler_LCNF_getArrowArity(v_type_830_);
v_valueArity_833_ = lean_array_get_size(v_params_831_);
v___x_834_ = lean_nat_dec_lt(v_valueArity_833_, v_typeArity_832_);
lean_dec(v_typeArity_832_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isEtaExpandCandidateCore___boxed(lean_object* v_type_835_, lean_object* v_params_836_){
_start:
{
uint8_t v_res_837_; lean_object* v_r_838_; 
v_res_837_ = l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(v_type_835_, v_params_836_);
lean_dec_ref(v_params_836_);
v_r_838_ = lean_box(v_res_837_);
return v_r_838_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FunDecl_isEtaExpandCandidate(lean_object* v_decl_839_){
_start:
{
lean_object* v_params_840_; lean_object* v_type_841_; uint8_t v___x_842_; 
v_params_840_ = lean_ctor_get(v_decl_839_, 2);
lean_inc_ref(v_params_840_);
v_type_841_ = lean_ctor_get(v_decl_839_, 3);
lean_inc_ref(v_type_841_);
lean_dec_ref(v_decl_839_);
v___x_842_ = l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(v_type_841_, v_params_840_);
lean_dec_ref(v_params_840_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_isEtaExpandCandidate___boxed(lean_object* v_decl_843_){
_start:
{
uint8_t v_res_844_; lean_object* v_r_845_; 
v_res_844_ = l_Lean_Compiler_LCNF_FunDecl_isEtaExpandCandidate(v_decl_843_);
v_r_845_ = lean_box(v_res_844_);
return v_r_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0(lean_object* v___x_849_, uint8_t v___x_850_, lean_object* v_fvarId_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_){
_start:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_857_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_857_, 0, v_fvarId_851_);
lean_ctor_set(v___x_857_, 1, v___x_849_);
v___x_858_ = ((lean_object*)(l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__1));
v___x_859_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_850_, v___x_857_, v___x_858_, v___y_852_, v___y_853_, v___y_854_, v___y_855_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_870_; 
v_a_860_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_870_ == 0)
{
v___x_862_ = v___x_859_;
v_isShared_863_ = v_isSharedCheck_870_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v___x_859_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_870_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v_fvarId_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_868_; 
v_fvarId_864_ = lean_ctor_get(v_a_860_, 0);
lean_inc(v_fvarId_864_);
v___x_865_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_865_, 0, v_fvarId_864_);
v___x_866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_866_, 0, v_a_860_);
lean_ctor_set(v___x_866_, 1, v___x_865_);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 0, v___x_866_);
v___x_868_ = v___x_862_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v___x_866_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
else
{
lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_878_; 
v_a_871_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_878_ == 0)
{
v___x_873_ = v___x_859_;
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_a_871_);
lean_dec(v___x_859_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_876_; 
if (v_isShared_874_ == 0)
{
v___x_876_ = v___x_873_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_a_871_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0___boxed(lean_object* v___x_879_, lean_object* v___x_880_, lean_object* v_fvarId_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_){
_start:
{
uint8_t v___x_934__boxed_887_; lean_object* v_res_888_; 
v___x_934__boxed_887_ = lean_unbox(v___x_880_);
v_res_888_ = l_Lean_Compiler_LCNF_etaExpandCore___lam__0(v___x_879_, v___x_934__boxed_887_, v_fvarId_881_, v___y_882_, v___y_883_, v___y_884_, v___y_885_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1(size_t v_sz_889_, size_t v_i_890_, lean_object* v_bs_891_){
_start:
{
uint8_t v___x_892_; 
v___x_892_ = lean_usize_dec_lt(v_i_890_, v_sz_889_);
if (v___x_892_ == 0)
{
lean_object* v___x_893_; 
v___x_893_ = l_unsafeCast___redArg(v_bs_891_);
lean_dec_ref(v_bs_891_);
return v___x_893_;
}
else
{
lean_object* v_v_894_; lean_object* v___x_895_; lean_object* v_fvarId_896_; lean_object* v___x_897_; lean_object* v_bs_x27_898_; lean_object* v___x_899_; size_t v___x_900_; size_t v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v_v_894_ = lean_array_uget_borrowed(v_bs_891_, v_i_890_);
v___x_895_ = l_unsafeCast___redArg(v_v_894_);
v_fvarId_896_ = lean_ctor_get(v___x_895_, 0);
lean_inc(v_fvarId_896_);
lean_dec(v___x_895_);
v___x_897_ = lean_unsigned_to_nat(0u);
v_bs_x27_898_ = lean_array_uset(v_bs_891_, v_i_890_, v___x_897_);
v___x_899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_899_, 0, v_fvarId_896_);
v___x_900_ = ((size_t)1ULL);
v___x_901_ = lean_usize_add(v_i_890_, v___x_900_);
v___x_902_ = l_unsafeCast___redArg(v___x_899_);
lean_dec_ref_known(v___x_899_, 1);
v___x_903_ = lean_array_uset(v_bs_x27_898_, v_i_890_, v___x_902_);
v_i_890_ = v___x_901_;
v_bs_891_ = v___x_903_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1___boxed(lean_object* v_sz_905_, lean_object* v_i_906_, lean_object* v_bs_907_){
_start:
{
size_t v_sz_boxed_908_; size_t v_i_boxed_909_; lean_object* v_res_910_; 
v_sz_boxed_908_ = lean_unbox_usize(v_sz_905_);
lean_dec(v_sz_905_);
v_i_boxed_909_ = lean_unbox_usize(v_i_906_);
lean_dec(v_i_906_);
v_res_910_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1(v_sz_boxed_908_, v_i_boxed_909_, v_bs_907_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0(size_t v_sz_911_, size_t v_i_912_, lean_object* v_bs_913_){
_start:
{
uint8_t v___x_914_; 
v___x_914_ = lean_usize_dec_lt(v_i_912_, v_sz_911_);
if (v___x_914_ == 0)
{
lean_object* v___x_915_; 
v___x_915_ = l_unsafeCast___redArg(v_bs_913_);
lean_dec_ref(v_bs_913_);
return v___x_915_;
}
else
{
lean_object* v_v_916_; lean_object* v___x_917_; lean_object* v_fvarId_918_; lean_object* v___x_919_; lean_object* v_bs_x27_920_; lean_object* v___x_921_; size_t v___x_922_; size_t v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v_v_916_ = lean_array_uget_borrowed(v_bs_913_, v_i_912_);
v___x_917_ = l_unsafeCast___redArg(v_v_916_);
v_fvarId_918_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_fvarId_918_);
lean_dec(v___x_917_);
v___x_919_ = lean_unsigned_to_nat(0u);
v_bs_x27_920_ = lean_array_uset(v_bs_913_, v_i_912_, v___x_919_);
v___x_921_ = l_Lean_mkFVar(v_fvarId_918_);
v___x_922_ = ((size_t)1ULL);
v___x_923_ = lean_usize_add(v_i_912_, v___x_922_);
v___x_924_ = l_unsafeCast___redArg(v___x_921_);
lean_dec_ref(v___x_921_);
v___x_925_ = lean_array_uset(v_bs_x27_920_, v_i_912_, v___x_924_);
v_i_912_ = v___x_923_;
v_bs_913_ = v___x_925_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0___boxed(lean_object* v_sz_927_, lean_object* v_i_928_, lean_object* v_bs_929_){
_start:
{
size_t v_sz_boxed_930_; size_t v_i_boxed_931_; lean_object* v_res_932_; 
v_sz_boxed_930_ = lean_unbox_usize(v_sz_927_);
lean_dec(v_sz_927_);
v_i_boxed_931_ = lean_unbox_usize(v_i_928_);
lean_dec(v_i_928_);
v_res_932_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0(v_sz_boxed_930_, v_i_boxed_931_, v_bs_929_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore(lean_object* v_type_933_, lean_object* v_params_934_, lean_object* v_value_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_){
_start:
{
size_t v_sz_941_; size_t v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
v_sz_941_ = lean_array_size(v_params_934_);
v___x_942_ = ((size_t)0ULL);
v___x_943_ = l_unsafeCast___redArg(v_params_934_);
v___x_944_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0(v_sz_941_, v___x_942_, v___x_943_);
v___x_945_ = l_unsafeCast___redArg(v___x_944_);
lean_dec_ref(v___x_944_);
v___x_946_ = l_Lean_Compiler_LCNF_instantiateForall(v_type_933_, v___x_945_, v_a_938_, v_a_939_);
lean_dec(v___x_945_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v_a_947_; uint8_t v___x_948_; lean_object* v___x_949_; 
v_a_947_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_a_947_);
lean_dec_ref_known(v___x_946_, 1);
v___x_948_ = 0;
v___x_949_ = l_Lean_Compiler_LCNF_mkNewParams(v___x_948_, v_a_947_, v_a_936_, v_a_937_, v_a_938_, v_a_939_);
if (lean_obj_tag(v___x_949_) == 0)
{
lean_object* v_a_950_; lean_object* v___x_951_; size_t v_sz_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___f_957_; lean_object* v___x_958_; 
v_a_950_ = lean_ctor_get(v___x_949_, 0);
lean_inc(v_a_950_);
lean_dec_ref_known(v___x_949_, 1);
v___x_951_ = l_Array_append___redArg(v_params_934_, v_a_950_);
v_sz_952_ = lean_array_size(v_a_950_);
v___x_953_ = l_unsafeCast___redArg(v_a_950_);
lean_dec(v_a_950_);
v___x_954_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1(v_sz_952_, v___x_942_, v___x_953_);
v___x_955_ = l_unsafeCast___redArg(v___x_954_);
lean_dec_ref(v___x_954_);
v___x_956_ = lean_box(v___x_948_);
v___f_957_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_etaExpandCore___lam__0___boxed), 8, 2);
lean_closure_set(v___f_957_, 0, v___x_955_);
lean_closure_set(v___f_957_, 1, v___x_956_);
v___x_958_ = l_Lean_Compiler_LCNF_CompilerM_codeBind(v___x_948_, v_value_935_, v___f_957_, v_a_936_, v_a_937_, v_a_938_, v_a_939_);
if (lean_obj_tag(v___x_958_) == 0)
{
lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_967_; 
v_a_959_ = lean_ctor_get(v___x_958_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_967_ == 0)
{
v___x_961_ = v___x_958_;
v_isShared_962_ = v_isSharedCheck_967_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v___x_958_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_967_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_963_; lean_object* v___x_965_; 
v___x_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_963_, 0, v___x_951_);
lean_ctor_set(v___x_963_, 1, v_a_959_);
if (v_isShared_962_ == 0)
{
lean_ctor_set(v___x_961_, 0, v___x_963_);
v___x_965_ = v___x_961_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v___x_963_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
else
{
lean_object* v_a_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_975_; 
lean_dec_ref(v___x_951_);
v_a_968_ = lean_ctor_get(v___x_958_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_975_ == 0)
{
v___x_970_ = v___x_958_;
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_a_968_);
lean_dec(v___x_958_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_971_ == 0)
{
v___x_973_ = v___x_970_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_968_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
}
else
{
lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_983_; 
lean_dec_ref(v_value_935_);
lean_dec_ref(v_params_934_);
v_a_976_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_983_ == 0)
{
v___x_978_ = v___x_949_;
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_949_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_981_; 
if (v_isShared_979_ == 0)
{
v___x_981_ = v___x_978_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_a_976_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
}
else
{
lean_object* v_a_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_991_; 
lean_dec_ref(v_value_935_);
lean_dec_ref(v_params_934_);
v_a_984_ = lean_ctor_get(v___x_946_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_991_ == 0)
{
v___x_986_ = v___x_946_;
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_a_984_);
lean_dec(v___x_946_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_989_; 
if (v_isShared_987_ == 0)
{
v___x_989_ = v___x_986_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_a_984_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___boxed(lean_object* v_type_992_, lean_object* v_params_993_, lean_object* v_value_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_Lean_Compiler_LCNF_etaExpandCore(v_type_992_, v_params_993_, v_value_994_, v_a_995_, v_a_996_, v_a_997_, v_a_998_);
lean_dec(v_a_998_);
lean_dec_ref(v_a_997_);
lean_dec(v_a_996_);
lean_dec_ref(v_a_995_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore_x3f(lean_object* v_type_1001_, lean_object* v_params_1002_, lean_object* v_value_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_){
_start:
{
uint8_t v___x_1009_; 
lean_inc_ref(v_type_1001_);
v___x_1009_ = l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(v_type_1001_, v_params_1002_);
if (v___x_1009_ == 0)
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
lean_dec_ref(v_value_1003_);
lean_dec_ref(v_params_1002_);
lean_dec_ref(v_type_1001_);
v___x_1010_ = lean_box(0);
v___x_1011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1010_);
return v___x_1011_;
}
else
{
lean_object* v___x_1012_; 
v___x_1012_ = l_Lean_Compiler_LCNF_etaExpandCore(v_type_1001_, v_params_1002_, v_value_1003_, v_a_1004_, v_a_1005_, v_a_1006_, v_a_1007_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1021_; 
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1015_ = v___x_1012_;
v_isShared_1016_ = v_isSharedCheck_1021_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_1012_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1021_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1017_; lean_object* v___x_1019_; 
v___x_1017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1017_, 0, v_a_1013_);
if (v_isShared_1016_ == 0)
{
lean_ctor_set(v___x_1015_, 0, v___x_1017_);
v___x_1019_ = v___x_1015_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_1017_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
else
{
lean_object* v_a_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1029_; 
v_a_1022_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_1024_ = v___x_1012_;
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_a_1022_);
lean_dec(v___x_1012_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1027_; 
if (v_isShared_1025_ == 0)
{
v___x_1027_ = v___x_1024_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_a_1022_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore_x3f___boxed(lean_object* v_type_1030_, lean_object* v_params_1031_, lean_object* v_value_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_){
_start:
{
lean_object* v_res_1038_; 
v_res_1038_ = l_Lean_Compiler_LCNF_etaExpandCore_x3f(v_type_1030_, v_params_1031_, v_value_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_);
lean_dec(v_a_1036_);
lean_dec_ref(v_a_1035_);
lean_dec(v_a_1034_);
lean_dec_ref(v_a_1033_);
return v_res_1038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_etaExpand(lean_object* v_decl_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_){
_start:
{
lean_object* v_params_1045_; lean_object* v_type_1046_; lean_object* v_value_1047_; uint8_t v___x_1048_; lean_object* v___x_1049_; 
v_params_1045_ = lean_ctor_get(v_decl_1039_, 2);
v_type_1046_ = lean_ctor_get(v_decl_1039_, 3);
v_value_1047_ = lean_ctor_get(v_decl_1039_, 4);
v___x_1048_ = 0;
lean_inc_ref(v_value_1047_);
lean_inc_ref(v_params_1045_);
lean_inc_ref(v_type_1046_);
v___x_1049_ = l_Lean_Compiler_LCNF_etaExpandCore_x3f(v_type_1046_, v_params_1045_, v_value_1047_, v_a_1040_, v_a_1041_, v_a_1042_, v_a_1043_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1061_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1052_ = v___x_1049_;
v_isShared_1053_ = v_isSharedCheck_1061_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_a_1050_);
lean_dec(v___x_1049_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1061_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
if (lean_obj_tag(v_a_1050_) == 1)
{
lean_object* v_val_1054_; lean_object* v_fst_1055_; lean_object* v_snd_1056_; lean_object* v___x_1057_; 
lean_inc_ref(v_type_1046_);
lean_del_object(v___x_1052_);
v_val_1054_ = lean_ctor_get(v_a_1050_, 0);
lean_inc(v_val_1054_);
lean_dec_ref_known(v_a_1050_, 1);
v_fst_1055_ = lean_ctor_get(v_val_1054_, 0);
lean_inc(v_fst_1055_);
v_snd_1056_ = lean_ctor_get(v_val_1054_, 1);
lean_inc(v_snd_1056_);
lean_dec(v_val_1054_);
v___x_1057_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_1048_, v_decl_1039_, v_type_1046_, v_fst_1055_, v_snd_1056_, v_a_1041_);
return v___x_1057_;
}
else
{
lean_object* v___x_1059_; 
lean_dec(v_a_1050_);
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 0, v_decl_1039_);
v___x_1059_ = v___x_1052_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v_decl_1039_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
}
else
{
lean_object* v_a_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1069_; 
lean_dec_ref(v_decl_1039_);
v_a_1062_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1069_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1064_ = v___x_1049_;
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_a_1062_);
lean_dec(v___x_1049_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1067_; 
if (v_isShared_1065_ == 0)
{
v___x_1067_ = v___x_1064_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_a_1062_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_etaExpand___boxed(lean_object* v_decl_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = l_Lean_Compiler_LCNF_FunDecl_etaExpand(v_decl_1070_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_);
lean_dec(v_a_1074_);
lean_dec_ref(v_a_1073_);
lean_dec(v_a_1072_);
lean_dec_ref(v_a_1071_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_etaExpand(lean_object* v_decl_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_){
_start:
{
lean_object* v_value_1083_; 
v_value_1083_ = lean_ctor_get(v_decl_1077_, 1);
lean_inc_ref(v_value_1083_);
if (lean_obj_tag(v_value_1083_) == 0)
{
lean_object* v_toSignature_1084_; uint8_t v_recursive_1085_; lean_object* v_inlineAttr_x3f_1086_; lean_object* v_code_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1139_; 
v_toSignature_1084_ = lean_ctor_get(v_decl_1077_, 0);
lean_inc_ref(v_toSignature_1084_);
v_recursive_1085_ = lean_ctor_get_uint8(v_decl_1077_, sizeof(void*)*3);
v_inlineAttr_x3f_1086_ = lean_ctor_get(v_decl_1077_, 2);
v_code_1087_ = lean_ctor_get(v_value_1083_, 0);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_value_1083_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1089_ = v_value_1083_;
v_isShared_1090_ = v_isSharedCheck_1139_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_code_1087_);
lean_dec(v_value_1083_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1139_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v_name_1091_; lean_object* v_levelParams_1092_; lean_object* v_type_1093_; lean_object* v_params_1094_; uint8_t v_safe_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1138_; 
v_name_1091_ = lean_ctor_get(v_toSignature_1084_, 0);
v_levelParams_1092_ = lean_ctor_get(v_toSignature_1084_, 1);
v_type_1093_ = lean_ctor_get(v_toSignature_1084_, 2);
v_params_1094_ = lean_ctor_get(v_toSignature_1084_, 3);
v_safe_1095_ = lean_ctor_get_uint8(v_toSignature_1084_, sizeof(void*)*4);
v_isSharedCheck_1138_ = !lean_is_exclusive(v_toSignature_1084_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1097_ = v_toSignature_1084_;
v_isShared_1098_ = v_isSharedCheck_1138_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_params_1094_);
lean_inc(v_type_1093_);
lean_inc(v_levelParams_1092_);
lean_inc(v_name_1091_);
lean_dec(v_toSignature_1084_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1138_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1099_; 
lean_inc_ref(v_type_1093_);
v___x_1099_ = l_Lean_Compiler_LCNF_etaExpandCore_x3f(v_type_1093_, v_params_1094_, v_code_1087_, v_a_1078_, v_a_1079_, v_a_1080_, v_a_1081_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1129_; 
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1129_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1102_ = v___x_1099_;
v_isShared_1103_ = v_isSharedCheck_1129_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1099_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1129_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
if (lean_obj_tag(v_a_1100_) == 1)
{
lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1122_; 
lean_inc(v_inlineAttr_x3f_1086_);
v_isSharedCheck_1122_ = !lean_is_exclusive(v_decl_1077_);
if (v_isSharedCheck_1122_ == 0)
{
lean_object* v_unused_1123_; lean_object* v_unused_1124_; lean_object* v_unused_1125_; 
v_unused_1123_ = lean_ctor_get(v_decl_1077_, 2);
lean_dec(v_unused_1123_);
v_unused_1124_ = lean_ctor_get(v_decl_1077_, 1);
lean_dec(v_unused_1124_);
v_unused_1125_ = lean_ctor_get(v_decl_1077_, 0);
lean_dec(v_unused_1125_);
v___x_1105_ = v_decl_1077_;
v_isShared_1106_ = v_isSharedCheck_1122_;
goto v_resetjp_1104_;
}
else
{
lean_dec(v_decl_1077_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1122_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v_val_1107_; lean_object* v_fst_1108_; lean_object* v_snd_1109_; lean_object* v___x_1111_; 
v_val_1107_ = lean_ctor_get(v_a_1100_, 0);
lean_inc(v_val_1107_);
lean_dec_ref_known(v_a_1100_, 1);
v_fst_1108_ = lean_ctor_get(v_val_1107_, 0);
lean_inc(v_fst_1108_);
v_snd_1109_ = lean_ctor_get(v_val_1107_, 1);
lean_inc(v_snd_1109_);
lean_dec(v_val_1107_);
if (v_isShared_1098_ == 0)
{
lean_ctor_set(v___x_1097_, 3, v_fst_1108_);
v___x_1111_ = v___x_1097_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_name_1091_);
lean_ctor_set(v_reuseFailAlloc_1121_, 1, v_levelParams_1092_);
lean_ctor_set(v_reuseFailAlloc_1121_, 2, v_type_1093_);
lean_ctor_set(v_reuseFailAlloc_1121_, 3, v_fst_1108_);
lean_ctor_set_uint8(v_reuseFailAlloc_1121_, sizeof(void*)*4, v_safe_1095_);
v___x_1111_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
lean_object* v___x_1113_; 
if (v_isShared_1090_ == 0)
{
lean_ctor_set(v___x_1089_, 0, v_snd_1109_);
v___x_1113_ = v___x_1089_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_snd_1109_);
v___x_1113_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
lean_object* v___x_1115_; 
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 1, v___x_1113_);
lean_ctor_set(v___x_1105_, 0, v___x_1111_);
v___x_1115_ = v___x_1105_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v___x_1111_);
lean_ctor_set(v_reuseFailAlloc_1119_, 1, v___x_1113_);
lean_ctor_set(v_reuseFailAlloc_1119_, 2, v_inlineAttr_x3f_1086_);
lean_ctor_set_uint8(v_reuseFailAlloc_1119_, sizeof(void*)*3, v_recursive_1085_);
v___x_1115_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
lean_object* v___x_1117_; 
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 0, v___x_1115_);
v___x_1117_ = v___x_1102_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v___x_1115_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
}
}
}
}
}
}
else
{
lean_object* v___x_1127_; 
lean_dec(v_a_1100_);
lean_del_object(v___x_1097_);
lean_dec_ref(v_type_1093_);
lean_dec(v_levelParams_1092_);
lean_dec(v_name_1091_);
lean_del_object(v___x_1089_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 0, v_decl_1077_);
v___x_1127_ = v___x_1102_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_decl_1077_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
return v___x_1127_;
}
}
}
}
else
{
lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1137_; 
lean_del_object(v___x_1097_);
lean_dec_ref(v_type_1093_);
lean_dec(v_levelParams_1092_);
lean_dec(v_name_1091_);
lean_del_object(v___x_1089_);
lean_dec_ref(v_decl_1077_);
v_a_1130_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1132_ = v___x_1099_;
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_dec(v___x_1099_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_a_1130_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
}
}
}
}
else
{
lean_object* v___x_1140_; 
lean_dec_ref_known(v_value_1083_, 1);
v___x_1140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1140_, 0, v_decl_1077_);
return v___x_1140_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_etaExpand___boxed(lean_object* v_decl_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_Lean_Compiler_LCNF_Decl_etaExpand(v_decl_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_);
lean_dec(v_a_1145_);
lean_dec_ref(v_a_1144_);
lean_dec(v_a_1143_);
lean_dec_ref(v_a_1142_);
return v_res_1147_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Bind(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Bind(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Bind(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Bind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Bind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Bind(builtin);
}
#ifdef __cplusplus
}
#endif

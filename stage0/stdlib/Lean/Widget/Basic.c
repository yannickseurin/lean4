// Lean compiler output
// Module: Lean.Widget.Basic
// Imports: public import Lean.Elab.InfoTree public import Lean.Server.InfoUtils
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3_ = (const lean_object*)&l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value;
static const lean_string_object l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3_ = (const lean_object*)&l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value;
static const lean_string_object l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "InfoWithCtx"};
static const lean_object* l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3_ = (const lean_object*)&l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value;
static const lean_ctor_object l_Lean_Widget_instImpl___closed__3_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Widget_instImpl___closed__3_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instImpl___closed__3_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value_aux_0),((lean_object*)&l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Widget_instImpl___closed__3_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instImpl___closed__3_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value_aux_1),((lean_object*)&l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value),LEAN_SCALAR_PTR_LITERAL(244, 153, 88, 209, 82, 97, 212, 176)}};
static const lean_object* l_Lean_Widget_instImpl___closed__3_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3_ = (const lean_object*)&l_Lean_Widget_instImpl___closed__3_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value;
static lean_once_cell_t l_Lean_Widget_instImpl___closed__4_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instImpl___closed__4_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3_;
LEAN_EXPORT lean_object* l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3_;
LEAN_EXPORT lean_object* l_Lean_Widget_instTypeNameInfoWithCtx;
static const lean_string_object l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "LocalContext"};
static const lean_object* l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3_ = (const lean_object*)&l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3__value;
static const lean_ctor_object l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3__value_aux_0),((lean_object*)&l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3__value),LEAN_SCALAR_PTR_LITERAL(160, 34, 137, 250, 59, 106, 106, 232)}};
static const lean_object* l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3_ = (const lean_object*)&l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3__value;
static lean_once_cell_t l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3_;
LEAN_EXPORT lean_object* l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3_;
LEAN_EXPORT lean_object* l_Lean_Widget_instTypeNameLocalContext;
static const lean_string_object l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ContextInfo"};
static const lean_object* l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3_ = (const lean_object*)&l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3__value;
static const lean_ctor_object l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3__value_aux_0),((lean_object*)&l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3__value_aux_1),((lean_object*)&l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3__value),LEAN_SCALAR_PTR_LITERAL(254, 95, 152, 39, 169, 44, 229, 111)}};
static const lean_object* l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3_ = (const lean_object*)&l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3__value;
static lean_once_cell_t l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3_;
LEAN_EXPORT lean_object* l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3_;
LEAN_EXPORT lean_object* l_Lean_Widget_instTypeNameContextInfo;
static const lean_string_object l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "TermInfo"};
static const lean_object* l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3_ = (const lean_object*)&l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3__value;
static const lean_ctor_object l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3__value_aux_0),((lean_object*)&l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3__value_aux_1),((lean_object*)&l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3__value),LEAN_SCALAR_PTR_LITERAL(85, 0, 252, 189, 253, 144, 227, 101)}};
static const lean_object* l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3_ = (const lean_object*)&l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3__value;
static lean_once_cell_t l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3_;
LEAN_EXPORT lean_object* l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3_;
LEAN_EXPORT lean_object* l_Lean_Widget_instTypeNameTermInfo;
static lean_object* _init_l_Lean_Widget_instImpl___closed__4_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3_(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = ((lean_object*)(l_Lean_Widget_instImpl___closed__3_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3_));
v___x_9_ = l_unsafeCast___redArg(v___x_8_);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3_(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_obj_once(&l_Lean_Widget_instImpl___closed__4_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3_, &l_Lean_Widget_instImpl___closed__4_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3__once, _init_l_Lean_Widget_instImpl___closed__4_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Widget_instTypeNameInfoWithCtx(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3_;
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3_(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = ((lean_object*)(l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3_));
v___x_17_ = l_unsafeCast___redArg(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3_(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_obj_once(&l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3_, &l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3__once, _init_l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3_);
return v___x_18_;
}
}
static lean_object* _init_l_Lean_Widget_instTypeNameLocalContext(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3_;
return v___x_19_;
}
}
static lean_object* _init_l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3_(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = ((lean_object*)(l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3_));
v___x_26_ = l_unsafeCast___redArg(v___x_25_);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3_(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_obj_once(&l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3_, &l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3__once, _init_l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3_);
return v___x_27_;
}
}
static lean_object* _init_l_Lean_Widget_instTypeNameContextInfo(void){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3_;
return v___x_28_;
}
}
static lean_object* _init_l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3_(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = ((lean_object*)(l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3_));
v___x_35_ = l_unsafeCast___redArg(v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3_(void){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lean_obj_once(&l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3_, &l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3__once, _init_l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3_);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_Widget_instTypeNameTermInfo(void){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3_;
return v___x_37_;
}
}
lean_object* runtime_initialize_Lean_Elab_InfoTree(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_InfoUtils(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Widget_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_InfoTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_InfoUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3_ = _init_l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3_();
lean_mark_persistent(l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_2038268869____hygCtx___hyg_3_);
l_Lean_Widget_instTypeNameInfoWithCtx = _init_l_Lean_Widget_instTypeNameInfoWithCtx();
lean_mark_persistent(l_Lean_Widget_instTypeNameInfoWithCtx);
l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3_ = _init_l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3_();
lean_mark_persistent(l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_4075166457____hygCtx___hyg_3_);
l_Lean_Widget_instTypeNameLocalContext = _init_l_Lean_Widget_instTypeNameLocalContext();
lean_mark_persistent(l_Lean_Widget_instTypeNameLocalContext);
l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3_ = _init_l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3_();
lean_mark_persistent(l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_2318528980____hygCtx___hyg_3_);
l_Lean_Widget_instTypeNameContextInfo = _init_l_Lean_Widget_instTypeNameContextInfo();
lean_mark_persistent(l_Lean_Widget_instTypeNameContextInfo);
l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3_ = _init_l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3_();
lean_mark_persistent(l_Lean_Widget_instImpl_00___x40_Lean_Widget_Basic_173954553____hygCtx___hyg_3_);
l_Lean_Widget_instTypeNameTermInfo = _init_l_Lean_Widget_instTypeNameTermInfo();
lean_mark_persistent(l_Lean_Widget_instTypeNameTermInfo);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Widget_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_InfoTree(uint8_t builtin);
lean_object* initialize_Lean_Server_InfoUtils(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Widget_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_InfoTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_InfoUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Widget_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Widget_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Widget_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

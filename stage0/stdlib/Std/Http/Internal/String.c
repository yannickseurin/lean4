// Lean compiler output
// Module: Std.Http.Internal.String
// Imports: import Init.Grind public import Init.Data.String.TakeDrop public import Std.Http.Internal.Char
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_push(lean_object*, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_string_data(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
static const lean_string_object l_Std_Http_Internal_quoteCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Http_Internal_quoteCore___redArg___closed__0 = (const lean_object*)&l_Std_Http_Internal_quoteCore___redArg___closed__0_value;
static const lean_string_object l_Std_Http_Internal_quoteCore___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\\"};
static const lean_object* l_Std_Http_Internal_quoteCore___redArg___closed__1 = (const lean_object*)&l_Std_Http_Internal_quoteCore___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_quoteCore___redArg(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_quoteCore___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_quoteCore(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_quoteCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_Internal_quoteHttpString_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_Internal_quoteHttpString_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Http_Internal_quoteHttpString_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Http_Internal_quoteHttpString_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Internal_quoteHttpString___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l_Std_Http_Internal_quoteHttpString___redArg___closed__0 = (const lean_object*)&l_Std_Http_Internal_quoteHttpString___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_quoteHttpString___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_quoteHttpString(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_Internal_quoteHttpString_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_Internal_quoteHttpString_x3f_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_quoteHttpString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_Internal_quoteHttpString_x21_spec__0(lean_object*);
static const lean_string_object l_Std_Http_Internal_quoteHttpString_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Std.Http.Internal.String"};
static const lean_object* l_Std_Http_Internal_quoteHttpString_x21___closed__0 = (const lean_object*)&l_Std_Http_Internal_quoteHttpString_x21___closed__0_value;
static const lean_string_object l_Std_Http_Internal_quoteHttpString_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Std.Http.Internal.quoteHttpString!"};
static const lean_object* l_Std_Http_Internal_quoteHttpString_x21___closed__1 = (const lean_object*)&l_Std_Http_Internal_quoteHttpString_x21___closed__1_value;
static const lean_string_object l_Std_Http_Internal_quoteHttpString_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "invalid HTTP quoted-string content"};
static const lean_object* l_Std_Http_Internal_quoteHttpString_x21___closed__2 = (const lean_object*)&l_Std_Http_Internal_quoteHttpString_x21___closed__2_value;
static lean_once_cell_t l_Std_Http_Internal_quoteHttpString_x21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Internal_quoteHttpString_x21___closed__3;
LEAN_EXPORT lean_object* l_Std_Http_Internal_quoteHttpString_x21(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_start_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_start_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_valid_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_valid_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_done_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_done_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_invalid_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_invalid_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__1___redArg(lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_unquoteHttpString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__1(lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_Internal_isToken_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_Internal_isToken_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_isToken(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_isToken___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_quoteCore___redArg(uint32_t v_c_3_){
_start:
{
uint8_t v___y_13_; uint8_t v___y_19_; uint32_t v___x_24_; uint8_t v___x_25_; 
v___x_24_ = 9;
v___x_25_ = lean_uint32_dec_eq(v_c_3_, v___x_24_);
if (v___x_25_ == 0)
{
uint32_t v___x_26_; uint8_t v___x_27_; 
v___x_26_ = 32;
v___x_27_ = lean_uint32_dec_eq(v_c_3_, v___x_26_);
if (v___x_27_ == 0)
{
uint32_t v___x_28_; uint8_t v___x_29_; 
v___x_28_ = 33;
v___x_29_ = lean_uint32_dec_eq(v_c_3_, v___x_28_);
if (v___x_29_ == 0)
{
uint32_t v___x_30_; uint8_t v___x_31_; 
v___x_30_ = 35;
v___x_31_ = lean_uint32_dec_le(v___x_30_, v_c_3_);
if (v___x_31_ == 0)
{
v___y_19_ = v___x_31_;
goto v___jp_18_;
}
else
{
uint32_t v___x_32_; uint8_t v___x_33_; 
v___x_32_ = 91;
v___x_33_ = lean_uint32_dec_le(v_c_3_, v___x_32_);
v___y_19_ = v___x_33_;
goto v___jp_18_;
}
}
else
{
goto v___jp_4_;
}
}
else
{
goto v___jp_4_;
}
}
else
{
goto v___jp_4_;
}
v___jp_4_:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = ((lean_object*)(l_Std_Http_Internal_quoteCore___redArg___closed__0));
v___x_6_ = lean_string_push(v___x_5_, v_c_3_);
return v___x_6_;
}
v___jp_7_:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_8_ = ((lean_object*)(l_Std_Http_Internal_quoteCore___redArg___closed__1));
v___x_9_ = ((lean_object*)(l_Std_Http_Internal_quoteCore___redArg___closed__0));
v___x_10_ = lean_string_push(v___x_9_, v_c_3_);
v___x_11_ = lean_string_append(v___x_8_, v___x_10_);
lean_dec_ref(v___x_10_);
return v___x_11_;
}
v___jp_12_:
{
if (v___y_13_ == 0)
{
uint32_t v___x_14_; uint8_t v___x_15_; 
v___x_14_ = 34;
v___x_15_ = lean_uint32_dec_eq(v_c_3_, v___x_14_);
if (v___x_15_ == 0)
{
uint32_t v___x_16_; uint8_t v___x_17_; 
v___x_16_ = 92;
v___x_17_ = lean_uint32_dec_eq(v_c_3_, v___x_16_);
goto v___jp_7_;
}
else
{
goto v___jp_7_;
}
}
else
{
goto v___jp_4_;
}
}
v___jp_18_:
{
if (v___y_19_ == 0)
{
uint32_t v___x_20_; uint8_t v___x_21_; 
v___x_20_ = 93;
v___x_21_ = lean_uint32_dec_le(v___x_20_, v_c_3_);
if (v___x_21_ == 0)
{
v___y_13_ = v___x_21_;
goto v___jp_12_;
}
else
{
uint32_t v___x_22_; uint8_t v___x_23_; 
v___x_22_ = 126;
v___x_23_ = lean_uint32_dec_le(v_c_3_, v___x_22_);
v___y_13_ = v___x_23_;
goto v___jp_12_;
}
}
else
{
goto v___jp_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_quoteCore___redArg___boxed(lean_object* v_c_34_){
_start:
{
uint32_t v_c_boxed_35_; lean_object* v_res_36_; 
v_c_boxed_35_ = lean_unbox_uint32(v_c_34_);
lean_dec(v_c_34_);
v_res_36_ = l_Std_Http_Internal_quoteCore___redArg(v_c_boxed_35_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_quoteCore(uint32_t v_c_37_, lean_object* v_h_u2080_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Std_Http_Internal_quoteCore___redArg(v_c_37_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_quoteCore___boxed(lean_object* v_c_40_, lean_object* v_h_u2080_41_){
_start:
{
uint32_t v_c_boxed_42_; lean_object* v_res_43_; 
v_c_boxed_42_ = lean_unbox_uint32(v_c_40_);
lean_dec(v_c_40_);
v_res_43_ = l_Std_Http_Internal_quoteCore(v_c_boxed_42_, v_h_u2080_41_);
return v_res_43_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_Internal_quoteHttpString_spec__0(lean_object* v_x_44_){
_start:
{
if (lean_obj_tag(v_x_44_) == 0)
{
uint8_t v___x_45_; 
v___x_45_ = 1;
return v___x_45_;
}
else
{
lean_object* v_head_46_; lean_object* v_tail_47_; uint8_t v___y_49_; uint32_t v___x_65_; uint32_t v___x_66_; uint8_t v___x_67_; 
v_head_46_ = lean_ctor_get(v_x_44_, 0);
v_tail_47_ = lean_ctor_get(v_x_44_, 1);
v___x_65_ = 33;
v___x_66_ = lean_unbox_uint32(v_head_46_);
v___x_67_ = lean_uint32_dec_eq(v___x_66_, v___x_65_);
if (v___x_67_ == 0)
{
uint32_t v___x_68_; uint32_t v___x_69_; uint8_t v___x_70_; 
v___x_68_ = 35;
v___x_69_ = lean_unbox_uint32(v_head_46_);
v___x_70_ = lean_uint32_dec_eq(v___x_69_, v___x_68_);
if (v___x_70_ == 0)
{
uint32_t v___x_71_; uint32_t v___x_72_; uint8_t v___x_73_; 
v___x_71_ = 36;
v___x_72_ = lean_unbox_uint32(v_head_46_);
v___x_73_ = lean_uint32_dec_eq(v___x_72_, v___x_71_);
if (v___x_73_ == 0)
{
uint32_t v___x_74_; uint32_t v___x_75_; uint8_t v___x_76_; 
v___x_74_ = 37;
v___x_75_ = lean_unbox_uint32(v_head_46_);
v___x_76_ = lean_uint32_dec_eq(v___x_75_, v___x_74_);
if (v___x_76_ == 0)
{
uint32_t v___x_77_; uint32_t v___x_78_; uint8_t v___x_79_; 
v___x_77_ = 38;
v___x_78_ = lean_unbox_uint32(v_head_46_);
v___x_79_ = lean_uint32_dec_eq(v___x_78_, v___x_77_);
if (v___x_79_ == 0)
{
uint32_t v___x_80_; uint32_t v___x_81_; uint8_t v___x_82_; 
v___x_80_ = 39;
v___x_81_ = lean_unbox_uint32(v_head_46_);
v___x_82_ = lean_uint32_dec_eq(v___x_81_, v___x_80_);
if (v___x_82_ == 0)
{
uint32_t v___x_83_; uint32_t v___x_84_; uint8_t v___x_85_; 
v___x_83_ = 42;
v___x_84_ = lean_unbox_uint32(v_head_46_);
v___x_85_ = lean_uint32_dec_eq(v___x_84_, v___x_83_);
if (v___x_85_ == 0)
{
uint32_t v___x_86_; uint32_t v___x_87_; uint8_t v___x_88_; 
v___x_86_ = 43;
v___x_87_ = lean_unbox_uint32(v_head_46_);
v___x_88_ = lean_uint32_dec_eq(v___x_87_, v___x_86_);
if (v___x_88_ == 0)
{
uint32_t v___x_89_; uint32_t v___x_90_; uint8_t v___x_91_; 
v___x_89_ = 45;
v___x_90_ = lean_unbox_uint32(v_head_46_);
v___x_91_ = lean_uint32_dec_eq(v___x_90_, v___x_89_);
if (v___x_91_ == 0)
{
uint32_t v___x_92_; uint32_t v___x_93_; uint8_t v___x_94_; 
v___x_92_ = 46;
v___x_93_ = lean_unbox_uint32(v_head_46_);
v___x_94_ = lean_uint32_dec_eq(v___x_93_, v___x_92_);
if (v___x_94_ == 0)
{
uint32_t v___x_95_; uint32_t v___x_96_; uint8_t v___x_97_; 
v___x_95_ = 94;
v___x_96_ = lean_unbox_uint32(v_head_46_);
v___x_97_ = lean_uint32_dec_eq(v___x_96_, v___x_95_);
if (v___x_97_ == 0)
{
uint32_t v___x_98_; uint32_t v___x_99_; uint8_t v___x_100_; 
v___x_98_ = 95;
v___x_99_ = lean_unbox_uint32(v_head_46_);
v___x_100_ = lean_uint32_dec_eq(v___x_99_, v___x_98_);
if (v___x_100_ == 0)
{
uint32_t v___x_101_; uint32_t v___x_102_; uint8_t v___x_103_; 
v___x_101_ = 96;
v___x_102_ = lean_unbox_uint32(v_head_46_);
v___x_103_ = lean_uint32_dec_eq(v___x_102_, v___x_101_);
if (v___x_103_ == 0)
{
uint32_t v___x_104_; uint32_t v___x_105_; uint8_t v___x_106_; 
v___x_104_ = 124;
v___x_105_ = lean_unbox_uint32(v_head_46_);
v___x_106_ = lean_uint32_dec_eq(v___x_105_, v___x_104_);
if (v___x_106_ == 0)
{
uint32_t v___x_107_; uint32_t v___x_108_; uint8_t v___x_109_; 
v___x_107_ = 126;
v___x_108_ = lean_unbox_uint32(v_head_46_);
v___x_109_ = lean_uint32_dec_eq(v___x_108_, v___x_107_);
if (v___x_109_ == 0)
{
uint32_t v___x_110_; uint32_t v___x_111_; uint8_t v___x_112_; 
v___x_110_ = 48;
v___x_111_ = lean_unbox_uint32(v_head_46_);
v___x_112_ = lean_uint32_dec_le(v___x_110_, v___x_111_);
if (v___x_112_ == 0)
{
goto v___jp_58_;
}
else
{
uint32_t v___x_113_; uint32_t v___x_114_; uint8_t v___x_115_; 
v___x_113_ = 57;
v___x_114_ = lean_unbox_uint32(v_head_46_);
v___x_115_ = lean_uint32_dec_le(v___x_114_, v___x_113_);
if (v___x_115_ == 0)
{
goto v___jp_58_;
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
}
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
v___jp_48_:
{
if (v___y_49_ == 0)
{
uint32_t v___x_50_; uint32_t v___x_51_; uint8_t v___x_52_; 
v___x_50_ = 97;
v___x_51_ = lean_unbox_uint32(v_head_46_);
v___x_52_ = lean_uint32_dec_le(v___x_50_, v___x_51_);
if (v___x_52_ == 0)
{
return v___x_52_;
}
else
{
uint32_t v___x_53_; uint32_t v___x_54_; uint8_t v___x_55_; 
v___x_53_ = 122;
v___x_54_ = lean_unbox_uint32(v_head_46_);
v___x_55_ = lean_uint32_dec_le(v___x_54_, v___x_53_);
if (v___x_55_ == 0)
{
return v___x_55_;
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
}
}
else
{
v_x_44_ = v_tail_47_;
goto _start;
}
}
v___jp_58_:
{
uint32_t v___x_59_; uint32_t v___x_60_; uint8_t v___x_61_; 
v___x_59_ = 65;
v___x_60_ = lean_unbox_uint32(v_head_46_);
v___x_61_ = lean_uint32_dec_le(v___x_59_, v___x_60_);
if (v___x_61_ == 0)
{
v___y_49_ = v___x_61_;
goto v___jp_48_;
}
else
{
uint32_t v___x_62_; uint32_t v___x_63_; uint8_t v___x_64_; 
v___x_62_ = 90;
v___x_63_ = lean_unbox_uint32(v_head_46_);
v___x_64_ = lean_uint32_dec_le(v___x_63_, v___x_62_);
v___y_49_ = v___x_64_;
goto v___jp_48_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_Internal_quoteHttpString_spec__0___boxed(lean_object* v_x_132_){
_start:
{
uint8_t v_res_133_; lean_object* v_r_134_; 
v_res_133_ = l_List_all___at___00Std_Http_Internal_quoteHttpString_spec__0(v_x_132_);
lean_dec(v_x_132_);
v_r_134_ = lean_box(v_res_133_);
return v_r_134_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Http_Internal_quoteHttpString_spec__1(lean_object* v_x_135_, lean_object* v_x_136_){
_start:
{
if (lean_obj_tag(v_x_136_) == 0)
{
return v_x_135_;
}
else
{
lean_object* v_head_137_; lean_object* v_tail_138_; uint32_t v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v_head_137_ = lean_ctor_get(v_x_136_, 0);
v_tail_138_ = lean_ctor_get(v_x_136_, 1);
v___x_139_ = lean_unbox_uint32(v_head_137_);
v___x_140_ = l_Std_Http_Internal_quoteCore___redArg(v___x_139_);
v___x_141_ = lean_string_append(v_x_135_, v___x_140_);
lean_dec_ref(v___x_140_);
v_x_135_ = v___x_141_;
v_x_136_ = v_tail_138_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Http_Internal_quoteHttpString_spec__1___boxed(lean_object* v_x_143_, lean_object* v_x_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_List_foldl___at___00Std_Http_Internal_quoteHttpString_spec__1(v_x_143_, v_x_144_);
lean_dec(v_x_144_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_quoteHttpString___redArg(lean_object* v_s_147_){
_start:
{
lean_object* v___x_148_; lean_object* v_sl_149_; uint8_t v___y_151_; uint8_t v___x_155_; uint8_t v___y_157_; uint8_t v___x_158_; 
lean_inc_ref(v_s_147_);
v___x_148_ = lean_string_data(v_s_147_);
v_sl_149_ = l_unsafeCast___redArg(v___x_148_);
lean_dec(v___x_148_);
v___x_155_ = l_List_all___at___00Std_Http_Internal_quoteHttpString_spec__0(v_sl_149_);
v___x_158_ = l_List_isEmpty___redArg(v_sl_149_);
if (v___x_158_ == 0)
{
uint8_t v___x_159_; 
v___x_159_ = 1;
v___y_157_ = v___x_159_;
goto v___jp_156_;
}
else
{
uint8_t v___x_160_; 
v___x_160_ = 0;
v___y_157_ = v___x_160_;
goto v___jp_156_;
}
v___jp_150_:
{
if (v___y_151_ == 0)
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
lean_dec_ref(v_s_147_);
v___x_152_ = ((lean_object*)(l_Std_Http_Internal_quoteHttpString___redArg___closed__0));
v___x_153_ = l_List_foldl___at___00Std_Http_Internal_quoteHttpString_spec__1(v___x_152_, v_sl_149_);
lean_dec(v_sl_149_);
v___x_154_ = lean_string_append(v___x_153_, v___x_152_);
return v___x_154_;
}
else
{
lean_dec(v_sl_149_);
return v_s_147_;
}
}
v___jp_156_:
{
if (v___x_155_ == 0)
{
v___y_151_ = v___x_155_;
goto v___jp_150_;
}
else
{
v___y_151_ = v___y_157_;
goto v___jp_150_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_quoteHttpString(lean_object* v_s_161_, lean_object* v_h_162_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = l_Std_Http_Internal_quoteHttpString___redArg(v_s_161_);
return v___x_163_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_Internal_quoteHttpString_x3f_spec__0(lean_object* v_x_164_){
_start:
{
if (lean_obj_tag(v_x_164_) == 0)
{
uint8_t v___x_165_; 
v___x_165_ = 1;
return v___x_165_;
}
else
{
lean_object* v_head_166_; lean_object* v_tail_167_; uint8_t v___y_169_; uint32_t v___x_171_; uint32_t v___x_172_; uint8_t v___x_173_; 
v_head_166_ = lean_ctor_get(v_x_164_, 0);
v_tail_167_ = lean_ctor_get(v_x_164_, 1);
v___x_171_ = 9;
v___x_172_ = lean_unbox_uint32(v_head_166_);
v___x_173_ = lean_uint32_dec_eq(v___x_172_, v___x_171_);
if (v___x_173_ == 0)
{
uint32_t v___x_174_; uint32_t v___x_175_; uint8_t v___x_176_; 
v___x_174_ = 32;
v___x_175_ = lean_unbox_uint32(v_head_166_);
v___x_176_ = lean_uint32_dec_eq(v___x_175_, v___x_174_);
if (v___x_176_ == 0)
{
uint32_t v___x_177_; uint8_t v___y_179_; uint8_t v___y_180_; uint8_t v___y_185_; uint32_t v___x_193_; uint8_t v___x_194_; 
v___x_177_ = 33;
v___x_193_ = lean_unbox_uint32(v_head_166_);
v___x_194_ = lean_uint32_dec_eq(v___x_193_, v___x_177_);
if (v___x_194_ == 0)
{
uint32_t v___x_195_; uint32_t v___x_196_; uint8_t v___x_197_; 
v___x_195_ = 35;
v___x_196_ = lean_unbox_uint32(v_head_166_);
v___x_197_ = lean_uint32_dec_le(v___x_195_, v___x_196_);
if (v___x_197_ == 0)
{
v___y_185_ = v___x_197_;
goto v___jp_184_;
}
else
{
uint32_t v___x_198_; uint32_t v___x_199_; uint8_t v___x_200_; 
v___x_198_ = 91;
v___x_199_ = lean_unbox_uint32(v_head_166_);
v___x_200_ = lean_uint32_dec_le(v___x_199_, v___x_198_);
v___y_185_ = v___x_200_;
goto v___jp_184_;
}
}
else
{
v_x_164_ = v_tail_167_;
goto _start;
}
v___jp_178_:
{
if (v___y_180_ == 0)
{
uint32_t v___x_181_; uint8_t v___x_182_; 
v___x_181_ = lean_unbox_uint32(v_head_166_);
v___x_182_ = lean_uint32_dec_le(v___x_177_, v___x_181_);
if (v___x_182_ == 0)
{
v___y_169_ = v___x_182_;
goto v___jp_168_;
}
else
{
v___y_169_ = v___y_179_;
goto v___jp_168_;
}
}
else
{
v_x_164_ = v_tail_167_;
goto _start;
}
}
v___jp_184_:
{
if (v___y_185_ == 0)
{
uint32_t v___x_186_; uint32_t v___x_187_; uint8_t v___x_188_; uint32_t v___x_189_; uint32_t v___x_190_; uint8_t v___x_191_; 
v___x_186_ = 93;
v___x_187_ = lean_unbox_uint32(v_head_166_);
v___x_188_ = lean_uint32_dec_le(v___x_186_, v___x_187_);
v___x_189_ = 126;
v___x_190_ = lean_unbox_uint32(v_head_166_);
v___x_191_ = lean_uint32_dec_le(v___x_190_, v___x_189_);
if (v___x_188_ == 0)
{
v___y_179_ = v___x_191_;
v___y_180_ = v___x_188_;
goto v___jp_178_;
}
else
{
v___y_179_ = v___x_191_;
v___y_180_ = v___x_191_;
goto v___jp_178_;
}
}
else
{
v_x_164_ = v_tail_167_;
goto _start;
}
}
}
else
{
v_x_164_ = v_tail_167_;
goto _start;
}
}
else
{
v_x_164_ = v_tail_167_;
goto _start;
}
v___jp_168_:
{
if (v___y_169_ == 0)
{
return v___y_169_;
}
else
{
v_x_164_ = v_tail_167_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_Internal_quoteHttpString_x3f_spec__0___boxed(lean_object* v_x_204_){
_start:
{
uint8_t v_res_205_; lean_object* v_r_206_; 
v_res_205_ = l_List_all___at___00Std_Http_Internal_quoteHttpString_x3f_spec__0(v_x_204_);
lean_dec(v_x_204_);
v_r_206_ = lean_box(v_res_205_);
return v_r_206_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_quoteHttpString_x3f(lean_object* v_s_207_){
_start:
{
lean_object* v___x_208_; uint8_t v___x_209_; 
lean_inc_ref(v_s_207_);
v___x_208_ = lean_string_data(v_s_207_);
v___x_209_ = l_List_all___at___00Std_Http_Internal_quoteHttpString_x3f_spec__0(v___x_208_);
lean_dec(v___x_208_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; 
lean_dec_ref(v_s_207_);
v___x_210_ = lean_box(0);
return v___x_210_;
}
else
{
lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_211_ = l_Std_Http_Internal_quoteHttpString___redArg(v_s_207_);
v___x_212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_212_, 0, v___x_211_);
return v___x_212_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_Internal_quoteHttpString_x21_spec__0(lean_object* v_msg_213_){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = ((lean_object*)(l_Std_Http_Internal_quoteCore___redArg___closed__0));
v___x_215_ = lean_panic_fn_borrowed(v___x_214_, v_msg_213_);
return v___x_215_;
}
}
static lean_object* _init_l_Std_Http_Internal_quoteHttpString_x21___closed__3(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_219_ = ((lean_object*)(l_Std_Http_Internal_quoteHttpString_x21___closed__2));
v___x_220_ = lean_unsigned_to_nat(12u);
v___x_221_ = lean_unsigned_to_nat(83u);
v___x_222_ = ((lean_object*)(l_Std_Http_Internal_quoteHttpString_x21___closed__1));
v___x_223_ = ((lean_object*)(l_Std_Http_Internal_quoteHttpString_x21___closed__0));
v___x_224_ = l_mkPanicMessageWithDecl(v___x_223_, v___x_222_, v___x_221_, v___x_220_, v___x_219_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_quoteHttpString_x21(lean_object* v_s_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_Std_Http_Internal_quoteHttpString_x3f(v_s_225_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_227_ = lean_obj_once(&l_Std_Http_Internal_quoteHttpString_x21___closed__3, &l_Std_Http_Internal_quoteHttpString_x21___closed__3_once, _init_l_Std_Http_Internal_quoteHttpString_x21___closed__3);
v___x_228_ = l_panic___at___00Std_Http_Internal_quoteHttpString_x21_spec__0(v___x_227_);
return v___x_228_;
}
else
{
lean_object* v_val_229_; 
v_val_229_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_val_229_);
lean_dec_ref_known(v___x_226_, 1);
return v_val_229_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorIdx(lean_object* v_x_230_){
_start:
{
switch(lean_obj_tag(v_x_230_))
{
case 0:
{
lean_object* v___x_231_; 
v___x_231_ = lean_unsigned_to_nat(0u);
return v___x_231_;
}
case 1:
{
lean_object* v___x_232_; 
v___x_232_ = lean_unsigned_to_nat(1u);
return v___x_232_;
}
case 2:
{
lean_object* v___x_233_; 
v___x_233_ = lean_unsigned_to_nat(2u);
return v___x_233_;
}
default: 
{
lean_object* v___x_234_; 
v___x_234_ = lean_unsigned_to_nat(3u);
return v___x_234_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorIdx___boxed(lean_object* v_x_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorIdx(v_x_235_);
lean_dec(v_x_235_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorElim___redArg(lean_object* v_t_237_, lean_object* v_k_238_){
_start:
{
switch(lean_obj_tag(v_t_237_))
{
case 1:
{
uint8_t v_escaped_239_; lean_object* v_acc_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v_escaped_239_ = lean_ctor_get_uint8(v_t_237_, sizeof(void*)*1);
v_acc_240_ = lean_ctor_get(v_t_237_, 0);
lean_inc_ref(v_acc_240_);
lean_dec_ref_known(v_t_237_, 1);
v___x_241_ = lean_box(v_escaped_239_);
v___x_242_ = lean_apply_2(v_k_238_, v___x_241_, v_acc_240_);
return v___x_242_;
}
case 2:
{
lean_object* v_result_243_; lean_object* v___x_244_; 
v_result_243_ = lean_ctor_get(v_t_237_, 0);
lean_inc_ref(v_result_243_);
lean_dec_ref_known(v_t_237_, 1);
v___x_244_ = lean_apply_1(v_k_238_, v_result_243_);
return v___x_244_;
}
default: 
{
lean_dec(v_t_237_);
return v_k_238_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorElim(lean_object* v_motive_245_, lean_object* v_ctorIdx_246_, lean_object* v_t_247_, lean_object* v_h_248_, lean_object* v_k_249_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorElim___redArg(v_t_247_, v_k_249_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorElim___boxed(lean_object* v_motive_251_, lean_object* v_ctorIdx_252_, lean_object* v_t_253_, lean_object* v_h_254_, lean_object* v_k_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorElim(v_motive_251_, v_ctorIdx_252_, v_t_253_, v_h_254_, v_k_255_);
lean_dec(v_ctorIdx_252_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_start_elim___redArg(lean_object* v_t_257_, lean_object* v_start_258_){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorElim___redArg(v_t_257_, v_start_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_start_elim(lean_object* v_motive_260_, lean_object* v_t_261_, lean_object* v_h_262_, lean_object* v_start_263_){
_start:
{
lean_object* v___x_264_; 
v___x_264_ = l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorElim___redArg(v_t_261_, v_start_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_valid_elim___redArg(lean_object* v_t_265_, lean_object* v_valid_266_){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorElim___redArg(v_t_265_, v_valid_266_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_valid_elim(lean_object* v_motive_268_, lean_object* v_t_269_, lean_object* v_h_270_, lean_object* v_valid_271_){
_start:
{
lean_object* v___x_272_; 
v___x_272_ = l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorElim___redArg(v_t_269_, v_valid_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_done_elim___redArg(lean_object* v_t_273_, lean_object* v_done_274_){
_start:
{
lean_object* v___x_275_; 
v___x_275_ = l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorElim___redArg(v_t_273_, v_done_274_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_done_elim(lean_object* v_motive_276_, lean_object* v_t_277_, lean_object* v_h_278_, lean_object* v_done_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorElim___redArg(v_t_277_, v_done_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_invalid_elim___redArg(lean_object* v_t_281_, lean_object* v_invalid_282_){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorElim___redArg(v_t_281_, v_invalid_282_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_invalid_elim(lean_object* v_motive_284_, lean_object* v_t_285_, lean_object* v_h_286_, lean_object* v_invalid_287_){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = l___private_Std_Http_Internal_String_0__Std_Http_Internal_UnquoteState_ctorElim___redArg(v_t_285_, v_invalid_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__0(lean_object* v_s_289_, lean_object* v_pos_290_){
_start:
{
lean_object* v_str_291_; lean_object* v_startInclusive_292_; lean_object* v_endExclusive_293_; lean_object* v___x_294_; lean_object* v___x_303_; lean_object* v___x_304_; uint8_t v_decide_305_; 
v_str_291_ = lean_ctor_get(v_s_289_, 0);
v_startInclusive_292_ = lean_ctor_get(v_s_289_, 1);
v_endExclusive_293_ = lean_ctor_get(v_s_289_, 2);
v___x_294_ = lean_nat_add(v_startInclusive_292_, v_pos_290_);
v___x_303_ = lean_unsigned_to_nat(0u);
v___x_304_ = lean_nat_sub(v_endExclusive_293_, v___x_294_);
v_decide_305_ = lean_nat_dec_eq(v___x_303_, v___x_304_);
lean_dec(v___x_304_);
if (v_decide_305_ == 0)
{
uint32_t v___x_306_; uint8_t v___y_308_; uint32_t v___x_318_; uint8_t v___x_319_; 
v___x_306_ = lean_string_utf8_get_fast(v_str_291_, v___x_294_);
v___x_318_ = 33;
v___x_319_ = lean_uint32_dec_eq(v___x_306_, v___x_318_);
if (v___x_319_ == 0)
{
uint32_t v___x_320_; uint8_t v___x_321_; 
v___x_320_ = 35;
v___x_321_ = lean_uint32_dec_eq(v___x_306_, v___x_320_);
if (v___x_321_ == 0)
{
uint32_t v___x_322_; uint8_t v___x_323_; 
v___x_322_ = 36;
v___x_323_ = lean_uint32_dec_eq(v___x_306_, v___x_322_);
if (v___x_323_ == 0)
{
uint32_t v___x_324_; uint8_t v___x_325_; 
v___x_324_ = 37;
v___x_325_ = lean_uint32_dec_eq(v___x_306_, v___x_324_);
if (v___x_325_ == 0)
{
uint32_t v___x_326_; uint8_t v___x_327_; 
v___x_326_ = 38;
v___x_327_ = lean_uint32_dec_eq(v___x_306_, v___x_326_);
if (v___x_327_ == 0)
{
uint32_t v___x_328_; uint8_t v___x_329_; 
v___x_328_ = 39;
v___x_329_ = lean_uint32_dec_eq(v___x_306_, v___x_328_);
if (v___x_329_ == 0)
{
uint32_t v___x_330_; uint8_t v___x_331_; 
v___x_330_ = 42;
v___x_331_ = lean_uint32_dec_eq(v___x_306_, v___x_330_);
if (v___x_331_ == 0)
{
uint32_t v___x_332_; uint8_t v___x_333_; 
v___x_332_ = 43;
v___x_333_ = lean_uint32_dec_eq(v___x_306_, v___x_332_);
if (v___x_333_ == 0)
{
uint32_t v___x_334_; uint8_t v___x_335_; 
v___x_334_ = 45;
v___x_335_ = lean_uint32_dec_eq(v___x_306_, v___x_334_);
if (v___x_335_ == 0)
{
uint32_t v___x_336_; uint8_t v___x_337_; 
v___x_336_ = 46;
v___x_337_ = lean_uint32_dec_eq(v___x_306_, v___x_336_);
if (v___x_337_ == 0)
{
uint32_t v___x_338_; uint8_t v___x_339_; 
v___x_338_ = 94;
v___x_339_ = lean_uint32_dec_eq(v___x_306_, v___x_338_);
if (v___x_339_ == 0)
{
uint32_t v___x_340_; uint8_t v___x_341_; 
v___x_340_ = 95;
v___x_341_ = lean_uint32_dec_eq(v___x_306_, v___x_340_);
if (v___x_341_ == 0)
{
uint32_t v___x_342_; uint8_t v___x_343_; 
v___x_342_ = 96;
v___x_343_ = lean_uint32_dec_eq(v___x_306_, v___x_342_);
if (v___x_343_ == 0)
{
uint32_t v___x_344_; uint8_t v___x_345_; 
v___x_344_ = 124;
v___x_345_ = lean_uint32_dec_eq(v___x_306_, v___x_344_);
if (v___x_345_ == 0)
{
uint32_t v___x_346_; uint8_t v___x_347_; 
v___x_346_ = 126;
v___x_347_ = lean_uint32_dec_eq(v___x_306_, v___x_346_);
if (v___x_347_ == 0)
{
uint32_t v___x_348_; uint8_t v___x_349_; 
v___x_348_ = 48;
v___x_349_ = lean_uint32_dec_le(v___x_348_, v___x_306_);
if (v___x_349_ == 0)
{
goto v___jp_313_;
}
else
{
uint32_t v___x_350_; uint8_t v___x_351_; 
v___x_350_ = 57;
v___x_351_ = lean_uint32_dec_le(v___x_306_, v___x_350_);
if (v___x_351_ == 0)
{
goto v___jp_313_;
}
else
{
goto v___jp_295_;
}
}
}
else
{
goto v___jp_295_;
}
}
else
{
goto v___jp_295_;
}
}
else
{
goto v___jp_295_;
}
}
else
{
goto v___jp_295_;
}
}
else
{
goto v___jp_295_;
}
}
else
{
goto v___jp_295_;
}
}
else
{
goto v___jp_295_;
}
}
else
{
goto v___jp_295_;
}
}
else
{
goto v___jp_295_;
}
}
else
{
goto v___jp_295_;
}
}
else
{
goto v___jp_295_;
}
}
else
{
goto v___jp_295_;
}
}
else
{
goto v___jp_295_;
}
}
else
{
goto v___jp_295_;
}
}
else
{
goto v___jp_295_;
}
v___jp_307_:
{
if (v___y_308_ == 0)
{
uint32_t v___x_309_; uint8_t v___x_310_; 
v___x_309_ = 97;
v___x_310_ = lean_uint32_dec_le(v___x_309_, v___x_306_);
if (v___x_310_ == 0)
{
lean_dec(v___x_294_);
return v_pos_290_;
}
else
{
uint32_t v___x_311_; uint8_t v___x_312_; 
v___x_311_ = 122;
v___x_312_ = lean_uint32_dec_le(v___x_306_, v___x_311_);
if (v___x_312_ == 0)
{
lean_dec(v___x_294_);
return v_pos_290_;
}
else
{
goto v___jp_295_;
}
}
}
else
{
goto v___jp_295_;
}
}
v___jp_313_:
{
uint32_t v___x_314_; uint8_t v___x_315_; 
v___x_314_ = 65;
v___x_315_ = lean_uint32_dec_le(v___x_314_, v___x_306_);
if (v___x_315_ == 0)
{
v___y_308_ = v___x_315_;
goto v___jp_307_;
}
else
{
uint32_t v___x_316_; uint8_t v___x_317_; 
v___x_316_ = 90;
v___x_317_ = lean_uint32_dec_le(v___x_306_, v___x_316_);
v___y_308_ = v___x_317_;
goto v___jp_307_;
}
}
}
else
{
lean_dec(v___x_294_);
return v_pos_290_;
}
v___jp_295_:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; uint8_t v___x_301_; 
v___x_296_ = lean_string_utf8_next_fast(v_str_291_, v___x_294_);
v___x_297_ = lean_nat_sub(v___x_296_, v___x_294_);
lean_dec(v___x_294_);
v___x_298_ = lean_nat_add(v_pos_290_, v___x_297_);
lean_dec(v___x_297_);
v___x_299_ = lean_unsigned_to_nat(1u);
v___x_300_ = lean_nat_add(v_pos_290_, v___x_299_);
v___x_301_ = lean_nat_dec_le(v___x_300_, v___x_298_);
lean_dec(v___x_300_);
if (v___x_301_ == 0)
{
lean_dec(v___x_298_);
return v_pos_290_;
}
else
{
lean_dec(v_pos_290_);
v_pos_290_ = v___x_298_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__0___boxed(lean_object* v_s_352_, lean_object* v_pos_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_String_Slice_Pos_skipWhile___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__0(v_s_352_, v_pos_353_);
lean_dec_ref(v_s_352_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__1___redArg(lean_object* v___x_355_, lean_object* v___x_356_, uint32_t v___x_357_, lean_object* v___x_358_, lean_object* v_s_359_, lean_object* v_a_360_, lean_object* v_b_361_){
_start:
{
uint8_t v_decide_362_; 
v_decide_362_ = lean_nat_dec_eq(v_a_360_, v___x_358_);
if (v_decide_362_ == 0)
{
uint32_t v___x_363_; uint8_t v_decide_364_; uint32_t v___x_365_; lean_object* v___x_366_; 
v___x_363_ = 34;
v_decide_364_ = lean_nat_dec_eq(v___x_355_, v___x_356_);
v___x_365_ = lean_string_utf8_get_fast(v_s_359_, v_a_360_);
v___x_366_ = lean_string_utf8_next_fast(v_s_359_, v_a_360_);
lean_dec(v_a_360_);
switch(lean_obj_tag(v_b_361_))
{
case 0:
{
uint8_t v___x_367_; 
v___x_367_ = lean_uint32_dec_eq(v___x_365_, v___x_363_);
if (v___x_367_ == 0)
{
lean_object* v___x_368_; 
v___x_368_ = lean_box(3);
v_a_360_ = v___x_366_;
v_b_361_ = v___x_368_;
goto _start;
}
else
{
lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = ((lean_object*)(l_Std_Http_Internal_quoteCore___redArg___closed__0));
v___x_371_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_371_, 0, v___x_370_);
lean_ctor_set_uint8(v___x_371_, sizeof(void*)*1, v_decide_364_);
v_a_360_ = v___x_366_;
v_b_361_ = v___x_371_;
goto _start;
}
}
case 1:
{
uint8_t v_escaped_373_; lean_object* v_acc_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_428_; 
v_escaped_373_ = lean_ctor_get_uint8(v_b_361_, sizeof(void*)*1);
v_acc_374_ = lean_ctor_get(v_b_361_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v_b_361_);
if (v_isSharedCheck_428_ == 0)
{
v___x_376_ = v_b_361_;
v_isShared_377_ = v_isSharedCheck_428_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_acc_374_);
lean_dec(v_b_361_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_428_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
uint8_t v___y_385_; 
if (v_escaped_373_ == 0)
{
uint32_t v___x_388_; uint8_t v___x_389_; 
lean_del_object(v___x_376_);
v___x_388_ = 92;
v___x_389_ = lean_uint32_dec_eq(v___x_365_, v___x_388_);
if (v___x_389_ == 0)
{
uint8_t v___x_390_; uint8_t v___y_396_; uint8_t v___y_400_; 
v___x_390_ = lean_uint32_dec_eq(v___x_365_, v___x_363_);
if (v___x_390_ == 0)
{
uint32_t v___x_405_; uint8_t v___x_406_; 
v___x_405_ = 9;
v___x_406_ = lean_uint32_dec_eq(v___x_365_, v___x_405_);
if (v___x_406_ == 0)
{
uint32_t v___x_407_; uint8_t v___x_408_; 
v___x_407_ = 32;
v___x_408_ = lean_uint32_dec_eq(v___x_365_, v___x_407_);
if (v___x_408_ == 0)
{
uint32_t v___x_409_; uint8_t v___x_410_; 
v___x_409_ = 33;
v___x_410_ = lean_uint32_dec_eq(v___x_365_, v___x_409_);
if (v___x_410_ == 0)
{
uint32_t v___x_411_; uint8_t v___x_412_; 
v___x_411_ = 35;
v___x_412_ = lean_uint32_dec_le(v___x_411_, v___x_365_);
if (v___x_412_ == 0)
{
v___y_400_ = v___x_412_;
goto v___jp_399_;
}
else
{
uint32_t v___x_413_; uint8_t v___x_414_; 
v___x_413_ = 91;
v___x_414_ = lean_uint32_dec_le(v___x_365_, v___x_413_);
v___y_400_ = v___x_414_;
goto v___jp_399_;
}
}
else
{
goto v___jp_391_;
}
}
else
{
goto v___jp_391_;
}
}
else
{
goto v___jp_391_;
}
}
else
{
lean_object* v___x_415_; 
v___x_415_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_415_, 0, v_acc_374_);
v_a_360_ = v___x_366_;
v_b_361_ = v___x_415_;
goto _start;
}
v___jp_391_:
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = lean_string_push(v_acc_374_, v___x_365_);
v___x_393_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_393_, 0, v___x_392_);
lean_ctor_set_uint8(v___x_393_, sizeof(void*)*1, v___x_390_);
v_a_360_ = v___x_366_;
v_b_361_ = v___x_393_;
goto _start;
}
v___jp_395_:
{
if (v___y_396_ == 0)
{
lean_object* v___x_397_; 
lean_dec_ref(v_acc_374_);
v___x_397_ = lean_box(3);
v_a_360_ = v___x_366_;
v_b_361_ = v___x_397_;
goto _start;
}
else
{
goto v___jp_391_;
}
}
v___jp_399_:
{
if (v___y_400_ == 0)
{
uint32_t v___x_401_; uint8_t v___x_402_; 
v___x_401_ = 93;
v___x_402_ = lean_uint32_dec_le(v___x_401_, v___x_365_);
if (v___x_402_ == 0)
{
v___y_396_ = v___x_402_;
goto v___jp_395_;
}
else
{
uint32_t v___x_403_; uint8_t v___x_404_; 
v___x_403_ = 126;
v___x_404_ = lean_uint32_dec_le(v___x_365_, v___x_403_);
v___y_396_ = v___x_404_;
goto v___jp_395_;
}
}
else
{
goto v___jp_391_;
}
}
}
else
{
uint8_t v___x_417_; lean_object* v___x_418_; 
v___x_417_ = lean_uint32_dec_eq(v___x_357_, v___x_363_);
v___x_418_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_418_, 0, v_acc_374_);
lean_ctor_set_uint8(v___x_418_, sizeof(void*)*1, v___x_417_);
v_a_360_ = v___x_366_;
v_b_361_ = v___x_418_;
goto _start;
}
}
else
{
uint32_t v___x_420_; uint8_t v___x_421_; 
v___x_420_ = 9;
v___x_421_ = lean_uint32_dec_eq(v___x_365_, v___x_420_);
if (v___x_421_ == 0)
{
uint32_t v___x_422_; uint8_t v___x_423_; 
v___x_422_ = 32;
v___x_423_ = lean_uint32_dec_eq(v___x_365_, v___x_422_);
if (v___x_423_ == 0)
{
uint32_t v___x_424_; uint8_t v___x_425_; 
v___x_424_ = 33;
v___x_425_ = lean_uint32_dec_le(v___x_424_, v___x_365_);
if (v___x_425_ == 0)
{
v___y_385_ = v___x_425_;
goto v___jp_384_;
}
else
{
uint32_t v___x_426_; uint8_t v___x_427_; 
v___x_426_ = 126;
v___x_427_ = lean_uint32_dec_le(v___x_365_, v___x_426_);
v___y_385_ = v___x_427_;
goto v___jp_384_;
}
}
else
{
goto v___jp_378_;
}
}
else
{
goto v___jp_378_;
}
}
v___jp_378_:
{
lean_object* v___x_379_; lean_object* v___x_381_; 
v___x_379_ = lean_string_push(v_acc_374_, v___x_365_);
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 0, v___x_379_);
v___x_381_ = v___x_376_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v___x_379_);
v___x_381_ = v_reuseFailAlloc_383_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
lean_ctor_set_uint8(v___x_381_, sizeof(void*)*1, v_decide_364_);
v_a_360_ = v___x_366_;
v_b_361_ = v___x_381_;
goto _start;
}
}
v___jp_384_:
{
if (v___y_385_ == 0)
{
lean_object* v___x_386_; 
lean_del_object(v___x_376_);
lean_dec_ref(v_acc_374_);
v___x_386_ = lean_box(3);
v_a_360_ = v___x_366_;
v_b_361_ = v___x_386_;
goto _start;
}
else
{
goto v___jp_378_;
}
}
}
}
case 2:
{
lean_object* v___x_429_; 
lean_dec_ref_known(v_b_361_, 1);
v___x_429_ = lean_box(3);
v_a_360_ = v___x_366_;
v_b_361_ = v___x_429_;
goto _start;
}
default: 
{
v_a_360_ = v___x_366_;
goto _start;
}
}
}
else
{
lean_dec(v_a_360_);
return v_b_361_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__1___redArg___boxed(lean_object* v___x_432_, lean_object* v___x_433_, lean_object* v___x_434_, lean_object* v___x_435_, lean_object* v_s_436_, lean_object* v_a_437_, lean_object* v_b_438_){
_start:
{
uint32_t v___x_2368__boxed_439_; lean_object* v_res_440_; 
v___x_2368__boxed_439_ = lean_unbox_uint32(v___x_434_);
lean_dec(v___x_434_);
v_res_440_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__1___redArg(v___x_432_, v___x_433_, v___x_2368__boxed_439_, v___x_435_, v_s_436_, v_a_437_, v_b_438_);
lean_dec_ref(v_s_436_);
lean_dec(v___x_435_);
lean_dec(v___x_433_);
lean_dec(v___x_432_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_unquoteHttpString_x3f(lean_object* v_s_441_){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; uint8_t v_decide_452_; 
v___x_450_ = lean_unsigned_to_nat(0u);
v___x_451_ = lean_string_utf8_byte_size(v_s_441_);
v_decide_452_ = lean_nat_dec_eq(v___x_450_, v___x_451_);
if (v_decide_452_ == 0)
{
uint32_t v___x_453_; uint32_t v___x_454_; uint8_t v___x_455_; 
v___x_453_ = 34;
v___x_454_ = lean_string_utf8_get_fast(v_s_441_, v___x_450_);
v___x_455_ = lean_uint32_dec_eq(v___x_454_, v___x_453_);
if (v___x_455_ == 0)
{
goto v___jp_442_;
}
else
{
lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_456_ = lean_box(0);
v___x_457_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__1___redArg(v___x_450_, v___x_451_, v___x_454_, v___x_451_, v_s_441_, v___x_450_, v___x_456_);
lean_dec_ref(v_s_441_);
if (lean_obj_tag(v___x_457_) == 2)
{
lean_object* v_result_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
v_result_458_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_457_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_result_458_);
lean_dec(v___x_457_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
lean_ctor_set_tag(v___x_460_, 1);
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_result_458_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
else
{
lean_object* v___x_466_; 
lean_dec(v___x_457_);
v___x_466_ = lean_box(0);
return v___x_466_;
}
}
}
else
{
goto v___jp_442_;
}
v___jp_442_:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; uint8_t v_decide_447_; 
v___x_443_ = lean_unsigned_to_nat(0u);
v___x_444_ = lean_string_utf8_byte_size(v_s_441_);
lean_inc_ref(v_s_441_);
v___x_445_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_445_, 0, v_s_441_);
lean_ctor_set(v___x_445_, 1, v___x_443_);
lean_ctor_set(v___x_445_, 2, v___x_444_);
v___x_446_ = l_String_Slice_Pos_skipWhile___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__0(v___x_445_, v___x_443_);
lean_dec_ref_known(v___x_445_, 3);
v_decide_447_ = lean_nat_dec_eq(v___x_446_, v___x_444_);
lean_dec(v___x_446_);
if (v_decide_447_ == 0)
{
lean_object* v___x_448_; 
lean_dec_ref(v_s_441_);
v___x_448_ = lean_box(0);
return v___x_448_;
}
else
{
lean_object* v___x_449_; 
v___x_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_449_, 0, v_s_441_);
return v___x_449_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__1(lean_object* v___x_467_, lean_object* v___x_468_, lean_object* v___x_469_, uint32_t v___x_470_, lean_object* v___x_471_, lean_object* v___x_472_, lean_object* v_s_473_, lean_object* v_inst_474_, lean_object* v_R_475_, lean_object* v_a_476_, lean_object* v_b_477_, lean_object* v_c_478_){
_start:
{
lean_object* v___x_479_; 
v___x_479_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__1___redArg(v___x_468_, v___x_469_, v___x_470_, v___x_472_, v_s_473_, v_a_476_, v_b_477_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__1___boxed(lean_object* v___x_480_, lean_object* v___x_481_, lean_object* v___x_482_, lean_object* v___x_483_, lean_object* v___x_484_, lean_object* v___x_485_, lean_object* v_s_486_, lean_object* v_inst_487_, lean_object* v_R_488_, lean_object* v_a_489_, lean_object* v_b_490_, lean_object* v_c_491_){
_start:
{
uint32_t v___x_2572__boxed_492_; lean_object* v_res_493_; 
v___x_2572__boxed_492_ = lean_unbox_uint32(v___x_483_);
lean_dec(v___x_483_);
v_res_493_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_Internal_unquoteHttpString_x3f_spec__1(v___x_480_, v___x_481_, v___x_482_, v___x_2572__boxed_492_, v___x_484_, v___x_485_, v_s_486_, v_inst_487_, v_R_488_, v_a_489_, v_b_490_, v_c_491_);
lean_dec_ref(v_s_486_);
lean_dec(v___x_485_);
lean_dec_ref(v___x_484_);
lean_dec(v___x_482_);
lean_dec(v___x_481_);
lean_dec_ref(v___x_480_);
return v_res_493_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_Internal_isToken_spec__0(lean_object* v_x_494_){
_start:
{
if (lean_obj_tag(v_x_494_) == 0)
{
uint8_t v___x_495_; 
v___x_495_ = 1;
return v___x_495_;
}
else
{
lean_object* v_head_496_; lean_object* v_tail_497_; uint8_t v___y_499_; uint32_t v___x_515_; uint32_t v___x_516_; uint8_t v___x_517_; 
v_head_496_ = lean_ctor_get(v_x_494_, 0);
v_tail_497_ = lean_ctor_get(v_x_494_, 1);
v___x_515_ = 33;
v___x_516_ = lean_unbox_uint32(v_head_496_);
v___x_517_ = lean_uint32_dec_eq(v___x_516_, v___x_515_);
if (v___x_517_ == 0)
{
uint32_t v___x_518_; uint32_t v___x_519_; uint8_t v___x_520_; 
v___x_518_ = 35;
v___x_519_ = lean_unbox_uint32(v_head_496_);
v___x_520_ = lean_uint32_dec_eq(v___x_519_, v___x_518_);
if (v___x_520_ == 0)
{
uint32_t v___x_521_; uint32_t v___x_522_; uint8_t v___x_523_; 
v___x_521_ = 36;
v___x_522_ = lean_unbox_uint32(v_head_496_);
v___x_523_ = lean_uint32_dec_eq(v___x_522_, v___x_521_);
if (v___x_523_ == 0)
{
uint32_t v___x_524_; uint32_t v___x_525_; uint8_t v___x_526_; 
v___x_524_ = 37;
v___x_525_ = lean_unbox_uint32(v_head_496_);
v___x_526_ = lean_uint32_dec_eq(v___x_525_, v___x_524_);
if (v___x_526_ == 0)
{
uint32_t v___x_527_; uint32_t v___x_528_; uint8_t v___x_529_; 
v___x_527_ = 38;
v___x_528_ = lean_unbox_uint32(v_head_496_);
v___x_529_ = lean_uint32_dec_eq(v___x_528_, v___x_527_);
if (v___x_529_ == 0)
{
uint32_t v___x_530_; uint32_t v___x_531_; uint8_t v___x_532_; 
v___x_530_ = 39;
v___x_531_ = lean_unbox_uint32(v_head_496_);
v___x_532_ = lean_uint32_dec_eq(v___x_531_, v___x_530_);
if (v___x_532_ == 0)
{
uint32_t v___x_533_; uint32_t v___x_534_; uint8_t v___x_535_; 
v___x_533_ = 42;
v___x_534_ = lean_unbox_uint32(v_head_496_);
v___x_535_ = lean_uint32_dec_eq(v___x_534_, v___x_533_);
if (v___x_535_ == 0)
{
uint32_t v___x_536_; uint32_t v___x_537_; uint8_t v___x_538_; 
v___x_536_ = 43;
v___x_537_ = lean_unbox_uint32(v_head_496_);
v___x_538_ = lean_uint32_dec_eq(v___x_537_, v___x_536_);
if (v___x_538_ == 0)
{
uint32_t v___x_539_; uint32_t v___x_540_; uint8_t v___x_541_; 
v___x_539_ = 45;
v___x_540_ = lean_unbox_uint32(v_head_496_);
v___x_541_ = lean_uint32_dec_eq(v___x_540_, v___x_539_);
if (v___x_541_ == 0)
{
uint32_t v___x_542_; uint32_t v___x_543_; uint8_t v___x_544_; 
v___x_542_ = 46;
v___x_543_ = lean_unbox_uint32(v_head_496_);
v___x_544_ = lean_uint32_dec_eq(v___x_543_, v___x_542_);
if (v___x_544_ == 0)
{
uint32_t v___x_545_; uint32_t v___x_546_; uint8_t v___x_547_; 
v___x_545_ = 94;
v___x_546_ = lean_unbox_uint32(v_head_496_);
v___x_547_ = lean_uint32_dec_eq(v___x_546_, v___x_545_);
if (v___x_547_ == 0)
{
uint32_t v___x_548_; uint32_t v___x_549_; uint8_t v___x_550_; 
v___x_548_ = 95;
v___x_549_ = lean_unbox_uint32(v_head_496_);
v___x_550_ = lean_uint32_dec_eq(v___x_549_, v___x_548_);
if (v___x_550_ == 0)
{
uint32_t v___x_551_; uint32_t v___x_552_; uint8_t v___x_553_; 
v___x_551_ = 96;
v___x_552_ = lean_unbox_uint32(v_head_496_);
v___x_553_ = lean_uint32_dec_eq(v___x_552_, v___x_551_);
if (v___x_553_ == 0)
{
uint32_t v___x_554_; uint32_t v___x_555_; uint8_t v___x_556_; 
v___x_554_ = 124;
v___x_555_ = lean_unbox_uint32(v_head_496_);
v___x_556_ = lean_uint32_dec_eq(v___x_555_, v___x_554_);
if (v___x_556_ == 0)
{
uint32_t v___x_557_; uint32_t v___x_558_; uint8_t v___x_559_; 
v___x_557_ = 126;
v___x_558_ = lean_unbox_uint32(v_head_496_);
v___x_559_ = lean_uint32_dec_eq(v___x_558_, v___x_557_);
if (v___x_559_ == 0)
{
uint32_t v___x_560_; uint32_t v___x_561_; uint8_t v___x_562_; 
v___x_560_ = 48;
v___x_561_ = lean_unbox_uint32(v_head_496_);
v___x_562_ = lean_uint32_dec_le(v___x_560_, v___x_561_);
if (v___x_562_ == 0)
{
goto v___jp_508_;
}
else
{
uint32_t v___x_563_; uint32_t v___x_564_; uint8_t v___x_565_; 
v___x_563_ = 57;
v___x_564_ = lean_unbox_uint32(v_head_496_);
v___x_565_ = lean_uint32_dec_le(v___x_564_, v___x_563_);
if (v___x_565_ == 0)
{
goto v___jp_508_;
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
}
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
v___jp_498_:
{
if (v___y_499_ == 0)
{
uint32_t v___x_500_; uint32_t v___x_501_; uint8_t v___x_502_; 
v___x_500_ = 97;
v___x_501_ = lean_unbox_uint32(v_head_496_);
v___x_502_ = lean_uint32_dec_le(v___x_500_, v___x_501_);
if (v___x_502_ == 0)
{
return v___x_502_;
}
else
{
uint32_t v___x_503_; uint32_t v___x_504_; uint8_t v___x_505_; 
v___x_503_ = 122;
v___x_504_ = lean_unbox_uint32(v_head_496_);
v___x_505_ = lean_uint32_dec_le(v___x_504_, v___x_503_);
if (v___x_505_ == 0)
{
return v___x_505_;
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
}
}
else
{
v_x_494_ = v_tail_497_;
goto _start;
}
}
v___jp_508_:
{
uint32_t v___x_509_; uint32_t v___x_510_; uint8_t v___x_511_; 
v___x_509_ = 65;
v___x_510_ = lean_unbox_uint32(v_head_496_);
v___x_511_ = lean_uint32_dec_le(v___x_509_, v___x_510_);
if (v___x_511_ == 0)
{
v___y_499_ = v___x_511_;
goto v___jp_498_;
}
else
{
uint32_t v___x_512_; uint32_t v___x_513_; uint8_t v___x_514_; 
v___x_512_ = 90;
v___x_513_ = lean_unbox_uint32(v_head_496_);
v___x_514_ = lean_uint32_dec_le(v___x_513_, v___x_512_);
v___y_499_ = v___x_514_;
goto v___jp_498_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_Internal_isToken_spec__0___boxed(lean_object* v_x_582_){
_start:
{
uint8_t v_res_583_; lean_object* v_r_584_; 
v_res_583_ = l_List_all___at___00Std_Http_Internal_isToken_spec__0(v_x_582_);
lean_dec(v_x_582_);
v_r_584_ = lean_box(v_res_583_);
return v_r_584_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_isToken(lean_object* v_s_585_){
_start:
{
lean_object* v_s_586_; uint8_t v___x_587_; 
v_s_586_ = lean_string_data(v_s_585_);
v___x_587_ = l_List_isEmpty___redArg(v_s_586_);
if (v___x_587_ == 0)
{
uint8_t v___x_588_; 
v___x_588_ = l_List_all___at___00Std_Http_Internal_isToken_spec__0(v_s_586_);
lean_dec(v_s_586_);
return v___x_588_;
}
else
{
uint8_t v___x_589_; 
lean_dec(v_s_586_);
v___x_589_ = 0;
return v___x_589_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_isToken___boxed(lean_object* v_s_590_){
_start:
{
uint8_t v_res_591_; lean_object* v_r_592_; 
v_res_591_ = l_Std_Http_Internal_isToken(v_s_590_);
v_r_592_ = lean_box(v_res_591_);
return v_r_592_;
}
}
lean_object* runtime_initialize_Init_Grind(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Internal_Char(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Internal_String(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Internal_Char(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Internal_String(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Std_Http_Internal_Char(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Internal_String(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Internal_Char(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Internal_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Internal_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Internal_String(builtin);
}
#ifdef __cplusplus
}
#endif

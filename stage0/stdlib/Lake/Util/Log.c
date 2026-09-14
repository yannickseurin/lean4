// Lean compiler output
// Module: Lake.Util.Log
// Imports: public import Lean.Data.Json public import Lake.Util.Error public import Lake.Util.EStateT public import Lean.Message public import Lake.Util.Lift import Init.Data.String.TakeDrop import Init.Data.String.Modify
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
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_putStrLn(lean_object*, lean_object*);
lean_object* l_Lean_mkErrorStringWithPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_Lake_EResult_result_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_get_stdout();
lean_object* lean_get_stderr();
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* l_Char_utf8Size(uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lake_EResult_toProd(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lake_EResult_toProd_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EResult_toExcept___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_IO_setStderr___boxed(lean_object*, lean_object*);
lean_object* l_IO_setStdout___boxed(lean_object*, lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* l_IO_mkRef___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer(lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
extern lean_object* l_instMonadBaseIO;
lean_object* lean_stream_of_handle(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Array_toJson___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Array_fromJson_x3f___redArg(lean_object*, lean_object*);
lean_object* l_instMonadStateOfStateTOfMonad___redArg(lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instFunctor___redArg(lean_object*);
lean_object* l_Lake_EStateT_instPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonadStateOfOfPure___redArg(lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_quiet_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_quiet_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_quiet_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_quiet_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_normal_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_normal_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_normal_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_normal_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_verbose_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_verbose_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_verbose_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_verbose_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_instReprVerbosity_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.Verbosity.quiet"};
static const lean_object* l_Lake_instReprVerbosity_repr___closed__0 = (const lean_object*)&l_Lake_instReprVerbosity_repr___closed__0_value;
static const lean_ctor_object l_Lake_instReprVerbosity_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprVerbosity_repr___closed__0_value)}};
static const lean_object* l_Lake_instReprVerbosity_repr___closed__1 = (const lean_object*)&l_Lake_instReprVerbosity_repr___closed__1_value;
static const lean_string_object l_Lake_instReprVerbosity_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lake.Verbosity.normal"};
static const lean_object* l_Lake_instReprVerbosity_repr___closed__2 = (const lean_object*)&l_Lake_instReprVerbosity_repr___closed__2_value;
static const lean_ctor_object l_Lake_instReprVerbosity_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprVerbosity_repr___closed__2_value)}};
static const lean_object* l_Lake_instReprVerbosity_repr___closed__3 = (const lean_object*)&l_Lake_instReprVerbosity_repr___closed__3_value;
static const lean_string_object l_Lake_instReprVerbosity_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lake.Verbosity.verbose"};
static const lean_object* l_Lake_instReprVerbosity_repr___closed__4 = (const lean_object*)&l_Lake_instReprVerbosity_repr___closed__4_value;
static const lean_ctor_object l_Lake_instReprVerbosity_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprVerbosity_repr___closed__4_value)}};
static const lean_object* l_Lake_instReprVerbosity_repr___closed__5 = (const lean_object*)&l_Lake_instReprVerbosity_repr___closed__5_value;
static lean_once_cell_t l_Lake_instReprVerbosity_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprVerbosity_repr___closed__6;
static lean_once_cell_t l_Lake_instReprVerbosity_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprVerbosity_repr___closed__7;
LEAN_EXPORT lean_object* l_Lake_instReprVerbosity_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprVerbosity_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprVerbosity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprVerbosity_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprVerbosity___closed__0 = (const lean_object*)&l_Lake_instReprVerbosity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprVerbosity = (const lean_object*)&l_Lake_instReprVerbosity___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_Verbosity_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqVerbosity(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqVerbosity___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instOrdVerbosity_ord(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instOrdVerbosity_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instOrdVerbosity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instOrdVerbosity_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instOrdVerbosity___closed__0 = (const lean_object*)&l_Lake_instOrdVerbosity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instOrdVerbosity = (const lean_object*)&l_Lake_instOrdVerbosity___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instLTVerbosity;
LEAN_EXPORT lean_object* l_Lake_instLEVerbosity;
LEAN_EXPORT uint8_t l_Lake_instMinVerbosity___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instMinVerbosity___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMinVerbosity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMinVerbosity___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMinVerbosity___closed__0 = (const lean_object*)&l_Lake_instMinVerbosity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMinVerbosity = (const lean_object*)&l_Lake_instMinVerbosity___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instMaxVerbosity___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instMaxVerbosity___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMaxVerbosity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMaxVerbosity___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMaxVerbosity___closed__0 = (const lean_object*)&l_Lake_instMaxVerbosity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMaxVerbosity = (const lean_object*)&l_Lake_instMaxVerbosity___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instInhabitedVerbosity;
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_auto_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_auto_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_auto_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_auto_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ansi_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ansi_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ansi_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ansi_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_noAnsi_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_noAnsi_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_noAnsi_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_noAnsi_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_instReprAnsiMode_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lake.AnsiMode.auto"};
static const lean_object* l_Lake_instReprAnsiMode_repr___closed__0 = (const lean_object*)&l_Lake_instReprAnsiMode_repr___closed__0_value;
static const lean_ctor_object l_Lake_instReprAnsiMode_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprAnsiMode_repr___closed__0_value)}};
static const lean_object* l_Lake_instReprAnsiMode_repr___closed__1 = (const lean_object*)&l_Lake_instReprAnsiMode_repr___closed__1_value;
static const lean_string_object l_Lake_instReprAnsiMode_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lake.AnsiMode.ansi"};
static const lean_object* l_Lake_instReprAnsiMode_repr___closed__2 = (const lean_object*)&l_Lake_instReprAnsiMode_repr___closed__2_value;
static const lean_ctor_object l_Lake_instReprAnsiMode_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprAnsiMode_repr___closed__2_value)}};
static const lean_object* l_Lake_instReprAnsiMode_repr___closed__3 = (const lean_object*)&l_Lake_instReprAnsiMode_repr___closed__3_value;
static const lean_string_object l_Lake_instReprAnsiMode_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.AnsiMode.noAnsi"};
static const lean_object* l_Lake_instReprAnsiMode_repr___closed__4 = (const lean_object*)&l_Lake_instReprAnsiMode_repr___closed__4_value;
static const lean_ctor_object l_Lake_instReprAnsiMode_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprAnsiMode_repr___closed__4_value)}};
static const lean_object* l_Lake_instReprAnsiMode_repr___closed__5 = (const lean_object*)&l_Lake_instReprAnsiMode_repr___closed__5_value;
LEAN_EXPORT lean_object* l_Lake_instReprAnsiMode_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprAnsiMode_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprAnsiMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprAnsiMode_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprAnsiMode___closed__0 = (const lean_object*)&l_Lake_instReprAnsiMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprAnsiMode = (const lean_object*)&l_Lake_instReprAnsiMode___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_AnsiMode_isEnabled(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_isEnabled___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Ansi_chalk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "\033[1;"};
static const lean_object* l_Lake_Ansi_chalk___closed__0 = (const lean_object*)&l_Lake_Ansi_chalk___closed__0_value;
static const lean_string_object l_Lake_Ansi_chalk___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l_Lake_Ansi_chalk___closed__1 = (const lean_object*)&l_Lake_Ansi_chalk___closed__1_value;
static const lean_string_object l_Lake_Ansi_chalk___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\033[m"};
static const lean_object* l_Lake_Ansi_chalk___closed__2 = (const lean_object*)&l_Lake_Ansi_chalk___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_Ansi_chalk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Ansi_chalk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_stdout_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_stdout_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_stderr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_stderr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_stream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_stream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_get(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeStreamOutStream___lam__0(lean_object*);
static const lean_closure_object l_Lake_instCoeStreamOutStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instCoeStreamOutStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instCoeStreamOutStream___closed__0 = (const lean_object*)&l_Lake_instCoeStreamOutStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeStreamOutStream = (const lean_object*)&l_Lake_instCoeStreamOutStream___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instCoeHandleOutStream___lam__0(lean_object*);
static const lean_closure_object l_Lake_instCoeHandleOutStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instCoeHandleOutStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instCoeHandleOutStream___closed__0 = (const lean_object*)&l_Lake_instCoeHandleOutStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeHandleOutStream = (const lean_object*)&l_Lake_instCoeHandleOutStream___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_trace_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_trace_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_trace_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_trace_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_info_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_info_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_info_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_info_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_warning_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_warning_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_warning_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_warning_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_error_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_error_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_error_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_error_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instInhabitedLogLevel_default;
LEAN_EXPORT uint8_t l_Lake_instInhabitedLogLevel;
static const lean_string_object l_Lake_instReprLogLevel_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lake.LogLevel.trace"};
static const lean_object* l_Lake_instReprLogLevel_repr___closed__0 = (const lean_object*)&l_Lake_instReprLogLevel_repr___closed__0_value;
static const lean_ctor_object l_Lake_instReprLogLevel_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLogLevel_repr___closed__0_value)}};
static const lean_object* l_Lake_instReprLogLevel_repr___closed__1 = (const lean_object*)&l_Lake_instReprLogLevel_repr___closed__1_value;
static const lean_string_object l_Lake_instReprLogLevel_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lake.LogLevel.info"};
static const lean_object* l_Lake_instReprLogLevel_repr___closed__2 = (const lean_object*)&l_Lake_instReprLogLevel_repr___closed__2_value;
static const lean_ctor_object l_Lake_instReprLogLevel_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLogLevel_repr___closed__2_value)}};
static const lean_object* l_Lake_instReprLogLevel_repr___closed__3 = (const lean_object*)&l_Lake_instReprLogLevel_repr___closed__3_value;
static const lean_string_object l_Lake_instReprLogLevel_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lake.LogLevel.warning"};
static const lean_object* l_Lake_instReprLogLevel_repr___closed__4 = (const lean_object*)&l_Lake_instReprLogLevel_repr___closed__4_value;
static const lean_ctor_object l_Lake_instReprLogLevel_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLogLevel_repr___closed__4_value)}};
static const lean_object* l_Lake_instReprLogLevel_repr___closed__5 = (const lean_object*)&l_Lake_instReprLogLevel_repr___closed__5_value;
static const lean_string_object l_Lake_instReprLogLevel_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lake.LogLevel.error"};
static const lean_object* l_Lake_instReprLogLevel_repr___closed__6 = (const lean_object*)&l_Lake_instReprLogLevel_repr___closed__6_value;
static const lean_ctor_object l_Lake_instReprLogLevel_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLogLevel_repr___closed__6_value)}};
static const lean_object* l_Lake_instReprLogLevel_repr___closed__7 = (const lean_object*)&l_Lake_instReprLogLevel_repr___closed__7_value;
LEAN_EXPORT lean_object* l_Lake_instReprLogLevel_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprLogLevel_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprLogLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprLogLevel_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprLogLevel___closed__0 = (const lean_object*)&l_Lake_instReprLogLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprLogLevel = (const lean_object*)&l_Lake_instReprLogLevel___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_LogLevel_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqLogLevel(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqLogLevel___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instOrdLogLevel_ord(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instOrdLogLevel_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instOrdLogLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instOrdLogLevel_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instOrdLogLevel___closed__0 = (const lean_object*)&l_Lake_instOrdLogLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instOrdLogLevel = (const lean_object*)&l_Lake_instOrdLogLevel___closed__0_value;
static const lean_string_object l_Lake_instToJsonLogLevel_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lake_instToJsonLogLevel_toJson___closed__0 = (const lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__0_value;
static const lean_ctor_object l_Lake_instToJsonLogLevel_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__0_value)}};
static const lean_object* l_Lake_instToJsonLogLevel_toJson___closed__1 = (const lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__1_value;
static const lean_string_object l_Lake_instToJsonLogLevel_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "info"};
static const lean_object* l_Lake_instToJsonLogLevel_toJson___closed__2 = (const lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__2_value;
static const lean_ctor_object l_Lake_instToJsonLogLevel_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__2_value)}};
static const lean_object* l_Lake_instToJsonLogLevel_toJson___closed__3 = (const lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__3_value;
static const lean_string_object l_Lake_instToJsonLogLevel_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "warning"};
static const lean_object* l_Lake_instToJsonLogLevel_toJson___closed__4 = (const lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__4_value;
static const lean_ctor_object l_Lake_instToJsonLogLevel_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__4_value)}};
static const lean_object* l_Lake_instToJsonLogLevel_toJson___closed__5 = (const lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__5_value;
static const lean_string_object l_Lake_instToJsonLogLevel_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lake_instToJsonLogLevel_toJson___closed__6 = (const lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__6_value;
static const lean_ctor_object l_Lake_instToJsonLogLevel_toJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__6_value)}};
static const lean_object* l_Lake_instToJsonLogLevel_toJson___closed__7 = (const lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__7_value;
LEAN_EXPORT lean_object* l_Lake_instToJsonLogLevel_toJson(uint8_t);
LEAN_EXPORT lean_object* l_Lake_instToJsonLogLevel_toJson___boxed(lean_object*);
static const lean_closure_object l_Lake_instToJsonLogLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToJsonLogLevel_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToJsonLogLevel___closed__0 = (const lean_object*)&l_Lake_instToJsonLogLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToJsonLogLevel = (const lean_object*)&l_Lake_instToJsonLogLevel___closed__0_value;
static const lean_string_object l_Lake_instFromJsonLogLevel_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no inductive tag found"};
static const lean_object* l_Lake_instFromJsonLogLevel_fromJson___closed__0 = (const lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__0_value;
static const lean_ctor_object l_Lake_instFromJsonLogLevel_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__0_value)}};
static const lean_object* l_Lake_instFromJsonLogLevel_fromJson___closed__1 = (const lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__1_value;
static const lean_string_object l_Lake_instFromJsonLogLevel_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "no inductive constructor matched"};
static const lean_object* l_Lake_instFromJsonLogLevel_fromJson___closed__2 = (const lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__2_value;
static const lean_ctor_object l_Lake_instFromJsonLogLevel_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__2_value)}};
static const lean_object* l_Lake_instFromJsonLogLevel_fromJson___closed__3 = (const lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__3_value;
static const lean_ctor_object l_Lake_instFromJsonLogLevel_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lake_instFromJsonLogLevel_fromJson___closed__4 = (const lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__4_value;
static const lean_ctor_object l_Lake_instFromJsonLogLevel_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instFromJsonLogLevel_fromJson___closed__5 = (const lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__5_value;
static const lean_ctor_object l_Lake_instFromJsonLogLevel_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_instFromJsonLogLevel_fromJson___closed__6 = (const lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__6_value;
static const lean_ctor_object l_Lake_instFromJsonLogLevel_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lake_instFromJsonLogLevel_fromJson___closed__7 = (const lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__7_value;
LEAN_EXPORT lean_object* l_Lake_instFromJsonLogLevel_fromJson(lean_object*);
static const lean_closure_object l_Lake_instFromJsonLogLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instFromJsonLogLevel_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instFromJsonLogLevel___closed__0 = (const lean_object*)&l_Lake_instFromJsonLogLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instFromJsonLogLevel = (const lean_object*)&l_Lake_instFromJsonLogLevel___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instLTLogLevel;
LEAN_EXPORT lean_object* l_Lake_instLELogLevel;
LEAN_EXPORT uint8_t l_Lake_instMinLogLevel___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instMinLogLevel___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMinLogLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMinLogLevel___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMinLogLevel___closed__0 = (const lean_object*)&l_Lake_instMinLogLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMinLogLevel = (const lean_object*)&l_Lake_instMinLogLevel___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instMaxLogLevel___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instMaxLogLevel___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMaxLogLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMaxLogLevel___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMaxLogLevel___closed__0 = (const lean_object*)&l_Lake_instMaxLogLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMaxLogLevel = (const lean_object*)&l_Lake_instMaxLogLevel___closed__0_value;
LEAN_EXPORT uint32_t l_Lake_LogLevel_icon(uint8_t);
LEAN_EXPORT lean_object* l_Lake_LogLevel_icon___boxed(lean_object*);
static const lean_string_object l_Lake_LogLevel_ansiColor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "33"};
static const lean_object* l_Lake_LogLevel_ansiColor___closed__0 = (const lean_object*)&l_Lake_LogLevel_ansiColor___closed__0_value;
static const lean_string_object l_Lake_LogLevel_ansiColor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "31"};
static const lean_object* l_Lake_LogLevel_ansiColor___closed__1 = (const lean_object*)&l_Lake_LogLevel_ansiColor___closed__1_value;
static const lean_string_object l_Lake_LogLevel_ansiColor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "34"};
static const lean_object* l_Lake_LogLevel_ansiColor___closed__2 = (const lean_object*)&l_Lake_LogLevel_ansiColor___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_LogLevel_ansiColor(uint8_t);
LEAN_EXPORT lean_object* l_Lake_LogLevel_ansiColor___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_mapAux___at___00Lake_LogLevel_ofString_x3f_spec__0(lean_object*, lean_object*);
static const lean_ctor_object l_Lake_LogLevel_ofString_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_LogLevel_ofString_x3f___closed__0 = (const lean_object*)&l_Lake_LogLevel_ofString_x3f___closed__0_value;
static const lean_ctor_object l_Lake_LogLevel_ofString_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lake_LogLevel_ofString_x3f___closed__1 = (const lean_object*)&l_Lake_LogLevel_ofString_x3f___closed__1_value;
static const lean_string_object l_Lake_LogLevel_ofString_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "information"};
static const lean_object* l_Lake_LogLevel_ofString_x3f___closed__2 = (const lean_object*)&l_Lake_LogLevel_ofString_x3f___closed__2_value;
static const lean_string_object l_Lake_LogLevel_ofString_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "warn"};
static const lean_object* l_Lake_LogLevel_ofString_x3f___closed__3 = (const lean_object*)&l_Lake_LogLevel_ofString_x3f___closed__3_value;
static const lean_ctor_object l_Lake_LogLevel_ofString_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lake_LogLevel_ofString_x3f___closed__4 = (const lean_object*)&l_Lake_LogLevel_ofString_x3f___closed__4_value;
static const lean_ctor_object l_Lake_LogLevel_ofString_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_LogLevel_ofString_x3f___closed__5 = (const lean_object*)&l_Lake_LogLevel_ofString_x3f___closed__5_value;
LEAN_EXPORT lean_object* l_Lake_LogLevel_ofString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_toString(uint8_t);
LEAN_EXPORT lean_object* l_Lake_LogLevel_toString___boxed(lean_object*);
static const lean_closure_object l___private_Lake_Util_Log_0__Lake_instToStringLogLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LogLevel_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Util_Log_0__Lake_instToStringLogLevel___closed__0 = (const lean_object*)&l___private_Lake_Util_Log_0__Lake_instToStringLogLevel___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Util_Log_0__Lake_instToStringLogLevel = (const lean_object*)&l___private_Lake_Util_Log_0__Lake_instToStringLogLevel___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_LogLevel_ofMessageSeverity(uint8_t);
LEAN_EXPORT lean_object* l_Lake_LogLevel_ofMessageSeverity___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_LogLevel_toMessageSeverity(uint8_t);
LEAN_EXPORT lean_object* l_Lake_LogLevel_toMessageSeverity___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Verbosity_minLogLv(uint8_t);
LEAN_EXPORT lean_object* l_Lake_Verbosity_minLogLv___boxed(lean_object*);
static const lean_string_object l_Lake_instInhabitedLogEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_instInhabitedLogEntry_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedLogEntry_default___closed__0_value;
static const lean_ctor_object l_Lake_instInhabitedLogEntry_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instInhabitedLogEntry_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_instInhabitedLogEntry_default___closed__1 = (const lean_object*)&l_Lake_instInhabitedLogEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedLogEntry_default = (const lean_object*)&l_Lake_instInhabitedLogEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedLogEntry = (const lean_object*)&l_Lake_instInhabitedLogEntry_default___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lake_instToJsonLogEntry_toJson_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lake_instToJsonLogEntry_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "level"};
static const lean_object* l_Lake_instToJsonLogEntry_toJson___closed__0 = (const lean_object*)&l_Lake_instToJsonLogEntry_toJson___closed__0_value;
static const lean_string_object l_Lake_instToJsonLogEntry_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "message"};
static const lean_object* l_Lake_instToJsonLogEntry_toJson___closed__1 = (const lean_object*)&l_Lake_instToJsonLogEntry_toJson___closed__1_value;
static const lean_array_object l_Lake_instToJsonLogEntry_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_instToJsonLogEntry_toJson___closed__2 = (const lean_object*)&l_Lake_instToJsonLogEntry_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_instToJsonLogEntry_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToJsonLogEntry_toJson___boxed(lean_object*);
static const lean_closure_object l_Lake_instToJsonLogEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToJsonLogEntry_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToJsonLogEntry___closed__0 = (const lean_object*)&l_Lake_instToJsonLogEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToJsonLogEntry = (const lean_object*)&l_Lake_instToJsonLogEntry___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_instFromJsonLogEntry_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__0 = (const lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__0_value;
static const lean_string_object l_Lake_instFromJsonLogEntry_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "LogEntry"};
static const lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__1 = (const lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__1_value;
static const lean_ctor_object l_Lake_instFromJsonLogEntry_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_instFromJsonLogEntry_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(32, 96, 108, 55, 70, 212, 138, 58)}};
static const lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__2 = (const lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__2_value;
static lean_once_cell_t l_Lake_instFromJsonLogEntry_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__3;
static const lean_string_object l_Lake_instFromJsonLogEntry_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__4 = (const lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__4_value;
static lean_once_cell_t l_Lake_instFromJsonLogEntry_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__5;
static const lean_ctor_object l_Lake_instFromJsonLogEntry_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instToJsonLogEntry_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(248, 87, 114, 95, 43, 103, 70, 253)}};
static const lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__6 = (const lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__6_value;
static lean_once_cell_t l_Lake_instFromJsonLogEntry_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__7;
static lean_once_cell_t l_Lake_instFromJsonLogEntry_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__8;
static const lean_string_object l_Lake_instFromJsonLogEntry_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__9 = (const lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__9_value;
static lean_once_cell_t l_Lake_instFromJsonLogEntry_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__10;
static const lean_ctor_object l_Lake_instFromJsonLogEntry_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instToJsonLogEntry_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(149, 62, 76, 216, 222, 7, 163, 13)}};
static const lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__11 = (const lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__11_value;
static lean_once_cell_t l_Lake_instFromJsonLogEntry_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__12;
static lean_once_cell_t l_Lake_instFromJsonLogEntry_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__13;
static lean_once_cell_t l_Lake_instFromJsonLogEntry_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__14;
LEAN_EXPORT lean_object* l_Lake_instFromJsonLogEntry_fromJson(lean_object*);
static const lean_closure_object l_Lake_instFromJsonLogEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instFromJsonLogEntry_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instFromJsonLogEntry___closed__0 = (const lean_object*)&l_Lake_instFromJsonLogEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instFromJsonLogEntry = (const lean_object*)&l_Lake_instFromJsonLogEntry___closed__0_value;
static const lean_string_object l_Lake_LogEntry_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lake_LogEntry_toString___closed__0 = (const lean_object*)&l_Lake_LogEntry_toString___closed__0_value;
static const lean_string_object l_Lake_LogEntry_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lake_LogEntry_toString___closed__1 = (const lean_object*)&l_Lake_LogEntry_toString___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_LogEntry_toString(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_LogEntry_toString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToStringLogEntry___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToStringLogEntry___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_instToStringLogEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToStringLogEntry___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToStringLogEntry___closed__0 = (const lean_object*)&l_Lake_instToStringLogEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToStringLogEntry = (const lean_object*)&l_Lake_instToStringLogEntry___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LogEntry_trace(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogEntry_info(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogEntry_warning(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogEntry_error(lean_object*);
static const lean_string_object l_Lake_LogEntry_ofSerialMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":\n"};
static const lean_object* l_Lake_LogEntry_ofSerialMessage___closed__0 = (const lean_object*)&l_Lake_LogEntry_ofSerialMessage___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LogEntry_ofSerialMessage(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogEntry_ofMessage(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogEntry_ofMessage___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logVerbose___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logVerbose(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logVerbose___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logInfo___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logInfo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logWarning___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logWarning(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logError___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logError(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logSerialMessage___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logSerialMessage(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logMessage___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logMessage___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logMessage(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logToStream(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_logToStream___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_nop___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_nop___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_nop___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_nop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_instInhabitedOfPure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_instInhabitedOfPure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_lift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_lift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_lift(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_instOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_instOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_instOfMonadLift(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___redArg___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___redArg(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_error___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_error___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_error(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_logEntry(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutStream_logEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___redArg___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___redArg(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_logger(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___redArg___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___redArg(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stderr___redArg(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stderr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stderr(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stderr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___redArg___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___redArg(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instInhabitedOfPure___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instInhabitedOfPure___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instInhabitedOfPure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instInhabitedOfPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_adaptMethods___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_adaptMethods___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_adaptMethods(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_adaptMethods___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_ignoreLog___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_ignoreLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_instInhabitedLog_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_instInhabitedLog_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedLog_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedLog_default = (const lean_object*)&l_Lake_instInhabitedLog_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedLog = (const lean_object*)&l_Lake_instInhabitedLog_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instToJsonLog___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToJsonLog___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instToJsonLog___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToJsonLog___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instToJsonLogEntry___closed__0_value)} };
static const lean_object* l_Lake_instToJsonLog___closed__0 = (const lean_object*)&l_Lake_instToJsonLog___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToJsonLog = (const lean_object*)&l_Lake_instToJsonLog___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instFromJsonLog___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instFromJsonLog___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instFromJsonLog___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instFromJsonLogEntry___closed__0_value)} };
static const lean_object* l_Lake_instFromJsonLog___closed__0 = (const lean_object*)&l_Lake_instFromJsonLog___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instFromJsonLog = (const lean_object*)&l_Lake_instFromJsonLog___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Log_instInhabitedPos_default;
LEAN_EXPORT lean_object* l_Lake_Log_instInhabitedPos;
LEAN_EXPORT uint8_t l_Lake_Log_instDecidableEqPos_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_instDecidableEqPos_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Log_instDecidableEqPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_instDecidableEqPos___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instOfNatPos;
LEAN_EXPORT uint8_t l_Lake_instOrdPos___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instOrdPos___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instOrdPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instOrdPos___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instOrdPos___closed__0 = (const lean_object*)&l_Lake_instOrdPos___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instOrdPos = (const lean_object*)&l_Lake_instOrdPos___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instLTPos;
LEAN_EXPORT uint8_t l_Lake_instDecidableRelPosLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableRelPosLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instLEPos;
LEAN_EXPORT uint8_t l_Lake_instDecidableRelPosLe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableRelPosLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMinPos___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMinPos___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMinPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMinPos___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMinPos___closed__0 = (const lean_object*)&l_Lake_instMinPos___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMinPos = (const lean_object*)&l_Lake_instMinPos___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instMaxPos___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMaxPos___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMaxPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMaxPos___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMaxPos___closed__0 = (const lean_object*)&l_Lake_instMaxPos___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMaxPos = (const lean_object*)&l_Lake_instMaxPos___closed__0_value;
static const lean_array_object l_Lake_Log_empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Log_empty___closed__0 = (const lean_object*)&l_Lake_Log_empty___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Log_empty = (const lean_object*)&l_Lake_Log_empty___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Log_instEmptyCollection = (const lean_object*)&l_Lake_Log_empty___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Log_size(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_size___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Log_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_isEmpty___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Log_hasEntries(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_hasEntries___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_endPos(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_endPos___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_append___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Log_instAppend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Log_append___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_instAppend___closed__0 = (const lean_object*)&l_Lake_Log_instAppend___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Log_instAppend = (const lean_object*)&l_Lake_Log_instAppend___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Log_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_extract___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_dropFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_dropFrom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_takeFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_takeFrom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_split(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_toString___boxed(lean_object*);
static const lean_closure_object l_Lake_Log_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Log_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_instToString___closed__0 = (const lean_object*)&l_Lake_Log_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Log_instToString = (const lean_object*)&l_Lake_Log_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Log_replay___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_replay___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_replay(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_filter___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Log_filter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_filter___closed__0 = (const lean_object*)&l_Lake_Log_filter___closed__0_value;
static const lean_closure_object l_Lake_Log_filter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_filter___closed__1 = (const lean_object*)&l_Lake_Log_filter___closed__1_value;
static const lean_closure_object l_Lake_Log_filter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_filter___closed__2 = (const lean_object*)&l_Lake_Log_filter___closed__2_value;
static const lean_closure_object l_Lake_Log_filter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_filter___closed__3 = (const lean_object*)&l_Lake_Log_filter___closed__3_value;
static const lean_closure_object l_Lake_Log_filter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_filter___closed__4 = (const lean_object*)&l_Lake_Log_filter___closed__4_value;
static const lean_closure_object l_Lake_Log_filter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_filter___closed__5 = (const lean_object*)&l_Lake_Log_filter___closed__5_value;
static const lean_closure_object l_Lake_Log_filter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_filter___closed__6 = (const lean_object*)&l_Lake_Log_filter___closed__6_value;
static const lean_ctor_object l_Lake_Log_filter___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Log_filter___closed__0_value),((lean_object*)&l_Lake_Log_filter___closed__1_value)}};
static const lean_object* l_Lake_Log_filter___closed__7 = (const lean_object*)&l_Lake_Log_filter___closed__7_value;
static const lean_ctor_object l_Lake_Log_filter___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Log_filter___closed__7_value),((lean_object*)&l_Lake_Log_filter___closed__2_value),((lean_object*)&l_Lake_Log_filter___closed__3_value),((lean_object*)&l_Lake_Log_filter___closed__4_value),((lean_object*)&l_Lake_Log_filter___closed__5_value)}};
static const lean_object* l_Lake_Log_filter___closed__8 = (const lean_object*)&l_Lake_Log_filter___closed__8_value;
static const lean_ctor_object l_Lake_Log_filter___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Log_filter___closed__8_value),((lean_object*)&l_Lake_Log_filter___closed__6_value)}};
static const lean_object* l_Lake_Log_filter___closed__9 = (const lean_object*)&l_Lake_Log_filter___closed__9_value;
LEAN_EXPORT lean_object* l_Lake_Log_filter(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Log_any___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_any___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Log_any(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_any___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_maxLv_spec__0(lean_object*, size_t, size_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_maxLv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Log_maxLv(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_maxLv___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_pushLogEntry___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_pushLogEntry___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_pushLogEntry(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_ofMonadState___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_ofMonadState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLog___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLog___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLog(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLog___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLogPos___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLogPos___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLogPos___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLogPos___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLogPos___redArg___closed__0 = (const lean_object*)&l_Lake_getLogPos___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLogPos___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLogPos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_takeLog___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lake_takeLog___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_takeLog___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_takeLog___redArg___closed__0 = (const lean_object*)&l_Lake_takeLog___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_takeLog___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_takeLog(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_takeLogFrom___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_takeLogFrom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_takeLogFrom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_dropLogFrom___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_dropLogFrom___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_dropLogFrom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_dropLogFrom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_extractLog(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withExtractLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_throwIfLogs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_errorWithLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_withLoggedIO___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "stdout/stderr:\n"};
static const lean_object* l_Lake_withLoggedIO___redArg___lam__3___closed__0 = (const lean_object*)&l_Lake_withLoggedIO___redArg___lam__3___closed__0_value;
static const lean_string_object l_Lake_withLoggedIO___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lake_withLoggedIO___redArg___lam__3___closed__1 = (const lean_object*)&l_Lake_withLoggedIO___redArg___lam__3___closed__1_value;
static const lean_string_object l_Lake_withLoggedIO___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lake_withLoggedIO___redArg___lam__3___closed__2 = (const lean_object*)&l_Lake_withLoggedIO___redArg___lam__3___closed__2_value;
static const lean_string_object l_Lake_withLoggedIO___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lake_withLoggedIO___redArg___lam__3___closed__3 = (const lean_object*)&l_Lake_withLoggedIO___redArg___lam__3___closed__3_value;
static lean_once_cell_t l_Lake_withLoggedIO___redArg___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_withLoggedIO___redArg___lam__3___closed__4;
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_withLoggedIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_withLoggedIO___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_withLoggedIO___redArg___closed__0 = (const lean_object*)&l_Lake_withLoggedIO___redArg___closed__0_value;
static lean_once_cell_t l_Lake_withLoggedIO___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_withLoggedIO___redArg___closed__1;
static lean_once_cell_t l_Lake_withLoggedIO___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_withLoggedIO___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_error___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_error___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_error(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_monadError___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_monadError___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_monadError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_failure___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_failure___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_failure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_orElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_alternative___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_alternative___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_alternative___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_alternative___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_alternative(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLogLogTOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLogLogTOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_run_x27___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_run_x27___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_LogT_run_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LogT_run_x27___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LogT_run_x27___redArg___closed__0 = (const lean_object*)&l_Lake_LogT_run_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LogT_run_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_replayLog___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_replayLog___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_replayLog___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_replayLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLogELogTOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLogELogTOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadErrorELogTOfMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadErrorELogTOfMonad___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___closed__0 = (const lean_object*)&l_Lake_instMonadErrorELogTOfMonad___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_run(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_ELogT_run_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EResult_toExcept___boxed, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_ELogT_run_x27___redArg___closed__0 = (const lean_object*)&l_Lake_ELogT_run_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_ELogT_toLogT___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EResult_toProd, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_ELogT_toLogT___redArg___closed__0 = (const lean_object*)&l_Lake_ELogT_toLogT___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ELogT_toLogT___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_toLogT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_ELogT_toLogT_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EResult_toProd_x3f, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_ELogT_toLogT_x3f___redArg___closed__0 = (const lean_object*)&l_Lake_ELogT_toLogT_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ELogT_toLogT_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_toLogT_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_ELogT_run_x3f_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EResult_result_x3f___boxed, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_ELogT_run_x3f_x27___redArg___closed__0 = (const lean_object*)&l_Lake_ELogT_run_x3f_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x3f_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x3f_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_catchLog___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_catchLog___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_catchLog___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_catchLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___redArg___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_instMonadLiftIO___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_instMonadLiftIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LogIO_instMonadLiftIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LogIO_instMonadLiftIO___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LogIO_instMonadLiftIO___closed__0 = (const lean_object*)&l_Lake_LogIO_instMonadLiftIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_LogIO_instMonadLiftIO = (const lean_object*)&l_Lake_LogIO_instMonadLiftIO___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___redArg___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_captureLog___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_captureLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadError___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadError___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LoggerIO_instMonadError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LoggerIO_instMonadError___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LoggerIO_instMonadError___closed__0 = (const lean_object*)&l_Lake_LoggerIO_instMonadError___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_LoggerIO_instMonadError = (const lean_object*)&l_Lake_LoggerIO_instMonadError___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftIO___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LoggerIO_instMonadLiftIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LoggerIO_instMonadLiftIO___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LoggerIO_instMonadLiftIO___closed__0 = (const lean_object*)&l_Lake_LoggerIO_instMonadLiftIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_LoggerIO_instMonadLiftIO = (const lean_object*)&l_Lake_LoggerIO_instMonadLiftIO___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LoggerIO_instMonadLiftLogIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LoggerIO_instMonadLiftLogIO___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___closed__0 = (const lean_object*)&l_Lake_LoggerIO_instMonadLiftLogIO___closed__0_value;
static lean_once_cell_t l_Lake_LoggerIO_instMonadLiftLogIO___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___closed__1;
static lean_once_cell_t l_Lake_LoggerIO_instMonadLiftLogIO___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___closed__2;
static lean_once_cell_t l_Lake_LoggerIO_instMonadLiftLogIO___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___closed__3;
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO;
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___redArg___lam__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
uint8_t v_x_boxed_6_; lean_object* v_res_7_; 
v_x_boxed_6_ = lean_unbox(v_x_5_);
v_res_7_ = l_Lake_Verbosity_ctorIdx(v_x_boxed_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorElim___redArg(lean_object* v_k_8_){
_start:
{
lean_inc(v_k_8_);
return v_k_8_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorElim___redArg___boxed(lean_object* v_k_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lake_Verbosity_ctorElim___redArg(v_k_9_);
lean_dec(v_k_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, uint8_t v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_inc(v_k_15_);
return v_k_15_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
uint8_t v_t_boxed_21_; lean_object* v_res_22_; 
v_t_boxed_21_ = lean_unbox(v_t_18_);
v_res_22_ = l_Lake_Verbosity_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_boxed_21_, v_h_19_, v_k_20_);
lean_dec(v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_quiet_elim___redArg(lean_object* v_quiet_23_){
_start:
{
lean_inc(v_quiet_23_);
return v_quiet_23_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_quiet_elim___redArg___boxed(lean_object* v_quiet_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lake_Verbosity_quiet_elim___redArg(v_quiet_24_);
lean_dec(v_quiet_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_quiet_elim(lean_object* v_motive_26_, uint8_t v_t_27_, lean_object* v_h_28_, lean_object* v_quiet_29_){
_start:
{
lean_inc(v_quiet_29_);
return v_quiet_29_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_quiet_elim___boxed(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_quiet_33_){
_start:
{
uint8_t v_t_boxed_34_; lean_object* v_res_35_; 
v_t_boxed_34_ = lean_unbox(v_t_31_);
v_res_35_ = l_Lake_Verbosity_quiet_elim(v_motive_30_, v_t_boxed_34_, v_h_32_, v_quiet_33_);
lean_dec(v_quiet_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_normal_elim___redArg(lean_object* v_normal_36_){
_start:
{
lean_inc(v_normal_36_);
return v_normal_36_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_normal_elim___redArg___boxed(lean_object* v_normal_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lake_Verbosity_normal_elim___redArg(v_normal_37_);
lean_dec(v_normal_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_normal_elim(lean_object* v_motive_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_normal_42_){
_start:
{
lean_inc(v_normal_42_);
return v_normal_42_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_normal_elim___boxed(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_normal_46_){
_start:
{
uint8_t v_t_boxed_47_; lean_object* v_res_48_; 
v_t_boxed_47_ = lean_unbox(v_t_44_);
v_res_48_ = l_Lake_Verbosity_normal_elim(v_motive_43_, v_t_boxed_47_, v_h_45_, v_normal_46_);
lean_dec(v_normal_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_verbose_elim___redArg(lean_object* v_verbose_49_){
_start:
{
lean_inc(v_verbose_49_);
return v_verbose_49_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_verbose_elim___redArg___boxed(lean_object* v_verbose_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lake_Verbosity_verbose_elim___redArg(v_verbose_50_);
lean_dec(v_verbose_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_verbose_elim(lean_object* v_motive_52_, uint8_t v_t_53_, lean_object* v_h_54_, lean_object* v_verbose_55_){
_start:
{
lean_inc(v_verbose_55_);
return v_verbose_55_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_verbose_elim___boxed(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_verbose_59_){
_start:
{
uint8_t v_t_boxed_60_; lean_object* v_res_61_; 
v_t_boxed_60_ = lean_unbox(v_t_57_);
v_res_61_ = l_Lake_Verbosity_verbose_elim(v_motive_56_, v_t_boxed_60_, v_h_58_, v_verbose_59_);
lean_dec(v_verbose_59_);
return v_res_61_;
}
}
static lean_object* _init_l_Lake_instReprVerbosity_repr___closed__6(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_unsigned_to_nat(2u);
v___x_72_ = lean_nat_to_int(v___x_71_);
return v___x_72_;
}
}
static lean_object* _init_l_Lake_instReprVerbosity_repr___closed__7(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_73_ = lean_unsigned_to_nat(1u);
v___x_74_ = lean_nat_to_int(v___x_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprVerbosity_repr(uint8_t v_x_75_, lean_object* v_prec_76_){
_start:
{
lean_object* v___y_78_; lean_object* v___y_85_; lean_object* v___y_92_; 
switch(v_x_75_)
{
case 0:
{
lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_98_ = lean_unsigned_to_nat(1024u);
v___x_99_ = lean_nat_dec_le(v___x_98_, v_prec_76_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_78_ = v___x_100_;
goto v___jp_77_;
}
else
{
lean_object* v___x_101_; 
v___x_101_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_78_ = v___x_101_;
goto v___jp_77_;
}
}
case 1:
{
lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_102_ = lean_unsigned_to_nat(1024u);
v___x_103_ = lean_nat_dec_le(v___x_102_, v_prec_76_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; 
v___x_104_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_85_ = v___x_104_;
goto v___jp_84_;
}
else
{
lean_object* v___x_105_; 
v___x_105_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_85_ = v___x_105_;
goto v___jp_84_;
}
}
default: 
{
lean_object* v___x_106_; uint8_t v___x_107_; 
v___x_106_ = lean_unsigned_to_nat(1024u);
v___x_107_ = lean_nat_dec_le(v___x_106_, v_prec_76_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; 
v___x_108_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_92_ = v___x_108_;
goto v___jp_91_;
}
else
{
lean_object* v___x_109_; 
v___x_109_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_92_ = v___x_109_;
goto v___jp_91_;
}
}
}
v___jp_77_:
{
lean_object* v___x_79_; lean_object* v___x_80_; uint8_t v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_79_ = ((lean_object*)(l_Lake_instReprVerbosity_repr___closed__1));
lean_inc(v___y_78_);
v___x_80_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_80_, 0, v___y_78_);
lean_ctor_set(v___x_80_, 1, v___x_79_);
v___x_81_ = 0;
v___x_82_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_82_, 0, v___x_80_);
lean_ctor_set_uint8(v___x_82_, sizeof(void*)*1, v___x_81_);
v___x_83_ = l_Repr_addAppParen(v___x_82_, v_prec_76_);
return v___x_83_;
}
v___jp_84_:
{
lean_object* v___x_86_; lean_object* v___x_87_; uint8_t v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_86_ = ((lean_object*)(l_Lake_instReprVerbosity_repr___closed__3));
lean_inc(v___y_85_);
v___x_87_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_87_, 0, v___y_85_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = 0;
v___x_89_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_89_, 0, v___x_87_);
lean_ctor_set_uint8(v___x_89_, sizeof(void*)*1, v___x_88_);
v___x_90_ = l_Repr_addAppParen(v___x_89_, v_prec_76_);
return v___x_90_;
}
v___jp_91_:
{
lean_object* v___x_93_; lean_object* v___x_94_; uint8_t v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_93_ = ((lean_object*)(l_Lake_instReprVerbosity_repr___closed__5));
lean_inc(v___y_92_);
v___x_94_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_94_, 0, v___y_92_);
lean_ctor_set(v___x_94_, 1, v___x_93_);
v___x_95_ = 0;
v___x_96_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_96_, 0, v___x_94_);
lean_ctor_set_uint8(v___x_96_, sizeof(void*)*1, v___x_95_);
v___x_97_ = l_Repr_addAppParen(v___x_96_, v_prec_76_);
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprVerbosity_repr___boxed(lean_object* v_x_110_, lean_object* v_prec_111_){
_start:
{
uint8_t v_x_171__boxed_112_; lean_object* v_res_113_; 
v_x_171__boxed_112_ = lean_unbox(v_x_110_);
v_res_113_ = l_Lake_instReprVerbosity_repr(v_x_171__boxed_112_, v_prec_111_);
lean_dec(v_prec_111_);
return v_res_113_;
}
}
LEAN_EXPORT uint8_t l_Lake_Verbosity_ofNat(lean_object* v_n_116_){
_start:
{
lean_object* v___x_117_; uint8_t v___x_118_; 
v___x_117_ = lean_unsigned_to_nat(0u);
v___x_118_ = lean_nat_dec_le(v_n_116_, v___x_117_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_119_ = lean_unsigned_to_nat(1u);
v___x_120_ = lean_nat_dec_le(v_n_116_, v___x_119_);
if (v___x_120_ == 0)
{
uint8_t v___x_121_; 
v___x_121_ = 2;
return v___x_121_;
}
else
{
uint8_t v___x_122_; 
v___x_122_ = 1;
return v___x_122_;
}
}
else
{
uint8_t v___x_123_; 
v___x_123_ = 0;
return v___x_123_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_ofNat___boxed(lean_object* v_n_124_){
_start:
{
uint8_t v_res_125_; lean_object* v_r_126_; 
v_res_125_ = l_Lake_Verbosity_ofNat(v_n_124_);
lean_dec(v_n_124_);
v_r_126_ = lean_box(v_res_125_);
return v_r_126_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqVerbosity(uint8_t v_x_127_, uint8_t v_y_128_){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; uint8_t v___x_131_; 
v___x_129_ = l_Lake_Verbosity_ctorIdx(v_x_127_);
v___x_130_ = l_Lake_Verbosity_ctorIdx(v_y_128_);
v___x_131_ = lean_nat_dec_eq(v___x_129_, v___x_130_);
lean_dec(v___x_130_);
lean_dec(v___x_129_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqVerbosity___boxed(lean_object* v_x_132_, lean_object* v_y_133_){
_start:
{
uint8_t v_x_20__boxed_134_; uint8_t v_y_21__boxed_135_; uint8_t v_res_136_; lean_object* v_r_137_; 
v_x_20__boxed_134_ = lean_unbox(v_x_132_);
v_y_21__boxed_135_ = lean_unbox(v_y_133_);
v_res_136_ = l_Lake_instDecidableEqVerbosity(v_x_20__boxed_134_, v_y_21__boxed_135_);
v_r_137_ = lean_box(v_res_136_);
return v_r_137_;
}
}
LEAN_EXPORT uint8_t l_Lake_instOrdVerbosity_ord(uint8_t v_x_138_, uint8_t v_y_139_){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v___x_140_ = l_Lake_Verbosity_ctorIdx(v_x_138_);
v___x_141_ = l_Lake_Verbosity_ctorIdx(v_y_139_);
v___x_142_ = lean_nat_dec_lt(v___x_140_, v___x_141_);
if (v___x_142_ == 0)
{
uint8_t v___x_143_; 
v___x_143_ = lean_nat_dec_eq(v___x_140_, v___x_141_);
lean_dec(v___x_141_);
lean_dec(v___x_140_);
if (v___x_143_ == 0)
{
uint8_t v___x_144_; 
v___x_144_ = 2;
return v___x_144_;
}
else
{
uint8_t v___x_145_; 
v___x_145_ = 1;
return v___x_145_;
}
}
else
{
uint8_t v___x_146_; 
lean_dec(v___x_141_);
lean_dec(v___x_140_);
v___x_146_ = 0;
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instOrdVerbosity_ord___boxed(lean_object* v_x_147_, lean_object* v_y_148_){
_start:
{
uint8_t v_x_30__boxed_149_; uint8_t v_y_31__boxed_150_; uint8_t v_res_151_; lean_object* v_r_152_; 
v_x_30__boxed_149_ = lean_unbox(v_x_147_);
v_y_31__boxed_150_ = lean_unbox(v_y_148_);
v_res_151_ = l_Lake_instOrdVerbosity_ord(v_x_30__boxed_149_, v_y_31__boxed_150_);
v_r_152_ = lean_box(v_res_151_);
return v_r_152_;
}
}
static lean_object* _init_l_Lake_instLTVerbosity(void){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lean_box(0);
return v___x_155_;
}
}
static lean_object* _init_l_Lake_instLEVerbosity(void){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = lean_box(0);
return v___x_156_;
}
}
LEAN_EXPORT uint8_t l_Lake_instMinVerbosity___lam__0(uint8_t v_x_157_, uint8_t v_y_158_){
_start:
{
uint8_t v___x_159_; 
v___x_159_ = l_Lake_instOrdVerbosity_ord(v_x_157_, v_y_158_);
if (v___x_159_ == 2)
{
return v_y_158_;
}
else
{
return v_x_157_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMinVerbosity___lam__0___boxed(lean_object* v_x_160_, lean_object* v_y_161_){
_start:
{
uint8_t v_x_boxed_162_; uint8_t v_y_boxed_163_; uint8_t v_res_164_; lean_object* v_r_165_; 
v_x_boxed_162_ = lean_unbox(v_x_160_);
v_y_boxed_163_ = lean_unbox(v_y_161_);
v_res_164_ = l_Lake_instMinVerbosity___lam__0(v_x_boxed_162_, v_y_boxed_163_);
v_r_165_ = lean_box(v_res_164_);
return v_r_165_;
}
}
LEAN_EXPORT uint8_t l_Lake_instMaxVerbosity___lam__0(uint8_t v_x_168_, uint8_t v_y_169_){
_start:
{
uint8_t v___x_170_; 
v___x_170_ = l_Lake_instOrdVerbosity_ord(v_x_168_, v_y_169_);
if (v___x_170_ == 2)
{
return v_x_168_;
}
else
{
return v_y_169_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMaxVerbosity___lam__0___boxed(lean_object* v_x_171_, lean_object* v_y_172_){
_start:
{
uint8_t v_x_boxed_173_; uint8_t v_y_boxed_174_; uint8_t v_res_175_; lean_object* v_r_176_; 
v_x_boxed_173_ = lean_unbox(v_x_171_);
v_y_boxed_174_ = lean_unbox(v_y_172_);
v_res_175_ = l_Lake_instMaxVerbosity___lam__0(v_x_boxed_173_, v_y_boxed_174_);
v_r_176_ = lean_box(v_res_175_);
return v_r_176_;
}
}
static uint8_t _init_l_Lake_instInhabitedVerbosity(void){
_start:
{
uint8_t v___x_179_; 
v___x_179_ = 1;
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorIdx(uint8_t v_x_180_){
_start:
{
switch(v_x_180_)
{
case 0:
{
lean_object* v___x_181_; 
v___x_181_ = lean_unsigned_to_nat(0u);
return v___x_181_;
}
case 1:
{
lean_object* v___x_182_; 
v___x_182_ = lean_unsigned_to_nat(1u);
return v___x_182_;
}
default: 
{
lean_object* v___x_183_; 
v___x_183_ = lean_unsigned_to_nat(2u);
return v___x_183_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorIdx___boxed(lean_object* v_x_184_){
_start:
{
uint8_t v_x_boxed_185_; lean_object* v_res_186_; 
v_x_boxed_185_ = lean_unbox(v_x_184_);
v_res_186_ = l_Lake_AnsiMode_ctorIdx(v_x_boxed_185_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorElim___redArg(lean_object* v_k_187_){
_start:
{
lean_inc(v_k_187_);
return v_k_187_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorElim___redArg___boxed(lean_object* v_k_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lake_AnsiMode_ctorElim___redArg(v_k_188_);
lean_dec(v_k_188_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorElim(lean_object* v_motive_190_, lean_object* v_ctorIdx_191_, uint8_t v_t_192_, lean_object* v_h_193_, lean_object* v_k_194_){
_start:
{
lean_inc(v_k_194_);
return v_k_194_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorElim___boxed(lean_object* v_motive_195_, lean_object* v_ctorIdx_196_, lean_object* v_t_197_, lean_object* v_h_198_, lean_object* v_k_199_){
_start:
{
uint8_t v_t_boxed_200_; lean_object* v_res_201_; 
v_t_boxed_200_ = lean_unbox(v_t_197_);
v_res_201_ = l_Lake_AnsiMode_ctorElim(v_motive_195_, v_ctorIdx_196_, v_t_boxed_200_, v_h_198_, v_k_199_);
lean_dec(v_k_199_);
lean_dec(v_ctorIdx_196_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_auto_elim___redArg(lean_object* v_auto_202_){
_start:
{
lean_inc(v_auto_202_);
return v_auto_202_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_auto_elim___redArg___boxed(lean_object* v_auto_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lake_AnsiMode_auto_elim___redArg(v_auto_203_);
lean_dec(v_auto_203_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_auto_elim(lean_object* v_motive_205_, uint8_t v_t_206_, lean_object* v_h_207_, lean_object* v_auto_208_){
_start:
{
lean_inc(v_auto_208_);
return v_auto_208_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_auto_elim___boxed(lean_object* v_motive_209_, lean_object* v_t_210_, lean_object* v_h_211_, lean_object* v_auto_212_){
_start:
{
uint8_t v_t_boxed_213_; lean_object* v_res_214_; 
v_t_boxed_213_ = lean_unbox(v_t_210_);
v_res_214_ = l_Lake_AnsiMode_auto_elim(v_motive_209_, v_t_boxed_213_, v_h_211_, v_auto_212_);
lean_dec(v_auto_212_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ansi_elim___redArg(lean_object* v_ansi_215_){
_start:
{
lean_inc(v_ansi_215_);
return v_ansi_215_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ansi_elim___redArg___boxed(lean_object* v_ansi_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Lake_AnsiMode_ansi_elim___redArg(v_ansi_216_);
lean_dec(v_ansi_216_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ansi_elim(lean_object* v_motive_218_, uint8_t v_t_219_, lean_object* v_h_220_, lean_object* v_ansi_221_){
_start:
{
lean_inc(v_ansi_221_);
return v_ansi_221_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ansi_elim___boxed(lean_object* v_motive_222_, lean_object* v_t_223_, lean_object* v_h_224_, lean_object* v_ansi_225_){
_start:
{
uint8_t v_t_boxed_226_; lean_object* v_res_227_; 
v_t_boxed_226_ = lean_unbox(v_t_223_);
v_res_227_ = l_Lake_AnsiMode_ansi_elim(v_motive_222_, v_t_boxed_226_, v_h_224_, v_ansi_225_);
lean_dec(v_ansi_225_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_noAnsi_elim___redArg(lean_object* v_noAnsi_228_){
_start:
{
lean_inc(v_noAnsi_228_);
return v_noAnsi_228_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_noAnsi_elim___redArg___boxed(lean_object* v_noAnsi_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lake_AnsiMode_noAnsi_elim___redArg(v_noAnsi_229_);
lean_dec(v_noAnsi_229_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_noAnsi_elim(lean_object* v_motive_231_, uint8_t v_t_232_, lean_object* v_h_233_, lean_object* v_noAnsi_234_){
_start:
{
lean_inc(v_noAnsi_234_);
return v_noAnsi_234_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_noAnsi_elim___boxed(lean_object* v_motive_235_, lean_object* v_t_236_, lean_object* v_h_237_, lean_object* v_noAnsi_238_){
_start:
{
uint8_t v_t_boxed_239_; lean_object* v_res_240_; 
v_t_boxed_239_ = lean_unbox(v_t_236_);
v_res_240_ = l_Lake_AnsiMode_noAnsi_elim(v_motive_235_, v_t_boxed_239_, v_h_237_, v_noAnsi_238_);
lean_dec(v_noAnsi_238_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprAnsiMode_repr(uint8_t v_x_250_, lean_object* v_prec_251_){
_start:
{
lean_object* v___y_253_; lean_object* v___y_260_; lean_object* v___y_267_; 
switch(v_x_250_)
{
case 0:
{
lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_273_ = lean_unsigned_to_nat(1024u);
v___x_274_ = lean_nat_dec_le(v___x_273_, v_prec_251_);
if (v___x_274_ == 0)
{
lean_object* v___x_275_; 
v___x_275_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_253_ = v___x_275_;
goto v___jp_252_;
}
else
{
lean_object* v___x_276_; 
v___x_276_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_253_ = v___x_276_;
goto v___jp_252_;
}
}
case 1:
{
lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_277_ = lean_unsigned_to_nat(1024u);
v___x_278_ = lean_nat_dec_le(v___x_277_, v_prec_251_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; 
v___x_279_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_260_ = v___x_279_;
goto v___jp_259_;
}
else
{
lean_object* v___x_280_; 
v___x_280_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_260_ = v___x_280_;
goto v___jp_259_;
}
}
default: 
{
lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_281_ = lean_unsigned_to_nat(1024u);
v___x_282_ = lean_nat_dec_le(v___x_281_, v_prec_251_);
if (v___x_282_ == 0)
{
lean_object* v___x_283_; 
v___x_283_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_267_ = v___x_283_;
goto v___jp_266_;
}
else
{
lean_object* v___x_284_; 
v___x_284_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_267_ = v___x_284_;
goto v___jp_266_;
}
}
}
v___jp_252_:
{
lean_object* v___x_254_; lean_object* v___x_255_; uint8_t v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_254_ = ((lean_object*)(l_Lake_instReprAnsiMode_repr___closed__1));
lean_inc(v___y_253_);
v___x_255_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_255_, 0, v___y_253_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
v___x_256_ = 0;
v___x_257_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_257_, 0, v___x_255_);
lean_ctor_set_uint8(v___x_257_, sizeof(void*)*1, v___x_256_);
v___x_258_ = l_Repr_addAppParen(v___x_257_, v_prec_251_);
return v___x_258_;
}
v___jp_259_:
{
lean_object* v___x_261_; lean_object* v___x_262_; uint8_t v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_261_ = ((lean_object*)(l_Lake_instReprAnsiMode_repr___closed__3));
lean_inc(v___y_260_);
v___x_262_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_262_, 0, v___y_260_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
v___x_263_ = 0;
v___x_264_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_264_, 0, v___x_262_);
lean_ctor_set_uint8(v___x_264_, sizeof(void*)*1, v___x_263_);
v___x_265_ = l_Repr_addAppParen(v___x_264_, v_prec_251_);
return v___x_265_;
}
v___jp_266_:
{
lean_object* v___x_268_; lean_object* v___x_269_; uint8_t v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_268_ = ((lean_object*)(l_Lake_instReprAnsiMode_repr___closed__5));
lean_inc(v___y_267_);
v___x_269_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_269_, 0, v___y_267_);
lean_ctor_set(v___x_269_, 1, v___x_268_);
v___x_270_ = 0;
v___x_271_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_271_, 0, v___x_269_);
lean_ctor_set_uint8(v___x_271_, sizeof(void*)*1, v___x_270_);
v___x_272_ = l_Repr_addAppParen(v___x_271_, v_prec_251_);
return v___x_272_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprAnsiMode_repr___boxed(lean_object* v_x_285_, lean_object* v_prec_286_){
_start:
{
uint8_t v_x_167__boxed_287_; lean_object* v_res_288_; 
v_x_167__boxed_287_ = lean_unbox(v_x_285_);
v_res_288_ = l_Lake_instReprAnsiMode_repr(v_x_167__boxed_287_, v_prec_286_);
lean_dec(v_prec_286_);
return v_res_288_;
}
}
LEAN_EXPORT uint8_t l_Lake_AnsiMode_isEnabled(lean_object* v_out_291_, uint8_t v_x_292_){
_start:
{
switch(v_x_292_)
{
case 0:
{
lean_object* v_isTty_294_; lean_object* v___x_295_; uint8_t v___x_296_; 
v_isTty_294_ = lean_ctor_get(v_out_291_, 5);
lean_inc_ref(v_isTty_294_);
lean_dec_ref(v_out_291_);
v___x_295_ = lean_apply_1(v_isTty_294_, lean_box(0));
v___x_296_ = lean_unbox(v___x_295_);
return v___x_296_;
}
case 1:
{
uint8_t v___x_297_; 
lean_dec_ref(v_out_291_);
v___x_297_ = 1;
return v___x_297_;
}
default: 
{
uint8_t v___x_298_; 
lean_dec_ref(v_out_291_);
v___x_298_ = 0;
return v___x_298_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_isEnabled___boxed(lean_object* v_out_299_, lean_object* v_x_300_, lean_object* v_a_301_){
_start:
{
uint8_t v_x_140__boxed_302_; uint8_t v_res_303_; lean_object* v_r_304_; 
v_x_140__boxed_302_ = lean_unbox(v_x_300_);
v_res_303_ = l_Lake_AnsiMode_isEnabled(v_out_299_, v_x_140__boxed_302_);
v_r_304_ = lean_box(v_res_303_);
return v_r_304_;
}
}
LEAN_EXPORT lean_object* l_Lake_Ansi_chalk(lean_object* v_colorCode_308_, lean_object* v_text_309_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_310_ = ((lean_object*)(l_Lake_Ansi_chalk___closed__0));
v___x_311_ = lean_string_append(v___x_310_, v_colorCode_308_);
v___x_312_ = ((lean_object*)(l_Lake_Ansi_chalk___closed__1));
v___x_313_ = lean_string_append(v___x_311_, v___x_312_);
v___x_314_ = lean_string_append(v___x_313_, v_text_309_);
v___x_315_ = ((lean_object*)(l_Lake_Ansi_chalk___closed__2));
v___x_316_ = lean_string_append(v___x_314_, v___x_315_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Lake_Ansi_chalk___boxed(lean_object* v_colorCode_317_, lean_object* v_text_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_Lake_Ansi_chalk(v_colorCode_317_, v_text_318_);
lean_dec_ref(v_text_318_);
lean_dec_ref(v_colorCode_317_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorIdx(lean_object* v_x_320_){
_start:
{
switch(lean_obj_tag(v_x_320_))
{
case 0:
{
lean_object* v___x_321_; 
v___x_321_ = lean_unsigned_to_nat(0u);
return v___x_321_;
}
case 1:
{
lean_object* v___x_322_; 
v___x_322_ = lean_unsigned_to_nat(1u);
return v___x_322_;
}
default: 
{
lean_object* v___x_323_; 
v___x_323_ = lean_unsigned_to_nat(2u);
return v___x_323_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorIdx___boxed(lean_object* v_x_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_Lake_OutStream_ctorIdx(v_x_324_);
lean_dec(v_x_324_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorElim___redArg(lean_object* v_t_326_, lean_object* v_k_327_){
_start:
{
if (lean_obj_tag(v_t_326_) == 2)
{
lean_object* v_s_328_; lean_object* v___x_329_; 
v_s_328_ = lean_ctor_get(v_t_326_, 0);
lean_inc_ref(v_s_328_);
lean_dec_ref_known(v_t_326_, 1);
v___x_329_ = lean_apply_1(v_k_327_, v_s_328_);
return v___x_329_;
}
else
{
lean_dec(v_t_326_);
return v_k_327_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorElim(lean_object* v_motive_330_, lean_object* v_ctorIdx_331_, lean_object* v_t_332_, lean_object* v_h_333_, lean_object* v_k_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = l_Lake_OutStream_ctorElim___redArg(v_t_332_, v_k_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorElim___boxed(lean_object* v_motive_336_, lean_object* v_ctorIdx_337_, lean_object* v_t_338_, lean_object* v_h_339_, lean_object* v_k_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lake_OutStream_ctorElim(v_motive_336_, v_ctorIdx_337_, v_t_338_, v_h_339_, v_k_340_);
lean_dec(v_ctorIdx_337_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_stdout_elim___redArg(lean_object* v_t_342_, lean_object* v_stdout_343_){
_start:
{
lean_object* v___x_344_; 
v___x_344_ = l_Lake_OutStream_ctorElim___redArg(v_t_342_, v_stdout_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_stdout_elim(lean_object* v_motive_345_, lean_object* v_t_346_, lean_object* v_h_347_, lean_object* v_stdout_348_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = l_Lake_OutStream_ctorElim___redArg(v_t_346_, v_stdout_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_stderr_elim___redArg(lean_object* v_t_350_, lean_object* v_stderr_351_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = l_Lake_OutStream_ctorElim___redArg(v_t_350_, v_stderr_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_stderr_elim(lean_object* v_motive_353_, lean_object* v_t_354_, lean_object* v_h_355_, lean_object* v_stderr_356_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = l_Lake_OutStream_ctorElim___redArg(v_t_354_, v_stderr_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_stream_elim___redArg(lean_object* v_t_358_, lean_object* v_stream_359_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = l_Lake_OutStream_ctorElim___redArg(v_t_358_, v_stream_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_stream_elim(lean_object* v_motive_361_, lean_object* v_t_362_, lean_object* v_h_363_, lean_object* v_stream_364_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = l_Lake_OutStream_ctorElim___redArg(v_t_362_, v_stream_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_get(lean_object* v_x_366_){
_start:
{
switch(lean_obj_tag(v_x_366_))
{
case 0:
{
lean_object* v___x_368_; 
v___x_368_ = lean_get_stdout();
return v___x_368_;
}
case 1:
{
lean_object* v___x_369_; 
v___x_369_ = lean_get_stderr();
return v___x_369_;
}
default: 
{
lean_object* v_s_370_; 
v_s_370_ = lean_ctor_get(v_x_366_, 0);
lean_inc_ref(v_s_370_);
return v_s_370_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_get___boxed(lean_object* v_x_371_, lean_object* v_a_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Lake_OutStream_get(v_x_371_);
lean_dec(v_x_371_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeStreamOutStream___lam__0(lean_object* v_s_374_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_375_, 0, v_s_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeHandleOutStream___lam__0(lean_object* v_h_378_){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_stream_of_handle(v_h_378_);
v___x_380_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorIdx(uint8_t v_x_383_){
_start:
{
switch(v_x_383_)
{
case 0:
{
lean_object* v___x_384_; 
v___x_384_ = lean_unsigned_to_nat(0u);
return v___x_384_;
}
case 1:
{
lean_object* v___x_385_; 
v___x_385_ = lean_unsigned_to_nat(1u);
return v___x_385_;
}
case 2:
{
lean_object* v___x_386_; 
v___x_386_ = lean_unsigned_to_nat(2u);
return v___x_386_;
}
default: 
{
lean_object* v___x_387_; 
v___x_387_ = lean_unsigned_to_nat(3u);
return v___x_387_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorIdx___boxed(lean_object* v_x_388_){
_start:
{
uint8_t v_x_boxed_389_; lean_object* v_res_390_; 
v_x_boxed_389_ = lean_unbox(v_x_388_);
v_res_390_ = l_Lake_LogLevel_ctorIdx(v_x_boxed_389_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorElim___redArg(lean_object* v_k_391_){
_start:
{
lean_inc(v_k_391_);
return v_k_391_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorElim___redArg___boxed(lean_object* v_k_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lake_LogLevel_ctorElim___redArg(v_k_392_);
lean_dec(v_k_392_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorElim(lean_object* v_motive_394_, lean_object* v_ctorIdx_395_, uint8_t v_t_396_, lean_object* v_h_397_, lean_object* v_k_398_){
_start:
{
lean_inc(v_k_398_);
return v_k_398_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorElim___boxed(lean_object* v_motive_399_, lean_object* v_ctorIdx_400_, lean_object* v_t_401_, lean_object* v_h_402_, lean_object* v_k_403_){
_start:
{
uint8_t v_t_boxed_404_; lean_object* v_res_405_; 
v_t_boxed_404_ = lean_unbox(v_t_401_);
v_res_405_ = l_Lake_LogLevel_ctorElim(v_motive_399_, v_ctorIdx_400_, v_t_boxed_404_, v_h_402_, v_k_403_);
lean_dec(v_k_403_);
lean_dec(v_ctorIdx_400_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_trace_elim___redArg(lean_object* v_trace_406_){
_start:
{
lean_inc(v_trace_406_);
return v_trace_406_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_trace_elim___redArg___boxed(lean_object* v_trace_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Lake_LogLevel_trace_elim___redArg(v_trace_407_);
lean_dec(v_trace_407_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_trace_elim(lean_object* v_motive_409_, uint8_t v_t_410_, lean_object* v_h_411_, lean_object* v_trace_412_){
_start:
{
lean_inc(v_trace_412_);
return v_trace_412_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_trace_elim___boxed(lean_object* v_motive_413_, lean_object* v_t_414_, lean_object* v_h_415_, lean_object* v_trace_416_){
_start:
{
uint8_t v_t_boxed_417_; lean_object* v_res_418_; 
v_t_boxed_417_ = lean_unbox(v_t_414_);
v_res_418_ = l_Lake_LogLevel_trace_elim(v_motive_413_, v_t_boxed_417_, v_h_415_, v_trace_416_);
lean_dec(v_trace_416_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_info_elim___redArg(lean_object* v_info_419_){
_start:
{
lean_inc(v_info_419_);
return v_info_419_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_info_elim___redArg___boxed(lean_object* v_info_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Lake_LogLevel_info_elim___redArg(v_info_420_);
lean_dec(v_info_420_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_info_elim(lean_object* v_motive_422_, uint8_t v_t_423_, lean_object* v_h_424_, lean_object* v_info_425_){
_start:
{
lean_inc(v_info_425_);
return v_info_425_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_info_elim___boxed(lean_object* v_motive_426_, lean_object* v_t_427_, lean_object* v_h_428_, lean_object* v_info_429_){
_start:
{
uint8_t v_t_boxed_430_; lean_object* v_res_431_; 
v_t_boxed_430_ = lean_unbox(v_t_427_);
v_res_431_ = l_Lake_LogLevel_info_elim(v_motive_426_, v_t_boxed_430_, v_h_428_, v_info_429_);
lean_dec(v_info_429_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_warning_elim___redArg(lean_object* v_warning_432_){
_start:
{
lean_inc(v_warning_432_);
return v_warning_432_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_warning_elim___redArg___boxed(lean_object* v_warning_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_Lake_LogLevel_warning_elim___redArg(v_warning_433_);
lean_dec(v_warning_433_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_warning_elim(lean_object* v_motive_435_, uint8_t v_t_436_, lean_object* v_h_437_, lean_object* v_warning_438_){
_start:
{
lean_inc(v_warning_438_);
return v_warning_438_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_warning_elim___boxed(lean_object* v_motive_439_, lean_object* v_t_440_, lean_object* v_h_441_, lean_object* v_warning_442_){
_start:
{
uint8_t v_t_boxed_443_; lean_object* v_res_444_; 
v_t_boxed_443_ = lean_unbox(v_t_440_);
v_res_444_ = l_Lake_LogLevel_warning_elim(v_motive_439_, v_t_boxed_443_, v_h_441_, v_warning_442_);
lean_dec(v_warning_442_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_error_elim___redArg(lean_object* v_error_445_){
_start:
{
lean_inc(v_error_445_);
return v_error_445_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_error_elim___redArg___boxed(lean_object* v_error_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lake_LogLevel_error_elim___redArg(v_error_446_);
lean_dec(v_error_446_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_error_elim(lean_object* v_motive_448_, uint8_t v_t_449_, lean_object* v_h_450_, lean_object* v_error_451_){
_start:
{
lean_inc(v_error_451_);
return v_error_451_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_error_elim___boxed(lean_object* v_motive_452_, lean_object* v_t_453_, lean_object* v_h_454_, lean_object* v_error_455_){
_start:
{
uint8_t v_t_boxed_456_; lean_object* v_res_457_; 
v_t_boxed_456_ = lean_unbox(v_t_453_);
v_res_457_ = l_Lake_LogLevel_error_elim(v_motive_452_, v_t_boxed_456_, v_h_454_, v_error_455_);
lean_dec(v_error_455_);
return v_res_457_;
}
}
static uint8_t _init_l_Lake_instInhabitedLogLevel_default(void){
_start:
{
uint8_t v___x_458_; 
v___x_458_ = 0;
return v___x_458_;
}
}
static uint8_t _init_l_Lake_instInhabitedLogLevel(void){
_start:
{
uint8_t v___x_459_; 
v___x_459_ = 0;
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprLogLevel_repr(uint8_t v_x_472_, lean_object* v_prec_473_){
_start:
{
lean_object* v___y_475_; lean_object* v___y_482_; lean_object* v___y_489_; lean_object* v___y_496_; 
switch(v_x_472_)
{
case 0:
{
lean_object* v___x_502_; uint8_t v___x_503_; 
v___x_502_ = lean_unsigned_to_nat(1024u);
v___x_503_ = lean_nat_dec_le(v___x_502_, v_prec_473_);
if (v___x_503_ == 0)
{
lean_object* v___x_504_; 
v___x_504_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_475_ = v___x_504_;
goto v___jp_474_;
}
else
{
lean_object* v___x_505_; 
v___x_505_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_475_ = v___x_505_;
goto v___jp_474_;
}
}
case 1:
{
lean_object* v___x_506_; uint8_t v___x_507_; 
v___x_506_ = lean_unsigned_to_nat(1024u);
v___x_507_ = lean_nat_dec_le(v___x_506_, v_prec_473_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; 
v___x_508_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_482_ = v___x_508_;
goto v___jp_481_;
}
else
{
lean_object* v___x_509_; 
v___x_509_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_482_ = v___x_509_;
goto v___jp_481_;
}
}
case 2:
{
lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_510_ = lean_unsigned_to_nat(1024u);
v___x_511_ = lean_nat_dec_le(v___x_510_, v_prec_473_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; 
v___x_512_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_489_ = v___x_512_;
goto v___jp_488_;
}
else
{
lean_object* v___x_513_; 
v___x_513_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_489_ = v___x_513_;
goto v___jp_488_;
}
}
default: 
{
lean_object* v___x_514_; uint8_t v___x_515_; 
v___x_514_ = lean_unsigned_to_nat(1024u);
v___x_515_ = lean_nat_dec_le(v___x_514_, v_prec_473_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; 
v___x_516_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_496_ = v___x_516_;
goto v___jp_495_;
}
else
{
lean_object* v___x_517_; 
v___x_517_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_496_ = v___x_517_;
goto v___jp_495_;
}
}
}
v___jp_474_:
{
lean_object* v___x_476_; lean_object* v___x_477_; uint8_t v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_476_ = ((lean_object*)(l_Lake_instReprLogLevel_repr___closed__1));
lean_inc(v___y_475_);
v___x_477_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_477_, 0, v___y_475_);
lean_ctor_set(v___x_477_, 1, v___x_476_);
v___x_478_ = 0;
v___x_479_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_479_, 0, v___x_477_);
lean_ctor_set_uint8(v___x_479_, sizeof(void*)*1, v___x_478_);
v___x_480_ = l_Repr_addAppParen(v___x_479_, v_prec_473_);
return v___x_480_;
}
v___jp_481_:
{
lean_object* v___x_483_; lean_object* v___x_484_; uint8_t v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_483_ = ((lean_object*)(l_Lake_instReprLogLevel_repr___closed__3));
lean_inc(v___y_482_);
v___x_484_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_484_, 0, v___y_482_);
lean_ctor_set(v___x_484_, 1, v___x_483_);
v___x_485_ = 0;
v___x_486_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_486_, 0, v___x_484_);
lean_ctor_set_uint8(v___x_486_, sizeof(void*)*1, v___x_485_);
v___x_487_ = l_Repr_addAppParen(v___x_486_, v_prec_473_);
return v___x_487_;
}
v___jp_488_:
{
lean_object* v___x_490_; lean_object* v___x_491_; uint8_t v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_490_ = ((lean_object*)(l_Lake_instReprLogLevel_repr___closed__5));
lean_inc(v___y_489_);
v___x_491_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_491_, 0, v___y_489_);
lean_ctor_set(v___x_491_, 1, v___x_490_);
v___x_492_ = 0;
v___x_493_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_493_, 0, v___x_491_);
lean_ctor_set_uint8(v___x_493_, sizeof(void*)*1, v___x_492_);
v___x_494_ = l_Repr_addAppParen(v___x_493_, v_prec_473_);
return v___x_494_;
}
v___jp_495_:
{
lean_object* v___x_497_; lean_object* v___x_498_; uint8_t v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_497_ = ((lean_object*)(l_Lake_instReprLogLevel_repr___closed__7));
lean_inc(v___y_496_);
v___x_498_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_498_, 0, v___y_496_);
lean_ctor_set(v___x_498_, 1, v___x_497_);
v___x_499_ = 0;
v___x_500_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_500_, 0, v___x_498_);
lean_ctor_set_uint8(v___x_500_, sizeof(void*)*1, v___x_499_);
v___x_501_ = l_Repr_addAppParen(v___x_500_, v_prec_473_);
return v___x_501_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprLogLevel_repr___boxed(lean_object* v_x_518_, lean_object* v_prec_519_){
_start:
{
uint8_t v_x_221__boxed_520_; lean_object* v_res_521_; 
v_x_221__boxed_520_ = lean_unbox(v_x_518_);
v_res_521_ = l_Lake_instReprLogLevel_repr(v_x_221__boxed_520_, v_prec_519_);
lean_dec(v_prec_519_);
return v_res_521_;
}
}
LEAN_EXPORT uint8_t l_Lake_LogLevel_ofNat(lean_object* v_n_524_){
_start:
{
lean_object* v___x_525_; uint8_t v___x_526_; 
v___x_525_ = lean_unsigned_to_nat(1u);
v___x_526_ = lean_nat_dec_le(v_n_524_, v___x_525_);
if (v___x_526_ == 0)
{
lean_object* v___x_527_; uint8_t v___x_528_; 
v___x_527_ = lean_unsigned_to_nat(2u);
v___x_528_ = lean_nat_dec_le(v_n_524_, v___x_527_);
if (v___x_528_ == 0)
{
uint8_t v___x_529_; 
v___x_529_ = 3;
return v___x_529_;
}
else
{
uint8_t v___x_530_; 
v___x_530_ = 2;
return v___x_530_;
}
}
else
{
lean_object* v___x_531_; uint8_t v___x_532_; 
v___x_531_ = lean_unsigned_to_nat(0u);
v___x_532_ = lean_nat_dec_le(v_n_524_, v___x_531_);
if (v___x_532_ == 0)
{
uint8_t v___x_533_; 
v___x_533_ = 1;
return v___x_533_;
}
else
{
uint8_t v___x_534_; 
v___x_534_ = 0;
return v___x_534_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ofNat___boxed(lean_object* v_n_535_){
_start:
{
uint8_t v_res_536_; lean_object* v_r_537_; 
v_res_536_ = l_Lake_LogLevel_ofNat(v_n_535_);
lean_dec(v_n_535_);
v_r_537_ = lean_box(v_res_536_);
return v_r_537_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqLogLevel(uint8_t v_x_538_, uint8_t v_y_539_){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; uint8_t v___x_542_; 
v___x_540_ = l_Lake_LogLevel_ctorIdx(v_x_538_);
v___x_541_ = l_Lake_LogLevel_ctorIdx(v_y_539_);
v___x_542_ = lean_nat_dec_eq(v___x_540_, v___x_541_);
lean_dec(v___x_541_);
lean_dec(v___x_540_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqLogLevel___boxed(lean_object* v_x_543_, lean_object* v_y_544_){
_start:
{
uint8_t v_x_20__boxed_545_; uint8_t v_y_21__boxed_546_; uint8_t v_res_547_; lean_object* v_r_548_; 
v_x_20__boxed_545_ = lean_unbox(v_x_543_);
v_y_21__boxed_546_ = lean_unbox(v_y_544_);
v_res_547_ = l_Lake_instDecidableEqLogLevel(v_x_20__boxed_545_, v_y_21__boxed_546_);
v_r_548_ = lean_box(v_res_547_);
return v_r_548_;
}
}
LEAN_EXPORT uint8_t l_Lake_instOrdLogLevel_ord(uint8_t v_x_549_, uint8_t v_y_550_){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_551_ = l_Lake_LogLevel_ctorIdx(v_x_549_);
v___x_552_ = l_Lake_LogLevel_ctorIdx(v_y_550_);
v___x_553_ = lean_nat_dec_lt(v___x_551_, v___x_552_);
if (v___x_553_ == 0)
{
uint8_t v___x_554_; 
v___x_554_ = lean_nat_dec_eq(v___x_551_, v___x_552_);
lean_dec(v___x_552_);
lean_dec(v___x_551_);
if (v___x_554_ == 0)
{
uint8_t v___x_555_; 
v___x_555_ = 2;
return v___x_555_;
}
else
{
uint8_t v___x_556_; 
v___x_556_ = 1;
return v___x_556_;
}
}
else
{
uint8_t v___x_557_; 
lean_dec(v___x_552_);
lean_dec(v___x_551_);
v___x_557_ = 0;
return v___x_557_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instOrdLogLevel_ord___boxed(lean_object* v_x_558_, lean_object* v_y_559_){
_start:
{
uint8_t v_x_30__boxed_560_; uint8_t v_y_31__boxed_561_; uint8_t v_res_562_; lean_object* v_r_563_; 
v_x_30__boxed_560_ = lean_unbox(v_x_558_);
v_y_31__boxed_561_ = lean_unbox(v_y_559_);
v_res_562_ = l_Lake_instOrdLogLevel_ord(v_x_30__boxed_560_, v_y_31__boxed_561_);
v_r_563_ = lean_box(v_res_562_);
return v_r_563_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToJsonLogLevel_toJson(uint8_t v_x_578_){
_start:
{
switch(v_x_578_)
{
case 0:
{
lean_object* v___x_579_; 
v___x_579_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__1));
return v___x_579_;
}
case 1:
{
lean_object* v___x_580_; 
v___x_580_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__3));
return v___x_580_;
}
case 2:
{
lean_object* v___x_581_; 
v___x_581_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__5));
return v___x_581_;
}
default: 
{
lean_object* v___x_582_; 
v___x_582_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__7));
return v___x_582_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instToJsonLogLevel_toJson___boxed(lean_object* v_x_583_){
_start:
{
uint8_t v_x_88__boxed_584_; lean_object* v_res_585_; 
v_x_88__boxed_584_ = lean_unbox(v_x_583_);
v_res_585_ = l_Lake_instToJsonLogLevel_toJson(v_x_88__boxed_584_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l_Lake_instFromJsonLogLevel_fromJson(lean_object* v_json_606_){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = l_Lean_Json_getTag_x3f(v_json_606_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v___x_608_; 
v___x_608_ = ((lean_object*)(l_Lake_instFromJsonLogLevel_fromJson___closed__1));
return v___x_608_;
}
else
{
lean_object* v_val_609_; lean_object* v___x_610_; uint8_t v___x_611_; 
v_val_609_ = lean_ctor_get(v___x_607_, 0);
lean_inc(v_val_609_);
lean_dec_ref_known(v___x_607_, 1);
v___x_610_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__6));
v___x_611_ = lean_string_dec_eq(v_val_609_, v___x_610_);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; uint8_t v___x_613_; 
v___x_612_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__0));
v___x_613_ = lean_string_dec_eq(v_val_609_, v___x_612_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; uint8_t v___x_615_; 
v___x_614_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__2));
v___x_615_ = lean_string_dec_eq(v_val_609_, v___x_614_);
if (v___x_615_ == 0)
{
lean_object* v___x_616_; uint8_t v___x_617_; 
v___x_616_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__4));
v___x_617_ = lean_string_dec_eq(v_val_609_, v___x_616_);
lean_dec(v_val_609_);
if (v___x_617_ == 0)
{
lean_object* v___x_618_; 
v___x_618_ = ((lean_object*)(l_Lake_instFromJsonLogLevel_fromJson___closed__3));
return v___x_618_;
}
else
{
lean_object* v___x_619_; 
v___x_619_ = ((lean_object*)(l_Lake_instFromJsonLogLevel_fromJson___closed__4));
return v___x_619_;
}
}
else
{
lean_object* v___x_620_; 
lean_dec(v_val_609_);
v___x_620_ = ((lean_object*)(l_Lake_instFromJsonLogLevel_fromJson___closed__5));
return v___x_620_;
}
}
else
{
lean_object* v___x_621_; 
lean_dec(v_val_609_);
v___x_621_ = ((lean_object*)(l_Lake_instFromJsonLogLevel_fromJson___closed__6));
return v___x_621_;
}
}
else
{
lean_object* v___x_622_; 
lean_dec(v_val_609_);
v___x_622_ = ((lean_object*)(l_Lake_instFromJsonLogLevel_fromJson___closed__7));
return v___x_622_;
}
}
}
}
static lean_object* _init_l_Lake_instLTLogLevel(void){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = lean_box(0);
return v___x_625_;
}
}
static lean_object* _init_l_Lake_instLELogLevel(void){
_start:
{
lean_object* v___x_626_; 
v___x_626_ = lean_box(0);
return v___x_626_;
}
}
LEAN_EXPORT uint8_t l_Lake_instMinLogLevel___lam__0(uint8_t v_x_627_, uint8_t v_y_628_){
_start:
{
uint8_t v___x_629_; 
v___x_629_ = l_Lake_instOrdLogLevel_ord(v_x_627_, v_y_628_);
if (v___x_629_ == 2)
{
return v_y_628_;
}
else
{
return v_x_627_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMinLogLevel___lam__0___boxed(lean_object* v_x_630_, lean_object* v_y_631_){
_start:
{
uint8_t v_x_boxed_632_; uint8_t v_y_boxed_633_; uint8_t v_res_634_; lean_object* v_r_635_; 
v_x_boxed_632_ = lean_unbox(v_x_630_);
v_y_boxed_633_ = lean_unbox(v_y_631_);
v_res_634_ = l_Lake_instMinLogLevel___lam__0(v_x_boxed_632_, v_y_boxed_633_);
v_r_635_ = lean_box(v_res_634_);
return v_r_635_;
}
}
LEAN_EXPORT uint8_t l_Lake_instMaxLogLevel___lam__0(uint8_t v_x_638_, uint8_t v_y_639_){
_start:
{
uint8_t v___x_640_; 
v___x_640_ = l_Lake_instOrdLogLevel_ord(v_x_638_, v_y_639_);
if (v___x_640_ == 2)
{
return v_x_638_;
}
else
{
return v_y_639_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMaxLogLevel___lam__0___boxed(lean_object* v_x_641_, lean_object* v_y_642_){
_start:
{
uint8_t v_x_boxed_643_; uint8_t v_y_boxed_644_; uint8_t v_res_645_; lean_object* v_r_646_; 
v_x_boxed_643_ = lean_unbox(v_x_641_);
v_y_boxed_644_ = lean_unbox(v_y_642_);
v_res_645_ = l_Lake_instMaxLogLevel___lam__0(v_x_boxed_643_, v_y_boxed_644_);
v_r_646_ = lean_box(v_res_645_);
return v_r_646_;
}
}
LEAN_EXPORT uint32_t l_Lake_LogLevel_icon(uint8_t v_x_649_){
_start:
{
switch(v_x_649_)
{
case 2:
{
uint32_t v___x_650_; 
v___x_650_ = 9888;
return v___x_650_;
}
case 3:
{
uint32_t v___x_651_; 
v___x_651_ = 10006;
return v___x_651_;
}
default: 
{
uint32_t v___x_652_; 
v___x_652_ = 8505;
return v___x_652_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_icon___boxed(lean_object* v_x_653_){
_start:
{
uint8_t v_x_33__boxed_654_; uint32_t v_res_655_; lean_object* v_r_656_; 
v_x_33__boxed_654_ = lean_unbox(v_x_653_);
v_res_655_ = l_Lake_LogLevel_icon(v_x_33__boxed_654_);
v_r_656_ = lean_box_uint32(v_res_655_);
return v_r_656_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ansiColor(uint8_t v_x_660_){
_start:
{
switch(v_x_660_)
{
case 2:
{
lean_object* v___x_661_; 
v___x_661_ = ((lean_object*)(l_Lake_LogLevel_ansiColor___closed__0));
return v___x_661_;
}
case 3:
{
lean_object* v___x_662_; 
v___x_662_ = ((lean_object*)(l_Lake_LogLevel_ansiColor___closed__1));
return v___x_662_;
}
default: 
{
lean_object* v___x_663_; 
v___x_663_ = ((lean_object*)(l_Lake_LogLevel_ansiColor___closed__2));
return v___x_663_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ansiColor___boxed(lean_object* v_x_664_){
_start:
{
uint8_t v_x_36__boxed_665_; lean_object* v_res_666_; 
v_x_36__boxed_665_ = lean_unbox(v_x_664_);
v_res_666_ = l_Lake_LogLevel_ansiColor(v_x_36__boxed_665_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00Lake_LogLevel_ofString_x3f_spec__0(lean_object* v_s_667_, lean_object* v_p_668_){
_start:
{
uint32_t v___y_670_; lean_object* v___x_675_; uint8_t v_decide_676_; 
v___x_675_ = lean_string_utf8_byte_size(v_s_667_);
v_decide_676_ = lean_nat_dec_eq(v_p_668_, v___x_675_);
if (v_decide_676_ == 0)
{
uint32_t v___x_677_; uint8_t v___y_679_; uint32_t v___x_682_; uint8_t v___x_683_; 
v___x_677_ = lean_string_utf8_get_fast(v_s_667_, v_p_668_);
v___x_682_ = 65;
v___x_683_ = lean_uint32_dec_le(v___x_682_, v___x_677_);
if (v___x_683_ == 0)
{
v___y_679_ = v___x_683_;
goto v___jp_678_;
}
else
{
uint32_t v___x_684_; uint8_t v___x_685_; 
v___x_684_ = 90;
v___x_685_ = lean_uint32_dec_le(v___x_677_, v___x_684_);
v___y_679_ = v___x_685_;
goto v___jp_678_;
}
v___jp_678_:
{
if (v___y_679_ == 0)
{
v___y_670_ = v___x_677_;
goto v___jp_669_;
}
else
{
uint32_t v___x_680_; uint32_t v___x_681_; 
v___x_680_ = 32;
v___x_681_ = lean_uint32_add(v___x_677_, v___x_680_);
v___y_670_ = v___x_681_;
goto v___jp_669_;
}
}
}
else
{
lean_dec(v_p_668_);
return v_s_667_;
}
v___jp_669_:
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
lean_inc(v_p_668_);
v___x_671_ = lean_string_utf8_set(v_s_667_, v_p_668_, v___y_670_);
v___x_672_ = l_Char_utf8Size(v___y_670_);
v___x_673_ = lean_nat_add(v_p_668_, v___x_672_);
lean_dec(v___x_672_);
lean_dec(v_p_668_);
v_s_667_ = v___x_671_;
v_p_668_ = v___x_673_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ofString_x3f(lean_object* v_s_700_){
_start:
{
lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; uint8_t v___x_708_; 
v___x_705_ = lean_unsigned_to_nat(0u);
v___x_706_ = l_String_mapAux___at___00Lake_LogLevel_ofString_x3f_spec__0(v_s_700_, v___x_705_);
v___x_707_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__0));
v___x_708_ = lean_string_dec_eq(v___x_706_, v___x_707_);
if (v___x_708_ == 0)
{
lean_object* v___x_709_; uint8_t v___x_710_; 
v___x_709_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__2));
v___x_710_ = lean_string_dec_eq(v___x_706_, v___x_709_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; uint8_t v___x_712_; 
v___x_711_ = ((lean_object*)(l_Lake_LogLevel_ofString_x3f___closed__2));
v___x_712_ = lean_string_dec_eq(v___x_706_, v___x_711_);
if (v___x_712_ == 0)
{
lean_object* v___x_713_; uint8_t v___x_714_; 
v___x_713_ = ((lean_object*)(l_Lake_LogLevel_ofString_x3f___closed__3));
v___x_714_ = lean_string_dec_eq(v___x_706_, v___x_713_);
if (v___x_714_ == 0)
{
lean_object* v___x_715_; uint8_t v___x_716_; 
v___x_715_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__4));
v___x_716_ = lean_string_dec_eq(v___x_706_, v___x_715_);
if (v___x_716_ == 0)
{
lean_object* v___x_717_; uint8_t v___x_718_; 
v___x_717_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__6));
v___x_718_ = lean_string_dec_eq(v___x_706_, v___x_717_);
lean_dec_ref(v___x_706_);
if (v___x_718_ == 0)
{
lean_object* v___x_719_; 
v___x_719_ = lean_box(0);
return v___x_719_;
}
else
{
lean_object* v___x_720_; 
v___x_720_ = ((lean_object*)(l_Lake_LogLevel_ofString_x3f___closed__4));
return v___x_720_;
}
}
else
{
lean_dec_ref(v___x_706_);
goto v___jp_703_;
}
}
else
{
lean_dec_ref(v___x_706_);
goto v___jp_703_;
}
}
else
{
lean_dec_ref(v___x_706_);
goto v___jp_701_;
}
}
else
{
lean_dec_ref(v___x_706_);
goto v___jp_701_;
}
}
else
{
lean_object* v___x_721_; 
lean_dec_ref(v___x_706_);
v___x_721_ = ((lean_object*)(l_Lake_LogLevel_ofString_x3f___closed__5));
return v___x_721_;
}
v___jp_701_:
{
lean_object* v___x_702_; 
v___x_702_ = ((lean_object*)(l_Lake_LogLevel_ofString_x3f___closed__0));
return v___x_702_;
}
v___jp_703_:
{
lean_object* v___x_704_; 
v___x_704_ = ((lean_object*)(l_Lake_LogLevel_ofString_x3f___closed__1));
return v___x_704_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_toString(uint8_t v_x_722_){
_start:
{
switch(v_x_722_)
{
case 0:
{
lean_object* v___x_723_; 
v___x_723_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__0));
return v___x_723_;
}
case 1:
{
lean_object* v___x_724_; 
v___x_724_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__2));
return v___x_724_;
}
case 2:
{
lean_object* v___x_725_; 
v___x_725_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__4));
return v___x_725_;
}
default: 
{
lean_object* v___x_726_; 
v___x_726_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__6));
return v___x_726_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_toString___boxed(lean_object* v_x_727_){
_start:
{
uint8_t v_x_36__boxed_728_; lean_object* v_res_729_; 
v_x_36__boxed_728_ = lean_unbox(v_x_727_);
v_res_729_ = l_Lake_LogLevel_toString(v_x_36__boxed_728_);
return v_res_729_;
}
}
LEAN_EXPORT uint8_t l_Lake_LogLevel_ofMessageSeverity(uint8_t v_x_732_){
_start:
{
switch(v_x_732_)
{
case 0:
{
uint8_t v___x_733_; 
v___x_733_ = 1;
return v___x_733_;
}
case 1:
{
uint8_t v___x_734_; 
v___x_734_ = 2;
return v___x_734_;
}
default: 
{
uint8_t v___x_735_; 
v___x_735_ = 3;
return v___x_735_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ofMessageSeverity___boxed(lean_object* v_x_736_){
_start:
{
uint8_t v_x_25__boxed_737_; uint8_t v_res_738_; lean_object* v_r_739_; 
v_x_25__boxed_737_ = lean_unbox(v_x_736_);
v_res_738_ = l_Lake_LogLevel_ofMessageSeverity(v_x_25__boxed_737_);
v_r_739_ = lean_box(v_res_738_);
return v_r_739_;
}
}
LEAN_EXPORT uint8_t l_Lake_LogLevel_toMessageSeverity(uint8_t v_x_740_){
_start:
{
switch(v_x_740_)
{
case 2:
{
uint8_t v___x_741_; 
v___x_741_ = 1;
return v___x_741_;
}
case 3:
{
uint8_t v___x_742_; 
v___x_742_ = 2;
return v___x_742_;
}
default: 
{
uint8_t v___x_743_; 
v___x_743_ = 0;
return v___x_743_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_toMessageSeverity___boxed(lean_object* v_x_744_){
_start:
{
uint8_t v_x_30__boxed_745_; uint8_t v_res_746_; lean_object* v_r_747_; 
v_x_30__boxed_745_ = lean_unbox(v_x_744_);
v_res_746_ = l_Lake_LogLevel_toMessageSeverity(v_x_30__boxed_745_);
v_r_747_ = lean_box(v_res_746_);
return v_r_747_;
}
}
LEAN_EXPORT uint8_t l_Lake_Verbosity_minLogLv(uint8_t v_x_748_){
_start:
{
switch(v_x_748_)
{
case 0:
{
uint8_t v___x_749_; 
v___x_749_ = 2;
return v___x_749_;
}
case 1:
{
uint8_t v___x_750_; 
v___x_750_ = 1;
return v___x_750_;
}
default: 
{
uint8_t v___x_751_; 
v___x_751_ = 0;
return v___x_751_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_minLogLv___boxed(lean_object* v_x_752_){
_start:
{
uint8_t v_x_25__boxed_753_; uint8_t v_res_754_; lean_object* v_r_755_; 
v_x_25__boxed_753_ = lean_unbox(v_x_752_);
v_res_754_ = l_Lake_Verbosity_minLogLv(v_x_25__boxed_753_);
v_r_755_ = lean_box(v_res_754_);
return v_r_755_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lake_instToJsonLogEntry_toJson_spec__0(lean_object* v_a_762_, lean_object* v_a_763_){
_start:
{
if (lean_obj_tag(v_a_762_) == 0)
{
lean_object* v___x_764_; 
v___x_764_ = lean_array_to_list(v_a_763_);
return v___x_764_;
}
else
{
lean_object* v_head_765_; lean_object* v_tail_766_; lean_object* v___x_767_; 
v_head_765_ = lean_ctor_get(v_a_762_, 0);
lean_inc(v_head_765_);
v_tail_766_ = lean_ctor_get(v_a_762_, 1);
lean_inc(v_tail_766_);
lean_dec_ref_known(v_a_762_, 2);
v___x_767_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_763_, v_head_765_);
v_a_762_ = v_tail_766_;
v_a_763_ = v___x_767_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instToJsonLogEntry_toJson(lean_object* v_x_773_){
_start:
{
uint8_t v_level_774_; lean_object* v_message_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v_level_774_ = lean_ctor_get_uint8(v_x_773_, sizeof(void*)*1);
v_message_775_ = lean_ctor_get(v_x_773_, 0);
v___x_776_ = ((lean_object*)(l_Lake_instToJsonLogEntry_toJson___closed__0));
v___x_777_ = l_Lake_instToJsonLogLevel_toJson(v_level_774_);
v___x_778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_778_, 0, v___x_776_);
lean_ctor_set(v___x_778_, 1, v___x_777_);
v___x_779_ = lean_box(0);
v___x_780_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_780_, 0, v___x_778_);
lean_ctor_set(v___x_780_, 1, v___x_779_);
v___x_781_ = ((lean_object*)(l_Lake_instToJsonLogEntry_toJson___closed__1));
lean_inc_ref(v_message_775_);
v___x_782_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_782_, 0, v_message_775_);
v___x_783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_781_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
v___x_784_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
lean_ctor_set(v___x_784_, 1, v___x_779_);
v___x_785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
lean_ctor_set(v___x_785_, 1, v___x_779_);
v___x_786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_780_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
v___x_787_ = ((lean_object*)(l_Lake_instToJsonLogEntry_toJson___closed__2));
v___x_788_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lake_instToJsonLogEntry_toJson_spec__0(v___x_786_, v___x_787_);
v___x_789_ = l_Lean_Json_mkObj(v___x_788_);
lean_dec(v___x_788_);
return v___x_789_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToJsonLogEntry_toJson___boxed(lean_object* v_x_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l_Lake_instToJsonLogEntry_toJson(v_x_790_);
lean_dec_ref(v_x_790_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__0(lean_object* v_j_794_, lean_object* v_k_795_){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = l_Lean_Json_getObjValD(v_j_794_, v_k_795_);
v___x_797_ = l_Lake_instFromJsonLogLevel_fromJson(v___x_796_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__0___boxed(lean_object* v_j_798_, lean_object* v_k_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__0(v_j_798_, v_k_799_);
lean_dec_ref(v_k_799_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__1(lean_object* v_j_801_, lean_object* v_k_802_){
_start:
{
lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_803_ = l_Lean_Json_getObjValD(v_j_801_, v_k_802_);
v___x_804_ = l_Lean_Json_getStr_x3f(v___x_803_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__1___boxed(lean_object* v_j_805_, lean_object* v_k_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__1(v_j_805_, v_k_806_);
lean_dec_ref(v_k_806_);
return v_res_807_;
}
}
static lean_object* _init_l_Lake_instFromJsonLogEntry_fromJson___closed__3(void){
_start:
{
uint8_t v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_813_ = 1;
v___x_814_ = ((lean_object*)(l_Lake_instFromJsonLogEntry_fromJson___closed__2));
v___x_815_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_814_, v___x_813_);
return v___x_815_;
}
}
static lean_object* _init_l_Lake_instFromJsonLogEntry_fromJson___closed__5(void){
_start:
{
lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_817_ = ((lean_object*)(l_Lake_instFromJsonLogEntry_fromJson___closed__4));
v___x_818_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__3, &l_Lake_instFromJsonLogEntry_fromJson___closed__3_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__3);
v___x_819_ = lean_string_append(v___x_818_, v___x_817_);
return v___x_819_;
}
}
static lean_object* _init_l_Lake_instFromJsonLogEntry_fromJson___closed__7(void){
_start:
{
uint8_t v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_822_ = 1;
v___x_823_ = ((lean_object*)(l_Lake_instFromJsonLogEntry_fromJson___closed__6));
v___x_824_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_823_, v___x_822_);
return v___x_824_;
}
}
static lean_object* _init_l_Lake_instFromJsonLogEntry_fromJson___closed__8(void){
_start:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_825_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__7, &l_Lake_instFromJsonLogEntry_fromJson___closed__7_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__7);
v___x_826_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__5, &l_Lake_instFromJsonLogEntry_fromJson___closed__5_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__5);
v___x_827_ = lean_string_append(v___x_826_, v___x_825_);
return v___x_827_;
}
}
static lean_object* _init_l_Lake_instFromJsonLogEntry_fromJson___closed__10(void){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_829_ = ((lean_object*)(l_Lake_instFromJsonLogEntry_fromJson___closed__9));
v___x_830_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__8, &l_Lake_instFromJsonLogEntry_fromJson___closed__8_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__8);
v___x_831_ = lean_string_append(v___x_830_, v___x_829_);
return v___x_831_;
}
}
static lean_object* _init_l_Lake_instFromJsonLogEntry_fromJson___closed__12(void){
_start:
{
uint8_t v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_834_ = 1;
v___x_835_ = ((lean_object*)(l_Lake_instFromJsonLogEntry_fromJson___closed__11));
v___x_836_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_835_, v___x_834_);
return v___x_836_;
}
}
static lean_object* _init_l_Lake_instFromJsonLogEntry_fromJson___closed__13(void){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_837_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__12, &l_Lake_instFromJsonLogEntry_fromJson___closed__12_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__12);
v___x_838_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__5, &l_Lake_instFromJsonLogEntry_fromJson___closed__5_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__5);
v___x_839_ = lean_string_append(v___x_838_, v___x_837_);
return v___x_839_;
}
}
static lean_object* _init_l_Lake_instFromJsonLogEntry_fromJson___closed__14(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_840_ = ((lean_object*)(l_Lake_instFromJsonLogEntry_fromJson___closed__9));
v___x_841_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__13, &l_Lake_instFromJsonLogEntry_fromJson___closed__13_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__13);
v___x_842_ = lean_string_append(v___x_841_, v___x_840_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Lake_instFromJsonLogEntry_fromJson(lean_object* v_json_843_){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_844_ = ((lean_object*)(l_Lake_instToJsonLogEntry_toJson___closed__0));
lean_inc(v_json_843_);
v___x_845_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__0(v_json_843_, v___x_844_);
if (lean_obj_tag(v___x_845_) == 0)
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_855_; 
lean_dec(v_json_843_);
v_a_846_ = lean_ctor_get(v___x_845_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_855_ == 0)
{
v___x_848_ = v___x_845_;
v_isShared_849_ = v_isSharedCheck_855_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v___x_845_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_855_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_853_; 
v___x_850_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__10, &l_Lake_instFromJsonLogEntry_fromJson___closed__10_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__10);
v___x_851_ = lean_string_append(v___x_850_, v_a_846_);
lean_dec(v_a_846_);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 0, v___x_851_);
v___x_853_ = v___x_848_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v___x_851_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
else
{
if (lean_obj_tag(v___x_845_) == 0)
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_863_; 
lean_dec(v_json_843_);
v_a_856_ = lean_ctor_get(v___x_845_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_863_ == 0)
{
v___x_858_ = v___x_845_;
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_845_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
lean_ctor_set_tag(v___x_858_, 0);
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_a_856_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
else
{
lean_object* v_a_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v_a_864_ = lean_ctor_get(v___x_845_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_845_, 1);
v___x_865_ = ((lean_object*)(l_Lake_instToJsonLogEntry_toJson___closed__1));
v___x_866_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__1(v_json_843_, v___x_865_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_876_; 
lean_dec(v_a_864_);
v_a_867_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_876_ == 0)
{
v___x_869_ = v___x_866_;
v_isShared_870_ = v_isSharedCheck_876_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_866_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_876_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_874_; 
v___x_871_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__14, &l_Lake_instFromJsonLogEntry_fromJson___closed__14_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__14);
v___x_872_ = lean_string_append(v___x_871_, v_a_867_);
lean_dec(v_a_867_);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 0, v___x_872_);
v___x_874_ = v___x_869_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_872_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
else
{
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
lean_dec(v_a_864_);
v_a_877_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_866_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_866_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
lean_ctor_set_tag(v___x_879_, 0);
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
else
{
lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_894_; 
v_a_885_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_894_ == 0)
{
v___x_887_ = v___x_866_;
v_isShared_888_ = v_isSharedCheck_894_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_dec(v___x_866_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_894_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_889_; uint8_t v___x_890_; lean_object* v___x_892_; 
v___x_889_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_889_, 0, v_a_885_);
v___x_890_ = lean_unbox(v_a_864_);
lean_dec(v_a_864_);
lean_ctor_set_uint8(v___x_889_, sizeof(void*)*1, v___x_890_);
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 0, v___x_889_);
v___x_892_ = v___x_887_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v___x_889_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_toString(lean_object* v_self_899_, uint8_t v_useAnsi_900_){
_start:
{
if (v_useAnsi_900_ == 0)
{
uint8_t v_level_901_; lean_object* v_message_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v_level_901_ = lean_ctor_get_uint8(v_self_899_, sizeof(void*)*1);
v_message_902_ = lean_ctor_get(v_self_899_, 0);
v___x_903_ = l_Lake_LogLevel_toString(v_level_901_);
v___x_904_ = ((lean_object*)(l_Lake_instFromJsonLogEntry_fromJson___closed__9));
v___x_905_ = lean_string_append(v___x_903_, v___x_904_);
v___x_906_ = lean_string_append(v___x_905_, v_message_902_);
return v___x_906_;
}
else
{
uint8_t v_level_907_; lean_object* v_message_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v_pre_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v_level_907_ = lean_ctor_get_uint8(v_self_899_, sizeof(void*)*1);
v_message_908_ = lean_ctor_get(v_self_899_, 0);
v___x_909_ = l_Lake_LogLevel_ansiColor(v_level_907_);
v___x_910_ = l_Lake_LogLevel_toString(v_level_907_);
v___x_911_ = ((lean_object*)(l_Lake_LogEntry_toString___closed__0));
v___x_912_ = lean_string_append(v___x_910_, v___x_911_);
v_pre_913_ = l_Lake_Ansi_chalk(v___x_909_, v___x_912_);
lean_dec_ref(v___x_912_);
lean_dec_ref(v___x_909_);
v___x_914_ = ((lean_object*)(l_Lake_LogEntry_toString___closed__1));
v___x_915_ = lean_string_append(v_pre_913_, v___x_914_);
v___x_916_ = lean_string_append(v___x_915_, v_message_908_);
return v___x_916_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_toString___boxed(lean_object* v_self_917_, lean_object* v_useAnsi_918_){
_start:
{
uint8_t v_useAnsi_boxed_919_; lean_object* v_res_920_; 
v_useAnsi_boxed_919_ = lean_unbox(v_useAnsi_918_);
v_res_920_ = l_Lake_LogEntry_toString(v_self_917_, v_useAnsi_boxed_919_);
lean_dec_ref(v_self_917_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToStringLogEntry___lam__0(lean_object* v_self_921_){
_start:
{
uint8_t v___x_922_; lean_object* v___x_923_; 
v___x_922_ = 0;
v___x_923_ = l_Lake_LogEntry_toString(v_self_921_, v___x_922_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToStringLogEntry___lam__0___boxed(lean_object* v_self_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Lake_instToStringLogEntry___lam__0(v_self_924_);
lean_dec_ref(v_self_924_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_trace(lean_object* v_message_928_){
_start:
{
uint8_t v___x_929_; lean_object* v___x_930_; 
v___x_929_ = 0;
v___x_930_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_930_, 0, v_message_928_);
lean_ctor_set_uint8(v___x_930_, sizeof(void*)*1, v___x_929_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_info(lean_object* v_message_931_){
_start:
{
uint8_t v___x_932_; lean_object* v___x_933_; 
v___x_932_ = 1;
v___x_933_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_933_, 0, v_message_931_);
lean_ctor_set_uint8(v___x_933_, sizeof(void*)*1, v___x_932_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_warning(lean_object* v_message_934_){
_start:
{
uint8_t v___x_935_; lean_object* v___x_936_; 
v___x_935_ = 2;
v___x_936_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_936_, 0, v_message_934_);
lean_ctor_set_uint8(v___x_936_, sizeof(void*)*1, v___x_935_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_error(lean_object* v_message_937_){
_start:
{
uint8_t v___x_938_; lean_object* v___x_939_; 
v___x_938_ = 3;
v___x_939_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_939_, 0, v_message_937_);
lean_ctor_set_uint8(v___x_939_, sizeof(void*)*1, v___x_938_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_ofSerialMessage(lean_object* v_msg_941_){
_start:
{
lean_object* v_toBaseMessage_942_; lean_object* v_fileName_943_; lean_object* v_pos_944_; uint8_t v_severity_945_; lean_object* v_caption_946_; lean_object* v_data_947_; lean_object* v___y_949_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v_startInclusive_958_; lean_object* v_endExclusive_959_; lean_object* v___x_960_; uint8_t v___x_961_; 
v_toBaseMessage_942_ = lean_ctor_get(v_msg_941_, 0);
lean_inc_ref(v_toBaseMessage_942_);
lean_dec_ref(v_msg_941_);
v_fileName_943_ = lean_ctor_get(v_toBaseMessage_942_, 0);
lean_inc_ref(v_fileName_943_);
v_pos_944_ = lean_ctor_get(v_toBaseMessage_942_, 1);
lean_inc_ref(v_pos_944_);
v_severity_945_ = lean_ctor_get_uint8(v_toBaseMessage_942_, sizeof(void*)*5 + 1);
v_caption_946_ = lean_ctor_get(v_toBaseMessage_942_, 3);
lean_inc_ref(v_caption_946_);
v_data_947_ = lean_ctor_get(v_toBaseMessage_942_, 4);
lean_inc(v_data_947_);
lean_dec_ref(v_toBaseMessage_942_);
v___x_954_ = lean_unsigned_to_nat(0u);
v___x_955_ = lean_string_utf8_byte_size(v_caption_946_);
v___x_956_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_956_, 0, v_caption_946_);
lean_ctor_set(v___x_956_, 1, v___x_954_);
lean_ctor_set(v___x_956_, 2, v___x_955_);
v___x_957_ = l_String_Slice_trimAscii(v___x_956_);
v_startInclusive_958_ = lean_ctor_get(v___x_957_, 1);
lean_inc(v_startInclusive_958_);
v_endExclusive_959_ = lean_ctor_get(v___x_957_, 2);
lean_inc(v_endExclusive_959_);
v___x_960_ = lean_nat_sub(v_endExclusive_959_, v_startInclusive_958_);
lean_dec(v_startInclusive_958_);
lean_dec(v_endExclusive_959_);
v___x_961_ = lean_nat_dec_eq(v___x_960_, v___x_954_);
lean_dec(v___x_960_);
if (v___x_961_ == 0)
{
lean_object* v___x_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_975_; 
v___x_962_ = l_String_Slice_toString(v___x_957_);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_975_ == 0)
{
lean_object* v_unused_976_; lean_object* v_unused_977_; lean_object* v_unused_978_; 
v_unused_976_ = lean_ctor_get(v___x_957_, 2);
lean_dec(v_unused_976_);
v_unused_977_ = lean_ctor_get(v___x_957_, 1);
lean_dec(v_unused_977_);
v_unused_978_ = lean_ctor_get(v___x_957_, 0);
lean_dec(v_unused_978_);
v___x_964_ = v___x_957_;
v_isShared_965_ = v_isSharedCheck_975_;
goto v_resetjp_963_;
}
else
{
lean_dec(v___x_957_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_975_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_970_; 
v___x_966_ = ((lean_object*)(l_Lake_LogEntry_ofSerialMessage___closed__0));
v___x_967_ = lean_string_append(v___x_962_, v___x_966_);
v___x_968_ = lean_string_utf8_byte_size(v_data_947_);
if (v_isShared_965_ == 0)
{
lean_ctor_set(v___x_964_, 2, v___x_968_);
lean_ctor_set(v___x_964_, 1, v___x_954_);
lean_ctor_set(v___x_964_, 0, v_data_947_);
v___x_970_ = v___x_964_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_data_947_);
lean_ctor_set(v_reuseFailAlloc_974_, 1, v___x_954_);
lean_ctor_set(v_reuseFailAlloc_974_, 2, v___x_968_);
v___x_970_ = v_reuseFailAlloc_974_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_971_ = l_String_Slice_trimAscii(v___x_970_);
v___x_972_ = l_String_Slice_toString(v___x_971_);
lean_dec_ref(v___x_971_);
v___x_973_ = lean_string_append(v___x_967_, v___x_972_);
lean_dec_ref(v___x_972_);
v___y_949_ = v___x_973_;
goto v___jp_948_;
}
}
}
else
{
lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_991_; 
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_991_ == 0)
{
lean_object* v_unused_992_; lean_object* v_unused_993_; lean_object* v_unused_994_; 
v_unused_992_ = lean_ctor_get(v___x_957_, 2);
lean_dec(v_unused_992_);
v_unused_993_ = lean_ctor_get(v___x_957_, 1);
lean_dec(v_unused_993_);
v_unused_994_ = lean_ctor_get(v___x_957_, 0);
lean_dec(v_unused_994_);
v___x_980_ = v___x_957_;
v_isShared_981_ = v_isSharedCheck_991_;
goto v_resetjp_979_;
}
else
{
lean_dec(v___x_957_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_991_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_982_; lean_object* v___x_984_; 
v___x_982_ = lean_string_utf8_byte_size(v_data_947_);
if (v_isShared_981_ == 0)
{
lean_ctor_set(v___x_980_, 2, v___x_982_);
lean_ctor_set(v___x_980_, 1, v___x_954_);
lean_ctor_set(v___x_980_, 0, v_data_947_);
v___x_984_ = v___x_980_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_data_947_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v___x_954_);
lean_ctor_set(v_reuseFailAlloc_990_, 2, v___x_982_);
v___x_984_ = v_reuseFailAlloc_990_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
lean_object* v___x_985_; lean_object* v_str_986_; lean_object* v_startInclusive_987_; lean_object* v_endExclusive_988_; lean_object* v___x_989_; 
v___x_985_ = l_String_Slice_trimAscii(v___x_984_);
v_str_986_ = lean_ctor_get(v___x_985_, 0);
lean_inc_ref(v_str_986_);
v_startInclusive_987_ = lean_ctor_get(v___x_985_, 1);
lean_inc(v_startInclusive_987_);
v_endExclusive_988_ = lean_ctor_get(v___x_985_, 2);
lean_inc(v_endExclusive_988_);
lean_dec_ref(v___x_985_);
v___x_989_ = lean_string_utf8_extract_fast(v_str_986_, v_startInclusive_987_, v_endExclusive_988_);
lean_dec(v_endExclusive_988_);
lean_dec(v_startInclusive_987_);
lean_dec_ref(v_str_986_);
v___y_949_ = v___x_989_;
goto v___jp_948_;
}
}
}
v___jp_948_:
{
uint8_t v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_950_ = l_Lake_LogLevel_ofMessageSeverity(v_severity_945_);
v___x_951_ = lean_box(0);
v___x_952_ = l_Lean_mkErrorStringWithPos(v_fileName_943_, v_pos_944_, v___y_949_, v___x_951_, v___x_951_, v___x_951_);
lean_dec_ref(v___y_949_);
v___x_953_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_953_, 0, v___x_952_);
lean_ctor_set_uint8(v___x_953_, sizeof(void*)*1, v___x_950_);
return v___x_953_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_ofMessage(lean_object* v_msg_995_){
_start:
{
lean_object* v_fileName_997_; lean_object* v_pos_998_; uint8_t v_severity_999_; lean_object* v_caption_1000_; lean_object* v_data_1001_; lean_object* v___x_1002_; lean_object* v___y_1004_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v_startInclusive_1013_; lean_object* v_endExclusive_1014_; lean_object* v___x_1015_; uint8_t v___x_1016_; 
v_fileName_997_ = lean_ctor_get(v_msg_995_, 0);
lean_inc_ref(v_fileName_997_);
v_pos_998_ = lean_ctor_get(v_msg_995_, 1);
lean_inc_ref(v_pos_998_);
v_severity_999_ = lean_ctor_get_uint8(v_msg_995_, sizeof(void*)*5 + 1);
v_caption_1000_ = lean_ctor_get(v_msg_995_, 3);
lean_inc_ref(v_caption_1000_);
v_data_1001_ = lean_ctor_get(v_msg_995_, 4);
lean_inc(v_data_1001_);
lean_dec_ref(v_msg_995_);
v___x_1002_ = l_Lean_MessageData_toString(v_data_1001_);
v___x_1009_ = lean_unsigned_to_nat(0u);
v___x_1010_ = lean_string_utf8_byte_size(v_caption_1000_);
v___x_1011_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1011_, 0, v_caption_1000_);
lean_ctor_set(v___x_1011_, 1, v___x_1009_);
lean_ctor_set(v___x_1011_, 2, v___x_1010_);
v___x_1012_ = l_String_Slice_trimAscii(v___x_1011_);
v_startInclusive_1013_ = lean_ctor_get(v___x_1012_, 1);
lean_inc(v_startInclusive_1013_);
v_endExclusive_1014_ = lean_ctor_get(v___x_1012_, 2);
lean_inc(v_endExclusive_1014_);
v___x_1015_ = lean_nat_sub(v_endExclusive_1014_, v_startInclusive_1013_);
lean_dec(v_startInclusive_1013_);
lean_dec(v_endExclusive_1014_);
v___x_1016_ = lean_nat_dec_eq(v___x_1015_, v___x_1009_);
lean_dec(v___x_1015_);
if (v___x_1016_ == 0)
{
lean_object* v___x_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1030_; 
v___x_1017_ = l_String_Slice_toString(v___x_1012_);
v_isSharedCheck_1030_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1030_ == 0)
{
lean_object* v_unused_1031_; lean_object* v_unused_1032_; lean_object* v_unused_1033_; 
v_unused_1031_ = lean_ctor_get(v___x_1012_, 2);
lean_dec(v_unused_1031_);
v_unused_1032_ = lean_ctor_get(v___x_1012_, 1);
lean_dec(v_unused_1032_);
v_unused_1033_ = lean_ctor_get(v___x_1012_, 0);
lean_dec(v_unused_1033_);
v___x_1019_ = v___x_1012_;
v_isShared_1020_ = v_isSharedCheck_1030_;
goto v_resetjp_1018_;
}
else
{
lean_dec(v___x_1012_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1030_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1025_; 
v___x_1021_ = ((lean_object*)(l_Lake_LogEntry_ofSerialMessage___closed__0));
v___x_1022_ = lean_string_append(v___x_1017_, v___x_1021_);
v___x_1023_ = lean_string_utf8_byte_size(v___x_1002_);
if (v_isShared_1020_ == 0)
{
lean_ctor_set(v___x_1019_, 2, v___x_1023_);
lean_ctor_set(v___x_1019_, 1, v___x_1009_);
lean_ctor_set(v___x_1019_, 0, v___x_1002_);
v___x_1025_ = v___x_1019_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v___x_1002_);
lean_ctor_set(v_reuseFailAlloc_1029_, 1, v___x_1009_);
lean_ctor_set(v_reuseFailAlloc_1029_, 2, v___x_1023_);
v___x_1025_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1026_ = l_String_Slice_trimAscii(v___x_1025_);
v___x_1027_ = l_String_Slice_toString(v___x_1026_);
lean_dec_ref(v___x_1026_);
v___x_1028_ = lean_string_append(v___x_1022_, v___x_1027_);
lean_dec_ref(v___x_1027_);
v___y_1004_ = v___x_1028_;
goto v___jp_1003_;
}
}
}
else
{
lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1046_; 
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1046_ == 0)
{
lean_object* v_unused_1047_; lean_object* v_unused_1048_; lean_object* v_unused_1049_; 
v_unused_1047_ = lean_ctor_get(v___x_1012_, 2);
lean_dec(v_unused_1047_);
v_unused_1048_ = lean_ctor_get(v___x_1012_, 1);
lean_dec(v_unused_1048_);
v_unused_1049_ = lean_ctor_get(v___x_1012_, 0);
lean_dec(v_unused_1049_);
v___x_1035_ = v___x_1012_;
v_isShared_1036_ = v_isSharedCheck_1046_;
goto v_resetjp_1034_;
}
else
{
lean_dec(v___x_1012_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1046_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1037_; lean_object* v___x_1039_; 
v___x_1037_ = lean_string_utf8_byte_size(v___x_1002_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 2, v___x_1037_);
lean_ctor_set(v___x_1035_, 1, v___x_1009_);
lean_ctor_set(v___x_1035_, 0, v___x_1002_);
v___x_1039_ = v___x_1035_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v___x_1002_);
lean_ctor_set(v_reuseFailAlloc_1045_, 1, v___x_1009_);
lean_ctor_set(v_reuseFailAlloc_1045_, 2, v___x_1037_);
v___x_1039_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
lean_object* v___x_1040_; lean_object* v_str_1041_; lean_object* v_startInclusive_1042_; lean_object* v_endExclusive_1043_; lean_object* v___x_1044_; 
v___x_1040_ = l_String_Slice_trimAscii(v___x_1039_);
v_str_1041_ = lean_ctor_get(v___x_1040_, 0);
lean_inc_ref(v_str_1041_);
v_startInclusive_1042_ = lean_ctor_get(v___x_1040_, 1);
lean_inc(v_startInclusive_1042_);
v_endExclusive_1043_ = lean_ctor_get(v___x_1040_, 2);
lean_inc(v_endExclusive_1043_);
lean_dec_ref(v___x_1040_);
v___x_1044_ = lean_string_utf8_extract_fast(v_str_1041_, v_startInclusive_1042_, v_endExclusive_1043_);
lean_dec(v_endExclusive_1043_);
lean_dec(v_startInclusive_1042_);
lean_dec_ref(v_str_1041_);
v___y_1004_ = v___x_1044_;
goto v___jp_1003_;
}
}
}
v___jp_1003_:
{
uint8_t v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1005_ = l_Lake_LogLevel_ofMessageSeverity(v_severity_999_);
v___x_1006_ = lean_box(0);
v___x_1007_ = l_Lean_mkErrorStringWithPos(v_fileName_997_, v_pos_998_, v___y_1004_, v___x_1006_, v___x_1006_, v___x_1006_);
lean_dec_ref(v___y_1004_);
v___x_1008_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
lean_ctor_set_uint8(v___x_1008_, sizeof(void*)*1, v___x_1005_);
return v___x_1008_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_ofMessage___boxed(lean_object* v_msg_1050_, lean_object* v_a_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l_Lake_LogEntry_ofMessage(v_msg_1050_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_Lake_logVerbose___redArg(lean_object* v_inst_1053_, lean_object* v_message_1054_){
_start:
{
uint8_t v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1055_ = 0;
v___x_1056_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1056_, 0, v_message_1054_);
lean_ctor_set_uint8(v___x_1056_, sizeof(void*)*1, v___x_1055_);
v___x_1057_ = lean_apply_1(v_inst_1053_, v___x_1056_);
return v___x_1057_;
}
}
LEAN_EXPORT lean_object* l_Lake_logVerbose(lean_object* v_m_1058_, lean_object* v_inst_1059_, lean_object* v_inst_1060_, lean_object* v_message_1061_){
_start:
{
uint8_t v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1062_ = 0;
v___x_1063_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1063_, 0, v_message_1061_);
lean_ctor_set_uint8(v___x_1063_, sizeof(void*)*1, v___x_1062_);
v___x_1064_ = lean_apply_1(v_inst_1060_, v___x_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Lake_logVerbose___boxed(lean_object* v_m_1065_, lean_object* v_inst_1066_, lean_object* v_inst_1067_, lean_object* v_message_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l_Lake_logVerbose(v_m_1065_, v_inst_1066_, v_inst_1067_, v_message_1068_);
lean_dec_ref(v_inst_1066_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l_Lake_logInfo___redArg(lean_object* v_inst_1070_, lean_object* v_message_1071_){
_start:
{
uint8_t v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1072_ = 1;
v___x_1073_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1073_, 0, v_message_1071_);
lean_ctor_set_uint8(v___x_1073_, sizeof(void*)*1, v___x_1072_);
v___x_1074_ = lean_apply_1(v_inst_1070_, v___x_1073_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l_Lake_logInfo(lean_object* v_m_1075_, lean_object* v_inst_1076_, lean_object* v_inst_1077_, lean_object* v_message_1078_){
_start:
{
uint8_t v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1079_ = 1;
v___x_1080_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1080_, 0, v_message_1078_);
lean_ctor_set_uint8(v___x_1080_, sizeof(void*)*1, v___x_1079_);
v___x_1081_ = lean_apply_1(v_inst_1077_, v___x_1080_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Lake_logInfo___boxed(lean_object* v_m_1082_, lean_object* v_inst_1083_, lean_object* v_inst_1084_, lean_object* v_message_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Lake_logInfo(v_m_1082_, v_inst_1083_, v_inst_1084_, v_message_1085_);
lean_dec_ref(v_inst_1083_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lake_logWarning___redArg(lean_object* v_inst_1087_, lean_object* v_message_1088_){
_start:
{
uint8_t v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1089_ = 2;
v___x_1090_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1090_, 0, v_message_1088_);
lean_ctor_set_uint8(v___x_1090_, sizeof(void*)*1, v___x_1089_);
v___x_1091_ = lean_apply_1(v_inst_1087_, v___x_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_Lake_logWarning(lean_object* v_m_1092_, lean_object* v_inst_1093_, lean_object* v_message_1094_){
_start:
{
uint8_t v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1095_ = 2;
v___x_1096_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1096_, 0, v_message_1094_);
lean_ctor_set_uint8(v___x_1096_, sizeof(void*)*1, v___x_1095_);
v___x_1097_ = lean_apply_1(v_inst_1093_, v___x_1096_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l_Lake_logError___redArg(lean_object* v_inst_1098_, lean_object* v_message_1099_){
_start:
{
uint8_t v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1100_ = 3;
v___x_1101_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1101_, 0, v_message_1099_);
lean_ctor_set_uint8(v___x_1101_, sizeof(void*)*1, v___x_1100_);
v___x_1102_ = lean_apply_1(v_inst_1098_, v___x_1101_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_Lake_logError(lean_object* v_m_1103_, lean_object* v_inst_1104_, lean_object* v_message_1105_){
_start:
{
uint8_t v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1106_ = 3;
v___x_1107_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1107_, 0, v_message_1105_);
lean_ctor_set_uint8(v___x_1107_, sizeof(void*)*1, v___x_1106_);
v___x_1108_ = lean_apply_1(v_inst_1104_, v___x_1107_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l_Lake_logSerialMessage___redArg(lean_object* v_msg_1109_, lean_object* v_inst_1110_, lean_object* v_inst_1111_){
_start:
{
lean_object* v_toBaseMessage_1112_; lean_object* v_toApplicative_1113_; uint8_t v_isSilent_1114_; 
v_toBaseMessage_1112_ = lean_ctor_get(v_msg_1109_, 0);
v_toApplicative_1113_ = lean_ctor_get(v_inst_1110_, 0);
lean_inc_ref(v_toApplicative_1113_);
lean_dec_ref(v_inst_1110_);
v_isSilent_1114_ = lean_ctor_get_uint8(v_toBaseMessage_1112_, sizeof(void*)*5 + 2);
if (v_isSilent_1114_ == 0)
{
lean_object* v___x_1115_; lean_object* v___x_1116_; 
lean_dec_ref(v_toApplicative_1113_);
v___x_1115_ = l_Lake_LogEntry_ofSerialMessage(v_msg_1109_);
v___x_1116_ = lean_apply_1(v_inst_1111_, v___x_1115_);
return v___x_1116_;
}
else
{
lean_object* v_toPure_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
lean_dec(v_inst_1111_);
lean_dec_ref(v_msg_1109_);
v_toPure_1117_ = lean_ctor_get(v_toApplicative_1113_, 1);
lean_inc(v_toPure_1117_);
lean_dec_ref(v_toApplicative_1113_);
v___x_1118_ = lean_box(0);
v___x_1119_ = lean_apply_2(v_toPure_1117_, lean_box(0), v___x_1118_);
return v___x_1119_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_logSerialMessage(lean_object* v_m_1120_, lean_object* v_msg_1121_, lean_object* v_inst_1122_, lean_object* v_inst_1123_){
_start:
{
lean_object* v_toBaseMessage_1124_; lean_object* v_toApplicative_1125_; uint8_t v_isSilent_1126_; 
v_toBaseMessage_1124_ = lean_ctor_get(v_msg_1121_, 0);
v_toApplicative_1125_ = lean_ctor_get(v_inst_1122_, 0);
lean_inc_ref(v_toApplicative_1125_);
lean_dec_ref(v_inst_1122_);
v_isSilent_1126_ = lean_ctor_get_uint8(v_toBaseMessage_1124_, sizeof(void*)*5 + 2);
if (v_isSilent_1126_ == 0)
{
lean_object* v___x_1127_; lean_object* v___x_1128_; 
lean_dec_ref(v_toApplicative_1125_);
v___x_1127_ = l_Lake_LogEntry_ofSerialMessage(v_msg_1121_);
v___x_1128_ = lean_apply_1(v_inst_1123_, v___x_1127_);
return v___x_1128_;
}
else
{
lean_object* v_toPure_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
lean_dec(v_inst_1123_);
lean_dec_ref(v_msg_1121_);
v_toPure_1129_ = lean_ctor_get(v_toApplicative_1125_, 1);
lean_inc(v_toPure_1129_);
lean_dec_ref(v_toApplicative_1125_);
v___x_1130_ = lean_box(0);
v___x_1131_ = lean_apply_2(v_toPure_1129_, lean_box(0), v___x_1130_);
return v___x_1131_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_logMessage___redArg___lam__0(lean_object* v_inst_1132_, lean_object* v_____do__lift_1133_){
_start:
{
lean_object* v___x_1134_; 
v___x_1134_ = lean_apply_1(v_inst_1132_, v_____do__lift_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Lake_logMessage___redArg(lean_object* v_msg_1135_, lean_object* v_inst_1136_, lean_object* v_inst_1137_, lean_object* v_inst_1138_){
_start:
{
uint8_t v_isSilent_1139_; 
v_isSilent_1139_ = lean_ctor_get_uint8(v_msg_1135_, sizeof(void*)*5 + 2);
if (v_isSilent_1139_ == 0)
{
lean_object* v_toBind_1140_; lean_object* v___f_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
v_toBind_1140_ = lean_ctor_get(v_inst_1136_, 1);
lean_inc(v_toBind_1140_);
lean_dec_ref(v_inst_1136_);
v___f_1141_ = lean_alloc_closure((void*)(l_Lake_logMessage___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1141_, 0, v_inst_1137_);
v___x_1142_ = lean_alloc_closure((void*)(l_Lake_LogEntry_ofMessage___boxed), 2, 1);
lean_closure_set(v___x_1142_, 0, v_msg_1135_);
v___x_1143_ = lean_apply_2(v_inst_1138_, lean_box(0), v___x_1142_);
v___x_1144_ = lean_apply_4(v_toBind_1140_, lean_box(0), lean_box(0), v___x_1143_, v___f_1141_);
return v___x_1144_;
}
else
{
lean_object* v_toApplicative_1145_; lean_object* v_toPure_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v_toApplicative_1145_ = lean_ctor_get(v_inst_1136_, 0);
lean_inc_ref(v_toApplicative_1145_);
lean_dec(v_inst_1138_);
lean_dec(v_inst_1137_);
lean_dec_ref(v_inst_1136_);
lean_dec_ref(v_msg_1135_);
v_toPure_1146_ = lean_ctor_get(v_toApplicative_1145_, 1);
lean_inc(v_toPure_1146_);
lean_dec_ref(v_toApplicative_1145_);
v___x_1147_ = lean_box(0);
v___x_1148_ = lean_apply_2(v_toPure_1146_, lean_box(0), v___x_1147_);
return v___x_1148_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_logMessage(lean_object* v_m_1149_, lean_object* v_msg_1150_, lean_object* v_inst_1151_, lean_object* v_inst_1152_, lean_object* v_inst_1153_){
_start:
{
uint8_t v_isSilent_1154_; 
v_isSilent_1154_ = lean_ctor_get_uint8(v_msg_1150_, sizeof(void*)*5 + 2);
if (v_isSilent_1154_ == 0)
{
lean_object* v_toBind_1155_; lean_object* v___f_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v_toBind_1155_ = lean_ctor_get(v_inst_1151_, 1);
lean_inc(v_toBind_1155_);
lean_dec_ref(v_inst_1151_);
v___f_1156_ = lean_alloc_closure((void*)(l_Lake_logMessage___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1156_, 0, v_inst_1152_);
v___x_1157_ = lean_alloc_closure((void*)(l_Lake_LogEntry_ofMessage___boxed), 2, 1);
lean_closure_set(v___x_1157_, 0, v_msg_1150_);
v___x_1158_ = lean_apply_2(v_inst_1153_, lean_box(0), v___x_1157_);
v___x_1159_ = lean_apply_4(v_toBind_1155_, lean_box(0), lean_box(0), v___x_1158_, v___f_1156_);
return v___x_1159_;
}
else
{
lean_object* v_toApplicative_1160_; lean_object* v_toPure_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
v_toApplicative_1160_ = lean_ctor_get(v_inst_1151_, 0);
lean_inc_ref(v_toApplicative_1160_);
lean_dec(v_inst_1153_);
lean_dec(v_inst_1152_);
lean_dec_ref(v_inst_1151_);
lean_dec_ref(v_msg_1150_);
v_toPure_1161_ = lean_ctor_get(v_toApplicative_1160_, 1);
lean_inc(v_toPure_1161_);
lean_dec_ref(v_toApplicative_1160_);
v___x_1162_ = lean_box(0);
v___x_1163_ = lean_apply_2(v_toPure_1161_, lean_box(0), v___x_1162_);
return v___x_1163_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_logToStream(lean_object* v_e_1164_, lean_object* v_out_1165_, uint8_t v_minLv_1166_, uint8_t v_useAnsi_1167_){
_start:
{
uint8_t v_level_1169_; uint8_t v___x_1170_; 
v_level_1169_ = lean_ctor_get_uint8(v_e_1164_, sizeof(void*)*1);
v___x_1170_ = l_Lake_instOrdLogLevel_ord(v_minLv_1166_, v_level_1169_);
if (v___x_1170_ == 2)
{
lean_object* v___x_1171_; 
lean_dec_ref(v_out_1165_);
v___x_1171_ = lean_box(0);
return v___x_1171_;
}
else
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1172_ = l_Lake_LogEntry_toString(v_e_1164_, v_useAnsi_1167_);
v___x_1173_ = l_IO_FS_Stream_putStrLn(v_out_1165_, v___x_1172_);
if (lean_obj_tag(v___x_1173_) == 0)
{
lean_object* v_a_1174_; 
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
lean_inc(v_a_1174_);
lean_dec_ref_known(v___x_1173_, 1);
return v_a_1174_;
}
else
{
lean_object* v___x_1175_; 
lean_dec_ref_known(v___x_1173_, 1);
v___x_1175_ = lean_box(0);
return v___x_1175_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_logToStream___boxed(lean_object* v_e_1176_, lean_object* v_out_1177_, lean_object* v_minLv_1178_, lean_object* v_useAnsi_1179_, lean_object* v_a_1180_){
_start:
{
uint8_t v_minLv_boxed_1181_; uint8_t v_useAnsi_boxed_1182_; lean_object* v_res_1183_; 
v_minLv_boxed_1181_ = lean_unbox(v_minLv_1178_);
v_useAnsi_boxed_1182_ = lean_unbox(v_useAnsi_1179_);
v_res_1183_ = l_Lake_logToStream(v_e_1176_, v_out_1177_, v_minLv_boxed_1181_, v_useAnsi_boxed_1182_);
lean_dec_ref(v_e_1176_);
return v_res_1183_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_nop___redArg___lam__0(lean_object* v_inst_1184_, lean_object* v_x_1185_){
_start:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1186_ = lean_box(0);
v___x_1187_ = lean_apply_2(v_inst_1184_, lean_box(0), v___x_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_nop___redArg___lam__0___boxed(lean_object* v_inst_1188_, lean_object* v_x_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_Lake_MonadLog_nop___redArg___lam__0(v_inst_1188_, v_x_1189_);
lean_dec_ref(v_x_1189_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_nop___redArg(lean_object* v_inst_1191_){
_start:
{
lean_object* v___f_1192_; 
v___f_1192_ = lean_alloc_closure((void*)(l_Lake_MonadLog_nop___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1192_, 0, v_inst_1191_);
return v___f_1192_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_nop(lean_object* v_m_1193_, lean_object* v_inst_1194_){
_start:
{
lean_object* v___f_1195_; 
v___f_1195_ = lean_alloc_closure((void*)(l_Lake_MonadLog_nop___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1195_, 0, v_inst_1194_);
return v___f_1195_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_instInhabitedOfPure___redArg(lean_object* v_inst_1196_){
_start:
{
lean_object* v___f_1197_; 
v___f_1197_ = lean_alloc_closure((void*)(l_Lake_MonadLog_nop___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1197_, 0, v_inst_1196_);
return v___f_1197_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_instInhabitedOfPure(lean_object* v_m_1198_, lean_object* v_inst_1199_){
_start:
{
lean_object* v___f_1200_; 
v___f_1200_ = lean_alloc_closure((void*)(l_Lake_MonadLog_nop___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1200_, 0, v_inst_1199_);
return v___f_1200_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_lift___redArg___lam__0(lean_object* v_self_1201_, lean_object* v_inst_1202_, lean_object* v_e_1203_){
_start:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1204_ = lean_apply_1(v_self_1201_, v_e_1203_);
v___x_1205_ = lean_apply_2(v_inst_1202_, lean_box(0), v___x_1204_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_lift___redArg(lean_object* v_inst_1206_, lean_object* v_self_1207_){
_start:
{
lean_object* v___f_1208_; 
v___f_1208_ = lean_alloc_closure((void*)(l_Lake_MonadLog_lift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1208_, 0, v_self_1207_);
lean_closure_set(v___f_1208_, 1, v_inst_1206_);
return v___f_1208_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_lift(lean_object* v_m_1209_, lean_object* v_n_1210_, lean_object* v_inst_1211_, lean_object* v_self_1212_){
_start:
{
lean_object* v___f_1213_; 
v___f_1213_ = lean_alloc_closure((void*)(l_Lake_MonadLog_lift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1213_, 0, v_self_1212_);
lean_closure_set(v___f_1213_, 1, v_inst_1211_);
return v___f_1213_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_instOfMonadLift___redArg___lam__0(lean_object* v_methods_1214_, lean_object* v_inst_1215_, lean_object* v_e_1216_){
_start:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1217_ = lean_apply_1(v_methods_1214_, v_e_1216_);
v___x_1218_ = lean_apply_2(v_inst_1215_, lean_box(0), v___x_1217_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_instOfMonadLift___redArg(lean_object* v_inst_1219_, lean_object* v_methods_1220_){
_start:
{
lean_object* v___f_1221_; 
v___f_1221_ = lean_alloc_closure((void*)(l_Lake_MonadLog_instOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1221_, 0, v_methods_1220_);
lean_closure_set(v___f_1221_, 1, v_inst_1219_);
return v___f_1221_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_instOfMonadLift(lean_object* v_m_1222_, lean_object* v_n_1223_, lean_object* v_inst_1224_, lean_object* v_methods_1225_){
_start:
{
lean_object* v___f_1226_; 
v___f_1226_ = lean_alloc_closure((void*)(l_Lake_MonadLog_instOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1226_, 0, v_methods_1225_);
lean_closure_set(v___f_1226_, 1, v_inst_1224_);
return v___f_1226_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___redArg___lam__0(lean_object* v_out_1227_, uint8_t v_minLv_1228_, uint8_t v_useAnsi_1229_, lean_object* v_inst_1230_, lean_object* v_e_1231_){
_start:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1232_ = lean_box(v_minLv_1228_);
v___x_1233_ = lean_box(v_useAnsi_1229_);
v___x_1234_ = lean_alloc_closure((void*)(l_Lake_logToStream___boxed), 5, 4);
lean_closure_set(v___x_1234_, 0, v_e_1231_);
lean_closure_set(v___x_1234_, 1, v_out_1227_);
lean_closure_set(v___x_1234_, 2, v___x_1232_);
lean_closure_set(v___x_1234_, 3, v___x_1233_);
v___x_1235_ = lean_apply_2(v_inst_1230_, lean_box(0), v___x_1234_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___redArg___lam__0___boxed(lean_object* v_out_1236_, lean_object* v_minLv_1237_, lean_object* v_useAnsi_1238_, lean_object* v_inst_1239_, lean_object* v_e_1240_){
_start:
{
uint8_t v_minLv_boxed_1241_; uint8_t v_useAnsi_boxed_1242_; lean_object* v_res_1243_; 
v_minLv_boxed_1241_ = lean_unbox(v_minLv_1237_);
v_useAnsi_boxed_1242_ = lean_unbox(v_useAnsi_1238_);
v_res_1243_ = l_Lake_MonadLog_stream___redArg___lam__0(v_out_1236_, v_minLv_boxed_1241_, v_useAnsi_boxed_1242_, v_inst_1239_, v_e_1240_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___redArg(lean_object* v_inst_1244_, lean_object* v_out_1245_, uint8_t v_minLv_1246_, uint8_t v_useAnsi_1247_){
_start:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___f_1250_; 
v___x_1248_ = lean_box(v_minLv_1246_);
v___x_1249_ = lean_box(v_useAnsi_1247_);
v___f_1250_ = lean_alloc_closure((void*)(l_Lake_MonadLog_stream___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1250_, 0, v_out_1245_);
lean_closure_set(v___f_1250_, 1, v___x_1248_);
lean_closure_set(v___f_1250_, 2, v___x_1249_);
lean_closure_set(v___f_1250_, 3, v_inst_1244_);
return v___f_1250_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___redArg___boxed(lean_object* v_inst_1251_, lean_object* v_out_1252_, lean_object* v_minLv_1253_, lean_object* v_useAnsi_1254_){
_start:
{
uint8_t v_minLv_boxed_1255_; uint8_t v_useAnsi_boxed_1256_; lean_object* v_res_1257_; 
v_minLv_boxed_1255_ = lean_unbox(v_minLv_1253_);
v_useAnsi_boxed_1256_ = lean_unbox(v_useAnsi_1254_);
v_res_1257_ = l_Lake_MonadLog_stream___redArg(v_inst_1251_, v_out_1252_, v_minLv_boxed_1255_, v_useAnsi_boxed_1256_);
return v_res_1257_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream(lean_object* v_m_1258_, lean_object* v_inst_1259_, lean_object* v_out_1260_, uint8_t v_minLv_1261_, uint8_t v_useAnsi_1262_){
_start:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___f_1265_; 
v___x_1263_ = lean_box(v_minLv_1261_);
v___x_1264_ = lean_box(v_useAnsi_1262_);
v___f_1265_ = lean_alloc_closure((void*)(l_Lake_MonadLog_stream___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1265_, 0, v_out_1260_);
lean_closure_set(v___f_1265_, 1, v___x_1263_);
lean_closure_set(v___f_1265_, 2, v___x_1264_);
lean_closure_set(v___f_1265_, 3, v_inst_1259_);
return v___f_1265_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___boxed(lean_object* v_m_1266_, lean_object* v_inst_1267_, lean_object* v_out_1268_, lean_object* v_minLv_1269_, lean_object* v_useAnsi_1270_){
_start:
{
uint8_t v_minLv_boxed_1271_; uint8_t v_useAnsi_boxed_1272_; lean_object* v_res_1273_; 
v_minLv_boxed_1271_ = lean_unbox(v_minLv_1269_);
v_useAnsi_boxed_1272_ = lean_unbox(v_useAnsi_1270_);
v_res_1273_ = l_Lake_MonadLog_stream(v_m_1266_, v_inst_1267_, v_out_1268_, v_minLv_boxed_1271_, v_useAnsi_boxed_1272_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_error___redArg___lam__0(lean_object* v_failure_1274_, lean_object* v_x_1275_){
_start:
{
lean_object* v___x_1276_; 
v___x_1276_ = lean_apply_1(v_failure_1274_, lean_box(0));
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_error___redArg(lean_object* v_inst_1277_, lean_object* v_inst_1278_, lean_object* v_msg_1279_){
_start:
{
lean_object* v_toApplicative_1280_; lean_object* v_failure_1281_; lean_object* v_toSeqRight_1282_; lean_object* v___f_1283_; uint8_t v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v_toApplicative_1280_ = lean_ctor_get(v_inst_1277_, 0);
lean_inc_ref(v_toApplicative_1280_);
v_failure_1281_ = lean_ctor_get(v_inst_1277_, 1);
lean_inc(v_failure_1281_);
lean_dec_ref(v_inst_1277_);
v_toSeqRight_1282_ = lean_ctor_get(v_toApplicative_1280_, 4);
lean_inc(v_toSeqRight_1282_);
lean_dec_ref(v_toApplicative_1280_);
v___f_1283_ = lean_alloc_closure((void*)(l_Lake_MonadLog_error___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1283_, 0, v_failure_1281_);
v___x_1284_ = 3;
v___x_1285_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1285_, 0, v_msg_1279_);
lean_ctor_set_uint8(v___x_1285_, sizeof(void*)*1, v___x_1284_);
v___x_1286_ = lean_apply_1(v_inst_1278_, v___x_1285_);
v___x_1287_ = lean_apply_4(v_toSeqRight_1282_, lean_box(0), lean_box(0), v___x_1286_, v___f_1283_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_error(lean_object* v_m_1288_, lean_object* v_00_u03b1_1289_, lean_object* v_inst_1290_, lean_object* v_inst_1291_, lean_object* v_msg_1292_){
_start:
{
lean_object* v_toApplicative_1293_; lean_object* v_failure_1294_; lean_object* v_toSeqRight_1295_; lean_object* v___f_1296_; uint8_t v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; 
v_toApplicative_1293_ = lean_ctor_get(v_inst_1290_, 0);
lean_inc_ref(v_toApplicative_1293_);
v_failure_1294_ = lean_ctor_get(v_inst_1290_, 1);
lean_inc(v_failure_1294_);
lean_dec_ref(v_inst_1290_);
v_toSeqRight_1295_ = lean_ctor_get(v_toApplicative_1293_, 4);
lean_inc(v_toSeqRight_1295_);
lean_dec_ref(v_toApplicative_1293_);
v___f_1296_ = lean_alloc_closure((void*)(l_Lake_MonadLog_error___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1296_, 0, v_failure_1294_);
v___x_1297_ = 3;
v___x_1298_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1298_, 0, v_msg_1292_);
lean_ctor_set_uint8(v___x_1298_, sizeof(void*)*1, v___x_1297_);
v___x_1299_ = lean_apply_1(v_inst_1291_, v___x_1298_);
v___x_1300_ = lean_apply_4(v_toSeqRight_1295_, lean_box(0), lean_box(0), v___x_1299_, v___f_1296_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_logEntry(lean_object* v_self_1301_, lean_object* v_e_1302_, uint8_t v_minLv_1303_, uint8_t v_ansiMode_1304_){
_start:
{
lean_object* v___x_1306_; uint8_t v___x_1307_; lean_object* v___x_1308_; 
v___x_1306_ = l_Lake_OutStream_get(v_self_1301_);
lean_inc_ref(v___x_1306_);
v___x_1307_ = l_Lake_AnsiMode_isEnabled(v___x_1306_, v_ansiMode_1304_);
v___x_1308_ = l_Lake_logToStream(v_e_1302_, v___x_1306_, v_minLv_1303_, v___x_1307_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_logEntry___boxed(lean_object* v_self_1309_, lean_object* v_e_1310_, lean_object* v_minLv_1311_, lean_object* v_ansiMode_1312_, lean_object* v_a_1313_){
_start:
{
uint8_t v_minLv_boxed_1314_; uint8_t v_ansiMode_boxed_1315_; lean_object* v_res_1316_; 
v_minLv_boxed_1314_ = lean_unbox(v_minLv_1311_);
v_ansiMode_boxed_1315_ = lean_unbox(v_ansiMode_1312_);
v_res_1316_ = l_Lake_OutStream_logEntry(v_self_1309_, v_e_1310_, v_minLv_boxed_1314_, v_ansiMode_boxed_1315_);
lean_dec_ref(v_e_1310_);
lean_dec(v_self_1309_);
return v_res_1316_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___redArg___lam__0(lean_object* v_out_1317_, uint8_t v_minLv_1318_, uint8_t v_ansiMode_1319_, lean_object* v_inst_1320_, lean_object* v_e_1321_){
_start:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
v___x_1322_ = lean_box(v_minLv_1318_);
v___x_1323_ = lean_box(v_ansiMode_1319_);
v___x_1324_ = lean_alloc_closure((void*)(l_Lake_OutStream_logEntry___boxed), 5, 4);
lean_closure_set(v___x_1324_, 0, v_out_1317_);
lean_closure_set(v___x_1324_, 1, v_e_1321_);
lean_closure_set(v___x_1324_, 2, v___x_1322_);
lean_closure_set(v___x_1324_, 3, v___x_1323_);
v___x_1325_ = lean_apply_2(v_inst_1320_, lean_box(0), v___x_1324_);
return v___x_1325_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___redArg___lam__0___boxed(lean_object* v_out_1326_, lean_object* v_minLv_1327_, lean_object* v_ansiMode_1328_, lean_object* v_inst_1329_, lean_object* v_e_1330_){
_start:
{
uint8_t v_minLv_boxed_1331_; uint8_t v_ansiMode_boxed_1332_; lean_object* v_res_1333_; 
v_minLv_boxed_1331_ = lean_unbox(v_minLv_1327_);
v_ansiMode_boxed_1332_ = lean_unbox(v_ansiMode_1328_);
v_res_1333_ = l_Lake_OutStream_logger___redArg___lam__0(v_out_1326_, v_minLv_boxed_1331_, v_ansiMode_boxed_1332_, v_inst_1329_, v_e_1330_);
return v_res_1333_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___redArg(lean_object* v_inst_1334_, lean_object* v_out_1335_, uint8_t v_minLv_1336_, uint8_t v_ansiMode_1337_){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___f_1340_; 
v___x_1338_ = lean_box(v_minLv_1336_);
v___x_1339_ = lean_box(v_ansiMode_1337_);
v___f_1340_ = lean_alloc_closure((void*)(l_Lake_OutStream_logger___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1340_, 0, v_out_1335_);
lean_closure_set(v___f_1340_, 1, v___x_1338_);
lean_closure_set(v___f_1340_, 2, v___x_1339_);
lean_closure_set(v___f_1340_, 3, v_inst_1334_);
return v___f_1340_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___redArg___boxed(lean_object* v_inst_1341_, lean_object* v_out_1342_, lean_object* v_minLv_1343_, lean_object* v_ansiMode_1344_){
_start:
{
uint8_t v_minLv_boxed_1345_; uint8_t v_ansiMode_boxed_1346_; lean_object* v_res_1347_; 
v_minLv_boxed_1345_ = lean_unbox(v_minLv_1343_);
v_ansiMode_boxed_1346_ = lean_unbox(v_ansiMode_1344_);
v_res_1347_ = l_Lake_OutStream_logger___redArg(v_inst_1341_, v_out_1342_, v_minLv_boxed_1345_, v_ansiMode_boxed_1346_);
return v_res_1347_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_logger(lean_object* v_m_1348_, lean_object* v_inst_1349_, lean_object* v_out_1350_, uint8_t v_minLv_1351_, uint8_t v_ansiMode_1352_){
_start:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___f_1355_; 
v___x_1353_ = lean_box(v_minLv_1351_);
v___x_1354_ = lean_box(v_ansiMode_1352_);
v___f_1355_ = lean_alloc_closure((void*)(l_Lake_OutStream_logger___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1355_, 0, v_out_1350_);
lean_closure_set(v___f_1355_, 1, v___x_1353_);
lean_closure_set(v___f_1355_, 2, v___x_1354_);
lean_closure_set(v___f_1355_, 3, v_inst_1349_);
return v___f_1355_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___boxed(lean_object* v_m_1356_, lean_object* v_inst_1357_, lean_object* v_out_1358_, lean_object* v_minLv_1359_, lean_object* v_ansiMode_1360_){
_start:
{
uint8_t v_minLv_boxed_1361_; uint8_t v_ansiMode_boxed_1362_; lean_object* v_res_1363_; 
v_minLv_boxed_1361_ = lean_unbox(v_minLv_1359_);
v_ansiMode_boxed_1362_ = lean_unbox(v_ansiMode_1360_);
v_res_1363_ = l_Lake_OutStream_logger(v_m_1356_, v_inst_1357_, v_out_1358_, v_minLv_boxed_1361_, v_ansiMode_boxed_1362_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___redArg___lam__0(lean_object* v___x_1364_, uint8_t v_minLv_1365_, uint8_t v_ansiMode_1366_, lean_object* v_inst_1367_, lean_object* v_e_1368_){
_start:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1369_ = lean_box(v_minLv_1365_);
v___x_1370_ = lean_box(v_ansiMode_1366_);
v___x_1371_ = lean_alloc_closure((void*)(l_Lake_OutStream_logEntry___boxed), 5, 4);
lean_closure_set(v___x_1371_, 0, v___x_1364_);
lean_closure_set(v___x_1371_, 1, v_e_1368_);
lean_closure_set(v___x_1371_, 2, v___x_1369_);
lean_closure_set(v___x_1371_, 3, v___x_1370_);
v___x_1372_ = lean_apply_2(v_inst_1367_, lean_box(0), v___x_1371_);
return v___x_1372_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___redArg___lam__0___boxed(lean_object* v___x_1373_, lean_object* v_minLv_1374_, lean_object* v_ansiMode_1375_, lean_object* v_inst_1376_, lean_object* v_e_1377_){
_start:
{
uint8_t v_minLv_boxed_1378_; uint8_t v_ansiMode_boxed_1379_; lean_object* v_res_1380_; 
v_minLv_boxed_1378_ = lean_unbox(v_minLv_1374_);
v_ansiMode_boxed_1379_ = lean_unbox(v_ansiMode_1375_);
v_res_1380_ = l_Lake_MonadLog_stdout___redArg___lam__0(v___x_1373_, v_minLv_boxed_1378_, v_ansiMode_boxed_1379_, v_inst_1376_, v_e_1377_);
return v_res_1380_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___redArg(lean_object* v_inst_1381_, uint8_t v_minLv_1382_, uint8_t v_ansiMode_1383_){
_start:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___f_1387_; 
v___x_1384_ = lean_box(0);
v___x_1385_ = lean_box(v_minLv_1382_);
v___x_1386_ = lean_box(v_ansiMode_1383_);
v___f_1387_ = lean_alloc_closure((void*)(l_Lake_MonadLog_stdout___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1387_, 0, v___x_1384_);
lean_closure_set(v___f_1387_, 1, v___x_1385_);
lean_closure_set(v___f_1387_, 2, v___x_1386_);
lean_closure_set(v___f_1387_, 3, v_inst_1381_);
return v___f_1387_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___redArg___boxed(lean_object* v_inst_1388_, lean_object* v_minLv_1389_, lean_object* v_ansiMode_1390_){
_start:
{
uint8_t v_minLv_boxed_1391_; uint8_t v_ansiMode_boxed_1392_; lean_object* v_res_1393_; 
v_minLv_boxed_1391_ = lean_unbox(v_minLv_1389_);
v_ansiMode_boxed_1392_ = lean_unbox(v_ansiMode_1390_);
v_res_1393_ = l_Lake_MonadLog_stdout___redArg(v_inst_1388_, v_minLv_boxed_1391_, v_ansiMode_boxed_1392_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout(lean_object* v_m_1394_, lean_object* v_inst_1395_, uint8_t v_minLv_1396_, uint8_t v_ansiMode_1397_){
_start:
{
lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___f_1401_; 
v___x_1398_ = lean_box(0);
v___x_1399_ = lean_box(v_minLv_1396_);
v___x_1400_ = lean_box(v_ansiMode_1397_);
v___f_1401_ = lean_alloc_closure((void*)(l_Lake_MonadLog_stdout___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1401_, 0, v___x_1398_);
lean_closure_set(v___f_1401_, 1, v___x_1399_);
lean_closure_set(v___f_1401_, 2, v___x_1400_);
lean_closure_set(v___f_1401_, 3, v_inst_1395_);
return v___f_1401_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___boxed(lean_object* v_m_1402_, lean_object* v_inst_1403_, lean_object* v_minLv_1404_, lean_object* v_ansiMode_1405_){
_start:
{
uint8_t v_minLv_boxed_1406_; uint8_t v_ansiMode_boxed_1407_; lean_object* v_res_1408_; 
v_minLv_boxed_1406_ = lean_unbox(v_minLv_1404_);
v_ansiMode_boxed_1407_ = lean_unbox(v_ansiMode_1405_);
v_res_1408_ = l_Lake_MonadLog_stdout(v_m_1402_, v_inst_1403_, v_minLv_boxed_1406_, v_ansiMode_boxed_1407_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stderr___redArg(lean_object* v_inst_1409_, uint8_t v_minLv_1410_, uint8_t v_ansiMode_1411_){
_start:
{
lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___f_1415_; 
v___x_1412_ = lean_box(1);
v___x_1413_ = lean_box(v_minLv_1410_);
v___x_1414_ = lean_box(v_ansiMode_1411_);
v___f_1415_ = lean_alloc_closure((void*)(l_Lake_MonadLog_stdout___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1415_, 0, v___x_1412_);
lean_closure_set(v___f_1415_, 1, v___x_1413_);
lean_closure_set(v___f_1415_, 2, v___x_1414_);
lean_closure_set(v___f_1415_, 3, v_inst_1409_);
return v___f_1415_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stderr___redArg___boxed(lean_object* v_inst_1416_, lean_object* v_minLv_1417_, lean_object* v_ansiMode_1418_){
_start:
{
uint8_t v_minLv_boxed_1419_; uint8_t v_ansiMode_boxed_1420_; lean_object* v_res_1421_; 
v_minLv_boxed_1419_ = lean_unbox(v_minLv_1417_);
v_ansiMode_boxed_1420_ = lean_unbox(v_ansiMode_1418_);
v_res_1421_ = l_Lake_MonadLog_stderr___redArg(v_inst_1416_, v_minLv_boxed_1419_, v_ansiMode_boxed_1420_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stderr(lean_object* v_m_1422_, lean_object* v_inst_1423_, uint8_t v_minLv_1424_, uint8_t v_ansiMode_1425_){
_start:
{
lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___f_1429_; 
v___x_1426_ = lean_box(1);
v___x_1427_ = lean_box(v_minLv_1424_);
v___x_1428_ = lean_box(v_ansiMode_1425_);
v___f_1429_ = lean_alloc_closure((void*)(l_Lake_MonadLog_stdout___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1429_, 0, v___x_1426_);
lean_closure_set(v___f_1429_, 1, v___x_1427_);
lean_closure_set(v___f_1429_, 2, v___x_1428_);
lean_closure_set(v___f_1429_, 3, v_inst_1423_);
return v___f_1429_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stderr___boxed(lean_object* v_m_1430_, lean_object* v_inst_1431_, lean_object* v_minLv_1432_, lean_object* v_ansiMode_1433_){
_start:
{
uint8_t v_minLv_boxed_1434_; uint8_t v_ansiMode_boxed_1435_; lean_object* v_res_1436_; 
v_minLv_boxed_1434_ = lean_unbox(v_minLv_1432_);
v_ansiMode_boxed_1435_ = lean_unbox(v_ansiMode_1433_);
v_res_1436_ = l_Lake_MonadLog_stderr(v_m_1430_, v_inst_1431_, v_minLv_boxed_1434_, v_ansiMode_boxed_1435_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___redArg___lam__0(lean_object* v_val_1437_, uint8_t v_minLv_1438_, uint8_t v_val_1439_, lean_object* v_inst_1440_, lean_object* v_e_1441_){
_start:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1442_ = lean_box(v_minLv_1438_);
v___x_1443_ = lean_box(v_val_1439_);
v___x_1444_ = lean_alloc_closure((void*)(l_Lake_logToStream___boxed), 5, 4);
lean_closure_set(v___x_1444_, 0, v_e_1441_);
lean_closure_set(v___x_1444_, 1, v_val_1437_);
lean_closure_set(v___x_1444_, 2, v___x_1442_);
lean_closure_set(v___x_1444_, 3, v___x_1443_);
v___x_1445_ = lean_apply_2(v_inst_1440_, lean_box(0), v___x_1444_);
return v___x_1445_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___redArg___lam__0___boxed(lean_object* v_val_1446_, lean_object* v_minLv_1447_, lean_object* v_val_1448_, lean_object* v_inst_1449_, lean_object* v_e_1450_){
_start:
{
uint8_t v_minLv_boxed_1451_; uint8_t v_val_105__boxed_1452_; lean_object* v_res_1453_; 
v_minLv_boxed_1451_ = lean_unbox(v_minLv_1447_);
v_val_105__boxed_1452_ = lean_unbox(v_val_1448_);
v_res_1453_ = l_Lake_OutStream_getLogger___redArg___lam__0(v_val_1446_, v_minLv_boxed_1451_, v_val_105__boxed_1452_, v_inst_1449_, v_e_1450_);
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___redArg(lean_object* v_inst_1454_, lean_object* v_out_1455_, uint8_t v_minLv_1456_, uint8_t v_ansiMode_1457_){
_start:
{
lean_object* v___x_1459_; uint8_t v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___f_1463_; 
v___x_1459_ = l_Lake_OutStream_get(v_out_1455_);
lean_inc_ref(v___x_1459_);
v___x_1460_ = l_Lake_AnsiMode_isEnabled(v___x_1459_, v_ansiMode_1457_);
v___x_1461_ = lean_box(v_minLv_1456_);
v___x_1462_ = lean_box(v___x_1460_);
v___f_1463_ = lean_alloc_closure((void*)(l_Lake_OutStream_getLogger___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1463_, 0, v___x_1459_);
lean_closure_set(v___f_1463_, 1, v___x_1461_);
lean_closure_set(v___f_1463_, 2, v___x_1462_);
lean_closure_set(v___f_1463_, 3, v_inst_1454_);
return v___f_1463_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___redArg___boxed(lean_object* v_inst_1464_, lean_object* v_out_1465_, lean_object* v_minLv_1466_, lean_object* v_ansiMode_1467_, lean_object* v_a_1468_){
_start:
{
uint8_t v_minLv_boxed_1469_; uint8_t v_ansiMode_boxed_1470_; lean_object* v_res_1471_; 
v_minLv_boxed_1469_ = lean_unbox(v_minLv_1466_);
v_ansiMode_boxed_1470_ = lean_unbox(v_ansiMode_1467_);
v_res_1471_ = l_Lake_OutStream_getLogger___redArg(v_inst_1464_, v_out_1465_, v_minLv_boxed_1469_, v_ansiMode_boxed_1470_);
lean_dec(v_out_1465_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger(lean_object* v_m_1472_, lean_object* v_inst_1473_, lean_object* v_out_1474_, uint8_t v_minLv_1475_, uint8_t v_ansiMode_1476_){
_start:
{
lean_object* v___x_1478_; uint8_t v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___f_1482_; 
v___x_1478_ = l_Lake_OutStream_get(v_out_1474_);
lean_inc_ref(v___x_1478_);
v___x_1479_ = l_Lake_AnsiMode_isEnabled(v___x_1478_, v_ansiMode_1476_);
v___x_1480_ = lean_box(v_minLv_1475_);
v___x_1481_ = lean_box(v___x_1479_);
v___f_1482_ = lean_alloc_closure((void*)(l_Lake_OutStream_getLogger___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1482_, 0, v___x_1478_);
lean_closure_set(v___f_1482_, 1, v___x_1480_);
lean_closure_set(v___f_1482_, 2, v___x_1481_);
lean_closure_set(v___f_1482_, 3, v_inst_1473_);
return v___f_1482_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___boxed(lean_object* v_m_1483_, lean_object* v_inst_1484_, lean_object* v_out_1485_, lean_object* v_minLv_1486_, lean_object* v_ansiMode_1487_, lean_object* v_a_1488_){
_start:
{
uint8_t v_minLv_boxed_1489_; uint8_t v_ansiMode_boxed_1490_; lean_object* v_res_1491_; 
v_minLv_boxed_1489_ = lean_unbox(v_minLv_1486_);
v_ansiMode_boxed_1490_ = lean_unbox(v_ansiMode_1487_);
v_res_1491_ = l_Lake_OutStream_getLogger(v_m_1483_, v_inst_1484_, v_out_1485_, v_minLv_boxed_1489_, v_ansiMode_boxed_1490_);
lean_dec(v_out_1485_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instInhabitedOfPure___redArg___lam__0(lean_object* v_inst_1492_, lean_object* v_inst_1493_, lean_object* v_x_1494_){
_start:
{
lean_object* v___x_1495_; 
v___x_1495_ = lean_apply_2(v_inst_1492_, lean_box(0), v_inst_1493_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instInhabitedOfPure___redArg___lam__0___boxed(lean_object* v_inst_1496_, lean_object* v_inst_1497_, lean_object* v_x_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l_Lake_MonadLogT_instInhabitedOfPure___redArg___lam__0(v_inst_1496_, v_inst_1497_, v_x_1498_);
lean_dec(v_x_1498_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instInhabitedOfPure___redArg(lean_object* v_inst_1500_, lean_object* v_inst_1501_){
_start:
{
lean_object* v___f_1502_; 
v___f_1502_ = lean_alloc_closure((void*)(l_Lake_MonadLogT_instInhabitedOfPure___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1502_, 0, v_inst_1500_);
lean_closure_set(v___f_1502_, 1, v_inst_1501_);
return v___f_1502_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instInhabitedOfPure(lean_object* v_n_1503_, lean_object* v_00_u03b1_1504_, lean_object* v_m_1505_, lean_object* v_inst_1506_, lean_object* v_inst_1507_){
_start:
{
lean_object* v___f_1508_; 
v___f_1508_ = lean_alloc_closure((void*)(l_Lake_MonadLogT_instInhabitedOfPure___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1508_, 0, v_inst_1506_);
lean_closure_set(v___f_1508_, 1, v_inst_1507_);
return v___f_1508_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__0(lean_object* v_e_1509_, lean_object* v_inst_1510_, lean_object* v_a_1511_){
_start:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = lean_apply_1(v_a_1511_, v_e_1509_);
v___x_1513_ = lean_apply_2(v_inst_1510_, lean_box(0), v___x_1512_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__1(lean_object* v_inst_1514_, lean_object* v_inst_1515_, lean_object* v_e_1516_, lean_object* v___y_1517_){
_start:
{
lean_object* v_toApplicative_1518_; lean_object* v_toBind_1519_; lean_object* v_toPure_1520_; lean_object* v___f_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v_toApplicative_1518_ = lean_ctor_get(v_inst_1514_, 0);
lean_inc_ref(v_toApplicative_1518_);
v_toBind_1519_ = lean_ctor_get(v_inst_1514_, 1);
lean_inc(v_toBind_1519_);
lean_dec_ref(v_inst_1514_);
v_toPure_1520_ = lean_ctor_get(v_toApplicative_1518_, 1);
lean_inc(v_toPure_1520_);
lean_dec_ref(v_toApplicative_1518_);
v___f_1521_ = lean_alloc_closure((void*)(l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1521_, 0, v_e_1516_);
lean_closure_set(v___f_1521_, 1, v_inst_1515_);
lean_inc(v___y_1517_);
v___x_1522_ = lean_apply_2(v_toPure_1520_, lean_box(0), v___y_1517_);
v___x_1523_ = lean_apply_4(v_toBind_1519_, lean_box(0), lean_box(0), v___x_1522_, v___f_1521_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__1___boxed(lean_object* v_inst_1524_, lean_object* v_inst_1525_, lean_object* v_e_1526_, lean_object* v___y_1527_){
_start:
{
lean_object* v_res_1528_; 
v_res_1528_ = l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__1(v_inst_1524_, v_inst_1525_, v_e_1526_, v___y_1527_);
lean_dec(v___y_1527_);
return v_res_1528_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg(lean_object* v_inst_1529_, lean_object* v_inst_1530_){
_start:
{
lean_object* v___f_1531_; 
v___f_1531_ = lean_alloc_closure((void*)(l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1531_, 0, v_inst_1529_);
lean_closure_set(v___f_1531_, 1, v_inst_1530_);
return v___f_1531_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT(lean_object* v_n_1532_, lean_object* v_m_1533_, lean_object* v_inst_1534_, lean_object* v_inst_1535_){
_start:
{
lean_object* v___f_1536_; 
v___f_1536_ = lean_alloc_closure((void*)(l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1536_, 0, v_inst_1534_);
lean_closure_set(v___f_1536_, 1, v_inst_1535_);
return v___f_1536_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_adaptMethods___redArg(lean_object* v_f_1537_, lean_object* v_self_1538_, lean_object* v_a_1539_){
_start:
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
lean_inc(v_a_1539_);
v___x_1540_ = lean_apply_1(v_f_1537_, v_a_1539_);
v___x_1541_ = lean_apply_1(v_self_1538_, v___x_1540_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_adaptMethods___redArg___boxed(lean_object* v_f_1542_, lean_object* v_self_1543_, lean_object* v_a_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_Lake_MonadLogT_adaptMethods___redArg(v_f_1542_, v_self_1543_, v_a_1544_);
lean_dec(v_a_1544_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_adaptMethods(lean_object* v_n_1546_, lean_object* v_m_1547_, lean_object* v_m_x27_1548_, lean_object* v_00_u03b1_1549_, lean_object* v_inst_1550_, lean_object* v_f_1551_, lean_object* v_self_1552_, lean_object* v_a_1553_){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; 
lean_inc(v_a_1553_);
v___x_1554_ = lean_apply_1(v_f_1551_, v_a_1553_);
v___x_1555_ = lean_apply_1(v_self_1552_, v___x_1554_);
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_adaptMethods___boxed(lean_object* v_n_1556_, lean_object* v_m_1557_, lean_object* v_m_x27_1558_, lean_object* v_00_u03b1_1559_, lean_object* v_inst_1560_, lean_object* v_f_1561_, lean_object* v_self_1562_, lean_object* v_a_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Lake_MonadLogT_adaptMethods(v_n_1556_, v_m_1557_, v_m_x27_1558_, v_00_u03b1_1559_, v_inst_1560_, v_f_1561_, v_self_1562_, v_a_1563_);
lean_dec(v_a_1563_);
lean_dec_ref(v_inst_1560_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_ignoreLog___redArg(lean_object* v_inst_1565_, lean_object* v_self_1566_){
_start:
{
lean_object* v___f_1567_; lean_object* v___x_1568_; 
v___f_1567_ = lean_alloc_closure((void*)(l_Lake_MonadLog_nop___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1567_, 0, v_inst_1565_);
v___x_1568_ = lean_apply_1(v_self_1566_, v___f_1567_);
return v___x_1568_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_ignoreLog(lean_object* v_m_1569_, lean_object* v_n_1570_, lean_object* v_00_u03b1_1571_, lean_object* v_inst_1572_, lean_object* v_self_1573_){
_start:
{
lean_object* v___f_1574_; lean_object* v___x_1575_; 
v___f_1574_ = lean_alloc_closure((void*)(l_Lake_MonadLog_nop___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1574_, 0, v_inst_1572_);
v___x_1575_ = lean_apply_1(v_self_1573_, v___f_1574_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToJsonLog___lam__0(lean_object* v___x_1580_, lean_object* v_x_1581_){
_start:
{
lean_object* v___x_1582_; 
v___x_1582_ = l_Lean_Array_toJson___redArg(v___x_1580_, v_x_1581_);
return v___x_1582_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToJsonLog___lam__0___boxed(lean_object* v___x_1583_, lean_object* v_x_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l_Lake_instToJsonLog___lam__0(v___x_1583_, v_x_1584_);
lean_dec_ref(v_x_1584_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l_Lake_instFromJsonLog___lam__0(lean_object* v___x_1589_, lean_object* v_x_1590_){
_start:
{
lean_object* v___x_1591_; 
v___x_1591_ = l_Lean_Array_fromJson_x3f___redArg(v___x_1589_, v_x_1590_);
if (lean_obj_tag(v___x_1591_) == 0)
{
lean_object* v_a_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1599_; 
v_a_1592_ = lean_ctor_get(v___x_1591_, 0);
v_isSharedCheck_1599_ = !lean_is_exclusive(v___x_1591_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1594_ = v___x_1591_;
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_a_1592_);
lean_dec(v___x_1591_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1597_; 
if (v_isShared_1595_ == 0)
{
v___x_1597_ = v___x_1594_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v_a_1592_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
return v___x_1597_;
}
}
}
else
{
lean_object* v_a_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1607_; 
v_a_1600_ = lean_ctor_get(v___x_1591_, 0);
v_isSharedCheck_1607_ = !lean_is_exclusive(v___x_1591_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1602_ = v___x_1591_;
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_a_1600_);
lean_dec(v___x_1591_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1605_; 
if (v_isShared_1603_ == 0)
{
v___x_1605_ = v___x_1602_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v_a_1600_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
return v___x_1605_;
}
}
}
}
}
static lean_object* _init_l_Lake_Log_instInhabitedPos_default(void){
_start:
{
lean_object* v___x_1611_; 
v___x_1611_ = lean_unsigned_to_nat(0u);
return v___x_1611_;
}
}
static lean_object* _init_l_Lake_Log_instInhabitedPos(void){
_start:
{
lean_object* v___x_1612_; 
v___x_1612_ = lean_unsigned_to_nat(0u);
return v___x_1612_;
}
}
LEAN_EXPORT uint8_t l_Lake_Log_instDecidableEqPos_decEq(lean_object* v_x_1613_, lean_object* v_x_1614_){
_start:
{
uint8_t v___x_1615_; 
v___x_1615_ = lean_nat_dec_eq(v_x_1613_, v_x_1614_);
return v___x_1615_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_instDecidableEqPos_decEq___boxed(lean_object* v_x_1616_, lean_object* v_x_1617_){
_start:
{
uint8_t v_res_1618_; lean_object* v_r_1619_; 
v_res_1618_ = l_Lake_Log_instDecidableEqPos_decEq(v_x_1616_, v_x_1617_);
lean_dec(v_x_1617_);
lean_dec(v_x_1616_);
v_r_1619_ = lean_box(v_res_1618_);
return v_r_1619_;
}
}
LEAN_EXPORT uint8_t l_Lake_Log_instDecidableEqPos(lean_object* v_x_1620_, lean_object* v_x_1621_){
_start:
{
uint8_t v___x_1622_; 
v___x_1622_ = lean_nat_dec_eq(v_x_1620_, v_x_1621_);
return v___x_1622_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_instDecidableEqPos___boxed(lean_object* v_x_1623_, lean_object* v_x_1624_){
_start:
{
uint8_t v_res_1625_; lean_object* v_r_1626_; 
v_res_1625_ = l_Lake_Log_instDecidableEqPos(v_x_1623_, v_x_1624_);
lean_dec(v_x_1624_);
lean_dec(v_x_1623_);
v_r_1626_ = lean_box(v_res_1625_);
return v_r_1626_;
}
}
static lean_object* _init_l_Lake_instOfNatPos(void){
_start:
{
lean_object* v___x_1627_; 
v___x_1627_ = lean_unsigned_to_nat(0u);
return v___x_1627_;
}
}
LEAN_EXPORT uint8_t l_Lake_instOrdPos___lam__0(lean_object* v_x1_1628_, lean_object* v_x2_1629_){
_start:
{
uint8_t v___x_1630_; 
v___x_1630_ = lean_nat_dec_lt(v_x1_1628_, v_x2_1629_);
if (v___x_1630_ == 0)
{
uint8_t v___x_1631_; 
v___x_1631_ = lean_nat_dec_eq(v_x1_1628_, v_x2_1629_);
if (v___x_1631_ == 0)
{
uint8_t v___x_1632_; 
v___x_1632_ = 2;
return v___x_1632_;
}
else
{
uint8_t v___x_1633_; 
v___x_1633_ = 1;
return v___x_1633_;
}
}
else
{
uint8_t v___x_1634_; 
v___x_1634_ = 0;
return v___x_1634_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instOrdPos___lam__0___boxed(lean_object* v_x1_1635_, lean_object* v_x2_1636_){
_start:
{
uint8_t v_res_1637_; lean_object* v_r_1638_; 
v_res_1637_ = l_Lake_instOrdPos___lam__0(v_x1_1635_, v_x2_1636_);
lean_dec(v_x2_1636_);
lean_dec(v_x1_1635_);
v_r_1638_ = lean_box(v_res_1637_);
return v_r_1638_;
}
}
static lean_object* _init_l_Lake_instLTPos(void){
_start:
{
lean_object* v___x_1641_; 
v___x_1641_ = lean_box(0);
return v___x_1641_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableRelPosLt(lean_object* v_a_1642_, lean_object* v_b_1643_){
_start:
{
uint8_t v___x_1644_; 
v___x_1644_ = lean_nat_dec_lt(v_a_1642_, v_b_1643_);
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableRelPosLt___boxed(lean_object* v_a_1645_, lean_object* v_b_1646_){
_start:
{
uint8_t v_res_1647_; lean_object* v_r_1648_; 
v_res_1647_ = l_Lake_instDecidableRelPosLt(v_a_1645_, v_b_1646_);
lean_dec(v_b_1646_);
lean_dec(v_a_1645_);
v_r_1648_ = lean_box(v_res_1647_);
return v_r_1648_;
}
}
static lean_object* _init_l_Lake_instLEPos(void){
_start:
{
lean_object* v___x_1649_; 
v___x_1649_ = lean_box(0);
return v___x_1649_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableRelPosLe(lean_object* v_a_1650_, lean_object* v_b_1651_){
_start:
{
uint8_t v___x_1652_; 
v___x_1652_ = lean_nat_dec_le(v_a_1650_, v_b_1651_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableRelPosLe___boxed(lean_object* v_a_1653_, lean_object* v_b_1654_){
_start:
{
uint8_t v_res_1655_; lean_object* v_r_1656_; 
v_res_1655_ = l_Lake_instDecidableRelPosLe(v_a_1653_, v_b_1654_);
lean_dec(v_b_1654_);
lean_dec(v_a_1653_);
v_r_1656_ = lean_box(v_res_1655_);
return v_r_1656_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMinPos___lam__0(lean_object* v_x_1657_, lean_object* v_y_1658_){
_start:
{
uint8_t v___x_1659_; 
v___x_1659_ = lean_nat_dec_le(v_x_1657_, v_y_1658_);
if (v___x_1659_ == 0)
{
lean_inc(v_y_1658_);
return v_y_1658_;
}
else
{
lean_inc(v_x_1657_);
return v_x_1657_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMinPos___lam__0___boxed(lean_object* v_x_1660_, lean_object* v_y_1661_){
_start:
{
lean_object* v_res_1662_; 
v_res_1662_ = l_Lake_instMinPos___lam__0(v_x_1660_, v_y_1661_);
lean_dec(v_y_1661_);
lean_dec(v_x_1660_);
return v_res_1662_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMaxPos___lam__0(lean_object* v_x_1665_, lean_object* v_y_1666_){
_start:
{
uint8_t v___x_1667_; 
v___x_1667_ = lean_nat_dec_le(v_x_1665_, v_y_1666_);
if (v___x_1667_ == 0)
{
lean_inc(v_x_1665_);
return v_x_1665_;
}
else
{
lean_inc(v_y_1666_);
return v_y_1666_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMaxPos___lam__0___boxed(lean_object* v_x_1668_, lean_object* v_y_1669_){
_start:
{
lean_object* v_res_1670_; 
v_res_1670_ = l_Lake_instMaxPos___lam__0(v_x_1668_, v_y_1669_);
lean_dec(v_y_1669_);
lean_dec(v_x_1668_);
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_size(lean_object* v_log_1677_){
_start:
{
lean_object* v___x_1678_; 
v___x_1678_ = lean_array_get_size(v_log_1677_);
return v___x_1678_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_size___boxed(lean_object* v_log_1679_){
_start:
{
lean_object* v_res_1680_; 
v_res_1680_ = l_Lake_Log_size(v_log_1679_);
lean_dec_ref(v_log_1679_);
return v_res_1680_;
}
}
LEAN_EXPORT uint8_t l_Lake_Log_isEmpty(lean_object* v_log_1681_){
_start:
{
lean_object* v___x_1682_; lean_object* v___x_1683_; uint8_t v___x_1684_; 
v___x_1682_ = lean_array_get_size(v_log_1681_);
v___x_1683_ = lean_unsigned_to_nat(0u);
v___x_1684_ = lean_nat_dec_eq(v___x_1682_, v___x_1683_);
return v___x_1684_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_isEmpty___boxed(lean_object* v_log_1685_){
_start:
{
uint8_t v_res_1686_; lean_object* v_r_1687_; 
v_res_1686_ = l_Lake_Log_isEmpty(v_log_1685_);
lean_dec_ref(v_log_1685_);
v_r_1687_ = lean_box(v_res_1686_);
return v_r_1687_;
}
}
LEAN_EXPORT uint8_t l_Lake_Log_hasEntries(lean_object* v_log_1688_){
_start:
{
lean_object* v___x_1689_; lean_object* v___x_1690_; uint8_t v___x_1691_; 
v___x_1689_ = lean_array_get_size(v_log_1688_);
v___x_1690_ = lean_unsigned_to_nat(0u);
v___x_1691_ = lean_nat_dec_eq(v___x_1689_, v___x_1690_);
if (v___x_1691_ == 0)
{
uint8_t v___x_1692_; 
v___x_1692_ = 1;
return v___x_1692_;
}
else
{
uint8_t v___x_1693_; 
v___x_1693_ = 0;
return v___x_1693_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Log_hasEntries___boxed(lean_object* v_log_1694_){
_start:
{
uint8_t v_res_1695_; lean_object* v_r_1696_; 
v_res_1695_ = l_Lake_Log_hasEntries(v_log_1694_);
lean_dec_ref(v_log_1694_);
v_r_1696_ = lean_box(v_res_1695_);
return v_r_1696_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_endPos(lean_object* v_log_1697_){
_start:
{
lean_object* v___x_1698_; 
v___x_1698_ = lean_array_get_size(v_log_1697_);
return v___x_1698_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_endPos___boxed(lean_object* v_log_1699_){
_start:
{
lean_object* v_res_1700_; 
v_res_1700_ = l_Lake_Log_endPos(v_log_1699_);
lean_dec_ref(v_log_1699_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_push(lean_object* v_log_1701_, lean_object* v_e_1702_){
_start:
{
lean_object* v___x_1703_; 
v___x_1703_ = lean_array_push(v_log_1701_, v_e_1702_);
return v___x_1703_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_append(lean_object* v_log_1704_, lean_object* v_o_1705_){
_start:
{
lean_object* v___x_1706_; 
v___x_1706_ = l_Array_append___redArg(v_log_1704_, v_o_1705_);
return v___x_1706_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_append___boxed(lean_object* v_log_1707_, lean_object* v_o_1708_){
_start:
{
lean_object* v_res_1709_; 
v_res_1709_ = l_Lake_Log_append(v_log_1707_, v_o_1708_);
lean_dec_ref(v_o_1708_);
return v_res_1709_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_extract(lean_object* v_log_1712_, lean_object* v_start_1713_, lean_object* v_stop_1714_){
_start:
{
lean_object* v___x_1715_; 
v___x_1715_ = l_Array_extract___redArg(v_log_1712_, v_start_1713_, v_stop_1714_);
return v___x_1715_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_extract___boxed(lean_object* v_log_1716_, lean_object* v_start_1717_, lean_object* v_stop_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l_Lake_Log_extract(v_log_1716_, v_start_1717_, v_stop_1718_);
lean_dec_ref(v_log_1716_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_dropFrom(lean_object* v_log_1720_, lean_object* v_pos_1721_){
_start:
{
lean_object* v___x_1722_; 
v___x_1722_ = l_Array_shrink___redArg(v_log_1720_, v_pos_1721_);
return v___x_1722_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_dropFrom___boxed(lean_object* v_log_1723_, lean_object* v_pos_1724_){
_start:
{
lean_object* v_res_1725_; 
v_res_1725_ = l_Lake_Log_dropFrom(v_log_1723_, v_pos_1724_);
lean_dec(v_pos_1724_);
return v_res_1725_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_takeFrom(lean_object* v_log_1726_, lean_object* v_pos_1727_){
_start:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1728_ = lean_array_get_size(v_log_1726_);
v___x_1729_ = l_Array_extract___redArg(v_log_1726_, v_pos_1727_, v___x_1728_);
return v___x_1729_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_takeFrom___boxed(lean_object* v_log_1730_, lean_object* v_pos_1731_){
_start:
{
lean_object* v_res_1732_; 
v_res_1732_ = l_Lake_Log_takeFrom(v_log_1730_, v_pos_1731_);
lean_dec_ref(v_log_1730_);
return v_res_1732_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_split(lean_object* v_log_1733_, lean_object* v_pos_1734_){
_start:
{
lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; 
lean_inc_ref(v_log_1733_);
v___x_1735_ = l_Array_shrink___redArg(v_log_1733_, v_pos_1734_);
v___x_1736_ = lean_array_get_size(v_log_1733_);
v___x_1737_ = l_Array_extract___redArg(v_log_1733_, v_pos_1734_, v___x_1736_);
lean_dec_ref(v_log_1733_);
v___x_1738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1735_);
lean_ctor_set(v___x_1738_, 1, v___x_1737_);
return v___x_1738_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0(lean_object* v_as_1740_, size_t v_i_1741_, size_t v_stop_1742_, lean_object* v_b_1743_){
_start:
{
uint8_t v___x_1744_; 
v___x_1744_ = lean_usize_dec_eq(v_i_1741_, v_stop_1742_);
if (v___x_1744_ == 0)
{
lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; size_t v___x_1750_; size_t v___x_1751_; 
v___x_1745_ = lean_array_uget_borrowed(v_as_1740_, v_i_1741_);
v___x_1746_ = l_Lake_LogEntry_toString(v___x_1745_, v___x_1744_);
v___x_1747_ = lean_string_append(v_b_1743_, v___x_1746_);
lean_dec_ref(v___x_1746_);
v___x_1748_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0___closed__0));
v___x_1749_ = lean_string_append(v___x_1747_, v___x_1748_);
v___x_1750_ = ((size_t)1ULL);
v___x_1751_ = lean_usize_add(v_i_1741_, v___x_1750_);
v_i_1741_ = v___x_1751_;
v_b_1743_ = v___x_1749_;
goto _start;
}
else
{
return v_b_1743_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0___boxed(lean_object* v_as_1753_, lean_object* v_i_1754_, lean_object* v_stop_1755_, lean_object* v_b_1756_){
_start:
{
size_t v_i_boxed_1757_; size_t v_stop_boxed_1758_; lean_object* v_res_1759_; 
v_i_boxed_1757_ = lean_unbox_usize(v_i_1754_);
lean_dec(v_i_1754_);
v_stop_boxed_1758_ = lean_unbox_usize(v_stop_1755_);
lean_dec(v_stop_1755_);
v_res_1759_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0(v_as_1753_, v_i_boxed_1757_, v_stop_boxed_1758_, v_b_1756_);
lean_dec_ref(v_as_1753_);
return v_res_1759_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_toString(lean_object* v_log_1760_){
_start:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; uint8_t v___x_1764_; 
v___x_1761_ = ((lean_object*)(l_Lake_instInhabitedLogEntry_default___closed__0));
v___x_1762_ = lean_unsigned_to_nat(0u);
v___x_1763_ = lean_array_get_size(v_log_1760_);
v___x_1764_ = lean_nat_dec_lt(v___x_1762_, v___x_1763_);
if (v___x_1764_ == 0)
{
return v___x_1761_;
}
else
{
uint8_t v___x_1765_; 
v___x_1765_ = lean_nat_dec_le(v___x_1763_, v___x_1763_);
if (v___x_1765_ == 0)
{
if (v___x_1764_ == 0)
{
return v___x_1761_;
}
else
{
size_t v___x_1766_; size_t v___x_1767_; lean_object* v___x_1768_; 
v___x_1766_ = ((size_t)0ULL);
v___x_1767_ = lean_usize_of_nat(v___x_1763_);
v___x_1768_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0(v_log_1760_, v___x_1766_, v___x_1767_, v___x_1761_);
return v___x_1768_;
}
}
else
{
size_t v___x_1769_; size_t v___x_1770_; lean_object* v___x_1771_; 
v___x_1769_ = ((size_t)0ULL);
v___x_1770_ = lean_usize_of_nat(v___x_1763_);
v___x_1771_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0(v_log_1760_, v___x_1769_, v___x_1770_, v___x_1761_);
return v___x_1771_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Log_toString___boxed(lean_object* v_log_1772_){
_start:
{
lean_object* v_res_1773_; 
v_res_1773_ = l_Lake_Log_toString(v_log_1772_);
lean_dec_ref(v_log_1772_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_replay___redArg___lam__0(lean_object* v_logger_1776_, lean_object* v_x_1777_, lean_object* v___y_1778_){
_start:
{
lean_object* v___x_1779_; 
v___x_1779_ = lean_apply_1(v_logger_1776_, v___y_1778_);
return v___x_1779_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_replay___redArg(lean_object* v_inst_1780_, lean_object* v_logger_1781_, lean_object* v_log_1782_){
_start:
{
lean_object* v_toApplicative_1783_; lean_object* v_toPure_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; uint8_t v___x_1788_; 
v_toApplicative_1783_ = lean_ctor_get(v_inst_1780_, 0);
v_toPure_1784_ = lean_ctor_get(v_toApplicative_1783_, 1);
v___x_1785_ = lean_unsigned_to_nat(0u);
v___x_1786_ = lean_array_get_size(v_log_1782_);
v___x_1787_ = lean_box(0);
v___x_1788_ = lean_nat_dec_lt(v___x_1785_, v___x_1786_);
if (v___x_1788_ == 0)
{
lean_object* v___x_1789_; 
lean_inc(v_toPure_1784_);
lean_dec_ref(v_log_1782_);
lean_dec(v_logger_1781_);
lean_dec_ref(v_inst_1780_);
v___x_1789_ = lean_apply_2(v_toPure_1784_, lean_box(0), v___x_1787_);
return v___x_1789_;
}
else
{
lean_object* v___f_1790_; uint8_t v___x_1791_; 
v___f_1790_ = lean_alloc_closure((void*)(l_Lake_Log_replay___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1790_, 0, v_logger_1781_);
v___x_1791_ = lean_nat_dec_le(v___x_1786_, v___x_1786_);
if (v___x_1791_ == 0)
{
if (v___x_1788_ == 0)
{
lean_object* v___x_1792_; 
lean_inc(v_toPure_1784_);
lean_dec_ref(v___f_1790_);
lean_dec_ref(v_log_1782_);
lean_dec_ref(v_inst_1780_);
v___x_1792_ = lean_apply_2(v_toPure_1784_, lean_box(0), v___x_1787_);
return v___x_1792_;
}
else
{
size_t v___x_1793_; size_t v___x_1794_; lean_object* v___x_1795_; 
v___x_1793_ = ((size_t)0ULL);
v___x_1794_ = lean_usize_of_nat(v___x_1786_);
v___x_1795_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1780_, v___f_1790_, v_log_1782_, v___x_1793_, v___x_1794_, v___x_1787_);
return v___x_1795_;
}
}
else
{
size_t v___x_1796_; size_t v___x_1797_; lean_object* v___x_1798_; 
v___x_1796_ = ((size_t)0ULL);
v___x_1797_ = lean_usize_of_nat(v___x_1786_);
v___x_1798_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1780_, v___f_1790_, v_log_1782_, v___x_1796_, v___x_1797_, v___x_1787_);
return v___x_1798_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Log_replay(lean_object* v_m_1799_, lean_object* v_inst_1800_, lean_object* v_logger_1801_, lean_object* v_log_1802_){
_start:
{
lean_object* v_toApplicative_1803_; lean_object* v_toPure_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; uint8_t v___x_1808_; 
v_toApplicative_1803_ = lean_ctor_get(v_inst_1800_, 0);
v_toPure_1804_ = lean_ctor_get(v_toApplicative_1803_, 1);
v___x_1805_ = lean_unsigned_to_nat(0u);
v___x_1806_ = lean_array_get_size(v_log_1802_);
v___x_1807_ = lean_box(0);
v___x_1808_ = lean_nat_dec_lt(v___x_1805_, v___x_1806_);
if (v___x_1808_ == 0)
{
lean_object* v___x_1809_; 
lean_inc(v_toPure_1804_);
lean_dec_ref(v_log_1802_);
lean_dec(v_logger_1801_);
lean_dec_ref(v_inst_1800_);
v___x_1809_ = lean_apply_2(v_toPure_1804_, lean_box(0), v___x_1807_);
return v___x_1809_;
}
else
{
lean_object* v___f_1810_; uint8_t v___x_1811_; 
v___f_1810_ = lean_alloc_closure((void*)(l_Lake_Log_replay___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1810_, 0, v_logger_1801_);
v___x_1811_ = lean_nat_dec_le(v___x_1806_, v___x_1806_);
if (v___x_1811_ == 0)
{
if (v___x_1808_ == 0)
{
lean_object* v___x_1812_; 
lean_inc(v_toPure_1804_);
lean_dec_ref(v___f_1810_);
lean_dec_ref(v_log_1802_);
lean_dec_ref(v_inst_1800_);
v___x_1812_ = lean_apply_2(v_toPure_1804_, lean_box(0), v___x_1807_);
return v___x_1812_;
}
else
{
size_t v___x_1813_; size_t v___x_1814_; lean_object* v___x_1815_; 
v___x_1813_ = ((size_t)0ULL);
v___x_1814_ = lean_usize_of_nat(v___x_1806_);
v___x_1815_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1800_, v___f_1810_, v_log_1802_, v___x_1813_, v___x_1814_, v___x_1807_);
return v___x_1815_;
}
}
else
{
size_t v___x_1816_; size_t v___x_1817_; lean_object* v___x_1818_; 
v___x_1816_ = ((size_t)0ULL);
v___x_1817_ = lean_usize_of_nat(v___x_1806_);
v___x_1818_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1800_, v___f_1810_, v_log_1802_, v___x_1816_, v___x_1817_, v___x_1807_);
return v___x_1818_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Log_filter___lam__0(lean_object* v_f_1819_, lean_object* v_x1_1820_, lean_object* v_x2_1821_){
_start:
{
lean_object* v___x_1822_; uint8_t v___x_1823_; 
lean_inc_ref(v_x2_1821_);
v___x_1822_ = lean_apply_1(v_f_1819_, v_x2_1821_);
v___x_1823_ = lean_unbox(v___x_1822_);
if (v___x_1823_ == 0)
{
lean_dec_ref(v_x2_1821_);
return v_x1_1820_;
}
else
{
lean_object* v___x_1824_; 
v___x_1824_ = lean_array_push(v_x1_1820_, v_x2_1821_);
return v___x_1824_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Log_filter(lean_object* v_f_1844_, lean_object* v_log_1845_){
_start:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; uint8_t v___x_1850_; 
v___x_1846_ = lean_unsigned_to_nat(0u);
v___x_1847_ = lean_array_get_size(v_log_1845_);
v___x_1848_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_1849_ = ((lean_object*)(l_Lake_Log_filter___closed__9));
v___x_1850_ = lean_nat_dec_lt(v___x_1846_, v___x_1847_);
if (v___x_1850_ == 0)
{
lean_dec_ref(v_log_1845_);
lean_dec_ref(v_f_1844_);
return v___x_1848_;
}
else
{
lean_object* v___f_1851_; uint8_t v___x_1852_; 
v___f_1851_ = lean_alloc_closure((void*)(l_Lake_Log_filter___lam__0), 3, 1);
lean_closure_set(v___f_1851_, 0, v_f_1844_);
v___x_1852_ = lean_nat_dec_le(v___x_1847_, v___x_1847_);
if (v___x_1852_ == 0)
{
if (v___x_1850_ == 0)
{
lean_dec_ref(v___f_1851_);
lean_dec_ref(v_log_1845_);
return v___x_1848_;
}
else
{
size_t v___x_1853_; size_t v___x_1854_; lean_object* v___x_1855_; 
v___x_1853_ = ((size_t)0ULL);
v___x_1854_ = lean_usize_of_nat(v___x_1847_);
v___x_1855_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1849_, v___f_1851_, v_log_1845_, v___x_1853_, v___x_1854_, v___x_1848_);
return v___x_1855_;
}
}
else
{
size_t v___x_1856_; size_t v___x_1857_; lean_object* v___x_1858_; 
v___x_1856_ = ((size_t)0ULL);
v___x_1857_ = lean_usize_of_nat(v___x_1847_);
v___x_1858_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1849_, v___f_1851_, v_log_1845_, v___x_1856_, v___x_1857_, v___x_1848_);
return v___x_1858_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lake_Log_any___lam__0(lean_object* v_f_1859_, lean_object* v_x_1860_){
_start:
{
lean_object* v___x_1861_; uint8_t v___x_1862_; 
v___x_1861_ = lean_apply_1(v_f_1859_, v_x_1860_);
v___x_1862_ = lean_unbox(v___x_1861_);
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_any___lam__0___boxed(lean_object* v_f_1863_, lean_object* v_x_1864_){
_start:
{
uint8_t v_res_1865_; lean_object* v_r_1866_; 
v_res_1865_ = l_Lake_Log_any___lam__0(v_f_1863_, v_x_1864_);
v_r_1866_ = lean_box(v_res_1865_);
return v_r_1866_;
}
}
LEAN_EXPORT uint8_t l_Lake_Log_any(lean_object* v_f_1867_, lean_object* v_log_1868_){
_start:
{
lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; uint8_t v___x_1872_; 
v___x_1869_ = lean_unsigned_to_nat(0u);
v___x_1870_ = lean_array_get_size(v_log_1868_);
v___x_1871_ = ((lean_object*)(l_Lake_Log_filter___closed__9));
v___x_1872_ = lean_nat_dec_lt(v___x_1869_, v___x_1870_);
if (v___x_1872_ == 0)
{
lean_dec_ref(v_log_1868_);
lean_dec_ref(v_f_1867_);
return v___x_1872_;
}
else
{
if (v___x_1872_ == 0)
{
lean_dec_ref(v_log_1868_);
lean_dec_ref(v_f_1867_);
return v___x_1872_;
}
else
{
lean_object* v___f_1873_; size_t v___x_1874_; size_t v___x_1875_; lean_object* v___x_1876_; uint8_t v___x_1877_; 
v___f_1873_ = lean_alloc_closure((void*)(l_Lake_Log_any___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1873_, 0, v_f_1867_);
v___x_1874_ = ((size_t)0ULL);
v___x_1875_ = lean_usize_of_nat(v___x_1870_);
v___x_1876_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_1871_, v___f_1873_, v_log_1868_, v___x_1874_, v___x_1875_);
v___x_1877_ = lean_unbox(v___x_1876_);
lean_dec(v___x_1876_);
return v___x_1877_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Log_any___boxed(lean_object* v_f_1878_, lean_object* v_log_1879_){
_start:
{
uint8_t v_res_1880_; lean_object* v_r_1881_; 
v_res_1880_ = l_Lake_Log_any(v_f_1878_, v_log_1879_);
v_r_1881_ = lean_box(v_res_1880_);
return v_r_1881_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_maxLv_spec__0(lean_object* v_as_1882_, size_t v_i_1883_, size_t v_stop_1884_, uint8_t v_b_1885_){
_start:
{
uint8_t v___y_1887_; uint8_t v___x_1891_; 
v___x_1891_ = lean_usize_dec_eq(v_i_1883_, v_stop_1884_);
if (v___x_1891_ == 0)
{
lean_object* v___x_1892_; uint8_t v_level_1893_; uint8_t v___x_1894_; 
v___x_1892_ = lean_array_uget_borrowed(v_as_1882_, v_i_1883_);
v_level_1893_ = lean_ctor_get_uint8(v___x_1892_, sizeof(void*)*1);
v___x_1894_ = l_Lake_instOrdLogLevel_ord(v_b_1885_, v_level_1893_);
if (v___x_1894_ == 2)
{
if (v___x_1891_ == 0)
{
v___y_1887_ = v_b_1885_;
goto v___jp_1886_;
}
else
{
v___y_1887_ = v_level_1893_;
goto v___jp_1886_;
}
}
else
{
v___y_1887_ = v_level_1893_;
goto v___jp_1886_;
}
}
else
{
return v_b_1885_;
}
v___jp_1886_:
{
size_t v___x_1888_; size_t v___x_1889_; 
v___x_1888_ = ((size_t)1ULL);
v___x_1889_ = lean_usize_add(v_i_1883_, v___x_1888_);
v_i_1883_ = v___x_1889_;
v_b_1885_ = v___y_1887_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_maxLv_spec__0___boxed(lean_object* v_as_1895_, lean_object* v_i_1896_, lean_object* v_stop_1897_, lean_object* v_b_1898_){
_start:
{
size_t v_i_boxed_1899_; size_t v_stop_boxed_1900_; uint8_t v_b_boxed_1901_; uint8_t v_res_1902_; lean_object* v_r_1903_; 
v_i_boxed_1899_ = lean_unbox_usize(v_i_1896_);
lean_dec(v_i_1896_);
v_stop_boxed_1900_ = lean_unbox_usize(v_stop_1897_);
lean_dec(v_stop_1897_);
v_b_boxed_1901_ = lean_unbox(v_b_1898_);
v_res_1902_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_maxLv_spec__0(v_as_1895_, v_i_boxed_1899_, v_stop_boxed_1900_, v_b_boxed_1901_);
lean_dec_ref(v_as_1895_);
v_r_1903_ = lean_box(v_res_1902_);
return v_r_1903_;
}
}
LEAN_EXPORT uint8_t l_Lake_Log_maxLv(lean_object* v_log_1904_){
_start:
{
uint8_t v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; uint8_t v___x_1908_; 
v___x_1905_ = 0;
v___x_1906_ = lean_unsigned_to_nat(0u);
v___x_1907_ = lean_array_get_size(v_log_1904_);
v___x_1908_ = lean_nat_dec_lt(v___x_1906_, v___x_1907_);
if (v___x_1908_ == 0)
{
return v___x_1905_;
}
else
{
uint8_t v___x_1909_; 
v___x_1909_ = lean_nat_dec_le(v___x_1907_, v___x_1907_);
if (v___x_1909_ == 0)
{
if (v___x_1908_ == 0)
{
return v___x_1905_;
}
else
{
size_t v___x_1910_; size_t v___x_1911_; uint8_t v___x_1912_; 
v___x_1910_ = ((size_t)0ULL);
v___x_1911_ = lean_usize_of_nat(v___x_1907_);
v___x_1912_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_maxLv_spec__0(v_log_1904_, v___x_1910_, v___x_1911_, v___x_1905_);
return v___x_1912_;
}
}
else
{
size_t v___x_1913_; size_t v___x_1914_; uint8_t v___x_1915_; 
v___x_1913_ = ((size_t)0ULL);
v___x_1914_ = lean_usize_of_nat(v___x_1907_);
v___x_1915_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_maxLv_spec__0(v_log_1904_, v___x_1913_, v___x_1914_, v___x_1905_);
return v___x_1915_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Log_maxLv___boxed(lean_object* v_log_1916_){
_start:
{
uint8_t v_res_1917_; lean_object* v_r_1918_; 
v_res_1917_ = l_Lake_Log_maxLv(v_log_1916_);
lean_dec_ref(v_log_1916_);
v_r_1918_ = lean_box(v_res_1917_);
return v_r_1918_;
}
}
LEAN_EXPORT lean_object* l_Lake_pushLogEntry___redArg___lam__0(lean_object* v_e_1919_, lean_object* v_s_1920_){
_start:
{
lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; 
v___x_1921_ = lean_box(0);
v___x_1922_ = lean_array_push(v_s_1920_, v_e_1919_);
v___x_1923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1923_, 0, v___x_1921_);
lean_ctor_set(v___x_1923_, 1, v___x_1922_);
return v___x_1923_;
}
}
LEAN_EXPORT lean_object* l_Lake_pushLogEntry___redArg(lean_object* v_inst_1924_, lean_object* v_e_1925_){
_start:
{
lean_object* v_modifyGet_1926_; lean_object* v___f_1927_; lean_object* v___x_1928_; 
v_modifyGet_1926_ = lean_ctor_get(v_inst_1924_, 2);
lean_inc(v_modifyGet_1926_);
lean_dec_ref(v_inst_1924_);
v___f_1927_ = lean_alloc_closure((void*)(l_Lake_pushLogEntry___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1927_, 0, v_e_1925_);
v___x_1928_ = lean_apply_2(v_modifyGet_1926_, lean_box(0), v___f_1927_);
return v___x_1928_;
}
}
LEAN_EXPORT lean_object* l_Lake_pushLogEntry(lean_object* v_m_1929_, lean_object* v_inst_1930_, lean_object* v_e_1931_){
_start:
{
lean_object* v_modifyGet_1932_; lean_object* v___f_1933_; lean_object* v___x_1934_; 
v_modifyGet_1932_ = lean_ctor_get(v_inst_1930_, 2);
lean_inc(v_modifyGet_1932_);
lean_dec_ref(v_inst_1930_);
v___f_1933_ = lean_alloc_closure((void*)(l_Lake_pushLogEntry___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1933_, 0, v_e_1931_);
v___x_1934_ = lean_apply_2(v_modifyGet_1932_, lean_box(0), v___f_1933_);
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_ofMonadState___redArg(lean_object* v_inst_1935_){
_start:
{
lean_object* v___x_1936_; 
v___x_1936_ = lean_alloc_closure((void*)(l_Lake_pushLogEntry), 3, 2);
lean_closure_set(v___x_1936_, 0, lean_box(0));
lean_closure_set(v___x_1936_, 1, v_inst_1935_);
return v___x_1936_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_ofMonadState(lean_object* v_m_1937_, lean_object* v_inst_1938_){
_start:
{
lean_object* v___x_1939_; 
v___x_1939_ = lean_alloc_closure((void*)(l_Lake_pushLogEntry), 3, 2);
lean_closure_set(v___x_1939_, 0, lean_box(0));
lean_closure_set(v___x_1939_, 1, v_inst_1938_);
return v___x_1939_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLog___redArg(lean_object* v_inst_1940_){
_start:
{
lean_object* v_get_1941_; 
v_get_1941_ = lean_ctor_get(v_inst_1940_, 0);
lean_inc(v_get_1941_);
return v_get_1941_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLog___redArg___boxed(lean_object* v_inst_1942_){
_start:
{
lean_object* v_res_1943_; 
v_res_1943_ = l_Lake_getLog___redArg(v_inst_1942_);
lean_dec_ref(v_inst_1942_);
return v_res_1943_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLog(lean_object* v_m_1944_, lean_object* v_inst_1945_){
_start:
{
lean_object* v_get_1946_; 
v_get_1946_ = lean_ctor_get(v_inst_1945_, 0);
lean_inc(v_get_1946_);
return v_get_1946_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLog___boxed(lean_object* v_m_1947_, lean_object* v_inst_1948_){
_start:
{
lean_object* v_res_1949_; 
v_res_1949_ = l_Lake_getLog(v_m_1947_, v_inst_1948_);
lean_dec_ref(v_inst_1948_);
return v_res_1949_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLogPos___redArg___lam__0(lean_object* v_x_1950_){
_start:
{
lean_object* v___x_1951_; 
v___x_1951_ = lean_array_get_size(v_x_1950_);
return v___x_1951_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLogPos___redArg___lam__0___boxed(lean_object* v_x_1952_){
_start:
{
lean_object* v_res_1953_; 
v_res_1953_ = l_Lake_getLogPos___redArg___lam__0(v_x_1952_);
lean_dec_ref(v_x_1952_);
return v_res_1953_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLogPos___redArg(lean_object* v_inst_1955_, lean_object* v_inst_1956_){
_start:
{
lean_object* v_map_1957_; lean_object* v_get_1958_; lean_object* v___f_1959_; lean_object* v___x_1960_; 
v_map_1957_ = lean_ctor_get(v_inst_1955_, 0);
lean_inc(v_map_1957_);
lean_dec_ref(v_inst_1955_);
v_get_1958_ = lean_ctor_get(v_inst_1956_, 0);
lean_inc(v_get_1958_);
lean_dec_ref(v_inst_1956_);
v___f_1959_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___x_1960_ = lean_apply_4(v_map_1957_, lean_box(0), lean_box(0), v___f_1959_, v_get_1958_);
return v___x_1960_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLogPos(lean_object* v_m_1961_, lean_object* v_inst_1962_, lean_object* v_inst_1963_){
_start:
{
lean_object* v_map_1964_; lean_object* v_get_1965_; lean_object* v___f_1966_; lean_object* v___x_1967_; 
v_map_1964_ = lean_ctor_get(v_inst_1962_, 0);
lean_inc(v_map_1964_);
lean_dec_ref(v_inst_1962_);
v_get_1965_ = lean_ctor_get(v_inst_1963_, 0);
lean_inc(v_get_1965_);
lean_dec_ref(v_inst_1963_);
v___f_1966_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___x_1967_ = lean_apply_4(v_map_1964_, lean_box(0), lean_box(0), v___f_1966_, v_get_1965_);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l_Lake_takeLog___redArg___lam__0(lean_object* v_log_1968_){
_start:
{
lean_object* v___x_1969_; lean_object* v___x_1970_; 
v___x_1969_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_1970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1970_, 0, v_log_1968_);
lean_ctor_set(v___x_1970_, 1, v___x_1969_);
return v___x_1970_;
}
}
LEAN_EXPORT lean_object* l_Lake_takeLog___redArg(lean_object* v_inst_1972_){
_start:
{
lean_object* v_modifyGet_1973_; lean_object* v___f_1974_; lean_object* v___x_1975_; 
v_modifyGet_1973_ = lean_ctor_get(v_inst_1972_, 2);
lean_inc(v_modifyGet_1973_);
lean_dec_ref(v_inst_1972_);
v___f_1974_ = ((lean_object*)(l_Lake_takeLog___redArg___closed__0));
v___x_1975_ = lean_apply_2(v_modifyGet_1973_, lean_box(0), v___f_1974_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l_Lake_takeLog(lean_object* v_m_1976_, lean_object* v_inst_1977_){
_start:
{
lean_object* v_modifyGet_1978_; lean_object* v___f_1979_; lean_object* v___x_1980_; 
v_modifyGet_1978_ = lean_ctor_get(v_inst_1977_, 2);
lean_inc(v_modifyGet_1978_);
lean_dec_ref(v_inst_1977_);
v___f_1979_ = ((lean_object*)(l_Lake_takeLog___redArg___closed__0));
v___x_1980_ = lean_apply_2(v_modifyGet_1978_, lean_box(0), v___f_1979_);
return v___x_1980_;
}
}
LEAN_EXPORT lean_object* l_Lake_takeLogFrom___redArg___lam__0(lean_object* v_pos_1981_, lean_object* v_log_1982_){
_start:
{
lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; 
v___x_1983_ = lean_array_get_size(v_log_1982_);
lean_inc(v_pos_1981_);
v___x_1984_ = l_Array_extract___redArg(v_log_1982_, v_pos_1981_, v___x_1983_);
v___x_1985_ = l_Array_shrink___redArg(v_log_1982_, v_pos_1981_);
lean_dec(v_pos_1981_);
v___x_1986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1986_, 0, v___x_1984_);
lean_ctor_set(v___x_1986_, 1, v___x_1985_);
return v___x_1986_;
}
}
LEAN_EXPORT lean_object* l_Lake_takeLogFrom___redArg(lean_object* v_inst_1987_, lean_object* v_pos_1988_){
_start:
{
lean_object* v_modifyGet_1989_; lean_object* v___f_1990_; lean_object* v___x_1991_; 
v_modifyGet_1989_ = lean_ctor_get(v_inst_1987_, 2);
lean_inc(v_modifyGet_1989_);
lean_dec_ref(v_inst_1987_);
v___f_1990_ = lean_alloc_closure((void*)(l_Lake_takeLogFrom___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1990_, 0, v_pos_1988_);
v___x_1991_ = lean_apply_2(v_modifyGet_1989_, lean_box(0), v___f_1990_);
return v___x_1991_;
}
}
LEAN_EXPORT lean_object* l_Lake_takeLogFrom(lean_object* v_m_1992_, lean_object* v_inst_1993_, lean_object* v_pos_1994_){
_start:
{
lean_object* v_modifyGet_1995_; lean_object* v___f_1996_; lean_object* v___x_1997_; 
v_modifyGet_1995_ = lean_ctor_get(v_inst_1993_, 2);
lean_inc(v_modifyGet_1995_);
lean_dec_ref(v_inst_1993_);
v___f_1996_ = lean_alloc_closure((void*)(l_Lake_takeLogFrom___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1996_, 0, v_pos_1994_);
v___x_1997_ = lean_apply_2(v_modifyGet_1995_, lean_box(0), v___f_1996_);
return v___x_1997_;
}
}
LEAN_EXPORT lean_object* l_Lake_dropLogFrom___redArg___lam__0(lean_object* v_pos_1998_, lean_object* v_s_1999_){
_start:
{
lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; 
v___x_2000_ = lean_box(0);
v___x_2001_ = l_Array_shrink___redArg(v_s_1999_, v_pos_1998_);
v___x_2002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2002_, 0, v___x_2000_);
lean_ctor_set(v___x_2002_, 1, v___x_2001_);
return v___x_2002_;
}
}
LEAN_EXPORT lean_object* l_Lake_dropLogFrom___redArg___lam__0___boxed(lean_object* v_pos_2003_, lean_object* v_s_2004_){
_start:
{
lean_object* v_res_2005_; 
v_res_2005_ = l_Lake_dropLogFrom___redArg___lam__0(v_pos_2003_, v_s_2004_);
lean_dec(v_pos_2003_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l_Lake_dropLogFrom___redArg(lean_object* v_inst_2006_, lean_object* v_pos_2007_){
_start:
{
lean_object* v_modifyGet_2008_; lean_object* v___f_2009_; lean_object* v___x_2010_; 
v_modifyGet_2008_ = lean_ctor_get(v_inst_2006_, 2);
lean_inc(v_modifyGet_2008_);
lean_dec_ref(v_inst_2006_);
v___f_2009_ = lean_alloc_closure((void*)(l_Lake_dropLogFrom___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2009_, 0, v_pos_2007_);
v___x_2010_ = lean_apply_2(v_modifyGet_2008_, lean_box(0), v___f_2009_);
return v___x_2010_;
}
}
LEAN_EXPORT lean_object* l_Lake_dropLogFrom(lean_object* v_m_2011_, lean_object* v_inst_2012_, lean_object* v_pos_2013_){
_start:
{
lean_object* v_modifyGet_2014_; lean_object* v___f_2015_; lean_object* v___x_2016_; 
v_modifyGet_2014_ = lean_ctor_get(v_inst_2012_, 2);
lean_inc(v_modifyGet_2014_);
lean_dec_ref(v_inst_2012_);
v___f_2015_ = lean_alloc_closure((void*)(l_Lake_dropLogFrom___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2015_, 0, v_pos_2013_);
v___x_2016_ = lean_apply_2(v_modifyGet_2014_, lean_box(0), v___f_2015_);
return v___x_2016_;
}
}
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg___lam__1(lean_object* v_iniPos_2017_, lean_object* v_toPure_2018_, lean_object* v_log_2019_){
_start:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___x_2020_ = lean_array_get_size(v_log_2019_);
v___x_2021_ = l_Array_extract___redArg(v_log_2019_, v_iniPos_2017_, v___x_2020_);
v___x_2022_ = lean_apply_2(v_toPure_2018_, lean_box(0), v___x_2021_);
return v___x_2022_;
}
}
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg___lam__1___boxed(lean_object* v_iniPos_2023_, lean_object* v_toPure_2024_, lean_object* v_log_2025_){
_start:
{
lean_object* v_res_2026_; 
v_res_2026_ = l_Lake_extractLog___redArg___lam__1(v_iniPos_2023_, v_toPure_2024_, v_log_2025_);
lean_dec_ref(v_log_2025_);
return v_res_2026_;
}
}
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg___lam__0(lean_object* v_toBind_2027_, lean_object* v_get_2028_, lean_object* v___f_2029_, lean_object* v_____r_2030_){
_start:
{
lean_object* v___x_2031_; 
v___x_2031_ = lean_apply_4(v_toBind_2027_, lean_box(0), lean_box(0), v_get_2028_, v___f_2029_);
return v___x_2031_;
}
}
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg___lam__2(lean_object* v_toPure_2032_, lean_object* v_toBind_2033_, lean_object* v_get_2034_, lean_object* v_x_2035_, lean_object* v_iniPos_2036_){
_start:
{
lean_object* v___f_2037_; lean_object* v___f_2038_; lean_object* v___x_2039_; 
v___f_2037_ = lean_alloc_closure((void*)(l_Lake_extractLog___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2037_, 0, v_iniPos_2036_);
lean_closure_set(v___f_2037_, 1, v_toPure_2032_);
lean_inc(v_toBind_2033_);
v___f_2038_ = lean_alloc_closure((void*)(l_Lake_extractLog___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2038_, 0, v_toBind_2033_);
lean_closure_set(v___f_2038_, 1, v_get_2034_);
lean_closure_set(v___f_2038_, 2, v___f_2037_);
v___x_2039_ = lean_apply_4(v_toBind_2033_, lean_box(0), lean_box(0), v_x_2035_, v___f_2038_);
return v___x_2039_;
}
}
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg(lean_object* v_inst_2040_, lean_object* v_inst_2041_, lean_object* v_x_2042_){
_start:
{
lean_object* v_toApplicative_2043_; lean_object* v_toFunctor_2044_; lean_object* v_toBind_2045_; lean_object* v_toPure_2046_; lean_object* v_map_2047_; lean_object* v_get_2048_; lean_object* v___f_2049_; lean_object* v___f_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; 
v_toApplicative_2043_ = lean_ctor_get(v_inst_2040_, 0);
lean_inc_ref(v_toApplicative_2043_);
v_toFunctor_2044_ = lean_ctor_get(v_toApplicative_2043_, 0);
lean_inc_ref(v_toFunctor_2044_);
v_toBind_2045_ = lean_ctor_get(v_inst_2040_, 1);
lean_inc_n(v_toBind_2045_, 2);
lean_dec_ref(v_inst_2040_);
v_toPure_2046_ = lean_ctor_get(v_toApplicative_2043_, 1);
lean_inc(v_toPure_2046_);
lean_dec_ref(v_toApplicative_2043_);
v_map_2047_ = lean_ctor_get(v_toFunctor_2044_, 0);
lean_inc(v_map_2047_);
lean_dec_ref(v_toFunctor_2044_);
v_get_2048_ = lean_ctor_get(v_inst_2041_, 0);
lean_inc_n(v_get_2048_, 2);
lean_dec_ref(v_inst_2041_);
v___f_2049_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2050_ = lean_alloc_closure((void*)(l_Lake_extractLog___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2050_, 0, v_toPure_2046_);
lean_closure_set(v___f_2050_, 1, v_toBind_2045_);
lean_closure_set(v___f_2050_, 2, v_get_2048_);
lean_closure_set(v___f_2050_, 3, v_x_2042_);
v___x_2051_ = lean_apply_4(v_map_2047_, lean_box(0), lean_box(0), v___f_2049_, v_get_2048_);
v___x_2052_ = lean_apply_4(v_toBind_2045_, lean_box(0), lean_box(0), v___x_2051_, v___f_2050_);
return v___x_2052_;
}
}
LEAN_EXPORT lean_object* l_Lake_extractLog(lean_object* v_m_2053_, lean_object* v_inst_2054_, lean_object* v_inst_2055_, lean_object* v_x_2056_){
_start:
{
lean_object* v_toApplicative_2057_; lean_object* v_toFunctor_2058_; lean_object* v_toBind_2059_; lean_object* v_toPure_2060_; lean_object* v_map_2061_; lean_object* v_get_2062_; lean_object* v___f_2063_; lean_object* v___f_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; 
v_toApplicative_2057_ = lean_ctor_get(v_inst_2054_, 0);
lean_inc_ref(v_toApplicative_2057_);
v_toFunctor_2058_ = lean_ctor_get(v_toApplicative_2057_, 0);
lean_inc_ref(v_toFunctor_2058_);
v_toBind_2059_ = lean_ctor_get(v_inst_2054_, 1);
lean_inc_n(v_toBind_2059_, 2);
lean_dec_ref(v_inst_2054_);
v_toPure_2060_ = lean_ctor_get(v_toApplicative_2057_, 1);
lean_inc(v_toPure_2060_);
lean_dec_ref(v_toApplicative_2057_);
v_map_2061_ = lean_ctor_get(v_toFunctor_2058_, 0);
lean_inc(v_map_2061_);
lean_dec_ref(v_toFunctor_2058_);
v_get_2062_ = lean_ctor_get(v_inst_2055_, 0);
lean_inc_n(v_get_2062_, 2);
lean_dec_ref(v_inst_2055_);
v___f_2063_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2064_ = lean_alloc_closure((void*)(l_Lake_extractLog___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2064_, 0, v_toPure_2060_);
lean_closure_set(v___f_2064_, 1, v_toBind_2059_);
lean_closure_set(v___f_2064_, 2, v_get_2062_);
lean_closure_set(v___f_2064_, 3, v_x_2056_);
v___x_2065_ = lean_apply_4(v_map_2061_, lean_box(0), lean_box(0), v___f_2063_, v_get_2062_);
v___x_2066_ = lean_apply_4(v_toBind_2059_, lean_box(0), lean_box(0), v___x_2065_, v___f_2064_);
return v___x_2066_;
}
}
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg___lam__1(lean_object* v_iniPos_2067_, lean_object* v_a_2068_, lean_object* v_toPure_2069_, lean_object* v_log_2070_){
_start:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; 
v___x_2071_ = lean_array_get_size(v_log_2070_);
v___x_2072_ = l_Array_extract___redArg(v_log_2070_, v_iniPos_2067_, v___x_2071_);
v___x_2073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2073_, 0, v_a_2068_);
lean_ctor_set(v___x_2073_, 1, v___x_2072_);
v___x_2074_ = lean_apply_2(v_toPure_2069_, lean_box(0), v___x_2073_);
return v___x_2074_;
}
}
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg___lam__1___boxed(lean_object* v_iniPos_2075_, lean_object* v_a_2076_, lean_object* v_toPure_2077_, lean_object* v_log_2078_){
_start:
{
lean_object* v_res_2079_; 
v_res_2079_ = l_Lake_withExtractLog___redArg___lam__1(v_iniPos_2075_, v_a_2076_, v_toPure_2077_, v_log_2078_);
lean_dec_ref(v_log_2078_);
return v_res_2079_;
}
}
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg___lam__0(lean_object* v_iniPos_2080_, lean_object* v_toPure_2081_, lean_object* v_toBind_2082_, lean_object* v_get_2083_, lean_object* v_a_2084_){
_start:
{
lean_object* v___f_2085_; lean_object* v___x_2086_; 
v___f_2085_ = lean_alloc_closure((void*)(l_Lake_withExtractLog___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2085_, 0, v_iniPos_2080_);
lean_closure_set(v___f_2085_, 1, v_a_2084_);
lean_closure_set(v___f_2085_, 2, v_toPure_2081_);
v___x_2086_ = lean_apply_4(v_toBind_2082_, lean_box(0), lean_box(0), v_get_2083_, v___f_2085_);
return v___x_2086_;
}
}
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg___lam__2(lean_object* v_toPure_2087_, lean_object* v_toBind_2088_, lean_object* v_get_2089_, lean_object* v_x_2090_, lean_object* v_iniPos_2091_){
_start:
{
lean_object* v___f_2092_; lean_object* v___x_2093_; 
lean_inc(v_toBind_2088_);
v___f_2092_ = lean_alloc_closure((void*)(l_Lake_withExtractLog___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2092_, 0, v_iniPos_2091_);
lean_closure_set(v___f_2092_, 1, v_toPure_2087_);
lean_closure_set(v___f_2092_, 2, v_toBind_2088_);
lean_closure_set(v___f_2092_, 3, v_get_2089_);
v___x_2093_ = lean_apply_4(v_toBind_2088_, lean_box(0), lean_box(0), v_x_2090_, v___f_2092_);
return v___x_2093_;
}
}
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg(lean_object* v_inst_2094_, lean_object* v_inst_2095_, lean_object* v_x_2096_){
_start:
{
lean_object* v_toApplicative_2097_; lean_object* v_toFunctor_2098_; lean_object* v_toBind_2099_; lean_object* v_toPure_2100_; lean_object* v_map_2101_; lean_object* v_get_2102_; lean_object* v___f_2103_; lean_object* v___f_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; 
v_toApplicative_2097_ = lean_ctor_get(v_inst_2094_, 0);
lean_inc_ref(v_toApplicative_2097_);
v_toFunctor_2098_ = lean_ctor_get(v_toApplicative_2097_, 0);
lean_inc_ref(v_toFunctor_2098_);
v_toBind_2099_ = lean_ctor_get(v_inst_2094_, 1);
lean_inc_n(v_toBind_2099_, 2);
lean_dec_ref(v_inst_2094_);
v_toPure_2100_ = lean_ctor_get(v_toApplicative_2097_, 1);
lean_inc(v_toPure_2100_);
lean_dec_ref(v_toApplicative_2097_);
v_map_2101_ = lean_ctor_get(v_toFunctor_2098_, 0);
lean_inc(v_map_2101_);
lean_dec_ref(v_toFunctor_2098_);
v_get_2102_ = lean_ctor_get(v_inst_2095_, 0);
lean_inc_n(v_get_2102_, 2);
lean_dec_ref(v_inst_2095_);
v___f_2103_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2104_ = lean_alloc_closure((void*)(l_Lake_withExtractLog___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2104_, 0, v_toPure_2100_);
lean_closure_set(v___f_2104_, 1, v_toBind_2099_);
lean_closure_set(v___f_2104_, 2, v_get_2102_);
lean_closure_set(v___f_2104_, 3, v_x_2096_);
v___x_2105_ = lean_apply_4(v_map_2101_, lean_box(0), lean_box(0), v___f_2103_, v_get_2102_);
v___x_2106_ = lean_apply_4(v_toBind_2099_, lean_box(0), lean_box(0), v___x_2105_, v___f_2104_);
return v___x_2106_;
}
}
LEAN_EXPORT lean_object* l_Lake_withExtractLog(lean_object* v_m_2107_, lean_object* v_00_u03b1_2108_, lean_object* v_inst_2109_, lean_object* v_inst_2110_, lean_object* v_x_2111_){
_start:
{
lean_object* v_toApplicative_2112_; lean_object* v_toFunctor_2113_; lean_object* v_toBind_2114_; lean_object* v_toPure_2115_; lean_object* v_map_2116_; lean_object* v_get_2117_; lean_object* v___f_2118_; lean_object* v___f_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; 
v_toApplicative_2112_ = lean_ctor_get(v_inst_2109_, 0);
lean_inc_ref(v_toApplicative_2112_);
v_toFunctor_2113_ = lean_ctor_get(v_toApplicative_2112_, 0);
lean_inc_ref(v_toFunctor_2113_);
v_toBind_2114_ = lean_ctor_get(v_inst_2109_, 1);
lean_inc_n(v_toBind_2114_, 2);
lean_dec_ref(v_inst_2109_);
v_toPure_2115_ = lean_ctor_get(v_toApplicative_2112_, 1);
lean_inc(v_toPure_2115_);
lean_dec_ref(v_toApplicative_2112_);
v_map_2116_ = lean_ctor_get(v_toFunctor_2113_, 0);
lean_inc(v_map_2116_);
lean_dec_ref(v_toFunctor_2113_);
v_get_2117_ = lean_ctor_get(v_inst_2110_, 0);
lean_inc_n(v_get_2117_, 2);
lean_dec_ref(v_inst_2110_);
v___f_2118_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2119_ = lean_alloc_closure((void*)(l_Lake_withExtractLog___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2119_, 0, v_toPure_2115_);
lean_closure_set(v___f_2119_, 1, v_toBind_2114_);
lean_closure_set(v___f_2119_, 2, v_get_2117_);
lean_closure_set(v___f_2119_, 3, v_x_2111_);
v___x_2120_ = lean_apply_4(v_map_2116_, lean_box(0), lean_box(0), v___f_2118_, v_get_2117_);
v___x_2121_ = lean_apply_4(v_toBind_2114_, lean_box(0), lean_box(0), v___x_2120_, v___f_2119_);
return v___x_2121_;
}
}
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg___lam__1(lean_object* v_iniPos_2122_, lean_object* v_inst_2123_, lean_object* v_toPure_2124_, lean_object* v_a_2125_, lean_object* v_endPos_2126_){
_start:
{
uint8_t v___x_2127_; 
v___x_2127_ = lean_nat_dec_eq(v_iniPos_2122_, v_endPos_2126_);
if (v___x_2127_ == 0)
{
lean_object* v_throw_2128_; lean_object* v___x_2129_; 
lean_dec(v_a_2125_);
lean_dec(v_toPure_2124_);
v_throw_2128_ = lean_ctor_get(v_inst_2123_, 0);
lean_inc(v_throw_2128_);
lean_dec_ref(v_inst_2123_);
v___x_2129_ = lean_apply_2(v_throw_2128_, lean_box(0), v_iniPos_2122_);
return v___x_2129_;
}
else
{
lean_object* v___x_2130_; 
lean_dec_ref(v_inst_2123_);
lean_dec(v_iniPos_2122_);
v___x_2130_ = lean_apply_2(v_toPure_2124_, lean_box(0), v_a_2125_);
return v___x_2130_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg___lam__1___boxed(lean_object* v_iniPos_2131_, lean_object* v_inst_2132_, lean_object* v_toPure_2133_, lean_object* v_a_2134_, lean_object* v_endPos_2135_){
_start:
{
lean_object* v_res_2136_; 
v_res_2136_ = l_Lake_throwIfLogs___redArg___lam__1(v_iniPos_2131_, v_inst_2132_, v_toPure_2133_, v_a_2134_, v_endPos_2135_);
lean_dec(v_endPos_2135_);
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg___lam__0(lean_object* v_iniPos_2137_, lean_object* v_inst_2138_, lean_object* v_toPure_2139_, lean_object* v_toBind_2140_, lean_object* v___x_2141_, lean_object* v_a_2142_){
_start:
{
lean_object* v___f_2143_; lean_object* v___x_2144_; 
v___f_2143_ = lean_alloc_closure((void*)(l_Lake_throwIfLogs___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_2143_, 0, v_iniPos_2137_);
lean_closure_set(v___f_2143_, 1, v_inst_2138_);
lean_closure_set(v___f_2143_, 2, v_toPure_2139_);
lean_closure_set(v___f_2143_, 3, v_a_2142_);
v___x_2144_ = lean_apply_4(v_toBind_2140_, lean_box(0), lean_box(0), v___x_2141_, v___f_2143_);
return v___x_2144_;
}
}
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg___lam__2(lean_object* v_inst_2145_, lean_object* v_toPure_2146_, lean_object* v_toBind_2147_, lean_object* v___x_2148_, lean_object* v_x_2149_, lean_object* v_iniPos_2150_){
_start:
{
lean_object* v___f_2151_; lean_object* v___x_2152_; 
lean_inc(v_toBind_2147_);
v___f_2151_ = lean_alloc_closure((void*)(l_Lake_throwIfLogs___redArg___lam__0), 6, 5);
lean_closure_set(v___f_2151_, 0, v_iniPos_2150_);
lean_closure_set(v___f_2151_, 1, v_inst_2145_);
lean_closure_set(v___f_2151_, 2, v_toPure_2146_);
lean_closure_set(v___f_2151_, 3, v_toBind_2147_);
lean_closure_set(v___f_2151_, 4, v___x_2148_);
v___x_2152_ = lean_apply_4(v_toBind_2147_, lean_box(0), lean_box(0), v_x_2149_, v___f_2151_);
return v___x_2152_;
}
}
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg(lean_object* v_inst_2153_, lean_object* v_inst_2154_, lean_object* v_inst_2155_, lean_object* v_x_2156_){
_start:
{
lean_object* v_toApplicative_2157_; lean_object* v_toFunctor_2158_; lean_object* v_toBind_2159_; lean_object* v_toPure_2160_; lean_object* v_map_2161_; lean_object* v_get_2162_; lean_object* v___f_2163_; lean_object* v___x_2164_; lean_object* v___f_2165_; lean_object* v___x_2166_; 
v_toApplicative_2157_ = lean_ctor_get(v_inst_2153_, 0);
lean_inc_ref(v_toApplicative_2157_);
v_toFunctor_2158_ = lean_ctor_get(v_toApplicative_2157_, 0);
lean_inc_ref(v_toFunctor_2158_);
v_toBind_2159_ = lean_ctor_get(v_inst_2153_, 1);
lean_inc_n(v_toBind_2159_, 2);
lean_dec_ref(v_inst_2153_);
v_toPure_2160_ = lean_ctor_get(v_toApplicative_2157_, 1);
lean_inc(v_toPure_2160_);
lean_dec_ref(v_toApplicative_2157_);
v_map_2161_ = lean_ctor_get(v_toFunctor_2158_, 0);
lean_inc(v_map_2161_);
lean_dec_ref(v_toFunctor_2158_);
v_get_2162_ = lean_ctor_get(v_inst_2154_, 0);
lean_inc(v_get_2162_);
lean_dec_ref(v_inst_2154_);
v___f_2163_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___x_2164_ = lean_apply_4(v_map_2161_, lean_box(0), lean_box(0), v___f_2163_, v_get_2162_);
lean_inc(v___x_2164_);
v___f_2165_ = lean_alloc_closure((void*)(l_Lake_throwIfLogs___redArg___lam__2), 6, 5);
lean_closure_set(v___f_2165_, 0, v_inst_2155_);
lean_closure_set(v___f_2165_, 1, v_toPure_2160_);
lean_closure_set(v___f_2165_, 2, v_toBind_2159_);
lean_closure_set(v___f_2165_, 3, v___x_2164_);
lean_closure_set(v___f_2165_, 4, v_x_2156_);
v___x_2166_ = lean_apply_4(v_toBind_2159_, lean_box(0), lean_box(0), v___x_2164_, v___f_2165_);
return v___x_2166_;
}
}
LEAN_EXPORT lean_object* l_Lake_throwIfLogs(lean_object* v_m_2167_, lean_object* v_00_u03b1_2168_, lean_object* v_inst_2169_, lean_object* v_inst_2170_, lean_object* v_inst_2171_, lean_object* v_x_2172_){
_start:
{
lean_object* v_toApplicative_2173_; lean_object* v_toFunctor_2174_; lean_object* v_toBind_2175_; lean_object* v_toPure_2176_; lean_object* v_map_2177_; lean_object* v_get_2178_; lean_object* v___f_2179_; lean_object* v___x_2180_; lean_object* v___f_2181_; lean_object* v___x_2182_; 
v_toApplicative_2173_ = lean_ctor_get(v_inst_2169_, 0);
lean_inc_ref(v_toApplicative_2173_);
v_toFunctor_2174_ = lean_ctor_get(v_toApplicative_2173_, 0);
lean_inc_ref(v_toFunctor_2174_);
v_toBind_2175_ = lean_ctor_get(v_inst_2169_, 1);
lean_inc_n(v_toBind_2175_, 2);
lean_dec_ref(v_inst_2169_);
v_toPure_2176_ = lean_ctor_get(v_toApplicative_2173_, 1);
lean_inc(v_toPure_2176_);
lean_dec_ref(v_toApplicative_2173_);
v_map_2177_ = lean_ctor_get(v_toFunctor_2174_, 0);
lean_inc(v_map_2177_);
lean_dec_ref(v_toFunctor_2174_);
v_get_2178_ = lean_ctor_get(v_inst_2170_, 0);
lean_inc(v_get_2178_);
lean_dec_ref(v_inst_2170_);
v___f_2179_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___x_2180_ = lean_apply_4(v_map_2177_, lean_box(0), lean_box(0), v___f_2179_, v_get_2178_);
lean_inc(v___x_2180_);
v___f_2181_ = lean_alloc_closure((void*)(l_Lake_throwIfLogs___redArg___lam__2), 6, 5);
lean_closure_set(v___f_2181_, 0, v_inst_2171_);
lean_closure_set(v___f_2181_, 1, v_toPure_2176_);
lean_closure_set(v___f_2181_, 2, v_toBind_2175_);
lean_closure_set(v___f_2181_, 3, v___x_2180_);
lean_closure_set(v___f_2181_, 4, v_x_2172_);
v___x_2182_ = lean_apply_4(v_toBind_2175_, lean_box(0), lean_box(0), v___x_2180_, v___f_2181_);
return v___x_2182_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos___redArg___lam__1(lean_object* v_throw_2183_, lean_object* v_iniPos_2184_, lean_object* v_x_2185_){
_start:
{
lean_object* v___x_2186_; 
v___x_2186_ = lean_apply_2(v_throw_2183_, lean_box(0), v_iniPos_2184_);
return v___x_2186_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos___redArg___lam__1___boxed(lean_object* v_throw_2187_, lean_object* v_iniPos_2188_, lean_object* v_x_2189_){
_start:
{
lean_object* v_res_2190_; 
v_res_2190_ = l_Lake_withLogErrorPos___redArg___lam__1(v_throw_2187_, v_iniPos_2188_, v_x_2189_);
lean_dec(v_x_2189_);
return v_res_2190_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos___redArg___lam__0(lean_object* v_inst_2191_, lean_object* v_self_2192_, lean_object* v_iniPos_2193_){
_start:
{
lean_object* v_throw_2194_; lean_object* v_tryCatch_2195_; lean_object* v___f_2196_; lean_object* v___x_2197_; 
v_throw_2194_ = lean_ctor_get(v_inst_2191_, 0);
lean_inc(v_throw_2194_);
v_tryCatch_2195_ = lean_ctor_get(v_inst_2191_, 1);
lean_inc(v_tryCatch_2195_);
lean_dec_ref(v_inst_2191_);
v___f_2196_ = lean_alloc_closure((void*)(l_Lake_withLogErrorPos___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2196_, 0, v_throw_2194_);
lean_closure_set(v___f_2196_, 1, v_iniPos_2193_);
v___x_2197_ = lean_apply_3(v_tryCatch_2195_, lean_box(0), v_self_2192_, v___f_2196_);
return v___x_2197_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos___redArg(lean_object* v_inst_2198_, lean_object* v_inst_2199_, lean_object* v_inst_2200_, lean_object* v_self_2201_){
_start:
{
lean_object* v_toApplicative_2202_; lean_object* v_toFunctor_2203_; lean_object* v_toBind_2204_; lean_object* v_map_2205_; lean_object* v_get_2206_; lean_object* v___f_2207_; lean_object* v___f_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v_toApplicative_2202_ = lean_ctor_get(v_inst_2198_, 0);
v_toFunctor_2203_ = lean_ctor_get(v_toApplicative_2202_, 0);
lean_inc_ref(v_toFunctor_2203_);
v_toBind_2204_ = lean_ctor_get(v_inst_2198_, 1);
lean_inc(v_toBind_2204_);
lean_dec_ref(v_inst_2198_);
v_map_2205_ = lean_ctor_get(v_toFunctor_2203_, 0);
lean_inc(v_map_2205_);
lean_dec_ref(v_toFunctor_2203_);
v_get_2206_ = lean_ctor_get(v_inst_2199_, 0);
lean_inc(v_get_2206_);
lean_dec_ref(v_inst_2199_);
v___f_2207_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2208_ = lean_alloc_closure((void*)(l_Lake_withLogErrorPos___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2208_, 0, v_inst_2200_);
lean_closure_set(v___f_2208_, 1, v_self_2201_);
v___x_2209_ = lean_apply_4(v_map_2205_, lean_box(0), lean_box(0), v___f_2207_, v_get_2206_);
v___x_2210_ = lean_apply_4(v_toBind_2204_, lean_box(0), lean_box(0), v___x_2209_, v___f_2208_);
return v___x_2210_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos(lean_object* v_m_2211_, lean_object* v_00_u03b1_2212_, lean_object* v_inst_2213_, lean_object* v_inst_2214_, lean_object* v_inst_2215_, lean_object* v_self_2216_){
_start:
{
lean_object* v_toApplicative_2217_; lean_object* v_toFunctor_2218_; lean_object* v_toBind_2219_; lean_object* v_map_2220_; lean_object* v_get_2221_; lean_object* v___f_2222_; lean_object* v___f_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; 
v_toApplicative_2217_ = lean_ctor_get(v_inst_2213_, 0);
v_toFunctor_2218_ = lean_ctor_get(v_toApplicative_2217_, 0);
lean_inc_ref(v_toFunctor_2218_);
v_toBind_2219_ = lean_ctor_get(v_inst_2213_, 1);
lean_inc(v_toBind_2219_);
lean_dec_ref(v_inst_2213_);
v_map_2220_ = lean_ctor_get(v_toFunctor_2218_, 0);
lean_inc(v_map_2220_);
lean_dec_ref(v_toFunctor_2218_);
v_get_2221_ = lean_ctor_get(v_inst_2214_, 0);
lean_inc(v_get_2221_);
lean_dec_ref(v_inst_2214_);
v___f_2222_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2223_ = lean_alloc_closure((void*)(l_Lake_withLogErrorPos___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2223_, 0, v_inst_2215_);
lean_closure_set(v___f_2223_, 1, v_self_2216_);
v___x_2224_ = lean_apply_4(v_map_2220_, lean_box(0), lean_box(0), v___f_2222_, v_get_2221_);
v___x_2225_ = lean_apply_4(v_toBind_2219_, lean_box(0), lean_box(0), v___x_2224_, v___f_2223_);
return v___x_2225_;
}
}
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg___lam__1(lean_object* v_toPure_2226_, lean_object* v_x_2227_){
_start:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; 
v___x_2228_ = lean_box(0);
v___x_2229_ = lean_apply_2(v_toPure_2226_, lean_box(0), v___x_2228_);
return v___x_2229_;
}
}
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg___lam__1___boxed(lean_object* v_toPure_2230_, lean_object* v_x_2231_){
_start:
{
lean_object* v_res_2232_; 
v_res_2232_ = l_Lake_errorWithLog___redArg___lam__1(v_toPure_2230_, v_x_2231_);
lean_dec(v_x_2231_);
return v_res_2232_;
}
}
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg___lam__0(lean_object* v_throw_2233_, lean_object* v_iniPos_2234_, lean_object* v_____r_2235_){
_start:
{
lean_object* v___x_2236_; 
v___x_2236_ = lean_apply_2(v_throw_2233_, lean_box(0), v_iniPos_2234_);
return v___x_2236_;
}
}
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg___lam__2(lean_object* v_inst_2237_, lean_object* v_self_2238_, lean_object* v___f_2239_, lean_object* v_toBind_2240_, lean_object* v_iniPos_2241_){
_start:
{
lean_object* v_throw_2242_; lean_object* v_tryCatch_2243_; lean_object* v___f_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; 
v_throw_2242_ = lean_ctor_get(v_inst_2237_, 0);
lean_inc(v_throw_2242_);
v_tryCatch_2243_ = lean_ctor_get(v_inst_2237_, 1);
lean_inc(v_tryCatch_2243_);
lean_dec_ref(v_inst_2237_);
v___f_2244_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2244_, 0, v_throw_2242_);
lean_closure_set(v___f_2244_, 1, v_iniPos_2241_);
v___x_2245_ = lean_apply_3(v_tryCatch_2243_, lean_box(0), v_self_2238_, v___f_2239_);
v___x_2246_ = lean_apply_4(v_toBind_2240_, lean_box(0), lean_box(0), v___x_2245_, v___f_2244_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg(lean_object* v_inst_2247_, lean_object* v_inst_2248_, lean_object* v_inst_2249_, lean_object* v_self_2250_){
_start:
{
lean_object* v_toApplicative_2251_; lean_object* v_toFunctor_2252_; lean_object* v_toBind_2253_; lean_object* v_toPure_2254_; lean_object* v_map_2255_; lean_object* v_get_2256_; lean_object* v___f_2257_; lean_object* v___f_2258_; lean_object* v___f_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; 
v_toApplicative_2251_ = lean_ctor_get(v_inst_2247_, 0);
lean_inc_ref(v_toApplicative_2251_);
v_toFunctor_2252_ = lean_ctor_get(v_toApplicative_2251_, 0);
lean_inc_ref(v_toFunctor_2252_);
v_toBind_2253_ = lean_ctor_get(v_inst_2247_, 1);
lean_inc_n(v_toBind_2253_, 2);
lean_dec_ref(v_inst_2247_);
v_toPure_2254_ = lean_ctor_get(v_toApplicative_2251_, 1);
lean_inc(v_toPure_2254_);
lean_dec_ref(v_toApplicative_2251_);
v_map_2255_ = lean_ctor_get(v_toFunctor_2252_, 0);
lean_inc(v_map_2255_);
lean_dec_ref(v_toFunctor_2252_);
v_get_2256_ = lean_ctor_get(v_inst_2248_, 0);
lean_inc(v_get_2256_);
lean_dec_ref(v_inst_2248_);
v___f_2257_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2258_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2258_, 0, v_toPure_2254_);
v___f_2259_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2259_, 0, v_inst_2249_);
lean_closure_set(v___f_2259_, 1, v_self_2250_);
lean_closure_set(v___f_2259_, 2, v___f_2258_);
lean_closure_set(v___f_2259_, 3, v_toBind_2253_);
v___x_2260_ = lean_apply_4(v_map_2255_, lean_box(0), lean_box(0), v___f_2257_, v_get_2256_);
v___x_2261_ = lean_apply_4(v_toBind_2253_, lean_box(0), lean_box(0), v___x_2260_, v___f_2259_);
return v___x_2261_;
}
}
LEAN_EXPORT lean_object* l_Lake_errorWithLog(lean_object* v_m_2262_, lean_object* v_00_u03b2_2263_, lean_object* v_inst_2264_, lean_object* v_inst_2265_, lean_object* v_inst_2266_, lean_object* v_self_2267_){
_start:
{
lean_object* v_toApplicative_2268_; lean_object* v_toFunctor_2269_; lean_object* v_toBind_2270_; lean_object* v_toPure_2271_; lean_object* v_map_2272_; lean_object* v_get_2273_; lean_object* v___f_2274_; lean_object* v___f_2275_; lean_object* v___f_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
v_toApplicative_2268_ = lean_ctor_get(v_inst_2264_, 0);
lean_inc_ref(v_toApplicative_2268_);
v_toFunctor_2269_ = lean_ctor_get(v_toApplicative_2268_, 0);
lean_inc_ref(v_toFunctor_2269_);
v_toBind_2270_ = lean_ctor_get(v_inst_2264_, 1);
lean_inc_n(v_toBind_2270_, 2);
lean_dec_ref(v_inst_2264_);
v_toPure_2271_ = lean_ctor_get(v_toApplicative_2268_, 1);
lean_inc(v_toPure_2271_);
lean_dec_ref(v_toApplicative_2268_);
v_map_2272_ = lean_ctor_get(v_toFunctor_2269_, 0);
lean_inc(v_map_2272_);
lean_dec_ref(v_toFunctor_2269_);
v_get_2273_ = lean_ctor_get(v_inst_2265_, 0);
lean_inc(v_get_2273_);
lean_dec_ref(v_inst_2265_);
v___f_2274_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2275_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2275_, 0, v_toPure_2271_);
v___f_2276_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2276_, 0, v_inst_2266_);
lean_closure_set(v___f_2276_, 1, v_self_2267_);
lean_closure_set(v___f_2276_, 2, v___f_2275_);
lean_closure_set(v___f_2276_, 3, v_toBind_2270_);
v___x_2277_ = lean_apply_4(v_map_2272_, lean_box(0), lean_box(0), v___f_2274_, v_get_2273_);
v___x_2278_ = lean_apply_4(v_toBind_2270_, lean_box(0), lean_box(0), v___x_2277_, v___f_2276_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__0(lean_object* v_x_2279_){
_start:
{
lean_object* v_fst_2280_; 
v_fst_2280_ = lean_ctor_get(v_x_2279_, 0);
lean_inc(v_fst_2280_);
return v_fst_2280_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__0___boxed(lean_object* v_x_2281_){
_start:
{
lean_object* v_res_2282_; 
v_res_2282_ = l_Lake_withLoggedIO___redArg___lam__0(v_x_2281_);
lean_dec_ref(v_x_2281_);
return v_res_2282_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__1(lean_object* v_buf_2283_){
_start:
{
lean_object* v___x_2285_; 
v___x_2285_ = lean_st_ref_get(v_buf_2283_);
return v___x_2285_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__1___boxed(lean_object* v_buf_2286_, lean_object* v___y_2287_){
_start:
{
lean_object* v_res_2288_; 
v_res_2288_ = l_Lake_withLoggedIO___redArg___lam__1(v_buf_2286_);
lean_dec(v_buf_2286_);
return v_res_2288_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__2(lean_object* v_toPure_2289_, lean_object* v_a_2290_, lean_object* v_____r_2291_){
_start:
{
lean_object* v___x_2292_; 
v___x_2292_ = lean_apply_2(v_toPure_2289_, lean_box(0), v_a_2290_);
return v___x_2292_;
}
}
static lean_object* _init_l_Lake_withLoggedIO___redArg___lam__3___closed__4(void){
_start:
{
lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; 
v___x_2297_ = ((lean_object*)(l_Lake_withLoggedIO___redArg___lam__3___closed__3));
v___x_2298_ = lean_unsigned_to_nat(46u);
v___x_2299_ = lean_unsigned_to_nat(193u);
v___x_2300_ = ((lean_object*)(l_Lake_withLoggedIO___redArg___lam__3___closed__2));
v___x_2301_ = ((lean_object*)(l_Lake_withLoggedIO___redArg___lam__3___closed__1));
v___x_2302_ = l_mkPanicMessageWithDecl(v___x_2301_, v___x_2300_, v___x_2299_, v___x_2298_, v___x_2297_);
return v___x_2302_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__3(lean_object* v___x_2303_, lean_object* v_inst_2304_, lean_object* v_toBind_2305_, lean_object* v___f_2306_, lean_object* v_toPure_2307_, lean_object* v_a_2308_, lean_object* v_buf_2309_){
_start:
{
lean_object* v___y_2311_; lean_object* v_data_2324_; uint8_t v___x_2325_; 
v_data_2324_ = lean_ctor_get(v_buf_2309_, 0);
lean_inc_ref(v_data_2324_);
lean_dec_ref(v_buf_2309_);
v___x_2325_ = lean_string_validate_utf8(v_data_2324_);
if (v___x_2325_ == 0)
{
lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; 
lean_dec_ref(v_data_2324_);
v___x_2326_ = ((lean_object*)(l_Lake_instInhabitedLogEntry_default___closed__0));
v___x_2327_ = lean_obj_once(&l_Lake_withLoggedIO___redArg___lam__3___closed__4, &l_Lake_withLoggedIO___redArg___lam__3___closed__4_once, _init_l_Lake_withLoggedIO___redArg___lam__3___closed__4);
v___x_2328_ = l_panic___redArg(v___x_2326_, v___x_2327_);
v___y_2311_ = v___x_2328_;
goto v___jp_2310_;
}
else
{
lean_object* v___x_2329_; 
v___x_2329_ = lean_string_from_utf8_unchecked(v_data_2324_);
v___y_2311_ = v___x_2329_;
goto v___jp_2310_;
}
v___jp_2310_:
{
lean_object* v___x_2312_; uint8_t v___x_2313_; 
v___x_2312_ = lean_string_utf8_byte_size(v___y_2311_);
v___x_2313_ = lean_nat_dec_eq(v___x_2312_, v___x_2303_);
if (v___x_2313_ == 0)
{
lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; uint8_t v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; 
lean_dec(v_a_2308_);
lean_dec(v_toPure_2307_);
v___x_2314_ = ((lean_object*)(l_Lake_withLoggedIO___redArg___lam__3___closed__0));
v___x_2315_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2315_, 0, v___y_2311_);
lean_ctor_set(v___x_2315_, 1, v___x_2303_);
lean_ctor_set(v___x_2315_, 2, v___x_2312_);
v___x_2316_ = l_String_Slice_trimAscii(v___x_2315_);
v___x_2317_ = l_String_Slice_toString(v___x_2316_);
lean_dec_ref(v___x_2316_);
v___x_2318_ = lean_string_append(v___x_2314_, v___x_2317_);
lean_dec_ref(v___x_2317_);
v___x_2319_ = 1;
v___x_2320_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2320_, 0, v___x_2318_);
lean_ctor_set_uint8(v___x_2320_, sizeof(void*)*1, v___x_2319_);
v___x_2321_ = lean_apply_1(v_inst_2304_, v___x_2320_);
v___x_2322_ = lean_apply_4(v_toBind_2305_, lean_box(0), lean_box(0), v___x_2321_, v___f_2306_);
return v___x_2322_;
}
else
{
lean_object* v___x_2323_; 
lean_dec_ref(v___y_2311_);
lean_dec(v___f_2306_);
lean_dec(v_toBind_2305_);
lean_dec(v_inst_2304_);
lean_dec(v___x_2303_);
v___x_2323_ = lean_apply_2(v_toPure_2307_, lean_box(0), v_a_2308_);
return v___x_2323_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__4(lean_object* v_toPure_2330_, lean_object* v___x_2331_, lean_object* v_inst_2332_, lean_object* v_toBind_2333_, lean_object* v_inst_2334_, lean_object* v___f_2335_, lean_object* v_a_2336_){
_start:
{
lean_object* v___f_2337_; lean_object* v___f_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
lean_inc(v_a_2336_);
lean_inc(v_toPure_2330_);
v___f_2337_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__2), 3, 2);
lean_closure_set(v___f_2337_, 0, v_toPure_2330_);
lean_closure_set(v___f_2337_, 1, v_a_2336_);
lean_inc(v_toBind_2333_);
v___f_2338_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__3), 7, 6);
lean_closure_set(v___f_2338_, 0, v___x_2331_);
lean_closure_set(v___f_2338_, 1, v_inst_2332_);
lean_closure_set(v___f_2338_, 2, v_toBind_2333_);
lean_closure_set(v___f_2338_, 3, v___f_2337_);
lean_closure_set(v___f_2338_, 4, v_toPure_2330_);
lean_closure_set(v___f_2338_, 5, v_a_2336_);
v___x_2339_ = lean_apply_2(v_inst_2334_, lean_box(0), v___f_2335_);
v___x_2340_ = lean_apply_4(v_toBind_2333_, lean_box(0), lean_box(0), v___x_2339_, v___f_2338_);
return v___x_2340_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__5(lean_object* v_stderr_2341_, lean_object* v_inst_2342_, lean_object* v_mapConst_2343_, lean_object* v_____r_2344_){
_start:
{
lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; 
v___x_2345_ = lean_alloc_closure((void*)(l_IO_setStderr___boxed), 2, 1);
lean_closure_set(v___x_2345_, 0, v_stderr_2341_);
v___x_2346_ = lean_apply_2(v_inst_2342_, lean_box(0), v___x_2345_);
v___x_2347_ = lean_box(0);
v___x_2348_ = lean_apply_4(v_mapConst_2343_, lean_box(0), lean_box(0), v___x_2347_, v___x_2346_);
return v___x_2348_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__6(lean_object* v___x_2349_, lean_object* v_x_2350_){
_start:
{
lean_inc(v___x_2349_);
return v___x_2349_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__6___boxed(lean_object* v___x_2351_, lean_object* v_x_2352_){
_start:
{
lean_object* v_res_2353_; 
v_res_2353_ = l_Lake_withLoggedIO___redArg___lam__6(v___x_2351_, v_x_2352_);
lean_dec(v_x_2352_);
lean_dec(v___x_2351_);
return v_res_2353_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__7(lean_object* v_toFunctor_2354_, lean_object* v_inst_2355_, lean_object* v_stdout_2356_, lean_object* v_toBind_2357_, lean_object* v_inst_2358_, lean_object* v_x_2359_, lean_object* v___f_2360_, lean_object* v___f_2361_, lean_object* v_stderr_2362_){
_start:
{
lean_object* v_map_2363_; lean_object* v_mapConst_2364_; lean_object* v___f_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___f_2371_; lean_object* v_y_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; 
v_map_2363_ = lean_ctor_get(v_toFunctor_2354_, 0);
lean_inc(v_map_2363_);
v_mapConst_2364_ = lean_ctor_get(v_toFunctor_2354_, 1);
lean_inc_n(v_mapConst_2364_, 2);
lean_dec_ref(v_toFunctor_2354_);
lean_inc(v_inst_2355_);
v___f_2365_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__5), 4, 3);
lean_closure_set(v___f_2365_, 0, v_stderr_2362_);
lean_closure_set(v___f_2365_, 1, v_inst_2355_);
lean_closure_set(v___f_2365_, 2, v_mapConst_2364_);
v___x_2366_ = lean_alloc_closure((void*)(l_IO_setStdout___boxed), 2, 1);
lean_closure_set(v___x_2366_, 0, v_stdout_2356_);
v___x_2367_ = lean_apply_2(v_inst_2355_, lean_box(0), v___x_2366_);
v___x_2368_ = lean_box(0);
v___x_2369_ = lean_apply_4(v_mapConst_2364_, lean_box(0), lean_box(0), v___x_2368_, v___x_2367_);
lean_inc(v_toBind_2357_);
v___x_2370_ = lean_apply_4(v_toBind_2357_, lean_box(0), lean_box(0), v___x_2369_, v___f_2365_);
v___f_2371_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__6___boxed), 2, 1);
lean_closure_set(v___f_2371_, 0, v___x_2370_);
v_y_2372_ = lean_apply_4(v_inst_2358_, lean_box(0), lean_box(0), v_x_2359_, v___f_2371_);
v___x_2373_ = lean_apply_4(v_map_2363_, lean_box(0), lean_box(0), v___f_2360_, v_y_2372_);
v___x_2374_ = lean_apply_4(v_toBind_2357_, lean_box(0), lean_box(0), v___x_2373_, v___f_2361_);
return v___x_2374_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__8(lean_object* v_toFunctor_2375_, lean_object* v_inst_2376_, lean_object* v_toBind_2377_, lean_object* v_inst_2378_, lean_object* v_x_2379_, lean_object* v___f_2380_, lean_object* v___f_2381_, lean_object* v___x_2382_, lean_object* v_stdout_2383_){
_start:
{
lean_object* v___f_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; 
lean_inc(v_toBind_2377_);
lean_inc(v_inst_2376_);
v___f_2384_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__7), 9, 8);
lean_closure_set(v___f_2384_, 0, v_toFunctor_2375_);
lean_closure_set(v___f_2384_, 1, v_inst_2376_);
lean_closure_set(v___f_2384_, 2, v_stdout_2383_);
lean_closure_set(v___f_2384_, 3, v_toBind_2377_);
lean_closure_set(v___f_2384_, 4, v_inst_2378_);
lean_closure_set(v___f_2384_, 5, v_x_2379_);
lean_closure_set(v___f_2384_, 6, v___f_2380_);
lean_closure_set(v___f_2384_, 7, v___f_2381_);
v___x_2385_ = lean_alloc_closure((void*)(l_IO_setStderr___boxed), 2, 1);
lean_closure_set(v___x_2385_, 0, v___x_2382_);
v___x_2386_ = lean_apply_2(v_inst_2376_, lean_box(0), v___x_2385_);
v___x_2387_ = lean_apply_4(v_toBind_2377_, lean_box(0), lean_box(0), v___x_2386_, v___f_2384_);
return v___x_2387_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__9(lean_object* v_toPure_2388_, lean_object* v___x_2389_, lean_object* v_inst_2390_, lean_object* v_toBind_2391_, lean_object* v_inst_2392_, lean_object* v_toFunctor_2393_, lean_object* v_inst_2394_, lean_object* v_x_2395_, lean_object* v___f_2396_, lean_object* v_buf_2397_){
_start:
{
lean_object* v___f_2398_; lean_object* v___f_2399_; lean_object* v___x_2400_; lean_object* v___f_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; 
lean_inc(v_buf_2397_);
v___f_2398_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2398_, 0, v_buf_2397_);
lean_inc_n(v_inst_2392_, 2);
lean_inc_n(v_toBind_2391_, 2);
v___f_2399_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__4), 7, 6);
lean_closure_set(v___f_2399_, 0, v_toPure_2388_);
lean_closure_set(v___f_2399_, 1, v___x_2389_);
lean_closure_set(v___f_2399_, 2, v_inst_2390_);
lean_closure_set(v___f_2399_, 3, v_toBind_2391_);
lean_closure_set(v___f_2399_, 4, v_inst_2392_);
lean_closure_set(v___f_2399_, 5, v___f_2398_);
v___x_2400_ = l_IO_FS_Stream_ofBuffer(v_buf_2397_);
lean_inc_ref(v___x_2400_);
v___f_2401_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__8), 9, 8);
lean_closure_set(v___f_2401_, 0, v_toFunctor_2393_);
lean_closure_set(v___f_2401_, 1, v_inst_2392_);
lean_closure_set(v___f_2401_, 2, v_toBind_2391_);
lean_closure_set(v___f_2401_, 3, v_inst_2394_);
lean_closure_set(v___f_2401_, 4, v_x_2395_);
lean_closure_set(v___f_2401_, 5, v___f_2396_);
lean_closure_set(v___f_2401_, 6, v___f_2399_);
lean_closure_set(v___f_2401_, 7, v___x_2400_);
v___x_2402_ = lean_alloc_closure((void*)(l_IO_setStdout___boxed), 2, 1);
lean_closure_set(v___x_2402_, 0, v___x_2400_);
v___x_2403_ = lean_apply_2(v_inst_2392_, lean_box(0), v___x_2402_);
v___x_2404_ = lean_apply_4(v_toBind_2391_, lean_box(0), lean_box(0), v___x_2403_, v___f_2401_);
return v___x_2404_;
}
}
static lean_object* _init_l_Lake_withLoggedIO___redArg___closed__1(void){
_start:
{
lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2406_ = lean_unsigned_to_nat(0u);
v___x_2407_ = l_ByteArray_empty;
v___x_2408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2407_);
lean_ctor_set(v___x_2408_, 1, v___x_2406_);
return v___x_2408_;
}
}
static lean_object* _init_l_Lake_withLoggedIO___redArg___closed__2(void){
_start:
{
lean_object* v___x_2409_; lean_object* v___x_2410_; 
v___x_2409_ = lean_obj_once(&l_Lake_withLoggedIO___redArg___closed__1, &l_Lake_withLoggedIO___redArg___closed__1_once, _init_l_Lake_withLoggedIO___redArg___closed__1);
v___x_2410_ = lean_alloc_closure((void*)(l_IO_mkRef___boxed), 3, 2);
lean_closure_set(v___x_2410_, 0, lean_box(0));
lean_closure_set(v___x_2410_, 1, v___x_2409_);
return v___x_2410_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg(lean_object* v_inst_2411_, lean_object* v_inst_2412_, lean_object* v_inst_2413_, lean_object* v_inst_2414_, lean_object* v_x_2415_){
_start:
{
lean_object* v_toApplicative_2416_; lean_object* v_toBind_2417_; lean_object* v_toFunctor_2418_; lean_object* v_toPure_2419_; lean_object* v___f_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___f_2424_; lean_object* v___x_2425_; 
v_toApplicative_2416_ = lean_ctor_get(v_inst_2411_, 0);
lean_inc_ref(v_toApplicative_2416_);
v_toBind_2417_ = lean_ctor_get(v_inst_2411_, 1);
lean_inc_n(v_toBind_2417_, 2);
lean_dec_ref(v_inst_2411_);
v_toFunctor_2418_ = lean_ctor_get(v_toApplicative_2416_, 0);
lean_inc_ref(v_toFunctor_2418_);
v_toPure_2419_ = lean_ctor_get(v_toApplicative_2416_, 1);
lean_inc(v_toPure_2419_);
lean_dec_ref(v_toApplicative_2416_);
v___f_2420_ = ((lean_object*)(l_Lake_withLoggedIO___redArg___closed__0));
v___x_2421_ = lean_unsigned_to_nat(0u);
v___x_2422_ = lean_obj_once(&l_Lake_withLoggedIO___redArg___closed__2, &l_Lake_withLoggedIO___redArg___closed__2_once, _init_l_Lake_withLoggedIO___redArg___closed__2);
lean_inc(v_inst_2412_);
v___x_2423_ = lean_apply_2(v_inst_2412_, lean_box(0), v___x_2422_);
v___f_2424_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__9), 10, 9);
lean_closure_set(v___f_2424_, 0, v_toPure_2419_);
lean_closure_set(v___f_2424_, 1, v___x_2421_);
lean_closure_set(v___f_2424_, 2, v_inst_2413_);
lean_closure_set(v___f_2424_, 3, v_toBind_2417_);
lean_closure_set(v___f_2424_, 4, v_inst_2412_);
lean_closure_set(v___f_2424_, 5, v_toFunctor_2418_);
lean_closure_set(v___f_2424_, 6, v_inst_2414_);
lean_closure_set(v___f_2424_, 7, v_x_2415_);
lean_closure_set(v___f_2424_, 8, v___f_2420_);
v___x_2425_ = lean_apply_4(v_toBind_2417_, lean_box(0), lean_box(0), v___x_2423_, v___f_2424_);
return v___x_2425_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO(lean_object* v_m_2426_, lean_object* v_00_u03b1_2427_, lean_object* v_inst_2428_, lean_object* v_inst_2429_, lean_object* v_inst_2430_, lean_object* v_inst_2431_, lean_object* v_x_2432_){
_start:
{
lean_object* v_toApplicative_2433_; lean_object* v_toBind_2434_; lean_object* v_toFunctor_2435_; lean_object* v_toPure_2436_; lean_object* v___f_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___f_2441_; lean_object* v___x_2442_; 
v_toApplicative_2433_ = lean_ctor_get(v_inst_2428_, 0);
lean_inc_ref(v_toApplicative_2433_);
v_toBind_2434_ = lean_ctor_get(v_inst_2428_, 1);
lean_inc_n(v_toBind_2434_, 2);
lean_dec_ref(v_inst_2428_);
v_toFunctor_2435_ = lean_ctor_get(v_toApplicative_2433_, 0);
lean_inc_ref(v_toFunctor_2435_);
v_toPure_2436_ = lean_ctor_get(v_toApplicative_2433_, 1);
lean_inc(v_toPure_2436_);
lean_dec_ref(v_toApplicative_2433_);
v___f_2437_ = ((lean_object*)(l_Lake_withLoggedIO___redArg___closed__0));
v___x_2438_ = lean_unsigned_to_nat(0u);
v___x_2439_ = lean_obj_once(&l_Lake_withLoggedIO___redArg___closed__2, &l_Lake_withLoggedIO___redArg___closed__2_once, _init_l_Lake_withLoggedIO___redArg___closed__2);
lean_inc(v_inst_2429_);
v___x_2440_ = lean_apply_2(v_inst_2429_, lean_box(0), v___x_2439_);
v___f_2441_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__9), 10, 9);
lean_closure_set(v___f_2441_, 0, v_toPure_2436_);
lean_closure_set(v___f_2441_, 1, v___x_2438_);
lean_closure_set(v___f_2441_, 2, v_inst_2430_);
lean_closure_set(v___f_2441_, 3, v_toBind_2434_);
lean_closure_set(v___f_2441_, 4, v_inst_2429_);
lean_closure_set(v___f_2441_, 5, v_toFunctor_2435_);
lean_closure_set(v___f_2441_, 6, v_inst_2431_);
lean_closure_set(v___f_2441_, 7, v_x_2432_);
lean_closure_set(v___f_2441_, 8, v___f_2437_);
v___x_2442_ = lean_apply_4(v_toBind_2434_, lean_box(0), lean_box(0), v___x_2440_, v___f_2441_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_error___redArg___lam__3(lean_object* v_inst_2443_, lean_object* v___x_2444_, lean_object* v___f_2445_, lean_object* v_toBind_2446_, lean_object* v_iniPos_2447_){
_start:
{
lean_object* v_throw_2448_; lean_object* v_tryCatch_2449_; lean_object* v___f_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; 
v_throw_2448_ = lean_ctor_get(v_inst_2443_, 0);
lean_inc(v_throw_2448_);
v_tryCatch_2449_ = lean_ctor_get(v_inst_2443_, 1);
lean_inc(v_tryCatch_2449_);
lean_dec_ref(v_inst_2443_);
v___f_2450_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2450_, 0, v_throw_2448_);
lean_closure_set(v___f_2450_, 1, v_iniPos_2447_);
v___x_2451_ = lean_apply_3(v_tryCatch_2449_, lean_box(0), v___x_2444_, v___f_2445_);
v___x_2452_ = lean_apply_4(v_toBind_2446_, lean_box(0), lean_box(0), v___x_2451_, v___f_2450_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_error___redArg(lean_object* v_inst_2453_, lean_object* v_inst_2454_, lean_object* v_inst_2455_, lean_object* v_inst_2456_, lean_object* v_msg_2457_){
_start:
{
lean_object* v_toApplicative_2458_; lean_object* v_toFunctor_2459_; lean_object* v_toBind_2460_; lean_object* v_toPure_2461_; lean_object* v_map_2462_; lean_object* v_get_2463_; lean_object* v___f_2464_; uint8_t v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___f_2468_; lean_object* v___f_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; 
v_toApplicative_2458_ = lean_ctor_get(v_inst_2453_, 0);
lean_inc_ref(v_toApplicative_2458_);
v_toFunctor_2459_ = lean_ctor_get(v_toApplicative_2458_, 0);
lean_inc_ref(v_toFunctor_2459_);
v_toBind_2460_ = lean_ctor_get(v_inst_2453_, 1);
lean_inc_n(v_toBind_2460_, 2);
lean_dec_ref(v_inst_2453_);
v_toPure_2461_ = lean_ctor_get(v_toApplicative_2458_, 1);
lean_inc(v_toPure_2461_);
lean_dec_ref(v_toApplicative_2458_);
v_map_2462_ = lean_ctor_get(v_toFunctor_2459_, 0);
lean_inc(v_map_2462_);
lean_dec_ref(v_toFunctor_2459_);
v_get_2463_ = lean_ctor_get(v_inst_2455_, 0);
lean_inc(v_get_2463_);
lean_dec_ref(v_inst_2455_);
v___f_2464_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___x_2465_ = 3;
v___x_2466_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2466_, 0, v_msg_2457_);
lean_ctor_set_uint8(v___x_2466_, sizeof(void*)*1, v___x_2465_);
v___x_2467_ = lean_apply_1(v_inst_2454_, v___x_2466_);
v___f_2468_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2468_, 0, v_toPure_2461_);
v___f_2469_ = lean_alloc_closure((void*)(l_Lake_ELog_error___redArg___lam__3), 5, 4);
lean_closure_set(v___f_2469_, 0, v_inst_2456_);
lean_closure_set(v___f_2469_, 1, v___x_2467_);
lean_closure_set(v___f_2469_, 2, v___f_2468_);
lean_closure_set(v___f_2469_, 3, v_toBind_2460_);
v___x_2470_ = lean_apply_4(v_map_2462_, lean_box(0), lean_box(0), v___f_2464_, v_get_2463_);
v___x_2471_ = lean_apply_4(v_toBind_2460_, lean_box(0), lean_box(0), v___x_2470_, v___f_2469_);
return v___x_2471_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_error(lean_object* v_m_2472_, lean_object* v_00_u03b1_2473_, lean_object* v_inst_2474_, lean_object* v_inst_2475_, lean_object* v_inst_2476_, lean_object* v_inst_2477_, lean_object* v_msg_2478_){
_start:
{
lean_object* v_toApplicative_2479_; lean_object* v_toFunctor_2480_; lean_object* v_toBind_2481_; lean_object* v_toPure_2482_; lean_object* v_map_2483_; lean_object* v_get_2484_; lean_object* v___f_2485_; uint8_t v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___f_2489_; lean_object* v___f_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; 
v_toApplicative_2479_ = lean_ctor_get(v_inst_2474_, 0);
lean_inc_ref(v_toApplicative_2479_);
v_toFunctor_2480_ = lean_ctor_get(v_toApplicative_2479_, 0);
lean_inc_ref(v_toFunctor_2480_);
v_toBind_2481_ = lean_ctor_get(v_inst_2474_, 1);
lean_inc_n(v_toBind_2481_, 2);
lean_dec_ref(v_inst_2474_);
v_toPure_2482_ = lean_ctor_get(v_toApplicative_2479_, 1);
lean_inc(v_toPure_2482_);
lean_dec_ref(v_toApplicative_2479_);
v_map_2483_ = lean_ctor_get(v_toFunctor_2480_, 0);
lean_inc(v_map_2483_);
lean_dec_ref(v_toFunctor_2480_);
v_get_2484_ = lean_ctor_get(v_inst_2476_, 0);
lean_inc(v_get_2484_);
lean_dec_ref(v_inst_2476_);
v___f_2485_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___x_2486_ = 3;
v___x_2487_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2487_, 0, v_msg_2478_);
lean_ctor_set_uint8(v___x_2487_, sizeof(void*)*1, v___x_2486_);
v___x_2488_ = lean_apply_1(v_inst_2475_, v___x_2487_);
v___f_2489_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2489_, 0, v_toPure_2482_);
v___f_2490_ = lean_alloc_closure((void*)(l_Lake_ELog_error___redArg___lam__3), 5, 4);
lean_closure_set(v___f_2490_, 0, v_inst_2477_);
lean_closure_set(v___f_2490_, 1, v___x_2488_);
lean_closure_set(v___f_2490_, 2, v___f_2489_);
lean_closure_set(v___f_2490_, 3, v_toBind_2481_);
v___x_2491_ = lean_apply_4(v_map_2483_, lean_box(0), lean_box(0), v___f_2485_, v_get_2484_);
v___x_2492_ = lean_apply_4(v_toBind_2481_, lean_box(0), lean_box(0), v___x_2491_, v___f_2490_);
return v___x_2492_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_monadError___redArg___lam__4(lean_object* v_inst_2493_, lean_object* v_inst_2494_, lean_object* v_inst_2495_, lean_object* v_inst_2496_, lean_object* v___f_2497_, lean_object* v_00_u03b1_2498_, lean_object* v___y_2499_){
_start:
{
lean_object* v_toApplicative_2500_; lean_object* v_toFunctor_2501_; lean_object* v_toBind_2502_; lean_object* v_toPure_2503_; lean_object* v_map_2504_; lean_object* v_get_2505_; uint8_t v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___f_2509_; lean_object* v___f_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; 
v_toApplicative_2500_ = lean_ctor_get(v_inst_2493_, 0);
lean_inc_ref(v_toApplicative_2500_);
v_toFunctor_2501_ = lean_ctor_get(v_toApplicative_2500_, 0);
lean_inc_ref(v_toFunctor_2501_);
v_toBind_2502_ = lean_ctor_get(v_inst_2493_, 1);
lean_inc_n(v_toBind_2502_, 2);
lean_dec_ref(v_inst_2493_);
v_toPure_2503_ = lean_ctor_get(v_toApplicative_2500_, 1);
lean_inc(v_toPure_2503_);
lean_dec_ref(v_toApplicative_2500_);
v_map_2504_ = lean_ctor_get(v_toFunctor_2501_, 0);
lean_inc(v_map_2504_);
lean_dec_ref(v_toFunctor_2501_);
v_get_2505_ = lean_ctor_get(v_inst_2494_, 0);
lean_inc(v_get_2505_);
lean_dec_ref(v_inst_2494_);
v___x_2506_ = 3;
v___x_2507_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2507_, 0, v___y_2499_);
lean_ctor_set_uint8(v___x_2507_, sizeof(void*)*1, v___x_2506_);
v___x_2508_ = lean_apply_1(v_inst_2495_, v___x_2507_);
v___f_2509_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2509_, 0, v_toPure_2503_);
v___f_2510_ = lean_alloc_closure((void*)(l_Lake_ELog_error___redArg___lam__3), 5, 4);
lean_closure_set(v___f_2510_, 0, v_inst_2496_);
lean_closure_set(v___f_2510_, 1, v___x_2508_);
lean_closure_set(v___f_2510_, 2, v___f_2509_);
lean_closure_set(v___f_2510_, 3, v_toBind_2502_);
v___x_2511_ = lean_apply_4(v_map_2504_, lean_box(0), lean_box(0), v___f_2497_, v_get_2505_);
v___x_2512_ = lean_apply_4(v_toBind_2502_, lean_box(0), lean_box(0), v___x_2511_, v___f_2510_);
return v___x_2512_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_monadError___redArg(lean_object* v_inst_2513_, lean_object* v_inst_2514_, lean_object* v_inst_2515_, lean_object* v_inst_2516_){
_start:
{
lean_object* v___f_2517_; lean_object* v___f_2518_; 
v___f_2517_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2518_ = lean_alloc_closure((void*)(l_Lake_ELog_monadError___redArg___lam__4), 7, 5);
lean_closure_set(v___f_2518_, 0, v_inst_2513_);
lean_closure_set(v___f_2518_, 1, v_inst_2515_);
lean_closure_set(v___f_2518_, 2, v_inst_2514_);
lean_closure_set(v___f_2518_, 3, v_inst_2516_);
lean_closure_set(v___f_2518_, 4, v___f_2517_);
return v___f_2518_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_monadError(lean_object* v_m_2519_, lean_object* v_inst_2520_, lean_object* v_inst_2521_, lean_object* v_inst_2522_, lean_object* v_inst_2523_){
_start:
{
lean_object* v___f_2524_; lean_object* v___f_2525_; 
v___f_2524_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2525_ = lean_alloc_closure((void*)(l_Lake_ELog_monadError___redArg___lam__4), 7, 5);
lean_closure_set(v___f_2525_, 0, v_inst_2520_);
lean_closure_set(v___f_2525_, 1, v_inst_2522_);
lean_closure_set(v___f_2525_, 2, v_inst_2521_);
lean_closure_set(v___f_2525_, 3, v_inst_2523_);
lean_closure_set(v___f_2525_, 4, v___f_2524_);
return v___f_2525_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_failure___redArg___lam__1(lean_object* v_inst_2526_, lean_object* v_____do__lift_2527_){
_start:
{
lean_object* v_throw_2528_; lean_object* v___x_2529_; 
v_throw_2528_ = lean_ctor_get(v_inst_2526_, 0);
lean_inc(v_throw_2528_);
lean_dec_ref(v_inst_2526_);
v___x_2529_ = lean_apply_2(v_throw_2528_, lean_box(0), v_____do__lift_2527_);
return v___x_2529_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_failure___redArg(lean_object* v_inst_2530_, lean_object* v_inst_2531_, lean_object* v_inst_2532_){
_start:
{
lean_object* v_toApplicative_2533_; lean_object* v_toFunctor_2534_; lean_object* v_toBind_2535_; lean_object* v_map_2536_; lean_object* v_get_2537_; lean_object* v___f_2538_; lean_object* v___f_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; 
v_toApplicative_2533_ = lean_ctor_get(v_inst_2530_, 0);
v_toFunctor_2534_ = lean_ctor_get(v_toApplicative_2533_, 0);
lean_inc_ref(v_toFunctor_2534_);
v_toBind_2535_ = lean_ctor_get(v_inst_2530_, 1);
lean_inc(v_toBind_2535_);
lean_dec_ref(v_inst_2530_);
v_map_2536_ = lean_ctor_get(v_toFunctor_2534_, 0);
lean_inc(v_map_2536_);
lean_dec_ref(v_toFunctor_2534_);
v_get_2537_ = lean_ctor_get(v_inst_2531_, 0);
lean_inc(v_get_2537_);
lean_dec_ref(v_inst_2531_);
v___f_2538_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2539_ = lean_alloc_closure((void*)(l_Lake_ELog_failure___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2539_, 0, v_inst_2532_);
v___x_2540_ = lean_apply_4(v_map_2536_, lean_box(0), lean_box(0), v___f_2538_, v_get_2537_);
v___x_2541_ = lean_apply_4(v_toBind_2535_, lean_box(0), lean_box(0), v___x_2540_, v___f_2539_);
return v___x_2541_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_failure(lean_object* v_m_2542_, lean_object* v_00_u03b1_2543_, lean_object* v_inst_2544_, lean_object* v_inst_2545_, lean_object* v_inst_2546_){
_start:
{
lean_object* v_toApplicative_2547_; lean_object* v_toFunctor_2548_; lean_object* v_toBind_2549_; lean_object* v_map_2550_; lean_object* v_get_2551_; lean_object* v___f_2552_; lean_object* v___f_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; 
v_toApplicative_2547_ = lean_ctor_get(v_inst_2544_, 0);
v_toFunctor_2548_ = lean_ctor_get(v_toApplicative_2547_, 0);
lean_inc_ref(v_toFunctor_2548_);
v_toBind_2549_ = lean_ctor_get(v_inst_2544_, 1);
lean_inc(v_toBind_2549_);
lean_dec_ref(v_inst_2544_);
v_map_2550_ = lean_ctor_get(v_toFunctor_2548_, 0);
lean_inc(v_map_2550_);
lean_dec_ref(v_toFunctor_2548_);
v_get_2551_ = lean_ctor_get(v_inst_2545_, 0);
lean_inc(v_get_2551_);
lean_dec_ref(v_inst_2545_);
v___f_2552_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2553_ = lean_alloc_closure((void*)(l_Lake_ELog_failure___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2553_, 0, v_inst_2546_);
v___x_2554_ = lean_apply_4(v_map_2550_, lean_box(0), lean_box(0), v___f_2552_, v_get_2551_);
v___x_2555_ = lean_apply_4(v_toBind_2549_, lean_box(0), lean_box(0), v___x_2554_, v___f_2553_);
return v___x_2555_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg___lam__0(lean_object* v_y_2556_, lean_object* v_____r_2557_){
_start:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; 
v___x_2558_ = lean_box(0);
v___x_2559_ = lean_apply_1(v_y_2556_, v___x_2558_);
return v___x_2559_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg___lam__1(lean_object* v_errPos_2560_, lean_object* v_s_2561_){
_start:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; 
v___x_2562_ = lean_box(0);
v___x_2563_ = l_Array_shrink___redArg(v_s_2561_, v_errPos_2560_);
v___x_2564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2564_, 0, v___x_2562_);
lean_ctor_set(v___x_2564_, 1, v___x_2563_);
return v___x_2564_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg___lam__1___boxed(lean_object* v_errPos_2565_, lean_object* v_s_2566_){
_start:
{
lean_object* v_res_2567_; 
v_res_2567_ = l_Lake_ELog_orElse___redArg___lam__1(v_errPos_2565_, v_s_2566_);
lean_dec(v_errPos_2565_);
return v_res_2567_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg___lam__2(lean_object* v_inst_2568_, lean_object* v_toBind_2569_, lean_object* v___f_2570_, lean_object* v_errPos_2571_){
_start:
{
lean_object* v_modifyGet_2572_; lean_object* v___f_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; 
v_modifyGet_2572_ = lean_ctor_get(v_inst_2568_, 2);
lean_inc(v_modifyGet_2572_);
lean_dec_ref(v_inst_2568_);
v___f_2573_ = lean_alloc_closure((void*)(l_Lake_ELog_orElse___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2573_, 0, v_errPos_2571_);
v___x_2574_ = lean_apply_2(v_modifyGet_2572_, lean_box(0), v___f_2573_);
v___x_2575_ = lean_apply_4(v_toBind_2569_, lean_box(0), lean_box(0), v___x_2574_, v___f_2570_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg(lean_object* v_inst_2576_, lean_object* v_inst_2577_, lean_object* v_inst_2578_, lean_object* v_x_2579_, lean_object* v_y_2580_){
_start:
{
lean_object* v_toBind_2581_; lean_object* v_tryCatch_2582_; lean_object* v___f_2583_; lean_object* v___f_2584_; lean_object* v___x_2585_; 
v_toBind_2581_ = lean_ctor_get(v_inst_2576_, 1);
lean_inc(v_toBind_2581_);
lean_dec_ref(v_inst_2576_);
v_tryCatch_2582_ = lean_ctor_get(v_inst_2578_, 1);
lean_inc(v_tryCatch_2582_);
lean_dec_ref(v_inst_2578_);
v___f_2583_ = lean_alloc_closure((void*)(l_Lake_ELog_orElse___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2583_, 0, v_y_2580_);
v___f_2584_ = lean_alloc_closure((void*)(l_Lake_ELog_orElse___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2584_, 0, v_inst_2577_);
lean_closure_set(v___f_2584_, 1, v_toBind_2581_);
lean_closure_set(v___f_2584_, 2, v___f_2583_);
v___x_2585_ = lean_apply_3(v_tryCatch_2582_, lean_box(0), v_x_2579_, v___f_2584_);
return v___x_2585_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_orElse(lean_object* v_m_2586_, lean_object* v_00_u03b1_2587_, lean_object* v_inst_2588_, lean_object* v_inst_2589_, lean_object* v_inst_2590_, lean_object* v_x_2591_, lean_object* v_y_2592_){
_start:
{
lean_object* v_toBind_2593_; lean_object* v_tryCatch_2594_; lean_object* v___f_2595_; lean_object* v___f_2596_; lean_object* v___x_2597_; 
v_toBind_2593_ = lean_ctor_get(v_inst_2588_, 1);
lean_inc(v_toBind_2593_);
lean_dec_ref(v_inst_2588_);
v_tryCatch_2594_ = lean_ctor_get(v_inst_2590_, 1);
lean_inc(v_tryCatch_2594_);
lean_dec_ref(v_inst_2590_);
v___f_2595_ = lean_alloc_closure((void*)(l_Lake_ELog_orElse___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2595_, 0, v_y_2592_);
v___f_2596_ = lean_alloc_closure((void*)(l_Lake_ELog_orElse___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2596_, 0, v_inst_2589_);
lean_closure_set(v___f_2596_, 1, v_toBind_2593_);
lean_closure_set(v___f_2596_, 2, v___f_2595_);
v___x_2597_ = lean_apply_3(v_tryCatch_2594_, lean_box(0), v_x_2591_, v___f_2596_);
return v___x_2597_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_alternative___redArg___lam__2(lean_object* v_toApplicative_2598_, lean_object* v_inst_2599_, lean_object* v___f_2600_, lean_object* v_toBind_2601_, lean_object* v___f_2602_, lean_object* v_00_u03b1_2603_){
_start:
{
lean_object* v_toFunctor_2604_; lean_object* v_map_2605_; lean_object* v_get_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; 
v_toFunctor_2604_ = lean_ctor_get(v_toApplicative_2598_, 0);
lean_inc_ref(v_toFunctor_2604_);
lean_dec_ref(v_toApplicative_2598_);
v_map_2605_ = lean_ctor_get(v_toFunctor_2604_, 0);
lean_inc(v_map_2605_);
lean_dec_ref(v_toFunctor_2604_);
v_get_2606_ = lean_ctor_get(v_inst_2599_, 0);
lean_inc(v_get_2606_);
lean_dec_ref(v_inst_2599_);
v___x_2607_ = lean_apply_4(v_map_2605_, lean_box(0), lean_box(0), v___f_2600_, v_get_2606_);
v___x_2608_ = lean_apply_4(v_toBind_2601_, lean_box(0), lean_box(0), v___x_2607_, v___f_2602_);
return v___x_2608_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_alternative___redArg___lam__0(lean_object* v___y_2609_, lean_object* v_____r_2610_){
_start:
{
lean_object* v___x_2611_; lean_object* v___x_2612_; 
v___x_2611_ = lean_box(0);
v___x_2612_ = lean_apply_1(v___y_2609_, v___x_2611_);
return v___x_2612_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_alternative___redArg___lam__4(lean_object* v_inst_2613_, lean_object* v_inst_2614_, lean_object* v_toBind_2615_, lean_object* v_00_u03b1_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_){
_start:
{
lean_object* v_tryCatch_2619_; lean_object* v___f_2620_; lean_object* v___f_2621_; lean_object* v___x_2622_; 
v_tryCatch_2619_ = lean_ctor_get(v_inst_2613_, 1);
lean_inc(v_tryCatch_2619_);
lean_dec_ref(v_inst_2613_);
v___f_2620_ = lean_alloc_closure((void*)(l_Lake_ELog_alternative___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2620_, 0, v___y_2618_);
v___f_2621_ = lean_alloc_closure((void*)(l_Lake_ELog_orElse___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2621_, 0, v_inst_2614_);
lean_closure_set(v___f_2621_, 1, v_toBind_2615_);
lean_closure_set(v___f_2621_, 2, v___f_2620_);
v___x_2622_ = lean_apply_3(v_tryCatch_2619_, lean_box(0), v___y_2617_, v___f_2621_);
return v___x_2622_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_alternative___redArg(lean_object* v_inst_2623_, lean_object* v_inst_2624_, lean_object* v_inst_2625_){
_start:
{
lean_object* v_toApplicative_2626_; lean_object* v_toBind_2627_; lean_object* v___f_2628_; lean_object* v___f_2629_; lean_object* v___f_2630_; lean_object* v___f_2631_; lean_object* v___x_2632_; 
v_toApplicative_2626_ = lean_ctor_get(v_inst_2623_, 0);
lean_inc_ref_n(v_toApplicative_2626_, 2);
v_toBind_2627_ = lean_ctor_get(v_inst_2623_, 1);
lean_inc_n(v_toBind_2627_, 2);
lean_dec_ref(v_inst_2623_);
v___f_2628_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
lean_inc_ref(v_inst_2625_);
v___f_2629_ = lean_alloc_closure((void*)(l_Lake_ELog_failure___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2629_, 0, v_inst_2625_);
lean_inc_ref(v_inst_2624_);
v___f_2630_ = lean_alloc_closure((void*)(l_Lake_ELog_alternative___redArg___lam__2), 6, 5);
lean_closure_set(v___f_2630_, 0, v_toApplicative_2626_);
lean_closure_set(v___f_2630_, 1, v_inst_2624_);
lean_closure_set(v___f_2630_, 2, v___f_2628_);
lean_closure_set(v___f_2630_, 3, v_toBind_2627_);
lean_closure_set(v___f_2630_, 4, v___f_2629_);
v___f_2631_ = lean_alloc_closure((void*)(l_Lake_ELog_alternative___redArg___lam__4), 6, 3);
lean_closure_set(v___f_2631_, 0, v_inst_2625_);
lean_closure_set(v___f_2631_, 1, v_inst_2624_);
lean_closure_set(v___f_2631_, 2, v_toBind_2627_);
v___x_2632_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2632_, 0, v_toApplicative_2626_);
lean_ctor_set(v___x_2632_, 1, v___f_2630_);
lean_ctor_set(v___x_2632_, 2, v___f_2631_);
return v___x_2632_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_alternative(lean_object* v_m_2633_, lean_object* v_inst_2634_, lean_object* v_inst_2635_, lean_object* v_inst_2636_){
_start:
{
lean_object* v_toApplicative_2637_; lean_object* v_toBind_2638_; lean_object* v___f_2639_; lean_object* v___f_2640_; lean_object* v___f_2641_; lean_object* v___f_2642_; lean_object* v___x_2643_; 
v_toApplicative_2637_ = lean_ctor_get(v_inst_2634_, 0);
lean_inc_ref_n(v_toApplicative_2637_, 2);
v_toBind_2638_ = lean_ctor_get(v_inst_2634_, 1);
lean_inc_n(v_toBind_2638_, 2);
lean_dec_ref(v_inst_2634_);
v___f_2639_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
lean_inc_ref(v_inst_2636_);
v___f_2640_ = lean_alloc_closure((void*)(l_Lake_ELog_failure___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2640_, 0, v_inst_2636_);
lean_inc_ref(v_inst_2635_);
v___f_2641_ = lean_alloc_closure((void*)(l_Lake_ELog_alternative___redArg___lam__2), 6, 5);
lean_closure_set(v___f_2641_, 0, v_toApplicative_2637_);
lean_closure_set(v___f_2641_, 1, v_inst_2635_);
lean_closure_set(v___f_2641_, 2, v___f_2639_);
lean_closure_set(v___f_2641_, 3, v_toBind_2638_);
lean_closure_set(v___f_2641_, 4, v___f_2640_);
v___f_2642_ = lean_alloc_closure((void*)(l_Lake_ELog_alternative___redArg___lam__4), 6, 3);
lean_closure_set(v___f_2642_, 0, v_inst_2636_);
lean_closure_set(v___f_2642_, 1, v_inst_2635_);
lean_closure_set(v___f_2642_, 2, v_toBind_2638_);
v___x_2643_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2643_, 0, v_toApplicative_2637_);
lean_ctor_set(v___x_2643_, 1, v___f_2641_);
lean_ctor_set(v___x_2643_, 2, v___f_2642_);
return v___x_2643_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLogLogTOfMonad___redArg(lean_object* v_inst_2644_){
_start:
{
lean_object* v___x_2645_; lean_object* v___x_2646_; 
v___x_2645_ = l_instMonadStateOfStateTOfMonad___redArg(v_inst_2644_);
v___x_2646_ = lean_alloc_closure((void*)(l_Lake_pushLogEntry), 3, 2);
lean_closure_set(v___x_2646_, 0, lean_box(0));
lean_closure_set(v___x_2646_, 1, v___x_2645_);
return v___x_2646_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLogLogTOfMonad(lean_object* v_m_2647_, lean_object* v_inst_2648_){
_start:
{
lean_object* v___x_2649_; 
v___x_2649_ = l_Lake_instMonadLogLogTOfMonad___redArg(v_inst_2648_);
return v___x_2649_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_run___redArg(lean_object* v_self_2650_, lean_object* v_log_2651_){
_start:
{
lean_object* v___x_2652_; 
v___x_2652_ = lean_apply_1(v_self_2650_, v_log_2651_);
return v___x_2652_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_run(lean_object* v_m_2653_, lean_object* v_00_u03b1_2654_, lean_object* v_self_2655_, lean_object* v_log_2656_){
_start:
{
lean_object* v___x_2657_; 
v___x_2657_ = lean_apply_1(v_self_2655_, v_log_2656_);
return v___x_2657_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_run_x27___redArg___lam__0(lean_object* v_x_2658_){
_start:
{
lean_object* v_fst_2659_; 
v_fst_2659_ = lean_ctor_get(v_x_2658_, 0);
lean_inc(v_fst_2659_);
return v_fst_2659_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_run_x27___redArg___lam__0___boxed(lean_object* v_x_2660_){
_start:
{
lean_object* v_res_2661_; 
v_res_2661_ = l_Lake_LogT_run_x27___redArg___lam__0(v_x_2660_);
lean_dec_ref(v_x_2660_);
return v_res_2661_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_run_x27___redArg(lean_object* v_inst_2663_, lean_object* v_self_2664_, lean_object* v_log_2665_){
_start:
{
lean_object* v_map_2666_; lean_object* v___f_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; 
v_map_2666_ = lean_ctor_get(v_inst_2663_, 0);
lean_inc(v_map_2666_);
lean_dec_ref(v_inst_2663_);
v___f_2667_ = ((lean_object*)(l_Lake_LogT_run_x27___redArg___closed__0));
v___x_2668_ = lean_apply_1(v_self_2664_, v_log_2665_);
v___x_2669_ = lean_apply_4(v_map_2666_, lean_box(0), lean_box(0), v___f_2667_, v___x_2668_);
return v___x_2669_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_run_x27(lean_object* v_m_2670_, lean_object* v_00_u03b1_2671_, lean_object* v_inst_2672_, lean_object* v_self_2673_, lean_object* v_log_2674_){
_start:
{
lean_object* v_map_2675_; lean_object* v___f_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; 
v_map_2675_ = lean_ctor_get(v_inst_2672_, 0);
lean_inc(v_map_2675_);
lean_dec_ref(v_inst_2672_);
v___f_2676_ = ((lean_object*)(l_Lake_LogT_run_x27___redArg___closed__0));
v___x_2677_ = lean_apply_1(v_self_2673_, v_log_2674_);
v___x_2678_ = lean_apply_4(v_map_2675_, lean_box(0), lean_box(0), v___f_2676_, v___x_2677_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___redArg___lam__1(lean_object* v_toPure_2679_, lean_object* v_fst_2680_, lean_object* v_____r_2681_){
_start:
{
lean_object* v___x_2682_; 
v___x_2682_ = lean_apply_2(v_toPure_2679_, lean_box(0), v_fst_2680_);
return v___x_2682_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___redArg___lam__0(lean_object* v_toPure_2683_, lean_object* v_set_2684_, lean_object* v_toBind_2685_, lean_object* v_____x_2686_){
_start:
{
lean_object* v_fst_2687_; lean_object* v_snd_2688_; lean_object* v___f_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; 
v_fst_2687_ = lean_ctor_get(v_____x_2686_, 0);
lean_inc(v_fst_2687_);
v_snd_2688_ = lean_ctor_get(v_____x_2686_, 1);
lean_inc(v_snd_2688_);
lean_dec_ref(v_____x_2686_);
v___f_2689_ = lean_alloc_closure((void*)(l_Lake_LogT_takeAndRun___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2689_, 0, v_toPure_2683_);
lean_closure_set(v___f_2689_, 1, v_fst_2687_);
v___x_2690_ = lean_apply_1(v_set_2684_, v_snd_2688_);
v___x_2691_ = lean_apply_4(v_toBind_2685_, lean_box(0), lean_box(0), v___x_2690_, v___f_2689_);
return v___x_2691_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___redArg___lam__2(lean_object* v_self_2692_, lean_object* v_inst_2693_, lean_object* v_toBind_2694_, lean_object* v___f_2695_, lean_object* v_____do__lift_2696_){
_start:
{
lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; 
v___x_2697_ = lean_apply_1(v_self_2692_, v_____do__lift_2696_);
v___x_2698_ = lean_apply_2(v_inst_2693_, lean_box(0), v___x_2697_);
v___x_2699_ = lean_apply_4(v_toBind_2694_, lean_box(0), lean_box(0), v___x_2698_, v___f_2695_);
return v___x_2699_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___redArg(lean_object* v_inst_2700_, lean_object* v_inst_2701_, lean_object* v_inst_2702_, lean_object* v_self_2703_){
_start:
{
lean_object* v_toApplicative_2704_; lean_object* v_toBind_2705_; lean_object* v_set_2706_; lean_object* v_modifyGet_2707_; lean_object* v_toPure_2708_; lean_object* v___f_2709_; lean_object* v___x_2710_; lean_object* v___f_2711_; lean_object* v___f_2712_; lean_object* v___x_2713_; 
v_toApplicative_2704_ = lean_ctor_get(v_inst_2700_, 0);
lean_inc_ref(v_toApplicative_2704_);
v_toBind_2705_ = lean_ctor_get(v_inst_2700_, 1);
lean_inc_n(v_toBind_2705_, 3);
lean_dec_ref(v_inst_2700_);
v_set_2706_ = lean_ctor_get(v_inst_2701_, 1);
lean_inc(v_set_2706_);
v_modifyGet_2707_ = lean_ctor_get(v_inst_2701_, 2);
lean_inc(v_modifyGet_2707_);
lean_dec_ref(v_inst_2701_);
v_toPure_2708_ = lean_ctor_get(v_toApplicative_2704_, 1);
lean_inc(v_toPure_2708_);
lean_dec_ref(v_toApplicative_2704_);
v___f_2709_ = ((lean_object*)(l_Lake_takeLog___redArg___closed__0));
v___x_2710_ = lean_apply_2(v_modifyGet_2707_, lean_box(0), v___f_2709_);
v___f_2711_ = lean_alloc_closure((void*)(l_Lake_LogT_takeAndRun___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2711_, 0, v_toPure_2708_);
lean_closure_set(v___f_2711_, 1, v_set_2706_);
lean_closure_set(v___f_2711_, 2, v_toBind_2705_);
v___f_2712_ = lean_alloc_closure((void*)(l_Lake_LogT_takeAndRun___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2712_, 0, v_self_2703_);
lean_closure_set(v___f_2712_, 1, v_inst_2702_);
lean_closure_set(v___f_2712_, 2, v_toBind_2705_);
lean_closure_set(v___f_2712_, 3, v___f_2711_);
v___x_2713_ = lean_apply_4(v_toBind_2705_, lean_box(0), lean_box(0), v___x_2710_, v___f_2712_);
return v___x_2713_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun(lean_object* v_n_2714_, lean_object* v_m_2715_, lean_object* v_00_u03b1_2716_, lean_object* v_inst_2717_, lean_object* v_inst_2718_, lean_object* v_inst_2719_, lean_object* v_inst_2720_, lean_object* v_self_2721_){
_start:
{
lean_object* v_toApplicative_2722_; lean_object* v_toBind_2723_; lean_object* v_set_2724_; lean_object* v_modifyGet_2725_; lean_object* v_toPure_2726_; lean_object* v___f_2727_; lean_object* v___x_2728_; lean_object* v___f_2729_; lean_object* v___f_2730_; lean_object* v___x_2731_; 
v_toApplicative_2722_ = lean_ctor_get(v_inst_2717_, 0);
lean_inc_ref(v_toApplicative_2722_);
v_toBind_2723_ = lean_ctor_get(v_inst_2717_, 1);
lean_inc_n(v_toBind_2723_, 3);
lean_dec_ref(v_inst_2717_);
v_set_2724_ = lean_ctor_get(v_inst_2718_, 1);
lean_inc(v_set_2724_);
v_modifyGet_2725_ = lean_ctor_get(v_inst_2718_, 2);
lean_inc(v_modifyGet_2725_);
lean_dec_ref(v_inst_2718_);
v_toPure_2726_ = lean_ctor_get(v_toApplicative_2722_, 1);
lean_inc(v_toPure_2726_);
lean_dec_ref(v_toApplicative_2722_);
v___f_2727_ = ((lean_object*)(l_Lake_takeLog___redArg___closed__0));
v___x_2728_ = lean_apply_2(v_modifyGet_2725_, lean_box(0), v___f_2727_);
v___f_2729_ = lean_alloc_closure((void*)(l_Lake_LogT_takeAndRun___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2729_, 0, v_toPure_2726_);
lean_closure_set(v___f_2729_, 1, v_set_2724_);
lean_closure_set(v___f_2729_, 2, v_toBind_2723_);
v___f_2730_ = lean_alloc_closure((void*)(l_Lake_LogT_takeAndRun___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2730_, 0, v_self_2721_);
lean_closure_set(v___f_2730_, 1, v_inst_2719_);
lean_closure_set(v___f_2730_, 2, v_toBind_2723_);
lean_closure_set(v___f_2730_, 3, v___f_2729_);
v___x_2731_ = lean_apply_4(v_toBind_2723_, lean_box(0), lean_box(0), v___x_2728_, v___f_2730_);
return v___x_2731_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___boxed(lean_object* v_n_2732_, lean_object* v_m_2733_, lean_object* v_00_u03b1_2734_, lean_object* v_inst_2735_, lean_object* v_inst_2736_, lean_object* v_inst_2737_, lean_object* v_inst_2738_, lean_object* v_self_2739_){
_start:
{
lean_object* v_res_2740_; 
v_res_2740_ = l_Lake_LogT_takeAndRun(v_n_2732_, v_m_2733_, v_00_u03b1_2734_, v_inst_2735_, v_inst_2736_, v_inst_2737_, v_inst_2738_, v_self_2739_);
lean_dec(v_inst_2738_);
return v_res_2740_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_replayLog___redArg___lam__2(lean_object* v_toPure_2741_, lean_object* v___x_2742_, lean_object* v_toBind_2743_, lean_object* v_inst_2744_, lean_object* v___f_2745_, lean_object* v_____x_2746_){
_start:
{
lean_object* v_fst_2747_; lean_object* v_snd_2748_; lean_object* v___f_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; uint8_t v___x_2752_; 
v_fst_2747_ = lean_ctor_get(v_____x_2746_, 0);
lean_inc(v_fst_2747_);
v_snd_2748_ = lean_ctor_get(v_____x_2746_, 1);
lean_inc(v_snd_2748_);
lean_dec_ref(v_____x_2746_);
lean_inc(v_toPure_2741_);
v___f_2749_ = lean_alloc_closure((void*)(l_Lake_LogT_takeAndRun___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2749_, 0, v_toPure_2741_);
lean_closure_set(v___f_2749_, 1, v_fst_2747_);
v___x_2750_ = lean_array_get_size(v_snd_2748_);
v___x_2751_ = lean_box(0);
v___x_2752_ = lean_nat_dec_lt(v___x_2742_, v___x_2750_);
if (v___x_2752_ == 0)
{
lean_object* v___x_2753_; lean_object* v___x_2754_; 
lean_dec(v_snd_2748_);
lean_dec(v___f_2745_);
lean_dec_ref(v_inst_2744_);
v___x_2753_ = lean_apply_2(v_toPure_2741_, lean_box(0), v___x_2751_);
v___x_2754_ = lean_apply_4(v_toBind_2743_, lean_box(0), lean_box(0), v___x_2753_, v___f_2749_);
return v___x_2754_;
}
else
{
size_t v___x_2755_; size_t v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; 
lean_dec(v_toPure_2741_);
v___x_2755_ = ((size_t)0ULL);
v___x_2756_ = lean_usize_of_nat(v___x_2750_);
v___x_2757_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_2744_, v___f_2745_, v_snd_2748_, v___x_2755_, v___x_2756_, v___x_2751_);
v___x_2758_ = lean_apply_4(v_toBind_2743_, lean_box(0), lean_box(0), v___x_2757_, v___f_2749_);
return v___x_2758_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_replayLog___redArg___lam__2___boxed(lean_object* v_toPure_2759_, lean_object* v___x_2760_, lean_object* v_toBind_2761_, lean_object* v_inst_2762_, lean_object* v___f_2763_, lean_object* v_____x_2764_){
_start:
{
lean_object* v_res_2765_; 
v_res_2765_ = l_Lake_LogT_replayLog___redArg___lam__2(v_toPure_2759_, v___x_2760_, v_toBind_2761_, v_inst_2762_, v___f_2763_, v_____x_2764_);
lean_dec(v___x_2760_);
return v_res_2765_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_replayLog___redArg(lean_object* v_inst_2766_, lean_object* v_logger_2767_, lean_object* v_inst_2768_, lean_object* v_self_2769_){
_start:
{
lean_object* v_toApplicative_2770_; lean_object* v_toBind_2771_; lean_object* v_toPure_2772_; lean_object* v___f_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___f_2778_; lean_object* v___x_2779_; 
v_toApplicative_2770_ = lean_ctor_get(v_inst_2766_, 0);
v_toBind_2771_ = lean_ctor_get(v_inst_2766_, 1);
lean_inc_n(v_toBind_2771_, 2);
v_toPure_2772_ = lean_ctor_get(v_toApplicative_2770_, 1);
lean_inc(v_toPure_2772_);
v___f_2773_ = lean_alloc_closure((void*)(l_Lake_Log_replay___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2773_, 0, v_logger_2767_);
v___x_2774_ = lean_unsigned_to_nat(0u);
v___x_2775_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_2776_ = lean_apply_1(v_self_2769_, v___x_2775_);
v___x_2777_ = lean_apply_2(v_inst_2768_, lean_box(0), v___x_2776_);
v___f_2778_ = lean_alloc_closure((void*)(l_Lake_LogT_replayLog___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_2778_, 0, v_toPure_2772_);
lean_closure_set(v___f_2778_, 1, v___x_2774_);
lean_closure_set(v___f_2778_, 2, v_toBind_2771_);
lean_closure_set(v___f_2778_, 3, v_inst_2766_);
lean_closure_set(v___f_2778_, 4, v___f_2773_);
v___x_2779_ = lean_apply_4(v_toBind_2771_, lean_box(0), lean_box(0), v___x_2777_, v___f_2778_);
return v___x_2779_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_replayLog(lean_object* v_n_2780_, lean_object* v_m_2781_, lean_object* v_00_u03b1_2782_, lean_object* v_inst_2783_, lean_object* v_logger_2784_, lean_object* v_inst_2785_, lean_object* v_self_2786_){
_start:
{
lean_object* v_toApplicative_2787_; lean_object* v_toBind_2788_; lean_object* v_toPure_2789_; lean_object* v___f_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___f_2795_; lean_object* v___x_2796_; 
v_toApplicative_2787_ = lean_ctor_get(v_inst_2783_, 0);
v_toBind_2788_ = lean_ctor_get(v_inst_2783_, 1);
lean_inc_n(v_toBind_2788_, 2);
v_toPure_2789_ = lean_ctor_get(v_toApplicative_2787_, 1);
lean_inc(v_toPure_2789_);
v___f_2790_ = lean_alloc_closure((void*)(l_Lake_Log_replay___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2790_, 0, v_logger_2784_);
v___x_2791_ = lean_unsigned_to_nat(0u);
v___x_2792_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_2793_ = lean_apply_1(v_self_2786_, v___x_2792_);
v___x_2794_ = lean_apply_2(v_inst_2785_, lean_box(0), v___x_2793_);
v___f_2795_ = lean_alloc_closure((void*)(l_Lake_LogT_replayLog___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_2795_, 0, v_toPure_2789_);
lean_closure_set(v___f_2795_, 1, v___x_2791_);
lean_closure_set(v___f_2795_, 2, v_toBind_2788_);
lean_closure_set(v___f_2795_, 3, v_inst_2783_);
lean_closure_set(v___f_2795_, 4, v___f_2790_);
v___x_2796_ = lean_apply_4(v_toBind_2788_, lean_box(0), lean_box(0), v___x_2794_, v___f_2795_);
return v___x_2796_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLogELogTOfMonad___redArg(lean_object* v_inst_2797_){
_start:
{
lean_object* v_toApplicative_2798_; lean_object* v_toPure_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; 
v_toApplicative_2798_ = lean_ctor_get(v_inst_2797_, 0);
lean_inc_ref(v_toApplicative_2798_);
lean_dec_ref(v_inst_2797_);
v_toPure_2799_ = lean_ctor_get(v_toApplicative_2798_, 1);
lean_inc(v_toPure_2799_);
lean_dec_ref(v_toApplicative_2798_);
v___x_2800_ = l_Lake_EStateT_instMonadStateOfOfPure___redArg(v_toPure_2799_);
v___x_2801_ = lean_alloc_closure((void*)(l_Lake_pushLogEntry), 3, 2);
lean_closure_set(v___x_2801_, 0, lean_box(0));
lean_closure_set(v___x_2801_, 1, v___x_2800_);
return v___x_2801_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLogELogTOfMonad(lean_object* v_m_2802_, lean_object* v_inst_2803_){
_start:
{
lean_object* v___x_2804_; 
v___x_2804_ = l_Lake_instMonadLogELogTOfMonad___redArg(v_inst_2803_);
return v___x_2804_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__0(lean_object* v_x_2805_){
_start:
{
if (lean_obj_tag(v_x_2805_) == 0)
{
lean_object* v_a_2806_; lean_object* v_a_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2815_; 
v_a_2806_ = lean_ctor_get(v_x_2805_, 0);
v_a_2807_ = lean_ctor_get(v_x_2805_, 1);
v_isSharedCheck_2815_ = !lean_is_exclusive(v_x_2805_);
if (v_isSharedCheck_2815_ == 0)
{
v___x_2809_ = v_x_2805_;
v_isShared_2810_ = v_isSharedCheck_2815_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_a_2807_);
lean_inc(v_a_2806_);
lean_dec(v_x_2805_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2815_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v___x_2811_; lean_object* v___x_2813_; 
v___x_2811_ = lean_array_get_size(v_a_2806_);
lean_dec(v_a_2806_);
if (v_isShared_2810_ == 0)
{
lean_ctor_set(v___x_2809_, 0, v___x_2811_);
v___x_2813_ = v___x_2809_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v___x_2811_);
lean_ctor_set(v_reuseFailAlloc_2814_, 1, v_a_2807_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
return v___x_2813_;
}
}
}
else
{
lean_object* v_a_2816_; lean_object* v_a_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2824_; 
v_a_2816_ = lean_ctor_get(v_x_2805_, 0);
v_a_2817_ = lean_ctor_get(v_x_2805_, 1);
v_isSharedCheck_2824_ = !lean_is_exclusive(v_x_2805_);
if (v_isSharedCheck_2824_ == 0)
{
v___x_2819_ = v_x_2805_;
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_a_2817_);
lean_inc(v_a_2816_);
lean_dec(v_x_2805_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
lean_object* v___x_2822_; 
if (v_isShared_2820_ == 0)
{
v___x_2822_ = v___x_2819_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v_a_2816_);
lean_ctor_set(v_reuseFailAlloc_2823_, 1, v_a_2817_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
return v___x_2822_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__1(lean_object* v_a_2825_, lean_object* v_toPure_2826_, lean_object* v_____do__lift_2827_){
_start:
{
if (lean_obj_tag(v_____do__lift_2827_) == 0)
{
lean_object* v_a_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2836_; 
v_a_2828_ = lean_ctor_get(v_____do__lift_2827_, 1);
v_isSharedCheck_2836_ = !lean_is_exclusive(v_____do__lift_2827_);
if (v_isSharedCheck_2836_ == 0)
{
lean_object* v_unused_2837_; 
v_unused_2837_ = lean_ctor_get(v_____do__lift_2827_, 0);
lean_dec(v_unused_2837_);
v___x_2830_ = v_____do__lift_2827_;
v_isShared_2831_ = v_isSharedCheck_2836_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_a_2828_);
lean_dec(v_____do__lift_2827_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2836_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v___x_2833_; 
if (v_isShared_2831_ == 0)
{
lean_ctor_set_tag(v___x_2830_, 1);
lean_ctor_set(v___x_2830_, 0, v_a_2825_);
v___x_2833_ = v___x_2830_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2835_, 0, v_a_2825_);
lean_ctor_set(v_reuseFailAlloc_2835_, 1, v_a_2828_);
v___x_2833_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
lean_object* v___x_2834_; 
v___x_2834_ = lean_apply_2(v_toPure_2826_, lean_box(0), v___x_2833_);
return v___x_2834_;
}
}
}
else
{
lean_object* v_a_2838_; lean_object* v_a_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2847_; 
lean_dec(v_a_2825_);
v_a_2838_ = lean_ctor_get(v_____do__lift_2827_, 0);
v_a_2839_ = lean_ctor_get(v_____do__lift_2827_, 1);
v_isSharedCheck_2847_ = !lean_is_exclusive(v_____do__lift_2827_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2841_ = v_____do__lift_2827_;
v_isShared_2842_ = v_isSharedCheck_2847_;
goto v_resetjp_2840_;
}
else
{
lean_inc(v_a_2839_);
lean_inc(v_a_2838_);
lean_dec(v_____do__lift_2827_);
v___x_2841_ = lean_box(0);
v_isShared_2842_ = v_isSharedCheck_2847_;
goto v_resetjp_2840_;
}
v_resetjp_2840_:
{
lean_object* v___x_2844_; 
if (v_isShared_2842_ == 0)
{
v___x_2844_ = v___x_2841_;
goto v_reusejp_2843_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v_a_2838_);
lean_ctor_set(v_reuseFailAlloc_2846_, 1, v_a_2839_);
v___x_2844_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2843_;
}
v_reusejp_2843_:
{
lean_object* v___x_2845_; 
v___x_2845_ = lean_apply_2(v_toPure_2826_, lean_box(0), v___x_2844_);
return v___x_2845_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__2(lean_object* v_toPure_2848_, lean_object* v___x_2849_, lean_object* v_____do__lift_2850_){
_start:
{
if (lean_obj_tag(v_____do__lift_2850_) == 0)
{
lean_object* v___x_2851_; 
v___x_2851_ = lean_apply_2(v_toPure_2848_, lean_box(0), v_____do__lift_2850_);
return v___x_2851_;
}
else
{
lean_object* v_a_2852_; lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2860_; 
v_a_2852_ = lean_ctor_get(v_____do__lift_2850_, 1);
v_isSharedCheck_2860_ = !lean_is_exclusive(v_____do__lift_2850_);
if (v_isSharedCheck_2860_ == 0)
{
lean_object* v_unused_2861_; 
v_unused_2861_ = lean_ctor_get(v_____do__lift_2850_, 0);
lean_dec(v_unused_2861_);
v___x_2854_ = v_____do__lift_2850_;
v_isShared_2855_ = v_isSharedCheck_2860_;
goto v_resetjp_2853_;
}
else
{
lean_inc(v_a_2852_);
lean_dec(v_____do__lift_2850_);
v___x_2854_ = lean_box(0);
v_isShared_2855_ = v_isSharedCheck_2860_;
goto v_resetjp_2853_;
}
v_resetjp_2853_:
{
lean_object* v___x_2857_; 
if (v_isShared_2855_ == 0)
{
lean_ctor_set_tag(v___x_2854_, 0);
lean_ctor_set(v___x_2854_, 0, v___x_2849_);
v___x_2857_ = v___x_2854_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2859_; 
v_reuseFailAlloc_2859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2859_, 0, v___x_2849_);
lean_ctor_set(v_reuseFailAlloc_2859_, 1, v_a_2852_);
v___x_2857_ = v_reuseFailAlloc_2859_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
lean_object* v___x_2858_; 
v___x_2858_ = lean_apply_2(v_toPure_2848_, lean_box(0), v___x_2857_);
return v___x_2858_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__3(lean_object* v_toPure_2862_, lean_object* v___x_2863_, lean_object* v_toBind_2864_, lean_object* v_____do__lift_2865_){
_start:
{
if (lean_obj_tag(v_____do__lift_2865_) == 0)
{
lean_object* v_a_2866_; lean_object* v_a_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2881_; 
v_a_2866_ = lean_ctor_get(v_____do__lift_2865_, 0);
v_a_2867_ = lean_ctor_get(v_____do__lift_2865_, 1);
v_isSharedCheck_2881_ = !lean_is_exclusive(v_____do__lift_2865_);
if (v_isSharedCheck_2881_ == 0)
{
v___x_2869_ = v_____do__lift_2865_;
v_isShared_2870_ = v_isSharedCheck_2881_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_a_2867_);
lean_inc(v_a_2866_);
lean_dec(v_____do__lift_2865_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2881_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v___f_2871_; lean_object* v___x_2872_; lean_object* v___f_2873_; lean_object* v___x_2874_; lean_object* v___x_2876_; 
lean_inc_n(v_toPure_2862_, 2);
v___f_2871_ = lean_alloc_closure((void*)(l_Lake_instMonadErrorELogTOfMonad___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2871_, 0, v_a_2866_);
lean_closure_set(v___f_2871_, 1, v_toPure_2862_);
v___x_2872_ = lean_box(0);
v___f_2873_ = lean_alloc_closure((void*)(l_Lake_instMonadErrorELogTOfMonad___redArg___lam__2), 3, 2);
lean_closure_set(v___f_2873_, 0, v_toPure_2862_);
lean_closure_set(v___f_2873_, 1, v___x_2872_);
v___x_2874_ = lean_array_push(v_a_2867_, v___x_2863_);
if (v_isShared_2870_ == 0)
{
lean_ctor_set(v___x_2869_, 1, v___x_2874_);
lean_ctor_set(v___x_2869_, 0, v___x_2872_);
v___x_2876_ = v___x_2869_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2880_; 
v_reuseFailAlloc_2880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2880_, 0, v___x_2872_);
lean_ctor_set(v_reuseFailAlloc_2880_, 1, v___x_2874_);
v___x_2876_ = v_reuseFailAlloc_2880_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
v___x_2877_ = lean_apply_2(v_toPure_2862_, lean_box(0), v___x_2876_);
lean_inc(v_toBind_2864_);
v___x_2878_ = lean_apply_4(v_toBind_2864_, lean_box(0), lean_box(0), v___x_2877_, v___f_2873_);
v___x_2879_ = lean_apply_4(v_toBind_2864_, lean_box(0), lean_box(0), v___x_2878_, v___f_2871_);
return v___x_2879_;
}
}
}
else
{
lean_object* v_a_2882_; lean_object* v_a_2883_; lean_object* v___x_2885_; uint8_t v_isShared_2886_; uint8_t v_isSharedCheck_2891_; 
lean_dec(v_toBind_2864_);
lean_dec_ref(v___x_2863_);
v_a_2882_ = lean_ctor_get(v_____do__lift_2865_, 0);
v_a_2883_ = lean_ctor_get(v_____do__lift_2865_, 1);
v_isSharedCheck_2891_ = !lean_is_exclusive(v_____do__lift_2865_);
if (v_isSharedCheck_2891_ == 0)
{
v___x_2885_ = v_____do__lift_2865_;
v_isShared_2886_ = v_isSharedCheck_2891_;
goto v_resetjp_2884_;
}
else
{
lean_inc(v_a_2883_);
lean_inc(v_a_2882_);
lean_dec(v_____do__lift_2865_);
v___x_2885_ = lean_box(0);
v_isShared_2886_ = v_isSharedCheck_2891_;
goto v_resetjp_2884_;
}
v_resetjp_2884_:
{
lean_object* v___x_2888_; 
if (v_isShared_2886_ == 0)
{
v___x_2888_ = v___x_2885_;
goto v_reusejp_2887_;
}
else
{
lean_object* v_reuseFailAlloc_2890_; 
v_reuseFailAlloc_2890_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2890_, 0, v_a_2882_);
lean_ctor_set(v_reuseFailAlloc_2890_, 1, v_a_2883_);
v___x_2888_ = v_reuseFailAlloc_2890_;
goto v_reusejp_2887_;
}
v_reusejp_2887_:
{
lean_object* v___x_2889_; 
v___x_2889_ = lean_apply_2(v_toPure_2862_, lean_box(0), v___x_2888_);
return v___x_2889_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__4(lean_object* v_toFunctor_2892_, lean_object* v_toPure_2893_, lean_object* v_toBind_2894_, lean_object* v___f_2895_, lean_object* v_00_u03b1_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_){
_start:
{
lean_object* v_map_2899_; lean_object* v___x_2901_; uint8_t v_isShared_2902_; uint8_t v_isSharedCheck_2912_; 
v_map_2899_ = lean_ctor_get(v_toFunctor_2892_, 0);
v_isSharedCheck_2912_ = !lean_is_exclusive(v_toFunctor_2892_);
if (v_isSharedCheck_2912_ == 0)
{
lean_object* v_unused_2913_; 
v_unused_2913_ = lean_ctor_get(v_toFunctor_2892_, 1);
lean_dec(v_unused_2913_);
v___x_2901_ = v_toFunctor_2892_;
v_isShared_2902_ = v_isSharedCheck_2912_;
goto v_resetjp_2900_;
}
else
{
lean_inc(v_map_2899_);
lean_dec(v_toFunctor_2892_);
v___x_2901_ = lean_box(0);
v_isShared_2902_ = v_isSharedCheck_2912_;
goto v_resetjp_2900_;
}
v_resetjp_2900_:
{
uint8_t v___x_2903_; lean_object* v___x_2904_; lean_object* v___f_2905_; lean_object* v___x_2907_; 
v___x_2903_ = 3;
v___x_2904_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2904_, 0, v___y_2897_);
lean_ctor_set_uint8(v___x_2904_, sizeof(void*)*1, v___x_2903_);
lean_inc(v_toBind_2894_);
lean_inc(v_toPure_2893_);
v___f_2905_ = lean_alloc_closure((void*)(l_Lake_instMonadErrorELogTOfMonad___redArg___lam__3), 4, 3);
lean_closure_set(v___f_2905_, 0, v_toPure_2893_);
lean_closure_set(v___f_2905_, 1, v___x_2904_);
lean_closure_set(v___f_2905_, 2, v_toBind_2894_);
lean_inc_ref(v___y_2898_);
if (v_isShared_2902_ == 0)
{
lean_ctor_set(v___x_2901_, 1, v___y_2898_);
lean_ctor_set(v___x_2901_, 0, v___y_2898_);
v___x_2907_ = v___x_2901_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2911_; 
v_reuseFailAlloc_2911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2911_, 0, v___y_2898_);
lean_ctor_set(v_reuseFailAlloc_2911_, 1, v___y_2898_);
v___x_2907_ = v_reuseFailAlloc_2911_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; 
v___x_2908_ = lean_apply_2(v_toPure_2893_, lean_box(0), v___x_2907_);
v___x_2909_ = lean_apply_4(v_map_2899_, lean_box(0), lean_box(0), v___f_2895_, v___x_2908_);
v___x_2910_ = lean_apply_4(v_toBind_2894_, lean_box(0), lean_box(0), v___x_2909_, v___f_2905_);
return v___x_2910_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg(lean_object* v_inst_2915_){
_start:
{
lean_object* v_toApplicative_2916_; lean_object* v_toBind_2917_; lean_object* v_toFunctor_2918_; lean_object* v_toPure_2919_; lean_object* v___f_2920_; lean_object* v___f_2921_; 
v_toApplicative_2916_ = lean_ctor_get(v_inst_2915_, 0);
lean_inc_ref(v_toApplicative_2916_);
v_toBind_2917_ = lean_ctor_get(v_inst_2915_, 1);
lean_inc(v_toBind_2917_);
lean_dec_ref(v_inst_2915_);
v_toFunctor_2918_ = lean_ctor_get(v_toApplicative_2916_, 0);
lean_inc_ref(v_toFunctor_2918_);
v_toPure_2919_ = lean_ctor_get(v_toApplicative_2916_, 1);
lean_inc(v_toPure_2919_);
lean_dec_ref(v_toApplicative_2916_);
v___f_2920_ = ((lean_object*)(l_Lake_instMonadErrorELogTOfMonad___redArg___closed__0));
v___f_2921_ = lean_alloc_closure((void*)(l_Lake_instMonadErrorELogTOfMonad___redArg___lam__4), 7, 4);
lean_closure_set(v___f_2921_, 0, v_toFunctor_2918_);
lean_closure_set(v___f_2921_, 1, v_toPure_2919_);
lean_closure_set(v___f_2921_, 2, v_toBind_2917_);
lean_closure_set(v___f_2921_, 3, v___f_2920_);
return v___f_2921_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad(lean_object* v_m_2922_, lean_object* v_inst_2923_){
_start:
{
lean_object* v___x_2924_; 
v___x_2924_ = l_Lake_instMonadErrorELogTOfMonad___redArg(v_inst_2923_);
return v___x_2924_;
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__1(lean_object* v___y_2925_, lean_object* v___x_2926_, lean_object* v_toPure_2927_, lean_object* v_____do__lift_2928_){
_start:
{
if (lean_obj_tag(v_____do__lift_2928_) == 0)
{
lean_object* v_a_2929_; lean_object* v___x_2930_; 
lean_dec(v_toPure_2927_);
v_a_2929_ = lean_ctor_get(v_____do__lift_2928_, 1);
lean_inc(v_a_2929_);
lean_dec_ref_known(v_____do__lift_2928_, 2);
v___x_2930_ = lean_apply_2(v___y_2925_, v___x_2926_, v_a_2929_);
return v___x_2930_;
}
else
{
lean_object* v_a_2931_; lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2940_; 
lean_dec(v___y_2925_);
v_a_2931_ = lean_ctor_get(v_____do__lift_2928_, 0);
v_a_2932_ = lean_ctor_get(v_____do__lift_2928_, 1);
v_isSharedCheck_2940_ = !lean_is_exclusive(v_____do__lift_2928_);
if (v_isSharedCheck_2940_ == 0)
{
v___x_2934_ = v_____do__lift_2928_;
v_isShared_2935_ = v_isSharedCheck_2940_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_inc(v_a_2931_);
lean_dec(v_____do__lift_2928_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2940_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v___x_2937_; 
if (v_isShared_2935_ == 0)
{
v___x_2937_ = v___x_2934_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_a_2931_);
lean_ctor_set(v_reuseFailAlloc_2939_, 1, v_a_2932_);
v___x_2937_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
lean_object* v___x_2938_; 
v___x_2938_ = lean_apply_2(v_toPure_2927_, lean_box(0), v___x_2937_);
return v___x_2938_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__0(lean_object* v_toPure_2941_, lean_object* v___y_2942_, lean_object* v_toBind_2943_, lean_object* v_____do__lift_2944_){
_start:
{
if (lean_obj_tag(v_____do__lift_2944_) == 0)
{
lean_object* v___x_2945_; 
lean_dec(v_toBind_2943_);
lean_dec(v___y_2942_);
v___x_2945_ = lean_apply_2(v_toPure_2941_, lean_box(0), v_____do__lift_2944_);
return v___x_2945_;
}
else
{
lean_object* v_a_2946_; lean_object* v_a_2947_; lean_object* v___x_2949_; uint8_t v_isShared_2950_; uint8_t v_isSharedCheck_2959_; 
v_a_2946_ = lean_ctor_get(v_____do__lift_2944_, 0);
v_a_2947_ = lean_ctor_get(v_____do__lift_2944_, 1);
v_isSharedCheck_2959_ = !lean_is_exclusive(v_____do__lift_2944_);
if (v_isSharedCheck_2959_ == 0)
{
v___x_2949_ = v_____do__lift_2944_;
v_isShared_2950_ = v_isSharedCheck_2959_;
goto v_resetjp_2948_;
}
else
{
lean_inc(v_a_2947_);
lean_inc(v_a_2946_);
lean_dec(v_____do__lift_2944_);
v___x_2949_ = lean_box(0);
v_isShared_2950_ = v_isSharedCheck_2959_;
goto v_resetjp_2948_;
}
v_resetjp_2948_:
{
lean_object* v___x_2951_; lean_object* v___f_2952_; lean_object* v___x_2953_; lean_object* v___x_2955_; 
v___x_2951_ = lean_box(0);
lean_inc(v_toPure_2941_);
v___f_2952_ = lean_alloc_closure((void*)(l_Lake_instAlternativeELogTOfMonad___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2952_, 0, v___y_2942_);
lean_closure_set(v___f_2952_, 1, v___x_2951_);
lean_closure_set(v___f_2952_, 2, v_toPure_2941_);
v___x_2953_ = l_Array_shrink___redArg(v_a_2947_, v_a_2946_);
lean_dec(v_a_2946_);
if (v_isShared_2950_ == 0)
{
lean_ctor_set_tag(v___x_2949_, 0);
lean_ctor_set(v___x_2949_, 1, v___x_2953_);
lean_ctor_set(v___x_2949_, 0, v___x_2951_);
v___x_2955_ = v___x_2949_;
goto v_reusejp_2954_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v___x_2951_);
lean_ctor_set(v_reuseFailAlloc_2958_, 1, v___x_2953_);
v___x_2955_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2954_;
}
v_reusejp_2954_:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; 
v___x_2956_ = lean_apply_2(v_toPure_2941_, lean_box(0), v___x_2955_);
v___x_2957_ = lean_apply_4(v_toBind_2943_, lean_box(0), lean_box(0), v___x_2956_, v___f_2952_);
return v___x_2957_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__2(lean_object* v_toPure_2960_, lean_object* v_toBind_2961_, lean_object* v_00_u03b1_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_){
_start:
{
lean_object* v___f_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; 
lean_inc(v_toBind_2961_);
v___f_2966_ = lean_alloc_closure((void*)(l_Lake_instAlternativeELogTOfMonad___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2966_, 0, v_toPure_2960_);
lean_closure_set(v___f_2966_, 1, v___y_2964_);
lean_closure_set(v___f_2966_, 2, v_toBind_2961_);
v___x_2967_ = lean_apply_1(v___y_2963_, v___y_2965_);
v___x_2968_ = lean_apply_4(v_toBind_2961_, lean_box(0), lean_box(0), v___x_2967_, v___f_2966_);
return v___x_2968_;
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__3(lean_object* v_toPure_2969_, lean_object* v_____do__lift_2970_){
_start:
{
if (lean_obj_tag(v_____do__lift_2970_) == 0)
{
lean_object* v_a_2971_; lean_object* v_a_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_2980_; 
v_a_2971_ = lean_ctor_get(v_____do__lift_2970_, 0);
v_a_2972_ = lean_ctor_get(v_____do__lift_2970_, 1);
v_isSharedCheck_2980_ = !lean_is_exclusive(v_____do__lift_2970_);
if (v_isSharedCheck_2980_ == 0)
{
v___x_2974_ = v_____do__lift_2970_;
v_isShared_2975_ = v_isSharedCheck_2980_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_a_2972_);
lean_inc(v_a_2971_);
lean_dec(v_____do__lift_2970_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_2980_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
lean_object* v___x_2977_; 
if (v_isShared_2975_ == 0)
{
lean_ctor_set_tag(v___x_2974_, 1);
v___x_2977_ = v___x_2974_;
goto v_reusejp_2976_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v_a_2971_);
lean_ctor_set(v_reuseFailAlloc_2979_, 1, v_a_2972_);
v___x_2977_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2976_;
}
v_reusejp_2976_:
{
lean_object* v___x_2978_; 
v___x_2978_ = lean_apply_2(v_toPure_2969_, lean_box(0), v___x_2977_);
return v___x_2978_;
}
}
}
else
{
lean_object* v_a_2981_; lean_object* v_a_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_2990_; 
v_a_2981_ = lean_ctor_get(v_____do__lift_2970_, 0);
v_a_2982_ = lean_ctor_get(v_____do__lift_2970_, 1);
v_isSharedCheck_2990_ = !lean_is_exclusive(v_____do__lift_2970_);
if (v_isSharedCheck_2990_ == 0)
{
v___x_2984_ = v_____do__lift_2970_;
v_isShared_2985_ = v_isSharedCheck_2990_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_a_2982_);
lean_inc(v_a_2981_);
lean_dec(v_____do__lift_2970_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_2990_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v___x_2987_; 
if (v_isShared_2985_ == 0)
{
v___x_2987_ = v___x_2984_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2989_; 
v_reuseFailAlloc_2989_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2989_, 0, v_a_2981_);
lean_ctor_set(v_reuseFailAlloc_2989_, 1, v_a_2982_);
v___x_2987_ = v_reuseFailAlloc_2989_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
lean_object* v___x_2988_; 
v___x_2988_ = lean_apply_2(v_toPure_2969_, lean_box(0), v___x_2987_);
return v___x_2988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__4(lean_object* v_toFunctor_2991_, lean_object* v_toPure_2992_, lean_object* v___f_2993_, lean_object* v_toBind_2994_, lean_object* v___f_2995_, lean_object* v_00_u03b1_2996_, lean_object* v___y_2997_){
_start:
{
lean_object* v_map_2998_; lean_object* v___x_3000_; uint8_t v_isShared_3001_; uint8_t v_isSharedCheck_3008_; 
v_map_2998_ = lean_ctor_get(v_toFunctor_2991_, 0);
v_isSharedCheck_3008_ = !lean_is_exclusive(v_toFunctor_2991_);
if (v_isSharedCheck_3008_ == 0)
{
lean_object* v_unused_3009_; 
v_unused_3009_ = lean_ctor_get(v_toFunctor_2991_, 1);
lean_dec(v_unused_3009_);
v___x_3000_ = v_toFunctor_2991_;
v_isShared_3001_ = v_isSharedCheck_3008_;
goto v_resetjp_2999_;
}
else
{
lean_inc(v_map_2998_);
lean_dec(v_toFunctor_2991_);
v___x_3000_ = lean_box(0);
v_isShared_3001_ = v_isSharedCheck_3008_;
goto v_resetjp_2999_;
}
v_resetjp_2999_:
{
lean_object* v___x_3003_; 
lean_inc_ref(v___y_2997_);
if (v_isShared_3001_ == 0)
{
lean_ctor_set(v___x_3000_, 1, v___y_2997_);
lean_ctor_set(v___x_3000_, 0, v___y_2997_);
v___x_3003_ = v___x_3000_;
goto v_reusejp_3002_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v___y_2997_);
lean_ctor_set(v_reuseFailAlloc_3007_, 1, v___y_2997_);
v___x_3003_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3002_;
}
v_reusejp_3002_:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; 
v___x_3004_ = lean_apply_2(v_toPure_2992_, lean_box(0), v___x_3003_);
v___x_3005_ = lean_apply_4(v_map_2998_, lean_box(0), lean_box(0), v___f_2993_, v___x_3004_);
v___x_3006_ = lean_apply_4(v_toBind_2994_, lean_box(0), lean_box(0), v___x_3005_, v___f_2995_);
return v___x_3006_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg(lean_object* v_inst_3010_){
_start:
{
lean_object* v_toApplicative_3011_; lean_object* v_toBind_3012_; lean_object* v_toFunctor_3013_; lean_object* v_toPure_3014_; lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3032_; 
v_toApplicative_3011_ = lean_ctor_get(v_inst_3010_, 0);
lean_inc_ref(v_toApplicative_3011_);
v_toBind_3012_ = lean_ctor_get(v_inst_3010_, 1);
lean_inc(v_toBind_3012_);
lean_dec_ref(v_inst_3010_);
v_toFunctor_3013_ = lean_ctor_get(v_toApplicative_3011_, 0);
v_toPure_3014_ = lean_ctor_get(v_toApplicative_3011_, 1);
v_isSharedCheck_3032_ = !lean_is_exclusive(v_toApplicative_3011_);
if (v_isSharedCheck_3032_ == 0)
{
lean_object* v_unused_3033_; lean_object* v_unused_3034_; lean_object* v_unused_3035_; 
v_unused_3033_ = lean_ctor_get(v_toApplicative_3011_, 4);
lean_dec(v_unused_3033_);
v_unused_3034_ = lean_ctor_get(v_toApplicative_3011_, 3);
lean_dec(v_unused_3034_);
v_unused_3035_ = lean_ctor_get(v_toApplicative_3011_, 2);
lean_dec(v_unused_3035_);
v___x_3016_ = v_toApplicative_3011_;
v_isShared_3017_ = v_isSharedCheck_3032_;
goto v_resetjp_3015_;
}
else
{
lean_inc(v_toPure_3014_);
lean_inc(v_toFunctor_3013_);
lean_dec(v_toApplicative_3011_);
v___x_3016_ = lean_box(0);
v_isShared_3017_ = v_isSharedCheck_3032_;
goto v_resetjp_3015_;
}
v_resetjp_3015_:
{
lean_object* v___f_3018_; lean_object* v___f_3019_; lean_object* v___f_3020_; lean_object* v___f_3021_; lean_object* v___f_3022_; lean_object* v___f_3023_; lean_object* v___f_3024_; lean_object* v___f_3025_; lean_object* v___x_3026_; lean_object* v___f_3027_; lean_object* v___x_3029_; 
v___f_3018_ = ((lean_object*)(l_Lake_instMonadErrorELogTOfMonad___redArg___closed__0));
lean_inc_n(v_toBind_3012_, 4);
lean_inc_n(v_toPure_3014_, 7);
v___f_3019_ = lean_alloc_closure((void*)(l_Lake_instAlternativeELogTOfMonad___redArg___lam__2), 6, 2);
lean_closure_set(v___f_3019_, 0, v_toPure_3014_);
lean_closure_set(v___f_3019_, 1, v_toBind_3012_);
v___f_3020_ = lean_alloc_closure((void*)(l_Lake_instAlternativeELogTOfMonad___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3020_, 0, v_toPure_3014_);
lean_inc_ref_n(v_toFunctor_3013_, 2);
v___f_3021_ = lean_alloc_closure((void*)(l_Lake_instAlternativeELogTOfMonad___redArg___lam__4), 7, 5);
lean_closure_set(v___f_3021_, 0, v_toFunctor_3013_);
lean_closure_set(v___f_3021_, 1, v_toPure_3014_);
lean_closure_set(v___f_3021_, 2, v___f_3018_);
lean_closure_set(v___f_3021_, 3, v_toBind_3012_);
lean_closure_set(v___f_3021_, 4, v___f_3020_);
v___f_3022_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__1), 7, 2);
lean_closure_set(v___f_3022_, 0, v_toPure_3014_);
lean_closure_set(v___f_3022_, 1, v_toBind_3012_);
v___f_3023_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__3), 7, 2);
lean_closure_set(v___f_3023_, 0, v_toPure_3014_);
lean_closure_set(v___f_3023_, 1, v_toBind_3012_);
v___f_3024_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__5), 7, 2);
lean_closure_set(v___f_3024_, 0, v_toPure_3014_);
lean_closure_set(v___f_3024_, 1, v___f_3022_);
v___f_3025_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__9), 8, 3);
lean_closure_set(v___f_3025_, 0, v_toFunctor_3013_);
lean_closure_set(v___f_3025_, 1, v_toPure_3014_);
lean_closure_set(v___f_3025_, 2, v_toBind_3012_);
v___x_3026_ = l_Lake_EStateT_instFunctor___redArg(v_toFunctor_3013_);
v___f_3027_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_3027_, 0, v_toPure_3014_);
if (v_isShared_3017_ == 0)
{
lean_ctor_set(v___x_3016_, 4, v___f_3023_);
lean_ctor_set(v___x_3016_, 3, v___f_3024_);
lean_ctor_set(v___x_3016_, 2, v___f_3025_);
lean_ctor_set(v___x_3016_, 1, v___f_3027_);
lean_ctor_set(v___x_3016_, 0, v___x_3026_);
v___x_3029_ = v___x_3016_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v___x_3026_);
lean_ctor_set(v_reuseFailAlloc_3031_, 1, v___f_3027_);
lean_ctor_set(v_reuseFailAlloc_3031_, 2, v___f_3025_);
lean_ctor_set(v_reuseFailAlloc_3031_, 3, v___f_3024_);
lean_ctor_set(v_reuseFailAlloc_3031_, 4, v___f_3023_);
v___x_3029_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
lean_object* v___x_3030_; 
v___x_3030_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3030_, 0, v___x_3029_);
lean_ctor_set(v___x_3030_, 1, v___f_3021_);
lean_ctor_set(v___x_3030_, 2, v___f_3019_);
return v___x_3030_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad(lean_object* v_m_3036_, lean_object* v_inst_3037_){
_start:
{
lean_object* v___x_3038_; 
v___x_3038_ = l_Lake_instAlternativeELogTOfMonad___redArg(v_inst_3037_);
return v___x_3038_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_run___redArg(lean_object* v_self_3039_, lean_object* v_log_3040_){
_start:
{
lean_object* v___x_3041_; 
v___x_3041_ = lean_apply_1(v_self_3039_, v_log_3040_);
return v___x_3041_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_run(lean_object* v_m_3042_, lean_object* v_00_u03b1_3043_, lean_object* v_self_3044_, lean_object* v_log_3045_){
_start:
{
lean_object* v___x_3046_; 
v___x_3046_ = lean_apply_1(v_self_3044_, v_log_3045_);
return v___x_3046_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x27___redArg(lean_object* v_inst_3048_, lean_object* v_self_3049_, lean_object* v_log_3050_){
_start:
{
lean_object* v_map_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; 
v_map_3051_ = lean_ctor_get(v_inst_3048_, 0);
lean_inc(v_map_3051_);
lean_dec_ref(v_inst_3048_);
v___x_3052_ = ((lean_object*)(l_Lake_ELogT_run_x27___redArg___closed__0));
v___x_3053_ = lean_apply_1(v_self_3049_, v_log_3050_);
v___x_3054_ = lean_apply_4(v_map_3051_, lean_box(0), lean_box(0), v___x_3052_, v___x_3053_);
return v___x_3054_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x27(lean_object* v_m_3055_, lean_object* v_00_u03b1_3056_, lean_object* v_inst_3057_, lean_object* v_self_3058_, lean_object* v_log_3059_){
_start:
{
lean_object* v_map_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; 
v_map_3060_ = lean_ctor_get(v_inst_3057_, 0);
lean_inc(v_map_3060_);
lean_dec_ref(v_inst_3057_);
v___x_3061_ = ((lean_object*)(l_Lake_ELogT_run_x27___redArg___closed__0));
v___x_3062_ = lean_apply_1(v_self_3058_, v_log_3059_);
v___x_3063_ = lean_apply_4(v_map_3060_, lean_box(0), lean_box(0), v___x_3061_, v___x_3062_);
return v___x_3063_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_toLogT___redArg(lean_object* v_inst_3065_, lean_object* v_self_3066_, lean_object* v_a_3067_){
_start:
{
lean_object* v_map_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; 
v_map_3068_ = lean_ctor_get(v_inst_3065_, 0);
lean_inc(v_map_3068_);
lean_dec_ref(v_inst_3065_);
v___x_3069_ = ((lean_object*)(l_Lake_ELogT_toLogT___redArg___closed__0));
v___x_3070_ = lean_apply_1(v_self_3066_, v_a_3067_);
v___x_3071_ = lean_apply_4(v_map_3068_, lean_box(0), lean_box(0), v___x_3069_, v___x_3070_);
return v___x_3071_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_toLogT(lean_object* v_m_3072_, lean_object* v_00_u03b1_3073_, lean_object* v_inst_3074_, lean_object* v_self_3075_, lean_object* v_a_3076_){
_start:
{
lean_object* v_map_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; 
v_map_3077_ = lean_ctor_get(v_inst_3074_, 0);
lean_inc(v_map_3077_);
lean_dec_ref(v_inst_3074_);
v___x_3078_ = ((lean_object*)(l_Lake_ELogT_toLogT___redArg___closed__0));
v___x_3079_ = lean_apply_1(v_self_3075_, v_a_3076_);
v___x_3080_ = lean_apply_4(v_map_3077_, lean_box(0), lean_box(0), v___x_3078_, v___x_3079_);
return v___x_3080_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_toLogT_x3f___redArg(lean_object* v_inst_3082_, lean_object* v_self_3083_, lean_object* v_a_3084_){
_start:
{
lean_object* v_map_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; 
v_map_3085_ = lean_ctor_get(v_inst_3082_, 0);
lean_inc(v_map_3085_);
lean_dec_ref(v_inst_3082_);
v___x_3086_ = ((lean_object*)(l_Lake_ELogT_toLogT_x3f___redArg___closed__0));
v___x_3087_ = lean_apply_1(v_self_3083_, v_a_3084_);
v___x_3088_ = lean_apply_4(v_map_3085_, lean_box(0), lean_box(0), v___x_3086_, v___x_3087_);
return v___x_3088_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_toLogT_x3f(lean_object* v_m_3089_, lean_object* v_00_u03b1_3090_, lean_object* v_inst_3091_, lean_object* v_self_3092_, lean_object* v_a_3093_){
_start:
{
lean_object* v_map_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; 
v_map_3094_ = lean_ctor_get(v_inst_3091_, 0);
lean_inc(v_map_3094_);
lean_dec_ref(v_inst_3091_);
v___x_3095_ = ((lean_object*)(l_Lake_ELogT_toLogT_x3f___redArg___closed__0));
v___x_3096_ = lean_apply_1(v_self_3092_, v_a_3093_);
v___x_3097_ = lean_apply_4(v_map_3094_, lean_box(0), lean_box(0), v___x_3095_, v___x_3096_);
return v___x_3097_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x3f___redArg(lean_object* v_inst_3098_, lean_object* v_self_3099_, lean_object* v_log_3100_){
_start:
{
lean_object* v_map_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; 
v_map_3101_ = lean_ctor_get(v_inst_3098_, 0);
lean_inc(v_map_3101_);
lean_dec_ref(v_inst_3098_);
v___x_3102_ = ((lean_object*)(l_Lake_ELogT_toLogT_x3f___redArg___closed__0));
v___x_3103_ = lean_apply_1(v_self_3099_, v_log_3100_);
v___x_3104_ = lean_apply_4(v_map_3101_, lean_box(0), lean_box(0), v___x_3102_, v___x_3103_);
return v___x_3104_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x3f(lean_object* v_m_3105_, lean_object* v_00_u03b1_3106_, lean_object* v_inst_3107_, lean_object* v_self_3108_, lean_object* v_log_3109_){
_start:
{
lean_object* v_map_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; 
v_map_3110_ = lean_ctor_get(v_inst_3107_, 0);
lean_inc(v_map_3110_);
lean_dec_ref(v_inst_3107_);
v___x_3111_ = ((lean_object*)(l_Lake_ELogT_toLogT_x3f___redArg___closed__0));
v___x_3112_ = lean_apply_1(v_self_3108_, v_log_3109_);
v___x_3113_ = lean_apply_4(v_map_3110_, lean_box(0), lean_box(0), v___x_3111_, v___x_3112_);
return v___x_3113_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x3f_x27___redArg(lean_object* v_inst_3115_, lean_object* v_self_3116_, lean_object* v_log_3117_){
_start:
{
lean_object* v_map_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; 
v_map_3118_ = lean_ctor_get(v_inst_3115_, 0);
lean_inc(v_map_3118_);
lean_dec_ref(v_inst_3115_);
v___x_3119_ = ((lean_object*)(l_Lake_ELogT_run_x3f_x27___redArg___closed__0));
v___x_3120_ = lean_apply_1(v_self_3116_, v_log_3117_);
v___x_3121_ = lean_apply_4(v_map_3118_, lean_box(0), lean_box(0), v___x_3119_, v___x_3120_);
return v___x_3121_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x3f_x27(lean_object* v_m_3122_, lean_object* v_00_u03b1_3123_, lean_object* v_inst_3124_, lean_object* v_self_3125_, lean_object* v_log_3126_){
_start:
{
lean_object* v_map_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v_map_3127_ = lean_ctor_get(v_inst_3124_, 0);
lean_inc(v_map_3127_);
lean_dec_ref(v_inst_3124_);
v___x_3128_ = ((lean_object*)(l_Lake_ELogT_run_x3f_x27___redArg___closed__0));
v___x_3129_ = lean_apply_1(v_self_3125_, v_log_3126_);
v___x_3130_ = lean_apply_4(v_map_3127_, lean_box(0), lean_box(0), v___x_3128_, v___x_3129_);
return v___x_3130_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_catchLog___redArg___lam__0(lean_object* v_f_3131_, lean_object* v_____x_3132_){
_start:
{
lean_object* v_fst_3133_; lean_object* v_snd_3134_; lean_object* v___x_3135_; 
v_fst_3133_ = lean_ctor_get(v_____x_3132_, 0);
lean_inc(v_fst_3133_);
v_snd_3134_ = lean_ctor_get(v_____x_3132_, 1);
lean_inc(v_snd_3134_);
lean_dec_ref(v_____x_3132_);
v___x_3135_ = lean_apply_2(v_f_3131_, v_fst_3133_, v_snd_3134_);
return v___x_3135_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_catchLog___redArg___lam__1(lean_object* v_toPure_3136_, lean_object* v_toBind_3137_, lean_object* v___f_3138_, lean_object* v_____do__lift_3139_){
_start:
{
if (lean_obj_tag(v_____do__lift_3139_) == 0)
{
lean_object* v_a_3140_; lean_object* v_a_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3149_; 
lean_dec(v___f_3138_);
lean_dec(v_toBind_3137_);
v_a_3140_ = lean_ctor_get(v_____do__lift_3139_, 0);
v_a_3141_ = lean_ctor_get(v_____do__lift_3139_, 1);
v_isSharedCheck_3149_ = !lean_is_exclusive(v_____do__lift_3139_);
if (v_isSharedCheck_3149_ == 0)
{
v___x_3143_ = v_____do__lift_3139_;
v_isShared_3144_ = v_isSharedCheck_3149_;
goto v_resetjp_3142_;
}
else
{
lean_inc(v_a_3141_);
lean_inc(v_a_3140_);
lean_dec(v_____do__lift_3139_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3149_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
lean_object* v___x_3146_; 
if (v_isShared_3144_ == 0)
{
v___x_3146_ = v___x_3143_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3148_; 
v_reuseFailAlloc_3148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3148_, 0, v_a_3140_);
lean_ctor_set(v_reuseFailAlloc_3148_, 1, v_a_3141_);
v___x_3146_ = v_reuseFailAlloc_3148_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
lean_object* v___x_3147_; 
v___x_3147_ = lean_apply_2(v_toPure_3136_, lean_box(0), v___x_3146_);
return v___x_3147_;
}
}
}
else
{
lean_object* v_a_3150_; lean_object* v_a_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3163_; 
v_a_3150_ = lean_ctor_get(v_____do__lift_3139_, 0);
v_a_3151_ = lean_ctor_get(v_____do__lift_3139_, 1);
v_isSharedCheck_3163_ = !lean_is_exclusive(v_____do__lift_3139_);
if (v_isSharedCheck_3163_ == 0)
{
v___x_3153_ = v_____do__lift_3139_;
v_isShared_3154_ = v_isSharedCheck_3163_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_a_3151_);
lean_inc(v_a_3150_);
lean_dec(v_____do__lift_3139_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3163_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3159_; 
v___x_3155_ = lean_array_get_size(v_a_3151_);
lean_inc(v_a_3150_);
v___x_3156_ = l_Array_extract___redArg(v_a_3151_, v_a_3150_, v___x_3155_);
v___x_3157_ = l_Array_shrink___redArg(v_a_3151_, v_a_3150_);
lean_dec(v_a_3150_);
if (v_isShared_3154_ == 0)
{
lean_ctor_set_tag(v___x_3153_, 0);
lean_ctor_set(v___x_3153_, 1, v___x_3157_);
lean_ctor_set(v___x_3153_, 0, v___x_3156_);
v___x_3159_ = v___x_3153_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3162_; 
v_reuseFailAlloc_3162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3162_, 0, v___x_3156_);
lean_ctor_set(v_reuseFailAlloc_3162_, 1, v___x_3157_);
v___x_3159_ = v_reuseFailAlloc_3162_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
lean_object* v___x_3160_; lean_object* v___x_3161_; 
v___x_3160_ = lean_apply_2(v_toPure_3136_, lean_box(0), v___x_3159_);
v___x_3161_ = lean_apply_4(v_toBind_3137_, lean_box(0), lean_box(0), v___x_3160_, v___f_3138_);
return v___x_3161_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_catchLog___redArg(lean_object* v_inst_3164_, lean_object* v_f_3165_, lean_object* v_self_3166_, lean_object* v_a_3167_){
_start:
{
lean_object* v_toApplicative_3168_; lean_object* v_toBind_3169_; lean_object* v_toPure_3170_; lean_object* v___f_3171_; lean_object* v___x_3172_; lean_object* v___f_3173_; lean_object* v___x_3174_; 
v_toApplicative_3168_ = lean_ctor_get(v_inst_3164_, 0);
lean_inc_ref(v_toApplicative_3168_);
v_toBind_3169_ = lean_ctor_get(v_inst_3164_, 1);
lean_inc_n(v_toBind_3169_, 2);
lean_dec_ref(v_inst_3164_);
v_toPure_3170_ = lean_ctor_get(v_toApplicative_3168_, 1);
lean_inc(v_toPure_3170_);
lean_dec_ref(v_toApplicative_3168_);
v___f_3171_ = lean_alloc_closure((void*)(l_Lake_ELogT_catchLog___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3171_, 0, v_f_3165_);
v___x_3172_ = lean_apply_1(v_self_3166_, v_a_3167_);
v___f_3173_ = lean_alloc_closure((void*)(l_Lake_ELogT_catchLog___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3173_, 0, v_toPure_3170_);
lean_closure_set(v___f_3173_, 1, v_toBind_3169_);
lean_closure_set(v___f_3173_, 2, v___f_3171_);
v___x_3174_ = lean_apply_4(v_toBind_3169_, lean_box(0), lean_box(0), v___x_3172_, v___f_3173_);
return v___x_3174_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_catchLog(lean_object* v_m_3175_, lean_object* v_00_u03b1_3176_, lean_object* v_inst_3177_, lean_object* v_f_3178_, lean_object* v_self_3179_, lean_object* v_a_3180_){
_start:
{
lean_object* v_toApplicative_3181_; lean_object* v_toBind_3182_; lean_object* v_toPure_3183_; lean_object* v___f_3184_; lean_object* v___x_3185_; lean_object* v___f_3186_; lean_object* v___x_3187_; 
v_toApplicative_3181_ = lean_ctor_get(v_inst_3177_, 0);
lean_inc_ref(v_toApplicative_3181_);
v_toBind_3182_ = lean_ctor_get(v_inst_3177_, 1);
lean_inc_n(v_toBind_3182_, 2);
lean_dec_ref(v_inst_3177_);
v_toPure_3183_ = lean_ctor_get(v_toApplicative_3181_, 1);
lean_inc(v_toPure_3183_);
lean_dec_ref(v_toApplicative_3181_);
v___f_3184_ = lean_alloc_closure((void*)(l_Lake_ELogT_catchLog___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3184_, 0, v_f_3178_);
v___x_3185_ = lean_apply_1(v_self_3179_, v_a_3180_);
v___f_3186_ = lean_alloc_closure((void*)(l_Lake_ELogT_catchLog___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3186_, 0, v_toPure_3183_);
lean_closure_set(v___f_3186_, 1, v_toBind_3182_);
lean_closure_set(v___f_3186_, 2, v___f_3184_);
v___x_3187_ = lean_apply_4(v_toBind_3182_, lean_box(0), lean_box(0), v___x_3185_, v___f_3186_);
return v___x_3187_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg___lam__1(lean_object* v_toPure_3188_, lean_object* v_a_3189_, lean_object* v_____r_3190_){
_start:
{
lean_object* v___x_3191_; 
v___x_3191_ = lean_apply_2(v_toPure_3188_, lean_box(0), v_a_3189_);
return v___x_3191_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg___lam__0(lean_object* v_inst_3192_, lean_object* v_a_3193_, lean_object* v_____r_3194_){
_start:
{
lean_object* v_throw_3195_; lean_object* v___x_3196_; 
v_throw_3195_ = lean_ctor_get(v_inst_3192_, 0);
lean_inc(v_throw_3195_);
lean_dec_ref(v_inst_3192_);
v___x_3196_ = lean_apply_2(v_throw_3195_, lean_box(0), v_a_3193_);
return v___x_3196_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg___lam__2(lean_object* v_toPure_3197_, lean_object* v_set_3198_, lean_object* v_toBind_3199_, lean_object* v_inst_3200_, lean_object* v_____do__lift_3201_){
_start:
{
if (lean_obj_tag(v_____do__lift_3201_) == 0)
{
lean_object* v_a_3202_; lean_object* v_a_3203_; lean_object* v___f_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; 
lean_dec_ref(v_inst_3200_);
v_a_3202_ = lean_ctor_get(v_____do__lift_3201_, 0);
lean_inc(v_a_3202_);
v_a_3203_ = lean_ctor_get(v_____do__lift_3201_, 1);
lean_inc(v_a_3203_);
lean_dec_ref_known(v_____do__lift_3201_, 2);
v___f_3204_ = lean_alloc_closure((void*)(l_Lake_ELogT_takeAndRun___redArg___lam__1), 3, 2);
lean_closure_set(v___f_3204_, 0, v_toPure_3197_);
lean_closure_set(v___f_3204_, 1, v_a_3202_);
v___x_3205_ = lean_apply_1(v_set_3198_, v_a_3203_);
v___x_3206_ = lean_apply_4(v_toBind_3199_, lean_box(0), lean_box(0), v___x_3205_, v___f_3204_);
return v___x_3206_;
}
else
{
lean_object* v_a_3207_; lean_object* v_a_3208_; lean_object* v___f_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
lean_dec(v_toPure_3197_);
v_a_3207_ = lean_ctor_get(v_____do__lift_3201_, 0);
lean_inc(v_a_3207_);
v_a_3208_ = lean_ctor_get(v_____do__lift_3201_, 1);
lean_inc(v_a_3208_);
lean_dec_ref_known(v_____do__lift_3201_, 2);
v___f_3209_ = lean_alloc_closure((void*)(l_Lake_ELogT_takeAndRun___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3209_, 0, v_inst_3200_);
lean_closure_set(v___f_3209_, 1, v_a_3207_);
v___x_3210_ = lean_apply_1(v_set_3198_, v_a_3208_);
v___x_3211_ = lean_apply_4(v_toBind_3199_, lean_box(0), lean_box(0), v___x_3210_, v___f_3209_);
return v___x_3211_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg___lam__3(lean_object* v_self_3212_, lean_object* v_inst_3213_, lean_object* v_toBind_3214_, lean_object* v___f_3215_, lean_object* v_____do__lift_3216_){
_start:
{
lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3217_ = lean_apply_1(v_self_3212_, v_____do__lift_3216_);
v___x_3218_ = lean_apply_2(v_inst_3213_, lean_box(0), v___x_3217_);
v___x_3219_ = lean_apply_4(v_toBind_3214_, lean_box(0), lean_box(0), v___x_3218_, v___f_3215_);
return v___x_3219_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg(lean_object* v_inst_3220_, lean_object* v_inst_3221_, lean_object* v_inst_3222_, lean_object* v_inst_3223_, lean_object* v_self_3224_){
_start:
{
lean_object* v_toApplicative_3225_; lean_object* v_toBind_3226_; lean_object* v_set_3227_; lean_object* v_modifyGet_3228_; lean_object* v_toPure_3229_; lean_object* v___f_3230_; lean_object* v___x_3231_; lean_object* v___f_3232_; lean_object* v___f_3233_; lean_object* v___x_3234_; 
v_toApplicative_3225_ = lean_ctor_get(v_inst_3220_, 0);
lean_inc_ref(v_toApplicative_3225_);
v_toBind_3226_ = lean_ctor_get(v_inst_3220_, 1);
lean_inc_n(v_toBind_3226_, 3);
lean_dec_ref(v_inst_3220_);
v_set_3227_ = lean_ctor_get(v_inst_3221_, 1);
lean_inc(v_set_3227_);
v_modifyGet_3228_ = lean_ctor_get(v_inst_3221_, 2);
lean_inc(v_modifyGet_3228_);
lean_dec_ref(v_inst_3221_);
v_toPure_3229_ = lean_ctor_get(v_toApplicative_3225_, 1);
lean_inc(v_toPure_3229_);
lean_dec_ref(v_toApplicative_3225_);
v___f_3230_ = ((lean_object*)(l_Lake_takeLog___redArg___closed__0));
v___x_3231_ = lean_apply_2(v_modifyGet_3228_, lean_box(0), v___f_3230_);
v___f_3232_ = lean_alloc_closure((void*)(l_Lake_ELogT_takeAndRun___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3232_, 0, v_toPure_3229_);
lean_closure_set(v___f_3232_, 1, v_set_3227_);
lean_closure_set(v___f_3232_, 2, v_toBind_3226_);
lean_closure_set(v___f_3232_, 3, v_inst_3222_);
v___f_3233_ = lean_alloc_closure((void*)(l_Lake_ELogT_takeAndRun___redArg___lam__3), 5, 4);
lean_closure_set(v___f_3233_, 0, v_self_3224_);
lean_closure_set(v___f_3233_, 1, v_inst_3223_);
lean_closure_set(v___f_3233_, 2, v_toBind_3226_);
lean_closure_set(v___f_3233_, 3, v___f_3232_);
v___x_3234_ = lean_apply_4(v_toBind_3226_, lean_box(0), lean_box(0), v___x_3231_, v___f_3233_);
return v___x_3234_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun(lean_object* v_n_3235_, lean_object* v_m_3236_, lean_object* v_00_u03b1_3237_, lean_object* v_inst_3238_, lean_object* v_inst_3239_, lean_object* v_inst_3240_, lean_object* v_inst_3241_, lean_object* v_self_3242_){
_start:
{
lean_object* v_toApplicative_3243_; lean_object* v_toBind_3244_; lean_object* v_set_3245_; lean_object* v_modifyGet_3246_; lean_object* v_toPure_3247_; lean_object* v___f_3248_; lean_object* v___x_3249_; lean_object* v___f_3250_; lean_object* v___f_3251_; lean_object* v___x_3252_; 
v_toApplicative_3243_ = lean_ctor_get(v_inst_3238_, 0);
lean_inc_ref(v_toApplicative_3243_);
v_toBind_3244_ = lean_ctor_get(v_inst_3238_, 1);
lean_inc_n(v_toBind_3244_, 3);
lean_dec_ref(v_inst_3238_);
v_set_3245_ = lean_ctor_get(v_inst_3239_, 1);
lean_inc(v_set_3245_);
v_modifyGet_3246_ = lean_ctor_get(v_inst_3239_, 2);
lean_inc(v_modifyGet_3246_);
lean_dec_ref(v_inst_3239_);
v_toPure_3247_ = lean_ctor_get(v_toApplicative_3243_, 1);
lean_inc(v_toPure_3247_);
lean_dec_ref(v_toApplicative_3243_);
v___f_3248_ = ((lean_object*)(l_Lake_takeLog___redArg___closed__0));
v___x_3249_ = lean_apply_2(v_modifyGet_3246_, lean_box(0), v___f_3248_);
v___f_3250_ = lean_alloc_closure((void*)(l_Lake_ELogT_takeAndRun___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3250_, 0, v_toPure_3247_);
lean_closure_set(v___f_3250_, 1, v_set_3245_);
lean_closure_set(v___f_3250_, 2, v_toBind_3244_);
lean_closure_set(v___f_3250_, 3, v_inst_3240_);
v___f_3251_ = lean_alloc_closure((void*)(l_Lake_ELogT_takeAndRun___redArg___lam__3), 5, 4);
lean_closure_set(v___f_3251_, 0, v_self_3242_);
lean_closure_set(v___f_3251_, 1, v_inst_3241_);
lean_closure_set(v___f_3251_, 2, v_toBind_3244_);
lean_closure_set(v___f_3251_, 3, v___f_3250_);
v___x_3252_ = lean_apply_4(v_toBind_3244_, lean_box(0), lean_box(0), v___x_3249_, v___f_3251_);
return v___x_3252_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg___lam__2(lean_object* v_toPure_3253_, lean_object* v_x_3254_){
_start:
{
lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3255_ = lean_box(0);
v___x_3256_ = lean_apply_2(v_toPure_3253_, lean_box(0), v___x_3255_);
return v___x_3256_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg___lam__0(lean_object* v_a_3257_, lean_object* v_toPure_3258_, lean_object* v_x_3259_){
_start:
{
lean_object* v___x_3260_; lean_object* v___x_3261_; 
v___x_3260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3260_, 0, v_a_3257_);
v___x_3261_ = lean_apply_2(v_toPure_3258_, lean_box(0), v___x_3260_);
return v___x_3261_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg___lam__1(lean_object* v_toPure_3262_, lean_object* v___x_3263_, lean_object* v_toSeqRight_3264_, lean_object* v_inst_3265_, lean_object* v___f_3266_, lean_object* v___f_3267_, lean_object* v___f_3268_, lean_object* v_____do__lift_3269_){
_start:
{
if (lean_obj_tag(v_____do__lift_3269_) == 0)
{
lean_object* v_a_3270_; lean_object* v_a_3271_; lean_object* v___f_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; uint8_t v___x_3275_; 
lean_dec(v___f_3268_);
lean_dec(v___f_3267_);
v_a_3270_ = lean_ctor_get(v_____do__lift_3269_, 0);
lean_inc(v_a_3270_);
v_a_3271_ = lean_ctor_get(v_____do__lift_3269_, 1);
lean_inc(v_a_3271_);
lean_dec_ref_known(v_____do__lift_3269_, 2);
lean_inc(v_toPure_3262_);
v___f_3272_ = lean_alloc_closure((void*)(l_Lake_ELogT_replayLog_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3272_, 0, v_a_3270_);
lean_closure_set(v___f_3272_, 1, v_toPure_3262_);
v___x_3273_ = lean_array_get_size(v_a_3271_);
v___x_3274_ = lean_box(0);
v___x_3275_ = lean_nat_dec_lt(v___x_3263_, v___x_3273_);
if (v___x_3275_ == 0)
{
lean_object* v___x_3276_; lean_object* v___x_3277_; 
lean_dec(v_a_3271_);
lean_dec(v___f_3266_);
lean_dec_ref(v_inst_3265_);
v___x_3276_ = lean_apply_2(v_toPure_3262_, lean_box(0), v___x_3274_);
v___x_3277_ = lean_apply_4(v_toSeqRight_3264_, lean_box(0), lean_box(0), v___x_3276_, v___f_3272_);
return v___x_3277_;
}
else
{
size_t v___x_3278_; size_t v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; 
lean_dec(v_toPure_3262_);
v___x_3278_ = ((size_t)0ULL);
v___x_3279_ = lean_usize_of_nat(v___x_3273_);
v___x_3280_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3265_, v___f_3266_, v_a_3271_, v___x_3278_, v___x_3279_, v___x_3274_);
v___x_3281_ = lean_apply_4(v_toSeqRight_3264_, lean_box(0), lean_box(0), v___x_3280_, v___f_3272_);
return v___x_3281_;
}
}
else
{
lean_object* v_a_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; uint8_t v___x_3285_; 
lean_dec(v___f_3266_);
v_a_3282_ = lean_ctor_get(v_____do__lift_3269_, 1);
lean_inc(v_a_3282_);
lean_dec_ref_known(v_____do__lift_3269_, 2);
v___x_3283_ = lean_array_get_size(v_a_3282_);
v___x_3284_ = lean_box(0);
v___x_3285_ = lean_nat_dec_lt(v___x_3263_, v___x_3283_);
if (v___x_3285_ == 0)
{
lean_object* v___x_3286_; lean_object* v___x_3287_; 
lean_dec(v_a_3282_);
lean_dec(v___f_3268_);
lean_dec_ref(v_inst_3265_);
v___x_3286_ = lean_apply_2(v_toPure_3262_, lean_box(0), v___x_3284_);
v___x_3287_ = lean_apply_4(v_toSeqRight_3264_, lean_box(0), lean_box(0), v___x_3286_, v___f_3267_);
return v___x_3287_;
}
else
{
size_t v___x_3288_; size_t v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; 
lean_dec(v_toPure_3262_);
v___x_3288_ = ((size_t)0ULL);
v___x_3289_ = lean_usize_of_nat(v___x_3283_);
v___x_3290_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3265_, v___f_3268_, v_a_3282_, v___x_3288_, v___x_3289_, v___x_3284_);
v___x_3291_ = lean_apply_4(v_toSeqRight_3264_, lean_box(0), lean_box(0), v___x_3290_, v___f_3267_);
return v___x_3291_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg___lam__1___boxed(lean_object* v_toPure_3292_, lean_object* v___x_3293_, lean_object* v_toSeqRight_3294_, lean_object* v_inst_3295_, lean_object* v___f_3296_, lean_object* v___f_3297_, lean_object* v___f_3298_, lean_object* v_____do__lift_3299_){
_start:
{
lean_object* v_res_3300_; 
v_res_3300_ = l_Lake_ELogT_replayLog_x3f___redArg___lam__1(v_toPure_3292_, v___x_3293_, v_toSeqRight_3294_, v_inst_3295_, v___f_3296_, v___f_3297_, v___f_3298_, v_____do__lift_3299_);
lean_dec(v___x_3293_);
return v_res_3300_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg(lean_object* v_inst_3301_, lean_object* v_logger_3302_, lean_object* v_inst_3303_, lean_object* v_self_3304_){
_start:
{
lean_object* v_toApplicative_3305_; lean_object* v_toBind_3306_; lean_object* v_toPure_3307_; lean_object* v_toSeqRight_3308_; lean_object* v___f_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___f_3314_; lean_object* v___f_3315_; lean_object* v___x_3316_; 
v_toApplicative_3305_ = lean_ctor_get(v_inst_3301_, 0);
v_toBind_3306_ = lean_ctor_get(v_inst_3301_, 1);
lean_inc(v_toBind_3306_);
v_toPure_3307_ = lean_ctor_get(v_toApplicative_3305_, 1);
lean_inc_n(v_toPure_3307_, 2);
v_toSeqRight_3308_ = lean_ctor_get(v_toApplicative_3305_, 4);
lean_inc(v_toSeqRight_3308_);
v___f_3309_ = lean_alloc_closure((void*)(l_Lake_Log_replay___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3309_, 0, v_logger_3302_);
v___x_3310_ = lean_unsigned_to_nat(0u);
v___x_3311_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_3312_ = lean_apply_1(v_self_3304_, v___x_3311_);
v___x_3313_ = lean_apply_2(v_inst_3303_, lean_box(0), v___x_3312_);
v___f_3314_ = lean_alloc_closure((void*)(l_Lake_ELogT_replayLog_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3314_, 0, v_toPure_3307_);
lean_inc_ref(v___f_3309_);
v___f_3315_ = lean_alloc_closure((void*)(l_Lake_ELogT_replayLog_x3f___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_3315_, 0, v_toPure_3307_);
lean_closure_set(v___f_3315_, 1, v___x_3310_);
lean_closure_set(v___f_3315_, 2, v_toSeqRight_3308_);
lean_closure_set(v___f_3315_, 3, v_inst_3301_);
lean_closure_set(v___f_3315_, 4, v___f_3309_);
lean_closure_set(v___f_3315_, 5, v___f_3314_);
lean_closure_set(v___f_3315_, 6, v___f_3309_);
v___x_3316_ = lean_apply_4(v_toBind_3306_, lean_box(0), lean_box(0), v___x_3313_, v___f_3315_);
return v___x_3316_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f(lean_object* v_n_3317_, lean_object* v_m_3318_, lean_object* v_00_u03b1_3319_, lean_object* v_inst_3320_, lean_object* v_logger_3321_, lean_object* v_inst_3322_, lean_object* v_self_3323_){
_start:
{
lean_object* v_toApplicative_3324_; lean_object* v_toBind_3325_; lean_object* v_toPure_3326_; lean_object* v_toSeqRight_3327_; lean_object* v___f_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___f_3333_; lean_object* v___f_3334_; lean_object* v___x_3335_; 
v_toApplicative_3324_ = lean_ctor_get(v_inst_3320_, 0);
v_toBind_3325_ = lean_ctor_get(v_inst_3320_, 1);
lean_inc(v_toBind_3325_);
v_toPure_3326_ = lean_ctor_get(v_toApplicative_3324_, 1);
lean_inc_n(v_toPure_3326_, 2);
v_toSeqRight_3327_ = lean_ctor_get(v_toApplicative_3324_, 4);
lean_inc(v_toSeqRight_3327_);
v___f_3328_ = lean_alloc_closure((void*)(l_Lake_Log_replay___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3328_, 0, v_logger_3321_);
v___x_3329_ = lean_unsigned_to_nat(0u);
v___x_3330_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_3331_ = lean_apply_1(v_self_3323_, v___x_3330_);
v___x_3332_ = lean_apply_2(v_inst_3322_, lean_box(0), v___x_3331_);
v___f_3333_ = lean_alloc_closure((void*)(l_Lake_ELogT_replayLog_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3333_, 0, v_toPure_3326_);
lean_inc_ref(v___f_3328_);
v___f_3334_ = lean_alloc_closure((void*)(l_Lake_ELogT_replayLog_x3f___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_3334_, 0, v_toPure_3326_);
lean_closure_set(v___f_3334_, 1, v___x_3329_);
lean_closure_set(v___f_3334_, 2, v_toSeqRight_3327_);
lean_closure_set(v___f_3334_, 3, v_inst_3320_);
lean_closure_set(v___f_3334_, 4, v___f_3328_);
lean_closure_set(v___f_3334_, 5, v___f_3333_);
lean_closure_set(v___f_3334_, 6, v___f_3328_);
v___x_3335_ = lean_apply_4(v_toBind_3325_, lean_box(0), lean_box(0), v___x_3332_, v___f_3334_);
return v___x_3335_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog___redArg___lam__3(lean_object* v_toPure_3336_, lean_object* v_a_3337_, lean_object* v_x_3338_){
_start:
{
lean_object* v___x_3339_; 
v___x_3339_ = lean_apply_2(v_toPure_3336_, lean_box(0), v_a_3337_);
return v___x_3339_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog___redArg___lam__0(lean_object* v_toApplicative_3340_, lean_object* v_toPure_3341_, lean_object* v___x_3342_, lean_object* v_toSeqRight_3343_, lean_object* v_inst_3344_, lean_object* v___f_3345_, lean_object* v___f_3346_, lean_object* v___f_3347_, lean_object* v_____do__lift_3348_){
_start:
{
if (lean_obj_tag(v_____do__lift_3348_) == 0)
{
lean_object* v_a_3349_; lean_object* v_a_3350_; lean_object* v_toPure_3351_; lean_object* v___f_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; uint8_t v___x_3355_; 
lean_dec(v___f_3347_);
lean_dec(v___f_3346_);
v_a_3349_ = lean_ctor_get(v_____do__lift_3348_, 0);
lean_inc(v_a_3349_);
v_a_3350_ = lean_ctor_get(v_____do__lift_3348_, 1);
lean_inc(v_a_3350_);
lean_dec_ref_known(v_____do__lift_3348_, 2);
v_toPure_3351_ = lean_ctor_get(v_toApplicative_3340_, 1);
lean_inc(v_toPure_3351_);
lean_dec_ref(v_toApplicative_3340_);
v___f_3352_ = lean_alloc_closure((void*)(l_Lake_ELogT_replayLog___redArg___lam__3), 3, 2);
lean_closure_set(v___f_3352_, 0, v_toPure_3341_);
lean_closure_set(v___f_3352_, 1, v_a_3349_);
v___x_3353_ = lean_array_get_size(v_a_3350_);
v___x_3354_ = lean_box(0);
v___x_3355_ = lean_nat_dec_lt(v___x_3342_, v___x_3353_);
if (v___x_3355_ == 0)
{
lean_object* v___x_3356_; lean_object* v___x_3357_; 
lean_dec(v_a_3350_);
lean_dec(v___f_3345_);
lean_dec_ref(v_inst_3344_);
v___x_3356_ = lean_apply_2(v_toPure_3351_, lean_box(0), v___x_3354_);
v___x_3357_ = lean_apply_4(v_toSeqRight_3343_, lean_box(0), lean_box(0), v___x_3356_, v___f_3352_);
return v___x_3357_;
}
else
{
size_t v___x_3358_; size_t v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; 
lean_dec(v_toPure_3351_);
v___x_3358_ = ((size_t)0ULL);
v___x_3359_ = lean_usize_of_nat(v___x_3353_);
v___x_3360_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3344_, v___f_3345_, v_a_3350_, v___x_3358_, v___x_3359_, v___x_3354_);
v___x_3361_ = lean_apply_4(v_toSeqRight_3343_, lean_box(0), lean_box(0), v___x_3360_, v___f_3352_);
return v___x_3361_;
}
}
else
{
lean_object* v_a_3362_; lean_object* v_toPure_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; uint8_t v___x_3366_; 
lean_dec(v___f_3345_);
lean_dec(v_toPure_3341_);
v_a_3362_ = lean_ctor_get(v_____do__lift_3348_, 1);
lean_inc(v_a_3362_);
lean_dec_ref_known(v_____do__lift_3348_, 2);
v_toPure_3363_ = lean_ctor_get(v_toApplicative_3340_, 1);
lean_inc(v_toPure_3363_);
lean_dec_ref(v_toApplicative_3340_);
v___x_3364_ = lean_array_get_size(v_a_3362_);
v___x_3365_ = lean_box(0);
v___x_3366_ = lean_nat_dec_lt(v___x_3342_, v___x_3364_);
if (v___x_3366_ == 0)
{
lean_object* v___x_3367_; lean_object* v___x_3368_; 
lean_dec(v_a_3362_);
lean_dec(v___f_3347_);
lean_dec_ref(v_inst_3344_);
v___x_3367_ = lean_apply_2(v_toPure_3363_, lean_box(0), v___x_3365_);
v___x_3368_ = lean_apply_4(v_toSeqRight_3343_, lean_box(0), lean_box(0), v___x_3367_, v___f_3346_);
return v___x_3368_;
}
else
{
size_t v___x_3369_; size_t v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; 
lean_dec(v_toPure_3363_);
v___x_3369_ = ((size_t)0ULL);
v___x_3370_ = lean_usize_of_nat(v___x_3364_);
v___x_3371_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3344_, v___f_3347_, v_a_3362_, v___x_3369_, v___x_3370_, v___x_3365_);
v___x_3372_ = lean_apply_4(v_toSeqRight_3343_, lean_box(0), lean_box(0), v___x_3371_, v___f_3346_);
return v___x_3372_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog___redArg___lam__0___boxed(lean_object* v_toApplicative_3373_, lean_object* v_toPure_3374_, lean_object* v___x_3375_, lean_object* v_toSeqRight_3376_, lean_object* v_inst_3377_, lean_object* v___f_3378_, lean_object* v___f_3379_, lean_object* v___f_3380_, lean_object* v_____do__lift_3381_){
_start:
{
lean_object* v_res_3382_; 
v_res_3382_ = l_Lake_ELogT_replayLog___redArg___lam__0(v_toApplicative_3373_, v_toPure_3374_, v___x_3375_, v_toSeqRight_3376_, v_inst_3377_, v___f_3378_, v___f_3379_, v___f_3380_, v_____do__lift_3381_);
lean_dec(v___x_3375_);
return v_res_3382_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog___redArg(lean_object* v_inst_3383_, lean_object* v_inst_3384_, lean_object* v_logger_3385_, lean_object* v_inst_3386_, lean_object* v_self_3387_){
_start:
{
lean_object* v_toApplicative_3388_; lean_object* v_toApplicative_3389_; lean_object* v_toBind_3390_; lean_object* v_failure_3391_; lean_object* v_toPure_3392_; lean_object* v_toSeqRight_3393_; lean_object* v___f_3394_; lean_object* v___f_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___f_3400_; lean_object* v___x_3401_; 
v_toApplicative_3388_ = lean_ctor_get(v_inst_3383_, 0);
lean_inc_ref(v_toApplicative_3388_);
v_toApplicative_3389_ = lean_ctor_get(v_inst_3384_, 0);
lean_inc_ref(v_toApplicative_3389_);
v_toBind_3390_ = lean_ctor_get(v_inst_3384_, 1);
lean_inc(v_toBind_3390_);
v_failure_3391_ = lean_ctor_get(v_inst_3383_, 1);
lean_inc(v_failure_3391_);
lean_dec_ref(v_inst_3383_);
v_toPure_3392_ = lean_ctor_get(v_toApplicative_3388_, 1);
lean_inc(v_toPure_3392_);
v_toSeqRight_3393_ = lean_ctor_get(v_toApplicative_3388_, 4);
lean_inc(v_toSeqRight_3393_);
lean_dec_ref(v_toApplicative_3388_);
v___f_3394_ = lean_alloc_closure((void*)(l_Lake_Log_replay___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3394_, 0, v_logger_3385_);
v___f_3395_ = lean_alloc_closure((void*)(l_Lake_MonadLog_error___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3395_, 0, v_failure_3391_);
v___x_3396_ = lean_unsigned_to_nat(0u);
v___x_3397_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_3398_ = lean_apply_1(v_self_3387_, v___x_3397_);
v___x_3399_ = lean_apply_2(v_inst_3386_, lean_box(0), v___x_3398_);
lean_inc_ref(v___f_3394_);
v___f_3400_ = lean_alloc_closure((void*)(l_Lake_ELogT_replayLog___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_3400_, 0, v_toApplicative_3389_);
lean_closure_set(v___f_3400_, 1, v_toPure_3392_);
lean_closure_set(v___f_3400_, 2, v___x_3396_);
lean_closure_set(v___f_3400_, 3, v_toSeqRight_3393_);
lean_closure_set(v___f_3400_, 4, v_inst_3384_);
lean_closure_set(v___f_3400_, 5, v___f_3394_);
lean_closure_set(v___f_3400_, 6, v___f_3395_);
lean_closure_set(v___f_3400_, 7, v___f_3394_);
v___x_3401_ = lean_apply_4(v_toBind_3390_, lean_box(0), lean_box(0), v___x_3399_, v___f_3400_);
return v___x_3401_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog(lean_object* v_n_3402_, lean_object* v_m_3403_, lean_object* v_00_u03b1_3404_, lean_object* v_inst_3405_, lean_object* v_inst_3406_, lean_object* v_logger_3407_, lean_object* v_inst_3408_, lean_object* v_self_3409_){
_start:
{
lean_object* v_toApplicative_3410_; lean_object* v_toApplicative_3411_; lean_object* v_toBind_3412_; lean_object* v_failure_3413_; lean_object* v_toPure_3414_; lean_object* v_toSeqRight_3415_; lean_object* v___f_3416_; lean_object* v___f_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___f_3422_; lean_object* v___x_3423_; 
v_toApplicative_3410_ = lean_ctor_get(v_inst_3405_, 0);
lean_inc_ref(v_toApplicative_3410_);
v_toApplicative_3411_ = lean_ctor_get(v_inst_3406_, 0);
lean_inc_ref(v_toApplicative_3411_);
v_toBind_3412_ = lean_ctor_get(v_inst_3406_, 1);
lean_inc(v_toBind_3412_);
v_failure_3413_ = lean_ctor_get(v_inst_3405_, 1);
lean_inc(v_failure_3413_);
lean_dec_ref(v_inst_3405_);
v_toPure_3414_ = lean_ctor_get(v_toApplicative_3410_, 1);
lean_inc(v_toPure_3414_);
v_toSeqRight_3415_ = lean_ctor_get(v_toApplicative_3410_, 4);
lean_inc(v_toSeqRight_3415_);
lean_dec_ref(v_toApplicative_3410_);
v___f_3416_ = lean_alloc_closure((void*)(l_Lake_Log_replay___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3416_, 0, v_logger_3407_);
v___f_3417_ = lean_alloc_closure((void*)(l_Lake_MonadLog_error___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3417_, 0, v_failure_3413_);
v___x_3418_ = lean_unsigned_to_nat(0u);
v___x_3419_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_3420_ = lean_apply_1(v_self_3409_, v___x_3419_);
v___x_3421_ = lean_apply_2(v_inst_3408_, lean_box(0), v___x_3420_);
lean_inc_ref(v___f_3416_);
v___f_3422_ = lean_alloc_closure((void*)(l_Lake_ELogT_replayLog___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_3422_, 0, v_toApplicative_3411_);
lean_closure_set(v___f_3422_, 1, v_toPure_3414_);
lean_closure_set(v___f_3422_, 2, v___x_3418_);
lean_closure_set(v___f_3422_, 3, v_toSeqRight_3415_);
lean_closure_set(v___f_3422_, 4, v_inst_3406_);
lean_closure_set(v___f_3422_, 5, v___f_3416_);
lean_closure_set(v___f_3422_, 6, v___f_3417_);
lean_closure_set(v___f_3422_, 7, v___f_3416_);
v___x_3423_ = lean_apply_4(v_toBind_3412_, lean_box(0), lean_box(0), v___x_3421_, v___f_3422_);
return v___x_3423_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___redArg___lam__0(lean_object* v_val_3424_, uint8_t v_outLv_3425_, uint8_t v_val_3426_, lean_object* v_inst_3427_, lean_object* v_e_3428_){
_start:
{
lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; 
v___x_3429_ = lean_box(v_outLv_3425_);
v___x_3430_ = lean_box(v_val_3426_);
v___x_3431_ = lean_alloc_closure((void*)(l_Lake_logToStream___boxed), 5, 4);
lean_closure_set(v___x_3431_, 0, v_e_3428_);
lean_closure_set(v___x_3431_, 1, v_val_3424_);
lean_closure_set(v___x_3431_, 2, v___x_3429_);
lean_closure_set(v___x_3431_, 3, v___x_3430_);
v___x_3432_ = lean_apply_2(v_inst_3427_, lean_box(0), v___x_3431_);
return v___x_3432_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___redArg___lam__0___boxed(lean_object* v_val_3433_, lean_object* v_outLv_3434_, lean_object* v_val_3435_, lean_object* v_inst_3436_, lean_object* v_e_3437_){
_start:
{
uint8_t v_outLv_boxed_3438_; uint8_t v_val_44__boxed_3439_; lean_object* v_res_3440_; 
v_outLv_boxed_3438_ = lean_unbox(v_outLv_3434_);
v_val_44__boxed_3439_ = lean_unbox(v_val_3435_);
v_res_3440_ = l_Lake_LogConfig_getLogger___redArg___lam__0(v_val_3433_, v_outLv_boxed_3438_, v_val_44__boxed_3439_, v_inst_3436_, v_e_3437_);
return v_res_3440_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___redArg(lean_object* v_inst_3441_, lean_object* v_self_3442_){
_start:
{
uint8_t v_outLv_3444_; uint8_t v_ansiMode_3445_; lean_object* v_out_3446_; lean_object* v___x_3447_; uint8_t v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___f_3451_; 
v_outLv_3444_ = lean_ctor_get_uint8(v_self_3442_, sizeof(void*)*1 + 1);
v_ansiMode_3445_ = lean_ctor_get_uint8(v_self_3442_, sizeof(void*)*1 + 2);
v_out_3446_ = lean_ctor_get(v_self_3442_, 0);
v___x_3447_ = l_Lake_OutStream_get(v_out_3446_);
lean_inc_ref(v___x_3447_);
v___x_3448_ = l_Lake_AnsiMode_isEnabled(v___x_3447_, v_ansiMode_3445_);
v___x_3449_ = lean_box(v_outLv_3444_);
v___x_3450_ = lean_box(v___x_3448_);
v___f_3451_ = lean_alloc_closure((void*)(l_Lake_LogConfig_getLogger___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_3451_, 0, v___x_3447_);
lean_closure_set(v___f_3451_, 1, v___x_3449_);
lean_closure_set(v___f_3451_, 2, v___x_3450_);
lean_closure_set(v___f_3451_, 3, v_inst_3441_);
return v___f_3451_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___redArg___boxed(lean_object* v_inst_3452_, lean_object* v_self_3453_, lean_object* v_a_3454_){
_start:
{
lean_object* v_res_3455_; 
v_res_3455_ = l_Lake_LogConfig_getLogger___redArg(v_inst_3452_, v_self_3453_);
lean_dec_ref(v_self_3453_);
return v_res_3455_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger(lean_object* v_m_3456_, lean_object* v_inst_3457_, lean_object* v_self_3458_){
_start:
{
uint8_t v_outLv_3460_; uint8_t v_ansiMode_3461_; lean_object* v_out_3462_; lean_object* v___x_3463_; uint8_t v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___f_3467_; 
v_outLv_3460_ = lean_ctor_get_uint8(v_self_3458_, sizeof(void*)*1 + 1);
v_ansiMode_3461_ = lean_ctor_get_uint8(v_self_3458_, sizeof(void*)*1 + 2);
v_out_3462_ = lean_ctor_get(v_self_3458_, 0);
v___x_3463_ = l_Lake_OutStream_get(v_out_3462_);
lean_inc_ref(v___x_3463_);
v___x_3464_ = l_Lake_AnsiMode_isEnabled(v___x_3463_, v_ansiMode_3461_);
v___x_3465_ = lean_box(v_outLv_3460_);
v___x_3466_ = lean_box(v___x_3464_);
v___f_3467_ = lean_alloc_closure((void*)(l_Lake_LogConfig_getLogger___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_3467_, 0, v___x_3463_);
lean_closure_set(v___f_3467_, 1, v___x_3465_);
lean_closure_set(v___f_3467_, 2, v___x_3466_);
lean_closure_set(v___f_3467_, 3, v_inst_3457_);
return v___f_3467_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___boxed(lean_object* v_m_3468_, lean_object* v_inst_3469_, lean_object* v_self_3470_, lean_object* v_a_3471_){
_start:
{
lean_object* v_res_3472_; 
v_res_3472_ = l_Lake_LogConfig_getLogger(v_m_3468_, v_inst_3469_, v_self_3470_);
lean_dec_ref(v_self_3470_);
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_instMonadLiftIO___lam__0(lean_object* v_00_u03b1_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_){
_start:
{
lean_object* v___x_3477_; 
v___x_3477_ = lean_apply_1(v___y_3474_, lean_box(0));
if (lean_obj_tag(v___x_3477_) == 0)
{
lean_object* v_a_3478_; lean_object* v___x_3479_; 
v_a_3478_ = lean_ctor_get(v___x_3477_, 0);
lean_inc(v_a_3478_);
lean_dec_ref_known(v___x_3477_, 1);
v___x_3479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3479_, 0, v_a_3478_);
lean_ctor_set(v___x_3479_, 1, v___y_3475_);
return v___x_3479_;
}
else
{
lean_object* v_a_3480_; lean_object* v___x_3481_; uint8_t v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; 
v_a_3480_ = lean_ctor_get(v___x_3477_, 0);
lean_inc(v_a_3480_);
lean_dec_ref_known(v___x_3477_, 1);
v___x_3481_ = lean_io_error_to_string(v_a_3480_);
v___x_3482_ = 3;
v___x_3483_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3483_, 0, v___x_3481_);
lean_ctor_set_uint8(v___x_3483_, sizeof(void*)*1, v___x_3482_);
v___x_3484_ = lean_array_get_size(v___y_3475_);
v___x_3485_ = lean_array_push(v___y_3475_, v___x_3483_);
v___x_3486_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3486_, 0, v___x_3484_);
lean_ctor_set(v___x_3486_, 1, v___x_3485_);
return v___x_3486_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_instMonadLiftIO___lam__0___boxed(lean_object* v_00_u03b1_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_){
_start:
{
lean_object* v_res_3491_; 
v_res_3491_ = l_Lake_LogIO_instMonadLiftIO___lam__0(v_00_u03b1_3487_, v___y_3488_, v___y_3489_);
return v_res_3491_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___redArg___lam__0(lean_object* v_val_3494_, uint8_t v___y_3495_, uint8_t v_val_3496_, lean_object* v_x_3497_, lean_object* v___y_3498_){
_start:
{
lean_object* v___x_3500_; 
v___x_3500_ = l_Lake_logToStream(v___y_3498_, v_val_3494_, v___y_3495_, v_val_3496_);
return v___x_3500_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___redArg___lam__0___boxed(lean_object* v_val_3501_, lean_object* v___y_3502_, lean_object* v_val_3503_, lean_object* v_x_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_){
_start:
{
uint8_t v___y_680__boxed_3507_; uint8_t v_val_681__boxed_3508_; lean_object* v_res_3509_; 
v___y_680__boxed_3507_ = lean_unbox(v___y_3502_);
v_val_681__boxed_3508_ = lean_unbox(v_val_3503_);
v_res_3509_ = l_Lake_LogIO_toBaseIO___redArg___lam__0(v_val_3501_, v___y_680__boxed_3507_, v_val_681__boxed_3508_, v_x_3504_, v___y_3505_);
lean_dec_ref(v___y_3505_);
return v_res_3509_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___redArg(lean_object* v_self_3510_, lean_object* v_cfg_3511_){
_start:
{
uint8_t v___y_3514_; lean_object* v___y_3515_; lean_object* v___x_3517_; uint8_t v___y_3519_; lean_object* v___y_3520_; lean_object* v___y_3521_; uint8_t v___y_3522_; lean_object* v___y_3523_; uint8_t v___y_3524_; lean_object* v___y_3539_; uint8_t v___y_3540_; lean_object* v___y_3541_; lean_object* v___y_3542_; uint8_t v___y_3543_; uint8_t v___y_3546_; lean_object* v___y_3547_; uint8_t v___y_3548_; lean_object* v___y_3549_; uint8_t v___y_3550_; lean_object* v___y_3551_; uint8_t v___y_3552_; lean_object* v___y_3554_; lean_object* v___y_3555_; uint8_t v___y_3556_; lean_object* v___x_3565_; lean_object* v___x_3566_; 
v___x_3517_ = l_instMonadBaseIO;
v___x_3565_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_3566_ = lean_apply_2(v_self_3510_, v___x_3565_, lean_box(0));
if (lean_obj_tag(v___x_3566_) == 0)
{
lean_object* v_a_3567_; lean_object* v_a_3568_; lean_object* v___x_3569_; uint8_t v___x_3570_; 
v_a_3567_ = lean_ctor_get(v___x_3566_, 0);
lean_inc(v_a_3567_);
v_a_3568_ = lean_ctor_get(v___x_3566_, 1);
lean_inc(v_a_3568_);
lean_dec_ref_known(v___x_3566_, 2);
v___x_3569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3569_, 0, v_a_3567_);
v___x_3570_ = 0;
v___y_3554_ = v___x_3569_;
v___y_3555_ = v_a_3568_;
v___y_3556_ = v___x_3570_;
goto v___jp_3553_;
}
else
{
lean_object* v_a_3571_; lean_object* v___x_3572_; uint8_t v___x_3573_; 
v_a_3571_ = lean_ctor_get(v___x_3566_, 1);
lean_inc(v_a_3571_);
lean_dec_ref_known(v___x_3566_, 2);
v___x_3572_ = lean_box(0);
v___x_3573_ = 1;
v___y_3554_ = v___x_3572_;
v___y_3555_ = v_a_3571_;
v___y_3556_ = v___x_3573_;
goto v___jp_3553_;
}
v___jp_3513_:
{
if (v___y_3514_ == 0)
{
return v___y_3515_;
}
else
{
lean_object* v___x_3516_; 
lean_dec(v___y_3515_);
v___x_3516_ = lean_box(0);
return v___x_3516_;
}
}
v___jp_3518_:
{
lean_object* v___x_3525_; uint8_t v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; uint8_t v___x_3529_; 
v___x_3525_ = l_Lake_OutStream_get(v___y_3520_);
lean_inc_ref(v___x_3525_);
v___x_3526_ = l_Lake_AnsiMode_isEnabled(v___x_3525_, v___y_3522_);
v___x_3527_ = lean_unsigned_to_nat(0u);
v___x_3528_ = lean_array_get_size(v___y_3523_);
v___x_3529_ = lean_nat_dec_lt(v___x_3527_, v___x_3528_);
if (v___x_3529_ == 0)
{
lean_dec_ref(v___x_3525_);
lean_dec_ref(v___y_3523_);
v___y_3514_ = v___y_3519_;
v___y_3515_ = v___y_3521_;
goto v___jp_3513_;
}
else
{
lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___f_3532_; lean_object* v___x_3533_; size_t v___x_3534_; size_t v___x_3535_; lean_object* v___x_481__overap_3536_; lean_object* v___x_3537_; 
v___x_3530_ = lean_box(v___y_3524_);
v___x_3531_ = lean_box(v___x_3526_);
v___f_3532_ = lean_alloc_closure((void*)(l_Lake_LogIO_toBaseIO___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_3532_, 0, v___x_3525_);
lean_closure_set(v___f_3532_, 1, v___x_3530_);
lean_closure_set(v___f_3532_, 2, v___x_3531_);
v___x_3533_ = lean_box(0);
v___x_3534_ = ((size_t)0ULL);
v___x_3535_ = lean_usize_of_nat(v___x_3528_);
v___x_481__overap_3536_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3517_, v___f_3532_, v___y_3523_, v___x_3534_, v___x_3535_, v___x_3533_);
v___x_3537_ = lean_apply_1(v___x_481__overap_3536_, lean_box(0));
v___y_3514_ = v___y_3519_;
v___y_3515_ = v___y_3521_;
goto v___jp_3513_;
}
}
v___jp_3538_:
{
uint8_t v___x_3544_; 
v___x_3544_ = 0;
v___y_3519_ = v___y_3543_;
v___y_3520_ = v___y_3539_;
v___y_3521_ = v___y_3541_;
v___y_3522_ = v___y_3540_;
v___y_3523_ = v___y_3542_;
v___y_3524_ = v___x_3544_;
goto v___jp_3518_;
}
v___jp_3545_:
{
if (v___y_3546_ == 0)
{
if (v___y_3552_ == 0)
{
v___y_3519_ = v___y_3552_;
v___y_3520_ = v___y_3547_;
v___y_3521_ = v___y_3549_;
v___y_3522_ = v___y_3550_;
v___y_3523_ = v___y_3551_;
v___y_3524_ = v___y_3548_;
goto v___jp_3518_;
}
else
{
v___y_3539_ = v___y_3547_;
v___y_3540_ = v___y_3550_;
v___y_3541_ = v___y_3549_;
v___y_3542_ = v___y_3551_;
v___y_3543_ = v___y_3552_;
goto v___jp_3538_;
}
}
else
{
v___y_3539_ = v___y_3547_;
v___y_3540_ = v___y_3550_;
v___y_3541_ = v___y_3549_;
v___y_3542_ = v___y_3551_;
v___y_3543_ = v___y_3546_;
goto v___jp_3538_;
}
}
v___jp_3553_:
{
uint8_t v_failLv_3557_; uint8_t v_outLv_3558_; uint8_t v_ansiMode_3559_; lean_object* v_out_3560_; uint8_t v___x_3561_; uint8_t v___x_3562_; 
v_failLv_3557_ = lean_ctor_get_uint8(v_cfg_3511_, sizeof(void*)*1);
v_outLv_3558_ = lean_ctor_get_uint8(v_cfg_3511_, sizeof(void*)*1 + 1);
v_ansiMode_3559_ = lean_ctor_get_uint8(v_cfg_3511_, sizeof(void*)*1 + 2);
v_out_3560_ = lean_ctor_get(v_cfg_3511_, 0);
v___x_3561_ = l_Lake_Log_maxLv(v___y_3555_);
v___x_3562_ = l_Lake_instOrdLogLevel_ord(v_failLv_3557_, v___x_3561_);
if (v___x_3562_ == 2)
{
uint8_t v___x_3563_; 
v___x_3563_ = 0;
v___y_3546_ = v___y_3556_;
v___y_3547_ = v_out_3560_;
v___y_3548_ = v_outLv_3558_;
v___y_3549_ = v___y_3554_;
v___y_3550_ = v_ansiMode_3559_;
v___y_3551_ = v___y_3555_;
v___y_3552_ = v___x_3563_;
goto v___jp_3545_;
}
else
{
uint8_t v___x_3564_; 
v___x_3564_ = 1;
v___y_3546_ = v___y_3556_;
v___y_3547_ = v_out_3560_;
v___y_3548_ = v_outLv_3558_;
v___y_3549_ = v___y_3554_;
v___y_3550_ = v_ansiMode_3559_;
v___y_3551_ = v___y_3555_;
v___y_3552_ = v___x_3564_;
goto v___jp_3545_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___redArg___boxed(lean_object* v_self_3574_, lean_object* v_cfg_3575_, lean_object* v_a_3576_){
_start:
{
lean_object* v_res_3577_; 
v_res_3577_ = l_Lake_LogIO_toBaseIO___redArg(v_self_3574_, v_cfg_3575_);
lean_dec_ref(v_cfg_3575_);
return v_res_3577_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO(lean_object* v_00_u03b1_3578_, lean_object* v_self_3579_, lean_object* v_cfg_3580_){
_start:
{
uint8_t v___y_3583_; lean_object* v___y_3584_; lean_object* v___x_3586_; uint8_t v___y_3588_; lean_object* v___y_3589_; lean_object* v___y_3590_; uint8_t v___y_3591_; lean_object* v___y_3592_; uint8_t v___y_3593_; lean_object* v___y_3608_; uint8_t v___y_3609_; lean_object* v___y_3610_; lean_object* v___y_3611_; uint8_t v___y_3612_; uint8_t v___y_3615_; lean_object* v___y_3616_; uint8_t v___y_3617_; lean_object* v___y_3618_; uint8_t v___y_3619_; lean_object* v___y_3620_; uint8_t v___y_3621_; lean_object* v___y_3623_; lean_object* v___y_3624_; uint8_t v___y_3625_; lean_object* v___x_3634_; lean_object* v___x_3635_; 
v___x_3586_ = l_instMonadBaseIO;
v___x_3634_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_3635_ = lean_apply_2(v_self_3579_, v___x_3634_, lean_box(0));
if (lean_obj_tag(v___x_3635_) == 0)
{
lean_object* v_a_3636_; lean_object* v_a_3637_; lean_object* v___x_3638_; uint8_t v___x_3639_; 
v_a_3636_ = lean_ctor_get(v___x_3635_, 0);
lean_inc(v_a_3636_);
v_a_3637_ = lean_ctor_get(v___x_3635_, 1);
lean_inc(v_a_3637_);
lean_dec_ref_known(v___x_3635_, 2);
v___x_3638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3638_, 0, v_a_3636_);
v___x_3639_ = 0;
v___y_3623_ = v___x_3638_;
v___y_3624_ = v_a_3637_;
v___y_3625_ = v___x_3639_;
goto v___jp_3622_;
}
else
{
lean_object* v_a_3640_; lean_object* v___x_3641_; uint8_t v___x_3642_; 
v_a_3640_ = lean_ctor_get(v___x_3635_, 1);
lean_inc(v_a_3640_);
lean_dec_ref_known(v___x_3635_, 2);
v___x_3641_ = lean_box(0);
v___x_3642_ = 1;
v___y_3623_ = v___x_3641_;
v___y_3624_ = v_a_3640_;
v___y_3625_ = v___x_3642_;
goto v___jp_3622_;
}
v___jp_3582_:
{
if (v___y_3583_ == 0)
{
return v___y_3584_;
}
else
{
lean_object* v___x_3585_; 
lean_dec(v___y_3584_);
v___x_3585_ = lean_box(0);
return v___x_3585_;
}
}
v___jp_3587_:
{
lean_object* v___x_3594_; uint8_t v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; uint8_t v___x_3598_; 
v___x_3594_ = l_Lake_OutStream_get(v___y_3589_);
lean_inc_ref(v___x_3594_);
v___x_3595_ = l_Lake_AnsiMode_isEnabled(v___x_3594_, v___y_3591_);
v___x_3596_ = lean_unsigned_to_nat(0u);
v___x_3597_ = lean_array_get_size(v___y_3592_);
v___x_3598_ = lean_nat_dec_lt(v___x_3596_, v___x_3597_);
if (v___x_3598_ == 0)
{
lean_dec_ref(v___x_3594_);
lean_dec_ref(v___y_3592_);
v___y_3583_ = v___y_3588_;
v___y_3584_ = v___y_3590_;
goto v___jp_3582_;
}
else
{
lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___f_3601_; lean_object* v___x_3602_; size_t v___x_3603_; size_t v___x_3604_; lean_object* v___x_595__overap_3605_; lean_object* v___x_3606_; 
v___x_3599_ = lean_box(v___y_3593_);
v___x_3600_ = lean_box(v___x_3595_);
v___f_3601_ = lean_alloc_closure((void*)(l_Lake_LogIO_toBaseIO___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_3601_, 0, v___x_3594_);
lean_closure_set(v___f_3601_, 1, v___x_3599_);
lean_closure_set(v___f_3601_, 2, v___x_3600_);
v___x_3602_ = lean_box(0);
v___x_3603_ = ((size_t)0ULL);
v___x_3604_ = lean_usize_of_nat(v___x_3597_);
v___x_595__overap_3605_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3586_, v___f_3601_, v___y_3592_, v___x_3603_, v___x_3604_, v___x_3602_);
v___x_3606_ = lean_apply_1(v___x_595__overap_3605_, lean_box(0));
v___y_3583_ = v___y_3588_;
v___y_3584_ = v___y_3590_;
goto v___jp_3582_;
}
}
v___jp_3607_:
{
uint8_t v___x_3613_; 
v___x_3613_ = 0;
v___y_3588_ = v___y_3612_;
v___y_3589_ = v___y_3608_;
v___y_3590_ = v___y_3610_;
v___y_3591_ = v___y_3609_;
v___y_3592_ = v___y_3611_;
v___y_3593_ = v___x_3613_;
goto v___jp_3587_;
}
v___jp_3614_:
{
if (v___y_3615_ == 0)
{
if (v___y_3621_ == 0)
{
v___y_3588_ = v___y_3621_;
v___y_3589_ = v___y_3616_;
v___y_3590_ = v___y_3618_;
v___y_3591_ = v___y_3619_;
v___y_3592_ = v___y_3620_;
v___y_3593_ = v___y_3617_;
goto v___jp_3587_;
}
else
{
v___y_3608_ = v___y_3616_;
v___y_3609_ = v___y_3619_;
v___y_3610_ = v___y_3618_;
v___y_3611_ = v___y_3620_;
v___y_3612_ = v___y_3621_;
goto v___jp_3607_;
}
}
else
{
v___y_3608_ = v___y_3616_;
v___y_3609_ = v___y_3619_;
v___y_3610_ = v___y_3618_;
v___y_3611_ = v___y_3620_;
v___y_3612_ = v___y_3615_;
goto v___jp_3607_;
}
}
v___jp_3622_:
{
uint8_t v_failLv_3626_; uint8_t v_outLv_3627_; uint8_t v_ansiMode_3628_; lean_object* v_out_3629_; uint8_t v___x_3630_; uint8_t v___x_3631_; 
v_failLv_3626_ = lean_ctor_get_uint8(v_cfg_3580_, sizeof(void*)*1);
v_outLv_3627_ = lean_ctor_get_uint8(v_cfg_3580_, sizeof(void*)*1 + 1);
v_ansiMode_3628_ = lean_ctor_get_uint8(v_cfg_3580_, sizeof(void*)*1 + 2);
v_out_3629_ = lean_ctor_get(v_cfg_3580_, 0);
v___x_3630_ = l_Lake_Log_maxLv(v___y_3624_);
v___x_3631_ = l_Lake_instOrdLogLevel_ord(v_failLv_3626_, v___x_3630_);
if (v___x_3631_ == 2)
{
uint8_t v___x_3632_; 
v___x_3632_ = 0;
v___y_3615_ = v___y_3625_;
v___y_3616_ = v_out_3629_;
v___y_3617_ = v_outLv_3627_;
v___y_3618_ = v___y_3623_;
v___y_3619_ = v_ansiMode_3628_;
v___y_3620_ = v___y_3624_;
v___y_3621_ = v___x_3632_;
goto v___jp_3614_;
}
else
{
uint8_t v___x_3633_; 
v___x_3633_ = 1;
v___y_3615_ = v___y_3625_;
v___y_3616_ = v_out_3629_;
v___y_3617_ = v_outLv_3627_;
v___y_3618_ = v___y_3623_;
v___y_3619_ = v_ansiMode_3628_;
v___y_3620_ = v___y_3624_;
v___y_3621_ = v___x_3633_;
goto v___jp_3614_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___boxed(lean_object* v_00_u03b1_3643_, lean_object* v_self_3644_, lean_object* v_cfg_3645_, lean_object* v_a_3646_){
_start:
{
lean_object* v_res_3647_; 
v_res_3647_ = l_Lake_LogIO_toBaseIO(v_00_u03b1_3643_, v_self_3644_, v_cfg_3645_);
lean_dec_ref(v_cfg_3645_);
return v_res_3647_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_captureLog___redArg(lean_object* v_inst_3648_, lean_object* v_self_3649_, lean_object* v_log_3650_){
_start:
{
lean_object* v_map_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; 
v_map_3651_ = lean_ctor_get(v_inst_3648_, 0);
lean_inc(v_map_3651_);
lean_dec_ref(v_inst_3648_);
v___x_3652_ = ((lean_object*)(l_Lake_ELogT_toLogT_x3f___redArg___closed__0));
v___x_3653_ = lean_apply_1(v_self_3649_, v_log_3650_);
v___x_3654_ = lean_apply_4(v_map_3651_, lean_box(0), lean_box(0), v___x_3652_, v___x_3653_);
return v___x_3654_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_captureLog(lean_object* v_m_3655_, lean_object* v_00_u03b1_3656_, lean_object* v_inst_3657_, lean_object* v_self_3658_, lean_object* v_log_3659_){
_start:
{
lean_object* v_map_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
v_map_3660_ = lean_ctor_get(v_inst_3657_, 0);
lean_inc(v_map_3660_);
lean_dec_ref(v_inst_3657_);
v___x_3661_ = ((lean_object*)(l_Lake_ELogT_toLogT_x3f___redArg___closed__0));
v___x_3662_ = lean_apply_1(v_self_3658_, v_log_3659_);
v___x_3663_ = lean_apply_4(v_map_3660_, lean_box(0), lean_box(0), v___x_3661_, v___x_3662_);
return v___x_3663_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadError___lam__0(lean_object* v_00_u03b1_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_){
_start:
{
uint8_t v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; 
v___x_3668_ = 3;
v___x_3669_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3669_, 0, v___y_3665_);
lean_ctor_set_uint8(v___x_3669_, sizeof(void*)*1, v___x_3668_);
lean_inc_ref(v___y_3666_);
v___x_3670_ = lean_apply_2(v___y_3666_, v___x_3669_, lean_box(0));
v___x_3671_ = lean_box(0);
v___x_3672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3672_, 0, v___x_3671_);
return v___x_3672_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadError___lam__0___boxed(lean_object* v_00_u03b1_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_, lean_object* v___y_3676_){
_start:
{
lean_object* v_res_3677_; 
v_res_3677_ = l_Lake_LoggerIO_instMonadError___lam__0(v_00_u03b1_3673_, v___y_3674_, v___y_3675_);
lean_dec_ref(v___y_3675_);
return v_res_3677_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftIO___lam__0(lean_object* v_00_u03b1_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_){
_start:
{
lean_object* v___x_3684_; 
v___x_3684_ = lean_apply_1(v___y_3681_, lean_box(0));
if (lean_obj_tag(v___x_3684_) == 0)
{
lean_object* v_a_3685_; lean_object* v___x_3687_; uint8_t v_isShared_3688_; uint8_t v_isSharedCheck_3692_; 
v_a_3685_ = lean_ctor_get(v___x_3684_, 0);
v_isSharedCheck_3692_ = !lean_is_exclusive(v___x_3684_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3687_ = v___x_3684_;
v_isShared_3688_ = v_isSharedCheck_3692_;
goto v_resetjp_3686_;
}
else
{
lean_inc(v_a_3685_);
lean_dec(v___x_3684_);
v___x_3687_ = lean_box(0);
v_isShared_3688_ = v_isSharedCheck_3692_;
goto v_resetjp_3686_;
}
v_resetjp_3686_:
{
lean_object* v___x_3690_; 
if (v_isShared_3688_ == 0)
{
v___x_3690_ = v___x_3687_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v_a_3685_);
v___x_3690_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
return v___x_3690_;
}
}
}
else
{
lean_object* v_a_3693_; lean_object* v___x_3695_; uint8_t v_isShared_3696_; uint8_t v_isSharedCheck_3705_; 
v_a_3693_ = lean_ctor_get(v___x_3684_, 0);
v_isSharedCheck_3705_ = !lean_is_exclusive(v___x_3684_);
if (v_isSharedCheck_3705_ == 0)
{
v___x_3695_ = v___x_3684_;
v_isShared_3696_ = v_isSharedCheck_3705_;
goto v_resetjp_3694_;
}
else
{
lean_inc(v_a_3693_);
lean_dec(v___x_3684_);
v___x_3695_ = lean_box(0);
v_isShared_3696_ = v_isSharedCheck_3705_;
goto v_resetjp_3694_;
}
v_resetjp_3694_:
{
lean_object* v___x_3697_; uint8_t v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3703_; 
v___x_3697_ = lean_io_error_to_string(v_a_3693_);
v___x_3698_ = 3;
v___x_3699_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3699_, 0, v___x_3697_);
lean_ctor_set_uint8(v___x_3699_, sizeof(void*)*1, v___x_3698_);
lean_inc_ref(v___y_3682_);
v___x_3700_ = lean_apply_2(v___y_3682_, v___x_3699_, lean_box(0));
v___x_3701_ = lean_box(0);
if (v_isShared_3696_ == 0)
{
lean_ctor_set(v___x_3695_, 0, v___x_3701_);
v___x_3703_ = v___x_3695_;
goto v_reusejp_3702_;
}
else
{
lean_object* v_reuseFailAlloc_3704_; 
v_reuseFailAlloc_3704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3704_, 0, v___x_3701_);
v___x_3703_ = v_reuseFailAlloc_3704_;
goto v_reusejp_3702_;
}
v_reusejp_3702_:
{
return v___x_3703_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftIO___lam__0___boxed(lean_object* v_00_u03b1_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_){
_start:
{
lean_object* v_res_3710_; 
v_res_3710_ = l_Lake_LoggerIO_instMonadLiftIO___lam__0(v_00_u03b1_3706_, v___y_3707_, v___y_3708_);
lean_dec_ref(v___y_3708_);
return v_res_3710_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___lam__0(lean_object* v_x_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_){
_start:
{
lean_object* v___x_3717_; lean_object* v___x_3718_; 
lean_inc_ref(v___y_3715_);
v___x_3717_ = lean_apply_2(v___y_3715_, v___y_3714_, lean_box(0));
v___x_3718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3718_, 0, v___x_3717_);
return v___x_3718_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___lam__0___boxed(lean_object* v_x_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_){
_start:
{
lean_object* v_res_3723_; 
v_res_3723_ = l_Lake_LoggerIO_instMonadLiftLogIO___lam__0(v_x_3719_, v___y_3720_, v___y_3721_);
lean_dec_ref(v___y_3721_);
return v_res_3723_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___lam__2(lean_object* v___x_3724_, lean_object* v___f_3725_, lean_object* v___f_3726_, lean_object* v_00_u03b1_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_){
_start:
{
lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; 
v___x_3731_ = lean_unsigned_to_nat(0u);
v___x_3732_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_3733_ = lean_apply_2(v___y_3728_, v___x_3732_, lean_box(0));
if (lean_obj_tag(v___x_3733_) == 0)
{
lean_object* v_a_3734_; lean_object* v_a_3735_; lean_object* v___x_3736_; uint8_t v___x_3737_; 
lean_dec_ref(v___f_3726_);
v_a_3734_ = lean_ctor_get(v___x_3733_, 0);
lean_inc(v_a_3734_);
v_a_3735_ = lean_ctor_get(v___x_3733_, 1);
lean_inc(v_a_3735_);
lean_dec_ref_known(v___x_3733_, 2);
v___x_3736_ = lean_array_get_size(v_a_3735_);
v___x_3737_ = lean_nat_dec_lt(v___x_3731_, v___x_3736_);
if (v___x_3737_ == 0)
{
lean_object* v___x_3738_; 
lean_dec(v_a_3735_);
lean_dec_ref(v___f_3725_);
lean_dec_ref(v___x_3724_);
v___x_3738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3738_, 0, v_a_3734_);
return v___x_3738_;
}
else
{
lean_object* v___x_3739_; size_t v___x_3740_; size_t v___x_3741_; lean_object* v___x_1294__overap_3742_; lean_object* v___x_3743_; 
v___x_3739_ = lean_box(0);
v___x_3740_ = ((size_t)0ULL);
v___x_3741_ = lean_usize_of_nat(v___x_3736_);
v___x_1294__overap_3742_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3724_, v___f_3725_, v_a_3735_, v___x_3740_, v___x_3741_, v___x_3739_);
lean_inc_ref(v___y_3729_);
v___x_3743_ = lean_apply_2(v___x_1294__overap_3742_, v___y_3729_, lean_box(0));
if (lean_obj_tag(v___x_3743_) == 0)
{
lean_object* v___x_3745_; uint8_t v_isShared_3746_; uint8_t v_isSharedCheck_3750_; 
v_isSharedCheck_3750_ = !lean_is_exclusive(v___x_3743_);
if (v_isSharedCheck_3750_ == 0)
{
lean_object* v_unused_3751_; 
v_unused_3751_ = lean_ctor_get(v___x_3743_, 0);
lean_dec(v_unused_3751_);
v___x_3745_ = v___x_3743_;
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
else
{
lean_dec(v___x_3743_);
v___x_3745_ = lean_box(0);
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
v_resetjp_3744_:
{
lean_object* v___x_3748_; 
if (v_isShared_3746_ == 0)
{
lean_ctor_set(v___x_3745_, 0, v_a_3734_);
v___x_3748_ = v___x_3745_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_a_3734_);
v___x_3748_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
return v___x_3748_;
}
}
}
else
{
lean_object* v_a_3752_; lean_object* v___x_3754_; uint8_t v_isShared_3755_; uint8_t v_isSharedCheck_3759_; 
lean_dec(v_a_3734_);
v_a_3752_ = lean_ctor_get(v___x_3743_, 0);
v_isSharedCheck_3759_ = !lean_is_exclusive(v___x_3743_);
if (v_isSharedCheck_3759_ == 0)
{
v___x_3754_ = v___x_3743_;
v_isShared_3755_ = v_isSharedCheck_3759_;
goto v_resetjp_3753_;
}
else
{
lean_inc(v_a_3752_);
lean_dec(v___x_3743_);
v___x_3754_ = lean_box(0);
v_isShared_3755_ = v_isSharedCheck_3759_;
goto v_resetjp_3753_;
}
v_resetjp_3753_:
{
lean_object* v___x_3757_; 
if (v_isShared_3755_ == 0)
{
v___x_3757_ = v___x_3754_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v_a_3752_);
v___x_3757_ = v_reuseFailAlloc_3758_;
goto v_reusejp_3756_;
}
v_reusejp_3756_:
{
return v___x_3757_;
}
}
}
}
}
else
{
lean_object* v_a_3760_; lean_object* v___x_3761_; uint8_t v___x_3762_; 
lean_dec_ref(v___f_3725_);
v_a_3760_ = lean_ctor_get(v___x_3733_, 1);
lean_inc(v_a_3760_);
lean_dec_ref_known(v___x_3733_, 2);
v___x_3761_ = lean_array_get_size(v_a_3760_);
v___x_3762_ = lean_nat_dec_lt(v___x_3731_, v___x_3761_);
if (v___x_3762_ == 0)
{
lean_object* v___x_3763_; lean_object* v___x_3764_; 
lean_dec(v_a_3760_);
lean_dec_ref(v___f_3726_);
lean_dec_ref(v___x_3724_);
v___x_3763_ = lean_box(0);
v___x_3764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3764_, 0, v___x_3763_);
return v___x_3764_;
}
else
{
lean_object* v___x_3765_; size_t v___x_3766_; size_t v___x_3767_; lean_object* v___x_1310__overap_3768_; lean_object* v___x_3769_; 
v___x_3765_ = lean_box(0);
v___x_3766_ = ((size_t)0ULL);
v___x_3767_ = lean_usize_of_nat(v___x_3761_);
v___x_1310__overap_3768_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3724_, v___f_3726_, v_a_3760_, v___x_3766_, v___x_3767_, v___x_3765_);
lean_inc_ref(v___y_3729_);
v___x_3769_ = lean_apply_2(v___x_1310__overap_3768_, v___y_3729_, lean_box(0));
if (lean_obj_tag(v___x_3769_) == 0)
{
lean_object* v___x_3771_; uint8_t v_isShared_3772_; uint8_t v_isSharedCheck_3776_; 
v_isSharedCheck_3776_ = !lean_is_exclusive(v___x_3769_);
if (v_isSharedCheck_3776_ == 0)
{
lean_object* v_unused_3777_; 
v_unused_3777_ = lean_ctor_get(v___x_3769_, 0);
lean_dec(v_unused_3777_);
v___x_3771_ = v___x_3769_;
v_isShared_3772_ = v_isSharedCheck_3776_;
goto v_resetjp_3770_;
}
else
{
lean_dec(v___x_3769_);
v___x_3771_ = lean_box(0);
v_isShared_3772_ = v_isSharedCheck_3776_;
goto v_resetjp_3770_;
}
v_resetjp_3770_:
{
lean_object* v___x_3774_; 
if (v_isShared_3772_ == 0)
{
lean_ctor_set_tag(v___x_3771_, 1);
lean_ctor_set(v___x_3771_, 0, v___x_3765_);
v___x_3774_ = v___x_3771_;
goto v_reusejp_3773_;
}
else
{
lean_object* v_reuseFailAlloc_3775_; 
v_reuseFailAlloc_3775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3775_, 0, v___x_3765_);
v___x_3774_ = v_reuseFailAlloc_3775_;
goto v_reusejp_3773_;
}
v_reusejp_3773_:
{
return v___x_3774_;
}
}
}
else
{
lean_object* v_a_3778_; lean_object* v___x_3780_; uint8_t v_isShared_3781_; uint8_t v_isSharedCheck_3785_; 
v_a_3778_ = lean_ctor_get(v___x_3769_, 0);
v_isSharedCheck_3785_ = !lean_is_exclusive(v___x_3769_);
if (v_isSharedCheck_3785_ == 0)
{
v___x_3780_ = v___x_3769_;
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
else
{
lean_inc(v_a_3778_);
lean_dec(v___x_3769_);
v___x_3780_ = lean_box(0);
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
v_resetjp_3779_:
{
lean_object* v___x_3783_; 
if (v_isShared_3781_ == 0)
{
v___x_3783_ = v___x_3780_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v_a_3778_);
v___x_3783_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
return v___x_3783_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___lam__2___boxed(lean_object* v___x_3786_, lean_object* v___f_3787_, lean_object* v___f_3788_, lean_object* v_00_u03b1_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_){
_start:
{
lean_object* v_res_3793_; 
v_res_3793_ = l_Lake_LoggerIO_instMonadLiftLogIO___lam__2(v___x_3786_, v___f_3787_, v___f_3788_, v_00_u03b1_3789_, v___y_3790_, v___y_3791_);
lean_dec_ref(v___y_3791_);
return v_res_3793_;
}
}
static lean_object* _init_l_Lake_LoggerIO_instMonadLiftLogIO___closed__1(void){
_start:
{
lean_object* v___x_3795_; 
v___x_3795_ = l_instMonadEIO___redArg();
return v___x_3795_;
}
}
static lean_object* _init_l_Lake_LoggerIO_instMonadLiftLogIO___closed__2(void){
_start:
{
lean_object* v___x_3796_; lean_object* v___x_3797_; 
v___x_3796_ = lean_obj_once(&l_Lake_LoggerIO_instMonadLiftLogIO___closed__1, &l_Lake_LoggerIO_instMonadLiftLogIO___closed__1_once, _init_l_Lake_LoggerIO_instMonadLiftLogIO___closed__1);
v___x_3797_ = l_ReaderT_instMonad___redArg(v___x_3796_);
return v___x_3797_;
}
}
static lean_object* _init_l_Lake_LoggerIO_instMonadLiftLogIO___closed__3(void){
_start:
{
lean_object* v___f_3798_; lean_object* v___x_3799_; lean_object* v___f_3800_; 
v___f_3798_ = ((lean_object*)(l_Lake_LoggerIO_instMonadLiftLogIO___closed__0));
v___x_3799_ = lean_obj_once(&l_Lake_LoggerIO_instMonadLiftLogIO___closed__2, &l_Lake_LoggerIO_instMonadLiftLogIO___closed__2_once, _init_l_Lake_LoggerIO_instMonadLiftLogIO___closed__2);
v___f_3800_ = lean_alloc_closure((void*)(l_Lake_LoggerIO_instMonadLiftLogIO___lam__2___boxed), 7, 3);
lean_closure_set(v___f_3800_, 0, v___x_3799_);
lean_closure_set(v___f_3800_, 1, v___f_3798_);
lean_closure_set(v___f_3800_, 2, v___f_3798_);
return v___f_3800_;
}
}
static lean_object* _init_l_Lake_LoggerIO_instMonadLiftLogIO(void){
_start:
{
lean_object* v___f_3801_; 
v___f_3801_ = lean_obj_once(&l_Lake_LoggerIO_instMonadLiftLogIO___closed__3, &l_Lake_LoggerIO_instMonadLiftLogIO___closed__3_once, _init_l_Lake_LoggerIO_instMonadLiftLogIO___closed__3);
return v___f_3801_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___redArg___lam__0(lean_object* v_val_3802_, uint8_t v_outLv_3803_, uint8_t v_val_3804_, lean_object* v_e_3805_){
_start:
{
lean_object* v___x_3807_; 
v___x_3807_ = l_Lake_logToStream(v_e_3805_, v_val_3802_, v_outLv_3803_, v_val_3804_);
return v___x_3807_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___redArg___lam__0___boxed(lean_object* v_val_3808_, lean_object* v_outLv_3809_, lean_object* v_val_3810_, lean_object* v_e_3811_, lean_object* v___y_3812_){
_start:
{
uint8_t v_outLv_boxed_3813_; uint8_t v_val_178__boxed_3814_; lean_object* v_res_3815_; 
v_outLv_boxed_3813_ = lean_unbox(v_outLv_3809_);
v_val_178__boxed_3814_ = lean_unbox(v_val_3810_);
v_res_3815_ = l_Lake_LoggerIO_toBaseIO___redArg___lam__0(v_val_3808_, v_outLv_boxed_3813_, v_val_178__boxed_3814_, v_e_3811_);
lean_dec_ref(v_e_3811_);
return v_res_3815_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___redArg(lean_object* v_self_3816_, lean_object* v_cfg_3817_){
_start:
{
uint8_t v_outLv_3819_; uint8_t v_ansiMode_3820_; lean_object* v_out_3821_; lean_object* v___x_3822_; uint8_t v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___f_3826_; lean_object* v___x_3827_; 
v_outLv_3819_ = lean_ctor_get_uint8(v_cfg_3817_, sizeof(void*)*1 + 1);
v_ansiMode_3820_ = lean_ctor_get_uint8(v_cfg_3817_, sizeof(void*)*1 + 2);
v_out_3821_ = lean_ctor_get(v_cfg_3817_, 0);
v___x_3822_ = l_Lake_OutStream_get(v_out_3821_);
lean_inc_ref(v___x_3822_);
v___x_3823_ = l_Lake_AnsiMode_isEnabled(v___x_3822_, v_ansiMode_3820_);
v___x_3824_ = lean_box(v_outLv_3819_);
v___x_3825_ = lean_box(v___x_3823_);
v___f_3826_ = lean_alloc_closure((void*)(l_Lake_LoggerIO_toBaseIO___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3826_, 0, v___x_3822_);
lean_closure_set(v___f_3826_, 1, v___x_3824_);
lean_closure_set(v___f_3826_, 2, v___x_3825_);
v___x_3827_ = lean_apply_2(v_self_3816_, v___f_3826_, lean_box(0));
if (lean_obj_tag(v___x_3827_) == 0)
{
lean_object* v_a_3828_; lean_object* v___x_3830_; uint8_t v_isShared_3831_; uint8_t v_isSharedCheck_3835_; 
v_a_3828_ = lean_ctor_get(v___x_3827_, 0);
v_isSharedCheck_3835_ = !lean_is_exclusive(v___x_3827_);
if (v_isSharedCheck_3835_ == 0)
{
v___x_3830_ = v___x_3827_;
v_isShared_3831_ = v_isSharedCheck_3835_;
goto v_resetjp_3829_;
}
else
{
lean_inc(v_a_3828_);
lean_dec(v___x_3827_);
v___x_3830_ = lean_box(0);
v_isShared_3831_ = v_isSharedCheck_3835_;
goto v_resetjp_3829_;
}
v_resetjp_3829_:
{
lean_object* v___x_3833_; 
if (v_isShared_3831_ == 0)
{
lean_ctor_set_tag(v___x_3830_, 1);
v___x_3833_ = v___x_3830_;
goto v_reusejp_3832_;
}
else
{
lean_object* v_reuseFailAlloc_3834_; 
v_reuseFailAlloc_3834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3834_, 0, v_a_3828_);
v___x_3833_ = v_reuseFailAlloc_3834_;
goto v_reusejp_3832_;
}
v_reusejp_3832_:
{
return v___x_3833_;
}
}
}
else
{
lean_object* v___x_3836_; 
lean_dec_ref_known(v___x_3827_, 1);
v___x_3836_ = lean_box(0);
return v___x_3836_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___redArg___boxed(lean_object* v_self_3837_, lean_object* v_cfg_3838_, lean_object* v_a_3839_){
_start:
{
lean_object* v_res_3840_; 
v_res_3840_ = l_Lake_LoggerIO_toBaseIO___redArg(v_self_3837_, v_cfg_3838_);
lean_dec_ref(v_cfg_3838_);
return v_res_3840_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO(lean_object* v_00_u03b1_3841_, lean_object* v_self_3842_, lean_object* v_cfg_3843_){
_start:
{
uint8_t v_outLv_3845_; uint8_t v_ansiMode_3846_; lean_object* v_out_3847_; lean_object* v___x_3848_; uint8_t v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___f_3852_; lean_object* v___x_3853_; 
v_outLv_3845_ = lean_ctor_get_uint8(v_cfg_3843_, sizeof(void*)*1 + 1);
v_ansiMode_3846_ = lean_ctor_get_uint8(v_cfg_3843_, sizeof(void*)*1 + 2);
v_out_3847_ = lean_ctor_get(v_cfg_3843_, 0);
v___x_3848_ = l_Lake_OutStream_get(v_out_3847_);
lean_inc_ref(v___x_3848_);
v___x_3849_ = l_Lake_AnsiMode_isEnabled(v___x_3848_, v_ansiMode_3846_);
v___x_3850_ = lean_box(v_outLv_3845_);
v___x_3851_ = lean_box(v___x_3849_);
v___f_3852_ = lean_alloc_closure((void*)(l_Lake_LoggerIO_toBaseIO___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3852_, 0, v___x_3848_);
lean_closure_set(v___f_3852_, 1, v___x_3850_);
lean_closure_set(v___f_3852_, 2, v___x_3851_);
v___x_3853_ = lean_apply_2(v_self_3842_, v___f_3852_, lean_box(0));
if (lean_obj_tag(v___x_3853_) == 0)
{
lean_object* v_a_3854_; lean_object* v___x_3856_; uint8_t v_isShared_3857_; uint8_t v_isSharedCheck_3861_; 
v_a_3854_ = lean_ctor_get(v___x_3853_, 0);
v_isSharedCheck_3861_ = !lean_is_exclusive(v___x_3853_);
if (v_isSharedCheck_3861_ == 0)
{
v___x_3856_ = v___x_3853_;
v_isShared_3857_ = v_isSharedCheck_3861_;
goto v_resetjp_3855_;
}
else
{
lean_inc(v_a_3854_);
lean_dec(v___x_3853_);
v___x_3856_ = lean_box(0);
v_isShared_3857_ = v_isSharedCheck_3861_;
goto v_resetjp_3855_;
}
v_resetjp_3855_:
{
lean_object* v___x_3859_; 
if (v_isShared_3857_ == 0)
{
lean_ctor_set_tag(v___x_3856_, 1);
v___x_3859_ = v___x_3856_;
goto v_reusejp_3858_;
}
else
{
lean_object* v_reuseFailAlloc_3860_; 
v_reuseFailAlloc_3860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3860_, 0, v_a_3854_);
v___x_3859_ = v_reuseFailAlloc_3860_;
goto v_reusejp_3858_;
}
v_reusejp_3858_:
{
return v___x_3859_;
}
}
}
else
{
lean_object* v___x_3862_; 
lean_dec_ref_known(v___x_3853_, 1);
v___x_3862_ = lean_box(0);
return v___x_3862_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___boxed(lean_object* v_00_u03b1_3863_, lean_object* v_self_3864_, lean_object* v_cfg_3865_, lean_object* v_a_3866_){
_start:
{
lean_object* v_res_3867_; 
v_res_3867_ = l_Lake_LoggerIO_toBaseIO(v_00_u03b1_3863_, v_self_3864_, v_cfg_3865_);
lean_dec_ref(v_cfg_3865_);
return v_res_3867_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___redArg___lam__0(lean_object* v_val_3868_, lean_object* v_e_3869_){
_start:
{
lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; 
v___x_3871_ = lean_st_ref_take(v_val_3868_);
v___x_3872_ = lean_array_push(v___x_3871_, v_e_3869_);
v___x_3873_ = lean_st_ref_put(v_val_3868_, v___x_3872_);
return v___x_3873_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___redArg___lam__0___boxed(lean_object* v_val_3874_, lean_object* v_e_3875_, lean_object* v___y_3876_){
_start:
{
lean_object* v_res_3877_; 
v_res_3877_ = l_Lake_LoggerIO_captureLog___redArg___lam__0(v_val_3874_, v_e_3875_);
lean_dec(v_val_3874_);
return v_res_3877_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___redArg(lean_object* v_self_3878_){
_start:
{
lean_object* v___y_3881_; lean_object* v___y_3882_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v_val_3887_; lean_object* v___f_3898_; lean_object* v___x_3899_; 
v___x_3884_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_3885_ = lean_st_mk_ref(v___x_3884_);
lean_inc(v___x_3885_);
v___f_3898_ = lean_alloc_closure((void*)(l_Lake_LoggerIO_captureLog___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3898_, 0, v___x_3885_);
v___x_3899_ = lean_apply_2(v_self_3878_, v___f_3898_, lean_box(0));
if (lean_obj_tag(v___x_3899_) == 0)
{
lean_object* v_a_3900_; lean_object* v___x_3902_; uint8_t v_isShared_3903_; uint8_t v_isSharedCheck_3907_; 
v_a_3900_ = lean_ctor_get(v___x_3899_, 0);
v_isSharedCheck_3907_ = !lean_is_exclusive(v___x_3899_);
if (v_isSharedCheck_3907_ == 0)
{
v___x_3902_ = v___x_3899_;
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
else
{
lean_inc(v_a_3900_);
lean_dec(v___x_3899_);
v___x_3902_ = lean_box(0);
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
v_resetjp_3901_:
{
lean_object* v___x_3905_; 
if (v_isShared_3903_ == 0)
{
lean_ctor_set_tag(v___x_3902_, 1);
v___x_3905_ = v___x_3902_;
goto v_reusejp_3904_;
}
else
{
lean_object* v_reuseFailAlloc_3906_; 
v_reuseFailAlloc_3906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3906_, 0, v_a_3900_);
v___x_3905_ = v_reuseFailAlloc_3906_;
goto v_reusejp_3904_;
}
v_reusejp_3904_:
{
v_val_3887_ = v___x_3905_;
goto v___jp_3886_;
}
}
}
else
{
lean_object* v_a_3908_; lean_object* v___x_3910_; uint8_t v_isShared_3911_; uint8_t v_isSharedCheck_3915_; 
v_a_3908_ = lean_ctor_get(v___x_3899_, 0);
v_isSharedCheck_3915_ = !lean_is_exclusive(v___x_3899_);
if (v_isSharedCheck_3915_ == 0)
{
v___x_3910_ = v___x_3899_;
v_isShared_3911_ = v_isSharedCheck_3915_;
goto v_resetjp_3909_;
}
else
{
lean_inc(v_a_3908_);
lean_dec(v___x_3899_);
v___x_3910_ = lean_box(0);
v_isShared_3911_ = v_isSharedCheck_3915_;
goto v_resetjp_3909_;
}
v_resetjp_3909_:
{
lean_object* v___x_3913_; 
if (v_isShared_3911_ == 0)
{
lean_ctor_set_tag(v___x_3910_, 0);
v___x_3913_ = v___x_3910_;
goto v_reusejp_3912_;
}
else
{
lean_object* v_reuseFailAlloc_3914_; 
v_reuseFailAlloc_3914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3914_, 0, v_a_3908_);
v___x_3913_ = v_reuseFailAlloc_3914_;
goto v_reusejp_3912_;
}
v_reusejp_3912_:
{
v_val_3887_ = v___x_3913_;
goto v___jp_3886_;
}
}
}
v___jp_3880_:
{
lean_object* v___x_3883_; 
v___x_3883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3883_, 0, v___y_3882_);
lean_ctor_set(v___x_3883_, 1, v___y_3881_);
return v___x_3883_;
}
v___jp_3886_:
{
lean_object* v___x_3888_; 
v___x_3888_ = lean_st_ref_get(v___x_3885_);
lean_dec(v___x_3885_);
if (lean_obj_tag(v_val_3887_) == 0)
{
lean_object* v___x_3889_; 
lean_dec_ref_known(v_val_3887_, 1);
v___x_3889_ = lean_box(0);
v___y_3881_ = v___x_3888_;
v___y_3882_ = v___x_3889_;
goto v___jp_3880_;
}
else
{
lean_object* v_a_3890_; lean_object* v___x_3892_; uint8_t v_isShared_3893_; uint8_t v_isSharedCheck_3897_; 
v_a_3890_ = lean_ctor_get(v_val_3887_, 0);
v_isSharedCheck_3897_ = !lean_is_exclusive(v_val_3887_);
if (v_isSharedCheck_3897_ == 0)
{
v___x_3892_ = v_val_3887_;
v_isShared_3893_ = v_isSharedCheck_3897_;
goto v_resetjp_3891_;
}
else
{
lean_inc(v_a_3890_);
lean_dec(v_val_3887_);
v___x_3892_ = lean_box(0);
v_isShared_3893_ = v_isSharedCheck_3897_;
goto v_resetjp_3891_;
}
v_resetjp_3891_:
{
lean_object* v___x_3895_; 
if (v_isShared_3893_ == 0)
{
v___x_3895_ = v___x_3892_;
goto v_reusejp_3894_;
}
else
{
lean_object* v_reuseFailAlloc_3896_; 
v_reuseFailAlloc_3896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3896_, 0, v_a_3890_);
v___x_3895_ = v_reuseFailAlloc_3896_;
goto v_reusejp_3894_;
}
v_reusejp_3894_:
{
v___y_3881_ = v___x_3888_;
v___y_3882_ = v___x_3895_;
goto v___jp_3880_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___redArg___boxed(lean_object* v_self_3916_, lean_object* v_a_3917_){
_start:
{
lean_object* v_res_3918_; 
v_res_3918_ = l_Lake_LoggerIO_captureLog___redArg(v_self_3916_);
return v_res_3918_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog(lean_object* v_00_u03b1_3919_, lean_object* v_self_3920_){
_start:
{
lean_object* v___x_3922_; 
v___x_3922_ = l_Lake_LoggerIO_captureLog___redArg(v_self_3920_);
return v___x_3922_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___boxed(lean_object* v_00_u03b1_3923_, lean_object* v_self_3924_, lean_object* v_a_3925_){
_start:
{
lean_object* v_res_3926_; 
v_res_3926_ = l_Lake_LoggerIO_captureLog(v_00_u03b1_3923_, v_self_3924_);
return v_res_3926_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f___redArg(lean_object* v_self_3927_){
_start:
{
lean_object* v___x_3929_; 
v___x_3929_ = l_Lake_LoggerIO_captureLog___redArg(v_self_3927_);
return v___x_3929_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f___redArg___boxed(lean_object* v_self_3930_, lean_object* v_a_3931_){
_start:
{
lean_object* v_res_3932_; 
v_res_3932_ = l_Lake_LoggerIO_run_x3f___redArg(v_self_3930_);
return v_res_3932_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f(lean_object* v_00_u03b1_3933_, lean_object* v_self_3934_){
_start:
{
lean_object* v___x_3936_; 
v___x_3936_ = l_Lake_LoggerIO_captureLog___redArg(v_self_3934_);
return v___x_3936_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f___boxed(lean_object* v_00_u03b1_3937_, lean_object* v_self_3938_, lean_object* v_a_3939_){
_start:
{
lean_object* v_res_3940_; 
v_res_3940_ = l_Lake_LoggerIO_run_x3f(v_00_u03b1_3937_, v_self_3938_);
return v_res_3940_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f_x27___redArg(lean_object* v_self_3941_, lean_object* v_logger_3942_){
_start:
{
lean_object* v___x_3944_; 
v___x_3944_ = lean_apply_2(v_self_3941_, v_logger_3942_, lean_box(0));
if (lean_obj_tag(v___x_3944_) == 0)
{
lean_object* v_a_3945_; lean_object* v___x_3947_; uint8_t v_isShared_3948_; uint8_t v_isSharedCheck_3952_; 
v_a_3945_ = lean_ctor_get(v___x_3944_, 0);
v_isSharedCheck_3952_ = !lean_is_exclusive(v___x_3944_);
if (v_isSharedCheck_3952_ == 0)
{
v___x_3947_ = v___x_3944_;
v_isShared_3948_ = v_isSharedCheck_3952_;
goto v_resetjp_3946_;
}
else
{
lean_inc(v_a_3945_);
lean_dec(v___x_3944_);
v___x_3947_ = lean_box(0);
v_isShared_3948_ = v_isSharedCheck_3952_;
goto v_resetjp_3946_;
}
v_resetjp_3946_:
{
lean_object* v___x_3950_; 
if (v_isShared_3948_ == 0)
{
lean_ctor_set_tag(v___x_3947_, 1);
v___x_3950_ = v___x_3947_;
goto v_reusejp_3949_;
}
else
{
lean_object* v_reuseFailAlloc_3951_; 
v_reuseFailAlloc_3951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3951_, 0, v_a_3945_);
v___x_3950_ = v_reuseFailAlloc_3951_;
goto v_reusejp_3949_;
}
v_reusejp_3949_:
{
return v___x_3950_;
}
}
}
else
{
lean_object* v___x_3953_; 
lean_dec_ref_known(v___x_3944_, 1);
v___x_3953_ = lean_box(0);
return v___x_3953_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f_x27___redArg___boxed(lean_object* v_self_3954_, lean_object* v_logger_3955_, lean_object* v_a_3956_){
_start:
{
lean_object* v_res_3957_; 
v_res_3957_ = l_Lake_LoggerIO_run_x3f_x27___redArg(v_self_3954_, v_logger_3955_);
return v_res_3957_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f_x27(lean_object* v_00_u03b1_3958_, lean_object* v_self_3959_, lean_object* v_logger_3960_){
_start:
{
lean_object* v___x_3962_; 
v___x_3962_ = lean_apply_2(v_self_3959_, v_logger_3960_, lean_box(0));
if (lean_obj_tag(v___x_3962_) == 0)
{
lean_object* v_a_3963_; lean_object* v___x_3965_; uint8_t v_isShared_3966_; uint8_t v_isSharedCheck_3970_; 
v_a_3963_ = lean_ctor_get(v___x_3962_, 0);
v_isSharedCheck_3970_ = !lean_is_exclusive(v___x_3962_);
if (v_isSharedCheck_3970_ == 0)
{
v___x_3965_ = v___x_3962_;
v_isShared_3966_ = v_isSharedCheck_3970_;
goto v_resetjp_3964_;
}
else
{
lean_inc(v_a_3963_);
lean_dec(v___x_3962_);
v___x_3965_ = lean_box(0);
v_isShared_3966_ = v_isSharedCheck_3970_;
goto v_resetjp_3964_;
}
v_resetjp_3964_:
{
lean_object* v___x_3968_; 
if (v_isShared_3966_ == 0)
{
lean_ctor_set_tag(v___x_3965_, 1);
v___x_3968_ = v___x_3965_;
goto v_reusejp_3967_;
}
else
{
lean_object* v_reuseFailAlloc_3969_; 
v_reuseFailAlloc_3969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3969_, 0, v_a_3963_);
v___x_3968_ = v_reuseFailAlloc_3969_;
goto v_reusejp_3967_;
}
v_reusejp_3967_:
{
return v___x_3968_;
}
}
}
else
{
lean_object* v___x_3971_; 
lean_dec_ref_known(v___x_3962_, 1);
v___x_3971_ = lean_box(0);
return v___x_3971_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f_x27___boxed(lean_object* v_00_u03b1_3972_, lean_object* v_self_3973_, lean_object* v_logger_3974_, lean_object* v_a_3975_){
_start:
{
lean_object* v_res_3976_; 
v_res_3976_ = l_Lake_LoggerIO_run_x3f_x27(v_00_u03b1_3972_, v_self_3973_, v_logger_3974_);
return v_res_3976_;
}
}
lean_object* runtime_initialize_Lean_Data_Json(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Error(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_EStateT(uint8_t builtin);
lean_object* runtime_initialize_Lean_Message(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Lift(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Modify(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Util_Log(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Error(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_EStateT(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Lift(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Modify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instLTVerbosity = _init_l_Lake_instLTVerbosity();
lean_mark_persistent(l_Lake_instLTVerbosity);
l_Lake_instLEVerbosity = _init_l_Lake_instLEVerbosity();
lean_mark_persistent(l_Lake_instLEVerbosity);
l_Lake_instInhabitedVerbosity = _init_l_Lake_instInhabitedVerbosity();
l_Lake_instInhabitedLogLevel_default = _init_l_Lake_instInhabitedLogLevel_default();
l_Lake_instInhabitedLogLevel = _init_l_Lake_instInhabitedLogLevel();
l_Lake_instLTLogLevel = _init_l_Lake_instLTLogLevel();
lean_mark_persistent(l_Lake_instLTLogLevel);
l_Lake_instLELogLevel = _init_l_Lake_instLELogLevel();
lean_mark_persistent(l_Lake_instLELogLevel);
l_Lake_Log_instInhabitedPos_default = _init_l_Lake_Log_instInhabitedPos_default();
lean_mark_persistent(l_Lake_Log_instInhabitedPos_default);
l_Lake_Log_instInhabitedPos = _init_l_Lake_Log_instInhabitedPos();
lean_mark_persistent(l_Lake_Log_instInhabitedPos);
l_Lake_instOfNatPos = _init_l_Lake_instOfNatPos();
lean_mark_persistent(l_Lake_instOfNatPos);
l_Lake_instLTPos = _init_l_Lake_instLTPos();
lean_mark_persistent(l_Lake_instLTPos);
l_Lake_instLEPos = _init_l_Lake_instLEPos();
lean_mark_persistent(l_Lake_instLEPos);
l_Lake_LoggerIO_instMonadLiftLogIO = _init_l_Lake_LoggerIO_instMonadLiftLogIO();
lean_mark_persistent(l_Lake_LoggerIO_instMonadLiftLogIO);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Util_Log(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Json(uint8_t builtin);
lean_object* initialize_Lake_Util_Error(uint8_t builtin);
lean_object* initialize_Lake_Util_EStateT(uint8_t builtin);
lean_object* initialize_Lean_Message(uint8_t builtin);
lean_object* initialize_Lake_Util_Lift(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_String_Modify(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Util_Log(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Error(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_EStateT(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Lift(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Modify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Util_Log(builtin);
}
#ifdef __cplusplus
}
#endif

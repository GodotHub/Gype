#ifndef __STRING_WRAPPER_H__
#define __STRING_WRAPPER_H__

#include "quickjs/wrapper/variant_wrapper.h"
#include <stdint.h>

typedef struct StringWrapper StringWrapper;
typedef union OpaqueUnion OpaqueUnion;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void *gd_String_get_opaque(StringWrapper *wrapper);
void *gd_StringName_get_opaque(StringWrapper *wrapper);
uint8_t gd_string_get_type(StringWrapper *wrapper);
StringWrapper *gd_String_new_wrapper(void *p_from);
StringWrapper *gd_new_StringName_wrapper(void *p_from);
StringWrapper *gd_new_String_char8(const char *p_from);
StringWrapper *gd_new_String_char16(const char16_t *p_from);
StringWrapper *gd_new_StringName_char8(const char *p_from);
StringWrapper *gd_new_StringName_char16(const char16_t *p_from);
StringWrapper *gd_new_String_single_char8(const char p_from);
StringWrapper *gd_new_String_single_char16(const char16_t p_from);
StringWrapper *gd_new_StringName_single_char8(const char p_from);
StringWrapper *gd_new_StringName_single_char16(const char16_t p_from);
StringWrapper *gd_new_String_single_char(const int p_from, uint8_t type, uint8_t is_wide_char);
StringWrapper *gd_new_StringName_single_char(const int p_from, uint8_t type, uint8_t is_wide_char);
StringWrapper *gd_new_String(const char *char8, const char16_t *char16, uint8_t is_mutable, uint8_t is_wide_char);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __STRING_WRAPPER_H__
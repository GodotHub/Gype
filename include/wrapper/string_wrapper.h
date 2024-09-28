#ifndef __STRING_WRAPPER_H__
#define __STRING_WRAPPER_H__

#include "wrapper/variant_wrapper.h"
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct StringWrapper StringWrapper;

void *gd_get_String_opaque(StringWrapper *wrapper);
StringWrapper *gd_new_String_wrapper(void *opaque);
VariantWrapper *gd_new_String_char8(const char *p_from);
VariantWrapper *gd_new_String_char16(const char16_t *p_from);
VariantWrapper *gd_new_String_single_char8(const char p_from);
VariantWrapper *gd_new_String_single_char16(const char16_t p_from);
VariantWrapper *gd_new_String_single_char(const int p_from, uint8_t is_wide);
VariantWrapper *gd_new_String(const void *p_from, uint8_t is_wide);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __STRING_WRAPPER_H__
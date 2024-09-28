#ifndef __STRING_NAME_WRAPPER_H__
#define __STRING_NAME_WRAPPER_H__

#include "wrapper/variant_wrapper.h"
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct StringNameWrapper StringNameWrapper;

void *gd_get_StringName_opaque(StringNameWrapper *wrapper);
StringNameWrapper *gd_new_StringName_wrapper(void *p_from);
VariantWrapper *gd_new_StringName_char8(const char *p_from);
VariantWrapper *gd_new_StringName_char16(const char16_t *p_from);
VariantWrapper *gd_new_StringName_single_char8(const char p_from);
VariantWrapper *gd_new_StringName_single_char16(const char16_t p_from);
VariantWrapper *gd_new_StringName_single_char(const int p_from, uint8_t is_wide);
VariantWrapper *gd_new_StringName(const void *p_from, uint8_t is_wide);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __STRING_NAME_WRAPPER_H__
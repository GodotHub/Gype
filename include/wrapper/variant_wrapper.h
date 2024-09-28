#ifndef __VARIANT_WRAPPER_H__
#define __VARIANT_WRAPPER_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct VariantWrapper VariantWrapper;
typedef struct StringWrapper StringWrapper;
typedef struct StringNameWrapper StringNameWrapper;

void *gd_get_variant_opaque(VariantWrapper *wrapper);
VariantWrapper *gd_new_variant_int(int64_t value);
VariantWrapper *gd_new_variant_float(double value);
VariantWrapper *gd_new_variant_String(void *value);
VariantWrapper *gd_new_variant_StringName(void *value);
StringWrapper *gd_variant_to_String(void *value);
StringNameWrapper *gd_variant_to_StringName(void *value);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __VARIANT_WRAPPER_H__
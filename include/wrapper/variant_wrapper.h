#ifndef __VARIANT_WRAPPER_H__
#define __VARIANT_WRAPPER_H__

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct VariantWrapper VariantWrapper;
typedef struct StringWrapper StringWrapper;
typedef struct StringNameWrapper StringNameWrapper;
typedef struct ArrayWrapper ArrayWrapper;
typedef struct JSContext JSContext;
typedef struct JSValue JSValue;

void *gd_get_variant_opaque(VariantWrapper *wrapper);
void gd_set_variant_opaque(VariantWrapper *wrapper, void *opaque);
void gd_set_variant_wrapper(VariantWrapper *w1, VariantWrapper *w2);
void gd_update_array_wrapper(JSValue *val);
void gd_define_wrapper(JSContext *ctx, JSValue *this_obj, JSValue *val);
VariantWrapper *gd_new_variant_nil();
VariantWrapper *gd_new_variant_bool(bool value);
VariantWrapper *gd_new_variant_int(int64_t value);
VariantWrapper *gd_new_variant_float(double value);
VariantWrapper *gd_new_variant_String(void *value);
VariantWrapper *gd_new_variant_StringName(void *value);
VariantWrapper *gd_new_variant_Array(void *value);
VariantWrapper *gd_new_variant_empty_String();
VariantWrapper *gd_new_variant_empty_StringName();
VariantWrapper *gd_new_variant_empty_Array();
VariantWrapper *gd_new_variant_empty_Variant();
VariantWrapper *gd_new_variant_Object(void *value);
StringWrapper *gd_variant_to_String(void *value);
StringNameWrapper *gd_variant_to_StringName(void *value);
ArrayWrapper *gd_variant_to_Array(void *value);
void freew(void *w);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __VARIANT_WRAPPER_H__
#ifndef __ARRAY_WRAPPER_H__
#define __ARRAY_WRAPPER_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct ArrayWrapper ArrayWrapper;
typedef struct VariantWrapper VariantWrapper;
typedef struct JSValue JSValue;
typedef struct JSContext JSContext;

void gd_Array_call_append(JSValue *arr, JSValue *val);
void *gd_get_Array_opaque(ArrayWrapper *wrapper);
VariantWrapper *gd_variant_new_Array(JSValue *val);
ArrayWrapper *gd_new_Array_wrapper(void *p_from);
ArrayWrapper *gd_new_empty_array_wrapper();

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __ARRAY_WRAPPER_H__
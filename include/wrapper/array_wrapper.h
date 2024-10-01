#ifndef __ARRAY_WRAPPER_H__
#define __ARRAY_WRAPPER_H__

#include "wrapper/variant_wrapper.h"

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct ArrayWrapper ArrayWrapper;
typedef struct VariantWrapper VariantWrapper;
typedef struct JSValue JSValue;
typedef struct JSContext JSContext;
typedef struct SlowArrayWrapper SlowArrayWrapper;

WRAPPER_GET_OPAQUE(Array);
void gd_Array_call_append(ArrayWrapper *arr, VariantWrapper *val);
void gd_Array_call_append_array(ArrayWrapper *arr1, ArrayWrapper *arr2);
void gd_Array_call_set_value(ArrayWrapper *arr, VariantWrapper *var, int index);
void gd_Array_call_print(ArrayWrapper *arr);
void gd_Array_call_clear(ArrayWrapper *arr);
void gd_Array_call_pop(ArrayWrapper *arr, int shift);
void gd_Array_call_reset(JSContext *ctx, JSValue arr);
void gd_Array_call_reverse(ArrayWrapper *arr);
ArrayWrapper *gd_Array_new_wrapper(void *value);
ArrayWrapper *gd_Array_new_empty_wrapper();
void gd_SlowArray_call_set(SlowArrayWrapper *slow_arrw, VariantWrapper *varw, int index);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __ARRAY_WRAPPER_H__
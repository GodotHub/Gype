#ifndef __SLOW_ARRAY_WRAPPER_H__
#define __SLOW_ARRAY_WRAPPER_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct SlowArrayWrapper SlowArrayWrapper;
typedef struct ArrayWrapper ArrayWrapper;
typedef struct VariantWrapper VariantWrapper;

SlowArrayWrapper *gd_convert_to_SlowArray(ArrayWrapper *arrw);
void gd_SlowArray_set_value(SlowArrayWrapper *dictw, VariantWrapper *keyw, VariantWrapper *varw);
void *gd_SlowArray_get_opaque(SlowArrayWrapper *wrapper);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __SLOW_ARRAY_WRAPPER_H__
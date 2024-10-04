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

#define WRAPPER_GET_OPAQUE(type) \
	void *gd_##type##_get_opaque(type##Wrapper *wrapper);

#define WRAPPER_GET_OPAQUE_IMPL(type)                      \
	void *gd_##type##_get_opaque(type##Wrapper *wrapper) { \
		return &wrapper->opaque;                           \
	}

#define GD_NEW_EMPTY_VARIANT(type) \
	VariantWrapper *gd_##type##_new_empty_variant();

#define GD_NEW_VARIANT(type) \
	VariantWrapper *gd_##type##_new_variant(void *value)

#define GD_NEW_EMPTY_VARIANT_IMPL(type)                   \
	VariantWrapper *gd_##type##_new_empty_variant() {     \
		return memnew(VariantWrapper{ Variant(type()) }); \
	}

// TODO std::move
#define GD_NEW_VARIANT_IMPL(type)                                                                   \
	VariantWrapper *gd_##type##_new_variant(void *wrapper) {                                        \
		return memnew(VariantWrapper{ *(type *)gd_##type##_get_opaque((type##Wrapper *)wrapper) }); \
	}

void gd_set_variant_opaque(VariantWrapper *wrapper, void *opaque);
WRAPPER_GET_OPAQUE(Variant);
GD_NEW_VARIANT(Array);
GD_NEW_EMPTY_VARIANT(Array);
GD_NEW_VARIANT(Dictionary);
GD_NEW_EMPTY_VARIANT(Dictionary);
GD_NEW_VARIANT(Callable);
GD_NEW_EMPTY_VARIANT(Callable);
GD_NEW_VARIANT(JSObject);
GD_NEW_EMPTY_VARIANT(JSObject);
VariantWrapper *gd_nil_new_variant();
VariantWrapper *gd_bool_new_variant(bool value);
VariantWrapper *gd_int_new_variant(int64_t value);
VariantWrapper *gd_float_new_variant(double value);
VariantWrapper *gd_JSObject_new_variant(void *value);
VariantWrapper *gd_JSObject_new_empty_variant();
StringWrapper *gd_variant_to_String(void *value);
StringWrapper *gd_variant_to_StringName(void *value);
ArrayWrapper *gd_variant_to_Array(void *value);
VariantWrapper *gd_String_new_variant(void *wrapper);
void gd_swap_opaque(VariantWrapper *w1, VariantWrapper *w2);
void freew(void *w);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __VARIANT_WRAPPER_H__
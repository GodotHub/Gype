#include "wrapper/variant_wrapper.h"
#include "quickjs/quickjs.h"
#include "utils/env.h"
#include "wrapper/array_wrapper.h"
#include "wrapper/string_name_wrapper.h"
#include "wrapper/string_wrapper.h"
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/variant_size.hpp>

using namespace godot;

struct VariantWrapper {
	Variant opaque;
};

#define GD_NEW_EMPTY_VARIANT(type)                  \
	VariantWrapper *gd_new_variant_empty_##type() { \
		return memnew(VariantWrapper{ type() });    \
	}

#define GD_NEW_VARIANT(type)                                          \
	VariantWrapper *gd_new_variant_##type(void *value) {              \
		return memnew(VariantWrapper{ *static_cast<type *>(value) }); \
	}

void *gd_get_variant_opaque(VariantWrapper *wrapper) {
	return &wrapper->opaque;
}

void gd_set_variant_opaque(VariantWrapper *wrapper, void *opaque) {
	wrapper->opaque = Variant(*static_cast<Variant *>(opaque));
}

void gd_set_variant_wrapper(VariantWrapper *w1, VariantWrapper *w2) {
	w1->opaque = w2->opaque;
}

void gd_update_array_wrapper(JSValue *val) {
	VariantWrapper *w1 = (VariantWrapper *)val->gptr;
	VariantWrapper *w2 = gd_variant_new_Array(val);
	w1->opaque = w2->opaque;
	freew(w2);
}

void gd_define_wrapper(JSContext *ctx, JSValue *this_obj, JSValue *val) {
	if (JS_IsArray(ctx, *this_obj)) {
		if (JS_IsString(*val)) {
			gd_Array_call_append(this_obj, val);
		}
	}
}

VariantWrapper *gd_new_variant_nil() {
	return memnew(VariantWrapper{ Variant() });
}

VariantWrapper *gd_new_variant_bool(bool value) {
	return memnew(VariantWrapper{ Variant(value) });
}

VariantWrapper *gd_new_variant_int(int64_t value) {
	return memnew(VariantWrapper{ Variant(value) });
}

VariantWrapper *gd_new_variant_float(double value) {
	return memnew(VariantWrapper{ Variant(value) });
}

GD_NEW_VARIANT(String);
GD_NEW_VARIANT(StringName);
GD_NEW_VARIANT(Array);
GD_NEW_EMPTY_VARIANT(Variant);
GD_NEW_EMPTY_VARIANT(String);
GD_NEW_EMPTY_VARIANT(StringName);
GD_NEW_EMPTY_VARIANT(Array);

VariantWrapper *gd_new_variant_Object(void *value) {
	return memnew(VariantWrapper{ Variant(static_cast<Object *>(value)) });
}

StringWrapper *gd_variant_to_String(void *value) {
	Variant opaque = static_cast<VariantWrapper *>(value)->opaque;
	return gd_new_String_wrapper(&opaque);
}

StringNameWrapper *gd_variant_to_StringName(void *value) {
	Variant opaque = static_cast<VariantWrapper *>(value)->opaque;
	return gd_new_StringName_wrapper(&opaque);
}

ArrayWrapper *gd_variant_to_Array(void *value) {
	Variant opaque = static_cast<VariantWrapper *>(value)->opaque;
	return gd_new_Array_wrapper(value);
}

void freew(void *w) {
	memfree(w);
}

#include "quickjs/wrapper/variant_wrapper.h"
#include "quickjs/quickjs.h"
#include "quickjs/wrapper/array_wrapper.h"
#include "quickjs/wrapper/callable_wrapper.h"
#include "quickjs/wrapper/dictionary_wrapper.h"
#include "quickjs/wrapper/js_object.h"
#include "quickjs/wrapper/object_wrapper.h"
#include "quickjs/wrapper/string_wrapper.h"
#include "utils/env.h"
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/variant_size.hpp>
#include <utility>

using namespace godot;

struct VariantWrapper {
	Variant opaque;
};

WRAPPER_GET_OPAQUE_IMPL(Variant);

void gd_set_variant_opaque(VariantWrapper *wrapper, void *opaque) {
	wrapper->opaque = Variant(*static_cast<Variant *>(opaque));
}

GD_NEW_VARIANT_IMPL(Array);
GD_NEW_EMPTY_VARIANT_IMPL(Array);
GD_NEW_VARIANT_IMPL(Dictionary);
GD_NEW_EMPTY_VARIANT_IMPL(Dictionary);
GD_NEW_VARIANT_IMPL(Callable);
GD_NEW_EMPTY_VARIANT_IMPL(Callable);

VariantWrapper *gd_nil_new_variant() {
	return memnew(VariantWrapper{ Variant() });
}

VariantWrapper *gd_bool_new_variant(bool value) {
	return memnew(VariantWrapper{ Variant(value) });
}

VariantWrapper *gd_int_new_variant(int64_t value) {
	return memnew(VariantWrapper{ Variant(value) });
}

VariantWrapper *gd_float_new_variant(double value) {
	return memnew(VariantWrapper{ Variant(value) });
}

VariantWrapper *gd_JSObject_new_variant(void *value) {
	VariantWrapper *wrapper = memnew(VariantWrapper);
	memnew_placement(&(wrapper->opaque), Variant(static_cast<godot::Object *>(gd_JSObject_get_opaque((ObjectWrapper *)value))));
	return wrapper;
}

VariantWrapper *gd_JSObject_new_empty_variant() {
	VariantWrapper *wrapper = memnew(VariantWrapper);
	memnew_placement(&(wrapper->opaque), Variant());
	return wrapper;
}

VariantWrapper *gd_String_new_variant(void *wrapper) {
	Variant src;
	StringWrapper *string_wrapper = static_cast<StringWrapper *>(wrapper);
	uint8_t type = gd_string_get_type(string_wrapper);
	if (type)
		src = Variant(*static_cast<String *>(gd_String_get_opaque(string_wrapper)));
	else
		src = Variant(*static_cast<StringName *>(gd_StringName_get_opaque(string_wrapper)));
	return memnew(VariantWrapper{ src });
}

void gd_swap_opaque(VariantWrapper *w1, VariantWrapper *w2) {
	Variant temp = w1->opaque;
	w1->opaque = w2->opaque;
	w2->opaque = temp;
}

StringWrapper *gd_variant_to_StringName(void *value) {
	Variant opaque = static_cast<VariantWrapper *>(value)->opaque;
	return gd_new_StringName_wrapper(opaque);
}

StringWrapper *gd_variant_to_String(void *value) {
	Variant opaque = static_cast<VariantWrapper *>(value)->opaque;
	return gd_String_new_wrapper(opaque);
}

ArrayWrapper *gd_variant_to_Array(void *value) {
	Variant opaque = static_cast<VariantWrapper *>(value)->opaque;
	return gd_Array_new_wrapper(value);
}

VariantWrapper *gd_String_to_variant(void *value) {
	StringWrapper *wrapper = static_cast<StringWrapper *>(value);
	return gd_String_new_variant(wrapper);
}

VariantWrapper *gd_StringName_to_variant(void *value) {
	StringWrapper *wrapper = static_cast<StringWrapper *>(value);
	return gd_String_new_variant(wrapper);
}

VariantWrapper *gd_Array_to_variant(void *value) {
	ArrayWrapper *wrapper = static_cast<ArrayWrapper *>(value);
	return gd_Array_new_variant(wrapper);
}

void freew(void *w) {
	memfree(w);
}
#include "wrapper/variant_wrapper.h"
#include "wrapper/string_name_wrapper.h"
#include "wrapper/string_wrapper.h"
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>

using namespace godot;

struct VariantWrapper {
	Variant opaque;
};

void *gd_get_variant_opaque(VariantWrapper *wrapper) {
	return &wrapper->opaque;
}

VariantWrapper *gd_new_variant_int(int64_t value) {
	return new VariantWrapper{ Variant(value) };
}

VariantWrapper *gd_new_variant_float(double value) {
	return new VariantWrapper{ Variant(value) };
}

VariantWrapper *gd_new_variant_String(void *value) {
	return new VariantWrapper{ String(*static_cast<String *>(value)) };
}

VariantWrapper *gd_new_variant_StringName(void *value) {
	return new VariantWrapper{ StringName(*static_cast<StringName *>(value)) };
}

StringWrapper *gd_variant_to_String(void *value) {
	Variant opaque = static_cast<VariantWrapper *>(value)->opaque;
	return gd_new_String_wrapper(&opaque);
}

StringNameWrapper *gd_variant_to_StringName(void *value) {
	Variant opaque = static_cast<VariantWrapper *>(value)->opaque;
	return gd_new_StringName_wrapper(&opaque);
}
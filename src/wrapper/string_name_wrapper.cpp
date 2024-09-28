#include "wrapper/string_name_wrapper.h"
#include "godot_cpp/variant/string_name.hpp"
#include "wrapper/variant_wrapper.h"
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>

using namespace godot;

struct StringNameWrapper {
	StringName opaque;
};

void *gd_get_StringName_opaque(StringNameWrapper *wrapper) {
	return &wrapper->opaque;
}

StringNameWrapper *gd_new_StringName_wrapper(void *p_from) {
	return new StringNameWrapper{ StringName(*reinterpret_cast<Variant *>(p_from)) };
}

VariantWrapper *gd_new_StringName_char8(const char *p_from) {
	StringName opaque = StringName(p_from);
	return gd_new_variant_StringName(&opaque);
}

VariantWrapper *gd_new_StringName_char16(const char16_t *p_from) {
	StringName opaque = StringName(p_from);
	return gd_new_variant_StringName(&opaque);
}

VariantWrapper *gd_new_StringName_single_char8(const char p_from) {
	StringName opaque = StringName(&p_from);
	return gd_new_variant_StringName(&opaque);
}

VariantWrapper *gd_new_StringName_single_char16(const char16_t p_from) {
	StringName opaque = StringName(&p_from);
	return gd_new_variant_StringName(&opaque);
}

VariantWrapper *gd_new_StringName_single_char(const int p_from, uint8_t is_wide) {
	return is_wide ? gd_new_StringName_single_char8(static_cast<const char16_t>(p_from)) : gd_new_StringName_single_char16(static_cast<const char>(p_from));
}

VariantWrapper *gd_new_StringName(const void *p_from, uint8_t is_wide) {
	return is_wide ? gd_new_StringName_char16(reinterpret_cast<const char16_t *>(p_from)) : gd_new_StringName_char8(reinterpret_cast<const char *>(p_from));
}
#include "wrapper/string_wrapper.h"
#include "wrapper/variant_wrapper.h"
#include <godot_cpp/core/memory.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/variant/variant.hpp>

using namespace godot;

struct StringWrapper {
	String opaque;
};

void *gd_get_String_opaque(StringWrapper *wrapper) {
	return &wrapper->opaque;
}

StringWrapper *gd_new_String_wrapper(void *p_from) {
	return new StringWrapper{ String(*static_cast<String *>(p_from)) };
}

VariantWrapper *gd_new_String_char8(const char *p_from) {
	String opaque = String(p_from);
	return gd_new_variant_String(&opaque);
}

VariantWrapper *gd_new_String_char16(const char16_t *p_from) {
	String opaque = String(p_from);
	return gd_new_variant_String(&opaque);
}

VariantWrapper *gd_new_String_single_char8(const char p_from) {
	String opaque = String(&p_from);
	return gd_new_variant_String(&opaque);
}

VariantWrapper *gd_new_String_single_char16(const char16_t p_from) {
	String opaque = String(&p_from);
	return gd_new_variant_String(&opaque);
}

VariantWrapper *gd_new_String_single_char(const int p_from, uint8_t is_wide) {
	return is_wide ? gd_new_String_single_char8(static_cast<const char16_t>(p_from)) : gd_new_String_single_char16(static_cast<const char>(p_from));
}

VariantWrapper *gd_new_String(const void *p_from, uint8_t is_wide) {
	return is_wide ? gd_new_String_char16(reinterpret_cast<const char16_t *>(p_from)) : gd_new_String_char8(reinterpret_cast<const char *>(p_from));
}
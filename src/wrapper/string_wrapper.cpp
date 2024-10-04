#include "wrapper/string_wrapper.h"
#include "wrapper/variant_wrapper.h"
#include <godot_cpp/core/memory.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/variant/variant.hpp>

using namespace godot;

struct StringWrapper {
	uint8_t type : 1;
	union OpaqueUnion {
		String string_opaque;
		StringName string_name_opaque;
		OpaqueUnion() {}
		~OpaqueUnion() {}
	} o;
	StringWrapper(String opaque) {
		type = 1;
		o.string_opaque = opaque;
	}
	StringWrapper(StringName opaque) {
		type = 0;
		o.string_name_opaque = opaque;
	}
	StringWrapper(uint8_t type, const char *p_from) {
		this->type = type;
		if (type) {
			memnew_placement((&o.string_opaque), String(p_from));
		} else
			memnew_placement((&o.string_opaque), StringName(p_from));
	}
	StringWrapper(uint8_t type, const char16_t *p_from) {
		this->type = type;
		if (type)
			memnew_placement((&o.string_opaque), String(p_from));
		else
			memnew_placement((&o.string_opaque), StringName(p_from));
	}
	~StringWrapper() {
		if (type)
			o.string_opaque.~String();
		else
			o.string_name_opaque.~StringName();
	}
};

void *gd_String_get_opaque(StringWrapper *wrapper) {
	return (void *)&wrapper->o.string_opaque;
}

void *gd_StringName_get_opaque(StringWrapper *wrapper) {
	return (void *)&wrapper->o.string_name_opaque;
}

StringWrapper *gd_String_new_wrapper(void *p_from) {
	return memnew(StringWrapper(String(*static_cast<String *>(p_from))));
}

StringWrapper *gd_new_StringName_wrapper(void *p_from) {
	return memnew(StringWrapper(StringName(*static_cast<StringName *>(p_from))));
}

StringWrapper *gd_new_String_char8(const char *p_from) {
	return memnew(StringWrapper(1, p_from));
}

StringWrapper *gd_new_String_char16(const char16_t *p_from) {
	return memnew(StringWrapper(1, p_from));
}

StringWrapper *gd_new_StringName_char8(const char *p_from) {
	return memnew(StringWrapper(0, p_from));
}

StringWrapper *gd_new_StringName_char16(const char16_t *p_from) {
	return memnew(StringWrapper(0, p_from));
}

StringWrapper *gd_new_String_single_char8(const char p_from) {
	return memnew(StringWrapper(1, &p_from));
}

StringWrapper *gd_new_String_single_char16(const char16_t p_from) {
	return memnew(StringWrapper(1, &p_from));
}

StringWrapper *gd_new_StringName_single_char8(const char p_from) {
	return memnew(StringWrapper(0, &p_from));
}

StringWrapper *gd_new_StringName_single_char16(const char16_t p_from) {
	return memnew(StringWrapper(0, &p_from));
}

StringWrapper *gd_new_String_single_char(const int p_from, uint8_t type, uint8_t is_wide_char) {
	return is_wide_char ? gd_new_String_single_char8(static_cast<const char16_t>(p_from)) : gd_new_String_single_char16(static_cast<const char>(p_from));
}

StringWrapper *gd_new_StringName_single_char(const int p_from, uint8_t type, uint8_t is_wide_char) {
	return is_wide_char ? gd_new_StringName_single_char8(static_cast<const char16_t>(p_from)) : gd_new_StringName_single_char16(static_cast<const char>(p_from));
}

StringWrapper *gd_new_String(const char *char8, const char16_t *char16, uint8_t is_mutable, uint8_t is_wide_char) {
	if (is_mutable) {
		if (is_wide_char) {
			return gd_new_String_char16(char16);
		} else {
			return gd_new_String_char8(char8);
		}
	} else {
		if (is_wide_char) {
			return gd_new_StringName_char16(char16);
		} else {
			return gd_new_StringName_char8(char8);
		}
	}
}

uint8_t gd_string_get_type(StringWrapper *wrapper) {
	return wrapper->type;
}
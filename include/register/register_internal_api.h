#ifndef REGISTER_INTERNAL_API_CPP
#define REGISTER_INTERNAL_API_CPP

#include <gdextension_interface.h>
#include <godot_cpp/templates/hash_map.hpp>
#include <unordered_map>

using namespace godot;

extern std::unordered_map<StringName, GDExtensionClassCreationInfo3> class_types;

void register_internal_api();
static StringName js_to_string_name(JSValue js_string);
static String js_to_string(JSValue js_string);
static int js_to_int(JSValue js_int);
static GDExtensionPropertyInfo js_to_property_info(JSValue js_info);

#endif // !REGISTER_INTERNAL_API_CPP
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/resource_format_loader.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ResourceFormatLoader() {
	qjs::Context::Module &_module = _General;
	_module.class_<ResourceFormatLoader>("ResourceFormatLoader")
			.constructor<>()
			.fun<static_cast<PackedStringArray (ResourceFormatLoader::*)() const>(&ResourceFormatLoader::_get_recognized_extensions)>("_get_recognized_extensions")
			.fun<static_cast<bool (ResourceFormatLoader::*)(const String &, const StringName &) const>(&ResourceFormatLoader::_recognize_path)>("_recognize_path")
			.fun<static_cast<bool (ResourceFormatLoader::*)(const StringName &) const>(&ResourceFormatLoader::_handles_type)>("_handles_type")
			.fun<static_cast<String (ResourceFormatLoader::*)(const String &) const>(&ResourceFormatLoader::_get_resource_type)>("_get_resource_type")
			.fun<static_cast<String (ResourceFormatLoader::*)(const String &) const>(&ResourceFormatLoader::_get_resource_script_class)>("_get_resource_script_class")
			.fun<static_cast<int64_t (ResourceFormatLoader::*)(const String &) const>(&ResourceFormatLoader::_get_resource_uid)>("_get_resource_uid")
			.fun<static_cast<PackedStringArray (ResourceFormatLoader::*)(const String &, bool) const>(&ResourceFormatLoader::_get_dependencies)>("_get_dependencies")
			.fun<static_cast<Error (ResourceFormatLoader::*)(const String &, const Dictionary &) const>(&ResourceFormatLoader::_rename_dependencies)>("_rename_dependencies")
			.fun<static_cast<bool (ResourceFormatLoader::*)(const String &) const>(&ResourceFormatLoader::_exists)>("_exists")
			.fun<static_cast<PackedStringArray (ResourceFormatLoader::*)(const String &) const>(&ResourceFormatLoader::_get_classes_used)>("_get_classes_used")
			.fun<static_cast<Variant (ResourceFormatLoader::*)(const String &, const String &, bool, int32_t) const>(&ResourceFormatLoader::_load)>("_load");
}
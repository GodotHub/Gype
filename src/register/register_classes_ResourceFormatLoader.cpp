
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource_format_loader.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ResourceFormatLoader() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ResourceFormatLoader>("ResourceFormatLoader")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<PackedStringArray (ResourceFormatLoader::*)() const>(&ResourceFormatLoader::_get_recognized_extensions)>((new std::string("_get_recognized_extensions"))->c_str())
			.fun<static_cast<bool (ResourceFormatLoader::*)(const String &, const StringName &) const>(&ResourceFormatLoader::_recognize_path)>((new std::string("_recognize_path"))->c_str())
			.fun<static_cast<bool (ResourceFormatLoader::*)(const StringName &) const>(&ResourceFormatLoader::_handles_type)>((new std::string("_handles_type"))->c_str())
			.fun<static_cast<String (ResourceFormatLoader::*)(const String &) const>(&ResourceFormatLoader::_get_resource_type)>((new std::string("_get_resource_type"))->c_str())
			.fun<static_cast<String (ResourceFormatLoader::*)(const String &) const>(&ResourceFormatLoader::_get_resource_script_class)>((new std::string("_get_resource_script_class"))->c_str())
			.fun<static_cast<int64_t (ResourceFormatLoader::*)(const String &) const>(&ResourceFormatLoader::_get_resource_uid)>((new std::string("_get_resource_uid"))->c_str())
			.fun<static_cast<PackedStringArray (ResourceFormatLoader::*)(const String &, bool) const>(&ResourceFormatLoader::_get_dependencies)>((new std::string("_get_dependencies"))->c_str())
			.fun<static_cast<Error (ResourceFormatLoader::*)(const String &, const Dictionary &) const>(&ResourceFormatLoader::_rename_dependencies)>((new std::string("_rename_dependencies"))->c_str())
			.fun<static_cast<bool (ResourceFormatLoader::*)(const String &) const>(&ResourceFormatLoader::_exists)>((new std::string("_exists"))->c_str())
			.fun<static_cast<PackedStringArray (ResourceFormatLoader::*)(const String &) const>(&ResourceFormatLoader::_get_classes_used)>((new std::string("_get_classes_used"))->c_str())
			.fun<static_cast<Variant (ResourceFormatLoader::*)(const String &, const String &, bool, int32_t) const>(&ResourceFormatLoader::_load)>((new std::string("_load"))->c_str());
	qjs::Value _CacheMode = context->newObject();
	_CacheMode[(new std::string("CACHE_MODE_IGNORE"))->c_str()] = ResourceFormatLoader::CacheMode::CACHE_MODE_IGNORE;
	_CacheMode[(new std::string("CACHE_MODE_REUSE"))->c_str()] = ResourceFormatLoader::CacheMode::CACHE_MODE_REUSE;
	_CacheMode[(new std::string("CACHE_MODE_REPLACE"))->c_str()] = ResourceFormatLoader::CacheMode::CACHE_MODE_REPLACE;
	_CacheMode[(new std::string("CACHE_MODE_IGNORE_DEEP"))->c_str()] = ResourceFormatLoader::CacheMode::CACHE_MODE_IGNORE_DEEP;
	_CacheMode[(new std::string("CACHE_MODE_REPLACE_DEEP"))->c_str()] = ResourceFormatLoader::CacheMode::CACHE_MODE_REPLACE_DEEP;
	_module.add("CacheMode", std::move(_CacheMode));
}
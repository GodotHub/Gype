#include "support/javascript_loader.hpp"
#include "support/javascript.hpp"
#include <godot_cpp/classes/file_access.hpp>
#include <godot_cpp/classes/resource_loader.hpp>
#include <godot_cpp/classes/resource_uid.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

JavaScriptLoader *JavaScriptLoader::singleton;

JavaScriptLoader *JavaScriptLoader::get_singleton() {
	if (singleton) {
		return singleton;
	}
	singleton = memnew(JavaScriptLoader);
	return singleton;
}

PackedStringArray JavaScriptLoader::_get_recognized_extensions() const {
	PackedStringArray ret = PackedStringArray();
	ret.append("ts");
	ret.append("js");
	return ret;
}

bool JavaScriptLoader::_recognize_path(const String &p_path, const StringName &p_type) const {
	return p_path.ends_with(".js") || p_path.ends_with(".ts");
}

bool JavaScriptLoader::_handles_type(const StringName &p_type) const {
	return p_type == StringName("TypeScript");
}

String JavaScriptLoader::_get_resource_type(const String &p_path) const {
	if (p_path.get_extension() == "js" || p_path.get_extension() == "ts") {
		return "TypeScript";
	} else {
		return "";
	}
}

String JavaScriptLoader::_get_resource_script_class(const String &p_path) const {
	return p_path.get_file().split(".")[1];
}

int64_t JavaScriptLoader::_get_resource_uid(const String &p_path) const {
	return ResourceUID::get_singleton()->text_to_id(p_path);
}

PackedStringArray JavaScriptLoader::_get_dependencies(const String &p_path, bool p_add_types) const {
	return PackedStringArray();
}

Error JavaScriptLoader::_rename_dependencies(const String &p_path, const Dictionary &p_renames) const {
	return OK;
}

bool JavaScriptLoader::_exists(const String &p_path) const {
	return FileAccess::file_exists(p_path);
}

PackedStringArray JavaScriptLoader::_get_classes_used(const String &p_path) const {
	return PackedStringArray();
}

Variant JavaScriptLoader::_load(const String &p_path, const String &p_original_path, bool p_use_sub_threads, int32_t p_cache_mode) const {
	Ref<JavaScript> script = memnew(JavaScript(p_path, p_original_path));
	String source_code = FileAccess::get_file_as_string(p_original_path);
	script->_set_source_code(source_code);
	JavaScriptLanguage::get_singleton()->scripts.insert(script);
	return script;
}

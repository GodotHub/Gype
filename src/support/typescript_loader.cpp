#include "support/typescript_loader.h"
#include "qjspp/utils.h"
#include "support/typescript.h"
#include "support/typescript_language.h"
#include "typescript_loader.h"
#include <godot_cpp/classes/file_access.hpp>
#include <godot_cpp/classes/resource_uid.hpp>

using namespace godot;

PackedStringArray TypescriptLoader::_get_recognized_extensions() const {
	return { TypescriptLanguage::EXTENSION };
}

bool TypescriptLoader::_recognize_path(const String &path, const StringName &type) const {
	return path.get_extension() == TypescriptLanguage::EXTENSION;
}

bool TypescriptLoader::_handles_type(const StringName &type) const {
	return type.contains(TypescriptLanguage::TYPE);
}

String TypescriptLoader::_get_resource_type(const String &path) const {
	if (path.get_extension() == TypescriptLanguage::EXTENSION) {
		return TypescriptLanguage::TYPE;
	}
	return String();
}

String TypescriptLoader::_get_resource_script_class(const String &path) const {
	return String();
}

int64_t TypescriptLoader::_get_resource_uid(const String &path) const {
	if (uids->has(path)) {
		return uids->get(path);
	}
	return -1;
}

void TypescriptLoader::_register_resource_uid(const String &path) const {
	int64_t id = ResourceUID::get_singleton()->create_id();
	if (ResourceUID::get_singleton()->has_id(id)) {
		ResourceUID::get_singleton()->set_id(id, path);
	} else {
		ResourceUID::get_singleton()->add_id(id, path);
	}
	uids->insert(path, id, false);
}

PackedStringArray TypescriptLoader::_get_dependencies(const String &path, bool add_types) const {
	return PackedStringArray();
}

Error TypescriptLoader::_rename_dependencies(const String &path, const Dictionary &renames) const {
	return Error();
}

bool TypescriptLoader::_exists(const String &path) const {
	return FileAccess::file_exists(path);
}

PackedStringArray TypescriptLoader::_get_classes_used(const String &path) const {
	return PackedStringArray();
}

Variant TypescriptLoader::_load(const String &path, const String &original_path, bool use_sub_threads, int32_t cache_mode) const {
	Typescript *script = memnew(Typescript);
	script->_script_path = original_path;
	String code = FileAccess::get_file_as_string(original_path);
	script->_set_source_code(code);
	_register_resource_uid(path);
	return script;
}

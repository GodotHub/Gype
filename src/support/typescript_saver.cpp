#include "support/typescript_saver.h"
#include "support/typescript.h"
#include <godot_cpp/classes/file_access.hpp>
#include <godot_cpp/classes/resource_uid.hpp>

TypescriptSaver *TypescriptSaver::singleton = nullptr;

TypescriptSaver::TypescriptSaver() {
	singleton = this;
}

TypescriptSaver::~TypescriptSaver() {
	singleton = nullptr;
}

TypescriptSaver *TypescriptSaver::get_singleton() {
	return singleton;
}

Error TypescriptSaver::_save(const Ref<Resource> &resource, const String &path, uint32_t flags) {
	Ref<Typescript> script = resource;
	ERR_FAIL_COND_V(script.is_null(), ERR_INVALID_PARAMETER);
	String source = script->get_source_code();
	{
		Ref<FileAccess> file = FileAccess::open(path, FileAccess::WRITE);
		Error err = FileAccess::get_open_error();
		ERR_FAIL_COND_V_MSG(err, err, "Cannot save GDScript file '" + path + "'.");

		file->store_string(source);
		if (file->get_error() != OK && file->get_error() != ERR_FILE_EOF) {
			return ERR_CANT_CREATE;
		}
	}

	// if (ScriptServer::is_reload_scripts_on_save_enabled()) {
	// 	GDScriptLanguage::get_singleton()->reload_tool_script(resource, true);
	// }
	return OK;
}

Error TypescriptSaver::_set_uid(const String &path, int64_t uid) {
	if (!ResourceUID::get_singleton()->has_id(uid)) {
		ResourceUID::get_singleton()->set_id(uid, path);
		uids[path] = uid;
	}
	return Error();
}

bool TypescriptSaver::_recognize(const Ref<Resource> &resource) const {
	return Object::cast_to<Typescript>(*resource);
}

PackedStringArray TypescriptSaver::_get_recognized_extensions(const Ref<Resource> &resource) const {
	if (Object::cast_to<Typescript>(*resource)) {
		return { TypescriptLanguage::EXTENSION };
	}
	return {};
}

bool TypescriptSaver::_recognize_path(const Ref<Resource> &resource, const String &path) const {
	if (Object::cast_to<Typescript>(*resource)) {
		return path.get_extension() == TypescriptLanguage::EXTENSION;
	}
	return false;
}

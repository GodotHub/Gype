#include "support/javascript_saver.hpp"
#include "support/javascript.hpp"
#include <godot_cpp/classes/file_access.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/resource_saver.hpp>
#include <godot_cpp/classes/resource_uid.hpp>

JavaScriptSaver *JavaScriptSaver::singleton;

JavaScriptSaver *JavaScriptSaver::get_singleton() {
	if (singleton) {
		return singleton;
	}
	singleton = memnew(JavaScriptSaver);
	return singleton;
}

Error JavaScriptSaver::_save(const Ref<Resource> &p_resource, const String &p_path, uint32_t p_flags) {
	Ref<JavaScript> script = p_resource;
	if (!FileAccess::file_exists(p_path)) {
		Ref<FileAccess> file = FileAccess::open(p_path, FileAccess::ModeFlags::WRITE);
		String source_code = script->_get_source_code();
		if (source_code != "") {
			file->store_string(source_code);
		}
		return Error::OK;
	} else {
		return Error::ERR_ALREADY_EXISTS;
	}
}

Error JavaScriptSaver::_set_uid(const String &p_path, int64_t p_uid) {
	ResourceUID::get_singleton()->set_id(p_uid, p_path);
	return OK;
}

bool JavaScriptSaver::_recognize(const Ref<Resource> &p_resource) const {
	return true;
}

PackedStringArray JavaScriptSaver::_get_recognized_extensions(const Ref<Resource> &p_resource) const {
	PackedStringArray ret = PackedStringArray();
	ret.append("js");
	return ret;
}

bool JavaScriptSaver::_recognize_path(const Ref<Resource> &p_resource, const String &p_path) const {
	return p_path.ends_with(".js");
}

#include <godot_cpp/classes/editor_file_system_import_format_support_query.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorFileSystemImportFormatSupportQuery() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorFileSystemImportFormatSupportQuery>("EditorFileSystemImportFormatSupportQuery")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<bool (EditorFileSystemImportFormatSupportQuery::*)() const>(&EditorFileSystemImportFormatSupportQuery::_is_active)>((new std::string("_is_active"))->c_str())
			.fun<static_cast<PackedStringArray (EditorFileSystemImportFormatSupportQuery::*)() const>(&EditorFileSystemImportFormatSupportQuery::_get_file_extensions)>((new std::string("_get_file_extensions"))->c_str())
			.fun<static_cast<bool (EditorFileSystemImportFormatSupportQuery::*)() const>(&EditorFileSystemImportFormatSupportQuery::_query)>((new std::string("_query"))->c_str());
}
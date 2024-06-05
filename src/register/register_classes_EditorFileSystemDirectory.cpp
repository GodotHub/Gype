#include <godot_cpp/classes/editor_file_system_directory.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorFileSystemDirectory() {
	qjs::Context::Module &_module = _General;
	_module.class_<EditorFileSystemDirectory>("EditorFileSystemDirectory")
			.constructor<>()
			.fun<static_cast<int32_t (EditorFileSystemDirectory::*)() const>(&EditorFileSystemDirectory::get_subdir_count)>("get_subdir_count")
			.fun<static_cast<EditorFileSystemDirectory *(EditorFileSystemDirectory::*)(int32_t)>(&EditorFileSystemDirectory::get_subdir)>("get_subdir")
			.fun<static_cast<int32_t (EditorFileSystemDirectory::*)() const>(&EditorFileSystemDirectory::get_file_count)>("get_file_count")
			.fun<static_cast<String (EditorFileSystemDirectory::*)(int32_t) const>(&EditorFileSystemDirectory::get_file)>("get_file")
			.fun<static_cast<String (EditorFileSystemDirectory::*)(int32_t) const>(&EditorFileSystemDirectory::get_file_path)>("get_file_path")
			.fun<static_cast<StringName (EditorFileSystemDirectory::*)(int32_t) const>(&EditorFileSystemDirectory::get_file_type)>("get_file_type")
			.fun<static_cast<String (EditorFileSystemDirectory::*)(int32_t) const>(&EditorFileSystemDirectory::get_file_script_class_name)>("get_file_script_class_name")
			.fun<static_cast<String (EditorFileSystemDirectory::*)(int32_t) const>(&EditorFileSystemDirectory::get_file_script_class_extends)>("get_file_script_class_extends")
			.fun<static_cast<bool (EditorFileSystemDirectory::*)(int32_t) const>(&EditorFileSystemDirectory::get_file_import_is_valid)>("get_file_import_is_valid")
			.fun<static_cast<String (EditorFileSystemDirectory::*)()>(&EditorFileSystemDirectory::get_name)>("get_name")
			.fun<static_cast<String (EditorFileSystemDirectory::*)() const>(&EditorFileSystemDirectory::get_path)>("get_path")
			.fun<static_cast<EditorFileSystemDirectory *(EditorFileSystemDirectory::*)()>(&EditorFileSystemDirectory::get_parent)>("get_parent")
			.fun<static_cast<int32_t (EditorFileSystemDirectory::*)(const String &) const>(&EditorFileSystemDirectory::find_file_index)>("find_file_index")
			.fun<static_cast<int32_t (EditorFileSystemDirectory::*)(const String &) const>(&EditorFileSystemDirectory::find_dir_index)>("find_dir_index");
}
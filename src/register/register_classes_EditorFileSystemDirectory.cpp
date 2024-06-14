
#include <godot_cpp/classes/editor_file_system_directory.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorFileSystemDirectory() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorFileSystemDirectory>("EditorFileSystemDirectory")
			.constructor<>()
			.base<Object>()
			.fun<static_cast<int32_t (EditorFileSystemDirectory::*)() const>(&EditorFileSystemDirectory::get_subdir_count)>((new std::string("get_subdir_count"))->c_str())
			.fun<static_cast<EditorFileSystemDirectory *(EditorFileSystemDirectory::*)(int32_t)>(&EditorFileSystemDirectory::get_subdir)>((new std::string("get_subdir"))->c_str())
			.fun<static_cast<int32_t (EditorFileSystemDirectory::*)() const>(&EditorFileSystemDirectory::get_file_count)>((new std::string("get_file_count"))->c_str())
			.fun<static_cast<String (EditorFileSystemDirectory::*)(int32_t) const>(&EditorFileSystemDirectory::get_file)>((new std::string("get_file"))->c_str())
			.fun<static_cast<String (EditorFileSystemDirectory::*)(int32_t) const>(&EditorFileSystemDirectory::get_file_path)>((new std::string("get_file_path"))->c_str())
			.fun<static_cast<StringName (EditorFileSystemDirectory::*)(int32_t) const>(&EditorFileSystemDirectory::get_file_type)>((new std::string("get_file_type"))->c_str())
			.fun<static_cast<String (EditorFileSystemDirectory::*)(int32_t) const>(&EditorFileSystemDirectory::get_file_script_class_name)>((new std::string("get_file_script_class_name"))->c_str())
			.fun<static_cast<String (EditorFileSystemDirectory::*)(int32_t) const>(&EditorFileSystemDirectory::get_file_script_class_extends)>((new std::string("get_file_script_class_extends"))->c_str())
			.fun<static_cast<bool (EditorFileSystemDirectory::*)(int32_t) const>(&EditorFileSystemDirectory::get_file_import_is_valid)>((new std::string("get_file_import_is_valid"))->c_str())
			.fun<static_cast<String (EditorFileSystemDirectory::*)()>(&EditorFileSystemDirectory::get_name)>((new std::string("get_name"))->c_str())
			.fun<static_cast<String (EditorFileSystemDirectory::*)() const>(&EditorFileSystemDirectory::get_path)>((new std::string("get_path"))->c_str())
			.fun<static_cast<EditorFileSystemDirectory *(EditorFileSystemDirectory::*)()>(&EditorFileSystemDirectory::get_parent)>((new std::string("get_parent"))->c_str())
			.fun<static_cast<int32_t (EditorFileSystemDirectory::*)(const String &) const>(&EditorFileSystemDirectory::find_file_index)>((new std::string("find_file_index"))->c_str())
			.fun<static_cast<int32_t (EditorFileSystemDirectory::*)(const String &) const>(&EditorFileSystemDirectory::find_dir_index)>((new std::string("find_dir_index"))->c_str());
}
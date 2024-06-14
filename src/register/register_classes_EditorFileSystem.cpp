#include <godot_cpp/classes/editor_file_system.hpp>
#include <godot_cpp/classes/editor_file_system_directory.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorFileSystem() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<EditorFileSystem>("EditorFileSystem")
			.constructor<>()
			.base<Node>()
			.fun<static_cast<EditorFileSystemDirectory *(EditorFileSystem::*)()>(&EditorFileSystem::get_filesystem)>((new std::string("get_filesystem"))->c_str())
			.fun<static_cast<bool (EditorFileSystem::*)() const>(&EditorFileSystem::is_scanning)>((new std::string("is_scanning"))->c_str())
			.fun<static_cast<double (EditorFileSystem::*)() const>(&EditorFileSystem::get_scanning_progress)>((new std::string("get_scanning_progress"))->c_str())
			.fun<static_cast<void (EditorFileSystem::*)()>(&EditorFileSystem::scan)>((new std::string("scan"))->c_str())
			.fun<static_cast<void (EditorFileSystem::*)()>(&EditorFileSystem::scan_sources)>((new std::string("scan_sources"))->c_str())
			.fun<static_cast<void (EditorFileSystem::*)(const String &)>(&EditorFileSystem::update_file)>((new std::string("update_file"))->c_str())
			.fun<static_cast<EditorFileSystemDirectory *(EditorFileSystem::*)(const String &)>(&EditorFileSystem::get_filesystem_path)>((new std::string("get_filesystem_path"))->c_str())
			.fun<static_cast<String (EditorFileSystem::*)(const String &) const>(&EditorFileSystem::get_file_type)>((new std::string("get_file_type"))->c_str())
			.fun<static_cast<void (EditorFileSystem::*)(const PackedStringArray &)>(&EditorFileSystem::reimport_files)>((new std::string("reimport_files"))->c_str());
}
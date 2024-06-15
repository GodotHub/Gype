#include <godot_cpp/classes/editor_file_system.hpp>
#include <godot_cpp/classes/editor_file_system_directory.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorFileSystem() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<EditorFileSystem>("EditorFileSystem")
            .constructor<>()
            .base<Node>()
            .fun<static_cast<EditorFileSystemDirectory *(EditorFileSystem::*)()>(&EditorFileSystem::get_filesystem)>("get_filesystem")
            .fun<static_cast<bool(EditorFileSystem::*)()const>(&EditorFileSystem::is_scanning)>("is_scanning")
            .fun<static_cast<double(EditorFileSystem::*)()const>(&EditorFileSystem::get_scanning_progress)>("get_scanning_progress")
            .fun<static_cast<void(EditorFileSystem::*)()>(&EditorFileSystem::scan)>("scan")
            .fun<static_cast<void(EditorFileSystem::*)()>(&EditorFileSystem::scan_sources)>("scan_sources")
            .fun<static_cast<void(EditorFileSystem::*)(const String &)>(&EditorFileSystem::update_file)>("update_file")
            .fun<static_cast<EditorFileSystemDirectory *(EditorFileSystem::*)(const String &)>(&EditorFileSystem::get_filesystem_path)>("get_filesystem_path")
            .fun<static_cast<String(EditorFileSystem::*)(const String &)const>(&EditorFileSystem::get_file_type)>("get_file_type")
            .fun<static_cast<void(EditorFileSystem::*)(const PackedStringArray &)>(&EditorFileSystem::reimport_files)>("reimport_files")
;}
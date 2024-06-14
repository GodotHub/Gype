#include <godot_cpp/classes/editor_paths.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorPaths() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorPaths>("EditorPaths")
			.constructor<>()
			.base<Object>()
			.fun<static_cast<String (EditorPaths::*)() const>(&EditorPaths::get_data_dir)>((new std::string("get_data_dir"))->c_str())
			.fun<static_cast<String (EditorPaths::*)() const>(&EditorPaths::get_config_dir)>((new std::string("get_config_dir"))->c_str())
			.fun<static_cast<String (EditorPaths::*)() const>(&EditorPaths::get_cache_dir)>((new std::string("get_cache_dir"))->c_str())
			.fun<static_cast<bool (EditorPaths::*)() const>(&EditorPaths::is_self_contained)>((new std::string("is_self_contained"))->c_str())
			.fun<static_cast<String (EditorPaths::*)() const>(&EditorPaths::get_self_contained_file)>((new std::string("get_self_contained_file"))->c_str())
			.fun<static_cast<String (EditorPaths::*)() const>(&EditorPaths::get_project_settings_dir)>((new std::string("get_project_settings_dir"))->c_str());
}
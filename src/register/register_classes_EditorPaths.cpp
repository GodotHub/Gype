#include <godot_cpp/classes/editor_paths.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_EditorPaths() {
	qjs::Context::Module &_module = _General;
	_module.class_<EditorPaths>("EditorPaths")
			.constructor<>()
			.fun<static_cast<String (EditorPaths::*)() const>(&EditorPaths::get_data_dir)>("get_data_dir")
			.fun<static_cast<String (EditorPaths::*)() const>(&EditorPaths::get_config_dir)>("get_config_dir")
			.fun<static_cast<String (EditorPaths::*)() const>(&EditorPaths::get_cache_dir)>("get_cache_dir")
			.fun<static_cast<bool (EditorPaths::*)() const>(&EditorPaths::is_self_contained)>("is_self_contained")
			.fun<static_cast<String (EditorPaths::*)() const>(&EditorPaths::get_self_contained_file)>("get_self_contained_file")
			.fun<static_cast<String (EditorPaths::*)() const>(&EditorPaths::get_project_settings_dir)>("get_project_settings_dir");
}
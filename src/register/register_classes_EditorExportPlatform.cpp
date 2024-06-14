#include <godot_cpp/classes/editor_export_platform.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorExportPlatform() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorExportPlatform>("EditorExportPlatform")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<String (EditorExportPlatform::*)() const>(&EditorExportPlatform::get_os_name)>((new std::string("get_os_name"))->c_str());
}
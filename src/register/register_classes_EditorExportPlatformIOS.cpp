#include <godot_cpp/classes/editor_export_platform_ios.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorExportPlatformIOS() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorExportPlatformIOS>("EditorExportPlatformIOS")
			.constructor<>();
}
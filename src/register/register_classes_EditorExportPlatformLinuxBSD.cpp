#include <godot_cpp/classes/editor_export_platform_linux_bsd.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorExportPlatformLinuxBSD() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorExportPlatformLinuxBSD>("EditorExportPlatformLinuxBSD")
			.constructor<>();
}
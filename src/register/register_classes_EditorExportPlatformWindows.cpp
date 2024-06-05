#include <godot_cpp/classes/editor_export_platform_windows.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_EditorExportPlatformWindows() {
	qjs::Context::Module &_module = _General;
	_module.class_<EditorExportPlatformWindows>("EditorExportPlatformWindows")
			.constructor<>();
}
#include "register/register_classes.h"
#include <godot_cpp/classes/editor_export_platform_windows.hpp>

using namespace godot;

void register_classes_EditorExportPlatformWindowsRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorExportPlatformWindows>>("EditorExportPlatformWindowsRef").constructor<EditorExportPlatformWindows *>();
}
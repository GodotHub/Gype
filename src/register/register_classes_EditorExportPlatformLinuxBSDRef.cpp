#include "register/register_classes.h"
#include <godot_cpp/classes/editor_export_platform_linux_bsd.hpp>

using namespace godot;

void register_classes_EditorExportPlatformLinuxBSDRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorExportPlatformLinuxBSD>>("EditorExportPlatformLinuxBSDRef").constructor<EditorExportPlatformLinuxBSD *>();
}
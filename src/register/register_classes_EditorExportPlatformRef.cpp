#include "register/register_classes.h"
#include <godot_cpp/classes/editor_export_platform.hpp>

using namespace godot;

void register_classes_EditorExportPlatformRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorExportPlatform>>("EditorExportPlatformRef").constructor<EditorExportPlatform *>();
}
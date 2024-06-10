#include "register/register_classes.h"
#include <godot_cpp/classes/editor_export_platform_pc.hpp>

using namespace godot;

void register_classes_EditorExportPlatformPCRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorExportPlatformPC>>("EditorExportPlatformPCRef").constructor<EditorExportPlatformPC *>();
}
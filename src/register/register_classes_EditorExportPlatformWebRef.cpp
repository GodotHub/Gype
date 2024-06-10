#include "register/register_classes.h"
#include <godot_cpp/classes/editor_export_platform_web.hpp>

using namespace godot;

void register_classes_EditorExportPlatformWebRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorExportPlatformWeb>>("EditorExportPlatformWebRef").constructor<EditorExportPlatformWeb *>();
}
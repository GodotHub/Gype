#include "register/register_classes.h"
#include <godot_cpp/classes/editor_export_platform_android.hpp>

using namespace godot;

void register_classes_EditorExportPlatformAndroidRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorExportPlatformAndroid>>("EditorExportPlatformAndroidRef").constructor<EditorExportPlatformAndroid *>();
}
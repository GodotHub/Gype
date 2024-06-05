#include <godot_cpp/classes/editor_export_platform_mac_os.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_EditorExportPlatformMacOS() {
	qjs::Context::Module &_module = _General;
	_module.class_<EditorExportPlatformMacOS>("EditorExportPlatformMacOS")
			.constructor<>();
}
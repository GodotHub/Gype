#include <godot_cpp/classes/editor_export_platform_web.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_EditorExportPlatformWeb() {
	qjs::Context::Module &_module = _General;
	_module.class_<EditorExportPlatformWeb>("EditorExportPlatformWeb")
			.constructor<>();
}
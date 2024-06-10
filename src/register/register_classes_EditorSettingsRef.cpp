#include "register/register_classes.h"
#include <godot_cpp/classes/editor_settings.hpp>

using namespace godot;

void register_classes_EditorSettingsRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorSettings>>("EditorSettingsRef").constructor<EditorSettings *>();
}
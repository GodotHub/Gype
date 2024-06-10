#include "register/register_classes.h"
#include <godot_cpp/classes/label_settings.hpp>

using namespace godot;

void register_classes_LabelSettingsRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<LabelSettings>>("LabelSettingsRef").constructor<LabelSettings *>();
}
#include "register/register_classes.h"
#include <godot_cpp/classes/theme.hpp>

using namespace godot;

void register_classes_ThemeRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Theme>>("ThemeRef").constructor<Theme *>();
}
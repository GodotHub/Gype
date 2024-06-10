#include "register/register_classes.h"
#include <godot_cpp/classes/system_font.hpp>

using namespace godot;

void register_classes_SystemFontRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SystemFont>>("SystemFontRef").constructor<SystemFont *>();
}
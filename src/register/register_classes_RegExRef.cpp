#include "register/register_classes.h"
#include <godot_cpp/classes/reg_ex.hpp>

using namespace godot;

void register_classes_RegExRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RegEx>>("RegExRef").constructor<RegEx *>();
}
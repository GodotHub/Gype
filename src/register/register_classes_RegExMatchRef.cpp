#include "register/register_classes.h"
#include <godot_cpp/classes/reg_ex_match.hpp>

using namespace godot;

void register_classes_RegExMatchRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RegExMatch>>("RegExMatchRef").constructor<RegExMatch *>();
}
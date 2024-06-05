#include <godot_cpp/classes/check_button.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_CheckButton() {
	qjs::Context::Module &_module = _Control;
	_module.class_<CheckButton>("CheckButton")
			.constructor<>();
}
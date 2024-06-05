#include <godot_cpp/classes/check_box.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_CheckBox() {
	qjs::Context::Module &_module = _Control;
	_module.class_<CheckBox>("CheckBox")
			.constructor<>();
}
#include <godot_cpp/classes/h_box_container.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_HBoxContainer() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<HBoxContainer>("HBoxContainer")
			.constructor<>();
}
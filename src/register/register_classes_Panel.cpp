#include <godot_cpp/classes/panel.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Panel() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<Panel>("Panel")
			.constructor<>();
}
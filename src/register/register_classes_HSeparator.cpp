#include <godot_cpp/classes/h_separator.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_HSeparator() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<HSeparator>("HSeparator")
			.constructor<>();
}
#include <godot_cpp/classes/v_separator.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_VSeparator() {
	qjs::Context::Module &_module = _Control;
	_module.class_<VSeparator>("VSeparator")
			.constructor<>();
}
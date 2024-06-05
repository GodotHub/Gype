#include <godot_cpp/classes/gd_script.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_GDScript() {
	qjs::Context::Module &_module = _General;
	_module.class_<GDScript>("GDScript")
			.constructor<>();
}
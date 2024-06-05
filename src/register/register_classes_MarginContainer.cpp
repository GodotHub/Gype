#include <godot_cpp/classes/margin_container.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_MarginContainer() {
	qjs::Context::Module &_module = _Control;
	_module.class_<MarginContainer>("MarginContainer")
			.constructor<>();
}
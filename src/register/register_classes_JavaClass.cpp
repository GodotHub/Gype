#include <godot_cpp/classes/java_class.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_JavaClass() {
	qjs::Context::Module &_module = _General;
	_module.class_<JavaClass>("JavaClass")
			.constructor<>();
}
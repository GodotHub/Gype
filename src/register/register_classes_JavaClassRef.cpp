#include "register/register_classes.h"
#include <godot_cpp/classes/java_class.hpp>

using namespace godot;

void register_classes_JavaClassRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<JavaClass>>("JavaClassRef").constructor<JavaClass *>();
}
#include "register/register_classes.h"
#include <godot_cpp/classes/java_script_object.hpp>

using namespace godot;

void register_classes_JavaScriptObjectRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<JavaScriptObject>>("JavaScriptObjectRef").constructor<JavaScriptObject *>();
}
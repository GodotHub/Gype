#include "register/register_classes.h"
#include <godot_cpp/classes/json.hpp>

using namespace godot;

void register_classes_JSONRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<JSON>>("JSONRef").constructor<JSON *>();
}
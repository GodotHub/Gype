#include "register/register_classes.h"
#include <godot_cpp/classes/gd_script.hpp>

using namespace godot;

void register_classes_GDScriptRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GDScript>>("GDScriptRef").constructor<GDScript *>();
}
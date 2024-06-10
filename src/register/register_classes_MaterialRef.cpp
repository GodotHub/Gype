#include "register/register_classes.h"
#include <godot_cpp/classes/material.hpp>

using namespace godot;

void register_classes_MaterialRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Material>>("MaterialRef").constructor<Material *>();
}
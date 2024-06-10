#include <godot_cpp/classes/standard_material3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_StandardMaterial3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<StandardMaterial3D>("StandardMaterial3D")
			.constructor<>();
}
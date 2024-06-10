#include <godot_cpp/classes/orm_material3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ORMMaterial3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ORMMaterial3D>("ORMMaterial3D")
			.constructor<>();
}
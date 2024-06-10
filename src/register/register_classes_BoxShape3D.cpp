#include <godot_cpp/classes/box_shape3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_BoxShape3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<BoxShape3D>("BoxShape3D")
			.constructor<>()
			.property<&BoxShape3D::get_size, &BoxShape3D::set_size>("size");
}
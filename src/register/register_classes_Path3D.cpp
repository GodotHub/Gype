#include <godot_cpp/classes/curve3d.hpp>
#include <godot_cpp/classes/path3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Path3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<Path3D>("Path3D")
			.constructor<>()
			.property<&Path3D::get_curve, &Path3D::set_curve>("curve");
}
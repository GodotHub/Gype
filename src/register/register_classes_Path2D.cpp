#include <godot_cpp/classes/curve2d.hpp>
#include <godot_cpp/classes/path2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Path2D() {
	qjs::Context::Module &_module = _Node2D;
	_module.class_<Path2D>("Path2D")
			.constructor<>()
			.property<&Path2D::get_curve, &Path2D::set_curve>("curve");
}
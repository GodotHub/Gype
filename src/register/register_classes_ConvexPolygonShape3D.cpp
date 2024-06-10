#include <godot_cpp/classes/convex_polygon_shape3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ConvexPolygonShape3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ConvexPolygonShape3D>("ConvexPolygonShape3D")
			.constructor<>()
			.property<&ConvexPolygonShape3D::get_points, &ConvexPolygonShape3D::set_points>("points");
}
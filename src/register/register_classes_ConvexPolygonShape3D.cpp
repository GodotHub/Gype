#include <godot_cpp/classes/convex_polygon_shape3d.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ConvexPolygonShape3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ConvexPolygonShape3D>("ConvexPolygonShape3D")
			.constructor<>()
			.base<Shape3D>()
			.property<static_cast<PackedVector3Array (ConvexPolygonShape3D::*)() const>(&ConvexPolygonShape3D::get_points), static_cast<void (ConvexPolygonShape3D::*)(const PackedVector3Array &)>(&ConvexPolygonShape3D::set_points)>((new std::string("points"))->c_str());
}
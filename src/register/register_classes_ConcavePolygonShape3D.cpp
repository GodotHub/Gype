#include <godot_cpp/classes/concave_polygon_shape3d.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ConcavePolygonShape3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ConcavePolygonShape3D>("ConcavePolygonShape3D")
			.constructor<>()
			.base<Shape3D>()
			.property<static_cast<PackedVector3Array (ConcavePolygonShape3D::*)() const>(&ConcavePolygonShape3D::get_faces), static_cast<void (ConcavePolygonShape3D::*)(const PackedVector3Array &)>(&ConcavePolygonShape3D::set_faces)>((new std::string("data"))->c_str())
			.property<static_cast<bool (ConcavePolygonShape3D::*)() const>(&ConcavePolygonShape3D::is_backface_collision_enabled), static_cast<void (ConcavePolygonShape3D::*)(bool)>(&ConcavePolygonShape3D::set_backface_collision_enabled)>((new std::string("backface_collision"))->c_str());
}
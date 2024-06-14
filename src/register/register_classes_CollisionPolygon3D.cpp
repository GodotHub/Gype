#include <godot_cpp/classes/collision_polygon3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CollisionPolygon3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<CollisionPolygon3D>("CollisionPolygon3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<double (CollisionPolygon3D::*)() const>(&CollisionPolygon3D::get_depth), static_cast<void (CollisionPolygon3D::*)(double)>(&CollisionPolygon3D::set_depth)>((new std::string("depth"))->c_str())
			.property<static_cast<bool (CollisionPolygon3D::*)() const>(&CollisionPolygon3D::is_disabled), static_cast<void (CollisionPolygon3D::*)(bool)>(&CollisionPolygon3D::set_disabled)>((new std::string("disabled"))->c_str())
			.property<static_cast<PackedVector2Array (CollisionPolygon3D::*)() const>(&CollisionPolygon3D::get_polygon), static_cast<void (CollisionPolygon3D::*)(const PackedVector2Array &)>(&CollisionPolygon3D::set_polygon)>((new std::string("polygon"))->c_str())
			.property<static_cast<double (CollisionPolygon3D::*)() const>(&CollisionPolygon3D::get_margin), static_cast<void (CollisionPolygon3D::*)(double)>(&CollisionPolygon3D::set_margin)>((new std::string("margin"))->c_str());
}
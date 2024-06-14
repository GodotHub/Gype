
#include <godot_cpp/classes/kinematic_collision2d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_KinematicCollision2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<KinematicCollision2D>("KinematicCollision2D")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<Vector2 (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_position)>((new std::string("get_position"))->c_str())
			.fun<static_cast<Vector2 (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_normal)>((new std::string("get_normal"))->c_str())
			.fun<static_cast<Vector2 (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_travel)>((new std::string("get_travel"))->c_str())
			.fun<static_cast<Vector2 (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_remainder)>((new std::string("get_remainder"))->c_str())
			.fun<static_cast<double (KinematicCollision2D::*)(const Vector2 &) const>(&KinematicCollision2D::get_angle)>((new std::string("get_angle"))->c_str())
			.fun<static_cast<double (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_depth)>((new std::string("get_depth"))->c_str())
			.fun<static_cast<Object *(KinematicCollision2D::*)() const>(&KinematicCollision2D::get_local_shape)>((new std::string("get_local_shape"))->c_str())
			.fun<static_cast<Object *(KinematicCollision2D::*)() const>(&KinematicCollision2D::get_collider)>((new std::string("get_collider"))->c_str())
			.fun<static_cast<uint64_t (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_collider_id)>((new std::string("get_collider_id"))->c_str())
			.fun<static_cast<RID (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_collider_rid)>((new std::string("get_collider_rid"))->c_str())
			.fun<static_cast<Object *(KinematicCollision2D::*)() const>(&KinematicCollision2D::get_collider_shape)>((new std::string("get_collider_shape"))->c_str())
			.fun<static_cast<int32_t (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_collider_shape_index)>((new std::string("get_collider_shape_index"))->c_str())
			.fun<static_cast<Vector2 (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_collider_velocity)>((new std::string("get_collider_velocity"))->c_str());
}
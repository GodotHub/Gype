#include <godot_cpp/classes/kinematic_collision2d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_KinematicCollision2D() {
	qjs::Context::Module &_module = _General;
	_module.class_<KinematicCollision2D>("KinematicCollision2D")
			.constructor<>()
			.fun<static_cast<Vector2 (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_position)>("get_position")
			.fun<static_cast<Vector2 (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_normal)>("get_normal")
			.fun<static_cast<Vector2 (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_travel)>("get_travel")
			.fun<static_cast<Vector2 (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_remainder)>("get_remainder")
			.fun<static_cast<double (KinematicCollision2D::*)(const Vector2 &) const>(&KinematicCollision2D::get_angle)>("get_angle")
			.fun<static_cast<double (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_depth)>("get_depth")
			.fun<static_cast<Object *(KinematicCollision2D::*)() const>(&KinematicCollision2D::get_local_shape)>("get_local_shape")
			.fun<static_cast<Object *(KinematicCollision2D::*)() const>(&KinematicCollision2D::get_collider)>("get_collider")
			.fun<static_cast<uint64_t (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_collider_id)>("get_collider_id")
			.fun<static_cast<RID (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_collider_rid)>("get_collider_rid")
			.fun<static_cast<Object *(KinematicCollision2D::*)() const>(&KinematicCollision2D::get_collider_shape)>("get_collider_shape")
			.fun<static_cast<int32_t (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_collider_shape_index)>("get_collider_shape_index")
			.fun<static_cast<Vector2 (KinematicCollision2D::*)() const>(&KinematicCollision2D::get_collider_velocity)>("get_collider_velocity");
}
#include <godot_cpp/classes/kinematic_collision3d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_KinematicCollision3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<KinematicCollision3D>("KinematicCollision3D")
			.constructor<>()
			.fun<static_cast<Vector3 (KinematicCollision3D::*)() const>(&KinematicCollision3D::get_travel)>("get_travel")
			.fun<static_cast<Vector3 (KinematicCollision3D::*)() const>(&KinematicCollision3D::get_remainder)>("get_remainder")
			.fun<static_cast<double (KinematicCollision3D::*)() const>(&KinematicCollision3D::get_depth)>("get_depth")
			.fun<static_cast<int32_t (KinematicCollision3D::*)() const>(&KinematicCollision3D::get_collision_count)>("get_collision_count")
			.fun<static_cast<Vector3 (KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_position)>("get_position")
			.fun<static_cast<Vector3 (KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_normal)>("get_normal")
			.fun<static_cast<double (KinematicCollision3D::*)(int32_t, const Vector3 &) const>(&KinematicCollision3D::get_angle)>("get_angle")
			.fun<static_cast<Object *(KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_local_shape)>("get_local_shape")
			.fun<static_cast<Object *(KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_collider)>("get_collider")
			.fun<static_cast<uint64_t (KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_collider_id)>("get_collider_id")
			.fun<static_cast<RID (KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_collider_rid)>("get_collider_rid")
			.fun<static_cast<Object *(KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_collider_shape)>("get_collider_shape")
			.fun<static_cast<int32_t (KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_collider_shape_index)>("get_collider_shape_index")
			.fun<static_cast<Vector3 (KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_collider_velocity)>("get_collider_velocity");
}
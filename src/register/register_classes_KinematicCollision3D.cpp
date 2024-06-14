
#include <godot_cpp/classes/kinematic_collision3d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_KinematicCollision3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<KinematicCollision3D>("KinematicCollision3D")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<Vector3 (KinematicCollision3D::*)() const>(&KinematicCollision3D::get_travel)>((new std::string("get_travel"))->c_str())
			.fun<static_cast<Vector3 (KinematicCollision3D::*)() const>(&KinematicCollision3D::get_remainder)>((new std::string("get_remainder"))->c_str())
			.fun<static_cast<double (KinematicCollision3D::*)() const>(&KinematicCollision3D::get_depth)>((new std::string("get_depth"))->c_str())
			.fun<static_cast<int32_t (KinematicCollision3D::*)() const>(&KinematicCollision3D::get_collision_count)>((new std::string("get_collision_count"))->c_str())
			.fun<static_cast<Vector3 (KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_position)>((new std::string("get_position"))->c_str())
			.fun<static_cast<Vector3 (KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_normal)>((new std::string("get_normal"))->c_str())
			.fun<static_cast<double (KinematicCollision3D::*)(int32_t, const Vector3 &) const>(&KinematicCollision3D::get_angle)>((new std::string("get_angle"))->c_str())
			.fun<static_cast<Object *(KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_local_shape)>((new std::string("get_local_shape"))->c_str())
			.fun<static_cast<Object *(KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_collider)>((new std::string("get_collider"))->c_str())
			.fun<static_cast<uint64_t (KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_collider_id)>((new std::string("get_collider_id"))->c_str())
			.fun<static_cast<RID (KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_collider_rid)>((new std::string("get_collider_rid"))->c_str())
			.fun<static_cast<Object *(KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_collider_shape)>((new std::string("get_collider_shape"))->c_str())
			.fun<static_cast<int32_t (KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_collider_shape_index)>((new std::string("get_collider_shape_index"))->c_str())
			.fun<static_cast<Vector3 (KinematicCollision3D::*)(int32_t) const>(&KinematicCollision3D::get_collider_velocity)>((new std::string("get_collider_velocity"))->c_str());
}
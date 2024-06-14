
#include <godot_cpp/classes/skeleton3d.hpp>
#include <godot_cpp/classes/skeleton_ik3d.hpp>
#include <godot_cpp/classes/skeleton_modifier3d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonIK3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<SkeletonIK3D>("SkeletonIK3D")
			.constructor<>()
			.base<SkeletonModifier3D>()
			.property<static_cast<StringName (SkeletonIK3D::*)() const>(&SkeletonIK3D::get_root_bone), static_cast<void (SkeletonIK3D::*)(const StringName &)>(&SkeletonIK3D::set_root_bone)>((new std::string("root_bone"))->c_str())
			.property<static_cast<StringName (SkeletonIK3D::*)() const>(&SkeletonIK3D::get_tip_bone), static_cast<void (SkeletonIK3D::*)(const StringName &)>(&SkeletonIK3D::set_tip_bone)>((new std::string("tip_bone"))->c_str())
			.property<static_cast<Transform3D (SkeletonIK3D::*)() const>(&SkeletonIK3D::get_target_transform), static_cast<void (SkeletonIK3D::*)(const Transform3D &)>(&SkeletonIK3D::set_target_transform)>((new std::string("target"))->c_str())
			.property<static_cast<bool (SkeletonIK3D::*)() const>(&SkeletonIK3D::is_override_tip_basis), static_cast<void (SkeletonIK3D::*)(bool)>(&SkeletonIK3D::set_override_tip_basis)>((new std::string("override_tip_basis"))->c_str())
			.property<static_cast<bool (SkeletonIK3D::*)() const>(&SkeletonIK3D::is_using_magnet), static_cast<void (SkeletonIK3D::*)(bool)>(&SkeletonIK3D::set_use_magnet)>((new std::string("use_magnet"))->c_str())
			.property<static_cast<Vector3 (SkeletonIK3D::*)() const>(&SkeletonIK3D::get_magnet_position), static_cast<void (SkeletonIK3D::*)(const Vector3 &)>(&SkeletonIK3D::set_magnet_position)>((new std::string("magnet"))->c_str())
			.property<static_cast<NodePath (SkeletonIK3D::*)()>(&SkeletonIK3D::get_target_node), static_cast<void (SkeletonIK3D::*)(const NodePath &)>(&SkeletonIK3D::set_target_node)>((new std::string("target_node"))->c_str())
			.property<static_cast<double (SkeletonIK3D::*)() const>(&SkeletonIK3D::get_min_distance), static_cast<void (SkeletonIK3D::*)(double)>(&SkeletonIK3D::set_min_distance)>((new std::string("min_distance"))->c_str())
			.property<static_cast<int32_t (SkeletonIK3D::*)() const>(&SkeletonIK3D::get_max_iterations), static_cast<void (SkeletonIK3D::*)(int32_t)>(&SkeletonIK3D::set_max_iterations)>((new std::string("max_iterations"))->c_str())
			.property<static_cast<double (SkeletonIK3D::*)() const>(&SkeletonIK3D::get_interpolation), static_cast<void (SkeletonIK3D::*)(double)>(&SkeletonIK3D::set_interpolation)>((new std::string("interpolation"))->c_str())
			.fun<static_cast<Skeleton3D *(SkeletonIK3D::*)() const>(&SkeletonIK3D::get_parent_skeleton)>((new std::string("get_parent_skeleton"))->c_str())
			.fun<static_cast<bool (SkeletonIK3D::*)()>(&SkeletonIK3D::is_running)>((new std::string("is_running"))->c_str())
			.fun<static_cast<void (SkeletonIK3D::*)(bool)>(&SkeletonIK3D::start)>((new std::string("start"))->c_str())
			.fun<static_cast<void (SkeletonIK3D::*)()>(&SkeletonIK3D::stop)>((new std::string("stop"))->c_str());
}

#include <godot_cpp/classes/mesh_instance3d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/classes/soft_body3d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SoftBody3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<SoftBody3D>("SoftBody3D")
			.constructor<>()
			.base<MeshInstance3D>()
			.property<static_cast<uint32_t (SoftBody3D::*)() const>(&SoftBody3D::get_collision_layer), static_cast<void (SoftBody3D::*)(uint32_t)>(&SoftBody3D::set_collision_layer)>((new std::string("collision_layer"))->c_str())
			.property<static_cast<uint32_t (SoftBody3D::*)() const>(&SoftBody3D::get_collision_mask), static_cast<void (SoftBody3D::*)(uint32_t)>(&SoftBody3D::set_collision_mask)>((new std::string("collision_mask"))->c_str())
			.property<static_cast<NodePath (SoftBody3D::*)() const>(&SoftBody3D::get_parent_collision_ignore), static_cast<void (SoftBody3D::*)(const NodePath &)>(&SoftBody3D::set_parent_collision_ignore)>((new std::string("parent_collision_ignore"))->c_str())
			.property<static_cast<int32_t (SoftBody3D::*)()>(&SoftBody3D::get_simulation_precision), static_cast<void (SoftBody3D::*)(int32_t)>(&SoftBody3D::set_simulation_precision)>((new std::string("simulation_precision"))->c_str())
			.property<static_cast<double (SoftBody3D::*)()>(&SoftBody3D::get_total_mass), static_cast<void (SoftBody3D::*)(double)>(&SoftBody3D::set_total_mass)>((new std::string("total_mass"))->c_str())
			.property<static_cast<double (SoftBody3D::*)()>(&SoftBody3D::get_linear_stiffness), static_cast<void (SoftBody3D::*)(double)>(&SoftBody3D::set_linear_stiffness)>((new std::string("linear_stiffness"))->c_str())
			.property<static_cast<double (SoftBody3D::*)()>(&SoftBody3D::get_pressure_coefficient), static_cast<void (SoftBody3D::*)(double)>(&SoftBody3D::set_pressure_coefficient)>((new std::string("pressure_coefficient"))->c_str())
			.property<static_cast<double (SoftBody3D::*)()>(&SoftBody3D::get_damping_coefficient), static_cast<void (SoftBody3D::*)(double)>(&SoftBody3D::set_damping_coefficient)>((new std::string("damping_coefficient"))->c_str())
			.property<static_cast<double (SoftBody3D::*)()>(&SoftBody3D::get_drag_coefficient), static_cast<void (SoftBody3D::*)(double)>(&SoftBody3D::set_drag_coefficient)>((new std::string("drag_coefficient"))->c_str())
			.property<static_cast<bool (SoftBody3D::*)() const>(&SoftBody3D::is_ray_pickable), static_cast<void (SoftBody3D::*)(bool)>(&SoftBody3D::set_ray_pickable)>((new std::string("ray_pickable"))->c_str())
			.property<static_cast<SoftBody3D::DisableMode (SoftBody3D::*)() const>(&SoftBody3D::get_disable_mode), static_cast<void (SoftBody3D::*)(SoftBody3D::DisableMode)>(&SoftBody3D::set_disable_mode)>((new std::string("disable_mode"))->c_str())
			.fun<static_cast<RID (SoftBody3D::*)() const>(&SoftBody3D::get_physics_rid)>((new std::string("get_physics_rid"))->c_str())
			.fun<static_cast<void (SoftBody3D::*)(int32_t, bool)>(&SoftBody3D::set_collision_mask_value)>((new std::string("set_collision_mask_value"))->c_str())
			.fun<static_cast<bool (SoftBody3D::*)(int32_t) const>(&SoftBody3D::get_collision_mask_value)>((new std::string("get_collision_mask_value"))->c_str())
			.fun<static_cast<void (SoftBody3D::*)(int32_t, bool)>(&SoftBody3D::set_collision_layer_value)>((new std::string("set_collision_layer_value"))->c_str())
			.fun<static_cast<bool (SoftBody3D::*)(int32_t) const>(&SoftBody3D::get_collision_layer_value)>((new std::string("get_collision_layer_value"))->c_str())
			.fun<static_cast<TypedArray<PhysicsBody3D> (SoftBody3D::*)()>(&SoftBody3D::get_collision_exceptions)>((new std::string("get_collision_exceptions"))->c_str())
			.fun<static_cast<void (SoftBody3D::*)(Node *)>(&SoftBody3D::add_collision_exception_with)>((new std::string("add_collision_exception_with"))->c_str())
			.fun<static_cast<void (SoftBody3D::*)(Node *)>(&SoftBody3D::remove_collision_exception_with)>((new std::string("remove_collision_exception_with"))->c_str())
			.fun<static_cast<Vector3 (SoftBody3D::*)(int32_t)>(&SoftBody3D::get_point_transform)>((new std::string("get_point_transform"))->c_str())
			.fun<static_cast<void (SoftBody3D::*)(int32_t, bool, const NodePath &)>(&SoftBody3D::set_point_pinned)>((new std::string("set_point_pinned"))->c_str())
			.fun<static_cast<bool (SoftBody3D::*)(int32_t) const>(&SoftBody3D::is_point_pinned)>((new std::string("is_point_pinned"))->c_str());
	qjs::Value _DisableMode = context->newObject();
	_DisableMode[(new std::string("DISABLE_MODE_REMOVE"))->c_str()] = SoftBody3D::DisableMode::DISABLE_MODE_REMOVE;
	_DisableMode[(new std::string("DISABLE_MODE_KEEP_ACTIVE"))->c_str()] = SoftBody3D::DisableMode::DISABLE_MODE_KEEP_ACTIVE;
	_module.add("DisableMode", std::move(_DisableMode));
}
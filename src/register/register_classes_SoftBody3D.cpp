#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_SoftBody3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<SoftBody3D>("SoftBody3D")
           .constructor<>()
           .property<SoftBody3D::get_collision_layer, SoftBody3D::set_collision_layer>("collision_layer")
           .property<SoftBody3D::get_collision_mask, SoftBody3D::set_collision_mask>("collision_mask")
           .property<SoftBody3D::get_parent_collision_ignore, SoftBody3D::set_parent_collision_ignore>("parent_collision_ignore")
           .property<SoftBody3D::get_simulation_precision, SoftBody3D::set_simulation_precision>("simulation_precision")
           .property<SoftBody3D::get_total_mass, SoftBody3D::set_total_mass>("total_mass")
           .property<SoftBody3D::get_linear_stiffness, SoftBody3D::set_linear_stiffness>("linear_stiffness")
           .property<SoftBody3D::get_pressure_coefficient, SoftBody3D::set_pressure_coefficient>("pressure_coefficient")
           .property<SoftBody3D::get_damping_coefficient, SoftBody3D::set_damping_coefficient>("damping_coefficient")
           .property<SoftBody3D::get_drag_coefficient, SoftBody3D::set_drag_coefficient>("drag_coefficient")
           .property<SoftBody3D::is_ray_pickable, SoftBody3D::set_ray_pickable>("ray_pickable")
           .property<SoftBody3D::get_disable_mode, SoftBody3D::set_disable_mode>("disable_mode")
		   .fun<static_cast<RID(SoftBody3D::*)()const>(&SoftBody3D::get_physics_rid)>("get_physics_rid")
		   .fun<static_cast<void(SoftBody3D::*)(int32_t,bool)>(&SoftBody3D::set_collision_mask_value)>("set_collision_mask_value")
		   .fun<static_cast<bool(SoftBody3D::*)(int32_t)const>(&SoftBody3D::get_collision_mask_value)>("get_collision_mask_value")
		   .fun<static_cast<void(SoftBody3D::*)(int32_t,bool)>(&SoftBody3D::set_collision_layer_value)>("set_collision_layer_value")
		   .fun<static_cast<bool(SoftBody3D::*)(int32_t)const>(&SoftBody3D::get_collision_layer_value)>("get_collision_layer_value")
		   .fun<static_cast<TypedArray<PhysicsBody3D>(SoftBody3D::*)()>(&SoftBody3D::get_collision_exceptions)>("get_collision_exceptions")
		   .fun<static_cast<void(SoftBody3D::*)(Node *)>(&SoftBody3D::add_collision_exception_with)>("add_collision_exception_with")
		   .fun<static_cast<void(SoftBody3D::*)(Node *)>(&SoftBody3D::remove_collision_exception_with)>("remove_collision_exception_with")
		   .fun<static_cast<Vector3(SoftBody3D::*)(int32_t)>(&SoftBody3D::get_point_transform)>("get_point_transform")
		   .fun<static_cast<void(SoftBody3D::*)(int32_t,bool,const NodePath &)>(&SoftBody3D::set_point_pinned)>("set_point_pinned")
		   .fun<static_cast<bool(SoftBody3D::*)(int32_t)const>(&SoftBody3D::is_point_pinned)>("is_point_pinned")
;}
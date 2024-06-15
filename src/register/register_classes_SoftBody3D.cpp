#include <godot_cpp/classes/soft_body3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/mesh_instance3d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SoftBody3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<SoftBody3D>("SoftBody3D")
            .constructor<>()
            .base<MeshInstance3D>()
            .property<static_cast<uint32_t(SoftBody3D::*)()const>(&SoftBody3D::get_collision_layer),static_cast<void(SoftBody3D::*)(uint32_t)>(&SoftBody3D::set_collision_layer)>("collision_layer")
            .property<static_cast<uint32_t(SoftBody3D::*)()const>(&SoftBody3D::get_collision_mask),static_cast<void(SoftBody3D::*)(uint32_t)>(&SoftBody3D::set_collision_mask)>("collision_mask")
            .property<static_cast<NodePath(SoftBody3D::*)()const>(&SoftBody3D::get_parent_collision_ignore),static_cast<void(SoftBody3D::*)(const NodePath &)>(&SoftBody3D::set_parent_collision_ignore)>("parent_collision_ignore")
            .property<static_cast<int32_t(SoftBody3D::*)()>(&SoftBody3D::get_simulation_precision),static_cast<void(SoftBody3D::*)(int32_t)>(&SoftBody3D::set_simulation_precision)>("simulation_precision")
            .property<static_cast<double(SoftBody3D::*)()>(&SoftBody3D::get_total_mass),static_cast<void(SoftBody3D::*)(double)>(&SoftBody3D::set_total_mass)>("total_mass")
            .property<static_cast<double(SoftBody3D::*)()>(&SoftBody3D::get_linear_stiffness),static_cast<void(SoftBody3D::*)(double)>(&SoftBody3D::set_linear_stiffness)>("linear_stiffness")
            .property<static_cast<double(SoftBody3D::*)()>(&SoftBody3D::get_pressure_coefficient),static_cast<void(SoftBody3D::*)(double)>(&SoftBody3D::set_pressure_coefficient)>("pressure_coefficient")
            .property<static_cast<double(SoftBody3D::*)()>(&SoftBody3D::get_damping_coefficient),static_cast<void(SoftBody3D::*)(double)>(&SoftBody3D::set_damping_coefficient)>("damping_coefficient")
            .property<static_cast<double(SoftBody3D::*)()>(&SoftBody3D::get_drag_coefficient),static_cast<void(SoftBody3D::*)(double)>(&SoftBody3D::set_drag_coefficient)>("drag_coefficient")
            .property<static_cast<bool(SoftBody3D::*)()const>(&SoftBody3D::is_ray_pickable),static_cast<void(SoftBody3D::*)(bool)>(&SoftBody3D::set_ray_pickable)>("ray_pickable")
            .property<static_cast<SoftBody3D::DisableMode(SoftBody3D::*)()const>(&SoftBody3D::get_disable_mode),static_cast<void(SoftBody3D::*)(SoftBody3D::DisableMode)>(&SoftBody3D::set_disable_mode)>("disable_mode")
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
;    qjs::Value _DisableMode = context->newObject();
    _DisableMode["DISABLE_MODE_REMOVE"] = SoftBody3D::DisableMode::DISABLE_MODE_REMOVE;
    _DisableMode["DISABLE_MODE_KEEP_ACTIVE"] = SoftBody3D::DisableMode::DISABLE_MODE_KEEP_ACTIVE;
    _module.add("DisableMode", std::move(_DisableMode));
}
#include <godot_cpp/classes/physics_point_query_parameters3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PhysicsPointQueryParameters3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PhysicsPointQueryParameters3D>("PhysicsPointQueryParameters3D")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<Vector3(PhysicsPointQueryParameters3D::*)()const>(&PhysicsPointQueryParameters3D::get_position),static_cast<void(PhysicsPointQueryParameters3D::*)(const Vector3 &)>(&PhysicsPointQueryParameters3D::set_position)>("position")
            .property<static_cast<uint32_t(PhysicsPointQueryParameters3D::*)()const>(&PhysicsPointQueryParameters3D::get_collision_mask),static_cast<void(PhysicsPointQueryParameters3D::*)(uint32_t)>(&PhysicsPointQueryParameters3D::set_collision_mask)>("collision_mask")
            .property<static_cast<TypedArray<RID>(PhysicsPointQueryParameters3D::*)()const>(&PhysicsPointQueryParameters3D::get_exclude),static_cast<void(PhysicsPointQueryParameters3D::*)(const TypedArray<RID> &)>(&PhysicsPointQueryParameters3D::set_exclude)>("exclude")
            .property<static_cast<bool(PhysicsPointQueryParameters3D::*)()const>(&PhysicsPointQueryParameters3D::is_collide_with_bodies_enabled),static_cast<void(PhysicsPointQueryParameters3D::*)(bool)>(&PhysicsPointQueryParameters3D::set_collide_with_bodies)>("collide_with_bodies")
            .property<static_cast<bool(PhysicsPointQueryParameters3D::*)()const>(&PhysicsPointQueryParameters3D::is_collide_with_areas_enabled),static_cast<void(PhysicsPointQueryParameters3D::*)(bool)>(&PhysicsPointQueryParameters3D::set_collide_with_areas)>("collide_with_areas")
;}
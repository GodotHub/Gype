#include <godot_cpp/classes/physics_ray_query_parameters3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PhysicsRayQueryParameters3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PhysicsRayQueryParameters3D>("PhysicsRayQueryParameters3D")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<Vector3(PhysicsRayQueryParameters3D::*)()const>(&PhysicsRayQueryParameters3D::get_from),static_cast<void(PhysicsRayQueryParameters3D::*)(const Vector3 &)>(&PhysicsRayQueryParameters3D::set_from)>("from")
            .property<static_cast<Vector3(PhysicsRayQueryParameters3D::*)()const>(&PhysicsRayQueryParameters3D::get_to),static_cast<void(PhysicsRayQueryParameters3D::*)(const Vector3 &)>(&PhysicsRayQueryParameters3D::set_to)>("to")
            .property<static_cast<uint32_t(PhysicsRayQueryParameters3D::*)()const>(&PhysicsRayQueryParameters3D::get_collision_mask),static_cast<void(PhysicsRayQueryParameters3D::*)(uint32_t)>(&PhysicsRayQueryParameters3D::set_collision_mask)>("collision_mask")
            .property<static_cast<TypedArray<RID>(PhysicsRayQueryParameters3D::*)()const>(&PhysicsRayQueryParameters3D::get_exclude),static_cast<void(PhysicsRayQueryParameters3D::*)(const TypedArray<RID> &)>(&PhysicsRayQueryParameters3D::set_exclude)>("exclude")
            .property<static_cast<bool(PhysicsRayQueryParameters3D::*)()const>(&PhysicsRayQueryParameters3D::is_collide_with_bodies_enabled),static_cast<void(PhysicsRayQueryParameters3D::*)(bool)>(&PhysicsRayQueryParameters3D::set_collide_with_bodies)>("collide_with_bodies")
            .property<static_cast<bool(PhysicsRayQueryParameters3D::*)()const>(&PhysicsRayQueryParameters3D::is_collide_with_areas_enabled),static_cast<void(PhysicsRayQueryParameters3D::*)(bool)>(&PhysicsRayQueryParameters3D::set_collide_with_areas)>("collide_with_areas")
            .property<static_cast<bool(PhysicsRayQueryParameters3D::*)()const>(&PhysicsRayQueryParameters3D::is_hit_from_inside_enabled),static_cast<void(PhysicsRayQueryParameters3D::*)(bool)>(&PhysicsRayQueryParameters3D::set_hit_from_inside)>("hit_from_inside")
            .property<static_cast<bool(PhysicsRayQueryParameters3D::*)()const>(&PhysicsRayQueryParameters3D::is_hit_back_faces_enabled),static_cast<void(PhysicsRayQueryParameters3D::*)(bool)>(&PhysicsRayQueryParameters3D::set_hit_back_faces)>("hit_back_faces")
            .static_fun<static_cast<Ref<PhysicsRayQueryParameters3D>(*)(const Vector3 &,const Vector3 &,uint32_t,const TypedArray<RID> &)>(&PhysicsRayQueryParameters3D::create)>("create")
;}
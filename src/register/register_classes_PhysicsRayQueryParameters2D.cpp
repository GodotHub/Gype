#include <godot_cpp/classes/physics_ray_query_parameters2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PhysicsRayQueryParameters2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PhysicsRayQueryParameters2D>("PhysicsRayQueryParameters2D")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<Vector2(PhysicsRayQueryParameters2D::*)()const>(&PhysicsRayQueryParameters2D::get_from),static_cast<void(PhysicsRayQueryParameters2D::*)(const Vector2 &)>(&PhysicsRayQueryParameters2D::set_from)>("from")
            .property<static_cast<Vector2(PhysicsRayQueryParameters2D::*)()const>(&PhysicsRayQueryParameters2D::get_to),static_cast<void(PhysicsRayQueryParameters2D::*)(const Vector2 &)>(&PhysicsRayQueryParameters2D::set_to)>("to")
            .property<static_cast<uint32_t(PhysicsRayQueryParameters2D::*)()const>(&PhysicsRayQueryParameters2D::get_collision_mask),static_cast<void(PhysicsRayQueryParameters2D::*)(uint32_t)>(&PhysicsRayQueryParameters2D::set_collision_mask)>("collision_mask")
            .property<static_cast<TypedArray<RID>(PhysicsRayQueryParameters2D::*)()const>(&PhysicsRayQueryParameters2D::get_exclude),static_cast<void(PhysicsRayQueryParameters2D::*)(const TypedArray<RID> &)>(&PhysicsRayQueryParameters2D::set_exclude)>("exclude")
            .property<static_cast<bool(PhysicsRayQueryParameters2D::*)()const>(&PhysicsRayQueryParameters2D::is_collide_with_bodies_enabled),static_cast<void(PhysicsRayQueryParameters2D::*)(bool)>(&PhysicsRayQueryParameters2D::set_collide_with_bodies)>("collide_with_bodies")
            .property<static_cast<bool(PhysicsRayQueryParameters2D::*)()const>(&PhysicsRayQueryParameters2D::is_collide_with_areas_enabled),static_cast<void(PhysicsRayQueryParameters2D::*)(bool)>(&PhysicsRayQueryParameters2D::set_collide_with_areas)>("collide_with_areas")
            .property<static_cast<bool(PhysicsRayQueryParameters2D::*)()const>(&PhysicsRayQueryParameters2D::is_hit_from_inside_enabled),static_cast<void(PhysicsRayQueryParameters2D::*)(bool)>(&PhysicsRayQueryParameters2D::set_hit_from_inside)>("hit_from_inside")
            .static_fun<static_cast<Ref<PhysicsRayQueryParameters2D>(*)(const Vector2 &,const Vector2 &,uint32_t,const TypedArray<RID> &)>(&PhysicsRayQueryParameters2D::create)>("create")
;}
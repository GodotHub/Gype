
#include <godot_cpp/classes/physics_ray_query_parameters2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsRayQueryParameters2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsRayQueryParameters2D>("PhysicsRayQueryParameters2D")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<Vector2 (PhysicsRayQueryParameters2D::*)() const>(&PhysicsRayQueryParameters2D::get_from), static_cast<void (PhysicsRayQueryParameters2D::*)(const Vector2 &)>(&PhysicsRayQueryParameters2D::set_from)>((new std::string("from"))->c_str())
			.property<static_cast<Vector2 (PhysicsRayQueryParameters2D::*)() const>(&PhysicsRayQueryParameters2D::get_to), static_cast<void (PhysicsRayQueryParameters2D::*)(const Vector2 &)>(&PhysicsRayQueryParameters2D::set_to)>((new std::string("to"))->c_str())
			.property<static_cast<uint32_t (PhysicsRayQueryParameters2D::*)() const>(&PhysicsRayQueryParameters2D::get_collision_mask), static_cast<void (PhysicsRayQueryParameters2D::*)(uint32_t)>(&PhysicsRayQueryParameters2D::set_collision_mask)>((new std::string("collision_mask"))->c_str())
			.property<static_cast<TypedArray<RID> (PhysicsRayQueryParameters2D::*)() const>(&PhysicsRayQueryParameters2D::get_exclude), static_cast<void (PhysicsRayQueryParameters2D::*)(const TypedArray<RID> &)>(&PhysicsRayQueryParameters2D::set_exclude)>((new std::string("exclude"))->c_str())
			.property<static_cast<bool (PhysicsRayQueryParameters2D::*)() const>(&PhysicsRayQueryParameters2D::is_collide_with_bodies_enabled), static_cast<void (PhysicsRayQueryParameters2D::*)(bool)>(&PhysicsRayQueryParameters2D::set_collide_with_bodies)>((new std::string("collide_with_bodies"))->c_str())
			.property<static_cast<bool (PhysicsRayQueryParameters2D::*)() const>(&PhysicsRayQueryParameters2D::is_collide_with_areas_enabled), static_cast<void (PhysicsRayQueryParameters2D::*)(bool)>(&PhysicsRayQueryParameters2D::set_collide_with_areas)>((new std::string("collide_with_areas"))->c_str())
			.property<static_cast<bool (PhysicsRayQueryParameters2D::*)() const>(&PhysicsRayQueryParameters2D::is_hit_from_inside_enabled), static_cast<void (PhysicsRayQueryParameters2D::*)(bool)>(&PhysicsRayQueryParameters2D::set_hit_from_inside)>((new std::string("hit_from_inside"))->c_str())
			.static_fun<static_cast<Ref<PhysicsRayQueryParameters2D> (*)(const Vector2 &, const Vector2 &, uint32_t, const TypedArray<RID> &)>(&PhysicsRayQueryParameters2D::create)>((new std::string("create"))->c_str());
}
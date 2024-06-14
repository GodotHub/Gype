
#include <godot_cpp/classes/physics_point_query_parameters2d.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsPointQueryParameters2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsPointQueryParameters2D>("PhysicsPointQueryParameters2D")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<Vector2 (PhysicsPointQueryParameters2D::*)() const>(&PhysicsPointQueryParameters2D::get_position), static_cast<void (PhysicsPointQueryParameters2D::*)(const Vector2 &)>(&PhysicsPointQueryParameters2D::set_position)>((new std::string("position"))->c_str())
			.property<static_cast<uint64_t (PhysicsPointQueryParameters2D::*)() const>(&PhysicsPointQueryParameters2D::get_canvas_instance_id), static_cast<void (PhysicsPointQueryParameters2D::*)(uint64_t)>(&PhysicsPointQueryParameters2D::set_canvas_instance_id)>((new std::string("canvas_instance_id"))->c_str())
			.property<static_cast<uint32_t (PhysicsPointQueryParameters2D::*)() const>(&PhysicsPointQueryParameters2D::get_collision_mask), static_cast<void (PhysicsPointQueryParameters2D::*)(uint32_t)>(&PhysicsPointQueryParameters2D::set_collision_mask)>((new std::string("collision_mask"))->c_str())
			.property<static_cast<TypedArray<RID> (PhysicsPointQueryParameters2D::*)() const>(&PhysicsPointQueryParameters2D::get_exclude), static_cast<void (PhysicsPointQueryParameters2D::*)(const TypedArray<RID> &)>(&PhysicsPointQueryParameters2D::set_exclude)>((new std::string("exclude"))->c_str())
			.property<static_cast<bool (PhysicsPointQueryParameters2D::*)() const>(&PhysicsPointQueryParameters2D::is_collide_with_bodies_enabled), static_cast<void (PhysicsPointQueryParameters2D::*)(bool)>(&PhysicsPointQueryParameters2D::set_collide_with_bodies)>((new std::string("collide_with_bodies"))->c_str())
			.property<static_cast<bool (PhysicsPointQueryParameters2D::*)() const>(&PhysicsPointQueryParameters2D::is_collide_with_areas_enabled), static_cast<void (PhysicsPointQueryParameters2D::*)(bool)>(&PhysicsPointQueryParameters2D::set_collide_with_areas)>((new std::string("collide_with_areas"))->c_str());
}
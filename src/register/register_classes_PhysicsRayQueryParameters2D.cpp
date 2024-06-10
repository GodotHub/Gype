#include <godot_cpp/classes/physics_ray_query_parameters2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsRayQueryParameters2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsRayQueryParameters2D>("PhysicsRayQueryParameters2D")
			.constructor<>()
			.property<&PhysicsRayQueryParameters2D::get_from, &PhysicsRayQueryParameters2D::set_from>("from")
			.property<&PhysicsRayQueryParameters2D::get_to, &PhysicsRayQueryParameters2D::set_to>("to")
			.property<&PhysicsRayQueryParameters2D::get_collision_mask, &PhysicsRayQueryParameters2D::set_collision_mask>("collision_mask")
			.property<&PhysicsRayQueryParameters2D::get_exclude, &PhysicsRayQueryParameters2D::set_exclude>("exclude")
			.property<&PhysicsRayQueryParameters2D::is_collide_with_bodies_enabled, &PhysicsRayQueryParameters2D::set_collide_with_bodies>("collide_with_bodies")
			.property<&PhysicsRayQueryParameters2D::is_collide_with_areas_enabled, &PhysicsRayQueryParameters2D::set_collide_with_areas>("collide_with_areas")
			.property<&PhysicsRayQueryParameters2D::is_hit_from_inside_enabled, &PhysicsRayQueryParameters2D::set_hit_from_inside>("hit_from_inside")
			.static_fun<&PhysicsRayQueryParameters2D::create>("create");
}
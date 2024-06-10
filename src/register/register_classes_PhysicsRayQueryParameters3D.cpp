#include <godot_cpp/classes/physics_ray_query_parameters3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsRayQueryParameters3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsRayQueryParameters3D>("PhysicsRayQueryParameters3D")
			.constructor<>()
			.property<&PhysicsRayQueryParameters3D::get_from, &PhysicsRayQueryParameters3D::set_from>("from")
			.property<&PhysicsRayQueryParameters3D::get_to, &PhysicsRayQueryParameters3D::set_to>("to")
			.property<&PhysicsRayQueryParameters3D::get_collision_mask, &PhysicsRayQueryParameters3D::set_collision_mask>("collision_mask")
			.property<&PhysicsRayQueryParameters3D::get_exclude, &PhysicsRayQueryParameters3D::set_exclude>("exclude")
			.property<&PhysicsRayQueryParameters3D::is_collide_with_bodies_enabled, &PhysicsRayQueryParameters3D::set_collide_with_bodies>("collide_with_bodies")
			.property<&PhysicsRayQueryParameters3D::is_collide_with_areas_enabled, &PhysicsRayQueryParameters3D::set_collide_with_areas>("collide_with_areas")
			.property<&PhysicsRayQueryParameters3D::is_hit_from_inside_enabled, &PhysicsRayQueryParameters3D::set_hit_from_inside>("hit_from_inside")
			.property<&PhysicsRayQueryParameters3D::is_hit_back_faces_enabled, &PhysicsRayQueryParameters3D::set_hit_back_faces>("hit_back_faces")
			.static_fun<&PhysicsRayQueryParameters3D::create>("create");
}
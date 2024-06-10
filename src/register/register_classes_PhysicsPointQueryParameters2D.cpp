#include <godot_cpp/classes/physics_point_query_parameters2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsPointQueryParameters2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsPointQueryParameters2D>("PhysicsPointQueryParameters2D")
			.constructor<>()
			.property<&PhysicsPointQueryParameters2D::get_position, &PhysicsPointQueryParameters2D::set_position>("position")
			.property<&PhysicsPointQueryParameters2D::get_canvas_instance_id, &PhysicsPointQueryParameters2D::set_canvas_instance_id>("canvas_instance_id")
			.property<&PhysicsPointQueryParameters2D::get_collision_mask, &PhysicsPointQueryParameters2D::set_collision_mask>("collision_mask")
			.property<&PhysicsPointQueryParameters2D::get_exclude, &PhysicsPointQueryParameters2D::set_exclude>("exclude")
			.property<&PhysicsPointQueryParameters2D::is_collide_with_bodies_enabled, &PhysicsPointQueryParameters2D::set_collide_with_bodies>("collide_with_bodies")
			.property<&PhysicsPointQueryParameters2D::is_collide_with_areas_enabled, &PhysicsPointQueryParameters2D::set_collide_with_areas>("collide_with_areas");
}
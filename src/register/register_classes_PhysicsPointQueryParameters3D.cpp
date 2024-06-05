#include <godot_cpp/classes/physics_point_query_parameters3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_PhysicsPointQueryParameters3D() {
	qjs::Context::Module &_module = _General;
	_module.class_<PhysicsPointQueryParameters3D>("PhysicsPointQueryParameters3D")
			.constructor<>()
			.property<&PhysicsPointQueryParameters3D::get_position, &PhysicsPointQueryParameters3D::set_position>("position")
			.property<&PhysicsPointQueryParameters3D::get_collision_mask, &PhysicsPointQueryParameters3D::set_collision_mask>("collision_mask")
			.property<&PhysicsPointQueryParameters3D::get_exclude, &PhysicsPointQueryParameters3D::set_exclude>("exclude")
			.property<&PhysicsPointQueryParameters3D::is_collide_with_bodies_enabled, &PhysicsPointQueryParameters3D::set_collide_with_bodies>("collide_with_bodies")
			.property<&PhysicsPointQueryParameters3D::is_collide_with_areas_enabled, &PhysicsPointQueryParameters3D::set_collide_with_areas>("collide_with_areas");
}
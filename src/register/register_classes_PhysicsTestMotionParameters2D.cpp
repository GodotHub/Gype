#include <godot_cpp/classes/physics_test_motion_parameters2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsTestMotionParameters2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsTestMotionParameters2D>("PhysicsTestMotionParameters2D")
			.constructor<>()
			.property<&PhysicsTestMotionParameters2D::get_from, &PhysicsTestMotionParameters2D::set_from>("from")
			.property<&PhysicsTestMotionParameters2D::get_motion, &PhysicsTestMotionParameters2D::set_motion>("motion")
			.property<&PhysicsTestMotionParameters2D::get_margin, &PhysicsTestMotionParameters2D::set_margin>("margin")
			.property<&PhysicsTestMotionParameters2D::is_collide_separation_ray_enabled, &PhysicsTestMotionParameters2D::set_collide_separation_ray_enabled>("collide_separation_ray")
			.property<&PhysicsTestMotionParameters2D::get_exclude_bodies, &PhysicsTestMotionParameters2D::set_exclude_bodies>("exclude_bodies")
			.property<&PhysicsTestMotionParameters2D::get_exclude_objects, &PhysicsTestMotionParameters2D::set_exclude_objects>("exclude_objects")
			.property<&PhysicsTestMotionParameters2D::is_recovery_as_collision_enabled, &PhysicsTestMotionParameters2D::set_recovery_as_collision_enabled>("recovery_as_collision");
}
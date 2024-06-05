#include <godot_cpp/classes/physics_test_motion_parameters3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_PhysicsTestMotionParameters3D() {
	qjs::Context::Module &_module = _General;
	_module.class_<PhysicsTestMotionParameters3D>("PhysicsTestMotionParameters3D")
			.constructor<>()
			.property<&PhysicsTestMotionParameters3D::get_from, &PhysicsTestMotionParameters3D::set_from>("from")
			.property<&PhysicsTestMotionParameters3D::get_motion, &PhysicsTestMotionParameters3D::set_motion>("motion")
			.property<&PhysicsTestMotionParameters3D::get_margin, &PhysicsTestMotionParameters3D::set_margin>("margin")
			.property<&PhysicsTestMotionParameters3D::get_max_collisions, &PhysicsTestMotionParameters3D::set_max_collisions>("max_collisions")
			.property<&PhysicsTestMotionParameters3D::is_collide_separation_ray_enabled, &PhysicsTestMotionParameters3D::set_collide_separation_ray_enabled>("collide_separation_ray")
			.property<&PhysicsTestMotionParameters3D::get_exclude_bodies, &PhysicsTestMotionParameters3D::set_exclude_bodies>("exclude_bodies")
			.property<&PhysicsTestMotionParameters3D::get_exclude_objects, &PhysicsTestMotionParameters3D::set_exclude_objects>("exclude_objects")
			.property<&PhysicsTestMotionParameters3D::is_recovery_as_collision_enabled, &PhysicsTestMotionParameters3D::set_recovery_as_collision_enabled>("recovery_as_collision");
}
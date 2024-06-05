#include <godot_cpp/classes/physics_shape_query_parameters2d.hpp>
#include <godot_cpp/classes/resource.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsShapeQueryParameters2D() {
	qjs::Context::Module &_module = _General;
	_module.class_<PhysicsShapeQueryParameters2D>("PhysicsShapeQueryParameters2D")
			.constructor<>()
			.property<&PhysicsShapeQueryParameters2D::get_collision_mask, &PhysicsShapeQueryParameters2D::set_collision_mask>("collision_mask")
			.property<&PhysicsShapeQueryParameters2D::get_exclude, &PhysicsShapeQueryParameters2D::set_exclude>("exclude")
			.property<&PhysicsShapeQueryParameters2D::get_margin, &PhysicsShapeQueryParameters2D::set_margin>("margin")
			.property<&PhysicsShapeQueryParameters2D::get_motion, &PhysicsShapeQueryParameters2D::set_motion>("motion")
			.property<&PhysicsShapeQueryParameters2D::get_shape, &PhysicsShapeQueryParameters2D::set_shape>("shape")
			.property<&PhysicsShapeQueryParameters2D::get_shape_rid, &PhysicsShapeQueryParameters2D::set_shape_rid>("shape_rid")
			.property<&PhysicsShapeQueryParameters2D::get_transform, &PhysicsShapeQueryParameters2D::set_transform>("transform")
			.property<&PhysicsShapeQueryParameters2D::is_collide_with_bodies_enabled, &PhysicsShapeQueryParameters2D::set_collide_with_bodies>("collide_with_bodies")
			.property<&PhysicsShapeQueryParameters2D::is_collide_with_areas_enabled, &PhysicsShapeQueryParameters2D::set_collide_with_areas>("collide_with_areas");
}
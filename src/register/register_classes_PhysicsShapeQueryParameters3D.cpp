#include <godot_cpp/classes/physics_shape_query_parameters3d.hpp>
#include <godot_cpp/classes/resource.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsShapeQueryParameters3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsShapeQueryParameters3D>("PhysicsShapeQueryParameters3D")
			.constructor<>()
			.property<&PhysicsShapeQueryParameters3D::get_collision_mask, &PhysicsShapeQueryParameters3D::set_collision_mask>("collision_mask")
			.property<&PhysicsShapeQueryParameters3D::get_exclude, &PhysicsShapeQueryParameters3D::set_exclude>("exclude")
			.property<&PhysicsShapeQueryParameters3D::get_margin, &PhysicsShapeQueryParameters3D::set_margin>("margin")
			.property<&PhysicsShapeQueryParameters3D::get_motion, &PhysicsShapeQueryParameters3D::set_motion>("motion")
			.property<&PhysicsShapeQueryParameters3D::get_shape, &PhysicsShapeQueryParameters3D::set_shape>("shape")
			.property<&PhysicsShapeQueryParameters3D::get_shape_rid, &PhysicsShapeQueryParameters3D::set_shape_rid>("shape_rid")
			.property<&PhysicsShapeQueryParameters3D::get_transform, &PhysicsShapeQueryParameters3D::set_transform>("transform")
			.property<&PhysicsShapeQueryParameters3D::is_collide_with_bodies_enabled, &PhysicsShapeQueryParameters3D::set_collide_with_bodies>("collide_with_bodies")
			.property<&PhysicsShapeQueryParameters3D::is_collide_with_areas_enabled, &PhysicsShapeQueryParameters3D::set_collide_with_areas>("collide_with_areas");
}
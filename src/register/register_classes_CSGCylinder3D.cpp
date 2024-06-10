#include <godot_cpp/classes/csg_cylinder3d.hpp>
#include <godot_cpp/classes/material.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CSGCylinder3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<CSGCylinder3D>("CSGCylinder3D")
			.constructor<>()
			.property<&CSGCylinder3D::get_radius, &CSGCylinder3D::set_radius>("radius")
			.property<&CSGCylinder3D::get_height, &CSGCylinder3D::set_height>("height")
			.property<&CSGCylinder3D::get_sides, &CSGCylinder3D::set_sides>("sides")
			.property<&CSGCylinder3D::is_cone, &CSGCylinder3D::set_cone>("cone")
			.property<&CSGCylinder3D::get_smooth_faces, &CSGCylinder3D::set_smooth_faces>("smooth_faces")
			.property<&CSGCylinder3D::get_material, &CSGCylinder3D::set_material>("material");
}
#include <godot_cpp/classes/csg_torus3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"
#include <godot_cpp/classes/material.hpp>

using namespace godot;

void register_classes_CSGTorus3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<CSGTorus3D>("CSGTorus3D")
			.constructor<>()
			.property<&CSGTorus3D::get_inner_radius, &CSGTorus3D::set_inner_radius>("inner_radius")
			.property<&CSGTorus3D::get_outer_radius, &CSGTorus3D::set_outer_radius>("outer_radius")
			.property<&CSGTorus3D::get_sides, &CSGTorus3D::set_sides>("sides")
			.property<&CSGTorus3D::get_ring_sides, &CSGTorus3D::set_ring_sides>("ring_sides")
			.property<&CSGTorus3D::get_smooth_faces, &CSGTorus3D::set_smooth_faces>("smooth_faces")
			.property<&CSGTorus3D::get_material, &CSGTorus3D::set_material>("material");
}
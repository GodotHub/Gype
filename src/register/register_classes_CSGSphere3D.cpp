#include <godot_cpp/classes/csg_sphere3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"
#include <godot_cpp/classes/material.hpp>

using namespace godot;

void register_classes_CSGSphere3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<CSGSphere3D>("CSGSphere3D")
			.constructor<>()
			.property<&CSGSphere3D::get_radius, &CSGSphere3D::set_radius>("radius")
			.property<&CSGSphere3D::get_radial_segments, &CSGSphere3D::set_radial_segments>("radial_segments")
			.property<&CSGSphere3D::get_rings, &CSGSphere3D::set_rings>("rings")
			.property<&CSGSphere3D::get_smooth_faces, &CSGSphere3D::set_smooth_faces>("smooth_faces")
			.property<&CSGSphere3D::get_material, &CSGSphere3D::set_material>("material");
}
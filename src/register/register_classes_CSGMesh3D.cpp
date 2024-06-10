#include <godot_cpp/classes/csg_mesh3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CSGMesh3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<CSGMesh3D>("CSGMesh3D")
			.constructor<>()
			.property<&CSGMesh3D::get_mesh, &CSGMesh3D::set_mesh>("mesh")
			.property<&CSGMesh3D::get_material, &CSGMesh3D::set_material>("material");
}
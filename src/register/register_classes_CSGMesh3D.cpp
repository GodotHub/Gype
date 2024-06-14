#include <godot_cpp/classes/csg_mesh3d.hpp>
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CSGMesh3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<CSGMesh3D>("CSGMesh3D")
			.constructor<>()
			.base<CSGPrimitive3D>()
			.property<static_cast<Ref<Mesh> (CSGMesh3D::*)()>(&CSGMesh3D::get_mesh), static_cast<void (CSGMesh3D::*)(const Ref<Mesh> &)>(&CSGMesh3D::set_mesh)>((new std::string("mesh"))->c_str())
			.property<static_cast<Ref<Material> (CSGMesh3D::*)() const>(&CSGMesh3D::get_material), static_cast<void (CSGMesh3D::*)(const Ref<Material> &)>(&CSGMesh3D::set_material)>((new std::string("material"))->c_str());
}
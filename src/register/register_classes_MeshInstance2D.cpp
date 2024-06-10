#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/mesh_instance2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MeshInstance2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<MeshInstance2D>("MeshInstance2D")
			.constructor<>()
			.property<&MeshInstance2D::get_mesh, &MeshInstance2D::set_mesh>("mesh")
			.property<&MeshInstance2D::get_texture, &MeshInstance2D::set_texture>("texture");
}
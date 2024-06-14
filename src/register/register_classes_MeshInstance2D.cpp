#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/mesh_instance2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MeshInstance2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<MeshInstance2D>("MeshInstance2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<Ref<Mesh> (MeshInstance2D::*)() const>(&MeshInstance2D::get_mesh), static_cast<void (MeshInstance2D::*)(const Ref<Mesh> &)>(&MeshInstance2D::set_mesh)>((new std::string("mesh"))->c_str())
			.property<static_cast<Ref<Texture2D> (MeshInstance2D::*)() const>(&MeshInstance2D::get_texture), static_cast<void (MeshInstance2D::*)(const Ref<Texture2D> &)>(&MeshInstance2D::set_texture)>((new std::string("texture"))->c_str());
}
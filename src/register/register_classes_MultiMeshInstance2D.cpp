#include <godot_cpp/classes/multi_mesh.hpp>
#include <godot_cpp/classes/multi_mesh_instance2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MultiMeshInstance2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<MultiMeshInstance2D>("MultiMeshInstance2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<Ref<MultiMesh> (MultiMeshInstance2D::*)() const>(&MultiMeshInstance2D::get_multimesh), static_cast<void (MultiMeshInstance2D::*)(const Ref<MultiMesh> &)>(&MultiMeshInstance2D::set_multimesh)>((new std::string("multimesh"))->c_str())
			.property<static_cast<Ref<Texture2D> (MultiMeshInstance2D::*)() const>(&MultiMeshInstance2D::get_texture), static_cast<void (MultiMeshInstance2D::*)(const Ref<Texture2D> &)>(&MultiMeshInstance2D::set_texture)>((new std::string("texture"))->c_str());
}
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/multi_mesh.hpp>
#include <godot_cpp/classes/multi_mesh_instance3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MultiMeshInstance3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<MultiMeshInstance3D>("MultiMeshInstance3D")
			.constructor<>()
			.base<GeometryInstance3D>()
			.property<static_cast<Ref<MultiMesh> (MultiMeshInstance3D::*)() const>(&MultiMeshInstance3D::get_multimesh), static_cast<void (MultiMeshInstance3D::*)(const Ref<MultiMesh> &)>(&MultiMeshInstance3D::set_multimesh)>((new std::string("multimesh"))->c_str());
}
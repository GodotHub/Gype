#include <godot_cpp/classes/multi_mesh.hpp>
#include <godot_cpp/classes/multi_mesh_instance3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MultiMeshInstance3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<MultiMeshInstance3D>("MultiMeshInstance3D")
			.constructor<>()
			.property<&MultiMeshInstance3D::get_multimesh, &MultiMeshInstance3D::set_multimesh>("multimesh");
}
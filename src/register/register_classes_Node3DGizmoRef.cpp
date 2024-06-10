#include "register/register_classes.h"
#include <godot_cpp/classes/node3d_gizmo.hpp>

using namespace godot;

void register_classes_Node3DGizmoRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Node3DGizmo>>("Node3DGizmoRef").constructor<Node3DGizmo *>();
}
#include "register/register_classes.h"
#include <godot_cpp/classes/editor_node3d_gizmo.hpp>

using namespace godot;

void register_classes_EditorNode3DGizmoRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorNode3DGizmo>>("EditorNode3DGizmoRef").constructor<EditorNode3DGizmo *>();
}
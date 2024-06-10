#include "register/register_classes.h"
#include <godot_cpp/classes/editor_node3d_gizmo_plugin.hpp>

using namespace godot;

void register_classes_EditorNode3DGizmoPluginRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorNode3DGizmoPlugin>>("EditorNode3DGizmoPluginRef").constructor<EditorNode3DGizmoPlugin *>();
}
#include "register/register_classes.h"
#include <godot_cpp/classes/mesh_data_tool.hpp>

using namespace godot;

void register_classes_MeshDataToolRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<MeshDataTool>>("MeshDataToolRef").constructor<MeshDataTool *>();
}
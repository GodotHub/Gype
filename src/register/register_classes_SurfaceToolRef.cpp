#include "register/register_classes.h"
#include <godot_cpp/classes/surface_tool.hpp>

using namespace godot;

void register_classes_SurfaceToolRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SurfaceTool>>("SurfaceToolRef").constructor<SurfaceTool *>();
}
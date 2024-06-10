#include <godot_cpp/classes/quad_mesh.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_QuadMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<QuadMesh>("QuadMesh")
			.constructor<>();
}
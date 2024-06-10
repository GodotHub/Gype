#include <godot_cpp/classes/triangle_mesh.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TriangleMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TriangleMesh>("TriangleMesh")
			.constructor<>();
}
#include <godot_cpp/classes/csg_combiner3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CSGCombiner3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<CSGCombiner3D>("CSGCombiner3D")
			.constructor<>();
}
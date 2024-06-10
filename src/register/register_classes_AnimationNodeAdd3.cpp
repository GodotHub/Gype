#include <godot_cpp/classes/animation_node_add3.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNodeAdd3() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationNodeAdd3>("AnimationNodeAdd3")
			.constructor<>();
}
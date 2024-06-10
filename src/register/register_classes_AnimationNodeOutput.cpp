#include <godot_cpp/classes/animation_node_output.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNodeOutput() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationNodeOutput>("AnimationNodeOutput")
			.constructor<>();
}
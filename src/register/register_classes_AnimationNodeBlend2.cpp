#include <godot_cpp/classes/animation_node_blend2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNodeBlend2() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationNodeBlend2>("AnimationNodeBlend2")
			.constructor<>();
}
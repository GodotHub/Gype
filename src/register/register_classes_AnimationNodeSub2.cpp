#include <godot_cpp/classes/animation_node_sub2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNodeSub2() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationNodeSub2>("AnimationNodeSub2")
			.constructor<>();
}
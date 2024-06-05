#include <godot_cpp/classes/animation_node_blend3.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AnimationNodeBlend3() {
	qjs::Context::Module &_module = _General;
	_module.class_<AnimationNodeBlend3>("AnimationNodeBlend3")
			.constructor<>();
}
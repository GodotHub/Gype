#include <godot_cpp/classes/animation_node_animation.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNodeAnimation() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationNodeAnimation>("AnimationNodeAnimation")
			.constructor<>()
			.property<&AnimationNodeAnimation::get_animation, &AnimationNodeAnimation::set_animation>("animation")
			.property<&AnimationNodeAnimation::get_play_mode, &AnimationNodeAnimation::set_play_mode>("play_mode");
}
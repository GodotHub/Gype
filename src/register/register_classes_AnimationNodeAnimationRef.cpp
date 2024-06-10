#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_animation.hpp>

using namespace godot;

void register_classes_AnimationNodeAnimationRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNodeAnimation>>("AnimationNodeAnimationRef").constructor<AnimationNodeAnimation *>();
}
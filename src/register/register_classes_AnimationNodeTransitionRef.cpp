#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_transition.hpp>

using namespace godot;

void register_classes_AnimationNodeTransitionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNodeTransition>>("AnimationNodeTransitionRef").constructor<AnimationNodeTransition *>();
}
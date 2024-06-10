#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_state_machine_transition.hpp>

using namespace godot;

void register_classes_AnimationNodeStateMachineTransitionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNodeStateMachineTransition>>("AnimationNodeStateMachineTransitionRef").constructor<AnimationNodeStateMachineTransition *>();
}
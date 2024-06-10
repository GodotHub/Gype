#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_state_machine.hpp>

using namespace godot;

void register_classes_AnimationNodeStateMachineRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNodeStateMachine>>("AnimationNodeStateMachineRef").constructor<AnimationNodeStateMachine *>();
}
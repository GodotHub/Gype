#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_state_machine_playback.hpp>

using namespace godot;

void register_classes_AnimationNodeStateMachinePlaybackRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNodeStateMachinePlayback>>("AnimationNodeStateMachinePlaybackRef").constructor<AnimationNodeStateMachinePlayback *>();
}
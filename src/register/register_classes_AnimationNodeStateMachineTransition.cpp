#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/animation_node_state_machine_transition.hpp>

using namespace godot;

void register_classes_AnimationNodeStateMachineTransition() {
    qjs::Context::Module &_module = _General;
    _module.class_<AnimationNodeStateMachineTransition>("AnimationNodeStateMachineTransition")
           .constructor<>()
           .property<AnimationNodeStateMachineTransition::get_xfade_time, AnimationNodeStateMachineTransition::set_xfade_time>("xfade_time")
           .property<AnimationNodeStateMachineTransition::get_xfade_curve, AnimationNodeStateMachineTransition::set_xfade_curve>("xfade_curve")
           .property<AnimationNodeStateMachineTransition::is_reset, AnimationNodeStateMachineTransition::set_reset>("reset")
           .property<AnimationNodeStateMachineTransition::get_priority, AnimationNodeStateMachineTransition::set_priority>("priority")
           .property<AnimationNodeStateMachineTransition::get_switch_mode, AnimationNodeStateMachineTransition::set_switch_mode>("switch_mode")
           .property<AnimationNodeStateMachineTransition::get_advance_mode, AnimationNodeStateMachineTransition::set_advance_mode>("advance_mode")
           .property<AnimationNodeStateMachineTransition::get_advance_condition, AnimationNodeStateMachineTransition::set_advance_condition>("advance_condition")
           .property<AnimationNodeStateMachineTransition::get_advance_expression, AnimationNodeStateMachineTransition::set_advance_expression>("advance_expression")
;}
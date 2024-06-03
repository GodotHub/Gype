#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/animation_node_state_machine.hpp>

using namespace godot;

void register_classes_AnimationNodeStateMachine() {
    qjs::Context::Module &_module = _General;
    _module.class_<AnimationNodeStateMachine>("AnimationNodeStateMachine")
           .constructor<>()
           .property<AnimationNodeStateMachine::get_state_machine_type, AnimationNodeStateMachine::set_state_machine_type>("state_machine_type")
           .property<AnimationNodeStateMachine::is_allow_transition_to_self, AnimationNodeStateMachine::set_allow_transition_to_self>("allow_transition_to_self")
           .property<AnimationNodeStateMachine::are_ends_reset, AnimationNodeStateMachine::set_reset_ends>("reset_ends")
		    .fun<static_cast<void(AnimationNodeStateMachine::*)(const StringName &,const Ref<AnimationNode> &,const Vector2 &)>(&AnimationNodeStateMachine::add_node)>("add_node")
		    .fun<static_cast<void(AnimationNodeStateMachine::*)(const StringName &,const Ref<AnimationNode> &)>(&AnimationNodeStateMachine::replace_node)>("replace_node")
		    .fun<static_cast<Ref<AnimationNode>(AnimationNodeStateMachine::*)(const StringName &)const>(&AnimationNodeStateMachine::get_node)>("get_node")
		    .fun<static_cast<void(AnimationNodeStateMachine::*)(const StringName &)>(&AnimationNodeStateMachine::remove_node)>("remove_node")
		    .fun<static_cast<void(AnimationNodeStateMachine::*)(const StringName &,const StringName &)>(&AnimationNodeStateMachine::rename_node)>("rename_node")
		    .fun<static_cast<bool(AnimationNodeStateMachine::*)(const StringName &)const>(&AnimationNodeStateMachine::has_node)>("has_node")
		    .fun<static_cast<StringName(AnimationNodeStateMachine::*)(const Ref<AnimationNode> &)const>(&AnimationNodeStateMachine::get_node_name)>("get_node_name")
		    .fun<static_cast<void(AnimationNodeStateMachine::*)(const StringName &,const Vector2 &)>(&AnimationNodeStateMachine::set_node_position)>("set_node_position")
		    .fun<static_cast<Vector2(AnimationNodeStateMachine::*)(const StringName &)const>(&AnimationNodeStateMachine::get_node_position)>("get_node_position")
		    .fun<static_cast<bool(AnimationNodeStateMachine::*)(const StringName &,const StringName &)const>(&AnimationNodeStateMachine::has_transition)>("has_transition")
		    .fun<static_cast<void(AnimationNodeStateMachine::*)(const StringName &,const StringName &,const Ref<AnimationNodeStateMachineTransition> &)>(&AnimationNodeStateMachine::add_transition)>("add_transition")
		    .fun<static_cast<Ref<AnimationNodeStateMachineTransition>(AnimationNodeStateMachine::*)(int32_t)const>(&AnimationNodeStateMachine::get_transition)>("get_transition")
		    .fun<static_cast<StringName(AnimationNodeStateMachine::*)(int32_t)const>(&AnimationNodeStateMachine::get_transition_from)>("get_transition_from")
		    .fun<static_cast<StringName(AnimationNodeStateMachine::*)(int32_t)const>(&AnimationNodeStateMachine::get_transition_to)>("get_transition_to")
		    .fun<static_cast<int32_t(AnimationNodeStateMachine::*)()const>(&AnimationNodeStateMachine::get_transition_count)>("get_transition_count")
		    .fun<static_cast<void(AnimationNodeStateMachine::*)(int32_t)>(&AnimationNodeStateMachine::remove_transition_by_index)>("remove_transition_by_index")
		    .fun<static_cast<void(AnimationNodeStateMachine::*)(const StringName &,const StringName &)>(&AnimationNodeStateMachine::remove_transition)>("remove_transition")
		    .fun<static_cast<void(AnimationNodeStateMachine::*)(const Vector2 &)>(&AnimationNodeStateMachine::set_graph_offset)>("set_graph_offset")
		    .fun<static_cast<Vector2(AnimationNodeStateMachine::*)()const>(&AnimationNodeStateMachine::get_graph_offset)>("get_graph_offset")
;}
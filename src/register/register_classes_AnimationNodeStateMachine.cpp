#include <godot_cpp/classes/animation_node_state_machine.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/classes/animation_node_state_machine_transition.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimationNodeStateMachine() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AnimationNodeStateMachine>("AnimationNodeStateMachine")
            .constructor<>()
            .base<AnimationRootNode>()
            .property<static_cast<AnimationNodeStateMachine::StateMachineType(AnimationNodeStateMachine::*)()const>(&AnimationNodeStateMachine::get_state_machine_type),static_cast<void(AnimationNodeStateMachine::*)(AnimationNodeStateMachine::StateMachineType)>(&AnimationNodeStateMachine::set_state_machine_type)>("state_machine_type")
            .property<static_cast<bool(AnimationNodeStateMachine::*)()const>(&AnimationNodeStateMachine::is_allow_transition_to_self),static_cast<void(AnimationNodeStateMachine::*)(bool)>(&AnimationNodeStateMachine::set_allow_transition_to_self)>("allow_transition_to_self")
            .property<static_cast<bool(AnimationNodeStateMachine::*)()const>(&AnimationNodeStateMachine::are_ends_reset),static_cast<void(AnimationNodeStateMachine::*)(bool)>(&AnimationNodeStateMachine::set_reset_ends)>("reset_ends")
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
;    qjs::Value _StateMachineType = context->newObject();
    _StateMachineType["STATE_MACHINE_TYPE_ROOT"] = AnimationNodeStateMachine::StateMachineType::STATE_MACHINE_TYPE_ROOT;
    _StateMachineType["STATE_MACHINE_TYPE_NESTED"] = AnimationNodeStateMachine::StateMachineType::STATE_MACHINE_TYPE_NESTED;
    _StateMachineType["STATE_MACHINE_TYPE_GROUPED"] = AnimationNodeStateMachine::StateMachineType::STATE_MACHINE_TYPE_GROUPED;
    _module.add("StateMachineType", std::move(_StateMachineType));
}
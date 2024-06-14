
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/classes/animation_node_state_machine.hpp>
#include <godot_cpp/classes/animation_node_state_machine_transition.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNodeStateMachine() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationNodeStateMachine>("AnimationNodeStateMachine")
			.constructor<>()
			.base<AnimationRootNode>()
			.property<static_cast<AnimationNodeStateMachine::StateMachineType (AnimationNodeStateMachine::*)() const>(&AnimationNodeStateMachine::get_state_machine_type), static_cast<void (AnimationNodeStateMachine::*)(AnimationNodeStateMachine::StateMachineType)>(&AnimationNodeStateMachine::set_state_machine_type)>((new std::string("state_machine_type"))->c_str())
			.property<static_cast<bool (AnimationNodeStateMachine::*)() const>(&AnimationNodeStateMachine::is_allow_transition_to_self), static_cast<void (AnimationNodeStateMachine::*)(bool)>(&AnimationNodeStateMachine::set_allow_transition_to_self)>((new std::string("allow_transition_to_self"))->c_str())
			.property<static_cast<bool (AnimationNodeStateMachine::*)() const>(&AnimationNodeStateMachine::are_ends_reset), static_cast<void (AnimationNodeStateMachine::*)(bool)>(&AnimationNodeStateMachine::set_reset_ends)>((new std::string("reset_ends"))->c_str())
			.fun<static_cast<void (AnimationNodeStateMachine::*)(const StringName &, const Ref<AnimationNode> &, const Vector2 &)>(&AnimationNodeStateMachine::add_node)>((new std::string("add_node"))->c_str())
			.fun<static_cast<void (AnimationNodeStateMachine::*)(const StringName &, const Ref<AnimationNode> &)>(&AnimationNodeStateMachine::replace_node)>((new std::string("replace_node"))->c_str())
			.fun<static_cast<Ref<AnimationNode> (AnimationNodeStateMachine::*)(const StringName &) const>(&AnimationNodeStateMachine::get_node)>((new std::string("get_node"))->c_str())
			.fun<static_cast<void (AnimationNodeStateMachine::*)(const StringName &)>(&AnimationNodeStateMachine::remove_node)>((new std::string("remove_node"))->c_str())
			.fun<static_cast<void (AnimationNodeStateMachine::*)(const StringName &, const StringName &)>(&AnimationNodeStateMachine::rename_node)>((new std::string("rename_node"))->c_str())
			.fun<static_cast<bool (AnimationNodeStateMachine::*)(const StringName &) const>(&AnimationNodeStateMachine::has_node)>((new std::string("has_node"))->c_str())
			.fun<static_cast<StringName (AnimationNodeStateMachine::*)(const Ref<AnimationNode> &) const>(&AnimationNodeStateMachine::get_node_name)>((new std::string("get_node_name"))->c_str())
			.fun<static_cast<void (AnimationNodeStateMachine::*)(const StringName &, const Vector2 &)>(&AnimationNodeStateMachine::set_node_position)>((new std::string("set_node_position"))->c_str())
			.fun<static_cast<Vector2 (AnimationNodeStateMachine::*)(const StringName &) const>(&AnimationNodeStateMachine::get_node_position)>((new std::string("get_node_position"))->c_str())
			.fun<static_cast<bool (AnimationNodeStateMachine::*)(const StringName &, const StringName &) const>(&AnimationNodeStateMachine::has_transition)>((new std::string("has_transition"))->c_str())
			.fun<static_cast<void (AnimationNodeStateMachine::*)(const StringName &, const StringName &, const Ref<AnimationNodeStateMachineTransition> &)>(&AnimationNodeStateMachine::add_transition)>((new std::string("add_transition"))->c_str())
			.fun<static_cast<Ref<AnimationNodeStateMachineTransition> (AnimationNodeStateMachine::*)(int32_t) const>(&AnimationNodeStateMachine::get_transition)>((new std::string("get_transition"))->c_str())
			.fun<static_cast<StringName (AnimationNodeStateMachine::*)(int32_t) const>(&AnimationNodeStateMachine::get_transition_from)>((new std::string("get_transition_from"))->c_str())
			.fun<static_cast<StringName (AnimationNodeStateMachine::*)(int32_t) const>(&AnimationNodeStateMachine::get_transition_to)>((new std::string("get_transition_to"))->c_str())
			.fun<static_cast<int32_t (AnimationNodeStateMachine::*)() const>(&AnimationNodeStateMachine::get_transition_count)>((new std::string("get_transition_count"))->c_str())
			.fun<static_cast<void (AnimationNodeStateMachine::*)(int32_t)>(&AnimationNodeStateMachine::remove_transition_by_index)>((new std::string("remove_transition_by_index"))->c_str())
			.fun<static_cast<void (AnimationNodeStateMachine::*)(const StringName &, const StringName &)>(&AnimationNodeStateMachine::remove_transition)>((new std::string("remove_transition"))->c_str())
			.fun<static_cast<void (AnimationNodeStateMachine::*)(const Vector2 &)>(&AnimationNodeStateMachine::set_graph_offset)>((new std::string("set_graph_offset"))->c_str())
			.fun<static_cast<Vector2 (AnimationNodeStateMachine::*)() const>(&AnimationNodeStateMachine::get_graph_offset)>((new std::string("get_graph_offset"))->c_str());
	qjs::Value _StateMachineType = context->newObject();
	_StateMachineType[(new std::string("STATE_MACHINE_TYPE_ROOT"))->c_str()] = AnimationNodeStateMachine::StateMachineType::STATE_MACHINE_TYPE_ROOT;
	_StateMachineType[(new std::string("STATE_MACHINE_TYPE_NESTED"))->c_str()] = AnimationNodeStateMachine::StateMachineType::STATE_MACHINE_TYPE_NESTED;
	_StateMachineType[(new std::string("STATE_MACHINE_TYPE_GROUPED"))->c_str()] = AnimationNodeStateMachine::StateMachineType::STATE_MACHINE_TYPE_GROUPED;
	_module.add("StateMachineType", std::move(_StateMachineType));
}
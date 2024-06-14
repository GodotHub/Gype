
#include <godot_cpp/classes/animation_node_state_machine_transition.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNodeStateMachineTransition() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationNodeStateMachineTransition>("AnimationNodeStateMachineTransition")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<double (AnimationNodeStateMachineTransition::*)() const>(&AnimationNodeStateMachineTransition::get_xfade_time), static_cast<void (AnimationNodeStateMachineTransition::*)(double)>(&AnimationNodeStateMachineTransition::set_xfade_time)>((new std::string("xfade_time"))->c_str())
			.property<static_cast<Ref<Curve> (AnimationNodeStateMachineTransition::*)() const>(&AnimationNodeStateMachineTransition::get_xfade_curve), static_cast<void (AnimationNodeStateMachineTransition::*)(const Ref<Curve> &)>(&AnimationNodeStateMachineTransition::set_xfade_curve)>((new std::string("xfade_curve"))->c_str())
			.property<static_cast<bool (AnimationNodeStateMachineTransition::*)() const>(&AnimationNodeStateMachineTransition::is_loop_broken_at_end), static_cast<void (AnimationNodeStateMachineTransition::*)(bool)>(&AnimationNodeStateMachineTransition::set_break_loop_at_end)>((new std::string("break_loop_at_end"))->c_str())
			.property<static_cast<bool (AnimationNodeStateMachineTransition::*)() const>(&AnimationNodeStateMachineTransition::is_reset), static_cast<void (AnimationNodeStateMachineTransition::*)(bool)>(&AnimationNodeStateMachineTransition::set_reset)>((new std::string("reset"))->c_str())
			.property<static_cast<int32_t (AnimationNodeStateMachineTransition::*)() const>(&AnimationNodeStateMachineTransition::get_priority), static_cast<void (AnimationNodeStateMachineTransition::*)(int32_t)>(&AnimationNodeStateMachineTransition::set_priority)>((new std::string("priority"))->c_str())
			.property<static_cast<AnimationNodeStateMachineTransition::SwitchMode (AnimationNodeStateMachineTransition::*)() const>(&AnimationNodeStateMachineTransition::get_switch_mode), static_cast<void (AnimationNodeStateMachineTransition::*)(AnimationNodeStateMachineTransition::SwitchMode)>(&AnimationNodeStateMachineTransition::set_switch_mode)>((new std::string("switch_mode"))->c_str())
			.property<static_cast<AnimationNodeStateMachineTransition::AdvanceMode (AnimationNodeStateMachineTransition::*)() const>(&AnimationNodeStateMachineTransition::get_advance_mode), static_cast<void (AnimationNodeStateMachineTransition::*)(AnimationNodeStateMachineTransition::AdvanceMode)>(&AnimationNodeStateMachineTransition::set_advance_mode)>((new std::string("advance_mode"))->c_str())
			.property<static_cast<StringName (AnimationNodeStateMachineTransition::*)() const>(&AnimationNodeStateMachineTransition::get_advance_condition), static_cast<void (AnimationNodeStateMachineTransition::*)(const StringName &)>(&AnimationNodeStateMachineTransition::set_advance_condition)>((new std::string("advance_condition"))->c_str())
			.property<static_cast<String (AnimationNodeStateMachineTransition::*)() const>(&AnimationNodeStateMachineTransition::get_advance_expression), static_cast<void (AnimationNodeStateMachineTransition::*)(const String &)>(&AnimationNodeStateMachineTransition::set_advance_expression)>((new std::string("advance_expression"))->c_str());
	qjs::Value _SwitchMode = context->newObject();
	_SwitchMode[(new std::string("SWITCH_MODE_IMMEDIATE"))->c_str()] = AnimationNodeStateMachineTransition::SwitchMode::SWITCH_MODE_IMMEDIATE;
	_SwitchMode[(new std::string("SWITCH_MODE_SYNC"))->c_str()] = AnimationNodeStateMachineTransition::SwitchMode::SWITCH_MODE_SYNC;
	_SwitchMode[(new std::string("SWITCH_MODE_AT_END"))->c_str()] = AnimationNodeStateMachineTransition::SwitchMode::SWITCH_MODE_AT_END;
	_module.add("SwitchMode", std::move(_SwitchMode));
	qjs::Value _AdvanceMode = context->newObject();
	_AdvanceMode[(new std::string("ADVANCE_MODE_DISABLED"))->c_str()] = AnimationNodeStateMachineTransition::AdvanceMode::ADVANCE_MODE_DISABLED;
	_AdvanceMode[(new std::string("ADVANCE_MODE_ENABLED"))->c_str()] = AnimationNodeStateMachineTransition::AdvanceMode::ADVANCE_MODE_ENABLED;
	_AdvanceMode[(new std::string("ADVANCE_MODE_AUTO"))->c_str()] = AnimationNodeStateMachineTransition::AdvanceMode::ADVANCE_MODE_AUTO;
	_module.add("AdvanceMode", std::move(_AdvanceMode));
}
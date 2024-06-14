
#include <godot_cpp/classes/animation_node_sync.hpp>
#include <godot_cpp/classes/animation_node_transition.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNodeTransition() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationNodeTransition>("AnimationNodeTransition")
			.constructor<>()
			.base<AnimationNodeSync>()
			.property<static_cast<double (AnimationNodeTransition::*)() const>(&AnimationNodeTransition::get_xfade_time), static_cast<void (AnimationNodeTransition::*)(double)>(&AnimationNodeTransition::set_xfade_time)>((new std::string("xfade_time"))->c_str())
			.property<static_cast<Ref<Curve> (AnimationNodeTransition::*)() const>(&AnimationNodeTransition::get_xfade_curve), static_cast<void (AnimationNodeTransition::*)(const Ref<Curve> &)>(&AnimationNodeTransition::set_xfade_curve)>((new std::string("xfade_curve"))->c_str())
			.property<static_cast<bool (AnimationNodeTransition::*)() const>(&AnimationNodeTransition::is_allow_transition_to_self), static_cast<void (AnimationNodeTransition::*)(bool)>(&AnimationNodeTransition::set_allow_transition_to_self)>((new std::string("allow_transition_to_self"))->c_str())
			.property<static_cast<void (AnimationNodeTransition::*)(int32_t)>(&AnimationNodeTransition::set_input_count)>((new std::string("{'name': 'set_input_count', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'input_count', 'type': 'int', 'meta': 'int32_t'}]}"))->c_str())
			.fun<static_cast<void (AnimationNodeTransition::*)(int32_t, bool)>(&AnimationNodeTransition::set_input_as_auto_advance)>((new std::string("set_input_as_auto_advance"))->c_str())
			.fun<static_cast<bool (AnimationNodeTransition::*)(int32_t) const>(&AnimationNodeTransition::is_input_set_as_auto_advance)>((new std::string("is_input_set_as_auto_advance"))->c_str())
			.fun<static_cast<void (AnimationNodeTransition::*)(int32_t, bool)>(&AnimationNodeTransition::set_input_break_loop_at_end)>((new std::string("set_input_break_loop_at_end"))->c_str())
			.fun<static_cast<bool (AnimationNodeTransition::*)(int32_t) const>(&AnimationNodeTransition::is_input_loop_broken_at_end)>((new std::string("is_input_loop_broken_at_end"))->c_str())
			.fun<static_cast<void (AnimationNodeTransition::*)(int32_t, bool)>(&AnimationNodeTransition::set_input_reset)>((new std::string("set_input_reset"))->c_str())
			.fun<static_cast<bool (AnimationNodeTransition::*)(int32_t) const>(&AnimationNodeTransition::is_input_reset)>((new std::string("is_input_reset"))->c_str());
}
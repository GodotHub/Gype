#include <godot_cpp/classes/animation_node_state_machine_playback.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNodeStateMachinePlayback() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationNodeStateMachinePlayback>("AnimationNodeStateMachinePlayback")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<void (AnimationNodeStateMachinePlayback::*)(const StringName &, bool)>(&AnimationNodeStateMachinePlayback::travel)>((new std::string("travel"))->c_str())
			.fun<static_cast<void (AnimationNodeStateMachinePlayback::*)(const StringName &, bool)>(&AnimationNodeStateMachinePlayback::start)>((new std::string("start"))->c_str())
			.fun<static_cast<void (AnimationNodeStateMachinePlayback::*)()>(&AnimationNodeStateMachinePlayback::next)>((new std::string("next"))->c_str())
			.fun<static_cast<void (AnimationNodeStateMachinePlayback::*)()>(&AnimationNodeStateMachinePlayback::stop)>((new std::string("stop"))->c_str())
			.fun<static_cast<bool (AnimationNodeStateMachinePlayback::*)() const>(&AnimationNodeStateMachinePlayback::is_playing)>((new std::string("is_playing"))->c_str())
			.fun<static_cast<StringName (AnimationNodeStateMachinePlayback::*)() const>(&AnimationNodeStateMachinePlayback::get_current_node)>((new std::string("get_current_node"))->c_str())
			.fun<static_cast<double (AnimationNodeStateMachinePlayback::*)() const>(&AnimationNodeStateMachinePlayback::get_current_play_position)>((new std::string("get_current_play_position"))->c_str())
			.fun<static_cast<double (AnimationNodeStateMachinePlayback::*)() const>(&AnimationNodeStateMachinePlayback::get_current_length)>((new std::string("get_current_length"))->c_str())
			.fun<static_cast<StringName (AnimationNodeStateMachinePlayback::*)() const>(&AnimationNodeStateMachinePlayback::get_fading_from_node)>((new std::string("get_fading_from_node"))->c_str())
			.fun<static_cast<TypedArray<StringName> (AnimationNodeStateMachinePlayback::*)() const>(&AnimationNodeStateMachinePlayback::get_travel_path)>((new std::string("get_travel_path"))->c_str());
}
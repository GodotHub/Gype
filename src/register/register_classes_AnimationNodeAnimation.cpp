#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/animation_node_animation.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNodeAnimation() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationNodeAnimation>("AnimationNodeAnimation")
			.constructor<>()
			.base<AnimationRootNode>()
			.property<static_cast<StringName (AnimationNodeAnimation::*)() const>(&AnimationNodeAnimation::get_animation), static_cast<void (AnimationNodeAnimation::*)(const StringName &)>(&AnimationNodeAnimation::set_animation)>((new std::string("animation"))->c_str())
			.property<static_cast<AnimationNodeAnimation::PlayMode (AnimationNodeAnimation::*)() const>(&AnimationNodeAnimation::get_play_mode), static_cast<void (AnimationNodeAnimation::*)(AnimationNodeAnimation::PlayMode)>(&AnimationNodeAnimation::set_play_mode)>((new std::string("play_mode"))->c_str())
			.property<static_cast<bool (AnimationNodeAnimation::*)() const>(&AnimationNodeAnimation::is_using_custom_timeline), static_cast<void (AnimationNodeAnimation::*)(bool)>(&AnimationNodeAnimation::set_use_custom_timeline)>((new std::string("use_custom_timeline"))->c_str())
			.property<static_cast<double (AnimationNodeAnimation::*)() const>(&AnimationNodeAnimation::get_timeline_length), static_cast<void (AnimationNodeAnimation::*)(double)>(&AnimationNodeAnimation::set_timeline_length)>((new std::string("timeline_length"))->c_str())
			.property<static_cast<bool (AnimationNodeAnimation::*)() const>(&AnimationNodeAnimation::is_stretching_time_scale), static_cast<void (AnimationNodeAnimation::*)(bool)>(&AnimationNodeAnimation::set_stretch_time_scale)>((new std::string("stretch_time_scale"))->c_str())
			.property<static_cast<double (AnimationNodeAnimation::*)() const>(&AnimationNodeAnimation::get_start_offset), static_cast<void (AnimationNodeAnimation::*)(double)>(&AnimationNodeAnimation::set_start_offset)>((new std::string("start_offset"))->c_str())
			.property<static_cast<Animation::LoopMode (AnimationNodeAnimation::*)() const>(&AnimationNodeAnimation::get_loop_mode), static_cast<void (AnimationNodeAnimation::*)(Animation::LoopMode)>(&AnimationNodeAnimation::set_loop_mode)>((new std::string("loop_mode"))->c_str());
	qjs::Value _PlayMode = context->newObject();
	_PlayMode[(new std::string("PLAY_MODE_FORWARD"))->c_str()] = AnimationNodeAnimation::PlayMode::PLAY_MODE_FORWARD;
	_PlayMode[(new std::string("PLAY_MODE_BACKWARD"))->c_str()] = AnimationNodeAnimation::PlayMode::PLAY_MODE_BACKWARD;
	_module.add("PlayMode", std::move(_PlayMode));
}
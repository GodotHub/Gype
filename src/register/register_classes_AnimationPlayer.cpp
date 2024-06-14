#include <godot_cpp/classes/animation_mixer.hpp>
#include <godot_cpp/classes/animation_player.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationPlayer() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<AnimationPlayer>("AnimationPlayer")
			.constructor<>()
			.base<AnimationMixer>()
			.property<static_cast<String (AnimationPlayer::*)() const>(&AnimationPlayer::get_current_animation), static_cast<void (AnimationPlayer::*)(const String &)>(&AnimationPlayer::set_current_animation)>((new std::string("current_animation"))->c_str())
			.property<static_cast<String (AnimationPlayer::*)() const>(&AnimationPlayer::get_assigned_animation), static_cast<void (AnimationPlayer::*)(const String &)>(&AnimationPlayer::set_assigned_animation)>((new std::string("assigned_animation"))->c_str())
			.property<static_cast<String (AnimationPlayer::*)() const>(&AnimationPlayer::get_autoplay), static_cast<void (AnimationPlayer::*)(const String &)>(&AnimationPlayer::set_autoplay)>((new std::string("autoplay"))->c_str())
			.property<static_cast<double (AnimationPlayer::*)() const>(&AnimationPlayer::get_current_animation_length)>((new std::string("current_animation_length"))->c_str())
			.property<static_cast<double (AnimationPlayer::*)() const>(&AnimationPlayer::get_current_animation_position)>((new std::string("current_animation_position"))->c_str())
			.property<static_cast<bool (AnimationPlayer::*)() const>(&AnimationPlayer::is_auto_capture), static_cast<void (AnimationPlayer::*)(bool)>(&AnimationPlayer::set_auto_capture)>((new std::string("playback_auto_capture"))->c_str())
			.property<static_cast<double (AnimationPlayer::*)() const>(&AnimationPlayer::get_auto_capture_duration), static_cast<void (AnimationPlayer::*)(double)>(&AnimationPlayer::set_auto_capture_duration)>((new std::string("playback_auto_capture_duration"))->c_str())
			.property<static_cast<Tween::TransitionType (AnimationPlayer::*)() const>(&AnimationPlayer::get_auto_capture_transition_type), static_cast<void (AnimationPlayer::*)(Tween::TransitionType)>(&AnimationPlayer::set_auto_capture_transition_type)>((new std::string("playback_auto_capture_transition_type"))->c_str())
			.property<static_cast<Tween::EaseType (AnimationPlayer::*)() const>(&AnimationPlayer::get_auto_capture_ease_type), static_cast<void (AnimationPlayer::*)(Tween::EaseType)>(&AnimationPlayer::set_auto_capture_ease_type)>((new std::string("playback_auto_capture_ease_type"))->c_str())
			.property<static_cast<double (AnimationPlayer::*)() const>(&AnimationPlayer::get_default_blend_time), static_cast<void (AnimationPlayer::*)(double)>(&AnimationPlayer::set_default_blend_time)>((new std::string("playback_default_blend_time"))->c_str())
			.property<static_cast<double (AnimationPlayer::*)() const>(&AnimationPlayer::get_speed_scale), static_cast<void (AnimationPlayer::*)(double)>(&AnimationPlayer::set_speed_scale)>((new std::string("speed_scale"))->c_str())
			.property<static_cast<bool (AnimationPlayer::*)() const>(&AnimationPlayer::is_movie_quit_on_finish_enabled), static_cast<void (AnimationPlayer::*)(bool)>(&AnimationPlayer::set_movie_quit_on_finish_enabled)>((new std::string("movie_quit_on_finish"))->c_str())
			.fun<static_cast<void (AnimationPlayer::*)(const StringName &, const StringName &)>(&AnimationPlayer::animation_set_next)>((new std::string("animation_set_next"))->c_str())
			.fun<static_cast<StringName (AnimationPlayer::*)(const StringName &) const>(&AnimationPlayer::animation_get_next)>((new std::string("animation_get_next"))->c_str())
			.fun<static_cast<void (AnimationPlayer::*)(const StringName &, const StringName &, double)>(&AnimationPlayer::set_blend_time)>((new std::string("set_blend_time"))->c_str())
			.fun<static_cast<double (AnimationPlayer::*)(const StringName &, const StringName &) const>(&AnimationPlayer::get_blend_time)>((new std::string("get_blend_time"))->c_str())
			.fun<static_cast<void (AnimationPlayer::*)(const StringName &, double, double, bool)>(&AnimationPlayer::play)>((new std::string("play"))->c_str())
			.fun<static_cast<void (AnimationPlayer::*)(const StringName &, double)>(&AnimationPlayer::play_backwards)>((new std::string("play_backwards"))->c_str())
			.fun<static_cast<void (AnimationPlayer::*)(const StringName &, double, double, double, bool, Tween::TransitionType, Tween::EaseType)>(&AnimationPlayer::play_with_capture)>((new std::string("play_with_capture"))->c_str())
			.fun<static_cast<void (AnimationPlayer::*)()>(&AnimationPlayer::pause)>((new std::string("pause"))->c_str())
			.fun<static_cast<void (AnimationPlayer::*)(bool)>(&AnimationPlayer::stop)>((new std::string("stop"))->c_str())
			.fun<static_cast<bool (AnimationPlayer::*)() const>(&AnimationPlayer::is_playing)>((new std::string("is_playing"))->c_str())
			.fun<static_cast<void (AnimationPlayer::*)(const StringName &)>(&AnimationPlayer::queue)>((new std::string("queue"))->c_str())
			.fun<static_cast<PackedStringArray (AnimationPlayer::*)()>(&AnimationPlayer::get_queue)>((new std::string("get_queue"))->c_str())
			.fun<static_cast<void (AnimationPlayer::*)()>(&AnimationPlayer::clear_queue)>((new std::string("clear_queue"))->c_str())
			.fun<static_cast<double (AnimationPlayer::*)() const>(&AnimationPlayer::get_playing_speed)>((new std::string("get_playing_speed"))->c_str())
			.fun<static_cast<void (AnimationPlayer::*)(double, bool, bool)>(&AnimationPlayer::seek)>((new std::string("seek"))->c_str())
			.fun<static_cast<void (AnimationPlayer::*)(AnimationPlayer::AnimationProcessCallback)>(&AnimationPlayer::set_process_callback)>((new std::string("set_process_callback"))->c_str())
			.fun<static_cast<AnimationPlayer::AnimationProcessCallback (AnimationPlayer::*)() const>(&AnimationPlayer::get_process_callback)>((new std::string("get_process_callback"))->c_str())
			.fun<static_cast<void (AnimationPlayer::*)(AnimationPlayer::AnimationMethodCallMode)>(&AnimationPlayer::set_method_call_mode)>((new std::string("set_method_call_mode"))->c_str())
			.fun<static_cast<AnimationPlayer::AnimationMethodCallMode (AnimationPlayer::*)() const>(&AnimationPlayer::get_method_call_mode)>((new std::string("get_method_call_mode"))->c_str())
			.fun<static_cast<void (AnimationPlayer::*)(const NodePath &)>(&AnimationPlayer::set_root)>((new std::string("set_root"))->c_str())
			.fun<static_cast<NodePath (AnimationPlayer::*)() const>(&AnimationPlayer::get_root)>((new std::string("get_root"))->c_str());
	qjs::Value _AnimationProcessCallback = context->newObject();
	_AnimationProcessCallback[(new std::string("ANIMATION_PROCESS_PHYSICS"))->c_str()] = AnimationPlayer::AnimationProcessCallback::ANIMATION_PROCESS_PHYSICS;
	_AnimationProcessCallback[(new std::string("ANIMATION_PROCESS_IDLE"))->c_str()] = AnimationPlayer::AnimationProcessCallback::ANIMATION_PROCESS_IDLE;
	_AnimationProcessCallback[(new std::string("ANIMATION_PROCESS_MANUAL"))->c_str()] = AnimationPlayer::AnimationProcessCallback::ANIMATION_PROCESS_MANUAL;
	_module.add("AnimationProcessCallback", std::move(_AnimationProcessCallback));
	qjs::Value _AnimationMethodCallMode = context->newObject();
	_AnimationMethodCallMode[(new std::string("ANIMATION_METHOD_CALL_DEFERRED"))->c_str()] = AnimationPlayer::AnimationMethodCallMode::ANIMATION_METHOD_CALL_DEFERRED;
	_AnimationMethodCallMode[(new std::string("ANIMATION_METHOD_CALL_IMMEDIATE"))->c_str()] = AnimationPlayer::AnimationMethodCallMode::ANIMATION_METHOD_CALL_IMMEDIATE;
	_module.add("AnimationMethodCallMode", std::move(_AnimationMethodCallMode));
}
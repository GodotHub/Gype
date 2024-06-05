#include <godot_cpp/classes/animation_player.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AnimationPlayer() {
	qjs::Context::Module &_module = _Node;
	_module.class_<AnimationPlayer>("AnimationPlayer")
			.constructor<>()
			.property<&AnimationPlayer::get_current_animation, &AnimationPlayer::set_current_animation>("current_animation")
			.property<&AnimationPlayer::get_assigned_animation, &AnimationPlayer::set_assigned_animation>("assigned_animation")
			.property<&AnimationPlayer::get_autoplay, &AnimationPlayer::set_autoplay>("autoplay")
			.property<&AnimationPlayer::get_current_animation_length>("current_animation_length")
			.property<&AnimationPlayer::get_current_animation_position>("current_animation_position")
			.property<&AnimationPlayer::get_default_blend_time, &AnimationPlayer::set_default_blend_time>("playback_default_blend_time")
			.property<&AnimationPlayer::get_speed_scale, &AnimationPlayer::set_speed_scale>("speed_scale")
			.property<&AnimationPlayer::is_movie_quit_on_finish_enabled, &AnimationPlayer::set_movie_quit_on_finish_enabled>("movie_quit_on_finish")
			.fun<static_cast<void (AnimationPlayer::*)(const StringName &, const StringName &)>(&AnimationPlayer::animation_set_next)>("animation_set_next")
			.fun<static_cast<StringName (AnimationPlayer::*)(const StringName &) const>(&AnimationPlayer::animation_get_next)>("animation_get_next")
			.fun<static_cast<void (AnimationPlayer::*)(const StringName &, const StringName &, double)>(&AnimationPlayer::set_blend_time)>("set_blend_time")
			.fun<static_cast<double (AnimationPlayer::*)(const StringName &, const StringName &) const>(&AnimationPlayer::get_blend_time)>("get_blend_time")
			.fun<static_cast<void (AnimationPlayer::*)(const StringName &, double, double, bool)>(&AnimationPlayer::play)>("play")
			.fun<static_cast<void (AnimationPlayer::*)(const StringName &, double)>(&AnimationPlayer::play_backwards)>("play_backwards")
			.fun<static_cast<void (AnimationPlayer::*)()>(&AnimationPlayer::pause)>("pause")
			.fun<static_cast<void (AnimationPlayer::*)(bool)>(&AnimationPlayer::stop)>("stop")
			.fun<static_cast<bool (AnimationPlayer::*)() const>(&AnimationPlayer::is_playing)>("is_playing")
			.fun<static_cast<void (AnimationPlayer::*)(const StringName &)>(&AnimationPlayer::queue)>("queue")
			.fun<static_cast<PackedStringArray (AnimationPlayer::*)()>(&AnimationPlayer::get_queue)>("get_queue")
			.fun<static_cast<void (AnimationPlayer::*)()>(&AnimationPlayer::clear_queue)>("clear_queue")
			.fun<static_cast<double (AnimationPlayer::*)() const>(&AnimationPlayer::get_playing_speed)>("get_playing_speed")
			.fun<static_cast<void (AnimationPlayer::*)(double, bool, bool)>(&AnimationPlayer::seek)>("seek")
			.fun<static_cast<void (AnimationPlayer::*)(AnimationPlayer::AnimationProcessCallback)>(&AnimationPlayer::set_process_callback)>("set_process_callback")
			.fun<static_cast<AnimationPlayer::AnimationProcessCallback (AnimationPlayer::*)() const>(&AnimationPlayer::get_process_callback)>("get_process_callback")
			.fun<static_cast<void (AnimationPlayer::*)(AnimationPlayer::AnimationMethodCallMode)>(&AnimationPlayer::set_method_call_mode)>("set_method_call_mode")
			.fun<static_cast<AnimationPlayer::AnimationMethodCallMode (AnimationPlayer::*)() const>(&AnimationPlayer::get_method_call_mode)>("get_method_call_mode")
			.fun<static_cast<void (AnimationPlayer::*)(const NodePath &)>(&AnimationPlayer::set_root)>("set_root")
			.fun<static_cast<NodePath (AnimationPlayer::*)() const>(&AnimationPlayer::get_root)>("get_root");
}
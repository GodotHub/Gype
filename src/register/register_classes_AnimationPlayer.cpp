#include <godot_cpp/classes/animation_player.hpp>
#include <godot_cpp/classes/animation_mixer.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimationPlayer() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<AnimationPlayer>("AnimationPlayer")
            .constructor<>()
            .base<AnimationMixer>()
            .property<static_cast<String(AnimationPlayer::*)()const>(&AnimationPlayer::get_current_animation),static_cast<void(AnimationPlayer::*)(const String &)>(&AnimationPlayer::set_current_animation)>("current_animation")
            .property<static_cast<String(AnimationPlayer::*)()const>(&AnimationPlayer::get_assigned_animation),static_cast<void(AnimationPlayer::*)(const String &)>(&AnimationPlayer::set_assigned_animation)>("assigned_animation")
            .property<static_cast<String(AnimationPlayer::*)()const>(&AnimationPlayer::get_autoplay),static_cast<void(AnimationPlayer::*)(const String &)>(&AnimationPlayer::set_autoplay)>("autoplay")
            .property<static_cast<double(AnimationPlayer::*)()const>(&AnimationPlayer::get_current_animation_length)>("current_animation_length")
            .property<static_cast<double(AnimationPlayer::*)()const>(&AnimationPlayer::get_current_animation_position)>("current_animation_position")
            .property<static_cast<bool(AnimationPlayer::*)()const>(&AnimationPlayer::is_auto_capture),static_cast<void(AnimationPlayer::*)(bool)>(&AnimationPlayer::set_auto_capture)>("playback_auto_capture")
            .property<static_cast<double(AnimationPlayer::*)()const>(&AnimationPlayer::get_auto_capture_duration),static_cast<void(AnimationPlayer::*)(double)>(&AnimationPlayer::set_auto_capture_duration)>("playback_auto_capture_duration")
            .property<static_cast<Tween::TransitionType(AnimationPlayer::*)()const>(&AnimationPlayer::get_auto_capture_transition_type),static_cast<void(AnimationPlayer::*)(Tween::TransitionType)>(&AnimationPlayer::set_auto_capture_transition_type)>("playback_auto_capture_transition_type")
            .property<static_cast<Tween::EaseType(AnimationPlayer::*)()const>(&AnimationPlayer::get_auto_capture_ease_type),static_cast<void(AnimationPlayer::*)(Tween::EaseType)>(&AnimationPlayer::set_auto_capture_ease_type)>("playback_auto_capture_ease_type")
            .property<static_cast<double(AnimationPlayer::*)()const>(&AnimationPlayer::get_default_blend_time),static_cast<void(AnimationPlayer::*)(double)>(&AnimationPlayer::set_default_blend_time)>("playback_default_blend_time")
            .property<static_cast<double(AnimationPlayer::*)()const>(&AnimationPlayer::get_speed_scale),static_cast<void(AnimationPlayer::*)(double)>(&AnimationPlayer::set_speed_scale)>("speed_scale")
            .property<static_cast<bool(AnimationPlayer::*)()const>(&AnimationPlayer::is_movie_quit_on_finish_enabled),static_cast<void(AnimationPlayer::*)(bool)>(&AnimationPlayer::set_movie_quit_on_finish_enabled)>("movie_quit_on_finish")
            .fun<static_cast<void(AnimationPlayer::*)(const StringName &,const StringName &)>(&AnimationPlayer::animation_set_next)>("animation_set_next")
            .fun<static_cast<StringName(AnimationPlayer::*)(const StringName &)const>(&AnimationPlayer::animation_get_next)>("animation_get_next")
            .fun<static_cast<void(AnimationPlayer::*)(const StringName &,const StringName &,double)>(&AnimationPlayer::set_blend_time)>("set_blend_time")
            .fun<static_cast<double(AnimationPlayer::*)(const StringName &,const StringName &)const>(&AnimationPlayer::get_blend_time)>("get_blend_time")
            .fun<static_cast<void(AnimationPlayer::*)(const StringName &,double,double,bool)>(&AnimationPlayer::play)>("play")
            .fun<static_cast<void(AnimationPlayer::*)(const StringName &,double)>(&AnimationPlayer::play_backwards)>("play_backwards")
            .fun<static_cast<void(AnimationPlayer::*)(const StringName &,double,double,double,bool,Tween::TransitionType,Tween::EaseType)>(&AnimationPlayer::play_with_capture)>("play_with_capture")
            .fun<static_cast<void(AnimationPlayer::*)()>(&AnimationPlayer::pause)>("pause")
            .fun<static_cast<void(AnimationPlayer::*)(bool)>(&AnimationPlayer::stop)>("stop")
            .fun<static_cast<bool(AnimationPlayer::*)()const>(&AnimationPlayer::is_playing)>("is_playing")
            .fun<static_cast<void(AnimationPlayer::*)(const StringName &)>(&AnimationPlayer::queue)>("queue")
            .fun<static_cast<PackedStringArray(AnimationPlayer::*)()>(&AnimationPlayer::get_queue)>("get_queue")
            .fun<static_cast<void(AnimationPlayer::*)()>(&AnimationPlayer::clear_queue)>("clear_queue")
            .fun<static_cast<double(AnimationPlayer::*)()const>(&AnimationPlayer::get_playing_speed)>("get_playing_speed")
            .fun<static_cast<void(AnimationPlayer::*)(double,bool,bool)>(&AnimationPlayer::seek)>("seek")
            .fun<static_cast<void(AnimationPlayer::*)(AnimationPlayer::AnimationProcessCallback)>(&AnimationPlayer::set_process_callback)>("set_process_callback")
            .fun<static_cast<AnimationPlayer::AnimationProcessCallback(AnimationPlayer::*)()const>(&AnimationPlayer::get_process_callback)>("get_process_callback")
            .fun<static_cast<void(AnimationPlayer::*)(AnimationPlayer::AnimationMethodCallMode)>(&AnimationPlayer::set_method_call_mode)>("set_method_call_mode")
            .fun<static_cast<AnimationPlayer::AnimationMethodCallMode(AnimationPlayer::*)()const>(&AnimationPlayer::get_method_call_mode)>("get_method_call_mode")
            .fun<static_cast<void(AnimationPlayer::*)(const NodePath &)>(&AnimationPlayer::set_root)>("set_root")
            .fun<static_cast<NodePath(AnimationPlayer::*)()const>(&AnimationPlayer::get_root)>("get_root")
;    qjs::Value _AnimationProcessCallback = context->newObject();
    _AnimationProcessCallback["ANIMATION_PROCESS_PHYSICS"] = AnimationPlayer::AnimationProcessCallback::ANIMATION_PROCESS_PHYSICS;
    _AnimationProcessCallback["ANIMATION_PROCESS_IDLE"] = AnimationPlayer::AnimationProcessCallback::ANIMATION_PROCESS_IDLE;
    _AnimationProcessCallback["ANIMATION_PROCESS_MANUAL"] = AnimationPlayer::AnimationProcessCallback::ANIMATION_PROCESS_MANUAL;
    _module.add("AnimationProcessCallback", std::move(_AnimationProcessCallback));
    qjs::Value _AnimationMethodCallMode = context->newObject();
    _AnimationMethodCallMode["ANIMATION_METHOD_CALL_DEFERRED"] = AnimationPlayer::AnimationMethodCallMode::ANIMATION_METHOD_CALL_DEFERRED;
    _AnimationMethodCallMode["ANIMATION_METHOD_CALL_IMMEDIATE"] = AnimationPlayer::AnimationMethodCallMode::ANIMATION_METHOD_CALL_IMMEDIATE;
    _module.add("AnimationMethodCallMode", std::move(_AnimationMethodCallMode));
}
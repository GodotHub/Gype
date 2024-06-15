#include <godot_cpp/classes/audio_stream_interactive.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioStreamInteractive() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioStreamInteractive>("AudioStreamInteractive")
            .constructor<>()
            .base<AudioStream>()
            .static_fun<&AudioStreamInteractive::CLIP_ANY>("CLIP_ANY")
            .property<static_cast<int32_t(AudioStreamInteractive::*)()const>(&AudioStreamInteractive::get_initial_clip),static_cast<void(AudioStreamInteractive::*)(int32_t)>(&AudioStreamInteractive::set_initial_clip)>("initial_clip")
            .property<static_cast<int32_t(AudioStreamInteractive::*)()const>(&AudioStreamInteractive::get_clip_count),static_cast<void(AudioStreamInteractive::*)(int32_t)>(&AudioStreamInteractive::set_clip_count)>("clip_count")
            .fun<static_cast<void(AudioStreamInteractive::*)(int32_t,const StringName &)>(&AudioStreamInteractive::set_clip_name)>("set_clip_name")
            .fun<static_cast<StringName(AudioStreamInteractive::*)(int32_t)const>(&AudioStreamInteractive::get_clip_name)>("get_clip_name")
            .fun<static_cast<void(AudioStreamInteractive::*)(int32_t,const Ref<AudioStream> &)>(&AudioStreamInteractive::set_clip_stream)>("set_clip_stream")
            .fun<static_cast<Ref<AudioStream>(AudioStreamInteractive::*)(int32_t)const>(&AudioStreamInteractive::get_clip_stream)>("get_clip_stream")
            .fun<static_cast<void(AudioStreamInteractive::*)(int32_t,AudioStreamInteractive::AutoAdvanceMode)>(&AudioStreamInteractive::set_clip_auto_advance)>("set_clip_auto_advance")
            .fun<static_cast<AudioStreamInteractive::AutoAdvanceMode(AudioStreamInteractive::*)(int32_t)const>(&AudioStreamInteractive::get_clip_auto_advance)>("get_clip_auto_advance")
            .fun<static_cast<void(AudioStreamInteractive::*)(int32_t,int32_t)>(&AudioStreamInteractive::set_clip_auto_advance_next_clip)>("set_clip_auto_advance_next_clip")
            .fun<static_cast<int32_t(AudioStreamInteractive::*)(int32_t)const>(&AudioStreamInteractive::get_clip_auto_advance_next_clip)>("get_clip_auto_advance_next_clip")
            .fun<static_cast<void(AudioStreamInteractive::*)(int32_t,int32_t,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,double,bool,int32_t,bool)>(&AudioStreamInteractive::add_transition)>("add_transition")
            .fun<static_cast<bool(AudioStreamInteractive::*)(int32_t,int32_t)const>(&AudioStreamInteractive::has_transition)>("has_transition")
            .fun<static_cast<void(AudioStreamInteractive::*)(int32_t,int32_t)>(&AudioStreamInteractive::erase_transition)>("erase_transition")
            .fun<static_cast<PackedInt32Array(AudioStreamInteractive::*)()const>(&AudioStreamInteractive::get_transition_list)>("get_transition_list")
            .fun<static_cast<AudioStreamInteractive::TransitionFromTime(AudioStreamInteractive::*)(int32_t,int32_t)const>(&AudioStreamInteractive::get_transition_from_time)>("get_transition_from_time")
            .fun<static_cast<AudioStreamInteractive::TransitionToTime(AudioStreamInteractive::*)(int32_t,int32_t)const>(&AudioStreamInteractive::get_transition_to_time)>("get_transition_to_time")
            .fun<static_cast<AudioStreamInteractive::FadeMode(AudioStreamInteractive::*)(int32_t,int32_t)const>(&AudioStreamInteractive::get_transition_fade_mode)>("get_transition_fade_mode")
            .fun<static_cast<double(AudioStreamInteractive::*)(int32_t,int32_t)const>(&AudioStreamInteractive::get_transition_fade_beats)>("get_transition_fade_beats")
            .fun<static_cast<bool(AudioStreamInteractive::*)(int32_t,int32_t)const>(&AudioStreamInteractive::is_transition_using_filler_clip)>("is_transition_using_filler_clip")
            .fun<static_cast<int32_t(AudioStreamInteractive::*)(int32_t,int32_t)const>(&AudioStreamInteractive::get_transition_filler_clip)>("get_transition_filler_clip")
            .fun<static_cast<bool(AudioStreamInteractive::*)(int32_t,int32_t)const>(&AudioStreamInteractive::is_transition_holding_previous)>("is_transition_holding_previous")
;    qjs::Value _TransitionFromTime = context->newObject();
    _TransitionFromTime["TRANSITION_FROM_TIME_IMMEDIATE"] = AudioStreamInteractive::TransitionFromTime::TRANSITION_FROM_TIME_IMMEDIATE;
    _TransitionFromTime["TRANSITION_FROM_TIME_NEXT_BEAT"] = AudioStreamInteractive::TransitionFromTime::TRANSITION_FROM_TIME_NEXT_BEAT;
    _TransitionFromTime["TRANSITION_FROM_TIME_NEXT_BAR"] = AudioStreamInteractive::TransitionFromTime::TRANSITION_FROM_TIME_NEXT_BAR;
    _TransitionFromTime["TRANSITION_FROM_TIME_END"] = AudioStreamInteractive::TransitionFromTime::TRANSITION_FROM_TIME_END;
    _module.add("TransitionFromTime", std::move(_TransitionFromTime));
    qjs::Value _TransitionToTime = context->newObject();
    _TransitionToTime["TRANSITION_TO_TIME_SAME_POSITION"] = AudioStreamInteractive::TransitionToTime::TRANSITION_TO_TIME_SAME_POSITION;
    _TransitionToTime["TRANSITION_TO_TIME_START"] = AudioStreamInteractive::TransitionToTime::TRANSITION_TO_TIME_START;
    _module.add("TransitionToTime", std::move(_TransitionToTime));
    qjs::Value _FadeMode = context->newObject();
    _FadeMode["FADE_DISABLED"] = AudioStreamInteractive::FadeMode::FADE_DISABLED;
    _FadeMode["FADE_IN"] = AudioStreamInteractive::FadeMode::FADE_IN;
    _FadeMode["FADE_OUT"] = AudioStreamInteractive::FadeMode::FADE_OUT;
    _FadeMode["FADE_CROSS"] = AudioStreamInteractive::FadeMode::FADE_CROSS;
    _FadeMode["FADE_AUTOMATIC"] = AudioStreamInteractive::FadeMode::FADE_AUTOMATIC;
    _module.add("FadeMode", std::move(_FadeMode));
    qjs::Value _AutoAdvanceMode = context->newObject();
    _AutoAdvanceMode["AUTO_ADVANCE_DISABLED"] = AudioStreamInteractive::AutoAdvanceMode::AUTO_ADVANCE_DISABLED;
    _AutoAdvanceMode["AUTO_ADVANCE_ENABLED"] = AudioStreamInteractive::AutoAdvanceMode::AUTO_ADVANCE_ENABLED;
    _AutoAdvanceMode["AUTO_ADVANCE_RETURN_TO_HOLD"] = AudioStreamInteractive::AutoAdvanceMode::AUTO_ADVANCE_RETURN_TO_HOLD;
    _module.add("AutoAdvanceMode", std::move(_AutoAdvanceMode));
}
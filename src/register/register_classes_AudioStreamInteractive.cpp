
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_interactive.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamInteractive() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioStreamInteractive>("AudioStreamInteractive")
			.constructor<>()
			.base<AudioStream>()
			.static_fun<&AudioStreamInteractive::CLIP_ANY>((new std::string("CLIP_ANY"))->c_str())
			.property<static_cast<int32_t (AudioStreamInteractive::*)() const>(&AudioStreamInteractive::get_initial_clip), static_cast<void (AudioStreamInteractive::*)(int32_t)>(&AudioStreamInteractive::set_initial_clip)>((new std::string("initial_clip"))->c_str())
			.property<static_cast<int32_t (AudioStreamInteractive::*)() const>(&AudioStreamInteractive::get_clip_count), static_cast<void (AudioStreamInteractive::*)(int32_t)>(&AudioStreamInteractive::set_clip_count)>((new std::string("clip_count"))->c_str())
			.fun<static_cast<void (AudioStreamInteractive::*)(int32_t, const StringName &)>(&AudioStreamInteractive::set_clip_name)>((new std::string("set_clip_name"))->c_str())
			.fun<static_cast<StringName (AudioStreamInteractive::*)(int32_t) const>(&AudioStreamInteractive::get_clip_name)>((new std::string("get_clip_name"))->c_str())
			.fun<static_cast<void (AudioStreamInteractive::*)(int32_t, const Ref<AudioStream> &)>(&AudioStreamInteractive::set_clip_stream)>((new std::string("set_clip_stream"))->c_str())
			.fun<static_cast<Ref<AudioStream> (AudioStreamInteractive::*)(int32_t) const>(&AudioStreamInteractive::get_clip_stream)>((new std::string("get_clip_stream"))->c_str())
			.fun<static_cast<void (AudioStreamInteractive::*)(int32_t, AudioStreamInteractive::AutoAdvanceMode)>(&AudioStreamInteractive::set_clip_auto_advance)>((new std::string("set_clip_auto_advance"))->c_str())
			.fun<static_cast<AudioStreamInteractive::AutoAdvanceMode (AudioStreamInteractive::*)(int32_t) const>(&AudioStreamInteractive::get_clip_auto_advance)>((new std::string("get_clip_auto_advance"))->c_str())
			.fun<static_cast<void (AudioStreamInteractive::*)(int32_t, int32_t)>(&AudioStreamInteractive::set_clip_auto_advance_next_clip)>((new std::string("set_clip_auto_advance_next_clip"))->c_str())
			.fun<static_cast<int32_t (AudioStreamInteractive::*)(int32_t) const>(&AudioStreamInteractive::get_clip_auto_advance_next_clip)>((new std::string("get_clip_auto_advance_next_clip"))->c_str())
			.fun<static_cast<void (AudioStreamInteractive::*)(int32_t, int32_t, AudioStreamInteractive::TransitionFromTime, AudioStreamInteractive::TransitionToTime, AudioStreamInteractive::FadeMode, double, bool, int32_t, bool)>(&AudioStreamInteractive::add_transition)>((new std::string("add_transition"))->c_str())
			.fun<static_cast<bool (AudioStreamInteractive::*)(int32_t, int32_t) const>(&AudioStreamInteractive::has_transition)>((new std::string("has_transition"))->c_str())
			.fun<static_cast<void (AudioStreamInteractive::*)(int32_t, int32_t)>(&AudioStreamInteractive::erase_transition)>((new std::string("erase_transition"))->c_str())
			.fun<static_cast<PackedInt32Array (AudioStreamInteractive::*)() const>(&AudioStreamInteractive::get_transition_list)>((new std::string("get_transition_list"))->c_str())
			.fun<static_cast<AudioStreamInteractive::TransitionFromTime (AudioStreamInteractive::*)(int32_t, int32_t) const>(&AudioStreamInteractive::get_transition_from_time)>((new std::string("get_transition_from_time"))->c_str())
			.fun<static_cast<AudioStreamInteractive::TransitionToTime (AudioStreamInteractive::*)(int32_t, int32_t) const>(&AudioStreamInteractive::get_transition_to_time)>((new std::string("get_transition_to_time"))->c_str())
			.fun<static_cast<AudioStreamInteractive::FadeMode (AudioStreamInteractive::*)(int32_t, int32_t) const>(&AudioStreamInteractive::get_transition_fade_mode)>((new std::string("get_transition_fade_mode"))->c_str())
			.fun<static_cast<double (AudioStreamInteractive::*)(int32_t, int32_t) const>(&AudioStreamInteractive::get_transition_fade_beats)>((new std::string("get_transition_fade_beats"))->c_str())
			.fun<static_cast<bool (AudioStreamInteractive::*)(int32_t, int32_t) const>(&AudioStreamInteractive::is_transition_using_filler_clip)>((new std::string("is_transition_using_filler_clip"))->c_str())
			.fun<static_cast<int32_t (AudioStreamInteractive::*)(int32_t, int32_t) const>(&AudioStreamInteractive::get_transition_filler_clip)>((new std::string("get_transition_filler_clip"))->c_str())
			.fun<static_cast<bool (AudioStreamInteractive::*)(int32_t, int32_t) const>(&AudioStreamInteractive::is_transition_holding_previous)>((new std::string("is_transition_holding_previous"))->c_str());
	qjs::Value _TransitionFromTime = context->newObject();
	_TransitionFromTime[(new std::string("TRANSITION_FROM_TIME_IMMEDIATE"))->c_str()] = AudioStreamInteractive::TransitionFromTime::TRANSITION_FROM_TIME_IMMEDIATE;
	_TransitionFromTime[(new std::string("TRANSITION_FROM_TIME_NEXT_BEAT"))->c_str()] = AudioStreamInteractive::TransitionFromTime::TRANSITION_FROM_TIME_NEXT_BEAT;
	_TransitionFromTime[(new std::string("TRANSITION_FROM_TIME_NEXT_BAR"))->c_str()] = AudioStreamInteractive::TransitionFromTime::TRANSITION_FROM_TIME_NEXT_BAR;
	_TransitionFromTime[(new std::string("TRANSITION_FROM_TIME_END"))->c_str()] = AudioStreamInteractive::TransitionFromTime::TRANSITION_FROM_TIME_END;
	_module.add("TransitionFromTime", std::move(_TransitionFromTime));
	qjs::Value _TransitionToTime = context->newObject();
	_TransitionToTime[(new std::string("TRANSITION_TO_TIME_SAME_POSITION"))->c_str()] = AudioStreamInteractive::TransitionToTime::TRANSITION_TO_TIME_SAME_POSITION;
	_TransitionToTime[(new std::string("TRANSITION_TO_TIME_START"))->c_str()] = AudioStreamInteractive::TransitionToTime::TRANSITION_TO_TIME_START;
	_module.add("TransitionToTime", std::move(_TransitionToTime));
	qjs::Value _FadeMode = context->newObject();
	_FadeMode[(new std::string("FADE_DISABLED"))->c_str()] = AudioStreamInteractive::FadeMode::FADE_DISABLED;
	_FadeMode[(new std::string("FADE_IN"))->c_str()] = AudioStreamInteractive::FadeMode::FADE_IN;
	_FadeMode[(new std::string("FADE_OUT"))->c_str()] = AudioStreamInteractive::FadeMode::FADE_OUT;
	_FadeMode[(new std::string("FADE_CROSS"))->c_str()] = AudioStreamInteractive::FadeMode::FADE_CROSS;
	_FadeMode[(new std::string("FADE_AUTOMATIC"))->c_str()] = AudioStreamInteractive::FadeMode::FADE_AUTOMATIC;
	_module.add("FadeMode", std::move(_FadeMode));
	qjs::Value _AutoAdvanceMode = context->newObject();
	_AutoAdvanceMode[(new std::string("AUTO_ADVANCE_DISABLED"))->c_str()] = AudioStreamInteractive::AutoAdvanceMode::AUTO_ADVANCE_DISABLED;
	_AutoAdvanceMode[(new std::string("AUTO_ADVANCE_ENABLED"))->c_str()] = AudioStreamInteractive::AutoAdvanceMode::AUTO_ADVANCE_ENABLED;
	_AutoAdvanceMode[(new std::string("AUTO_ADVANCE_RETURN_TO_HOLD"))->c_str()] = AudioStreamInteractive::AutoAdvanceMode::AUTO_ADVANCE_RETURN_TO_HOLD;
	_module.add("AutoAdvanceMode", std::move(_AutoAdvanceMode));
}
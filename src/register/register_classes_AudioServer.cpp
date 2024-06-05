#include <godot_cpp/classes/audio_bus_layout.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_instance.hpp>
#include <godot_cpp/classes/audio_server.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioServer() {
	qjs::Context::Module &_module = _General;
	_module.class_<AudioServer>("AudioServer")
			.constructor<>()
			.property<&AudioServer::get_bus_count, &AudioServer::set_bus_count>("bus_count")
			.property<&AudioServer::get_output_device, &AudioServer::set_output_device>("output_device")
			.property<&AudioServer::get_input_device, &AudioServer::set_input_device>("input_device")
			.property<&AudioServer::get_playback_speed_scale, &AudioServer::set_playback_speed_scale>("playback_speed_scale")
			.fun<static_cast<void (AudioServer::*)(int32_t)>(&AudioServer::remove_bus)>("remove_bus")
			.fun<static_cast<void (AudioServer::*)(int32_t)>(&AudioServer::add_bus)>("add_bus")
			.fun<static_cast<void (AudioServer::*)(int32_t, int32_t)>(&AudioServer::move_bus)>("move_bus")
			.fun<static_cast<void (AudioServer::*)(int32_t, const String &)>(&AudioServer::set_bus_name)>("set_bus_name")
			.fun<static_cast<String (AudioServer::*)(int32_t) const>(&AudioServer::get_bus_name)>("get_bus_name")
			.fun<static_cast<int32_t (AudioServer::*)(const StringName &) const>(&AudioServer::get_bus_index)>("get_bus_index")
			.fun<static_cast<int32_t (AudioServer::*)(int32_t) const>(&AudioServer::get_bus_channels)>("get_bus_channels")
			.fun<static_cast<void (AudioServer::*)(int32_t, double)>(&AudioServer::set_bus_volume_db)>("set_bus_volume_db")
			.fun<static_cast<double (AudioServer::*)(int32_t) const>(&AudioServer::get_bus_volume_db)>("get_bus_volume_db")
			.fun<static_cast<void (AudioServer::*)(int32_t, const StringName &)>(&AudioServer::set_bus_send)>("set_bus_send")
			.fun<static_cast<StringName (AudioServer::*)(int32_t) const>(&AudioServer::get_bus_send)>("get_bus_send")
			.fun<static_cast<void (AudioServer::*)(int32_t, bool)>(&AudioServer::set_bus_solo)>("set_bus_solo")
			.fun<static_cast<bool (AudioServer::*)(int32_t) const>(&AudioServer::is_bus_solo)>("is_bus_solo")
			.fun<static_cast<void (AudioServer::*)(int32_t, bool)>(&AudioServer::set_bus_mute)>("set_bus_mute")
			.fun<static_cast<bool (AudioServer::*)(int32_t) const>(&AudioServer::is_bus_mute)>("is_bus_mute")
			.fun<static_cast<void (AudioServer::*)(int32_t, bool)>(&AudioServer::set_bus_bypass_effects)>("set_bus_bypass_effects")
			.fun<static_cast<bool (AudioServer::*)(int32_t) const>(&AudioServer::is_bus_bypassing_effects)>("is_bus_bypassing_effects")
			.fun<static_cast<void (AudioServer::*)(int32_t, const Ref<AudioEffect> &, int32_t)>(&AudioServer::add_bus_effect)>("add_bus_effect")
			.fun<static_cast<void (AudioServer::*)(int32_t, int32_t)>(&AudioServer::remove_bus_effect)>("remove_bus_effect")
			.fun<static_cast<int32_t (AudioServer::*)(int32_t)>(&AudioServer::get_bus_effect_count)>("get_bus_effect_count")
			.fun<static_cast<Ref<AudioEffect> (AudioServer::*)(int32_t, int32_t)>(&AudioServer::get_bus_effect)>("get_bus_effect")
			.fun<static_cast<Ref<AudioEffectInstance> (AudioServer::*)(int32_t, int32_t, int32_t)>(&AudioServer::get_bus_effect_instance)>("get_bus_effect_instance")
			.fun<static_cast<void (AudioServer::*)(int32_t, int32_t, int32_t)>(&AudioServer::swap_bus_effects)>("swap_bus_effects")
			.fun<static_cast<void (AudioServer::*)(int32_t, int32_t, bool)>(&AudioServer::set_bus_effect_enabled)>("set_bus_effect_enabled")
			.fun<static_cast<bool (AudioServer::*)(int32_t, int32_t) const>(&AudioServer::is_bus_effect_enabled)>("is_bus_effect_enabled")
			.fun<static_cast<double (AudioServer::*)(int32_t, int32_t) const>(&AudioServer::get_bus_peak_volume_left_db)>("get_bus_peak_volume_left_db")
			.fun<static_cast<double (AudioServer::*)(int32_t, int32_t) const>(&AudioServer::get_bus_peak_volume_right_db)>("get_bus_peak_volume_right_db")
			.fun<static_cast<void (AudioServer::*)()>(&AudioServer::lock)>("lock")
			.fun<static_cast<void (AudioServer::*)()>(&AudioServer::unlock)>("unlock")
			.fun<static_cast<AudioServer::SpeakerMode (AudioServer::*)() const>(&AudioServer::get_speaker_mode)>("get_speaker_mode")
			.fun<static_cast<double (AudioServer::*)() const>(&AudioServer::get_mix_rate)>("get_mix_rate")
			.fun<static_cast<PackedStringArray (AudioServer::*)()>(&AudioServer::get_output_device_list)>("get_output_device_list")
			.fun<static_cast<double (AudioServer::*)() const>(&AudioServer::get_time_to_next_mix)>("get_time_to_next_mix")
			.fun<static_cast<double (AudioServer::*)() const>(&AudioServer::get_time_since_last_mix)>("get_time_since_last_mix")
			.fun<static_cast<double (AudioServer::*)() const>(&AudioServer::get_output_latency)>("get_output_latency")
			.fun<static_cast<PackedStringArray (AudioServer::*)()>(&AudioServer::get_input_device_list)>("get_input_device_list")
			.fun<static_cast<void (AudioServer::*)(const Ref<AudioBusLayout> &)>(&AudioServer::set_bus_layout)>("set_bus_layout")
			.fun<static_cast<Ref<AudioBusLayout> (AudioServer::*)() const>(&AudioServer::generate_bus_layout)>("generate_bus_layout")
			.fun<static_cast<void (AudioServer::*)(bool)>(&AudioServer::set_enable_tagging_used_audio_streams)>("set_enable_tagging_used_audio_streams");
}
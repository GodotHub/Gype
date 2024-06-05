#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/audio_stream_player.hpp>
#include <godot_cpp/classes/ref.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamPlayer() {
	qjs::Context::Module &_module = _Node;
	_module.class_<AudioStreamPlayer>("AudioStreamPlayer")
			.constructor<>()
			.property<&AudioStreamPlayer::get_stream, &AudioStreamPlayer::set_stream>("stream")
			.property<&AudioStreamPlayer::get_volume_db, &AudioStreamPlayer::set_volume_db>("volume_db")
			.property<&AudioStreamPlayer::get_pitch_scale, &AudioStreamPlayer::set_pitch_scale>("pitch_scale")
			.property<&AudioStreamPlayer::is_playing>("playing")
			.property<&AudioStreamPlayer::is_autoplay_enabled, &AudioStreamPlayer::set_autoplay>("autoplay")
			.property<&AudioStreamPlayer::get_stream_paused, &AudioStreamPlayer::set_stream_paused>("stream_paused")
			.property<&AudioStreamPlayer::get_mix_target, &AudioStreamPlayer::set_mix_target>("mix_target")
			.property<&AudioStreamPlayer::get_max_polyphony, &AudioStreamPlayer::set_max_polyphony>("max_polyphony")
			.property<&AudioStreamPlayer::get_bus, &AudioStreamPlayer::set_bus>("bus")
			.fun<static_cast<void (AudioStreamPlayer::*)(double)>(&AudioStreamPlayer::play)>("play")
			.fun<static_cast<void (AudioStreamPlayer::*)(double)>(&AudioStreamPlayer::seek)>("seek")
			.fun<static_cast<void (AudioStreamPlayer::*)()>(&AudioStreamPlayer::stop)>("stop")
			.fun<static_cast<double (AudioStreamPlayer::*)()>(&AudioStreamPlayer::get_playback_position)>("get_playback_position")
			.fun<static_cast<bool (AudioStreamPlayer::*)()>(&AudioStreamPlayer::has_stream_playback)>("has_stream_playback")
			.fun<static_cast<Ref<AudioStreamPlayback> (AudioStreamPlayer::*)()>(&AudioStreamPlayer::get_stream_playback)>("get_stream_playback");
}
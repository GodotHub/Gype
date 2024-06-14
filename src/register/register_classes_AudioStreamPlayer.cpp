
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/audio_stream_player.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamPlayer() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<AudioStreamPlayer>("AudioStreamPlayer")
			.constructor<>()
			.base<Node>()
			.property<static_cast<Ref<AudioStream> (AudioStreamPlayer::*)() const>(&AudioStreamPlayer::get_stream), static_cast<void (AudioStreamPlayer::*)(const Ref<AudioStream> &)>(&AudioStreamPlayer::set_stream)>((new std::string("stream"))->c_str())
			.property<static_cast<double (AudioStreamPlayer::*)() const>(&AudioStreamPlayer::get_volume_db), static_cast<void (AudioStreamPlayer::*)(double)>(&AudioStreamPlayer::set_volume_db)>((new std::string("volume_db"))->c_str())
			.property<static_cast<double (AudioStreamPlayer::*)() const>(&AudioStreamPlayer::get_pitch_scale), static_cast<void (AudioStreamPlayer::*)(double)>(&AudioStreamPlayer::set_pitch_scale)>((new std::string("pitch_scale"))->c_str())
			.property<static_cast<bool (AudioStreamPlayer::*)() const>(&AudioStreamPlayer::is_playing)>((new std::string("playing"))->c_str())
			.property<static_cast<bool (AudioStreamPlayer::*)() const>(&AudioStreamPlayer::is_autoplay_enabled), static_cast<void (AudioStreamPlayer::*)(bool)>(&AudioStreamPlayer::set_autoplay)>((new std::string("autoplay"))->c_str())
			.property<static_cast<bool (AudioStreamPlayer::*)() const>(&AudioStreamPlayer::get_stream_paused), static_cast<void (AudioStreamPlayer::*)(bool)>(&AudioStreamPlayer::set_stream_paused)>((new std::string("stream_paused"))->c_str())
			.property<static_cast<AudioStreamPlayer::MixTarget (AudioStreamPlayer::*)() const>(&AudioStreamPlayer::get_mix_target), static_cast<void (AudioStreamPlayer::*)(AudioStreamPlayer::MixTarget)>(&AudioStreamPlayer::set_mix_target)>((new std::string("mix_target"))->c_str())
			.property<static_cast<int32_t (AudioStreamPlayer::*)() const>(&AudioStreamPlayer::get_max_polyphony), static_cast<void (AudioStreamPlayer::*)(int32_t)>(&AudioStreamPlayer::set_max_polyphony)>((new std::string("max_polyphony"))->c_str())
			.property<static_cast<StringName (AudioStreamPlayer::*)() const>(&AudioStreamPlayer::get_bus), static_cast<void (AudioStreamPlayer::*)(const StringName &)>(&AudioStreamPlayer::set_bus)>((new std::string("bus"))->c_str())
			.fun<static_cast<void (AudioStreamPlayer::*)(double)>(&AudioStreamPlayer::play)>((new std::string("play"))->c_str())
			.fun<static_cast<void (AudioStreamPlayer::*)(double)>(&AudioStreamPlayer::seek)>((new std::string("seek"))->c_str())
			.fun<static_cast<void (AudioStreamPlayer::*)()>(&AudioStreamPlayer::stop)>((new std::string("stop"))->c_str())
			.fun<static_cast<double (AudioStreamPlayer::*)()>(&AudioStreamPlayer::get_playback_position)>((new std::string("get_playback_position"))->c_str())
			.fun<static_cast<bool (AudioStreamPlayer::*)()>(&AudioStreamPlayer::has_stream_playback)>((new std::string("has_stream_playback"))->c_str())
			.fun<static_cast<Ref<AudioStreamPlayback> (AudioStreamPlayer::*)()>(&AudioStreamPlayer::get_stream_playback)>((new std::string("get_stream_playback"))->c_str());
	qjs::Value _MixTarget = context->newObject();
	_MixTarget[(new std::string("MIX_TARGET_STEREO"))->c_str()] = AudioStreamPlayer::MixTarget::MIX_TARGET_STEREO;
	_MixTarget[(new std::string("MIX_TARGET_SURROUND"))->c_str()] = AudioStreamPlayer::MixTarget::MIX_TARGET_SURROUND;
	_MixTarget[(new std::string("MIX_TARGET_CENTER"))->c_str()] = AudioStreamPlayer::MixTarget::MIX_TARGET_CENTER;
	_module.add("MixTarget", std::move(_MixTarget));
}
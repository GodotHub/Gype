
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/audio_stream_playback_interactive.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamPlaybackInteractive() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioStreamPlaybackInteractive>("AudioStreamPlaybackInteractive")
			.constructor<>()
			.base<AudioStreamPlayback>()
			.fun<static_cast<void (AudioStreamPlaybackInteractive::*)(const StringName &)>(&AudioStreamPlaybackInteractive::switch_to_clip_by_name)>((new std::string("switch_to_clip_by_name"))->c_str())
			.fun<static_cast<void (AudioStreamPlaybackInteractive::*)(int32_t)>(&AudioStreamPlaybackInteractive::switch_to_clip)>((new std::string("switch_to_clip"))->c_str());
}
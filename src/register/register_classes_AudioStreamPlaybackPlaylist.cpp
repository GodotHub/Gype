#include <godot_cpp/classes/audio_stream_playback_playlist.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioStreamPlaybackPlaylist() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioStreamPlaybackPlaylist>("AudioStreamPlaybackPlaylist")
            .constructor<>()
            .base<AudioStreamPlayback>()
;}
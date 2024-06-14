#include <godot_cpp/classes/audio_stream_playback_synchronized.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioStreamPlaybackSynchronized() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioStreamPlaybackSynchronized>("AudioStreamPlaybackSynchronized")
            .constructor<>()
            .base<AudioStreamPlayback>()
;}
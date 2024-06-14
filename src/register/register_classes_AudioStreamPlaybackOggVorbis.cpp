#include <godot_cpp/classes/audio_stream_playback_ogg_vorbis.hpp>
#include <godot_cpp/classes/audio_stream_playback_resampled.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioStreamPlaybackOggVorbis() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioStreamPlaybackOggVorbis>("AudioStreamPlaybackOggVorbis")
            .constructor<>()
            .base<AudioStreamPlaybackResampled>()
;}
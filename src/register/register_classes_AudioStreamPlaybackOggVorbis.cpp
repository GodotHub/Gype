#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_stream_playback_ogg_vorbis.hpp>

using namespace godot;

void register_classes_AudioStreamPlaybackOggVorbis() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioStreamPlaybackOggVorbis>("AudioStreamPlaybackOggVorbis")
           .constructor<>()
;}
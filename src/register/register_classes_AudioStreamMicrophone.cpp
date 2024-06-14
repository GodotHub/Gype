#include <godot_cpp/classes/audio_stream_microphone.hpp>
#include <godot_cpp/classes/audio_stream.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioStreamMicrophone() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioStreamMicrophone>("AudioStreamMicrophone")
            .constructor<>()
            .base<AudioStream>()
;}
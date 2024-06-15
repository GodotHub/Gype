#include <godot_cpp/classes/audio_stream_polyphonic.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioStreamPolyphonic() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioStreamPolyphonic>("AudioStreamPolyphonic")
            .constructor<>()
            .base<AudioStream>()
            .property<static_cast<int32_t(AudioStreamPolyphonic::*)()const>(&AudioStreamPolyphonic::get_polyphony),static_cast<void(AudioStreamPolyphonic::*)(int32_t)>(&AudioStreamPolyphonic::set_polyphony)>("polyphony")
;}
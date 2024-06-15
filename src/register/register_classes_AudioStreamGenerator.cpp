#include <godot_cpp/classes/audio_stream_generator.hpp>
#include <godot_cpp/classes/audio_stream.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioStreamGenerator() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioStreamGenerator>("AudioStreamGenerator")
            .constructor<>()
            .base<AudioStream>()
            .property<static_cast<double(AudioStreamGenerator::*)()const>(&AudioStreamGenerator::get_mix_rate),static_cast<void(AudioStreamGenerator::*)(double)>(&AudioStreamGenerator::set_mix_rate)>("mix_rate")
            .property<static_cast<double(AudioStreamGenerator::*)()const>(&AudioStreamGenerator::get_buffer_length),static_cast<void(AudioStreamGenerator::*)(double)>(&AudioStreamGenerator::set_buffer_length)>("buffer_length")
;}
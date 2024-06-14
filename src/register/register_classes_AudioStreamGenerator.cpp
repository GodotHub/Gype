#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_generator.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamGenerator() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioStreamGenerator>("AudioStreamGenerator")
			.constructor<>()
			.base<AudioStream>()
			.property<static_cast<double (AudioStreamGenerator::*)() const>(&AudioStreamGenerator::get_mix_rate), static_cast<void (AudioStreamGenerator::*)(double)>(&AudioStreamGenerator::set_mix_rate)>((new std::string("mix_rate"))->c_str())
			.property<static_cast<double (AudioStreamGenerator::*)() const>(&AudioStreamGenerator::get_buffer_length), static_cast<void (AudioStreamGenerator::*)(double)>(&AudioStreamGenerator::set_buffer_length)>((new std::string("buffer_length"))->c_str());
}
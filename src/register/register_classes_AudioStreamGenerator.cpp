#include <godot_cpp/classes/audio_stream_generator.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamGenerator() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioStreamGenerator>("AudioStreamGenerator")
			.constructor<>()
			.property<&AudioStreamGenerator::get_mix_rate, &AudioStreamGenerator::set_mix_rate>("mix_rate")
			.property<&AudioStreamGenerator::get_buffer_length, &AudioStreamGenerator::set_buffer_length>("buffer_length");
}
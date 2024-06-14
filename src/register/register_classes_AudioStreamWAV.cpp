
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_wav.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamWAV() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioStreamWAV>("AudioStreamWAV")
			.constructor<>()
			.base<AudioStream>()
			.property<static_cast<PackedByteArray (AudioStreamWAV::*)() const>(&AudioStreamWAV::get_data), static_cast<void (AudioStreamWAV::*)(const PackedByteArray &)>(&AudioStreamWAV::set_data)>((new std::string("data"))->c_str())
			.property<static_cast<AudioStreamWAV::Format (AudioStreamWAV::*)() const>(&AudioStreamWAV::get_format), static_cast<void (AudioStreamWAV::*)(AudioStreamWAV::Format)>(&AudioStreamWAV::set_format)>((new std::string("format"))->c_str())
			.property<static_cast<AudioStreamWAV::LoopMode (AudioStreamWAV::*)() const>(&AudioStreamWAV::get_loop_mode), static_cast<void (AudioStreamWAV::*)(AudioStreamWAV::LoopMode)>(&AudioStreamWAV::set_loop_mode)>((new std::string("loop_mode"))->c_str())
			.property<static_cast<int32_t (AudioStreamWAV::*)() const>(&AudioStreamWAV::get_loop_begin), static_cast<void (AudioStreamWAV::*)(int32_t)>(&AudioStreamWAV::set_loop_begin)>((new std::string("loop_begin"))->c_str())
			.property<static_cast<int32_t (AudioStreamWAV::*)() const>(&AudioStreamWAV::get_loop_end), static_cast<void (AudioStreamWAV::*)(int32_t)>(&AudioStreamWAV::set_loop_end)>((new std::string("loop_end"))->c_str())
			.property<static_cast<int32_t (AudioStreamWAV::*)() const>(&AudioStreamWAV::get_mix_rate), static_cast<void (AudioStreamWAV::*)(int32_t)>(&AudioStreamWAV::set_mix_rate)>((new std::string("mix_rate"))->c_str())
			.property<static_cast<bool (AudioStreamWAV::*)() const>(&AudioStreamWAV::is_stereo), static_cast<void (AudioStreamWAV::*)(bool)>(&AudioStreamWAV::set_stereo)>((new std::string("stereo"))->c_str())
			.fun<static_cast<Error (AudioStreamWAV::*)(const String &)>(&AudioStreamWAV::save_to_wav)>((new std::string("save_to_wav"))->c_str());
	qjs::Value _Format = context->newObject();
	_Format[(new std::string("FORMAT_8_BITS"))->c_str()] = AudioStreamWAV::Format::FORMAT_8_BITS;
	_Format[(new std::string("FORMAT_16_BITS"))->c_str()] = AudioStreamWAV::Format::FORMAT_16_BITS;
	_Format[(new std::string("FORMAT_IMA_ADPCM"))->c_str()] = AudioStreamWAV::Format::FORMAT_IMA_ADPCM;
	_Format[(new std::string("FORMAT_QOA"))->c_str()] = AudioStreamWAV::Format::FORMAT_QOA;
	_module.add("Format", std::move(_Format));
	qjs::Value _LoopMode = context->newObject();
	_LoopMode[(new std::string("LOOP_DISABLED"))->c_str()] = AudioStreamWAV::LoopMode::LOOP_DISABLED;
	_LoopMode[(new std::string("LOOP_FORWARD"))->c_str()] = AudioStreamWAV::LoopMode::LOOP_FORWARD;
	_LoopMode[(new std::string("LOOP_PINGPONG"))->c_str()] = AudioStreamWAV::LoopMode::LOOP_PINGPONG;
	_LoopMode[(new std::string("LOOP_BACKWARD"))->c_str()] = AudioStreamWAV::LoopMode::LOOP_BACKWARD;
	_module.add("LoopMode", std::move(_LoopMode));
}
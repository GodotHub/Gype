
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_capture.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectCapture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectCapture>("AudioEffectCapture")
			.constructor<>()
			.base<AudioEffect>()
			.property<static_cast<double (AudioEffectCapture::*)()>(&AudioEffectCapture::get_buffer_length), static_cast<void (AudioEffectCapture::*)(double)>(&AudioEffectCapture::set_buffer_length)>((new std::string("buffer_length"))->c_str())
			.fun<static_cast<bool (AudioEffectCapture::*)(int32_t) const>(&AudioEffectCapture::can_get_buffer)>((new std::string("can_get_buffer"))->c_str())
			.fun<static_cast<PackedVector2Array (AudioEffectCapture::*)(int32_t)>(&AudioEffectCapture::get_buffer)>((new std::string("get_buffer"))->c_str())
			.fun<static_cast<void (AudioEffectCapture::*)()>(&AudioEffectCapture::clear_buffer)>((new std::string("clear_buffer"))->c_str())
			.fun<static_cast<int32_t (AudioEffectCapture::*)() const>(&AudioEffectCapture::get_frames_available)>((new std::string("get_frames_available"))->c_str())
			.fun<static_cast<int64_t (AudioEffectCapture::*)() const>(&AudioEffectCapture::get_discarded_frames)>((new std::string("get_discarded_frames"))->c_str())
			.fun<static_cast<int32_t (AudioEffectCapture::*)() const>(&AudioEffectCapture::get_buffer_length_frames)>((new std::string("get_buffer_length_frames"))->c_str())
			.fun<static_cast<int64_t (AudioEffectCapture::*)() const>(&AudioEffectCapture::get_pushed_frames)>((new std::string("get_pushed_frames"))->c_str());
}
#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect_capture.hpp>

using namespace godot;

void register_classes_AudioEffectCapture() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffectCapture>("AudioEffectCapture")
           .constructor<>()
           .property<AudioEffectCapture::get_buffer_length, AudioEffectCapture::set_buffer_length>("buffer_length")
		    .fun<static_cast<bool(AudioEffectCapture::*)(int32_t)const>(&AudioEffectCapture::can_get_buffer)>("can_get_buffer")
		    .fun<static_cast<PackedVector2Array(AudioEffectCapture::*)(int32_t)>(&AudioEffectCapture::get_buffer)>("get_buffer")
		    .fun<static_cast<void(AudioEffectCapture::*)()>(&AudioEffectCapture::clear_buffer)>("clear_buffer")
		    .fun<static_cast<int32_t(AudioEffectCapture::*)()const>(&AudioEffectCapture::get_frames_available)>("get_frames_available")
		    .fun<static_cast<int64_t(AudioEffectCapture::*)()const>(&AudioEffectCapture::get_discarded_frames)>("get_discarded_frames")
		    .fun<static_cast<int32_t(AudioEffectCapture::*)()const>(&AudioEffectCapture::get_buffer_length_frames)>("get_buffer_length_frames")
		    .fun<static_cast<int64_t(AudioEffectCapture::*)()const>(&AudioEffectCapture::get_pushed_frames)>("get_pushed_frames")
;}
#include <godot_cpp/classes/audio_stream_wav.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioStreamWAV() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioStreamWAV>("AudioStreamWAV")
            .constructor<>()
            .base<AudioStream>()
            .property<static_cast<PackedByteArray(AudioStreamWAV::*)()const>(&AudioStreamWAV::get_data),static_cast<void(AudioStreamWAV::*)(const PackedByteArray &)>(&AudioStreamWAV::set_data)>("data")
            .property<static_cast<AudioStreamWAV::Format(AudioStreamWAV::*)()const>(&AudioStreamWAV::get_format),static_cast<void(AudioStreamWAV::*)(AudioStreamWAV::Format)>(&AudioStreamWAV::set_format)>("format")
            .property<static_cast<AudioStreamWAV::LoopMode(AudioStreamWAV::*)()const>(&AudioStreamWAV::get_loop_mode),static_cast<void(AudioStreamWAV::*)(AudioStreamWAV::LoopMode)>(&AudioStreamWAV::set_loop_mode)>("loop_mode")
            .property<static_cast<int32_t(AudioStreamWAV::*)()const>(&AudioStreamWAV::get_loop_begin),static_cast<void(AudioStreamWAV::*)(int32_t)>(&AudioStreamWAV::set_loop_begin)>("loop_begin")
            .property<static_cast<int32_t(AudioStreamWAV::*)()const>(&AudioStreamWAV::get_loop_end),static_cast<void(AudioStreamWAV::*)(int32_t)>(&AudioStreamWAV::set_loop_end)>("loop_end")
            .property<static_cast<int32_t(AudioStreamWAV::*)()const>(&AudioStreamWAV::get_mix_rate),static_cast<void(AudioStreamWAV::*)(int32_t)>(&AudioStreamWAV::set_mix_rate)>("mix_rate")
            .property<static_cast<bool(AudioStreamWAV::*)()const>(&AudioStreamWAV::is_stereo),static_cast<void(AudioStreamWAV::*)(bool)>(&AudioStreamWAV::set_stereo)>("stereo")
            .fun<static_cast<Error(AudioStreamWAV::*)(const String &)>(&AudioStreamWAV::save_to_wav)>("save_to_wav")
;    qjs::Value _Format = context->newObject();
    _Format["FORMAT_8_BITS"] = AudioStreamWAV::Format::FORMAT_8_BITS;
    _Format["FORMAT_16_BITS"] = AudioStreamWAV::Format::FORMAT_16_BITS;
    _Format["FORMAT_IMA_ADPCM"] = AudioStreamWAV::Format::FORMAT_IMA_ADPCM;
    _Format["FORMAT_QOA"] = AudioStreamWAV::Format::FORMAT_QOA;
    _module.add("Format", std::move(_Format));
    qjs::Value _LoopMode = context->newObject();
    _LoopMode["LOOP_DISABLED"] = AudioStreamWAV::LoopMode::LOOP_DISABLED;
    _LoopMode["LOOP_FORWARD"] = AudioStreamWAV::LoopMode::LOOP_FORWARD;
    _LoopMode["LOOP_PINGPONG"] = AudioStreamWAV::LoopMode::LOOP_PINGPONG;
    _LoopMode["LOOP_BACKWARD"] = AudioStreamWAV::LoopMode::LOOP_BACKWARD;
    _module.add("LoopMode", std::move(_LoopMode));
}
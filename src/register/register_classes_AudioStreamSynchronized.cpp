#include <godot_cpp/classes/audio_stream_synchronized.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioStreamSynchronized() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioStreamSynchronized>("AudioStreamSynchronized")
            .constructor<>()
            .base<AudioStream>()
            .static_fun<&AudioStreamSynchronized::MAX_STREAMS>("MAX_STREAMS")
            .property<static_cast<int32_t(AudioStreamSynchronized::*)()const>(&AudioStreamSynchronized::get_stream_count),static_cast<void(AudioStreamSynchronized::*)(int32_t)>(&AudioStreamSynchronized::set_stream_count)>("stream_count")
            .fun<static_cast<void(AudioStreamSynchronized::*)(int32_t,const Ref<AudioStream> &)>(&AudioStreamSynchronized::set_sync_stream)>("set_sync_stream")
            .fun<static_cast<Ref<AudioStream>(AudioStreamSynchronized::*)(int32_t)const>(&AudioStreamSynchronized::get_sync_stream)>("get_sync_stream")
            .fun<static_cast<void(AudioStreamSynchronized::*)(int32_t,double)>(&AudioStreamSynchronized::set_sync_stream_volume)>("set_sync_stream_volume")
            .fun<static_cast<double(AudioStreamSynchronized::*)(int32_t)const>(&AudioStreamSynchronized::get_sync_stream_volume)>("get_sync_stream_volume")
;}
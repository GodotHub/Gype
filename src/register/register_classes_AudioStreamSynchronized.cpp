
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_synchronized.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamSynchronized() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioStreamSynchronized>("AudioStreamSynchronized")
			.constructor<>()
			.base<AudioStream>()
			.static_fun<&AudioStreamSynchronized::MAX_STREAMS>((new std::string("MAX_STREAMS"))->c_str())
			.property<static_cast<int32_t (AudioStreamSynchronized::*)() const>(&AudioStreamSynchronized::get_stream_count), static_cast<void (AudioStreamSynchronized::*)(int32_t)>(&AudioStreamSynchronized::set_stream_count)>((new std::string("stream_count"))->c_str())
			.fun<static_cast<void (AudioStreamSynchronized::*)(int32_t, const Ref<AudioStream> &)>(&AudioStreamSynchronized::set_sync_stream)>((new std::string("set_sync_stream"))->c_str())
			.fun<static_cast<Ref<AudioStream> (AudioStreamSynchronized::*)(int32_t) const>(&AudioStreamSynchronized::get_sync_stream)>((new std::string("get_sync_stream"))->c_str())
			.fun<static_cast<void (AudioStreamSynchronized::*)(int32_t, double)>(&AudioStreamSynchronized::set_sync_stream_volume)>((new std::string("set_sync_stream_volume"))->c_str())
			.fun<static_cast<double (AudioStreamSynchronized::*)(int32_t) const>(&AudioStreamSynchronized::get_sync_stream_volume)>((new std::string("get_sync_stream_volume"))->c_str());
}
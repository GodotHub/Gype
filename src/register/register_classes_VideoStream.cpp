#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/video_stream.hpp>
#include <godot_cpp/classes/video_stream_playback.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VideoStream() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<VideoStream>("VideoStream")
			.constructor<>()
			.property<&VideoStream::get_file, &VideoStream::set_file>("file")
			.fun<static_cast<Ref<VideoStreamPlayback> (VideoStream::*)()>(&VideoStream::_instantiate_playback)>("_instantiate_playback");
}
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/video_stream.hpp>
#include <godot_cpp/classes/video_stream_playback.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VideoStream() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<VideoStream>("VideoStream")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<String (VideoStream::*)()>(&VideoStream::get_file), static_cast<void (VideoStream::*)(const String &)>(&VideoStream::set_file)>((new std::string("file"))->c_str())
			.fun<static_cast<Ref<VideoStreamPlayback> (VideoStream::*)()>(&VideoStream::_instantiate_playback)>((new std::string("_instantiate_playback"))->c_str());
}
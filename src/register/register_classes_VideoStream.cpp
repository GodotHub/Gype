#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/video_stream.hpp>

using namespace godot;

void register_classes_VideoStream() {
    qjs::Context::Module &_module = _General;
    _module.class_<VideoStream>("VideoStream")
           .constructor<>()
           .property<VideoStream::get_file, VideoStream::set_file>("file")
		    .fun<static_cast<Ref<VideoStreamPlayback>(VideoStream::*)()>(&VideoStream::_instantiate_playback)>("_instantiate_playback")
;}
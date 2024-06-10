#include "register/register_classes.h"
#include <godot_cpp/classes/video_stream_playback.hpp>

using namespace godot;

void register_classes_VideoStreamPlaybackRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<VideoStreamPlayback>>("VideoStreamPlaybackRef").constructor<VideoStreamPlayback *>();
}
#include "register/register_classes.h"
#include <godot_cpp/classes/video_stream.hpp>

using namespace godot;

void register_classes_VideoStreamRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<VideoStream>>("VideoStreamRef").constructor<VideoStream *>();
}
#include <godot_cpp/classes/video_stream_theora.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VideoStreamTheora() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<VideoStreamTheora>("VideoStreamTheora")
			.constructor<>();
}
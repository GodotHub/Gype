#include "register/register_classes.h"
#include <godot_cpp/classes/video_stream_theora.hpp>

using namespace godot;

void register_classes_VideoStreamTheoraRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<VideoStreamTheora>>("VideoStreamTheoraRef").constructor<VideoStreamTheora *>();
}
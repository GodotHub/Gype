#include "register/register_classes.h"
#include <godot_cpp/classes/camera_feed.hpp>

using namespace godot;

void register_classes_CameraFeedRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CameraFeed>>("CameraFeedRef").constructor<CameraFeed *>();
}
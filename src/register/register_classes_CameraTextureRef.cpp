#include "register/register_classes.h"
#include <godot_cpp/classes/camera_texture.hpp>

using namespace godot;

void register_classes_CameraTextureRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CameraTexture>>("CameraTextureRef").constructor<CameraTexture *>();
}